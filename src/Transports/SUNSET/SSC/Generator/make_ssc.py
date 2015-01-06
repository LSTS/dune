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

from utils import *

def encoder(args, template = None, specialization = False):
    return Function('encodeType',
                    'size_t',
                    [Var('args__', 'std::vector<std::string>&')] + args,
                    template = template, specialization = specialization)

def decoder(args, template = None, specialization = False):
    return Function('decodeType',
                    'size_t',
                    [Var('args__', 'const std::vector<std::string>&'), Var('index__', 'size_t')] + args,
                    template = template, specialization = specialization)

def get_cxx_var_type_by_name(type_name, of = None):
    if type_name == 'Integer':
        return 'int'
    if type_name == 'Unsigned':
        return 'unsigned'
    elif type_name == 'Real':
        return 'double'
    elif type_name == 'String':
        return 'std::string'
    # FIXME: clean this mess.
    elif type_name == 'Maneuver':
        return 'Maneuver*'
    elif type_name == 'List':
        return 'std::vector<%s>' % get_cxx_var_type_by_name(of)
    else:
        return type_name

def get_cxx_var_type(node):
    type_name = node.attrib['type']
    if 'of' in node.attrib:
        of = node.attrib['of']
    else:
        of = None
    return get_cxx_var_type_by_name(type_name, of)

def get_cxx_var_name(node):
    name = node.attrib['name']
    return name.lower().replace(' ', '_')

def get_cxx_var_clear_by_name(var_name, type_name):
    if type_name == 'Integer':
        return '%s = 0;' % var_name
    if type_name == 'Unsigned':
        return '%s = 0;' % var_name
    elif type_name == 'Real':
        return '%s = 0;' % var_name
    elif type_name == 'String':
        return '%s.clear();' % var_name
    elif type_name == 'Maneuver':
        return '%s = NULL;' % var_name
    elif type_name == 'List':
        return '%s.clear();' % var_name
    else:
        return 'reset(%s);' % var_name

def get_cxx_var_clear(node):
    var_name = get_cxx_var_name(node)
    type_name = node.attrib['type']
    return get_cxx_var_clear_by_name(var_name, type_name)

# Create scalar codecs.
def do_scalar(node, out):
    values = node.findall('values/value')
    args = node.findall('args/arg')

    if len(values) != 0 or len(args) != 0:
        return

    type_name = node.attrib['name'].strip()

    if type_name == 'Integer':
        # Encoder.
        f = encoder([Var('value__', 'const int&'), Var('format__', 'const char*', '"%d"')])
        f.add_body('args__.push_back(DUNE::Utils::String::str(format__, value__));')
        f.add_body('return 1;')
        out.append(f)

        # Decoder.
        f = decoder([Var('value__', 'int&'), Var('format__', 'const char*', '"%d"')])
        f.add_body('if (std::sscanf(args__[index__].c_str(), format__, &value__) != 1)')
        f.add_body('throw InvalidValue();')
        f.add_body('return 1;')
        out.append(f)

    elif type_name == 'Unsigned':
        # Encoder.
        f = encoder([Var('value__', 'const unsigned&'),  Var('format__', 'const char*', '"%u"')])
        f.add_body('args__.push_back(DUNE::Utils::String::str(format__, value__));')
        f.add_body('return 1;')
        out.append(f)

        # Decoder.
        f = decoder([Var('value__', 'unsigned&'),  Var('format__', 'const char*', '"%u"')])
        f.add_body('if (std::sscanf(args__[index__].c_str(), format__, &value__) != 1)')
        f.add_body('throw InvalidValue();')
        f.add_body('return 1;')
        out.append(f)

    elif type_name == 'Real':
        # Encoder.
        f = encoder([Var('value__', 'const double&')])
        f.add_body('args__.push_back(DUNE::Utils::String::str("%0.6f", value__));')
        f.add_body('return 1;')
        out.append(f)

        # Decoder.
        f = decoder([Var('value__', 'double&')])
        f.add_body('if (std::sscanf(args__[index__].c_str(), "%lf", &value__) != 1)')
        f.add_body('throw InvalidValue();')
        f.add_body('return 1;')
        out.append(f)

    elif type_name == 'String':
        # Encoder.
        f = encoder([Var('value__', 'const std::string&')])
        f.add_body('args__.push_back(value__);')
        f.add_body('return 1;')
        out.append(f)

        # Decoder.
        f = decoder([Var('value__', 'std::string &')])
        f.add_body('value__.assign(args__[index__]);')
        f.add_body('return 1;')
        out.append(f)

