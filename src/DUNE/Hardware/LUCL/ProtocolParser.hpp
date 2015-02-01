//***************************************************************************
// Copyright 2007-2015 Universidade do Porto - Faculdade de Engenharia      *
// Laboratório de Sistemas e Tecnologia Subaquática (LSTS)                  *
//***************************************************************************
// This file is part of DUNE: Unified Navigation Environment.               *
//                                                                          *
// Commercial Licence Usage                                                 *
// Licencees holding valid commercial DUNE licences may use this file in    *
// accordance with the commercial licence agreement provided with the       *
// Software or, alternatively, in accordance with the terms contained in a  *
// written agreement between you and Universidade do Porto. For licensing   *
// terms, conditions, and further information contact lsts@fe.up.pt.        *
//                                                                          *
// European Union Public Licence - EUPL v.1.1 Usage                         *
// Alternatively, this file may be used under the terms of the EUPL,        *
// Version 1.1 only (the "Licence"), appearing in the file LICENCE.md       *
// included in the packaging of this file. You may not use this work        *
// except in compliance with the Licence. Unless required by applicable     *
// law or agreed to in writing, software distributed under the Licence is   *
// distributed on an "AS IS" basis, WITHOUT WARRANTIES OR CONDITIONS OF     *
// ANY KIND, either express or implied. See the Licence for the specific    *
// language governing permissions and limitations at                        *
// http://ec.europa.eu/idabc/eupl.html.                                     *
//***************************************************************************
// Author: Ricardo Martins                                                  *
//***************************************************************************

#ifndef DUNE_HARDWARE_LUCL_PROTOCOL_PARSER_HPP_INCLUDED_
#define DUNE_HARDWARE_LUCL_PROTOCOL_PARSER_HPP_INCLUDED_

// ISO C++ 98 headers.
#include <cstring>
#include <string>
#include <queue>
#include <stdexcept>

// DUNE headers.
#include <DUNE/Config.hpp>
#include <DUNE/Algorithms/XORChecksum.hpp>
#include <DUNE/Hardware/LUCL/CommandType.hpp>
#include <DUNE/Hardware/LUCL/Command.hpp>

namespace DUNE
{
  namespace Hardware
  {
    namespace LUCL
    {
      // Export DLL Symbol.
      class DUNE_DLL_SYM ProtocolParser;

      class ProtocolParser
      {
      public:
        ProtocolParser(void)
        {
          reset();
        }

        ~ProtocolParser(void)
        { }

        template <typename T>
        static void
        sendCommand(uint8_t cmd, const uint8_t* data, int data_size, T* dev)
        {
          if (data_size > c_data_max)
            throw std::runtime_error("maximum data size exceeded");

          using Algorithms::XORChecksum;

          int size = 3 + data_size + 1;
          uint8_t msg[32] = {c_sync, (uint8_t)(data_size + 1), cmd};

          std::memcpy(msg + 3, data, data_size);
          msg[size - 1] = XORChecksum::compute(data, data_size, c_sync ^ (data_size + 1) ^ cmd) | c_csum_msk;

          dev->write(msg, size);
        }

        template <typename T>
        static void
        sendCommand(uint8_t cmd, uint8_t byte, T* dev)
        {
          sendCommand(cmd, &byte, 1, dev);
        }

        //! Reset internal state machine parser.
        void
        reset(void)
        {
          m_sm_state = STA_NONE;
          m_sm_size = 0;
          m_sm_cmd = 0;
          m_sm_data_idx = 0;
          m_sm_csum = 0;
        }

