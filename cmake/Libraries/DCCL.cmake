############################################################################
# Copyright 2007-2023 Universidade do Porto - Faculdade de Engenharia      #
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
# Author: Lucrezia Bernacchi                                               #                            
############################################################################

if(DCCL)
  find_package(Protobuf REQUIRED)
  find_library(DCCL_LIBRARY NAMES dccl)
  message(STATUS "DCCL Library found:  ${DCCL_LIBRARY}")
  if(${DCCL_LIBRARY} STRLESS "libdccl.so")
    # dccl present
    set(DUNE_SYS_HAS_DCCL 1 CACHE INTERNAL "DCCL library")
    dune_add_lib(dccl)
  else()
    # dccl not found on the system.
    message(SEND_ERROR "DCCL not found on the system.")
    set(DUNE_SYS_HAS_DCCL 0 CACHE INTERNAL "DCCL library")
  endif()

  find_library(PROTOBUF_LIBRARY NAMES protobuf)
  message(STATUS "Protobuf Library found:  ${PROTOBUF_LIBRARY}")
  if(${PROTOBUF_LIBRARY} STRLESS "libprotobuf.so")
    # protobuf present
    set(DUNE_SYS_HAS_PROTOBUF 1 CACHE INTERNAL "Protobuf library")
    dune_add_lib(protobuf)
  else()
    # protobuf not found on the system.
    message(SEND_ERROR "Protobuf not found on the system.")
    set(DUNE_SYS_HAS_PROTOBUF 0 CACHE INTERNAL "Protobuf library")
  endif() 
else(DCCL)
  set(DUNE_SYS_HAS_DCCL 0 CACHE INTERNAL "DCCL library")
  set(DUNE_SYS_HAS_PROTOBUF 0 CACHE INTERNAL "Protobuf library")
endif(DCCL)
