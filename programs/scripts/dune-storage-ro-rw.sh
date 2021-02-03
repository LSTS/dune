#! /bin/sh
############################################################################
# Copyright 2007-2021 OceanScan - Marine Systems & Technology, Lda.        #
############################################################################
# This file is part of DUNE: Unified Navigation Environment.               #
#                                                                          #
# Commercial Licence Usage                                                 #
# Licencees holding valid commercial DUNE licences may use this file in    #
# accordance with the commercial licence agreement provided with the       #
# Software or, alternatively, in accordance with the terms contained in a  #
# written agreement between you and Faculdade de Engenharia da             #
# Universidade do Porto. For licensing terms, conditions, and further      #
# information contact lsts@fe.up.pt.                                       #
#                                                                          #
# Modified European Union Public Licence - EUPL v.1.1 Usage                #
# Alternatively, this file may be used under the terms of the Modified     #
# EUPL, Version 1.1 only (the "Licence"), appearing in the file LICENCE.md #
# included in the packaging of this file. You may not use this work        #
# except in compliance with the Licence. Unless required by applicable     #
# law or agreed to in writing, software distributed under the Licence is   #
# distributed on an "AS IS" basis, WITHOUT WARRANTIES OR CONDITIONS OF     #
# ANY KIND, either express or implied. See the Licence for the specific    #
# language governing permissions and limitations at                        #
# https://github.com/LSTS/dune/blob/master/LICENCE.md and                  #
# http://ec.europa.eu/idabc/eupl.html.                                     #
############################################################################
# Author: Ricardo Martins                                                  #
############################################################################

# Test if lauv-storage-client script is present.
grep lauv-storage-client /etc/config | grep cfg_services > /dev/null 2>&1
if [ $? -eq 0 ]; then
    STORAGE_NFS=1
else
    STORAGE_NFS=0
fi

# Test if /opt/lsts/dune/log is a separate mount.
grep /opt/lsts/dune/log /proc/mounts | grep -v nfs
if [ $? -eq 0 ]; then
    STORAGE_OPT=1
else
    STORAGE_OPT=0
fi

mount_ro()
{
    services syslog stop || return 1
    mount -o remount,ro /opt || return 1

    if [ $STORAGE_NFS -eq 1 ]; then
        services lauv-storage-client stop || return 1
    fi

    if [ $STORAGE_OPT -eq 1 ]; then
        mount -o remount,ro /opt/lsts/dune/log || return 1
    fi
}

mount_rw()
{
    if [ $STORAGE_OPT -eq 1 ]; then
        mount -o remount,rw /opt/lsts/dune/log || return 1
    fi

    if [ $STORAGE_NFS -eq 1 ]; then
        services lauv-storage-client start || return 1
    fi

    mount -o remount,rw /opt || return 1
    services syslog restart || return 1
}

case "$1" in
    ro)
        mount_ro
        ;;

    rw)
        mount_rw
        ;;

    *)
        echo "Usage: $0 <ro|rw>"
        ;;
esac
