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
#include "../history.h"
#include "../puzzle.h"

using namespace Sudoku;

class Test_History : public CxxTest::TestSuite
{
public:
  void test_HistoryEmpty()
  {
    History history;
    TS_ASSERT(!history.movesExecuted());
    TS_ASSERT(!history.movesToExecute());
    history.backward();
    TS_ASSERT(!history.movesExecuted());
    TS_ASSERT(!history.movesToExecute());
    history.forward();
    TS_ASSERT(!history.movesExecuted());
    TS_ASSERT(!history.movesToExecute());
    history.reset();
    TS_ASSERT(!history.movesExecuted());
    TS_ASSERT(!history.movesToExecute());
  }

  void test_HistoryNull()
  {
    History history;
    TS_ASSERT_EQUALS(history.current(), (Move*)0);
    history.add(0);
    TS_ASSERT(!history.movesExecuted());
    TS_ASSERT(!history.movesToExecute());
  }

  void test_HistoryAdd()
  {
    History history;
    PuzzleGame puzzle;

    SetMove* move1 = new SetMove(puzzle, 1);
    history.add(move1);
    TS_ASSERT_EQUALS(history.current(), move1);
    TS_ASSERT(history.movesExecuted());
    TS_ASSERT(!history.movesToExecute());

    SetMove* move2 = new SetMove(puzzle, 2);
    history.add(move2);
    TS_ASSERT_EQUALS(history.current(), move2);
    TS_ASSERT(history.movesExecuted());
    TS_ASSERT(!history.movesToExecute());

    history.backward();
    TS_ASSERT_EQUALS(history.current(), move1);
    TS_ASSERT(history.movesExecuted());
    TS_ASSERT(history.movesToExecute());

    history.forward();
    TS_ASSERT_EQUALS(history.current(), move2);
    TS_ASSERT(history.movesExecuted());
    TS_ASSERT(!history.movesToExecute());

    history.backward();
    TS_ASSERT_EQUALS(history.current(), move1);
    TS_ASSERT(history.movesExecuted());
    TS_ASSERT(history.movesToExecute());

    SetMove* move3 = new SetMove(puzzle, 3);
    history.add(move3);
    TS_ASSERT_EQUALS(history.current(), move3);
    TS_ASSERT(history.movesExecuted());
    TS_ASSERT(!history.movesToExecute());

    history.backward();
    TS_ASSERT_EQUALS(history.current(), move1);
    TS_ASSERT(history.movesExecuted());
    TS_ASSERT(history.movesToExecute());

    history.backward();
    TS_ASSERT_EQUALS(history.current(), (Move*)0);
    TS_ASSERT(!history.movesExecuted());
    TS_ASSERT(history.movesToExecute());
  }

  void test_SetMove()
  {
    PuzzleGame puzzle;
    SetMove move = SetMove(puzzle, 9);
    Pos pos = puzzle.get_pos();
    TS_ASSERT_EQUALS(puzzle.get(pos), 0u);
    move.execute();
    TS_ASSERT_EQUALS(puzzle.get(pos), 9u);
    move.takeBack();
    TS_ASSERT_EQUALS(puzzle.get(pos), 0u);
  }
};
