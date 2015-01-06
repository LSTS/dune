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

import os.path

from imc import utils

class File:
    def __init__(self, name, folder, ns = True, stdout = False, md5 = None, skip_md5 = False):
        self.path = os.path.join(folder, name)
        self.path_file = os.path.split(self.path)[1]
        self.path_ext = os.path.splitext(self.path)[1]
        self.name = os.path.splitext(self.path_file)[0]
        self.isoc_hdrs = []
        self.dune_hdrs = []
        self.text = ''
        self._ns = ns
        self._stdout = stdout
        self._skip_md5 = skip_md5
        if md5 is None:
            self.md5 = 'unknown'
        else:
            self.md5 = md5

    def append(self, text):
        self.text += str(text) + '\n'

    def add_isoc_headers(self, *headers):
        self.isoc_hdrs += headers

    def add_dune_headers(self, *headers):
        self.dune_hdrs += ['DUNE/' + h for h in headers]

    def write(self):
        print('* ' + self.path)
        text = utils.get_cxx_copyright(self.md5, self._skip_md5) + '\n'
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
