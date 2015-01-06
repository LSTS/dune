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
# This script will generate parameter XML files for all vehicles in        #
# all supported languages.                                                 #
############################################################################

import os
import sys
import glob
import subprocess

# Destination folder.
for arg in sys.argv:
    if arg in ['-h', '--help']:
        print('Usage: %s [DESTINATION_FOLDER]' % sys.argv[0])
        sys.exit(1)

dst_dir = '.'
if len(sys.argv) == 2:
    if not os.path.isdir(sys.argv[1]):
        print("ERROR: destination '%s' is not a folder." % sys.argv[1])
        sys.exit(1)
    dst_dir = sys.argv[1]

# Find available locales.
langs = subprocess.check_output(['localedef', '--list'], universal_newlines = True)
langs = set(langs.split(os.linesep))
langs.remove('')

# Find source folder.
script = os.path.abspath(__file__).replace('.pyc', '.py')
wrk_dir = os.path.dirname(script)
top_dir = os.path.abspath(os.path.join(wrk_dir, '..', '..'))
etc_dir = os.path.abspath(os.path.join(top_dir, 'etc'))
i18n_dir = os.path.abspath(os.path.join(top_dir, 'i18n'))

# Find config files.
list_ini = []
inis = glob.glob(os.path.join(etc_dir, '*.ini'))
for ini in inis:
    f = os.path.splitext(os.path.basename(ini))[0]
    list_ini.append(f)

# Find translations.
i18n_set = set()
i18n_set.add('en_US.utf8')
i18ns = glob.glob(os.path.join(i18n_dir, '*'))
for i18n in i18ns:
    if os.path.isdir(i18n):
        d = os.path.basename(i18n)
        i18n_set.add(d + '.utf8')

# Find locales with UTF-8 encoding.
sint = i18n_set.intersection(langs)
sdif = i18n_set.difference(langs)

if len(sdif) != 0:
    print("ERROR: your system does not support the following languages: %s" % ' '.join(sdif))
    sys.exit(1)

# Execute DUNE.
if not os.path.exists('./dune'):
    print("ERROR: this script must be executed in DUNE's build folder.")
    sys.exit(1)

for i18n in sint:
    name = i18n.split('.')[0]
    lang = name + '.UTF-8'

    for ini in list_ini:
        os.environ['LC_ALL'] = lang
        os.environ['LANG'] = lang
        os.environ['LANGUAGE'] = lang
        sys.stderr.write('\n* Processing %s:\n\n' % ini)
        sys.stderr.flush()
        subprocess.check_call(['./dune', '-c', ini, '-p', 'Hardware', '-X', dst_dir])

xmls = glob.glob(os.path.join(dst_dir, '*.xml'))
for xml in xmls:
    try:
        subprocess.check_call(['xmllint', '--format', xml, '-o', 'tmp.xml'])
        os.remove(xml)
        os.rename('tmp.xml', xml)
    except:
        pass
