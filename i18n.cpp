/*
 * Sudoku: A plugin for the Video Disk Recorder
 *
 * See the README file for copyright information and how to reach the author.
 *
 * $Id: i18n.cpp 16 2005-10-31 21:12:41Z tom $
 *
 *
 * Translations provided by:
 *
 * Finnish     Ville Skyttä <ville.skytta@iki.fi>
 *
 */

#include "i18n.h"
#include <vdr/config.h>


const tI18nPhrase SudokuPlugin::Phrases[] = {
  { "Sudoku", // English
    "Sudoku", // Deutsch / German
    "", // Slovenski / Slovenian
    "", // Italiano / Italian
    "", // Nederlands / Dutch
    "", // Português / Portuguese
    "", // Français / French
    "", // Norsk / Norwegian
    "Sudoku", // suomi / Finnish
    "", // Polski / Polish
    "", // Español / Spanish
    "", // ÅëëçíéêÜ / Greek
    "", // Svenska / Swedish
    "", // Românã / Romanian
    "", // Magyar / Hungarian
    "", // Català / Catalanian
#if VDRVERSNUM > 10302
    "", // ÀãááÚØÙ / Russian
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
    "Sudoku - Erzeugen und Lösen von Zahlenpuzzles", // Deutsch / German
    "", // Slovenski / Slovenian
    "", // Italiano / Italian
    "", // Nederlands / Dutch
    "", // Português / Portuguese
    "", // Français / French
    "", // Norsk / Norwegian
    "Sudoku-numeroristikot", // suomi / Finnish
    "", // Polski / Polish
    "", // Español / Spanish
    "", // ÅëëçíéêÜ / Greek
    "", // Svenska / Swedish
    "", // Românã / Romanian
    "", // Magyar / Hungarian
    "", // Català / Catalanian
#if VDRVERSNUM > 10302
    "", // ÀãááÚØÙ / Russian
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
    "", // Português / Portuguese
    "", // Français / French
    "", // Norsk / Norwegian
    "Annettujen numeroiden lukumäärä", // suomi / Finnish
    "", // Polski / Polish
    "", // Español / Spanish
    "", // ÅëëçíéêÜ / Greek
    "", // Svenska / Swedish
    "", // Românã / Romanian
    "", // Magyar / Hungarian
    "", // Català / Catalanian
#if VDRVERSNUM > 10302
    "", // ÀãááÚØÙ / Russian
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
    "", // Português / Portuguese
    "", // Français / French
    "", // Norsk / Norwegian
    "Järjestä annetut symmetrisesti", // suomi / Finnish
    "", // Polski / Polish
    "", // Español / Spanish
    "", // ÅëëçíéêÜ / Greek
    "", // Svenska / Swedish
    "", // Românã / Romanian
    "", // Magyar / Hungarian
    "", // Català / Catalanian
#if VDRVERSNUM > 10302
    "", // ÀãááÚØÙ / Russian
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
    "", // Português / Portuguese
    "", // Français / French
    "", // Norsk / Norwegian
    "Merkitse virheet", // suomi / Finnish
    "", // Polski / Polish
    "", // Español / Spanish
    "", // ÅëëçíéêÜ / Greek
    "", // Svenska / Swedish
    "", // Românã / Romanian
    "", // Magyar / Hungarian
    "", // Català / Catalanian
#if VDRVERSNUM > 10302
    "", // ÀãááÚØÙ / Russian
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
    "", // Português / Portuguese
    "", // Français / French
    "", // Norsk / Norwegian
    "Merkitse epävarmat", // suomi / Finnish
    "", // Polski / Polish
    "", // Español / Spanish
    "", // ÅëëçíéêÜ / Greek
    "", // Svenska / Swedish
    "", // Românã / Romanian
    "", // Magyar / Hungarian
    "", // Català / Catalanian
#if VDRVERSNUM > 10302
    "", // ÀãááÚØÙ / Russian
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
  { "Clear marks", // English
    "Markierungen löschen", // Deutsch / German
    "", // Slovenski / Slovenian
    "", // Italiano / Italian
    "", // Nederlands / Dutch
    "", // Português / Portuguese
    "", // Français / French
    "", // Norsk / Norwegian
    "", // suomi / Finnish
    "", // Polski / Polish
    "", // Español / Spanish
    "", // ÅëëçíéêÜ / Greek
    "", // Svenska / Swedish
    "", // Românã / Romanian
    "", // Magyar / Hungarian
    "", // Català / Catalanian
#if VDRVERSNUM > 10302
    "", // ÀãááÚØÙ / Russian
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
    "", // Português / Portuguese
    "", // Français / French
    "", // Norsk / Norwegian
    "Läpinäkyvyys (%)", // suomi / Finnish
    "", // Polski / Polish
    "", // Español / Spanish
    "", // ÅëëçíéêÜ / Greek
    "", // Svenska / Swedish
    "", // Românã / Romanian
    "", // Magyar / Hungarian
    "", // Català / Catalanian
#if VDRVERSNUM > 10302
    "", // ÀãááÚØÙ / Russian
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
    "Herzlichen Glückwunsch!\nOK startet ein neues Puzzle", // Deutsch / German
    "", // Slovenski / Slovenian
    "", // Italiano / Italian
    "", // Nederlands / Dutch
    "", // Português / Portuguese
    "", // Français / French
    "", // Norsk / Norwegian
    "Onnittelut!\nValitse 'OK' aloittaaksesi uuden tehtävän", // suomi / Finnish
    "", // Polski / Polish
    "", // Español / Spanish
    "", // ÅëëçíéêÜ / Greek
    "", // Svenska / Swedish
    "", // Românã / Romanian
    "", // Magyar / Hungarian
    "", // Català / Catalanian
#if VDRVERSNUM > 10302
    "", // ÀãááÚØÙ / Russian
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
