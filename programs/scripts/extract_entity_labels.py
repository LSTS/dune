# -*- coding: utf-8 -*-
############################################################################
# Copyright (C) 2007-2013 Laboratório de Sistemas e Tecnologia Subaquática #
# Departamento de Engenharia Electrotécnica e de Computadores              #
# Rua Dr. Roberto Frias, 4200-465 Porto, Portugal                          #
############################################################################
# Author: Ricardo Martins                                                  #
############################################################################
# $Id:: extract_entity_labels.py 12303 2013-01-01 02:14:25Z jbraga       $:#
############################################################################

import sys
import os
import re

def get_entity_labels(path):
    labels = set()
    fd = open(path, 'r')
    for line in fd:
        m = re.match('Entity Label\s*=\s*([\w\s]+)\Z', line)
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
