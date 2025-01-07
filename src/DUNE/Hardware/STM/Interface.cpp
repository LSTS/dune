//***************************************************************************
// Copyright 2007-2025 Universidade do Porto - Faculdade de Engenharia      *
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
// Author: Pedro Gonçalves                                                  *
//***************************************************************************

// ISO C++ 98 headers.
#include <cstdio>
#include <cstdarg>
#include <string>
#include <sys/stat.h>
#include <unistd.h>
#include <fstream>

// DUNE headers.
#include <DUNE/IO/Poll.hpp>
#include <DUNE/Hardware/STM/Interface.hpp>
#include <DUNE/Hardware/STM/FirmwareUpdate.hpp>
#include <DUNE/Algorithms/XORChecksum.hpp>

namespace DUNE
{
  namespace Hardware
  {
    namespace STM
    {
      //! Timeout for reply of system
      static const int c_timeout_reply = 20;
      //! Bootloader sync.
      static const char* c_jump_to_boot_cmd = "$,BOOT,*";
      //! Bootloader update
      static const char* c_boot_update_cmd = "$,BLOADERUP,*";
      //! System Type.
      static const char* c_type_cmd = "$,TYPE,*";
      //! Valid system type
      static const char* c_system_version_cmd = "$,VERSION,*";
      //! Size of Firmware file
      static const char* c_size_file_update = "$,SIZE,";
      //! Valid system type
      static const std::string c_valid_system_type = "STM32";
      //! Frame ACK
      static const std::string c_ack_frame = "$,FRAME,OK,#,";

      Interface::Interface(IO::Handle* handle, std::string ibin):
        m_handle(handle),
        m_ibin(ibin)
      {
      }

      Interface::~Interface(void)
      {
      }

      void
      Interface::startFirmwareUpdate(void)
      {
        title(" Starting Firmware Update");
        STM::FirmwareUpdate firmware(m_handle, m_ibin);
        if(firmware.isFirmwareFileOpen())
        {
          print(" > Waiting for the system to fully erase the flash\n");
          char send_text[32];
          std::sprintf(send_text, "%s%ld,*", c_size_file_update, (unsigned long)firmware.getFirmwareSize());
          sendCommand(send_text);
          if(readReply(c_timeout_reply))
          {
            if(std::strstr((char*)m_frame_rx, c_ack_frame.c_str()) != NULL)
              while(!firmware.finishUpdate());
            else
              print(" > Firmware Update FAIL ACK\n");
          }
          else
          {
            print(" > Firmware Update FAIL\n");
          }
        }
        else
        {
          print(" > Firmware Update FAIL\n");
        }
      }

      bool
      Interface::checkSystemType(void)
      {
        title(" Checking System Type");
        if(readReply(c_timeout_reply))
        {
          uint8_t csum_rx = m_frame_rx[m_frame_rx_count - 1];
          uint8_t csum_calc = computeCRC(m_frame_rx, m_frame_rx_count - 1);
          if(csum_rx == csum_calc)
          {
            uint8_t vector_string_size = 0;
            std::string s((char*)m_frame_rx);
            size_t last = 0;
            size_t next = 0;
            while ((next = s.find(',', last)) != std::string::npos && vector_string_size != 3)
            {
              vector_string_size++;
              if(vector_string_size == 3)
                m_system_type = s.substr(last, next-last);

              last = next + 1;
            }
            if (m_system_type.find(c_valid_system_type) != std::string::npos)
            {
              printf(" > System Type Ok: %s\n", m_system_type.c_str());
              return true;
            }
            else
            {
              printf(" > System Type not valid: %s\n", m_system_type.c_str());
              return false;
            }
          }
          else
          {
            printf(" > System Type Fail\n");
            return false;
          }
        }
        return false;
      }

