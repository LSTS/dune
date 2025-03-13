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
// DUNE headers.
#include <DUNE/DUNE.hpp>
#include <DUNE/IO/Poll.hpp>
#include <DUNE/Hardware/STM/FirmwareUpdate.hpp>
#include <DUNE/Algorithms/XORChecksum.hpp>

namespace DUNE
{
  namespace Hardware
  {
    namespace STM
    {
      //! Block frame size.
      static const int c_block_size = 256;
      //! Frame ACK
      static const std::string c_ack_frame = "$,FRAME,OK,#,";
      //! Frame NOT ACK
      static const std::string c_nack_frame = "$,FRAME,NOK,#,";

      FirmwareUpdate::FirmwareUpdate(IO::Handle* handle, std::string ibin):
        m_handle(handle),
        m_ibin(ibin)
      {
        if(openFile() && getFirmwareSize() != 0)
        {
          std::printf(" > Firmware File Size: %ld bytes (%.2f KB)\n", (unsigned long)m_firmware_len, (m_firmware_len/1024.0));
          m_firmware_file_open = true;
          m_size_send = 0;
          m_buf_bin = (uint8_t *)malloc(m_firmware_len + 1);
          uint32_t number_bytes_read = std::fread(m_buf_bin, sizeof(uint8_t), m_firmware_len, file);
          if(number_bytes_read != m_firmware_len)
          {
            std::printf(" > Wrong size read %ld - %d\n", (unsigned long)m_firmware_len, number_bytes_read);
            m_firmware_file_open = false;
          }
          m_state = FIRMWARE_READ_BLOCK;
        }
        else
        {
          if(getFirmwareSize() <= 0)
            std::printf(" > Fail open firmware file, empty file\n");
          else
            std::printf(" > Fail open firmware file\n");

          m_firmware_file_open = false;
        }
      }

      FirmwareUpdate::~FirmwareUpdate(void)
      {
        if(file != NULL)
          std::fclose(file);
      }

      size_t
      FirmwareUpdate::getFirmwareSize(void)
      {
        return m_firmware_len;
      }

      bool
      FirmwareUpdate::isFirmwareFileOpen(void)
      {
        return m_firmware_file_open;
      }

      bool
      FirmwareUpdate::finishUpdate(void)
      {
        switch (m_state)
        {
          case FIRMWARE_READ_BLOCK:
            Time::Delay::waitMsec(10);
            if(m_size_send < m_firmware_len)
            {
              if(m_firmware_len - m_size_send > c_block_size)
              {
                m_block_len = c_block_size;
              }
              else
              {
                m_block_len = m_firmware_len - m_size_send;
              }

              for(uint16_t i=0; i < m_block_len; i++)
                m_block_frame[i] = m_buf_bin[m_size_send++];

              m_state = FIRMWARE_SEND_BLOCK;
            }
            else
            {
              m_state = FIRMWARE_IDLE;
            }
            break;

          case FIRMWARE_SEND_BLOCK:
            std::printf("\r > Frame Size: %d | (S:%d of T:%ld [%2d%%])",m_block_len, m_size_send, (unsigned long)m_firmware_len, (int)((m_size_send*100)/m_firmware_len));
            sendFrameBlock(m_block_frame, m_block_len);
            m_state = FIRMWARE_WAIT_ACK;
            break;

          case FIRMWARE_WAIT_ACK:
            if(readReply(2))
            {
              if(std::strstr((char*)m_buf_reply, c_ack_frame.c_str()) != NULL)
              {
                if(m_firmware_len == m_size_send)
                  std::printf("\n");

                m_state = FIRMWARE_READ_BLOCK;
              }
              else if(std::strstr((char*)m_buf_reply, c_nack_frame.c_str()) != NULL)
              {
                std::printf("\n > Received NACK, sending the same block frame\n");
                std::printf("\r > Frame Size: %d | (S:%d of T:%ld [%2d%%])",m_block_len, m_size_send, (unsigned long)m_firmware_len, (int)((m_size_send*100)/m_firmware_len));
                sendFrameBlock(m_block_frame, m_block_len);
                m_state = FIRMWARE_WAIT_ACK;
              }
            }
            else
            {
              std::printf("\n > Timeout, sending the same block frame\n");
              std::printf("\r > Frame Size: %d | (S:%d of T:%ld [%2d%%])",m_block_len, m_size_send, (unsigned long)m_firmware_len, (int)((m_size_send*100)/m_firmware_len));
              sendFrameBlock(m_block_frame, m_block_len);
              m_state = FIRMWARE_WAIT_ACK;
            }
            break;

          case FIRMWARE_IDLE:
            std::printf(" > Finish Update: %ld - %d\n\n", (unsigned long)m_firmware_len, m_size_send);
            return true;
            break;
          
          default:
            break;
        }
        return false;
      }

      bool
      FirmwareUpdate::openFile(void)
      {
        if((file = std::fopen(m_ibin.c_str(), "rb")))
        {
          std::fseek(file, 0, SEEK_END);
          m_firmware_len = std::ftell(file);
          std::fseek(file, 0, SEEK_SET);
          return true;
        }
        return false;
      }

      void
      FirmwareUpdate::sendFrameBlock(uint8_t* frame, uint16_t size_frame)
      {
        uint16_t total_frame_size = size_frame + 4; 
        uint8_t* cmd_frame = new uint8_t[total_frame_size];
        uint32_t cnt_frame = 0;
        cmd_frame[cnt_frame++] = '$';
        cmd_frame[cnt_frame++] = 'F';
        
        for(uint16_t i = 0; i < size_frame; i++)
          cmd_frame[cnt_frame++]= frame[i];

        cmd_frame[cnt_frame++] = '*';
        uint8_t csum[2];
        csum[0] = computeCRC(cmd_frame, cnt_frame);
        cmd_frame[cnt_frame] = csum[0];
        m_handle->write(cmd_frame, total_frame_size);
        delete[] cmd_frame;
      }

      bool
      FirmwareUpdate::readReply(double timeout)
      {
        m_reply_cnt = 0;
        Time::Counter<double> timer(timeout);
        bool new_reply = false;
        while (!timer.overflow() && !new_reply)
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
                  m_buf_reply[m_reply_cnt] = '\0';
                  new_reply = true;
                }
                else
                {
                  m_buf_reply[m_reply_cnt++] = m_buffer_rx[i];
                }
              }
            }
          }
        }
        return new_reply;
      }


      uint8_t
      FirmwareUpdate::computeCRC(uint8_t* data, size_t size)
      {
        return Algorithms::XORChecksum::compute(data, size) | 0x80 ;
      }

    }
  }
}
