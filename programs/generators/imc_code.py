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

from imc.utils import *
from imc.file import *
from imc.code import *
from imc.deps import *

CONST_NULL_ID = 65535

def get_cxx_type(field_node):
    type = field_node.get('type')
    msg_type = field_node.get('message-type', 'Message')
    if type == 'plaintext':
        return 'std::string'
    elif type == 'rawdata':
        return 'std::vector<char>'
    elif type == 'message':
        return 'InlineMessage<%s>' % msg_type
    elif type == 'message-list':
        return 'MessageList<%s>' % msg_type
    else:
        return type

def is_fixed(field_node):
    type = field_node.get('type')
    if type == 'message':
        return False
    elif type == 'plaintext':
        return False
    elif type == 'rawdata':
        return False
    elif type == 'message-list':
        return False
    return True

def get_clear(field_node):
    rv = get_name(field_node)
    if is_fixed(field_node):
        rv += ' = 0'
    else:
        rv += '.clear()'
    return rv + ';'

def get_not_equal(field_node):
    name = get_name(field_node)
    return 'if ({0} != other__.{0}) return false;'.format(name)

def get_field_names(message):
    return [get_name(field) for field in message.findall('field')]

def call_inline_message_function(name, func, args):
    return 'if (!' + name + '.isNull())\n{\n' + \
           name + '.get()->' + func + '(' + args + ');\n' + \
           '}\n'
def call_message_list_function(name, func, args):
    return name + '.' + func + '(' + args + ');\n'