def do_complex_subtype(node, parent, out):
    public = []
    private = []
    protected = []

    args = node.findall('args/arg')
    class_name = node.attrib['name'].strip()

    # Variables.
    for arg in args:
        arg_name = get_cxx_var_name(arg)
        arg_type = get_cxx_var_type(arg)
        v = Var(get_cxx_var_name(arg), get_cxx_var_type(arg))
        public.append(v.as_decl())
    public.append('')

    # Default constructor.
    f = Function(class_name)
    for arg in args:
        f.add_body(get_cxx_var_clear(arg))
    public.append(f)

    # getTypeName.
    public.append('const char*')
    public.append('getTypeName(void) const')
    public.append('{')
    public.append('return "%s";' % class_name)
    public.append('}')
    public.append('')

    # encodeArgs.
    public.append('size_t')
    public.append('encodeArgs(std::vector<std::string>& args__) const')
    public.append('{')
    public.append('size_t arg_count__ = 0;')
    public.append('arg_count__ += encodeType(args__, "%s");' % class_name)
    for arg in args:
        arg_name = get_cxx_var_name(arg)
        public.append('arg_count__ += encodeType(args__, %s);' % arg_name)
    public.append('return arg_count__;')
    public.append('}')
    public.append('')

    # decodeArgs.
    public.append('size_t')
    public.append('decodeArgs(const std::vector<std::string>& args__, size_t index__)')
    public.append('{')
    public.append('size_t index_cursor__ = index__;')
    for arg in args:
        public.append('index_cursor__ += decodeType(args__, index_cursor__, %s);' % get_cxx_var_name(arg))
    public.append('return index_cursor__ - index__;')
    public.append('}')
    public.append('')

    out.append('class %s: public %s' % (class_name, parent))
    out.append('{')
    out.append('public:')
    for p in public:
        out.append(p)
    out.append('\n')
    out.append('};\n')

# Create complex codecs.
def do_complex(node, out):
    types = node.findall('type')
    if len(types) == 0:
        return

    public = []
    args = node.findall('args/arg')
    class_name = node.attrib['name'].strip()

    public.append('virtual size_t')
    public.append('encodeArgs(std::vector<std::string>& args__) const = 0;')
    public.append('')
    public.append('virtual size_t')
    public.append('decodeArgs(const std::vector<std::string>& args__, size_t index__) = 0;')
    public.append('')
    public.append('virtual const char*')
    public.append('getTypeName(void) const = 0;')

    out.append('class %s' % class_name)
    out.append('{')
    out.append('public:')
    for p in public:
        out.append(p)
    out.append('\n')
    out.append('};\n')

    for type in types:
        do_complex_subtype(type, class_name, out)

    # Encoder.
    f = encoder([Var('value__', 'const %s*' % class_name)])
    f.add_body('return value__->encodeArgs(args__);');
    out.append(f)

    # Decoder.
    f = decoder([Var('value__', '%s*&' % class_name)])
    f.add_body('size_t index_cursor__ = index__;')
    f.add_body('std::string name__;')
    f.add_body('index_cursor__ += decodeType(args__, index_cursor__, name__);')
    if_prefix = ''
    for type in types:
        f.add_body('%sif (name__ == "%s") value__ = new %s();' % (if_prefix, type.attrib['name'], type.attrib['name']))
        if_prefix = 'else '
    f.add_body('else throw InvalidValue();')
    f.add_body('index_cursor__ += value__->decodeArgs(args__, index_cursor__);')
    f.add_body('return index_cursor__ - index__;')
    out.append(f)

