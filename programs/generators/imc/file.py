# -*- coding: utf-8 -*-
############################################################################
# Copyright (C) 2007-2013 Laboratório de Sistemas e Tecnologia Subaquática #
# Departamento de Engenharia Electrotécnica e de Computadores              #
# Rua Dr. Roberto Frias, 4200-465 Porto, Portugal                          #
############################################################################
# Author: Ricardo Martins                                                  #
############################################################################
# $Id:: file.py 12667 2013-01-22 02:44:42Z rasm                          $:#
############################################################################

import os.path

from imc import utils

class File:
    def __init__(self, name, folder, ns = True, stdout = False):
        self.path = os.path.join(folder, name)
        self.path_file = os.path.split(self.path)[1]
        self.path_ext = os.path.splitext(self.path)[1]
        self.name = os.path.splitext(self.path_file)[0]
        self.isoc_hdrs = []
        self.dune_hdrs = []
        self.text = ''
        self._ns = ns
        self._stdout = stdout

    def append(self, text):
        self.text += str(text) + '\n'

    def add_isoc_headers(self, *headers):
        self.isoc_hdrs += headers

    def add_dune_headers(self, *headers):
        self.dune_hdrs += ['DUNE/' + h for h in headers]

    def write(self):
        print('* ' + self.path)
        text = utils.get_cxx_copyright() + '\n'
        if self.path_ext == '.hpp':
            if type(self._ns) is list:
                prefix = ('_'.join(self._ns)).upper()
            else:
                prefix = 'DUNE_IMC'
            guard = prefix + '_' + self.name.upper() + '_HPP_INCLUDED_'
            text += '#ifndef ' + guard + '\n'
            text += '#define ' + guard + '\n\n'

        if len(self.isoc_hdrs) > 0:
            text += utils.comment('ISO C++ 98 headers', dox = False)
            for hdr in self.isoc_hdrs:
                text += '#include <' + hdr + '>\n'
            text += '\n'

        if len(self.dune_hdrs) > 0:
            text += utils.comment('DUNE headers', dox = False)
            for hdr in self.dune_hdrs:
                text += '#include <' + hdr + '>\n'
            text += '\n'

        if self._ns:
            if type(self._ns) is list:
                for ns in self._ns:
                    text += 'namespace %s\n{\n' % ns
            else:
                text += 'namespace DUNE\n{\n'
                text += 'namespace IMC\n{\n'

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
        new_text = utils.beautify(text)
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
