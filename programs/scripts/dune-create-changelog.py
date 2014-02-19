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

import os
import sys
import os.path
import subprocess
import textwrap
import re

# Common typos.
TYPOS = {
    '^common/imc-addresses': 'Config: common/imc-addresses',
    'common/imc-adresses': 'common/imc-addresses',
    'taks': 'tasks',
    'Transports.ArdupilotSITL': 'Transports/ArdupilotSITL',
    'Monitors.Medium': 'Monitors/Medium',
    'Maneuver.VehicleFormation.FormCollAvoid': 'Maneuver/VehicleFormation/FormCollAvoid',
    'IMC Protocol': 'DUNE/IMC'
    }

# Modules with submodules.
SUBMODS = ['Config', 'Programs', 'Vendor']

def get_version(src_dir):
    vers = {}
    fd = open(os.path.join(src_dir, 'CMakeLists.txt'))
    for line in fd:
        line = line.strip()
        if line.startswith('set(PROJECT_VERSION_'):
            v = line.replace('set(PROJECT_VERSION_', '').replace('"', '').replace(')', '')
            p = v.split()
            if len(p) == 2:
                vers[p[0]] = p[1]
    if vers['PAT'] != '0':
        return '%(MAJ)s.%(MIN)s.%(PAT)s' % vers
    return '%(MAJ)s.%(MIN)s.%(PAT)s-rc%(RCN)s' % vers

def fix_whitespace(s):
    return ' '.join(s.split())

def fix_typos(s):
    for t in TYPOS.keys():
        s = re.sub(t, TYPOS[t], s)
    return s

def fix_punctuation(s):
    if not s.endswith('.'):
        return s + '.'
    return s

def fix(s):
    return fix_punctuation(fix_whitespace(fix_typos(s)))

def print_msg(s):
    w = textwrap.wrap('- ' + s, width=77)
    print(w[0])
    w.pop(0)
    for l in w:
        print(' ', l.strip())

def sort_keys(k):
    p = []
    t = []
    b = []
    for e in k:
        if e.startswith('Programs') or e.startswith('Config'):
            p.append(e)
        elif e.startswith('DUNE'):
            t.append(e)
        else:
            b.append(e)
    p.sort()
    t.sort()
    b.sort()
    return p + t + b

if len(sys.argv) != 2:
    print('Usage:', sys.argv[0], '<DUNE_SOURCE>')
    sys.exit(1)

# Find source folder.
src_dir = sys.argv[1]

# Get previous version.
out = subprocess.check_output(['git', '-C', src_dir, 'tag', '-l', 'dune-*'], universal_newlines = True)
lines = out.split('\n')
lines.remove('')
lines.sort()
last = lines[-1].strip()

# Get commit messages.
out = subprocess.check_output(['git', '-C', src_dir, 'log', '--pretty=oneline', '%s..HEAD' % last], universal_newlines = True)
lines = out.split('\n')
lines.remove('')

MODS = {}

for l in lines:
    parts = l.split(' ', 1)
    l = fix(parts[1])

    parts = l.split(':', 1)
    if len(parts) != 2:
        continue

    mod = parts[0].strip()
    smod = ''
    msg = parts[1].strip()

    if mod in SUBMODS:
        s = msg.split(':', 2)
        smod = s[0].strip()
        msg = s[1].strip()

    if mod not in MODS:
        MODS[mod] = {}

    if smod in MODS[mod]:
        MODS[mod][smod].append(msg)
    else:
        MODS[mod][smod] = [msg]

vers = get_version(src_dir)
title = 'DUNE v' + vers
print(title)
print('=' * len(title))
print()

keys = sort_keys(list(MODS.keys()))
for k in keys:
    l = k
    if k == 'Config':
        l = 'Configurations'
    print(l)
    print('-' * len(l))

    sks = list(MODS[k].keys())
    sks.sort()
    for sk in sks:
        if sk.startswith('development/'):
            continue
        if len(sk) > 0:
            print('\n###', sk)
        for msg in MODS[k][sk]:
            print_msg(msg)
    print()