# Output list codecs.
def do_list(out):
    # Encoder.
    f = encoder([Var('value__', 'const std::vector<Type>&')], template = True)
    f.add_body('size_t arg_count__ = 0;')
    f.add_body('arg_count__ += encodeType(args__, (unsigned)value__.size());')
    f.add_body('for (size_t i = 0; i < value__.size(); ++i)')
    f.add_body('{')
    f.add_body('arg_count__ += encodeType(args__, value__[i]);')
    f.add_body('}')
    f.add_body('return arg_count__;')
    out.append(f)

    # Decoder.
    f = decoder([Var('value__', 'std::vector<Type>&')], template = True)
    f.add_body('size_t index_cursor__ = index__;')
    f.add_body('unsigned size__ = 0;')
    f.add_body('index_cursor__ += decodeType(args__, index_cursor__, size__);')
    f.add_body('value__.resize(size__);')
    f.add_body('for (unsigned i = 0; i < size__; ++i)')
    f.add_body('{')
    f.add_body('index_cursor__ += decodeType(args__, index_cursor__, value__[i]);')
    f.add_body('}')
    f.add_body('return index_cursor__ - index__;')
    out.append(f)

# Create enumerations and associated codecs.
def do_enum(node, out):
    values = node.findall('values/value')

    if len(values) == 0:
        return

    type_name = node.attrib['name'].strip()
    enum_name = '%s' % type_name
    if 'prefix' in node.attrib:
        field_prefix = node.attrib['prefix'].strip() + '_'
    else:
        field_prefix = ''

    # Enumeration.
    first = None
    enum = Enum(enum_name)
    for value in values:
        name = field_prefix + value.attrib['name'].strip()
        if first is None:
            first = name
        enum.add_field(EnumField(name))
    out.append(enum)

    # clear().
    f = Function('reset', 'void', [Var('value__', '%s&' % type_name)])
    f.add_body('value__ = %s;' % first)
    out.append(f)

    # Encoder.
    f = encoder([Var('value__', 'const %s&' % enum_name)])
    f.add_body('switch (value__)\n{')
    for value in values:
        name = value.attrib['name'].strip()
        f.add_body('case %s%s: args__.push_back("%s"); break;' % (field_prefix, name, name))
    f.add_body('}')
    f.add_body('return 1;')
    out.append(f)

    # Decoder.
    f = decoder([Var('value__', '%s&' % enum_name)])
    prefix = ''
    for value in values:
        name = value.attrib['name'].strip()
        f.add_body('%sif (args__[index__] == "%s") value__ = %s%s;' % (prefix, name, field_prefix, name))
        prefix = 'else '
    f.add_body('else throw InvalidValue();')
    f.add_body('return 1;')
    out.append(f)

    # toText().
    f = Function('toText', 'void', [Var('os__', 'std::ostream&'), Var('value__', 'const %s&' % enum_name)])
    f.add_body('switch (value__)\n{')
    for value in values:
        name = value.attrib['name'].strip()
        f.add_body('case %s%s: os__ << "%s"; break;' % (field_prefix, name, name))
    f.add_body('}')
    out.append(f)

# Create structures.
def do_struct(node, out):
    args = node.findall('args/arg')
    if len(args) == 0:
        return

    # Variables.
    type_name = node.attrib['name']
    s = Struct(type_name)
    for arg in args:
        arg_name = get_cxx_var_name(arg)
        arg_type = get_cxx_var_type(arg)
        s.add_field(StructField(arg_name, arg_type));
    out.append(s)

    # clear().
    f = Function('reset', 'void', [Var('value__', '%s&' % type_name)])
    for arg in args:
        var_type = arg.attrib['type'].strip()
        var_name = 'value__.%s' % get_cxx_var_name(arg)
        f.add_body(get_cxx_var_clear_by_name(var_name, var_type))
    out.append(f)

    # Encoder.
    f = encoder([Var('value__', 'const %s&' % type_name)])
    f.add_body('size_t arg_count__ = 0;')
    for arg in args:
        arg_name = get_cxx_var_name(arg)
        f.add_body('arg_count__ += encodeType(args__, value__.%s);' % arg_name)
    f.add_body('return arg_count__;')
    out.append(f)

    # Decoder.
    f = decoder([Var('value__', '%s&' % type_name)])
    f.add_body('size_t index_cursor__ = index__;')
    for arg in args:
        arg_name = get_cxx_var_name(arg)
        f.add_body('index_cursor__ += decodeType(args__, index_cursor__, value__.%s);' % arg_name)
    f.add_body('return index_cursor__ - index__;')
    out.append(f)

