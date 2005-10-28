/*
 * Sudoku: A plugin for the Video Disk Recorder
 *
 * See the README file for copyright information and how to reach the author.
 *
 * $Id: setup.h 11 2005-10-28 01:00:01Z tom $
 */

#ifndef VDR_SUDOKU_SETUP_H
#define VDR_SUDOKU_SETUP_H

#include "sudoku.h"
#include <vdr/menuitems.h>


namespace SudokuPlugin
{

  //--- class SudokuPlugin::SetupData ------------------------------------------

  /** Setup parameters of the plugin */
  class SetupData
  {
  public:
    int givens_count;
    int symmetric;
    int mark_errors;
    int mark_ambiguous;
    int transparency;

    /** Constructor */
    SetupData();

    /** Parse the parameters of the plugin. */
    bool parse(const char* name, const char* value);
  };


  //--- class SudokuPlugin::SetupPage ------------------------------------------

  /** Setup menu page to adjust the parameters of the plugin */
  class SetupPage : public cMenuSetupPage
  {
    SetupData& setup;
    SetupData data;

  public:

    /** Constructor */
    SetupPage(SetupData& setup);

  protected:

    /** Store the parameters of the plugin. */
    virtual void Store();
  };

} // namespace SudokuPlugin

#endif // VDR_SUDOKU_SETUP_H
