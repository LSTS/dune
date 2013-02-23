# -*- coding: utf-8 -*-
############################################################################
# Copyright (C) 2007-2013 Laboratório de Sistemas e Tecnologia Subaquática #
# Departamento de Engenharia Electrotécnica e de Computadores              #
# Rua Dr. Roberto Frias, 4200-465 Porto, Portugal                          #
############################################################################
# Author: Ricardo Martins                                                  #
############################################################################
# $Id:: status_codes.py 12667 2013-01-22 02:44:42Z rasm                  $:#
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
fd = File('Codes.hpp', dst_folder, ns = ['DUNE', 'Status'])
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
fd = File('Messages.cpp', dst_folder, ns = ['DUNE', 'Status'])
fd.add_dune_headers('Config.hpp', 'Status/Messages.hpp')
fd.append('static const char* c_status_messages[%u] =\n{' % count)
strings = ['DTR_RT("%(string)s")' % msg for msg in msgs]
fd.append(',\n'.join(strings))
fd.append('};\n')
fd.append(get);
fd.write()
