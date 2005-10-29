/*
 * Sudoku: A plugin for the Video Disk Recorder
 *
 * See the README file for copyright information and how to reach the author.
 *
 * $Id: backtrack.h 14 2005-10-29 14:08:06Z tom $
 */

#ifndef VDR_SUDOKU_BACKTRACK_H
#define VDR_SUDOKU_BACKTRACK_H

#include "sudoku.h"


/** Generic backtracking algorithm
 *
 * Inspired by an article by Roger Labbe "Solving Combinatorial Problems with
 * STL and Backtracking" in C/C++-Users Journal, February 2000, pp. 56-64.
 *
 * The solution to a combinatorial problem can be described as a sequence of
 * decisions. The backtracking algorithm traverses the decision tree
 * depth-first. Each solution of the problem is a path through the tree from the
 * root to one leaf. The algorithm traverses the tree by changing the elements
 * of the solution. An element passes through all siblings on a certain level,
 * i.e. through all possible decisions. Each step is checked if it makes the
 * solution invalid, in which case the traversal of the whole branch is
 * cancelled. Otherwise the algorithm either goes one level deeper or if this is
 * the last level it has found one valid solution. After the last sibling on a
 * level has been processed the algorithm goes back one level. Finally all valid
 * solutions have been found if it comes back to the root node.
 *
 * This implementation of the backtracking algorithm consists of two classes.
 * The Algorithm class contains the generic backtracking algorithm itself. The
 * Solution class is the virtual base class for all specific solution classes.
 * To solve a certain problem the specific solution class has to inherit from
 * Solution implementing all virtual methods.
 *
 * Example:
 *
 * \code
 * class ColorStatesList : public Solution
 * {
 *   int clist[NUMBER_STATES];
 *   void set_first_at(unsigned int level) { clist[level] = 0; }
 *   void set_next_at(unsigned int level) { ++clist[level]; }
 *   void reset_at(unsigned int level) {}
 *   bool is_last_at(unsigned int level) { return clist[level] >= LAST_COLOR; }
 *   bool is_valid_at(int level) { return check_all_neighbors_until(level); }
 *   bool is_last_level(int level) [ return level >= NUMBER_STATES-1; }
 *   ...
 * };
 *
 * void find_all_solutions()
 * {
 *   ColorStatesList color_states_list(...);
 *   Algorithm algorithm(color_states_list);
 *   algorithm.find_next_solution();
 *   while (algorithm.solution_is_valid())
 *   {
 *     // Do something with the solution.
 *     ...
 *     algorithm.find_next_solution();
 *   }
 * }
 * \endcode
 */
namespace BackTrack
{

  //--- virtual base class BackTrack::Solution ---------------------------------

  /** Virtual base class of solutions for the backtracking algorithm */
  class Solution
  {
  public:

    /** Destructor */
    virtual ~Solution() {};

    /** Set the element to the first sibling. */
    virtual void set_first_at(unsigned int level) = 0;

    /** Set the element to the next sibling. */
    virtual void set_next_at(unsigned int level) = 0;

    /** Reset the element. */
    virtual void reset_at(unsigned int level) = 0;

    /** Check if the element is set to the last sibling. */
    virtual bool is_last_at(unsigned int level) const = 0;

    /** Check if the element is valid (following elements ignored). */
    virtual bool is_valid_at(int level) const = 0;

    /** Check if the level is the last possible level. */
    virtual bool is_last_level(int level) const = 0;
  };


  //--- class BackTrack::Algorithm ---------------------------------------------

  /** Implementation of a generic backtracking algorithm */
  class Algorithm
  {
    Solution& solution;
    bool first;
    bool valid;
    int level;
    unsigned int max_iter, iter;

  public:

    /** Constructor
     *
     * Constructs an backtracking algorithm to solve a problem. The problem is
     * implemented in 'solution' which represents a path through the decision
     * tree from the root to one leaf.
     */
    Algorithm(Solution& solution, unsigned int max_iter = 0);

    /** Find the next valid solution to the problem.
     *
     * Repeated calls will find all solutions to a problem if multiple solutions
     * exist. Return true if a solution was found.
     */
    void find_next_solution();

    /** Is the current solution a valid solution? */
    bool solution_is_valid();

    /** Reset the decision tree, i.e. the next call to 'find_solution' finds
     * the first valid solution.
     */
    void reset();

  private:

    /** Create the next leaf on the end of the solution. */
    void create_left_leaf();

    /** Backtrack through the decision tree until a node was found that hasn't
     * been visited, return true if an unvisited node was found.
     */
    bool visit_new_node();

    /** Find the next valid sibling of the last leaf, return true if a valid
     * sibling was found.
     */
    bool find_valid_sibling();

    /** Find the next valid solution to the problem, return true if a solution
     * was found.
     */
    bool find_solution();
  };

} // namespace BackTrack

#endif // VDR_SUDOKU_BACKTRACK_H
