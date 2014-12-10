# -*- coding: utf-8 -*-
############################################################################
# Copyright 2007-2014 Universidade do Porto - Faculdade de Engenharia      #
# Laboratório de Sistemas e Tecnologia Subaquática (LSTS)                  #
############################################################################
# This file is part of DUNE: Unified Navigation Environment.               #
#                                                                          #
# Commercial Licence Usage                                                 #
# Licencees holding valid commercial DUNE licences may use this file in    #
# accordance with the commercial licence agreement provided with the       #
# Software or, alternatively, in accordance with the terms contained in a  #
# written agreement between you and Universidade do Porto. For licensing   #
# terms, conditions, and further information contact lsts@fe.up.pt.        #
#                                                                          #
# European Union Public Licence - EUPL v.1.1 Usage                         #
# Alternatively, this file may be used under the terms of the EUPL,        #
# Version 1.1 only (the "Licence"), appearing in the file LICENCE.md       #
# included in the packaging of this file. You may not use this work        #
# except in compliance with the Licence. Unless required by applicable     #
# law or agreed to in writing, software distributed under the Licence is   #
# distributed on an "AS IS" basis, WITHOUT WARRANTIES OR CONDITIONS OF     #
# ANY KIND, either express or implied. See the Licence for the specific    #
# language governing permissions and limitations at                        #
# https://www.lsts.pt/dune/licence.                                        #
############################################################################
# Author: Ricardo Martins                                                  #
############################################################################
# Script to process merge commit messages and output a Changelog.          #
############################################################################

import os
import sys
import os.path
import subprocess
import functools
import textwrap
import re

# Find source folder.
SCRIPT = os.path.abspath(__file__).replace('.pyc', '.py')
TOP_DIR = os.path.abspath(os.path.join(os.path.dirname(SCRIPT), '..', '..'))

class Changelog:
    def __init__(self, previous_version):
        self._previous = 'dune-' + previous_version
        self._fixes = []
        self._features = []

    def _print_msg(self, s):
        w = textwrap.wrap('-' + s, width=77)
        print(w[0])
        w.pop(0)
        for l in w:
            print(' ', l.strip())

    def _get_commits(self):
        '''Get merge commit messages.'''
        out = subprocess.check_output(['git', '-C', TOP_DIR,
                                       'log', '--merges',
                                       '--pretty=-----------%n%b',
                                       '%s..HEAD' % self._previous],
                                      universal_newlines = True)
        return out.split('\n')

    def _process_commit(self, lines):
        if len(lines) == 0:
            return

        text = []
        for line in lines:
            line = line.strip()
            if len(line) == 0:
                break
            else:
                text.append(line)

        text = ' '.join(text)
        sep_idx = text.find(':') + 1
        if text.startswith('Fixed Bug'):
            self._fixes.append(text[sep_idx:])
        elif text.startswith('Feature'):
            self._features.append(text[sep_idx:])

    def process(self):
        commit = []
        lines = self._get_commits()
        for line in lines:
             line = line.strip()
             if line.startswith('-----'):
                 self._process_commit(commit)
                 commit = []
             else:
                 commit.append(line)
        self._process_commit(commit)

        print('# Features')
        for feature in self._features:
            self._print_msg(feature)
            print()

        print('# Bug Fixes')
        for fix in self._fixes:
            self._print_msg(fix)
            print()

if len(sys.argv) != 2:
    print('Usage:', sys.argv[0], '<PREVIOUS_RELEASE>')
    sys.exit(1)

c = Changelog(sys.argv[1])
c.process()
