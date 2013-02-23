#! /bin/sh

send()
{
    /opt/lsts/bin/dune-sendmsg 127.0.0.1 6002 $*
}

send LoggingControl 0 heading6
sleep 5
send ControlLoops 0 65535
sleep 1
send ControlLoops 1 200
send DesiredHeading -117
send DesiredZ 0 1
send DesiredSpeed 1100 1
sleep 60
send DesiredHeading -207
sleep 60
send ControlLoops 0 200
sleep 1
send ControlLoops 1 2
send LoggingControl 2 idle
