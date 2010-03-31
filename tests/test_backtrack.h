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
#include "../backtrack.h"

using namespace BackTrack;

template<typename Type, unsigned int Size>
  class Permutation : public Solution
  {
    Type (&list)[Size];
  public:
    Permutation(Type (&list)[Size]) : list(list) {}
    virtual void set_first_at(unsigned int level) { list[level] = (Type)0; }
    virtual void set_next_at(unsigned int level) { ++list[level]; }
    virtual void reset_at(unsigned int level) {}
    virtual bool is_last_at(unsigned int level) const
    {
      return list[level] >= (Type)Size-1;
    }
    virtual bool is_valid_at(int level) const
    {
      for (int idx = 0; idx < level; ++idx)
        if (list[idx] == list[level])
          return false;
      return true;
    }
    virtual bool is_last_level(int level) const { return level >= int(Size)-1; }
  };

class Test_BackTrack : public CxxTest::TestSuite
{
public:
  void test_PermutationBackTrack()
  {
    int list[3];
    Permutation<int, 3> perm(list);
    Algorithm algorithm(perm);
    algorithm.find_next_solution();

    bool first_permutation = algorithm.solution_is_valid();
    TS_ASSERT(first_permutation);
    TS_ASSERT_EQUALS(list[0], 0);
    TS_ASSERT_EQUALS(list[1], 1);
    TS_ASSERT_EQUALS(list[2], 2);
    algorithm.find_next_solution();

    bool second_permutation = algorithm.solution_is_valid();
    TS_ASSERT(second_permutation);
    TS_ASSERT_EQUALS(list[0], 0);
    TS_ASSERT_EQUALS(list[1], 2);
    TS_ASSERT_EQUALS(list[2], 1);
    algorithm.find_next_solution();

    bool third_permutation = algorithm.solution_is_valid();
    TS_ASSERT(third_permutation);
    TS_ASSERT_EQUALS(list[0], 1);
    TS_ASSERT_EQUALS(list[1], 0);
    TS_ASSERT_EQUALS(list[2], 2);
    algorithm.find_next_solution();

    bool fourth_permutation = algorithm.solution_is_valid();
    TS_ASSERT(fourth_permutation);
    TS_ASSERT_EQUALS(list[0], 1);
    TS_ASSERT_EQUALS(list[1], 2);
    TS_ASSERT_EQUALS(list[2], 0);
    algorithm.find_next_solution();

    bool fifth_permutation = algorithm.solution_is_valid();
    TS_ASSERT(fifth_permutation);
    TS_ASSERT_EQUALS(list[0], 2);
    TS_ASSERT_EQUALS(list[1], 0);
    TS_ASSERT_EQUALS(list[2], 1);
    algorithm.find_next_solution();

    bool sixth_permutation = algorithm.solution_is_valid();
    TS_ASSERT(sixth_permutation);
    TS_ASSERT_EQUALS(list[0], 2);
    TS_ASSERT_EQUALS(list[1], 1);
    TS_ASSERT_EQUALS(list[2], 0);
    algorithm.find_next_solution();

    bool too_many_permutations = algorithm.solution_is_valid();
    TS_ASSERT(!too_many_permutations);
  }
};
