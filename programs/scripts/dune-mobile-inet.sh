#! /bin/sh
############################################################################
# Copyright 2007-2014 Universidade do Porto - Faculdade de Engenharia      #
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
# https://www.lsts.pt/dune/licence.                                        #
############################################################################
# Author: Ricardo Martins                                                  #
############################################################################

if [ -z "$GSM_USER" ]; then
    GSM_USER='vodafone'
fi

if [ -z "$GSM_PASS" ]; then
    GSM_PASS='vodafone'
fi

if [ -z "$GSM_APN" ]; then
    GSM_APN='internet.vodafone.pt'
fi

if [ -z "$GSM_MODE" ]; then
    GSM_MODE='AT\^SYSCFG=2,2,3fffffff,0,1'
fi

if [ -z "$GSM_PIN" ]; then
    GSM_PIN='AT'
fi

if [ -z "$FWL_EXT_ITF" ]; then
    FWL_EXT_ITF='ppp0'
fi

if [ -z "$FWL_INT_ITF" ]; then
    FWL_INT_ITF='eth0'
fi

CHAT_SCRIPT=$(cat <<EOF
ABORT 'BUSY' \
ABORT 'NO CARRIER' \
ABORT 'VOICE' \
ABORT 'NO DIALTONE' \
ABORT 'NO DIAL TONE' \
ABORT 'NO ANSWER' \
ABORT 'DELAYED' \
REPORT CONNECT \
TIMEOUT 6 \
'' 'ATQ0' \
'OK-AT-OK' 'ATZ' \
TIMEOUT 3 \
'OK' '$GSM_PIN' \
'OK-AT-OK' 'ATI' \
'OK' 'ATZ' \
'OK' 'ATQ0 V1 E1 S0=0 &C1 &D2 +FCLASS=0' \
'OK' '$GSM_MODE' \
'OK-AT-OK' 'AT+CGDCONT=1,\"IP\",\"$GSM_APN\"' \
'OK' 'ATDT*99***1#' \
TIMEOUT 30 \
CONNECT ''
EOF
)

log()
{
    l="$1"
    shift
    logger -s -t dune-mobile-inet -p "daemon.$l" $*
}

modem_probe()
{
    nr="$(cat /proc/tty/driver/usbserial 2> /dev/null | grep GSM | head -n 1 | cut -f1 -d:)"
    if [ -z "$nr" ]; then
        echo ""
    else
        echo "/dev/ttyUSB$nr"
    fi
}

# Update DynDNS IPv4 address.
# @param[in] ip IPv4 address.
dyndns_update()
{
    echo $DYNDNS_USER $DYNDNS_PASS $DYNDNS_HOST

    if [ -z "$DYNDNS_USER" ] || [ -z "$DYNDNS_PASS" ] || [ -z "$DYNDNS_HOST" ]; then
        return 0
    fi

    ip="$1"
    url="http://$DYNDNS_USER:$DYNDNS_PASS@members.dyndns.org/nic/update?hostname=$DYNDNS_HOST&myip=$ip&wildcard=NOCHG&mx=NOCHG&backmx=NOCHG"
    wget "$url" -O -
}

ppp_start()
{
    modem="$(modem_probe)"

    if [ -z "$modem" ]; then
        log err "failed to find GSM modem"
        exit 1
    fi

    auth=''
    if [ -n "$GSM_USER" ] && [ -n "$GSM_PASS" ]; then
        auth="user \"$GSM_USER\" password \"$GSM_PASS\""
    fi

    log info "ppp: removing default route"

    /sbin/route del default dev eth0 > /dev/null 2>&1

    log info "ppp: starting"

    /usr/sbin/pppd \
        "$modem" \
        921600 \
        $auth \
        lock \
        crtscts \
        modem \
        passive \
        novj \
        defaultroute \
        noipdefault \
        usepeerdns \
        noauth \
        hide-password \
        persist \
        holdoff 10 \
        maxfail 0 \
        connect "/usr/sbin/chat -E -v -t15 $CHAT_SCRIPT" > /var/run/ppp.log 2>&1

    if [ $? -ne 0 ]; then
        log err "ppp: failed to establish a connection"
        exit 1
    fi
}

ppp_stop()
{
    log info "ppp: stopping"
    killall -9 chat > /dev/null 2>&1
    killall -9 pppd > /dev/null 2>&1
    sleep 1
    log info "ppp: stopped"
    return 0
}

nat_start()
{
    log info "nat: enabling IP forwarding"
    echo '1' > /proc/sys/net/ipv4/ip_forward
    echo '1' > /proc/sys/net/ipv4/ip_dynaddr

    log info "nat: flushing rules"
    iptables -P INPUT ACCEPT
    iptables -F INPUT
    iptables -P OUTPUT ACCEPT
    iptables -F OUTPUT
    iptables -P FORWARD DROP
    iptables -F FORWARD
    iptables -t nat -F

    log info "nat: installing rules"
    iptables -A FORWARD -i "$FWL_EXT_ITF" -o "$FWL_INT_ITF" -m state --state ESTABLISHED,RELATED -j ACCEPT
    iptables -A FORWARD -i "$FWL_EXT_ITF" -o "$FWL_EXT_ITF" -j ACCEPT
    iptables -A FORWARD -i "$FWL_EXT_ITF" -o "$FWL_INT_ITF" -j ACCEPT
    iptables -A FORWARD -i "$FWL_INT_ITF" -o "$FWL_EXT_ITF" -j ACCEPT
    iptables -t nat -A POSTROUTING -o "$FWL_EXT_ITF" -j MASQUERADE

    log info "nat: started"
}

nat_stop()
{
    log info "nat: disabling IP forwarding"
    echo '0' > /proc/sys/net/ipv4/ip_forward
    echo '0' > /proc/sys/net/ipv4/ip_dynaddr

    log info "nat: flushing rules"
    iptables -P INPUT ACCEPT
    iptables -F INPUT
    iptables -P OUTPUT ACCEPT
    iptables -F OUTPUT
    iptables -P FORWARD DROP
    iptables -F FORWARD
    iptables -t nat -F

    log info "nat: stopped"
}

start()
{
    ppp_start
    if [ $? -ne 0 ]; then
        log err "failed to establish a connection"
        exit 1
    fi
}

stop()
{
    ppp_stop
    if [ $? -eq 0 ]; then
        log info "stopped"
    else
        log err "failed to stop"
    fi
}

case "$1" in
    start)
        start
        ;;
    stop)
        stop
        ;;
    nat_start)
        nat_start
        ;;
    nat_stop)
        nat_stop
        ;;
    *)
        echo "Usage: $0 <start|stop>"
        ;;
esac
