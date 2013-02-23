# -*- coding: utf-8 -*-
############################################################################
# Copyright (C) 2007-2013 Laboratório de Sistemas e Tecnologia Subaquática #
# Departamento de Engenharia Electrotécnica e de Computadores              #
# Rua Dr. Roberto Frias, 4200-465 Porto, Portugal                          #
############################################################################
# Author: Ricardo Martins                                                  #
############################################################################
# $Id:: deps.py 12303 2013-01-01 02:14:25Z jbraga                        $:#
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
