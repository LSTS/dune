# -*- coding: utf-8 -*-
############################################################################
# Copyright 2007-2015 Universidade do Porto - Faculdade de Engenharia      #
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
# http://ec.europa.eu/idabc/eupl.html.                                     #
############################################################################
# Author: Ricardo Martins                                                  #
############################################################################

import os
import sys
import shutil
import os.path
import subprocess
import argparse
import glob

# Parse command line arguments.
parser = argparse.ArgumentParser(
    description="This script generates DUNE's reference documentation.")
parser.add_argument('destination', metavar='DESTINATION',
    help="destination folder")
args = parser.parse_args()

# Find source folder.
script = os.path.abspath(__file__).replace('.pyc', '.py')
wrk_dir = os.path.dirname(script)
top_dir = os.path.abspath(os.path.join(wrk_dir, '..', '..'))
src_dir = os.path.abspath(os.path.join(top_dir, 'src'))

# Run CMake to generate a few required headers.
bld_dir = os.path.abspath(os.path.join(top_dir, 'ref-docs'))
if os.path.isdir(bld_dir):
    shutil.rmtree(bld_dir)
os.makedirs(bld_dir)
os.chdir(bld_dir)
subprocess.call(['cmake', '..'])
subprocess.call(['make', 'doc'])

# Find HTML dir.
htm_dir = glob.glob(os.path.join(bld_dir,
    'DUNEGeneratedFiles', 'dune-*-docs', 'html'))

if len(htm_dir) != 1:
    print("ERROR: failed to find HTML folder.")
    sys.exit(1)
else:
    htm_dir = htm_dir[0]

# Copy documentation to destination folder.
dst_dir = os.path.abspath(args.destination)
if not os.path.isdir(dst_dir):
    os.makedirs(dst_dir)
subprocess.call(['rsync', '-a', '--delete', htm_dir + '/', dst_dir])

# Remove CMake files.
if os.path.isdir(bld_dir):
    shutil.rmtree(bld_dir)
