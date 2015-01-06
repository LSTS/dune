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

import sys
import subprocess
import argparse
import shutil

# Parse command line arguments.
parser = argparse.ArgumentParser(
    description="This script will download the IMC specification.")
parser.add_argument('dest_folder', metavar='DEST_FOLDER',
    help="destination folder")
parser.add_argument('-t', '--tag', metavar='GIT_TAG', default='master',
    required=False, help="IMC git tag, branch, or commit hash")
parser.add_argument('-u', '--url', metavar='GIT_URL',
    default='https://www.github.com/LSTS/imc', required=False,
    help="IMC git URL")
args = parser.parse_args()

shutil.rmtree(args.dest_folder, ignore_errors=True)

subprocess.check_output(['git', 'clone', args.url, args.dest_folder],
                        universal_newlines = True)

import os
os.chdir(args.dest_folder)

subprocess.check_output(['git', 'checkout', args.tag],
                        universal_newlines = True)
