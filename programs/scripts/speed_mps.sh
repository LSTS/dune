#! /bin/sh

send()
{
    /opt/lsts/bin/dune-sendmsg 127.0.0.1 6002 $*
}

send LoggingControl 0 Speed_MPS
sleep 5
send ControlLoops 0 65535
sleep 1
send ControlLoops 1 392
send DesiredHeadingRate 0
send DesiredZ 1 1
send DesiredSpeed 2 0
sleep 5
send DesiredSpeed 2 0
sleep 5
send DesiredSpeed 2 0
sleep 5
send DesiredSpeed 2 0
sleep 5
send DesiredSpeed 2 0
sleep 5
send DesiredSpeed 2 0
sleep 5
send DesiredSpeed 2 0
sleep 5
send DesiredSpeed 2 0
sleep 5
send DesiredSpeed 2 0
sleep 5
send ControlLoops 0 392
sleep 1
send ControlLoops 1 2
send LoggingControl 2 idle
