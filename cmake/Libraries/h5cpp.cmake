############################################################################
# Copyright 2007-2022 Universidade do Porto - Faculdade de Engenharia      #
# Laboratório de Sistemas e Tecnologia Subaquática (LSTS)                  #
############################################################################
# This file is part of DUNE: Unified Navigation Environment.               #
#                                                                          #
# Commercial Licence Usage                                                 #
# Licencees holding valid commercial DUNE licences may use this file in    #
# accordance with the commercial licence agreement provided with the       #
# Software or, alternatively, in accordance with the terms contained in a  #
# written agreement between you and Faculdade de Engenharia da             #
# Universidade do Porto. For licensing terms, conditions, and further      #
# information contact lsts@fe.up.pt.                                       #
#                                                                          #
# Modified European Union Public Licence - EUPL v.1.1 Usage                #
# Alternatively, this file may be used under the terms of the Modified     #
# EUPL, Version 1.1 only (the "Licence"), appearing in the file LICENCE.md #
# included in the packaging of this file. You may not use this work        #
# except in compliance with the Licence. Unless required by applicable     #
# law or agreed to in writing, software distributed under the Licence is   #
# distributed on an "AS IS" basis, WITHOUT WARRANTIES OR CONDITIONS OF     #
# ANY KIND, either express or implied. See the Licence for the specific    #
# language governing permissions and limitations at                        #
# https://github.com/LSTS/dune/blob/master/LICENCE.md and                  #
# http://ec.europa.eu/idabc/eupl.html.                                     #
############################################################################
# Author: Miguel Aguiar                                                    #
############################################################################

if(H5CPP)
    find_package(h5cpp)

    if(${h5cpp_FOUND})
        dune_add_lib(h5cpp)
        add_definitions(-DDUNE_H5CPP_ENABLED)
        set(DUNE_USING_H5CPP
            1
            CACHE INTERNAL
                  "libh5cpp")
    else()
        message(SEND_ERROR "Library h5cpp not found on this system. "
            "See https://github.com/ess-dmsc/h5cpp for installation "
            "instructions.")
        set(DUNE_USING_H5CPP
            0
            CACHE INTERNAL
                  "libh5cpp")
    endif()
endif(H5CPP)
