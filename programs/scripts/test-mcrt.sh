#! /bin/sh

if [ -x ./dune-sendmsg ]; then
    export sendmsg='./dune-sendmsg'
else
    export sendmsg='/opt/lsts/bin/dune-sendmsg'
fi

send()
{
    $sendmsg 127.0.0.1 6002 $*
}

do_nominal()
{
    send SetThrusterActuation 0 "$1"
    sleep 10
}

do_stress()
{
    send SetThrusterActuation 0 "$1"
    sleep 2
}

# Nominal tests.
send LoggingControl 0 "mcrt_nominal"
do_nominal  0.000
do_nominal  0.125
do_nominal  0.250
do_nominal  0.375
do_nominal  0.500
do_nominal  0.625
do_nominal  0.750
do_nominal  0.835
do_nominal  1.000
do_nominal  0.000
do_nominal -0.125
do_nominal -0.250
do_nominal -0.375
do_nominal -0.500
do_nominal -0.625
do_nominal -0.750
do_nominal -0.835
do_nominal -1.000
send LoggingControl 2 "stop"
send SetThrusterActuation 0 0

sleep 10

# Stress test.
send LoggingControl 0 "mcrt_stress"
do_stress  0.000
do_stress  0.200
do_stress  0.220
do_stress  0.240
do_stress  0.260
do_stress  0.280
do_stress  0.300
do_stress  0.000
do_stress -0.200
do_stress -0.400
do_stress -0.600
do_stress -0.800
do_stress -0.700
do_stress -0.200
do_stress  0.500
do_stress -0.500
do_stress -1.000
do_stress  0.200
do_stress -0.800
send LoggingControl 2 "stop"
send SetThrusterActuation 0 0
