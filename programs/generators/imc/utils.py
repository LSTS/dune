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

import hashlib
import os.path

# Sanitize the name of enumerations.
def get_enum_name(name):
    return name.replace(' ', '') + 'Enum'

# Sanitize the name of bitfields.
def get_bfield_name(name):
    return name.replace(' ', '') + 'Bits'

# Retrieve the name of a field.
def get_name(node):
    return node.get('abbrev').lower()

# Convert text to C++ comment.
def comment(text, dox = True, nl = '\n'):
    c = ''
    if dox:
        c = '!'
    return '//' + c + ' ' + text + '.' + nl

# Extract copyright from this script and convert it to a format
# suitable to be used in C++ files.
def get_cxx_copyright(xml_md5, skip_md5 = False):
    fd = open(os.path.abspath(__file__).replace('.pyc', '.py'))
    result = []
    header = False
    for line in fd.readlines():
        line = line.strip()
        if len(line) == 0:
            break
        if line.startswith('##') and not header:
            header = True
            result.append(line)
        elif header:
            result.append(line)

    result = [l[1:] for l in result]
    result = ['//' + l for l in result]
    result = [l.replace('#', '*') for l in result]
    result.append('// Automatically generated.'.ljust(len(result[0]) - 1) + '*')
    result.append(result[0])
    if not skip_md5:
        result.append(('// IMC XML MD5: ' + xml_md5).ljust(len(result[0]) - 1) + '*')
        result.append(result[0])
    return '\n'.join(result) + '\n'

# Cleanup and indent source file.
def beautify(text):
    indent = 0
    blank = False
    list0 = []

    # Remove extra empty lines and indent.
    lines = text.splitlines()
    for line in lines:
        strip = line.strip()
        if len(strip) == 0:
            if blank:
                continue
            else:
                blank = True
                list0.append('')
                continue
        else:
            blank = False

        if strip == '};' and len(list0[-1]) == 0:
            list0.pop()

        if strip == '{':
            list0.append(' ' * indent + strip)
            indent += 2
        elif strip == '}' or strip == '};':
            indent -=2
            list0.append(' ' * indent + strip)
        elif strip == 'public:' or strip == 'protected:' or strip == 'public:':
            list0.append(' ' * (indent - 2) + strip)
        else:
            list0.append(' ' * indent + strip)

    # Remove empty lines between blocks.
    list1 = []
    for line in list0:
        strip = line.strip()
        if (strip == '}' or strip == '};') and len(list1[-1]) == 0:
            list1.pop()
        list1.append(line)

    # Remove extra empty lines at EOF.
    while len(list1[-1]) == 0:
        list1.pop()

    return '\n'.join(list1) + '\n'

# Convert camel case abbrev to proper variable name.
def abbrev_to_var(abbrev, prefix = ''):
    name = ''
    for c in abbrev:
        if c.isupper():
            name += '_' + c
        else:
            name += c

    if prefix == '':
        return name
    else:
        return prefix + '_' + name[1:].lower()

# Convert camel case abbrev to proper macro name.
def abbrev_to_macro(abbrev, prefix = ''):
    name = ''
    for c in abbrev:
        if c.isupper():
            name += '_' + c
        else:
            name += c

    if prefix == '':
        return name
    else:
        return prefix + '_' + name[1:].upper()

# Compute MD5 sum.
def compute_md5(imc_xml):
    m = hashlib.md5()
    m.update(open(imc_xml, 'rb').read())
    return m.hexdigest()

def file_md5_matches(file_name, xml_md5):
    cpp_md5 = ''
    try:
        fd = open(file_name, 'r')
    except:
        return False

    for line in fd:
        if line.strip().startswith('// IMC XML MD5:'):
            parts = line.split(':')
            cpp_md5 = parts[1].split()
            cpp_md5 = cpp_md5[0]

    return xml_md5 == cpp_md5
