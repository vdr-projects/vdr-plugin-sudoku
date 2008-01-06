/*
 * Sudoku: A plug-in for the Video Disk Recorder
 *
 * Copyright (C) 2005-2007, Thomas G�nther <tom@toms-cafe.de>
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License along
 * with this program; if not, write to the Free Software Foundation, Inc.,
 * 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA.
 *
 * $Id: menu.cpp 110 2008-01-06 23:32:09Z tom $
 */

#include "menu.h"
#include "puzzle.h"
#include "setup.h"
#include "bitmap.h"
#include "i18n.h"
#include <vdr/config.h>
#include <vdr/osdbase.h>
#include <vdr/osd.h>
#include <vdr/font.h>

using namespace SudokuPlugin;
using namespace Sudoku;


// Definitions for grid structure
#define CELL_SIZE       42
#define CELL_POS(i)     ((i) * (CELL_SIZE + 2) + (i)/RDIM * 3 + 5)
#define GRID_SIZE       (DIM * (CELL_SIZE + 2) + DIM/RDIM * 3 + 5)

// Definitions for grid colors
#define TRANS(c,t)      tColor(((c) & 0x00FFFFFF) | (0xFF * (100-(t))/100)<<24)
#define GRID_COLOR      clrWhite
#define CURSUR_COLOR    clrBlue
#define NUMBER_FG       clrWhite
#define NUMBER_BG       clrBlack
#define ERROR_FG        clrWhite
#define ERROR_BG        clrRed
#define AMBIG_FG        clrWhite
#define AMBIG_BG        clrMagenta
#define MARKED_FG       clrWhite
#define MARKED_BG       clrGreen
#define GIVEN_FG        clrBlack
#define GIVEN_BG        clrCyan
#define POSSIBLE_FG     clrBlack
#define POSSIBLE_BG(n)  (((n) % 2) ? clrYellow : 0xFF8C00 /* darkorange */)


//--- class SudokuPlugin::Menu -------------------------------------------------

/** Constructor */
Menu::Menu(const SetupData& setup, Puzzle& puzzle, Pos& curr) :
  cOsdObject(true), setup(setup), puzzle(puzzle), curr(curr)
{
  xPos = (720 - GRID_SIZE) / 2;
  yPos = (576 - GRID_SIZE) / 2;
  osd = NULL;
  info = NULL;
  infoText = NULL;
  new_puzzle_request = false;
#if VDRVERSNUM >= 10504
  mini_font = cFont::CreateFont(Setup.FontOsd, 3 * CELL_SIZE / RDIM / 4,
                                CELL_SIZE / RDIM);
#else
  mini_font = NULL;
#endif
}

/** Destructor */
Menu::~Menu()
{
#if VDRVERSNUM >= 10504
  delete mini_font;
#endif
  delete info;
  delete osd;
}

/** Display the menu on the OSD. */
void Menu::Show()
{
  int x1 = xPos,                 y1 = yPos;
  int x2 = xPos + GRID_SIZE - 1, y2 = yPos + GRID_SIZE -1;

  osd = cOsdProvider::NewOsd(0, 0);
  if (osd)
  {
    tArea area = { x1, y1, x2, y2, 4 };
    osd->SetAreas(&area, 1);
    paint();
  }
}

/** Process user events. */
eOSState Menu::ProcessKey(eKeys key)
{
  eOSState state = cOsdObject::ProcessKey(key);
  if (state == osUnknown)
  {
    if (key == kBack)
      return osEnd;
    if (new_puzzle_request)
    {
      if (key == kOk)
      {
        new_puzzle_request = false;
        puzzle.generate(setup.givens_count, setup.symmetric);
      }
    }
    else
    {
      switch (key)
      {
        case kLeft:
        case kLeft|k_Repeat:
          curr = curr.prev_col();
          break;
        case kRight:
        case kRight|k_Repeat:
          curr = curr.next_col();
          break;
        case kUp:
        case kUp|k_Repeat:
          curr = curr.prev_row();
          break;
        case kDown:
        case kDown|k_Repeat:
          curr = curr.next_row();
          break;
        case k0:
        case k1:
        case k2:
        case k3:
        case k4:
        case k5:
        case k6:
        case k7:
        case k8:
        case k9:
          puzzle.set(curr, key - k0);
          break;
        case kRed:
          puzzle.set(curr, puzzle.next_number(curr));
          break;
        case kGreen:
          puzzle.toggle_mark(curr);
          break;
        case kYellow:
          if (puzzle.next_free(curr) <= Pos::last())
            curr = puzzle.next_free(curr);
          break;
        case kBlue:
          if (puzzle.untouched())
            puzzle.generate(setup.givens_count, setup.symmetric);
          else
            puzzle.reset(setup.clear_marks);
          break;
        default:
          return osContinue;
      }
    }
    if (puzzle.solved())
    {
      new_puzzle_request = true;
      infoText = tr("Congratulations!\nPress OK to start a new puzzle");
    }
    paint();
    state = osContinue;
  }
  return state;
}

