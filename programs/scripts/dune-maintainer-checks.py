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
import re
import sys
import shutil
import os.path
import subprocess
import argparse

# Camel case exceptions.
CAMEL = {
    'SCRTv4': 'scrtv4',
    'DFK51BG02H': 'dfk51bg02h',
    'PCTLv2': 'pctlv2',
    'MCBv2': 'mcbv2',
    'I18N': 'i18n',
    'I2C': 'i2c',
    'SuperTypes': 'supertypes',
    'DRand48': 'drand48',
    'Imagenex837B': 'imagenex_837b',
    'Imagenex881A': 'imagenex_881a',
    'Imagenex852': 'imagenex_852',
    'Edgetech2205': 'edgetech_2205',
    'LEDs': 'leds',
}

EXCLUDE = [
    '.git', 'vendor'
]

INCLUDE_EXT = [
    '.cpp', '.hpp', '.md', '.def', '.py', '.cmake', '.css', '.dox', '.el',
    '.html', '.in', '.ini', '.js',  '.po', '.pot', '.rc', '.sh', '.tex',
    '.txt', '.xml', '.xsl'
]

def camel_to_underscore(text):
    '''Convert camel case text to underscore separated text.'''
    if text in CAMEL:
        return CAMEL[text]

    s = re.sub('(.)([A-Z][a-z]+)', r'\1_\2', text)
    return re.sub('([a-z0-9])([A-Z])', r'\1_\2', s).lower()

def get_header_list(root):
    '''Retrieve list of header files.'''
    headers = []
    for dirname, dirnames, filenames in os.walk(root):
        for filename in filenames:
            if os.path.splitext(filename)[1] == '.hpp':
                headers.append(os.path.abspath(os.path.join(dirname, filename)))
    return headers

def make_header_guard(path):
    '''Make header guard string to a given path.'''
    parts = path.split(os.sep)
    macro = '_'.join([camel_to_underscore(p).upper() for p in parts])
    return macro + '_HPP_INCLUDED_'

def file_check_guard(src_dir, path):
    '''Check preprocessor header guards.'''
    base_path = path[len(src_dir) + 1:].replace('.hpp', '')
    fd = open(path)
    expected_guard = make_header_guard(base_path)
    actual_guard = ''
    for line in fd:
        line = line.strip()
        if line.startswith('#ifndef '):
            actual_guard = line.replace('#ifndef ', '').strip()
        elif line.startswith('#define '):
            s = line.replace('#define ', '').strip()
            if s != actual_guard:
                raise "invalid guard"
            break
    fd.close()

    if actual_guard != expected_guard:
        print('Guard should be: %s' % expected_guard)
        return False
    return True

def file_clean_whitespace(file):
    ifd = open(file, 'r')
    ofd = open(file + '.bak', 'w')
    mode = os.stat(file).st_mode
    previous_empty = False
    for line in ifd:
        if len(line.strip()) == 0:
            if previous_empty:
                continue
            previous_empty = True
        else:
            previous_empty = False

        line = line.rstrip().replace('\t', '  ')
        ofd.write(line + '\n')
    ifd.close()
    ofd.close()
    os.rename(file + '.bak', file)
    os.chmod(file, mode)

def clean_whitespace(root):
    files = set()
    for dirname, dirnames, filenames in os.walk(root):
        for filename in filenames:
            if os.path.splitext(filename)[1] not in INCLUDE_EXT:
                continue

            path = os.path.join(dirname, filename)
            path = path.replace(root + '/', '')
            add = True
            for exc in EXCLUDE:
                if path.startswith(exc):
                    add = False
                    break
            if add:
                files.add(path)

    for f in files:
        f = os.path.join(root, f)
        file_clean_whitespace(f)

def check_headers(root):
    # Run CMake to generate a few required headers.
    bld_dir = os.path.abspath(os.path.join(root, 'check-headers'))
    if os.path.isdir(bld_dir):
        shutil.rmtree(bld_dir)
    os.makedirs(bld_dir)
    os.chdir(bld_dir)
    subprocess.call(['cmake', '-DQT5=1', '..'])

    # Compile headers.
    cxx = ['g++', '-Wall', '-Wextra', '-Werror',
           '-Wno-missing-field-initializers', '-pedantic',
           '-x', 'c++-header',
           '-D', 'DUNE_TASK=',
           '-I', os.path.join(top_dir, 'src'),
           '-I', os.path.join(top_dir, 'src', 'Simulators', 'VSIM'),
           '-I', os.path.join(top_dir, 'vendor/libraries'),
           '-I', os.path.join(bld_dir, 'DUNEGeneratedFiles/src'),
           '-I', '/usr/include/Qt',
           '-I', '/usr/include/QtCore',
           '-I', '/usr/include/QtGui',
           '-I', '/usr/include/QtUiTools',
           '-o', '/dev/null'
           ]

    n = 1
    for hdr in headers:
        while True:
            print('[%u/%u] %s' % (n, len(headers), hdr))
            try:
                subprocess.check_call(cxx + [hdr])
                break
            except:
                subprocess.check_call(['emacs', hdr])
        n = n + 1

    # Remove CMake files.
    if os.path.isdir(bld_dir):
        shutil.rmtree(bld_dir)

# Find source folder.
script = os.path.abspath(__file__).replace('.pyc', '.py')
wrk_dir = os.path.dirname(script)
top_dir = os.path.abspath(os.path.join(wrk_dir, '..', '..'))
src_dir = os.path.abspath(os.path.join(top_dir, 'src'))

parser = argparse.ArgumentParser()
parser.add_argument('--clean-whitespace', action='store_true',
                    help='Clean whitespaces')
parser.add_argument('--check-headers', action='store_true',
                    help='Check if headers are self-contained')
parser.add_argument('--check-guards', action='store_true',
                    help='Check header guards')
parser.add_argument('--all', action='store_true',
                    help='Perform all checks')
args = parser.parse_args()

if args.check_guards or args.all:
    headers = get_header_list(src_dir)
    for header in headers:
        while True:
            if file_check_guard(src_dir, header):
                break
            else:
                subprocess.call(['emacs', header])

if args.clean_whitespace or args.all:
    clean_whitespace(top_dir)

if args.check_headers or args.all:
    check_headers(top_dir)
