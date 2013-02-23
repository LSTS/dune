#! /bin/bash

if [ $# -ne 2 ]; then
    echo "Usage: $0 <host> <script>"
    exit 1
fi

host="$1"
script="$2"
script_name="$(basename "$script")"

scp "$script" root@"$host":/opt/lsts/bin
ssh root@"$host" "sh /opt/lsts/bin/$script_name < /dev/null > /dev/null 2>&1 &"