/** Paint all pieces of the menu. */
void Menu::paint()
{
  int trans = setup.transparency;
  tColor fg, bg = TRANS(GRID_COLOR, trans);
  int x1 = xPos,                 y1 = yPos;
  int x2 = xPos + GRID_SIZE - 1, y2 = yPos + GRID_SIZE -1;

  // Save and restore palette to reduce flickering.
  cPalette savePalette(*osd->GetBitmap(0));
  osd->DrawRectangle(x1, y1, x2, y2, bg);
  osd->SetPalette(savePalette, 0);

  // Paint all cells.
  for (Pos p = Pos::first(); p <= Pos::last(); p = p.next())
  {
    fg = NUMBER_FG, bg = NUMBER_BG;
    if (puzzle.given(p))
      fg = GIVEN_FG, bg = GIVEN_BG;
    else if (puzzle.marked(p))
      fg = MARKED_FG, bg = MARKED_BG;
    else if (setup.mark_errors && puzzle.error(p))
      fg = ERROR_FG, bg = ERROR_BG;
    else if (setup.mark_ambiguous && puzzle.ambiguous(p))
      fg = AMBIG_FG, bg = AMBIG_BG;
    fg = TRANS(fg, trans);
    bg = TRANS(bg, trans);

    // Paint the background of the cell.
    x1 = xPos + CELL_POS(p.col()), y1 = yPos + CELL_POS(p.row());
    x2 = x1   + CELL_SIZE - 1,     y2 = y1   + CELL_SIZE - 1;
    osd->DrawRectangle(x1, y1, x2, y2, bg);

    // Paint the content of the cell.
    if (puzzle.get(p) != 0)
    {
      char txt[2] = { '0' + puzzle.get(p), 0 };
      const cFont* font = cFont::GetFont(fontFix);
      osd->DrawText(x1, y1, txt, fg, bg, font, CELL_SIZE, CELL_SIZE, taCenter);
    }
    else if (setup.show_possibles_pattern || setup.show_possibles_digits)
    {
      for (unsigned int n = 1; n <= DIM; ++n)
      {
        if (puzzle.possible_number(p, n))
        {
          int x3 = x1 + (((n - 1) % RDIM) * CELL_SIZE) / RDIM;
          int y3 = y1 + (((n - 1) / RDIM) * CELL_SIZE) / RDIM;
          int x4 = x1 + (((n - 1) % RDIM + 1) * CELL_SIZE) / RDIM - 1;
          int y4 = y1 + (((n - 1) / RDIM + 1) * CELL_SIZE) / RDIM - 1;

          if (setup.show_possibles_pattern)
          {
            fg = TRANS(POSSIBLE_FG, trans);
            bg = TRANS(POSSIBLE_BG(n), trans);
            osd->DrawRectangle(x3, y3, x4, y4, bg);
          }

#if VDRVERSNUM >= 10504
          if (setup.show_possibles_digits)
          {
            char txt[2] = { '0' + n, 0 };
            osd->DrawText(x3, y3, txt, fg, bg, mini_font,
                          CELL_SIZE / RDIM, CELL_SIZE / RDIM, taCenter);
          }
#endif
        }
      }
    }
  }

  // Paint the cursor.
  bg = TRANS(CURSUR_COLOR, trans);
  x1 = xPos + CELL_POS(curr.col()), y1 = yPos + CELL_POS(curr.row());
  x2 = x1   + CELL_SIZE - 1,        y2 = y1   + CELL_SIZE - 1;
  osd->DrawRectangle(x1 - 5, y1 - 5, x2,     y1,     bg);
  osd->DrawRectangle(x1 - 5, y1,     x1,     y2 + 5, bg);
  osd->DrawRectangle(x1,     y2,     x2 + 5, y2 + 5, bg);
  osd->DrawRectangle(x2,     y1 - 5, x2 + 5, y2,     bg);

  // Paint info window.
  if (infoText)
  {
    if (!info)
      info = new Bitmap(GRID_SIZE - 20, 60);
    info->text(infoText);
    osd->DrawBitmap(xPos + 10, yPos + 10, *info);
    infoText = NULL;
  }

  osd->Flush();
}