class Message:
    def __init__(self, root, node, consts):
        self._root = root
        self._node = node
        self._consts = consts
        self._public = []
        self._protected = []
        self._abbrev = self._node.get('abbrev')
        self._base = 'Message'
        if 'extends' in self._node.attrib:
            self._base = self._node.attrib['extends']
        self._has_id = 'id' in self._node.attrib

    def make_getIdStatic(self):
        if not self._has_id:
            return

        f = Function('getIdStatic', 'uint16_t', static = True, inline = True)
        f.body('return %(id)s;' % self._node.attrib)
        self._public.append(f)

    def make_AssignId(self):
        if self._has_id:
            return 'm_header.mgid = ' + self._node.get('id') + ';'
        return ''

    #fixme: base class
    def make_constructor(self):
        f = Function(self._abbrev)
        assign = self.make_AssignId()
        if len(assign) > 0:
            f.add_body(assign)
        f.add_body('clear();')
        for field in self._node.findall("field[@type='message']"):
            f.add_body(get_name(field) + '.setParent(this);')
        for field in self._node.findall("field[@type='message-list']"):
            f.add_body(get_name(field) + '.setParent(this);')
        self._public.append(f)

    def make_clone(self):
        if not self._has_id:
            return
        f = Function('clone', 'Message*', const = True, inline = True)
        f.body('return new %(abbrev)s(*this);' % self._node.attrib)
        self._public.append(f)

    def make_clear(self):
        f = Function('clear', 'void')
        f.add_body('%s::clear();' % self._base)
        f.add_body('\n'.join([get_clear(field) for field in self._node.findall('field')]))
        self._public.append(f)

    def make_fieldsEqual(self):
        f = Function('fieldsEqual', 'bool', [Var('msg__', 'const Message&')], const = True)
        f.add_body('if (!%s::fieldsEqual(msg__)) return false;' % self._base)
        if self.has_fields():
            f.add_body('const IMC::' + self._abbrev + '& other__ = static_cast<const ' + self._abbrev + '&>(msg__);')
            f.add_body('\n'.join([get_not_equal(field) for field in self._node.findall('field')]))
        f.add_body('return true;')
        self._public.append(f)

    def make_serializeFields(self):
        f = Function('serializeFields', 'uint8_t*', [Var('bfr__', 'uint8_t*')], const = True)
        f.add_body('uint8_t* ptr__ = bfr__;')
        f.add_body('ptr__ = %s::serializeFields(ptr__);' % self._base)

        for field in self._node.findall('field'):
            if field.get('type').startswith('message'):
                f.add_body('ptr__ += %s.serialize(ptr__);' % get_name(field))
            else:
                f.add_body('ptr__ += IMC::serialize(%s, ptr__);' % get_name(field))

        f.add_body('return ptr__;')
        self._public.append(f)

    def make_deserializeFields(self):
        f = Function('deserializeFields', 'uint16_t', [Var('bfr__', 'const uint8_t*'), Var('size__', 'uint16_t')])
        f.add_body('const uint8_t* start__ = bfr__;')
        f.add_body('bfr__ += %s::deserializeFields(bfr__, size__);' % self._base)

        for field in self._node.findall('field'):
            if field.get('type').startswith('message'):
                f.add_body('bfr__ += %s.deserialize(bfr__, size__);' % get_name(field))
            else:
                f.add_body('bfr__ += IMC::deserialize(%s, bfr__, size__);' % get_name(field))
        f.add_body('return bfr__ - start__;')

        self._public.append(f)

    def make_reverseDeserializeFields(self):
        f = Function('reverseDeserializeFields', 'uint16_t', [Var('bfr__', 'const uint8_t*'), Var('size__', 'uint16_t')])
        f.add_body('const uint8_t* start__ = bfr__;')
        f.add_body('bfr__ += %s::reverseDeserializeFields(bfr__, size__);' % self._base)

        for field in self._node.findall('field'):
            if consts['sizes'][field.get('type')] == 1:
                f.add_body('bfr__ += IMC::deserialize({0}, bfr__, size__);'.format(get_name(field)))
            elif field.get('type').startswith('message'):
                f.add_body('bfr__ += %s.reverseDeserialize(bfr__, size__);' % get_name(field))
            else:
                f.add_body('bfr__ += IMC::reverseDeserialize(%s, bfr__, size__);' % get_name(field))
        f.add_body('return bfr__ - start__;')

        self._public.append(f)

    def make_getId(self):
        if not self._has_id:
            return

        f = Function('getId', 'uint16_t', const = True, inline = True)
        f.body('return %(abbrev)s::getIdStatic();' % self._node.attrib)
        self._public.append(f)

    def make_getName(self):
        f = Function('getName', 'const char*', const = True, inline = True)
        f.body('return "%(abbrev)s";' % self._node.attrib)
        self._public.append(f)

    def make_getFixedSerializationSize(self):
        f = Function('getFixedSerializationSize', 'unsigned', const = True, inline = True)
        size = str(self.get_fixed_size())
        size += ' + %s::getFixedSerializationSize()' % self._base
        f.body('return ' + size + ';')
        self._public.append(f)

    def make_getVariableSerializationSize(self):
        var_size = str(self.get_variable_size())
        if var_size != '':
            f = Function('getVariableSerializationSize', 'unsigned', const = True, inline = True)
            f.body('return ' + var_size + ';')
            self._public.append(f)

    def make_fieldsToJSON(self):
        f = Function('fieldsToJSON', 'void', [Var('os__', 'std::ostream&'), Var('nindent__', 'unsigned')], const = True)
        lines = []
        lines.append('%s::fieldsToJSON(os__, nindent__);' % self._base)

        for field in self._node.findall('field'):
            if field.get('type').startswith('message'):
                lines.append('{0}.toJSON(os__, "{0}", nindent__);'.format(get_name(field)))
            else:
                lines.append('IMC::toJSON(os__, "{0}", {0}, nindent__);'.format(get_name(field)))
        f.add_body('\n'.join(lines))
        self._public.append(f)

    def make_getSetSubId(self):
        subid = self._node.find("field/[@abbrev='id']")
        if subid is not None and subid.get('type') in consts['fixed_types']:
            f = Function('getSubId', 'uint16_t', const = True)
            f.body('return id;')
            self._public.append(f)

            f = Function('setSubId', 'void', [Var('subid', 'uint16_t')])
            f.body('id = ({0})subid;'.format(subid.get('type')))
            self._public.append(f)

    def make_getSetValueFP(self):
        value = self._node.find("field/[@abbrev='value']")
        if value is not None and value.get('type') in consts['fixed_types']:
            f = Function('getValueFP', 'fp64_t', const = True)
            f.body('return static_cast<fp64_t>(value);')
            self._public.append(f)

            f = Function('setValueFP', 'void', [Var('val', 'fp64_t')])
            f.body('value = static_cast<{0}>(val);'.format(value.get('type')))
            self._public.append(f)

    def make_NestedFunctions(self):
        if self.count_nested() > 0:
            funcs = [('TimeStamp', 'double'), ('Source', 'uint16_t'),
                     ('SourceEntity', 'uint8_t'), ('Destination', 'uint16_t'),
                     ('DestinationEntity', 'uint8_t')]
            for func in funcs:
                func_name = 'set' + func[0] + 'Nested'
                f = Function(func_name, 'void', [Var('value__', func[1])])
                if self._base != 'Message':
                    f.add_body('%s::%s(value__);' % (self._base, func_name))

                for field in self._node.findall("field[@type='message']"):
                    f.add_body(call_inline_message_function(get_name(field), 'set' + func[0], 'value__'))
                for field in self._node.findall("field[@type='message-list']"):
                    f.add_body(call_message_list_function(get_name(field), 'set' + func[0], 'value__'))
                self._protected.append(f)

    # Process inline enumerations.
    def make_Enumerated(self):
        iens = self._node.findall("field[@unit='Enumerated']")
        for ien in iens:
            if ien.get('enum-def', None) is not None:
                continue
            enum = Enum(get_enum_name(ien.get('name')), ien.get('name'))
            for field in ien.findall('value'):
                name = ien.get('prefix') + '_' + field.get('abbrev')
                enum.add_field(EnumField(name, field.get('id'), field.get('name')))
            self._public.append(enum)

    def make_Bitfields(self):
        bfs = self._node.findall("field[@unit='Bitfield']")
        for bf in bfs:
            if bf.get('bitfield-def', None) is not None:
                continue
            enum = Enum(get_bfield_name(bf.get('name')), bf.get('name'))
            for field in bf.findall('value'):
                name = bf.get('prefix') + '_' + field.get('abbrev')
                enum.add_field(EnumField(name, field.get('id'), field.get('name')))
            self._public.append(enum)

    def make_FieldDecls(self):
        fields = self._node.findall('field')
        for f in fields:
            type = f.get('message-type')
            v = Var(get_name(f), get_cxx_type(f), desc = f.get('name'))
            self._public.append(v.as_decl())

        if self.has_fields():
            self._public.append('')

    def get_base_class(self):
        base = []
        for group in self._root.findall('message-groups/message-group'):
            if group.find("message-type[@abbrev='%s']" % self._abbrev) is not None:
                base.append(group.get('abbrev'))
        if len(base) == 0:
            return 'Message'
        if len(base) == 1:
            return base[0]
        raise "multiple inheritance not supported"

    @staticmethod
    def append_block(file, block, access):
        if len(block) > 0:
            hpp.append(access + ':')
            for block in block:
                if isinstance(block, Function):
                    if block.is_inline():
                        hpp.append(block)
                    else:
                        hpp.append(block.decl())
                else:
                    hpp.append(block)

    def generate(self, hpp, cpp):
        self._public = []
        self._protected = []

        self.make_Enumerated()
        self.make_Bitfields()
        self.make_FieldDecls()
        self.make_getIdStatic()
        self.make_constructor()
        self.make_getId()
        self.make_getName()
        self.make_clone()
        self.make_clear()
        self.make_fieldsEqual()
        self.make_serializeFields()
        self.make_deserializeFields()
        self.make_reverseDeserializeFields()
        self.make_getFixedSerializationSize()
        self.make_getVariableSerializationSize()
        self.make_getSetSubId()
        self.make_getSetValueFP()
        self.make_fieldsToJSON()
        self.make_NestedFunctions()

        # HPP.
        hpp.append(comment(self._node.get('name'), nl = ''))
        hpp.append('class %s: public %s' % (self._abbrev, self._base))
        hpp.append('{')
        self.append_block(hpp, self._public, 'public')
        self.append_block(hpp, self._protected, 'protected')
        hpp.append('};\n')

        # CPP.
        for block in self._public + self._protected:
            if isinstance(block, Function):
                if not block.is_inline():
                    block.set_class(self._abbrev)
                    cpp.append(block)

    def get_fixed_size(self):
        size = 0
        for field in self._node.findall('field'):
            size += self._consts['sizes'][field.get('type')]
        return size;

    def get_variable_size(self):
        size = []
        size.append('%s::getVariableSerializationSize()' % self._base)

        for field in self._node.findall('field'):
            type = field.get('type')
            abbrev = get_name(field)
            if type == 'plaintext' or type == 'rawdata':
                size.append('IMC::getSerializationSize(%s)' % abbrev)
            elif type == 'message' or type == 'message-list':
                size.append(abbrev + '.getSerializationSize()')
        return ' + '.join(size)

    # Retrieve a list of abbreviations of variable length fields.
    def get_variable_fields(self):
        ret = []
        for field in self._node.findall('field'):
            if field.get('type') in consts['variable_types']:
                ret.append(get_name(field))
        return ret

    def has_fields(self):
        return len(self._node.findall('field')) > 0

    def count_nested(self):
        return len(self._node.findall("field[@type='message']")) + \
               len(self._node.findall("field[@type='message-list']"))

