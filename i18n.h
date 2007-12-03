/*
 * Sudoku: A plugin for the Video Disk Recorder
 *
 * See the README file for copyright information and how to reach the author.
 *
 * $Id: i18n.h 102 2007-12-03 22:10:04Z tom $
 */

#ifndef VDR_SUDOKU_I18N_H
#define VDR_SUDOKU_I18N_H

#include "sudoku.h"
#include <vdr/i18n.h>
#include <vdr/config.h>


#if VDRVERSNUM < 10507

#define trNOOP(s) (s)

namespace SudokuPlugin
{

  extern const tI18nPhrase Phrases[];

} // namespace SudokuPlugin

#endif

#endif // VDR_SUDOKU_I18N_H
