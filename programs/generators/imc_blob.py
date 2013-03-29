# -*- coding: utf-8 -*-
############################################################################
# Copyright 2007-2013 Universidade do Porto - Faculdade de Engenharia      #
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

from imc.utils import *
from imc.file import *
from imc.code import *

xml = sys.argv[1]
folder = sys.argv[2]

# Parse XML specification.
import xml.etree.ElementTree as ET
tree = ET.parse(xml)

# Remove 'description' tags.
for parent in tree.getiterator():
    for child in parent:
        if child.tag == 'description':
            parent.remove(child)

# Create output document.
root = tree.getroot()
text = b'<?xml version="1.0" encoding="UTF-8"?>\n' + ET.tostring(root, encoding = 'utf-8')

# Compress to temporary file.
import tempfile
tmp = tempfile.NamedTemporaryFile(delete = False)
import gzip
f_out = gzip.open(tmp.name, 'wb', compresslevel = 9)
f_out.write(text)
f_out.close()

################################################################################
# Blob.cpp                                                                     #
################################################################################

fd = File('Blob.cpp', folder)
fd.add_dune_headers('IMC/Blob.hpp')

# Byte array.
fd.append('static const unsigned char c_imc_blob[] = \n{')

import binascii
octets = []
with open(tmp.name, 'rb') as f_gz:
    h = binascii.hexlify(f_gz.read())
    octets += ['0x' + h[i : i + 2].decode() for i in range(0, len(h), 2)]

octets_per_line = 10

for i in range(0, len(octets), octets_per_line):
    l = octets[i : i + octets_per_line]
    s = ','
    if i + octets_per_line >= len(octets):
        s = ''
    fd.append(', '.join(l) + s)

fd.append('};')
fd.append('\n')

# getData()
f = Function('Blob::getData', 'const unsigned char*')
f.body('return c_imc_blob;')
fd.append(f)

# getSize()
f = Function('Blob::getSize', 'unsigned int')
f.body('return sizeof(c_imc_blob);')
fd.append(f)

fd.write()
