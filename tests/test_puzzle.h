/*
 * Sudoku: A plug-in for the Video Disk Recorder
 *
 * Copyright (C) 2010, Thomas Günther <tom@toms-cafe.de>
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
 */

#include <cxxtest/TestSuite.h>
#include "../puzzle.h"

using namespace Sudoku;

class Test_Puzzle : public CxxTest::TestSuite
{
public:
  void test_Pos()
  {
    Pos pos;
    TS_ASSERT_EQUALS(pos, Pos::first());
    TS_ASSERT_EQUALS(pos, 0u);
    TS_ASSERT_EQUALS(pos.col(), 0u);
    TS_ASSERT_EQUALS(pos.row(), 0u);
    TS_ASSERT_EQUALS(pos.reg(), 0u);
    TS_ASSERT_EQUALS(pos, Pos(0, 0));

    TS_ASSERT_EQUALS(pos.prev_col(), pos);
    TS_ASSERT_EQUALS(pos.prev_row(), pos);

    TS_ASSERT_EQUALS(pos.next(), Pos(1, 0));
    TS_ASSERT_EQUALS(pos.next_col(), Pos(1, 0));
    TS_ASSERT_EQUALS(pos.next_row(), Pos(0, 1));

    pos = pos.symmetric();
    TS_ASSERT_EQUALS(pos, Pos::last());
    TS_ASSERT_EQUALS(pos, 80u);
    TS_ASSERT_EQUALS(pos.col(), 8u);
    TS_ASSERT_EQUALS(pos.row(), 8u);
    TS_ASSERT_EQUALS(pos.reg(), 8u);
    TS_ASSERT_EQUALS(pos, Pos(8, 8));

    TS_ASSERT_EQUALS(pos.next(), Pos::last()+1);
    TS_ASSERT_EQUALS(pos.next_col(), pos);
    TS_ASSERT_EQUALS(pos.next_row(), pos);

    TS_ASSERT_EQUALS(pos.prev_col(), Pos(7, 8));
    TS_ASSERT_EQUALS(pos.prev_row(), Pos(8, 7));

    pos = Pos(0, 4);
    TS_ASSERT_EQUALS(pos.prev_col(), pos);
    pos = Pos(4, 0);
    TS_ASSERT_EQUALS(pos.prev_row(), pos);
    pos = Pos(4, 8);
    TS_ASSERT_EQUALS(pos.next_row(), pos);
    pos = Pos(8, 4);
    TS_ASSERT_EQUALS(pos.next_col(), pos);
    TS_ASSERT_EQUALS(pos.next(), Pos(0, 5));

    pos = Pos::center();
    TS_ASSERT_EQUALS(pos, 40u);
    TS_ASSERT_EQUALS(pos.col(), 4u);
    TS_ASSERT_EQUALS(pos.row(), 4u);
    TS_ASSERT_EQUALS(pos.reg(), 4u);
    TS_ASSERT_EQUALS(pos, Pos(4, 4));

    pos = pos.next().next_col().next_row();
    TS_ASSERT_EQUALS(pos, Pos(6, 5));
    TS_ASSERT_EQUALS(pos, 51u);
    TS_ASSERT_EQUALS(pos.col(), 6u);
    TS_ASSERT_EQUALS(pos.row(), 5u);
    TS_ASSERT_EQUALS(pos.reg(), 5u);

    pos = pos.prev_col().prev_row();
    TS_ASSERT_EQUALS(pos, Pos(5, 4));

    for (Pos p = Pos::first(); p <= Pos::last(); p = p.next())
      if (p == pos)
        { TS_ASSERT(!p.interacts_with(pos)); }
      else if (p.col() == pos.col())
        { TS_ASSERT(p.interacts_with(pos)); }
      else if (p.row() == pos.row())
        { TS_ASSERT(p.interacts_with(pos)); }
      else if (p.reg() == pos.reg())
        { TS_ASSERT(p.interacts_with(pos)); }
      else
        { TS_ASSERT(!p.interacts_with(pos)); }
  }

  void test_NumbersEmptyDump()
  {
    Numbers numbers;
    const char dump[] = "_________+"
                        "_________+"
                        "_________+"
                        "_________+"
                        "_________+"
                        "_________+"
                        "_________+"
                        "_________+"
                        "_________";
    TS_ASSERT_SAME_DATA(numbers.get_dump(), dump, sizeof(dump));
  }

  void test_NumbersConstruct()
  {
    const char dump[] = "________9+"
                        "_______8_+"
                        "______7__+"
                        "_____6___+"
                        "____5____+"
                        "___4_____+"
                        "__3______+"
                        "_2_______+"
                        "1________";
    Numbers numbers(dump);
    for (Pos p = Pos::first(); p <= Pos::last(); p = p.next())
      if (p.col() == DIM - 1 - p.row())
        { TS_ASSERT_EQUALS(numbers.get(p), p.col()+1); }
      else
        { TS_ASSERT_EQUALS(numbers.get(p), 0u); }
    TS_ASSERT_SAME_DATA(numbers.get_dump(), dump, sizeof(dump));
  }

  void test_NumbersSetGet()
  {
    Numbers numbers;
    numbers.set(Pos(0, 0), 1);
    numbers.set(Pos(1, 1), 2);
    numbers.set(Pos(2, 2), 3);
    numbers.set(Pos(3, 3), 4);
    numbers.set(Pos(4, 4), 5);
    numbers.set(Pos(5, 5), 6);
    numbers.set(Pos(6, 6), 7);
    numbers.set(Pos(7, 7), 8);
    numbers.set(Pos(8, 8), 9);
    for (Pos p = Pos::first(); p <= Pos::last(); p = p.next())
      if (p.col() == p.row())
        { TS_ASSERT_EQUALS(numbers.get(p), p.col()+1); }
      else
        { TS_ASSERT_EQUALS(numbers.get(p), 0u); }
  }

  void test_PuzzleEmpty()
  {
    Puzzle puzzle;
    for (Pos p = Pos::first(); p <= Pos::last(); p = p.next())
    {
      TS_ASSERT_EQUALS(puzzle.get(p), 0u);
      TS_ASSERT(!puzzle.given(p));
    }
  }

  void test_PuzzleNumbers()
  {
    const char dump[] = "________9+"
                        "_______8_+"
                        "______7__+"
                        "_____6___+"
                        "____5____+"
                        "___4_____+"
                        "__3______+"
                        "_2_______+"
                        "1________";
    Numbers numbers(dump);
    Puzzle puzzle(dump);
    for (Pos p = Pos::first(); p <= Pos::last(); p = p.next())
    {
      TS_ASSERT_EQUALS(puzzle.get(p), numbers.get(p));
      TS_ASSERT_EQUALS(puzzle.given(p), numbers.get(p) != 0u);
    }
  }
};
