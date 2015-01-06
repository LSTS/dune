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
import re

from imc.utils import *
from imc.file import *
from imc.code import *

src_file = sys.argv[1]
dst_folder = sys.argv[2]

fd = open(src_file, 'r')

msgs = []
number = 0
for line in fd:
    line = line.strip()
    if len(line) < 1:
        continue
    if not line.startswith('CODE('):
        continue
    line = line.replace('CODE(', 'CODE_')
    line = re.sub('\)$', '', line)
    parts = line.split(',', 1)
    macro = parts[0].strip()
    string = parts[1].strip()
    string = re.sub('^"', '', string)
    string = re.sub('"$', '', string)
    msgs.append({'number': number,
                 'macro': macro,
                 'string': string,
                 'desc': string[0].upper() + string[1:]
                 })
    number += 1

# Codes.
fd = File('Codes.hpp', dst_folder, ns = ['DUNE', 'Status'], skip_md5 = True)
fd.add_dune_headers('Config.hpp')
count = 0
enum = Enum('Code', 'Status codes')
for msg in msgs:
    enum.add_field(EnumField(msg['macro'], msg['number'], msg['desc']))
    count += 1
fd.append(enum)
fd.write()

# Getter function.
get = Function('getString', 'const char*',  [Var('code', 'Code')])
get.add_body('return c_status_messages[code];')

# CPP.
fd = File('Messages.cpp', dst_folder, ns = ['DUNE', 'Status'], skip_md5 = True)
fd.add_dune_headers('Config.hpp', 'Status/Messages.hpp')
fd.append('static const char* c_status_messages[%u] =\n{' % count)
strings = ['DTR_RT("%(string)s")' % msg for msg in msgs]
fd.append(',\n'.join(strings))
fd.append('};\n')
fd.append(get);
fd.write()
