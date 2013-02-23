#! /bin/sh

send()
{
    /opt/lsts/bin/dune-sendmsg 127.0.0.1 6002 $*
}

send LoggingControl 0 heading_rate
sleep 5
send ControlLoops 0 65535
sleep 1
send ControlLoops 1 392
send DesiredHeadingRate 5
send DesiredZ 1 1
send DesiredSpeed 900 1
sleep 60
send DesiredHeadingRate 10
sleep 60
send ControlLoops 0 392
sleep 1
send ControlLoops 1 2
send LoggingControl 2 idle
