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
# Generate serialization/deserialization tests.                            #
############################################################################

import sys
import random
import string
import glob
import os.path

from imc.utils import *
from imc.file import *
from imc.code import *

CXX = 'test_IMC.cpp'

class Message:
    def __init__(self, fd, var, abbrev, root, test_nr = 0):
        self._fd = fd
        self._var = var
        self._abbrev = abbrev
        self._root = root
        self._node = root.find("message[@abbrev='%s']" % abbrev)
        self._fields = self._node.findall('field')
        self._temp_var = -1
        self._test_nr = test_nr

    def make_temp(self):
        self._temp_var += 1
        return 'tmp_%s_%d' % (self._var, self._temp_var)

    def fill_header_field(self, func, field_name):
        field = self._root.find("header/field[@abbrev='%s']" % field_name)
        value = self.make_number(field)
        self._fd.append('{0}.{1}({2});'.format(self._var, func, value))

    def fill_header(self):
        self.fill_header_field('setTimeStamp', 'timestamp')
        self.fill_header_field('setSource', 'src')
        self.fill_header_field('setSourceEntity', 'src_ent')
        self.fill_header_field('setDestination', 'dst')
        self.fill_header_field('setDestinationEntity', 'dst_ent')

    def declare(self):
        self._fd.append('IMC::%s %s;' % (self._abbrev, self._var))

    def fill_fields(self):
        for field in self._fields:
            self.fill_field(field)

    def declare_and_fill(self):
        self.declare()
        self.fill_fields()

    def marshall(self):
        self._fd.append('')
        self._fd.append('try\n{')
        self._fd.append('Utils::ByteBuffer bfr;')
        self._fd.append('IMC::Packet::serialize(&%s, bfr);' % self._var)
        self._fd.append('IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());')
        self._fd.append('test.boolean("{0} #{2}", {1} == *msg_d);'.format(self._abbrev, self._var, self._test_nr));
        self._fd.append('delete msg_d;')
        self._fd.append('}\ncatch (IMC::InvalidMessageSize& e)\n{\n(void)e;')
        self._fd.append('test.boolean("{0} #{1}", {0}.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);'.format(self._var, self._test_nr))
        self._fd.append('}')

    def make_number(self, field):
        type = field.get('type')
        if type.startswith('int'):
            width = int(type.replace('int', '').replace('_t', '')) - 1
            return str(random.randrange(-2 ** width, 2 ** width - 1))
        if type.startswith('uint'):
            width = int(type.replace('uint', '').replace('_t', ''))
            return str(random.randrange(0, 2 ** width - 1)) + 'U'
        if type == 'fp32_t' or type == 'fp64_t':
            return str(random.random())

    def make_array(self):
        max_size = random.randrange(10, 255)
        return ', '.join([str(random.randrange(-128, 127)) for l in range(0, max_size)])

    # Test if message type is a group.
    def is_group(self, abbrev):
        return self._root.find("message-groups/message-group[@abbrev='%s']" % abbrev) is not None

    # Retrieve a list of message abbreviations matching a certain type.
    def get_abbrevs(self, type = None):
        if type is None:
            return [m.get('abbrev') for m in self._root.findall('message')]
        if self.is_group(type):
            l = self._root.findall("message-groups/message-group[@abbrev='%s']/message-type" % type)
            return [m.get('abbrev') for m in l]
        return [type]

    # Choose a random message abbrev suitable for a given field.
    def rand_message(self, field):
        types = self.get_abbrevs(field.get('message-type'))
        return random.choice(types)

    def push_message(self, name, field):
        tname = self.make_temp()
        msg = Message(self._fd, tname, self.rand_message(field), self._root)
        msg.declare_and_fill()
        self._fd.append('{0}.{1}.push_back({2});'.format(self._var, name, tname))

    def set_message(self, name, field):
        tname = self.make_temp()
        msg = Message(self._fd, tname, self.rand_message(field), self._root)
        msg.declare_and_fill()
        self._fd.append('{0}.{1}.set({2});'.format(self._var, name, tname))

    def fill_field(self, field):
        type = field.get('type')
        name = get_name(field)
        if type == 'plaintext':
            chars = string.ascii_uppercase * 10
            value = ''.join(random.sample(chars, random.randrange(10, 255)))
            self._fd.append('%s.%s.assign("%s");' % (self._var, name, value))
        elif type == 'rawdata':
            tname = self.make_temp()
            self._fd.append('const char %s[] = {%s};' % (tname, self.make_array()))
            self._fd.append('{0}.{1}.assign({2}, {2} + sizeof({2}));'.format(self._var, name, tname))
        elif type == 'message':
            self.set_message(name, field)
        elif type == 'message-list':
            imsgs = random.randrange(0, 2)
            for x in range(0, imsgs):
                self.push_message(name, field)
        else:
            value = self.make_number(field)
            self._fd.append('%s.%s = %s;' % (self._var, name, value))

# Parse command line arguments.
import argparse
parser = argparse.ArgumentParser(
    description="Generate serialization/deserialization tests.")
parser.add_argument('dest_folder', metavar='DEST_FOLDER',
                    help="destination folder")
parser.add_argument('-x', '--xml', metavar='IMC_XML',
                    help="IMC XML file")
parser.add_argument('-f', '--force', action='store_true', required=False,
                    help="Force creation of test file")
args = parser.parse_args()

xml_md5 = compute_md5(args.xml);
dest_folder = args.dest_folder

if not args.force:
    if file_md5_matches(os.path.join(dest_folder, CXX), xml_md5):
        print('* ' + os.path.join(dest_folder, CXX) + ' [Skipped]')
        sys.exit(0)

# Parse XML specification.
import xml.etree.ElementTree as ET
tree = ET.parse(args.xml)
root = tree.getroot()

fd = File(CXX, dest_folder, ns = None, md5 = xml_md5)
fd.add_dune_headers('DUNE.hpp')
fd.append('using DUNE_NAMESPACES;\n')
fd.append('#include "Test.hpp"\n')
fd.append('int\nmain(void)\n{')
fd.append('Test test("IMC Serialization/Deserialization");\n')

abbrevs = [msg.get('abbrev') for msg in root.findall('message')]
for abbrev in abbrevs:
    for test in range(0, 3):
        fd.append('{')
        msg = Message(fd, 'msg', abbrev, root, test)
        msg.declare()
        msg.fill_header()
        msg.fill_fields()
        msg.marshall()
        fd.append('}\n')

fd.append('return test.getReturnValue();')
fd.append('}')
fd.write()