# Parse command line arguments.
import argparse
parser = argparse.ArgumentParser(
    description="Strip, compress and generate IMC.xml blob.")
parser.add_argument('dest_folder', metavar='DEST_FOLDER',
                    help="destination folder")
parser.add_argument('-x', '--xml', metavar='IMC_XML',
                    help="IMC XML file")
parser.add_argument('-f', '--force', action='store_true', required=False,
                    help="Force creation of blob file")
args = parser.parse_args()

xml_md5 = compute_md5(args.xml)
dest_folder = args.dest_folder

# Parse XML specification.
import xml.etree.ElementTree as ET
tree = ET.parse(args.xml)
root = tree.getroot()

# Initialize constant values.
consts = {}

# Retrieve Git info.
import os
import subprocess
git_dir = os.path.dirname(args.xml)
consts['git_info'] = 'unknown'
cwd_old = os.getcwd()
os.chdir(git_dir)
try:
    consts['git_info'] = subprocess.check_output(['git',
                                                  'log',
                                                  "--pretty=format:%ad %h %d",
                                                  '--abbrev-commit',
                                                  '--date=short', '-1'],
                                                 universal_newlines = True).strip()
except:
    pass

os.chdir(cwd_old)

# Set MD5 sum.
consts['md5'] = xml_md5

