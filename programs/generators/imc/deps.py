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

class Dependencies:
    def __init__(self, root):
        self._root = root
        self._abbrevs = []

    def append(self, abbrev):
        if abbrev in self._abbrevs:
            return
        self._abbrevs.append(abbrev)

    def get_deps(self, abbrev):
        msg = self._root.find("message[@abbrev='%s']" % abbrev)

        if msg is None:
            return

        if msg.get('abbrev') in self._abbrevs:
            return

        types = [field.get('message-type') for field in msg.findall('field[@message-type]')]
        for type in types:
            if type not in self._abbrevs:
                self.get_deps(type)

        self.append(abbrev)

    def get_list(self):
        for msg in self._root.findall('message'):
            self.get_deps(msg.get('abbrev'))
        return self._abbrevs
