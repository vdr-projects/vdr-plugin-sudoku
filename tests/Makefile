#
# Sudoku: A plug-in for the Video Disk Recorder
#
# Copyright (C) 2010, Thomas Günther <tom@toms-cafe.de>
#
# This program is free software; you can redistribute it and/or modify
# it under the terms of the GNU General Public License as published by
# the Free Software Foundation; either version 2 of the License, or
# (at your option) any later version.
#
# This program is distributed in the hope that it will be useful,
# but WITHOUT ANY WARRANTY; without even the implied warranty of
# MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
# GNU General Public License for more details.
#
# You should have received a copy of the GNU General Public License along
# with this program; if not, write to the Free Software Foundation, Inc.,
# 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA.

PROGRAM = testrunner

SRCS = ../puzzle.cpp ../generator.cpp ../solver.cpp ../backtrack.cpp \
       ../history.cpp

TESTGEN  ?= cxxtestgen.py
CXX      ?= g++
CXXFLAGS ?= -g -O2 -Wall -Woverloaded-virtual
DEFINES  += -D_GNU_SOURCE

### The main target:

all: $(PROGRAM)
	./$<

### Dependencies:

DEPFILE = .dependencies
$(DEPFILE): Makefile
	@$(CXX) -MM -MG $(SRCS) | sed -e "s/\(.*: .*\)/..\/\1/" > $@

-include $(DEPFILE)

### Targets:

$(PROGRAM).cpp: test_*.h
	$(TESTGEN) -o $@ --error-printer $^

$(PROGRAM): $(PROGRAM).cpp $(SRCS:%.cpp=%.o)
	$(CXX) $(CXXFLAGS) $(DEFINES) $(INCLUDES) -o $@ $^

clean:
	@-rm -f $(PROGRAM) $(PROGRAM).cpp $(SRCS:%.cpp=%.o) $(DEPFILE) core* *~
