# -*- coding: utf-8 -*-
############################################################################
# Copyright 2007-2015 Universidade do Porto - Faculdade de Engenharia      #
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
# http://ec.europa.eu/idabc/eupl.html.                                     #
############################################################################
# Author: Ricardo Martins                                                  #
############################################################################

import sys
import os.path
import argparse

# Task body.
BODY = [
    'struct Task: public DUNE::Tasks::Task',
    '{',

    # Constructor.
    '//! Constructor.',
    '//! @param[in] name task name.',
    '//! @param[in] ctx context.',
    'Task(const std::string& name, Tasks::Context& ctx):',
    '  DUNE::Tasks::Task(name, ctx)', '{', '}', '\n',

    # onUpdateParameters.
    '//! Update internal state with new parameter values.',
    'void', 'onUpdateParameters(void)', '{', '}', '\n',

    # onEntityReservation.
    '//! Reserve entity identifiers.',
    'void', 'onEntityReservation(void)', '{', '}', '\n',

    # onEntityResolution.
    '//! Resolve entity names.',
    'void', 'onEntityResolution(void)', '{', '}', '\n',

    # onResourceAcquisition.
    '//! Acquire resources.',
    'void', 'onResourceAcquisition(void)', '{', '}', '\n',

    # onResourceInitialization.
    '//! Initialize resources.',
    'void', 'onResourceInitialization(void)', '{', '}', '\n',

    # onResourceRelease.
    '//! Release resources.',
    'void', 'onResourceRelease(void)', '{', '}', '\n',

    # onMain.
    '//! Main loop.',
    'void', 'onMain(void)', '{',
    'while (!stopping())', '{', 'waitForMessages(1.0);', '}', '}', '};'
    ]

class Task:
    def __init__(self, author, nss):
        self._author = author
        self._indent = 0
        self._code = self.licence()
        self._nss = nss
        self.add('// DUNE headers.')
        self.add('#include <DUNE/DUNE.hpp>', '\n')
        for ns in nss:
            self.add('namespace ' + ns, '{')
        self.add('using DUNE_NAMESPACES;', '\n')
        self.add(*BODY)
        for ns in self._nss:
            self.add('}')
        self.add('\n', 'DUNE_TASK')

    # Extract the license from this script and convert it to a format
    # suitable to be used in C++ files.
    def licence(self):
        fd = open(os.path.abspath(__file__).replace('.pyc', '.py'))
        block = []
        header = False
        for line in fd.readlines():
            line = line.strip()
            if len(line) == 0:
                break
            if line.startswith('##') and not header:
                header = True
                block.append(line)
            elif header:
                if line.startswith('# Author: '):
                    line = ('# Author: ' + self._author).ljust(len(line) - 1) + '#'
                block.append(line)
        block = [l[1:] for l in block]
        block = ['//' + l for l in block]
        block = [l.replace('#', '*') for l in block]
        return '\n'.join(block) + '\n\n'

    def add(self, *lines):
        for line in lines:
            strip = line.strip()
            if len(strip) == 0:
                self._code += '\n'
            elif strip == '{':
                self._code += self._indent * ' ' + line + '\n'
                self._indent += 2
            elif strip in ['}', '};']:
                self._indent -= 2
                self._code += self._indent * ' ' + line + '\n'
            else:
                self._code += self._indent * ' ' + line + '\n'

    def __str__(self):
        return self._code

# Parse command line arguments.
parser = argparse.ArgumentParser(
    description="This script will create a DUNE's task scaffold.")
parser.add_argument('prefix', metavar='PREFIX',
    help="path to DUNE's source code tree")
parser.add_argument('author', metavar='AUTHOR',
    help="author's name, to be placed in headers")
parser.add_argument('name', metavar='NAME',
    help="task name (eg. Sensors/Imagenex872)")
args = parser.parse_args()

# Validate source code folder.
prefix = os.path.join(args.prefix, 'src')
if not os.path.isdir(prefix):
    print("ERROR: '%s' does not seem to be a DUNE's source code tree." % args.prefix)
    sys.exit(1)

# Create task folder.
namespace = args.name.split('/')
dst_folder = os.path.join(prefix, *namespace)
try:
    os.makedirs(dst_folder)
except FileExistsError:
    pass

# Create Task.cmake
file_cmake = os.path.join(dst_folder, 'Task.cmake')
open(file_cmake, 'w').close()

# Create Task.cpp
task = Task(args.author, namespace)
file_cpp = os.path.join(dst_folder, 'Task.cpp')
fd = open(file_cpp, 'w')
fd.write(str(task))
fd.close()

print("Created DUNE task in '%s'" % dst_folder)
