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
import os
import re

def get_entity_labels(path):
    labels = set()
    fd = open(path, 'r')
    for line in fd:
        m = re.match('Entity Label\s*=\s*/?\s*([\w\s]+/?[\w\s]+)\Z', line)
        if m is not None:
            labels.add(m.group(1).strip())
    return labels

if len(sys.argv) < 3:
    print('Usage: %s <path_to_etc> <destination_file>' % sys.argv[0])
    sys.exit(1)

etc = sys.argv[1]

labels = set()
for root, dirs, files in os.walk(etc):
    for filename in files:
        if not filename.endswith('.ini'):
            continue
        base = root[len(etc):]
        if base.startswith('/development') or base.startswith('/testing'):
            continue
        labels.update(get_entity_labels(os.path.join(root, filename)))

labels = list(labels)
labels.sort()
fd = open(sys.argv[2], 'w')
for label in labels:
    fd.write('DTR_RT("%s")\n' % label)
