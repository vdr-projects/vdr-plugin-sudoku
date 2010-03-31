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
#include "../generator.h"
#include "../solver.h"

using namespace Sudoku;

class Test_Generator : public CxxTest::TestSuite
{
public:
  void test_GenerateSymmetricSudoku()
  {
    // Generate a random Sudoku with 36 symmetric givens.
    Puzzle puzzle;
    Generator generator(puzzle, 36);
    generator.find_next_solution();
    TS_ASSERT(generator.solution_is_valid());

    // Solve the generated Sudoku.
    Solver solver(puzzle);
    solver.find_next_solution();
    TS_ASSERT(solver.solution_is_valid());
    solver.find_next_solution();
    bool only_one_solution = !solver.solution_is_valid();
    TS_ASSERT(only_one_solution);
  }

  void test_GenerateNonSymmetricSudoku()
  {
    // Generate a random Sudoku with 26 non-symmetric givens.
    Puzzle puzzle;
    Generator generator(puzzle, 26, false);
    generator.find_next_solution();
    TS_ASSERT(generator.solution_is_valid());

    // Solve the generated Sudoku.
    Solver solver(puzzle);
    solver.find_next_solution();
    TS_ASSERT(solver.solution_is_valid());
    solver.find_next_solution();
    bool only_one_solution = !solver.solution_is_valid();
    TS_ASSERT(only_one_solution);
  }
};