      void
      Interface::checkSystemVersion(void)
      {
        title(" Checking System Firmware Version");
        sendCommand(c_system_version_cmd);
        if(readReply(c_timeout_reply))
        {
          uint8_t csum_rx = m_frame_rx[m_frame_rx_count - 1];
          uint8_t csum_calc = computeCRC(m_frame_rx, m_frame_rx_count - 1);
          if(csum_rx == csum_calc)
          {
            uint8_t vector_string_size = 0;
            std::string s((char*)m_frame_rx);
            size_t last = 0;
            size_t next = 0;
            while ((next = s.find(',', last)) != std::string::npos && vector_string_size != 3)
            {
              vector_string_size++;
              if(vector_string_size == 3)
                m_system_type = s.substr(last, next-last);

              last = next + 1;
            }
            printf(" > Firmware Version: %s\n", m_system_type.c_str());
          }
          else
          {
            printf(" > Firmware Version FAIL\n");
          }
        }
        else
        {
          printf(" > System Version FAIL\n");
        }
      }

      bool
      Interface::checkFirmwareFile(void)
      {
        title(" Checking Firmware File");
        printf(" > File location:%s\n", m_ibin.c_str());
        struct stat buffer;
        if(stat (m_ibin.c_str(), &buffer) == 0)
        {
          printf(" > File BIN found\n");
          return true;
        }
        else
        {
          printf(" > File BIN not found\n");
          return false;
        }
      }

      bool
      Interface::syncBoot(bool boot_update)
      {
        if(boot_update)
        {
          title(" Checking Main app Sync for bootloader update");
          sendCommand(c_boot_update_cmd);
        }
        else
        {
          title(" Checking Bootloader Sync");
          sendCommand(c_jump_to_boot_cmd);
        }
        if(readReply(c_timeout_reply))
        {
          uint8_t csum_rx = m_frame_rx[m_frame_rx_count - 1];
          uint8_t csum_calc = computeCRC(m_frame_rx, m_frame_rx_count - 1);
          if(csum_rx == csum_calc)
          {
            printf(" > Sync bootloader ok\n");
            sendCommand(c_type_cmd);
            return true;
          }
          else
          {
            printf(" > Fail sync of bootloader\n");
            return false;
          }
        }
        return false;
      }

      void
      Interface::sendCommand(const char* cmd)
      {
        size_t size_cmd = std::strlen(cmd);
        m_handle->write(cmd, size_cmd);
        uint8_t csum[2];
        csum[0] = computeCRC((uint8_t*)cmd, size_cmd);
        m_handle->write(csum, std::strlen((char*)csum));
        m_handle->write("\n", 1);
      }

      bool
      Interface::readReply(double timeout)
      {
        m_frame_rx_count = 0;
        Time::Counter<double> timer(timeout);
        bool new_data_string = false;
        while (!timer.overflow() && !new_data_string)
        {
          if (IO::Poll::poll(*m_handle, 0.01))
          {
            size_t rv = m_handle->read(m_buffer_rx, sizeof(m_buffer_rx));
            if(rv > 0)
            {
              for (size_t i = 0; i < rv; ++i)
              {
                if(m_buffer_rx[i] == '\n')
                {
                  m_frame_rx[m_frame_rx_count] = '\0';
                  new_data_string = true;
                }
                else
                {
                  m_frame_rx[m_frame_rx_count++] = m_buffer_rx[i];
                }
              }
            }
          }
        }
        return new_data_string;
      }

      void
      Interface::print(const char* format, ...)
      {
        using namespace std;
        va_list ap;
        va_start(ap, format);
        vfprintf(stderr, format, ap);
        va_end(ap);
      }

      void
      Interface::title(const char* str)
      {
        print("\n------------------------------\n");
        print(" # %s\n", str);
        print("------------------------------\n");
      }

      uint8_t
      Interface::computeCRC(uint8_t* data, size_t size)
      {
        return Algorithms::XORChecksum::compute(data, size) | 0x80;
      }

    }
  }
}
