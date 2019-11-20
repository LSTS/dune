#!/bin/bash
DUNE_HOME=$PWD
SCRIPT_DIR="$( cd "$( dirname "${BASH_SOURCE[0]}" )" >/dev/null 2>&1 && pwd )"

if [ ! -f "dune" ]; then
    echo "This script must be launched from DUNE build folder."
    exit 1
fi

#start noptilus-1
xterm -xrm 'XTerm.vt100.allowTitleOps: false' -geometry 80x27+120+120 -T "DUNE NP1" -e "cd \"$DUNE_HOME\"; ./dune -c lauv-noptilus-1 -p Simulation" &disown
sleep 1

#start noptilus-2
xterm -xrm 'XTerm.vt100.allowTitleOps: false' -geometry 80x27+120+120 -T "DUNE NP2" -e "cd \"$DUNE_HOME\"; ./dune -c lauv-noptilus-2 -p Simulation" &disown
sleep 1

#open noptilus-1 proxy and replay commands in acoustic-proxy-test.cmds
xterm -xrm 'XTerm.vt100.allowTitleOps: false' -geometry 80x27+120+120 -T "Proxy NP1" -e "while read -r line ; do sleep 4; echo \"\$line\"; done < $SCRIPT_DIR/acoustic-proxy-test.cmds | nc localhost 9999" &disown
sleep 2

#open noptilus-2 proxy and replay commands in acoustic-proxy-test.cmds
xterm -xrm 'XTerm.vt100.allowTitleOps: false' -geometry 80x27+120+120 -T "Proxy NP2" -e "while read -r line ; do sleep 4; echo \"\$line\"; done < $SCRIPT_DIR/acoustic-proxy-test.cmds | nc localhost 10000" &disown

