#! /bin/bash
#############################################################################
# Copyright (C) 2007-2013 Laboratório de Sistemas e Tecnologia Subaquática  #
# Departamento de Engenharia Electrotécnica e de Computadores               #
# Rua Dr. Roberto Frias, 4200-465 Porto, Portugal                           #
#############################################################################
# Author: Ricardo Martins                                                   #
#############################################################################
# $Id:: indent.sh 12303 2013-01-01 02:14:25Z jbraga                       $:#
#############################################################################

INDENT="uncrustify --no-backup -c $(dirname $0)/indent.cfg"

if [ $# -eq 0 ]; then
    DIR="src programs"
else
    DIR=$*
fi

for e in $DIR; do
    if [ -d "$e" ]; then
        find "$e" \( -iname '*.cpp' -o -iname '*.hpp' \) | while read f; do
                $INDENT "$f"
            done
    else
        $INDENT "$e"
    fi
done
