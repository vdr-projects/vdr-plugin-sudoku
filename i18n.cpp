/*
 * Sudoku: A plug-in for the Video Disk Recorder
 *
 * Copyright (C) 2005-2008, Thomas Günther <tom@toms-cafe.de>
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
 *
 * $Id: i18n.cpp 145 2008-07-26 21:35:03Z tom $
 *
 *
 * Translations provided by:
 *
 * Italian     Diego Pierotto <vdr-italian@tiscali.it>
 * French      Patrice Staudt <patr.staudt@laposte.net>
 * Finnish     Ville Skyttä <ville.skytta@iki.fi>
 * Spanish     bittor from open7x0.org
 *
 */

#include "i18n.h"
#include <vdr/config.h>


#if VDRVERSNUM < 10507

const tI18nPhrase SudokuPlugin::Phrases[] = {
  { "Sudoku", // English
    "Sudoku", // Deutsch / German
    "", // Slovenski / Slovenian
    "Sudoku", // Italiano / Italian
    "", // Nederlands / Dutch
    "", // Português / Portuguese
    "Sudoku", // Français / French
    "", // Norsk / Norwegian
    "Sudoku", // suomi / Finnish
    "", // Polski / Polish
    "Sudoku", // Español / Spanish
    "", // ÅëëçíéêÜ / Greek
    "", // Svenska / Swedish
    "", // Românã / Romanian
    "", // Magyar / Hungarian
    "", // Català / Catalanian
    "", // ÀãááÚØÙ / Russian
    "", // Hrvatski / Croatian
    "", // Eesti / Estonian
    "", // Dansk / Danish
    "", // Èesky / Czech
  },
  { "Sudoku - generate and solve Number Place puzzles", // English
    "Sudoku - Erzeugen und Lösen von Zahlenpuzzles", // Deutsch / German
    "", // Slovenski / Slovenian
    "Sudoku - Genera e risolvi il rompicapo dei numeri", // Italiano / Italian
    "", // Nederlands / Dutch
    "", // Português / Portuguese
    "Sudoku - créer et résoudre des puzzles de chiffres.", // Français / French
    "", // Norsk / Norwegian
    "Sudoku-numeroristikot", // suomi / Finnish
    "", // Polski / Polish
    "Solucionar rompecabezas numérico", // Español / Spanish
    "", // ÅëëçíéêÜ / Greek
    "", // Svenska / Swedish
    "", // Românã / Romanian
    "", // Magyar / Hungarian
    "", // Català / Catalanian
    "", // ÀãááÚØÙ / Russian
    "", // Hrvatski / Croatian
    "", // Eesti / Estonian
    "", // Dansk / Danish
    "", // Èesky / Czech
  },
  { "Generate a new puzzle", // English
    "Neues Puzzle erzeugen", // Deutsch / German
    "", // Slovenski / Slovenian
    "Genera una nuova partita", // Italiano / Italian
    "", // Nederlands / Dutch
    "", // Português / Portuguese
    "Créer une nouveau puzzle", // Français / French
    "", // Norsk / Norwegian
    "Uusi ristikko", // suomi / Finnish
    "", // Polski / Polish
    "", // Español / Spanish
    "", // ÅëëçíéêÜ / Greek
    "", // Svenska / Swedish
    "", // Românã / Romanian
    "", // Magyar / Hungarian
    "", // Català / Catalanian
    "", // ÀãááÚØÙ / Russian
    "", // Hrvatski / Croatian
    "", // Eesti / Estonian
    "", // Dansk / Danish
    "", // Èesky / Czech
  },
  { "Load a puzzle", // English
    "Puzzle laden", // Deutsch / German
    "", // Slovenski / Slovenian
    "Carica una partita", // Italiano / Italian
    "", // Nederlands / Dutch
    "", // Português / Portuguese
    "Charger puzzle", // Français / French
    "", // Norsk / Norwegian
    "Lataa ristikko", // suomi / Finnish
    "", // Polski / Polish
    "", // Español / Spanish
    "", // ÅëëçíéêÜ / Greek
    "", // Svenska / Swedish
    "", // Românã / Romanian
    "", // Magyar / Hungarian
    "", // Català / Catalanian
    "", // ÀãááÚØÙ / Russian
    "", // Hrvatski / Croatian
    "", // Eesti / Estonian
    "", // Dansk / Danish
    "", // Èesky / Czech
  },
  { "Save the puzzle", // English
    "Puzzle speichern", // Deutsch / German
    "", // Slovenski / Slovenian
    "Salva la partita", // Italiano / Italian
    "", // Nederlands / Dutch
    "", // Português / Portuguese
    "Sauvegarder puzzle", // Français / French
    "", // Norsk / Norwegian
    "Tallenna ristikko", // suomi / Finnish
    "", // Polski / Polish
    "", // Español / Spanish
    "", // ÅëëçíéêÜ / Greek
    "", // Svenska / Swedish
    "", // Românã / Romanian
    "", // Magyar / Hungarian
    "", // Català / Catalanian
    "", // ÀãááÚØÙ / Russian
    "", // Hrvatski / Croatian
    "", // Eesti / Estonian
    "", // Dansk / Danish
    "", // Èesky / Czech
  },
  { "Undo last action", // English
    "Letzte Aktion zurücknehmen", // Deutsch / German
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
    "", // ÀãááÚØÙ / Russian
    "", // Hrvatski / Croatian
    "", // Eesti / Estonian
    "", // Dansk / Danish
    "", // Èesky / Czech
  },
  { "Redo last action", // English
    "Letzte Aktion wiederholen", // Deutsch / German
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
    "", // ÀãááÚØÙ / Russian
    "", // Hrvatski / Croatian
    "", // Eesti / Estonian
    "", // Dansk / Danish
    "", // Èesky / Czech
  },
  { "Mark/unmark", // English
    "Markierung setzen/löschen", // Deutsch / German
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
    "", // ÀãááÚØÙ / Russian
    "", // Hrvatski / Croatian
    "", // Eesti / Estonian
    "", // Dansk / Danish
    "", // Èesky / Czech
  },
  { "Next cell", // English
    "Nächste Zelle", // Deutsch / German
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
    "", // ÀãááÚØÙ / Russian
    "", // Hrvatski / Croatian
    "", // Eesti / Estonian
    "", // Dansk / Danish
    "", // Èesky / Czech
  },
  { "Next number", // English
    "Nächste Zahl", // Deutsch / German
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
    "", // ÀãááÚØÙ / Russian
    "", // Hrvatski / Croatian
    "", // Eesti / Estonian
    "", // Dansk / Danish
    "", // Èesky / Czech
  },
  { "Reset the puzzle", // English
    "Puzzle zurücksetzen", // Deutsch / German
    "", // Slovenski / Slovenian
    "Ricomincia la partita", // Italiano / Italian
    "", // Nederlands / Dutch
    "", // Português / Portuguese
    "Remise à zéro du puzzle", // Français / French
    "", // Norsk / Norwegian
    "Tyhjennä ristikko", // suomi / Finnish
    "", // Polski / Polish
    "", // Español / Spanish
    "", // ÅëëçíéêÜ / Greek
    "", // Svenska / Swedish
    "", // Românã / Romanian
    "", // Magyar / Hungarian
    "", // Català / Catalanian
    "", // ÀãááÚØÙ / Russian
    "", // Hrvatski / Croatian
    "", // Eesti / Estonian
    "", // Dansk / Danish
    "", // Èesky / Czech
  },
  { "Open setup menu", // English
    "Einstellungsmenü öffnen", // Deutsch / German
    "", // Slovenski / Slovenian
    "Apri il menu opzioni", // Italiano / Italian
    "", // Nederlands / Dutch
    "", // Português / Portuguese
    "Ouvrir le menu de configuration", // Français / French
    "", // Norsk / Norwegian
    "Asetukset", // suomi / Finnish
    "", // Polski / Polish
    "", // Español / Spanish
    "", // ÅëëçíéêÜ / Greek
    "", // Svenska / Swedish
    "", // Românã / Romanian
    "", // Magyar / Hungarian
    "", // Català / Catalanian
    "", // ÀãááÚØÙ / Russian
    "", // Hrvatski / Croatian
    "", // Eesti / Estonian
    "", // Dansk / Danish
    "", // Èesky / Czech
  },
  { "Exit", // English
    "Beenden", // Deutsch / German
    "", // Slovenski / Slovenian
    "Esci", // Italiano / Italian
    "", // Nederlands / Dutch
    "", // Português / Portuguese
    "Terminer", // Français / French
    "", // Norsk / Norwegian
    "Poistu", // suomi / Finnish
    "", // Polski / Polish
    "", // Español / Spanish
    "", // ÅëëçíéêÜ / Greek
    "", // Svenska / Swedish
    "", // Românã / Romanian
    "", // Magyar / Hungarian
    "", // Català / Catalanian
    "", // ÀãááÚØÙ / Russian
    "", // Hrvatski / Croatian
    "", // Eesti / Estonian
    "", // Dansk / Danish
    "", // Èesky / Czech
  },
  { "Sudoku list", // English
    "Sudoku-Liste", // Deutsch / German
    "", // Slovenski / Slovenian
    "Elenco Sudoku", // Italiano / Italian
    "", // Nederlands / Dutch
    "", // Português / Portuguese
    "Liste Sudoku", // Français / French
    "", // Norsk / Norwegian
    "Tallennetut ristikot", // suomi / Finnish
    "", // Polski / Polish
    "", // Español / Spanish
    "", // ÅëëçíéêÜ / Greek
    "", // Svenska / Swedish
    "", // Românã / Romanian
    "", // Magyar / Hungarian
    "", // Català / Catalanian
    "", // ÀãááÚØÙ / Russian
    "", // Hrvatski / Croatian
    "", // Eesti / Estonian
    "", // Dansk / Danish
    "", // Èesky / Czech
  },
  { "Button$Load", // English
    "Laden", // Deutsch / German
    "", // Slovenski / Slovenian
    "Carica", // Italiano / Italian
    "", // Nederlands / Dutch
    "", // Português / Portuguese
    "Charger", // Français / French
    "", // Norsk / Norwegian
    "Lataa", // suomi / Finnish
    "", // Polski / Polish
    "", // Español / Spanish
    "", // ÅëëçíéêÜ / Greek
    "", // Svenska / Swedish
    "", // Românã / Romanian
    "", // Magyar / Hungarian
    "", // Català / Catalanian
    "", // ÀãááÚØÙ / Russian
    "", // Hrvatski / Croatian
    "", // Eesti / Estonian
    "", // Dansk / Danish
    "", // Èesky / Czech
  },
  { "Button$Back", // English
    "Zurück", // Deutsch / German
    "", // Slovenski / Slovenian
    "Indietro", // Italiano / Italian
    "", // Nederlands / Dutch
    "", // Português / Portuguese
    "Retour", // Français / French
    "", // Norsk / Norwegian
    "Takaisin", // suomi / Finnish
    "", // Polski / Polish
    "", // Español / Spanish
    "", // ÅëëçíéêÜ / Greek
    "", // Svenska / Swedish
    "", // Românã / Romanian
    "", // Magyar / Hungarian
    "", // Català / Catalanian
    "", // ÀãááÚØÙ / Russian
    "", // Hrvatski / Croatian
    "", // Eesti / Estonian
    "", // Dansk / Danish
    "", // Èesky / Czech
  },
  { "Edit sudoku list", // English
    "Sudoku-Liste bearbeiten", // Deutsch / German
    "", // Slovenski / Slovenian
    "Modifica elenco Sudoku", // Italiano / Italian
    "", // Nederlands / Dutch
    "", // Português / Portuguese
    "Editer la liste Sudoku", // Français / French
    "", // Norsk / Norwegian
    "Ristikon tiedot", // suomi / Finnish
    "", // Polski / Polish
    "", // Español / Spanish
    "", // ÅëëçíéêÜ / Greek
    "", // Svenska / Swedish
    "", // Românã / Romanian
    "", // Magyar / Hungarian
    "", // Català / Catalanian
    "", // ÀãááÚØÙ / Russian
    "", // Hrvatski / Croatian
    "", // Eesti / Estonian
    "", // Dansk / Danish
    "", // Èesky / Czech
  },
  { "Description", // English
    "Beschreibung", // Deutsch / German
    "", // Slovenski / Slovenian
    "Descrizione", // Italiano / Italian
    "", // Nederlands / Dutch
    "", // Português / Portuguese
    "Description", // Français / French
    "", // Norsk / Norwegian
    "Kuvaus", // suomi / Finnish
    "", // Polski / Polish
    "", // Español / Spanish
    "", // ÅëëçíéêÜ / Greek
    "", // Svenska / Swedish
    "", // Românã / Romanian
    "", // Magyar / Hungarian
    "", // Català / Catalanian
    "", // ÀãááÚØÙ / Russian
    "", // Hrvatski / Croatian
    "", // Eesti / Estonian
    "", // Dansk / Danish
    "", // Èesky / Czech
  },
  { "Givens count", // English
    "Anzahl vorgegebener Zahlen", // Deutsch / German
    "", // Slovenski / Slovenian
    "Numero cifre assegnate", // Italiano / Italian
    "", // Nederlands / Dutch
    "", // Português / Portuguese
    "Nombre de chiffre donnée", // Français / French
    "", // Norsk / Norwegian
    "Annettujen numeroiden lukumäärä", // suomi / Finnish
    "", // Polski / Polish
    "Celdas rellenadas", // Español / Spanish
    "", // ÅëëçíéêÜ / Greek
    "", // Svenska / Swedish
    "", // Românã / Romanian
    "", // Magyar / Hungarian
    "", // Català / Catalanian
    "", // ÀãááÚØÙ / Russian
    "", // Hrvatski / Croatian
    "", // Eesti / Estonian
    "", // Dansk / Danish
    "", // Èesky / Czech
  },
  { "Symmetric givens", // English
    "Vorgegebene Zahlen symmetrisch anordnen", // Deutsch / German
    "", // Slovenski / Slovenian
    "Cifre simmetriche assegnate", // Italiano / Italian
    "", // Nederlands / Dutch
    "", // Português / Portuguese
    "Chiffre données sysmétrique", // Français / French
    "", // Norsk / Norwegian
    "Järjestä annetut symmetrisesti", // suomi / Finnish
    "", // Polski / Polish
    "Números simétricos rellenados", // Español / Spanish
    "", // ÅëëçíéêÜ / Greek
    "", // Svenska / Swedish
    "", // Românã / Romanian
    "", // Magyar / Hungarian
    "", // Català / Catalanian
    "", // ÀãááÚØÙ / Russian
    "", // Hrvatski / Croatian
    "", // Eesti / Estonian
    "", // Dansk / Danish
    "", // Èesky / Czech
  },
  { "Mark errors", // English
    "Fehler markieren", // Deutsch / German
    "", // Slovenski / Slovenian
    "Segna errori", // Italiano / Italian
    "", // Nederlands / Dutch
    "", // Português / Portuguese
    "Marquer les erreurs", // Français / French
    "", // Norsk / Norwegian
    "Merkitse virheet", // suomi / Finnish
    "", // Polski / Polish
    "Marcar errores", // Español / Spanish
    "", // ÅëëçíéêÜ / Greek
    "", // Svenska / Swedish
    "", // Românã / Romanian
    "", // Magyar / Hungarian
    "", // Català / Catalanian
    "", // ÀãááÚØÙ / Russian
    "", // Hrvatski / Croatian
    "", // Eesti / Estonian
    "", // Dansk / Danish
    "", // Èesky / Czech
  },
  { "Mark ambiguous numbers", // English
    "Unklare Zahlen markieren", // Deutsch / German
    "", // Slovenski / Slovenian
    "Segna numeri ambigui", // Italiano / Italian
    "", // Nederlands / Dutch
    "", // Português / Portuguese
    "Marquer les chiffres anbigus", // Français / French
    "", // Norsk / Norwegian
    "Merkitse epävarmat", // suomi / Finnish
    "", // Polski / Polish
    "Marcar números ambiguos", // Español / Spanish
    "", // ÅëëçíéêÜ / Greek
    "", // Svenska / Swedish
    "", // Românã / Romanian
    "", // Magyar / Hungarian
    "", // Català / Catalanian
    "", // ÀãááÚØÙ / Russian
    "", // Hrvatski / Croatian
    "", // Eesti / Estonian
    "", // Dansk / Danish
    "", // Èesky / Czech
  },
  { "Show possible numbers as pattern", // English
    "Mögliche Zahlen als Muster anzeigen", // Deutsch / German
    "", // Slovenski / Slovenian
    "Mostra num. possibili in valori", // Italiano / Italian
    "", // Nederlands / Dutch
    "", // Português / Portuguese
    "Afficher les chiffres possible comme modèle", // Français / French
    "", // Norsk / Norwegian
    "Näytä mahdolliset kuviona", // suomi / Finnish
    "", // Polski / Polish
    "", // Español / Spanish
    "", // ÅëëçíéêÜ / Greek
    "", // Svenska / Swedish
    "", // Românã / Romanian
    "", // Magyar / Hungarian
    "", // Català / Catalanian
    "", // ÀãááÚØÙ / Russian
    "", // Hrvatski / Croatian
    "", // Eesti / Estonian
    "", // Dansk / Danish
    "", // Èesky / Czech
  },
  { "Show possible numbers as digits", // English
    "Mögliche Zahlen als Ziffern anzeigen", // Deutsch / German
    "", // Slovenski / Slovenian
    "Mostra num. possibili in cifre", // Italiano / Italian
    "", // Nederlands / Dutch
    "", // Português / Portuguese
    "Afficher les chiffres possible comme chiffre", // Français / French
    "", // Norsk / Norwegian
    "Näytä mahdolliset numeroina", // suomi / Finnish
    "", // Polski / Polish
    "", // Español / Spanish
    "", // ÅëëçíéêÜ / Greek
    "", // Svenska / Swedish
    "", // Românã / Romanian
    "", // Magyar / Hungarian
    "", // Català / Catalanian
    "", // ÀãááÚØÙ / Russian
    "", // Hrvatski / Croatian
    "", // Eesti / Estonian
    "", // Dansk / Danish
    "", // Èesky / Czech
  },
  { "Clear marks on reset", // English
    "Markierungen löschen beim Reset", // Deutsch / German
    "", // Slovenski / Slovenian
    "Pulisci segni al riavvio", // Italiano / Italian
    "", // Nederlands / Dutch
    "", // Português / Portuguese
    "Effacer les marques lors de la mise à zéro", // Français / French
    "", // Norsk / Norwegian
    "Poista merkinnät aloitettaessa", // suomi / Finnish
    "", // Polski / Polish
    "Quitar marcas al reiniciar", // Español / Spanish
    "", // ÅëëçíéêÜ / Greek
    "", // Svenska / Swedish
    "", // Românã / Romanian
    "", // Magyar / Hungarian
    "", // Català / Catalanian
    "", // ÀãááÚØÙ / Russian
    "", // Hrvatski / Croatian
    "", // Eesti / Estonian
    "", // Dansk / Danish
    "", // Èesky / Czech
  },
  { "Key Red", // English
    "Taste Rot", // Deutsch / German
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
    "", // ÀãááÚØÙ / Russian
    "", // Hrvatski / Croatian
    "", // Eesti / Estonian
    "", // Dansk / Danish
    "", // Èesky / Czech
  },
  { "Key Green", // English
    "Taste Grün", // Deutsch / German
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
    "", // ÀãááÚØÙ / Russian
    "", // Hrvatski / Croatian
    "", // Eesti / Estonian
    "", // Dansk / Danish
    "", // Èesky / Czech
  },
  { "Key Yellow", // English
    "Taste Gelb", // Deutsch / German
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
    "", // ÀãááÚØÙ / Russian
    "", // Hrvatski / Croatian
    "", // Eesti / Estonian
    "", // Dansk / Danish
    "", // Èesky / Czech
  },
  { "Great font", // English
    "Große Schriftart", // Deutsch / German
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
    "", // ÀãááÚØÙ / Russian
    "", // Hrvatski / Croatian
    "", // Eesti / Estonian
    "", // Dansk / Danish
    "", // Èesky / Czech
  },
  { "Great font height (pixel)", // English
    "Große Schrifthöhe (pixel)", // Deutsch / German
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
    "", // ÀãááÚØÙ / Russian
    "", // Hrvatski / Croatian
    "", // Eesti / Estonian
    "", // Dansk / Danish
    "", // Èesky / Czech
  },
  { "Great font width (pixel)", // English
    "Große Schriftbreite (pixel)", // Deutsch / German
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
    "", // ÀãááÚØÙ / Russian
    "", // Hrvatski / Croatian
    "", // Eesti / Estonian
    "", // Dansk / Danish
    "", // Èesky / Czech
  },
  { "Small font", // English
    "Kleine Schriftart", // Deutsch / German
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
    "", // ÀãááÚØÙ / Russian
    "", // Hrvatski / Croatian
    "", // Eesti / Estonian
    "", // Dansk / Danish
    "", // Èesky / Czech
  },
  { "Small font height (pixel)", // English
    "Kleine Schrifthöhe (pixel)", // Deutsch / German
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
    "", // ÀãááÚØÙ / Russian
    "", // Hrvatski / Croatian
    "", // Eesti / Estonian
    "", // Dansk / Danish
    "", // Èesky / Czech
  },
  { "Small font width (pixel)", // English
    "Kleine Schriftbreite (pixel)", // Deutsch / German
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
    "", // ÀãááÚØÙ / Russian
    "", // Hrvatski / Croatian
    "", // Eesti / Estonian
    "", // Dansk / Danish
    "", // Èesky / Czech
  },
  { "Transparency (%)", // English
    "Transparenz (%)", // Deutsch / German
    "", // Slovenski / Slovenian
    "Trasparenza (%)", // Italiano / Italian
    "", // Nederlands / Dutch
    "", // Português / Portuguese
    "Transparence (%)", // Français / French
    "", // Norsk / Norwegian
    "Läpinäkyvyys (%)", // suomi / Finnish
    "", // Polski / Polish
    "Transparencia (%)", // Español / Spanish
    "", // ÅëëçíéêÜ / Greek
    "", // Svenska / Swedish
    "", // Românã / Romanian
    "", // Magyar / Hungarian
    "", // Català / Catalanian
    "", // ÀãááÚØÙ / Russian
    "", // Hrvatski / Croatian
    "", // Eesti / Estonian
    "", // Dansk / Danish
    "", // Èesky / Czech
  },
  { "Congratulations!\nPress OK to start a new puzzle", // English
    "Herzlichen Glückwunsch!\nOK startet ein neues Puzzle", // Deutsch / German
    "", // Slovenski / Slovenian
    "Complimenti!\nPremi OK per iniziare una nuova partita", // Italiano / Italian
    "", // Nederlands / Dutch
    "", // Português / Portuguese
    "Félicitation!\nAvec OK vous lancez un nouveau puzzle", // Français / French
    "", // Norsk / Norwegian
    "Onnittelut!\nValitse 'OK' aloittaaksesi uuden ristikon", // suomi / Finnish
    "", // Polski / Polish
    "¡Enhorabuena!\nPulse OK para iniciar un nuevo rompecabezas", // Español / Spanish
    "", // ÅëëçíéêÜ / Greek
    "", // Svenska / Swedish
    "", // Românã / Romanian
    "", // Magyar / Hungarian
    "", // Català / Catalanian
    "", // ÀãááÚØÙ / Russian
    "", // Hrvatski / Croatian
    "", // Eesti / Estonian
    "", // Dansk / Danish
    "", // Èesky / Czech
  },
  { NULL }
};

#endif
