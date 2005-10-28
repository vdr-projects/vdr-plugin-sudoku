/*
 * Sudoku: A plugin for the Video Disk Recorder
 *
 * See the README file for copyright information and how to reach the author.
 *
 * $Id: bitmap.h 11 2005-10-28 01:00:01Z tom $
 */

#ifndef VDR_SUDOKU_BITMAP_H
#define VDR_SUDOKU_BITMAP_H

#include "sudoku.h"
#include <vdr/config.h>
#include <vdr/osdbase.h>
#include <vdr/osd.h>

// Compatibility to older vdr versions
#if VDRVERSNUM < 10307
  #define tColor eDvbColor
#endif


namespace SudokuPlugin
{

  //--- class SudokuPlugin::Bitmap ---------------------------------------------

  /** Plugin-specific version of the bitmap class */
  class Bitmap : public cBitmap
  {
  public:

    /** Constructor */
    Bitmap(int width, int height);

    /** Constructor for a bitmap with frame */
    Bitmap(int width, int height, tColor frameColor, tColor backgroundColor);

    /** Write a text into the bitmap. */
    void text(const char* text, bool centered = true);

    /** Draw a frame into the bitmap. */
    void frame(int x1, int y1, int x2, int y2, tColor frameColor);

#if VDRVERSNUM < 10307
    /** Wrap the text to fit into the bitmap (taken from font.c / VDR 1.3.7). */
    char *textWrapper(const char *Text, int *p_lines);
#endif
  };

} // namespace SudokuPlugin

#endif // VDR_SUDOKU_BITMAP_H
