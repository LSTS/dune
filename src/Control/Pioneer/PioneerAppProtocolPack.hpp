//***************************************************************************
// Copyright 2007-2020 Universidade do Porto - Faculdade de Engenharia      *
// Laboratório de Sistemas e Tecnologia Subaquática (LSTS)                  *
//***************************************************************************
// This file is part of DUNE: Unified Navigation Environment.               *
//                                                                          *
// Commercial Licence Usage                                                 *
// Licencees holding valid commercial DUNE licences may use this file in    *
// accordance with the commercial licence agreement provided with the       *
// Software or, alternatively, in accordance with the terms contained in a  *
// written agreement between you and Faculdade de Engenharia da             *
// Universidade do Porto. For licensing terms, conditions, and further      *
// information contact lsts@fe.up.pt.                                       *
//                                                                          *
// Modified European Union Public Licence - EUPL v.1.1 Usage                *
// Alternatively, this file may be used under the terms of the Modified     *
// EUPL, Version 1.1 only (the "Licence"), appearing in the file LICENCE.md *
// included in the packaging of this file. You may not use this work        *
// except in compliance with the Licence. Unless required by applicable     *
// law or agreed to in writing, software distributed under the Licence is   *
// distributed on an "AS IS" basis, WITHOUT WARRANTIES OR CONDITIONS OF     *
// ANY KIND, either express or implied. See the Licence for the specific    *
// language governing permissions and limitations at                        *
// https://github.com/LSTS/dune/blob/master/LICENCE.md and                  *
// http://ec.europa.eu/idabc/eupl.html.                                     *
//***************************************************************************
// Author: Paulo Dias                                                       *
//***************************************************************************

#ifndef CONTROL_PIONEER_PIONEER_APP_PROTOCOL_PACK_HPP_INCLUDED_
#define CONTROL_PIONEER_PIONEER_APP_PROTOCOL_PACK_HPP_INCLUDED_

// ISO C++ 98 headers.
#include <string>
#include <cstddef>
#include <cxxabi.h>

// DUNE headers.
#include <DUNE/DUNE.hpp>

#include "PioneerAppProtocolMessages.hpp"

namespace Control
{
  namespace Pioneer
  {
    namespace PioneerAppProtocolPack
    {
      class Pack
      {
      public:

        template <class MsgStruct>
        static int
        pack(DUNE::Tasks::Task *task, MsgStruct *msg, uint8_t *buf)
        {
          int st;
          char *type_name = abi::__cxa_demangle(typeid(MsgStruct).name(), 0, 0, &st);
          int rb = 0;

          try
          {
            const int sizeMsg = sizeof(*msg);
            std::memcpy(&buf[0], msg, sizeMsg);
            task->spew("PACKED MSG: %s", type_name);
            rb = sizeMsg;
          }
          catch(const std::exception& e)
          {
            task->err("%s", e.what());
          }

          free(type_name);
          return rb;
        }

        template <class MsgStruct>
        static int
        unpack(
          DUNE::Tasks::Task *task, uint8_t buf[], int startIndex, int length,
          MsgStruct *msg)
        {
          int st;
          char *type_name = abi::__cxa_demangle(typeid(MsgStruct).name(), 0, 0, &st);
          int rb = 0;

          try
          {
            const int sizeMsg = sizeof(*msg);
            if (length < sizeMsg) {
              task->war("Message too short to decode %d < %d (index %d of %d) for %s",
                  length, sizeMsg, startIndex, startIndex + length, type_name);
              return -length; // return the missing bytes for decoding
            }

            std::memcpy(msg, &buf[startIndex], sizeMsg);
            rb = sizeMsg;
            task->spew("RECEIVED MSG: %s %d bytes", type_name, rb);
          }
          catch(const std::exception& e)
          {
            task->err("%s", e.what());
            rb = 0;
          }

          free(type_name);
          return rb;
        }
      };
    }
  }
}

#endif
