# -*- coding: utf-8 -*-
############################################################################
# Copyright (C) 2007-2013 Laboratório de Sistemas e Tecnologia Subaquática #
# Departamento de Engenharia Electrotécnica e de Computadores              #
# Rua Dr. Roberto Frias, 4200-465 Porto, Portugal                          #
############################################################################
# Author: Ricardo Martins                                                  #
############################################################################
# $Id:: imc_addresses.py 12303 2013-01-01 02:14:25Z jbraga               $:#
############################################################################

import sys
if len(sys.argv) != 3:
    print('Usage: %s <IMC_Addresses.xml> <imc-addresses.ini>' % sys.argv[0])
    sys.exit(1)

# Parse XML specification.
import xml.etree.ElementTree as ET
tree = ET.parse(sys.argv[1])
root = tree.getroot()

fd = open(sys.argv[2], 'w')

fd.write('############################################################################\n')
fd.write('# Copyright (C) 2007-2013 Laboratório de Sistemas e Tecnologia Subaquática #\n')
fd.write('# Departamento de Engenharia Electrotécnica e de Computadores              #\n')
fd.write('# Rua Dr. Roberto Frias, 4200-465 Porto, Portugal                          #\n')
fd.write('############################################################################\n')
fd.write('# Author: Ricardo Martins                                                  #\n')
fd.write('############################################################################\n')
fd.write('# $Id:: imc_addresses.py 12303 2013-01-01 02:14:25Z jbraga               $:#\n')
fd.write('############################################################################\n')
fd.write('# Automatically generated do not edit.                                     #\n')
fd.write('############################################################################\n')
fd.write('\n')
fd.write('[IMC Addresses]\n')
for addr in root.findall('address'):
    fd.write('%-20s = %s\n' % (addr.get('name'), addr.get('id')))
