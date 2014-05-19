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
import threading
import subprocess
import queue

# Find source folder.
script = os.path.abspath(__file__).replace('.pyc', '.py')
wrk_dir = os.path.dirname(script)
top_dir = os.path.abspath(os.path.join(wrk_dir, '..', '..'))
src_dir = os.path.abspath(os.path.join(top_dir, 'src'))

# Find headers.
headers = []
for dirname, dirnames, filenames in os.walk(src_dir):
    for filename in filenames:
        if os.path.splitext(filename)[1] == '.hpp':
            headers.append(os.path.abspath(os.path.join(dirname, filename)))

# Run CMake to generate a few required headers.
bld_dir = os.path.abspath(os.path.join(top_dir, 'check-headers'))
if os.path.isdir(bld_dir):
    shutil.rmtree(bld_dir)
os.makedirs(bld_dir)
os.chdir(bld_dir)
subprocess.call(['cmake', '-DQT5=1', '..'])

# Compile headers.
cxx = ['g++', '-Wall', '-Wextra', '-Werror',
       '-Wno-missing-field-initializers', '-pedantic',
       '-x', 'c++-header',
       '-D', 'DUNE_TASK=',
       '-I', os.path.join(top_dir, 'src'),
       '-I', os.path.join(top_dir, 'src', 'Simulators', 'VSIM'),
       '-I', os.path.join(top_dir, 'vendor/libraries'),
       '-I', os.path.join(bld_dir, 'DUNEGeneratedFiles/src'),
       '-I', '/usr/include/Qt',
       '-I', '/usr/include/QtCore',
       '-I', '/usr/include/QtGui',
       '-I', '/usr/include/QtUiTools',
       '-o', '/dev/null'
       ]

work_queue = queue.Queue()

def worker():
    while True:
        hdr = work_queue.get()
        print(hdr)
        subprocess.call(cxx + [hdr])
        work_queue.task_done()

for i in range(0, 4):
    t = threading.Thread(target = worker)
    t.daemon = True
    t.start()

for header in headers:
    work_queue.put_nowait(header)

work_queue.join()

# Remove CMake files.
if os.path.isdir(bld_dir):
    shutil.rmtree(bld_dir)