# Retrieve synchronization number.
sync = root.find("header/field/[@fixed='true']").get('value')
consts['sync'] = sync
consts['sync_rev'] = sync[0:2] + sync[4:6] + sync[2:4]

# Retrieve version string.
consts['version'] = root.get('version').strip()

# Retrieve size of basic types.
consts['sizes'] = {}
consts['fixed_types'] = {}
consts['variable_types'] = {}
for t in root.findall('types/type'):
    min_size = int(t.get('size', 0))
    # Variable size types use at least 2 bytes when serialized.
    if min_size == 0:
        min_size = 0;
        consts['variable_types'][t.get('name')] = True
    else:
        consts['fixed_types'][t.get('name')] = True
    consts['sizes'][t.get('name')] = min_size

# Header size.
consts['header_size'] = 0
for f in root.findall("header/field"):
    consts['header_size'] += consts['sizes'][f.get('type')]

# Footer size.
consts['footer_size'] = 0
for f in root.findall('footer/field'):
    consts['footer_size'] += consts['sizes'][f.get('type')]

################################################################################
# Enumerations.hpp                                                             #
################################################################################
f = File('Enumerations.hpp', dest_folder, md5 = xml_md5)
ens = root.findall('enumerations/def')
for en in ens:
    enum = Enum(en.get('abbrev'), en.get('name'))
    for field in en.findall('value'):
        name = en.get('prefix') + '_' + field.get('abbrev')
        enum.add_field(EnumField(name, field.get('id'), field.get('name')))
    f.append(enum)
f.write()

