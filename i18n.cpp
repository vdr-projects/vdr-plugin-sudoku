/*
 * Sudoku: A plugin for the Video Disk Recorder
 *
 * See the README file for copyright information and how to reach the author.
 *
 * $Id: i18n.cpp 11 2005-10-28 01:00:01Z tom $
 */

#include "i18n.h"
#include <vdr/config.h>


const tI18nPhrase SudokuPlugin::Phrases[] = {
  { "Sudoku", // English
    "Sudoku", // Deutsch / German
    "", // Slovenski / Slovenian
    "", // Italiano / Italian
    "", // Nederlands / Dutch
    "", // Portugu�s / Portuguese
    "", // Fran�ais / French
    "", // Norsk / Norwegian
    "", // suomi / Finnish
    "", // Polski / Polish
    "", // Espa�ol / Spanish
    "", // �������� / Greek
    "", // Svenska / Swedish
    "", // Rom�n� / Romanian
    "", // Magyar / Hungarian
    "", // Catal� / Catalanian
#if VDRVERSNUM > 10302
    "", // ������� / Russian
#if VDRVERSNUM > 10307
    "", // Hrvatski / Croatian
#if VDRVERSNUM > 10313
    "", // Eesti / Estonian
#if VDRVERSNUM > 10316
    "", // Dansk / Danish
#endif
#endif
#endif
#endif
  },
  { "Sudoku - generate and solve Number Place puzzles", // English
    "Sudoku - Erzeugen und L�sen von Zahlenpuzzles", // Deutsch / German
    "", // Slovenski / Slovenian
    "", // Italiano / Italian
    "", // Nederlands / Dutch
    "", // Portugu�s / Portuguese
    "", // Fran�ais / French
    "", // Norsk / Norwegian
    "", // suomi / Finnish
    "", // Polski / Polish
    "", // Espa�ol / Spanish
    "", // �������� / Greek
    "", // Svenska / Swedish
    "", // Rom�n� / Romanian
    "", // Magyar / Hungarian
    "", // Catal� / Catalanian
#if VDRVERSNUM > 10302
    "", // ������� / Russian
#if VDRVERSNUM > 10307
    "", // Hrvatski / Croatian
#if VDRVERSNUM > 10313
    "", // Eesti / Estonian
#if VDRVERSNUM > 10316
    "", // Dansk / Danish
#endif
#endif
#endif
#endif
  },
  { "Givens count", // English
    "Anzahl vorgegebener Zahlen", // Deutsch / German
    "", // Slovenski / Slovenian
    "", // Italiano / Italian
    "", // Nederlands / Dutch
    "", // Portugu�s / Portuguese
    "", // Fran�ais / French
    "", // Norsk / Norwegian
    "", // suomi / Finnish
    "", // Polski / Polish
    "", // Espa�ol / Spanish
    "", // �������� / Greek
    "", // Svenska / Swedish
    "", // Rom�n� / Romanian
    "", // Magyar / Hungarian
    "", // Catal� / Catalanian
#if VDRVERSNUM > 10302
    "", // ������� / Russian
#if VDRVERSNUM > 10307
    "", // Hrvatski / Croatian
#if VDRVERSNUM > 10313
    "", // Eesti / Estonian
#if VDRVERSNUM > 10316
    "", // Dansk / Danish
#endif
#endif
#endif
#endif
  },
  { "Symmetric givens", // English
    "Vorgegebene Zahlen symmetrisch anordnen", // Deutsch / German
    "", // Slovenski / Slovenian
    "", // Italiano / Italian
    "", // Nederlands / Dutch
    "", // Portugu�s / Portuguese
    "", // Fran�ais / French
    "", // Norsk / Norwegian
    "", // suomi / Finnish
    "", // Polski / Polish
    "", // Espa�ol / Spanish
    "", // �������� / Greek
    "", // Svenska / Swedish
    "", // Rom�n� / Romanian
    "", // Magyar / Hungarian
    "", // Catal� / Catalanian
#if VDRVERSNUM > 10302
    "", // ������� / Russian
#if VDRVERSNUM > 10307
    "", // Hrvatski / Croatian
#if VDRVERSNUM > 10313
    "", // Eesti / Estonian
#if VDRVERSNUM > 10316
    "", // Dansk / Danish
#endif
#endif
#endif
#endif
  },
  { "Mark errors", // English
    "Fehler markieren", // Deutsch / German
    "", // Slovenski / Slovenian
    "", // Italiano / Italian
    "", // Nederlands / Dutch
    "", // Portugu�s / Portuguese
    "", // Fran�ais / French
    "", // Norsk / Norwegian
    "", // suomi / Finnish
    "", // Polski / Polish
    "", // Espa�ol / Spanish
    "", // �������� / Greek
    "", // Svenska / Swedish
    "", // Rom�n� / Romanian
    "", // Magyar / Hungarian
    "", // Catal� / Catalanian
#if VDRVERSNUM > 10302
    "", // ������� / Russian
#if VDRVERSNUM > 10307
    "", // Hrvatski / Croatian
#if VDRVERSNUM > 10313
    "", // Eesti / Estonian
#if VDRVERSNUM > 10316
    "", // Dansk / Danish
#endif
#endif
#endif
#endif
  },
  { "Mark ambiguous numbers", // English
    "Unklare Zahlen markieren", // Deutsch / German
    "", // Slovenski / Slovenian
    "", // Italiano / Italian
    "", // Nederlands / Dutch
    "", // Portugu�s / Portuguese
    "", // Fran�ais / French
    "", // Norsk / Norwegian
    "", // suomi / Finnish
    "", // Polski / Polish
    "", // Espa�ol / Spanish
    "", // �������� / Greek
    "", // Svenska / Swedish
    "", // Rom�n� / Romanian
    "", // Magyar / Hungarian
    "", // Catal� / Catalanian
#if VDRVERSNUM > 10302
    "", // ������� / Russian
#if VDRVERSNUM > 10307
    "", // Hrvatski / Croatian
#if VDRVERSNUM > 10313
    "", // Eesti / Estonian
#if VDRVERSNUM > 10316
    "", // Dansk / Danish
#endif
#endif
#endif
#endif
  },
  { "Transparency (%)", // English
    "Transparenz (%)", // Deutsch / German
    "", // Slovenski / Slovenian
    "", // Italiano / Italian
    "", // Nederlands / Dutch
    "", // Portugu�s / Portuguese
    "", // Fran�ais / French
    "", // Norsk / Norwegian
    "", // suomi / Finnish
    "", // Polski / Polish
    "", // Espa�ol / Spanish
    "", // �������� / Greek
    "", // Svenska / Swedish
    "", // Rom�n� / Romanian
    "", // Magyar / Hungarian
    "", // Catal� / Catalanian
#if VDRVERSNUM > 10302
    "", // ������� / Russian
#if VDRVERSNUM > 10307
    "", // Hrvatski / Croatian
#if VDRVERSNUM > 10313
    "", // Eesti / Estonian
#if VDRVERSNUM > 10316
    "", // Dansk / Danish
#endif
#endif
#endif
#endif
  },
  { "Congratulations!\nPress OK to start a new puzzle", // English
    "Herzlichen Gl�ckwunsch!\nOK startet ein neues Puzzle", // Deutsch / German
    "", // Slovenski / Slovenian
    "", // Italiano / Italian
    "", // Nederlands / Dutch
    "", // Portugu�s / Portuguese
    "", // Fran�ais / French
    "", // Norsk / Norwegian
    "", // suomi / Finnish
    "", // Polski / Polish
    "", // Espa�ol / Spanish
    "", // �������� / Greek
    "", // Svenska / Swedish
    "", // Rom�n� / Romanian
    "", // Magyar / Hungarian
    "", // Catal� / Catalanian
#if VDRVERSNUM > 10302
    "", // ������� / Russian
#if VDRVERSNUM > 10307
    "", // Hrvatski / Croatian
#if VDRVERSNUM > 10313
    "", // Eesti / Estonian
#if VDRVERSNUM > 10316
    "", // Dansk / Danish
#endif
#endif
#endif
#endif
  },
  { NULL }
};
