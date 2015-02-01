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

#ifndef DUNE_HARDWARE_LUCL_PROTOCOL_HPP_INCLUDED_
#define DUNE_HARDWARE_LUCL_PROTOCOL_HPP_INCLUDED_

// ISO C++ 98 headers.
#include <string>
#include <queue>

// DUNE headers.
#include <DUNE/Config.hpp>
#include <DUNE/Hardware/I2C.hpp>
#include <DUNE/Hardware/SerialPort.hpp>
#include <DUNE/FileSystem/Path.hpp>
#include <DUNE/Hardware/LUCL/CommandType.hpp>
#include <DUNE/Hardware/LUCL/Command.hpp>

namespace DUNE
{
  namespace Hardware
  {
    namespace LUCL
    {
      // Export DLL Symbol.
      class DUNE_DLL_SYM Protocol;

      class Protocol
      {
      public:
        Protocol(void);

        ~Protocol(void);

        void
        setUART(const std::string& uart_dev);

        void
        setI2C(const std::string& i2c_dev, uint8_t addr);

        void
        setName(const std::string& name);

        //! Open device.
        //! @param baud target baud rate for uart devices. 0 means auto-detect.
        void
        open(int baud = 0);

        bool
        isOpen(void);

        void
        close(void);

        unsigned
        read(uint8_t* bfr, unsigned bfr_len);

        unsigned
        write(const uint8_t* bfr, unsigned bfr_len);

        CommandType
        consumeData(Command& cmd);

        template <typename H>
        void
        read(H& handler)
        {
          unsigned rv = read(m_bfr, c_bfr_len);

          for (unsigned i = 0; i < rv; ++i)
          {
            bool interpret = false;
            uint8_t byte = m_bfr[i];

            switch (m_sm_state)
            {
              case STA_NONE:
                if (byte == c_sync)
                {
                  m_sm_state = STA_SIZE;
                  m_sm_csum = byte;
                }
                else
                  continue;
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
                    interpret = true;
                  else
                    handler.onError(0xE5, 0, 0);
                }
                else
                  m_sm_csum ^= byte;
                break;

              default:
                continue;
                break;
            }

            if (interpret)
            {
              if ((m_sm_cmd >> 4) == 0x0E)
              {
                handler.onError(m_sm_cmd, m_sm_data, m_sm_size);
              }
              else if (m_sm_cmd == c_cmd_info)
              {
                if (m_sm_size == 4)
                  handler.onVersion(m_sm_data[0], m_sm_data[1], m_sm_data[2]);
                if (m_sm_size == 3)
                  handler.onVersion(m_sm_data[0], m_sm_data[1], 0);
                else if (m_sm_size == 2)
                  handler.onVersion(0x07 & (m_sm_data[0] >> 5), 0x07 & (m_sm_data[0] >> 2), 0x03 & m_sm_data[0]);
              }
              else
              {
                handler.onCommand(m_sm_cmd, m_sm_data, m_sm_size);
              }

              reset();
            }
          }
        }

        void
        sendCommand(uint8_t cmd, const uint8_t* data = 0, int data_size = 0);

        void
        requestVersion(void);

        void
        requestName(void);

        void
        requestReset(void);

        void
        requestBootJump(void);

        int
        requestBaud(const std::string& device);

        std::string
        searchNewFirmware(const FileSystem::Path& path, unsigned ver = 0, unsigned rev = 0, unsigned pat = 0, bool ver_fixed = false);

        static const char*
        getErrorString(uint8_t error);

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
        static const int c_bfr_len = 64;
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
        //! Serial port handle.
        SerialPort* m_uart;
        //! I2C handle.
        I2C* m_i2c;
        //! I2C read pending.
        bool m_i2c_read_pend;
        //! UART device.
        std::string m_uart_dev;
        //! I2C device.
        std::string m_i2c_dev;
        //! I2C address.
        uint8_t m_i2c_addr;
        //! Internal byte buffer.
        uint8_t m_bfr[c_bfr_len];
        //! Incoming data queue.
        std::queue<uint8_t> m_queue;
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
        //! Device name upper-case.
        std::string m_name_up;
        //! Device name lower-case.
        std::string m_name_lo;
        //! True if device is open.
        bool m_open;

        //! Reset internal state machine parser.
        void
        reset(void);

        //! Test device baud rate.
        //! @param device serial port device.
        //! @param target baud rate.
        //! @return true if successful, false on test failure.
        bool
        testBaudRate(const std::string& device, int baud);

        //! Detect device baud rate.
        //! @param device serial port device.
        //! @return detected baud rate or negative number on detection
        //! failure.
        int
        detectBaudRate(const std::string& device);

        static bool
        getFirmwareInfo(const std::string& file, std::string& name, unsigned& ver, unsigned& rev, unsigned& pat);
      };
    }
  }
}

#endif
