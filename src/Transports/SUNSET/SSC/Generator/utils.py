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
def get_cxx_copyright():
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

class Macro:
    def __init__(self, name, value, desc):
        self._data = {}
        self._data['name'] = 'TRANSPORTS_SUNSET_' + name
        self._data['value'] = value
        self._data['desc'] = desc

    def __str__(self):
        return comment(self._data['desc']) + \
               '#define %(name)s %(value)s' % self._data

class Var:
    def __init__(self, name, type, value = None, desc = ''):
        self._data = {}
        self._data['name'] = name
        self._data['type'] = type
        self._data['desc'] = desc
        self._data['value'] = value

    def as_func_arg(self):
        if self._data['value'] is None:
            return '%(type)s %(name)s' % self._data
        else:
            return '%(type)s %(name)s = %(value)s' % self._data

    def as_decl(self):
        if len(self._data['desc']) == 0:
            return '%(type)s %(name)s;' % self._data
        else:
            return comment(self._data['desc']) + \
                   '%(type)s %(name)s;' % self._data

    def __str__(self):
        return '%(type)s %(name)s' % self._data

class StructField:
    def __init__(self, name, type, desc = None, const = None):
        self._data = {}
        self._data['name'] = name
        self._data['type'] = type
        self._data['desc'] = desc
        self._data['const'] = const

    def __str__(self):
        if self._data['desc'] is None:
            com = ''
        else:
            com = comment(self._data['desc'])

        if self._data['const'] is None:
            return com + '%(type)s %(name)s' % self._data
        else:
            return com + 'const %(type)s %(name)s' % self._data

class Struct:
    def __init__(self, name, desc = None):
        self._name = name
        self._desc = desc
        self._fields = []

    def add_field(self, field):
        self._fields.append(field)

    def __str__(self):
        if self._desc is None:
            out = ''
        else:
            out = comment(self._desc)

        out += 'struct ' + self._name + '\n'
        out += '{\n'
        out += ';\n'.join([str(f) for f in self._fields]) + ';\n'
        out += '};\n'

        for f in self._fields:
            if f._data['const'] is not None:
                '%s::%s = %s;' % (self._name, f._data['name'], f._data['const'])
        return out

class EnumField:
    def __init__(self, name, value = None, desc = None):
        self._data = {}
        self._data['name'] = name
        self._data['value'] = value
        self._data['desc'] = desc

    def __str__(self):
        if self._data['desc'] is None:
            com = ''
        else:
            com = comment(self._data['desc'])

        if self._data['value'] is None:
            return com + '%(name)s' % self._data
        return com + '%(name)s = %(value)s' % self._data

class Enum:
    def __init__(self, name, desc = ''):
        self._name = name
        self._desc = desc
        self._fields = []

    def add_field(self, field):
        self._fields.append(field)

    def __str__(self):
        if len(self._desc) != 0:
            out = comment(self._desc)
        else:
            out = ''
        out += 'enum ' + self._name + '\n'
        out += '{\n'
        out += ',\n'.join([str(f) for f in self._fields]) + '\n'
        out += '};\n'
        return out

class Function:
    def __init__(self, name, rett = None, args = None, const = False, inline = False, static = False, template = None, specialization = False):
        self._data = {}
        self._name = name
        self._rett = rett
        self._args = args
        self._const = const
        self._inline = inline
        self._body = ''
        self._class = None
        self._static = static
        self._template = template
        self._specialization = specialization

        if self._args is None:
            self._args_str = 'void'
        else:
            self._args_str = ', '.join([v.as_func_arg() for v in self._args])

        if self._const:
            self._const_str = ' const'
        else:
            self._const_str = ''

    def is_inline(self):
        return self._inline

    def set_class(self, name):
        self._class = name

    def body(self, text):
        self._body = text

    def add_body(self, text):
        self._body += text + '\n'

    def decl(self):
        out = ''

        if self._static:
            out += 'static '

        if self._rett is not None:
            out += self._rett + '\n';

        return out + \
               self._name + '(' + self._args_str + ')' + self._const_str +';\n' \

    def __str__(self):
        out = ''

        if self._template is not None:
            if self._specialization:
                out += 'template <>\n'
            else:
                out += 'template <typename Type>\n'

        if self._static:
            out += 'static '

        if self._rett is not None:
            out += self._rett + '\n';

        if self._class is not None:
            name = self._class + '::' + self._name
        else:
            name = self._name

        return out + \
               name + '(' + self._args_str + ')' + self._const_str +'\n' \
               '{\n'+ self._body + '\n}\n'

import os.path

class File:
    def __init__(self, name, folder, ns = True, stdout = False):
        self.path = os.path.join(folder, name)
        self.path_file = os.path.split(self.path)[1]
        self.path_ext = os.path.splitext(self.path)[1]
        self.name = os.path.splitext(self.path_file)[0]
        self.isoc_hdrs = []
        self.dune_hdrs = []
        self.local_hdrs = []
        self.text = ''
        self._ns = ns
        self._stdout = stdout

    def append(self, text):
        self.text += str(text) + '\n'

    def add_isoc_headers(self, *headers):
        self.isoc_hdrs += headers

    def add_local_headers(self, *headers):
        self.local_hdrs += headers

    def add_dune_headers(self, *headers):
        self.dune_hdrs += ['DUNE/' + h for h in headers]

    def write(self):
        print('* ' + self.path)
        text = get_cxx_copyright() + '\n'
        if self.path_ext == '.hpp':
            if type(self._ns) is list:
                prefix = ('_'.join(self._ns)).upper()
            else:
                prefix = 'TRANSPORTS_SUNSET_SSC'
            guard = prefix + '_' + self.name.upper() + '_HPP_INCLUDED_'
            text += '#ifndef ' + guard + '\n'
            text += '#define ' + guard + '\n\n'

        if len(self.isoc_hdrs) > 0:
            text += comment('ISO C++ 98 headers', dox = False)
            for hdr in self.isoc_hdrs:
                text += '#include <' + hdr + '>\n'
            text += '\n'

        if len(self.dune_hdrs) > 0:
            text += comment('DUNE headers', dox = False)
            for hdr in self.dune_hdrs:
                text += '#include <' + hdr + '>\n'
            text += '\n'

        if len(self.local_hdrs) > 0:
            text += comment('Local headers', dox = False)
            for hdr in self.local_hdrs:
                text += '#include "' + hdr + '"\n'
            text += '\n'

        if self._ns:
            if type(self._ns) is list:
                for ns in self._ns:
                    text += 'namespace %s\n{\n' % ns
            else:
                text += 'namespace Transports\n{\n'
                text += 'namespace SUNSET\n{\n'

        text += self.text

        if self._ns:
            if type(self._ns) is list:
                for ns in self._ns:
                    text += '}\n'
            else:
                text += '}\n'
                text += '}\n'

        if self.path_ext == '.hpp':
            text += '\n#endif'

        text += '\n'
        new_text = beautify(text)
        try:
            old_text = open(self.path).read()
        except:
            old_text = ''

        if self._stdout:
            import sys
            sys.stdout.write(new_text)
            return

        if new_text != old_text:
            fd = open(self.path, 'w')
            fd.write(new_text)
            fd.close()
