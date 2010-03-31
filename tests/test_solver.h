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
#include "../solver.h"

using namespace Sudoku;

class Test_Solver : public CxxTest::TestSuite
{
public:
  void test_SearchFirstSudoku()
  {
    Puzzle puzzle;
    Solver solver(puzzle);
    solver.find_next_solution();
    TS_ASSERT(solver.solution_is_valid());
    const char dump[] = "_________+"
                        "_________+"
                        "_________+"
                        "_________+"
                        "_________+"
                        "_________+"
                        "_________+"
                        "_________+"
                        "_________:"
                        "123456789+"
                        "456789123+"
                        "789123456+"
                        "231674895+"
                        "875912364+"
                        "694538217+"
                        "317265948+"
                        "542897631+"
                        "968341572:"
                        "_________+"
                        "_________+"
                        "_________+"
                        "_________+"
                        "_________+"
                        "_________+"
                        "_________+"
                        "_________+"
                        "_________";
    TS_ASSERT_SAME_DATA(puzzle.get_dump(), dump, sizeof(dump));
    solver.find_next_solution();
    bool more_than_one_solution = solver.solution_is_valid();
    TS_ASSERT(more_than_one_solution);
  }

  void test_SearchRandomSudoku()
  {
    Puzzle puzzle;
    Solver solver(puzzle, true);
    solver.find_next_solution();
    TS_ASSERT(solver.solution_is_valid());
  }

  void test_SolveHardSudoku()
  {
    // Hardest Sudoku from sudokusolver.co.uk (nologic, score 80197, 77 guesses)
    Puzzle puzzle("1____7_9_+"
                  "_3__2___8+"
                  "__96__5__+"
                  "__53__9__+"
                  "_1__8___2+"
                  "6____4___+"
                  "3______1_+"
                  "_4______7+"
                  "__7___3__");
    Solver solver(puzzle);
    solver.find_next_solution();
    TS_ASSERT(solver.solution_is_valid());
    const char dump[] = "1____7_9_+"
                        "_3__2___8+"
                        "__96__5__+"
                        "__53__9__+"
                        "_1__8___2+"
                        "6____4___+"
                        "3______1_+"
                        "_4______7+"
                        "__7___3__:"
                        "162857493+"
                        "534129678+"
                        "789643521+"
                        "475312986+"
                        "913586742+"
                        "628794135+"
                        "356478219+"
                        "241935867+"
                        "897261354:"
                        "_________+"
                        "_________+"
                        "_________+"
                        "_________+"
                        "_________+"
                        "_________+"
                        "_________+"
                        "_________+"
                        "_________";
    TS_ASSERT_SAME_DATA(puzzle.get_dump(), dump, sizeof(dump));
    solver.find_next_solution();
    bool only_one_solution = !solver.solution_is_valid();
    TS_ASSERT(only_one_solution);
  }
};
