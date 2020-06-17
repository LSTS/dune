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
        static uint8_t*
        pack(DUNE::Tasks::Task *task, MsgStruct *msg)
        {
          int st;
          char *type_name = abi::__cxa_demangle(typeid(MsgStruct).name(), 0, 0, &st);

          try
          {
            const int sizeMsg = sizeof(*msg);
            uint8_t buf[sizeMsg];

            std::memcpy(&buf[0], msg, sizeMsg);
            task->spew("PACKED MSG: %s", type_name);
            return buf;
          }
          catch(const std::exception& e)
          {
            task->err("%s", e.what());
          }

          free(type_name);
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
            if (length < startIndex + sizeMsg) {
              task->war("Message too short to decode %d < %d for %s",
                  length, startIndex + sizeMsg, type_name);
              return -(startIndex + sizeMsg - length); // return the missing bytes for decoding
            }

            std::memcpy(msg, &buf[startIndex], sizeMsg);
            rb = sizeMsg;
            task->spew("RECEIVED MSG: %s", type_name);
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
