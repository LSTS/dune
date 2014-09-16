############################################################################
# Copyright 2007-2014 Universidade do Porto - Faculdade de Engenharia      #
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
# https://www.lsts.pt/dune/licence.                                        #
############################################################################
# Author: Ricardo Martins                                                  #
############################################################################

if(DUNE_PROGRAM_PYTHON)
  set(IMC_TAG "master" CACHE STRING "IMC git branch name, commit id or tag")
  set(IMC_URL "https://www.github.com/LSTS/imc" CACHE STRING "IMC git URL")

  set(DUNE_IMC_XML ${CMAKE_BINARY_DIR}/IMC/IMC.xml)
  set(DUNE_IMC_ADDRESSES_XML ${CMAKE_BINARY_DIR}/IMC/IMC_Addresses.xml)
  set(DUNE_IMC_FOLDER ${PROJECT_SOURCE_DIR}/src/DUNE/IMC)
  set(DUNE_IMC_TEST_FOLDER ${PROJECT_SOURCE_DIR}/programs/tests)

  # Download.
  add_custom_target(imc_download
    COMMAND ${DUNE_PROGRAM_PYTHON}
    ${PROJECT_SOURCE_DIR}/programs/generators/imc_download.py
    -u ${IMC_URL}
    -t ${IMC_TAG} ${CMAKE_BINARY_DIR}/IMC)

  # Generate.
  macro(dune_target_imc target_name extra_flags)
    add_custom_target(${target_name}
      COMMAND ${DUNE_PROGRAM_PYTHON}
      ${PROJECT_SOURCE_DIR}/programs/generators/imc_code.py
      ${extra_flags}
      -x ${DUNE_IMC_XML} ${DUNE_IMC_FOLDER}

      COMMAND ${DUNE_PROGRAM_PYTHON}
      ${PROJECT_SOURCE_DIR}/programs/generators/imc_blob.py
      ${extra_flags}
      -x ${DUNE_IMC_XML} ${DUNE_IMC_FOLDER}

      COMMAND ${DUNE_PROGRAM_PYTHON}
      ${PROJECT_SOURCE_DIR}/programs/generators/imc_tests.py
      ${extra_flags}
      -x ${DUNE_IMC_XML} ${DUNE_IMC_TEST_FOLDER}

      COMMAND ${DUNE_PROGRAM_PYTHON}
      ${PROJECT_SOURCE_DIR}/programs/generators/imc_addresses.py
      ${extra_flags}
      -x ${DUNE_IMC_ADDRESSES_XML} ${PROJECT_SOURCE_DIR}/etc/common/imc-addresses.ini

      DEPENDS ${xml})
  endmacro()

  dune_target_imc(imc "")
  dune_target_imc(imc_force "-f")

endif(DUNE_PROGRAM_PYTHON)
