# -*- coding: utf-8 -*-
############################################################################
# Copyright 2007-2024 Universidade do Porto - Faculdade de Engenharia      #
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
# Author: Luis Venancio                                                    #
############################################################################

import sys
import re
import os

# Check for help
for arg in sys.argv:
    if arg in ['-h', '--help']:
        print('Usage: %s [PATH TO all.h FILE] [PATH TO TARGET FILE]' % sys.argv[0])
        sys.exit(1)

# Check arguments
if len(sys.argv) != 3:
    print("ERROR: Too many or too few arguments." % sys.argv[1])
    sys.exit(1)
else:
    if not os.path.isfile(sys.argv[1]):
        print("ERROR: path '%s' is not a file." % sys.argv[1])
        sys.exit(1)
    else:
        path_to_all_file = sys.argv[1]
    
    if not os.path.isfile(sys.argv[2]):
        print("ERROR: path '%s' is not a file." % sys.argv[2])
        sys.exit(1)
    else:
        path_to_destination_file = sys.argv[2]


# Get names and IDs of all messages
fd = open(path_to_all_file, 'r')
names_and_ids = []
for line in fd:
    line = line.strip()
    if len(line) < 1:
        continue
    if not line.startswith('# define MAVLINK_MESSAGE_NAMES {'):
        continue
    line = line[32:-1]
    line = re.sub('},', '}.', line)
    msgs = line.split('.')

    for msg in msgs:
        msg = msg.replace('{','').replace('}','').strip()
        name_and_id = msg.split(',', 1)
        names_and_ids.append([int(name_and_id[1]), name_and_id[0]])

    break
names_and_ids.sort(key=lambda a: a[0])
fd.close()

# Copy original header
fd = open(path_to_destination_file, 'r')
header = []
for line in fd:
    if line.startswith('//'):
        header.append(line)
    if len(line) < 1:
        break
fd.close()

# Overwrite header
fd = open(path_to_destination_file, 'w')
for line in header:
    fd.write(line)
fd.write('\n')

# Write message ID codes
for id, name in names_and_ids:
    fd.write('MSGID({}, {})\n'.format(id, name))
fd.write('\n#undef MSGID')
fd.close()


