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

import sys
import os.path

if len(sys.argv) != 3:
    print('Usage: %s <IMC_Addresses.xml> <imc-addresses.ini>' % sys.argv[0])
    sys.exit(1)

# Parse XML specification.
import xml.etree.ElementTree as ET
tree = ET.parse(sys.argv[1])
root = tree.getroot()

fd = open(sys.argv[2], 'w')

# Insert licence.
lfd = open(os.path.abspath(__file__).replace('.pyc', '.py'))
for line in lfd:
    line = line.strip()
    if line.startswith('#') and line.endswith('#'):
        fd.write(line + '\n')
    if len(line) == 0:
        fd.write('# ' + 'Automatically generated, do not edit.'.ljust(73) + '#\n')
        fd.write(('#' * 76) + '\n\n')
        break

fd.write('[IMC Addresses]\n')
for addr in root.findall('address'):
    fd.write('%-20s = %s\n' % (addr.get('name'), addr.get('id')))
