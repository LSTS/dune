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

from imc import utils

class Macro:
    def __init__(self, name, value, desc):
        self._data = {}
        self._data['name'] = 'DUNE_IMC_' + name
        self._data['value'] = value
        self._data['desc'] = desc

    def __str__(self):
        return utils.comment(self._data['desc']) + \
               '#define %(name)s %(value)s' % self._data

class Var:
    def __init__(self, name, type, desc = ''):
        self._data = {}
        self._data['name'] = name
        self._data['type'] = type
        self._data['desc'] = desc

    def as_func_arg(self):
        return '%(type)s %(name)s' % self._data

    def as_decl(self):
        return utils.comment(self._data['desc']) + \
               '%(type)s %(name)s;' % self._data

    def __str__(self):
        return '%(type)s %(name)s' % self._data

class StructField:
    def __init__(self, name, type, desc):
        self._data = {}
        self._data['name'] = name
        self._data['type'] = type
        self._data['desc'] = desc

    def __str__(self):
        return utils.comment(self._data['desc']) + \
               '%(type)s %(name)s' % self._data

class Struct:
    def __init__(self, name, desc):
        self._name = name
        self._desc = desc
        self._fields = []

    def add_field(self, field):
        self._fields.append(field)

    def __str__(self):
        out = utils.comment(self._desc)
        out += 'struct ' + self._name + '\n'
        out += '{\n'
        out += ';\n'.join([str(f) for f in self._fields]) + ';\n'
        out += '};\n'
        return out

class EnumField:
    def __init__(self, name, value, desc):
        self._data = {}
        self._data['name'] = name
        self._data['value'] = value
        self._data['desc'] = desc

    def __str__(self):
        if self._data['value'] == '':
            return utils.comment(self._data['desc']) + \
                   '%(name)s' % self._data
        return utils.comment(self._data['desc']) + \
               '%(name)s = %(value)s' % self._data

class Enum:
    def __init__(self, name, desc):
        self._name = name
        self._desc = desc
        self._fields = []

    def add_field(self, field):
        self._fields.append(field)

    def __str__(self):
        out = utils.comment(self._desc)
        out += 'enum ' + self._name + '\n'
        out += '{\n'
        out += ',\n'.join([str(f) for f in self._fields]) + '\n'
        out += '};\n'
        return out

class Function:
    def __init__(self, name, rett = None, args = None, const = False, inline = False, static = False):
        self._data = {}
        self._name = name
        self._rett = rett
        self._args = args
        self._const = const
        self._inline = inline
        self._body = ''
        self._class = None
        self._static = static

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
