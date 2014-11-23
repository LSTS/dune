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

import os
import io
import sys
import shutil
import os.path

def clean_whitespace(file):
    ifd = open(file, 'r')
    ofd = open(file + '.bak', 'w')
    mode = os.stat(file).st_mode
    for line in ifd:
        line = line.rstrip().replace('\t', '  ')
        ofd.write(line + '\n')
    ifd.close()
    ofd.close()
    os.rename(file + '.bak', file)
    os.chmod(file, mode)

EXCLUDE = [
    '.git', 'vendor'
]

INCLUDE_EXT = [
    '.cpp', '.hpp', '.md', '.def', '.py', '.cmake', '.css', '.dox', '.el',
    '.html', '.in', '.ini', '.js',  '.po', '.pot', '.rc', '.sh', '.tex',
    '.txt', '.xml', '.xsl'
]

# Find source folder.
script = os.path.abspath(__file__).replace('.pyc', '.py')
wrk_dir = os.path.dirname(script)
top_dir = os.path.abspath(os.path.join(wrk_dir, '..', '..'))
src_dir = os.path.abspath(os.path.join(top_dir, 'src'))

# Find sources.
files = set()
for dirname, dirnames, filenames in os.walk(top_dir):
    for filename in filenames:
        if os.path.splitext(filename)[1] not in INCLUDE_EXT:
            continue

        path = os.path.join(dirname, filename)
        path = path.replace(top_dir + '/', '')
        add = True
        for exc in EXCLUDE:
            if path.startswith(exc):
                add = False
                break
        if add:
            files.add(path)

for f in files:
    f = os.path.join(top_dir, f)
    clean_whitespace(f)
