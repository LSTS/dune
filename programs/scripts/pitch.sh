#! /bin/sh

send()
{
    /opt/lsts/bin/dune-sendmsg 127.0.0.1 6002 $*
}

send LoggingControl 0 pitch
sleep 5
send ControlLoops 0 65535
sleep 1
send ControlLoops 1 224
send DesiredHeading -140
send DesiredPitch -10
send DesiredSpeed 900 1
sleep 10
send ControlLoops 0 224
sleep 1
send ControlLoops 1 2
send LoggingControl 2 idle