################################################################################
# Bitfields.hpp                                                                #
################################################################################
f = File('Bitfields.hpp', dest_folder, md5 = xml_md5)
ens = root.findall('bitfields/def')
for en in ens:
    enum = Enum(en.get('abbrev'), en.get('name'))
    for field in en.findall('value'):
        name = en.get('prefix') + '_' + field.get('abbrev')
        enum.add_field(EnumField(name, field.get('id'), field.get('name')))
    f.append(enum)
f.write()

################################################################################
# Constants.hpp                                                                #
################################################################################
f = File('Constants.hpp', dest_folder, ns = False, md5 = xml_md5)

# Macros
f.append(Macro('CONST_VERSION', '"%(version)s"' % consts, 'IMC version string'))
f.append(Macro('CONST_GIT_INFO', '"%(git_info)s"' % consts, 'Git repository information'))
f.append(Macro('CONST_MD5', '"%(md5)s"' % consts, 'MD5 sum of XML specification file'))
f.append(Macro('CONST_SYNC', consts['sync'], 'Synchronization number'))
f.append(Macro('CONST_SYNC_REV', consts['sync_rev'], 'Reversed synchronization number'))
f.append(Macro('CONST_HEADER_SIZE', consts['header_size'], 'Size of the header in bytes'))
f.append(Macro('CONST_FOOTER_SIZE', consts['footer_size'], 'Size of the footer in bytes'))
f.append(Macro('CONST_NULL_ID', CONST_NULL_ID, 'Identification number of the null message'))
f.append(Macro('CONST_MAX_SIZE', 2**16-1, 'Maximum message data size'))
f.append(Macro('CONST_UNK_EID', 255, 'Unknown entity identifier'))
f.append(Macro('CONST_SYS_EID', 0, 'System entity identifier'))
f.write()

################################################################################
# Macros.hpp                                                                   #
################################################################################
f = File('Macros.hpp', dest_folder, ns = False, md5 = xml_md5)
msgs = root.findall('message')
for msg in msgs:
    f.append(Macro(msg.get('abbrev').upper(),
                   msg.get('id'),
                   msg.get('abbrev') + ' identification number'))
f.write()

################################################################################
# Header.hpp                                                                   #
################################################################################
f = File('Header.hpp', dest_folder, md5 = xml_md5)
f.add_dune_headers('Config.hpp')
s = Struct('Header', 'Header format')
fields = root.findall("header/field")
for field in fields:
    s.add_field(StructField(field.get('abbrev'), field.get('type'), field.get('name')))
f.append(s)
f.write()

################################################################################
# Factory.def                                                                  #
################################################################################
f = File('Factory.def', dest_folder, ns = False, md5 = xml_md5)
for msg in root.findall('message'):
    if 'id' in msg.attrib:
        f.append('MESSAGE(%(id)s, %(abbrev)s)' % msg.attrib)
f.append('#undef MESSAGE')
f.write()

################################################################################
# Definitions.hpp                                                              #
################################################################################
hpp = File('Definitions.hpp', dest_folder, md5 = xml_md5)
hpp.add_isoc_headers('ostream', 'string', 'vector')
hpp.add_dune_headers('Config.hpp', 'IMC/Message.hpp',
                     'IMC/InlineMessage.hpp', 'IMC/MessageList.hpp',
                     'IMC/Enumerations.hpp', 'IMC/Bitfields.hpp',
                     'IMC/JSON.hpp')

################################################################################
# Definitions.cpp                                                              #
################################################################################
cpp = File('Definitions.cpp', dest_folder, md5 = xml_md5)
cpp.add_isoc_headers('algorithm','iostream', 'iomanip', 'string', 'cstdio')
cpp.add_dune_headers('Utils/ByteCopy.hpp', 'Utils/Utils.hpp',
                     'IMC/Exceptions.hpp', 'IMC/Definitions.hpp',
                     'IMC/Factory.hpp', 'IMC/Serialization.hpp')

deps = Dependencies(root)
abbrevs = deps.get_list()

for abbrev in abbrevs:
    msg = root.find("message[@abbrev='%s']" % abbrev)
    msg_obj = Message(root, msg, consts)
    msg_obj.generate(hpp, cpp)

hpp.write()
cpp.write()
