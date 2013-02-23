#! /bin/bash
#############################################################################
# Copyright (C) 2007-2013 Laboratório de Sistemas e Tecnologia Subaquática  #
# Departamento de Engenharia Electrotécnica e de Computadores               #
# Rua Dr. Roberto Frias, 4200-465 Porto, Portugal                           #
#############################################################################
# Author: Ricardo Martins                                                   #
#############################################################################
# $Id:: mktag.sh 12303 2013-01-01 02:14:25Z jbraga                        $:#
#############################################################################

if [ $# -lt 4 ]; then
    echo "Usage: $0 <revision> <date> <vehicle> <location>"
    exit 1
fi

revision="-r$1"
date="$2"
vehicle="$(echo $3 | tr [:upper:] [:lower:] | tr ' -' '_')"
location="$(echo $4 | tr [:upper:] [:lower:] | tr ' -' '_')"

tag="https://whale.fe.up.pt/svn/dune/tags/${date}_${vehicle}_${location}"

svn mkdir -m "Creating tag." "$tag" &&
svn copy "$revision" -m "Tagging mission" https://whale.fe.up.pt/svn/dune/trunk "$tag"/source &&
rm -rf .tmp_dune_tag && \
    svn co "$tag" .tmp_dune_tag && \
    cd .tmp_dune_tag && \
    svn status | awk '/^X/ {print $2}' | while read ext; do
    rev=$(svn info "$ext" | awk '/Revision: / {print $2}')
    par="$(dirname "$ext")"
    det=$(svn propget svn:externals "$par")
    dir=$(echo $det | cut -f1 -d' ')
    url=$(echo $det | cut -f2- -d' ')
    prop="$dir -r$rev $url"
    svn propset svn:externals "$prop" "$par"
done && \
    svn ci -m "Recording external revisions" && \
    cd .. && rm -rf .tmp_dune_tag