def do_command(node, hpp):
    class_name = node.attrib['name'].strip()

    public = []
    private = []
    protected = []
    args = node.findall('args/arg')

    # Arguments declaration.
    for arg in args:
        v = Var(get_cxx_var_name(arg), get_cxx_var_type(arg))
        public.append(v.as_decl())
    public.append('')

    # Default constructor.
    f = Function(class_name)
    f.add_body('setName("%s");' % class_name)
    for arg in args:
        f.add_body(get_cxx_var_clear(arg))
    public.append(f)

    # encodeArgs()
    f = Function('encodeArgs', 'size_t', [Var('args__', 'std::vector<std::string>&')], const = True)
    if len(args) > 0:
        f.add_body('size_t arg_count__ = 0;')
        for arg in args:
            f.add_body('arg_count__ += encodeType(args__, %s);' % get_cxx_var_name(arg))
        f.add_body('return arg_count__;')
    else:
        f.add_body('(void)args__;')
        f.add_body('return 0;')
    protected.append(f)

    # decodeArgs()
    f = Function('decodeArgs', 'size_t', [Var('args__', 'const std::vector<std::string>&'), Var('index__', 'size_t')], const = False)
    if len(args) > 0:
        f.add_body('size_t index_cursor__ = index__;')
        for arg in args:
            f.add_body('index_cursor__ += decodeType(args__, index_cursor__, %s);' % get_cxx_var_name(arg))
        f.add_body('return index_cursor__ - index__;')
    else:
        f.add_body('(void)args__;')
        f.add_body('(void)index__;')
        f.add_body('return 0;')
    protected.append(f)

    # encodeArgs()
    f = Function('toTextArgs', 'void', [Var('os__', 'std::ostream&')], const = True)
    # if len(args) > 0:
    #     for arg in args:
    #         if arg.attrib['type'] != 'List':
    #             f.add_body('os__ << %s;' % get_cxx_var_name(arg))
    # else:
    f.add_body('(void)os__;')
    protected.append(f)

    hpp.append('class %s: public AbstractCommand' % class_name)
    hpp.append('{')
    hpp.append('public:')
    for p in public:
        hpp.append(p)
    hpp.append('\n')

    hpp.append('protected:')
    for p in protected:
        hpp.append(p)
    hpp.append('\n')

    hpp.append('private:')
    for p in private:
        hpp.append(p)
    hpp.append('};\n')

# Validate command line arguments.
import sys
if len(sys.argv) != 3:
    print('Usage: {0} <SSC.xml> <destination folder>'.format(sys.argv[0]))
    sys.exit(1)

# Parse XML specification.
import xml.etree.ElementTree as ET
tree = ET.parse(sys.argv[1])
root = tree.getroot()

# Get destination folder.
folder = sys.argv[2]

################################################################################
# Factory.def                                                                  #
################################################################################
f = File('Factory.def', folder, ns = False)
for msg in root.findall('group/command'):
    f.append('COMMAND(%(name)s)' % msg.attrib)
f.append('\n')
f.append('#undef COMMAND')
f.write()

################################################################################
# Types.hpp                                                                    #
################################################################################
f = File('Types.hpp', folder)
f.add_isoc_headers('string', 'cstdio')
f.add_local_headers('Exceptions.hpp')
f.add_dune_headers('Utils/String.hpp')
for type in root.findall('types/type'):
    do_scalar(type, f)
for type in root.findall('types/type'):
    do_enum(type, f)
for type in root.findall('types/type'):
    do_struct(type, f)
for type in root.findall('types/type'):
    do_complex(type, f)
do_list(f)
f.write()

################################################################################
# Commands.hpp                                                                 #
################################################################################
hpp = File('Commands.hpp', folder)
hpp.add_isoc_headers('ostream', 'string', 'vector')
hpp.add_local_headers('AbstractCommand.hpp', 'Types.hpp')

for cmd in root.findall('group/command'):
    do_command(cmd, hpp)

hpp.write()