        CommandType
        parse(Command& cmd, uint8_t byte)
        {
          bool interpret = false;
          cmd.type = CommandTypeNone;

          switch (m_sm_state)
          {
            case STA_NONE:
              if (byte == c_sync)
              {
                m_sm_state = STA_SIZE;
                m_sm_csum = byte;
              }
              break;

            case STA_SIZE:
              m_sm_size = byte;
              m_sm_csum ^= byte;
              m_sm_state = STA_CMD;
              break;

            case STA_CMD:
              m_sm_cmd = byte;
              m_sm_csum ^= byte;
              m_sm_state = STA_DATA;
              break;

            case STA_DATA:
              if (m_sm_data_idx == c_data_max - 1)
              {
                reset();
                break;
              }

              m_sm_data[m_sm_data_idx++] = byte;
              if (m_sm_data_idx == m_sm_size)
              {
                if ((m_sm_csum | c_csum_msk) == m_sm_data[m_sm_data_idx - 1])
                {
                  interpret = true;
                }
                else
                {
                  cmd.type = CommandTypeInvalidChecksum;
                }
              }
              else
              {
                m_sm_csum ^= byte;
              }
              break;

            default:
              break;
          }

          if (interpret)
          {
            if ((m_sm_cmd >> 4) == 0x0E)
            {
              cmd.type = CommandTypeError;
              cmd.error.code = m_sm_cmd;
            }
            else if (m_sm_cmd == c_cmd_name)
            {
              cmd.type = CommandTypeName;
              std::memcpy(cmd.name.data, m_sm_data, m_sm_size - 1);
              cmd.name.data[m_sm_size - 1] = 0;
            }
            else if (m_sm_cmd == c_cmd_info)
            {
              cmd.type = CommandTypeVersion;

              if (m_sm_size == 4)
              {
                cmd.version.major = m_sm_data[0];
                cmd.version.minor = m_sm_data[1];
                cmd.version.patch = m_sm_data[2];
              }
              else if (m_sm_size == 3)
              {
                cmd.version.major = m_sm_data[0];
                cmd.version.minor = m_sm_data[1];
                cmd.version.patch = 0;
              }
              else if (m_sm_size == 2)
              {
                cmd.version.major = 0x07 & (m_sm_data[0] >> 5);
                cmd.version.minor = 0x07 & (m_sm_data[0] >> 2);
                cmd.version.patch = 0x03 & (m_sm_data[0] >> 0);
              }
              else
              {
                cmd.type = CommandTypeInvalidVersion;
              }
            }
            else if (m_sm_cmd == c_cmd_reset)
            {
              cmd.type = CommandTypeReset;
            }
            else if (m_sm_cmd == c_cmd_bldr)
            {
              cmd.type = CommandTypeBootJump;
            }
            else
            {
              cmd.type = CommandTypeNormal;
              cmd.command.code = m_sm_cmd;
              cmd.command.size = m_sm_size - 1;
              std::memcpy(cmd.command.data, m_sm_data, m_sm_size);
            }

            reset();
          }

          return cmd.type;
        }

      private:
        //! State machine states.
        enum SMStates
        {
          //! No command.
          STA_NONE,
          //! Command start.
          STA_SYNC,
          //! Command size.
          STA_SIZE,
          //! Command type.
          STA_CMD,
          //! Command arguments.
          STA_DATA
        };

        //! Synchronization number (command start)
        static const uint8_t c_sync = 0x2A;
        //! XOR checksum OR mask.
        static const uint8_t c_csum_msk = 0x80;
        //! Maximum command argument length.
        static const uint8_t c_data_max = 64;
        //! Read buffer size.
        static const int c_bfr_len = 128;
        //! Information command.
        static const uint8_t c_cmd_info = 0x00;
        //! Jump to bootloader on next reset.
        static const uint8_t c_cmd_bldr = 0xFD;
        //! Name command.
        static const uint8_t c_cmd_name = 0xFE;
        //! Reset command.
        static const uint8_t c_cmd_reset = 0xFF;
        //! Default baud rate.
        static const int c_baud_def = 57600;
        //! Error strings.
        static const char* c_error_strs[];
        //! Index of last error in c_error_strs.
        static const int c_error_last;
        //! Current parser state.
        SMStates m_sm_state;
        //! Argument size of current command.
        uint8_t m_sm_size;
        //! Current command type.
        uint8_t m_sm_cmd;
        //! Current command arguments.
        uint8_t m_sm_data[c_data_max];
        //! Current command arguments write index.
        uint8_t m_sm_data_idx;
        //! Current checksum calculation.
        uint8_t m_sm_csum;
      };
    }
  }
}

#endif
