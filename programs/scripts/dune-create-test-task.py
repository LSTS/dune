# -*- coding: utf-8 -*-
############################################################################
# Copyright 2007-2025 Universidade do Porto - Faculdade de Engenharia      #
# Laboratório de Sistemas e Tecnologia Subaquática (LSTS)                  #
############################################################################
# This file is part of DUNE: Unified Navigation Environment.               #
#                                                                          #
# Commercial Licence Usage                                                 #
# Licencees holding valid commercial DUNE licences may use this file in    #
# accordance with the commercial licence agreement provided with the       #
# Software or, alternatively, in accordance with the terms contained in a  #
# written agreement between you and Faculdade de Engenharia da             #
# Universidade do Porto. For licensing terms, conditions, and further      #
# information contact lsts@fe.up.pt.                                       #
#                                                                          #
# Modified European Union Public Licence - EUPL v.1.1 Usage                #
# Alternatively, this file may be used under the terms of the Modified     #
# EUPL, Version 1.1 only (the "Licence"), appearing in the file LICENCE.md #
# included in the packaging of this file. You may not use this work        #
# except in compliance with the Licence. Unless required by applicable     #
# law or agreed to in writing, software distributed under the Licence is   #
# distributed on an "AS IS" basis, WITHOUT WARRANTIES OR CONDITIONS OF     #
# ANY KIND, either express or implied. See the Licence for the specific    #
# language governing permissions and limitations at                        #
# https://github.com/LSTS/dune/blob/master/LICENCE.md and                  #
# http://ec.europa.eu/idabc/eupl.html.                                     #
############################################################################
# Author: Luis Venâncio (based on dune-create-task.py)                     #
############################################################################

import sys
import argparse
import os

BODY = [
    '[Require common/imc-addresses.ini]', '\n',
    '[Require auv/transports.ini]', '\n',
    '\n',
    '[General]', '\n',
    'Vehicle                                 = test', '\n',
    '\n',
    '[Test.Test]', '\n',
    'Enabled                                 = Always', '\n',
    'Entity Label                            = Test', '\n'
    ]

def licence(author):
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
                line = ('# Author: ' + author).ljust(len(line) - 1) + '#'
            block.append(line)
    return '\n'.join(block) + '\n\n'

# Parse command line arguments.
parser = argparse.ArgumentParser(
    description="This script will create a DUNE test task scaffold, for quick tests.")
parser.add_argument('prefix', metavar='PREFIX',
    help="path to DUNE's source code tree")
args = parser.parse_args()

# Set author name.
author = "Test (do not commit!)"

# Validate source code folder.
task_creator_path = os.path.join(args.prefix, 'programs', 'scripts', 'dune-create-task.py')
if not os.path.isfile(task_creator_path):
    print("ERROR: '%s' does not seem to be a DUNE's source code tree." % args.prefix)
    sys.exit(1)

# Create task.
create_task_cmd = "python " + task_creator_path + " " + args.prefix + " \""+ author +"\" " + "Test/Test"
os.system(create_task_cmd)

# Create configuration.
config = licence(author)
for line in BODY:
    config += line
file_ini = os.path.join(args.prefix, 'etc', 'test.ini')
fd = open(file_ini, 'w')
fd.write(str(config))
fd.close()
print("Created DUNE configuration in '%s'" % file_ini)
