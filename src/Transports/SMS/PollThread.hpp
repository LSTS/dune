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

#ifndef TRANSPORTS_SMS_POOL_THREAD_HPP_INCLUDED_
#define TRANSPORTS_SMS_POOL_THREAD_HPP_INCLUDED_

// ISO C++ 98 headers.
#include <iostream>
#include <cstdio>
#include <string>
#include <regex>

// DUNE headers.
#include <DUNE/DUNE.hpp>

// Import namespaces.
using DUNE_NAMESPACES;

#include "Driver.hpp"

namespace Transports
{
  namespace SMS
  {
    //! Size of buffer to read data from IO handle.
    static const size_t c_bfr_size = 1024 * 8; // 8 KB
    //! Command timeout for ls command, in seconds
    static const float c_ls_timeout_cmd = 1.0f;
    //! Timeout for new line detection, in seconds
    static const float c_new_line_timeout = 0.5f;
    //! Time to wait between handle checks, in seconds
    static const float c_handle_reset_time = 0.1f;

    class PollThread : public Concurrency::Thread
    {
      public:
        //! Constructor.
        //! @param[in] task parent task.
        PollThread(DUNE::Tasks::Task* task, IO::Handle* handle, Driver* driver, std::string io_dev):
          m_task(task),
          m_handle(handle),
          m_driver(driver),
          m_io_dev(io_dev)
        {
          m_is_handle_opened = true;
          m_driver->setHandleIsOpen(m_is_handle_opened);
          m_cnt_rx = 0;
          m_ls_timeout.setTop(c_ls_timeout_cmd);
          m_new_line_timer.setTop(c_new_line_timeout);
          m_is_handle_reset = false;
          m_handle_reset_timer.setTop(c_handle_reset_time);
        }

        //! Destructor.
        ~PollThread(void)
        {
        }

        void
        run(void)
        {
          while(!isStopping())
          {
            if(m_is_handle_opened)
            {
              if(Poll::poll(*m_handle, 0.01))
              {
                size_t rv = m_handle->read(m_bfr, c_bfr_size);
                m_task->debug("[PollThread]:%zu bytes read from IO handle", rv);
                if(rv > 0)
                {
                  m_new_line_timer.reset();
                  for(size_t i = 0; i < rv; i++)
                  {
                    m_bfr_rx[m_cnt_rx++] = m_bfr[i];
                    if(m_cnt_rx >= c_bfr_size)
                    {
                      m_task->inf("[PollThread]:Buffer overflow, resetting buffer");
                      m_cnt_rx = 0;
                    }
                  }
                }
              }
              else if (m_new_line_timer.overflow() && m_cnt_rx > 0)
              {
                m_new_line_timer.reset();
                if (m_cnt_rx > 0)
                {
                  m_bfr_rx[m_cnt_rx] = '\0';  // Null-terminate the buffer
                  std::string line(reinterpret_cast<char*>(m_bfr_rx), m_cnt_rx);
                  m_task->debug("[PollThread]: Received response: %s", line.c_str());
                  m_driver->addRXLineReceived(line);
                  m_cnt_rx = 0;  // Reset counter after processing
                  m_bfr_rx[0] = '\0';  // Reset buffer
                }
              }
            }

            checkHandle();
          }
        }

        // Function to check if the device specified in m_io_dev is available
        bool
        isAvailable(void)
        {
          // cehck if m_io_dev is empty
          if (m_io_dev.empty())
          {
            m_task->war("[PollThread]: Invalid format: empty device path");
            return false;
          }
          // Find position of "://"
          size_t pos_scheme = m_io_dev.find("://");
          if (pos_scheme == std::string::npos)
          {
            m_task->war("[PollThread]: Invalid format: missing '://'");
            return false;
          }
          // Find position of ":" after the device path
          size_t pos_colon = m_io_dev.find(":", pos_scheme + 3);
          if (pos_colon == std::string::npos)
          {
            m_task->war("[PollThread]: Invalid format: missing ':' after device path");
            return false;
          }
          // Extract device path between "://" and ":"
          std::string device = m_io_dev.substr(pos_scheme + 3, pos_colon - (pos_scheme + 3));
          if (device.empty())
          {
            m_task->war("[PollThread]: Invalid format: empty device path");
            return false;
          }
          // Validate the device path to avoid command injection
          // Accepts "/dev/tty" followed by letters and digits, or "/dev/uart/" followed by digits
          std::regex re("^(/dev/tty[a-zA-Z]+[0-9]+|/dev/uart/[0-9]+)$");
          if (!std::regex_match(device, re))
          {
            m_task->war("[PollThread]: Invalid device path format: %s", device.c_str());
            return false;
          }
          // Prepare the command to check device existence, redirect stderr to /dev/null
          std::string command = "ls -l " + device + " 2>/dev/null";
          // Open pipe to execute command
          FILE* fp = popen(command.c_str(), "r");
          if (!fp)
          {
            m_task->war("[PollThread]: Failed to run command: %s", command.c_str());
            return false;
          }
          // Read the output from the command to check if device exists
          char buffer[512];
          bool hasOutput = false;
          while (fgets(buffer, sizeof(buffer), fp) != nullptr)
          {
            m_task->debug("[PollThread]: Command output: %s", buffer);
            hasOutput = true;
            break;
          }
          // Close the pipe to avoid resource leaks
          pclose(fp);
          // Return true if output was received, false otherwise
          return hasOutput;
        }

        //! Get IO handle.
        //! @return IO handle.
        IO::Handle*
        getHandle(void)
        {
          return m_handle;
        }

        bool
        isHandleOpened(void)
        {
          return m_is_handle_opened;
        }

        bool
        isHandleReset(void)
        {
          return m_is_handle_reset;
        }

        void
        clearHandleFlag(void)
        {
          m_is_handle_reset = false;
        }

      private:
        //! Parent task.
        DUNE::Tasks::Task* m_task;
        //! IO handle.
        IO::Handle* m_handle;
        //! Driver of CPC.
        Driver* m_driver;
        //! Buffer to merge all read data from IO handle.
        uint8_t m_bfr_rx[c_bfr_size];
        //! Buffer to read data from IO handle.
        uint8_t m_bfr[c_bfr_size];
        //! Counter of rx bytes.
        uint32_t m_cnt_rx;
        //! IO device URI.
        std::string m_io_dev;
        //! Flag to indicate if the handle is opened.
        bool m_is_handle_opened;
        //! ls check timeout watchdog.
        Time::Counter<float> m_ls_timeout;
        //! new rx line timeout watchdog.
        Time::Counter<float> m_new_line_timer;
        //! Flag to control reset of handle
        bool m_is_handle_reset;
        //! Timer to give some time to detect handle reset
        Time::Counter<float> m_handle_reset_timer;

        IO::Handle*
        openUART(const std::string& device, bool canonicalInput = false)
        {
          char uart[128] = { 0 };
          unsigned baud = 0;
          m_task->inf("[PollThread] >> attempting URI: %s", device.c_str());

          if (std::sscanf(device.c_str(), "uart://%[^:]:%u", uart, &baud) != 2)
            return nullptr;

          SerialPort* uri = new SerialPort(uart, baud);
          uri->setCanonicalInput(canonicalInput);
          return uri;
        }

        //! Check if the handle is still valid.
        void
        checkHandle(void)
        {
          if (m_ls_timeout.overflow())
          {
            m_ls_timeout.reset();
            // check if the device is available
            if (!isAvailable())
            {
              if (m_is_handle_opened)
              {
                m_task->war("[PollThread]:Device not available, clossing m_handle");
                // delete the driver and handle
                if (m_handle != NULL)
                {
                  Memory::clear(m_handle);
                  m_task->inf("[PollThread]:IO Handle deleted");
                }
                m_is_handle_opened = false;
                m_driver->setHandleIsOpen(m_is_handle_opened);
              }
            }
            else
            {
              if (!m_is_handle_opened)
              {
                m_task->inf("[PollThread]:Device available, opening m_handle");
                // open the handle
                if (m_handle == NULL)
                {
                  Time::Delay::waitMsec(1000);
                  m_handle = openUART(m_io_dev);
                  m_driver->updateHandle(m_handle);
                  m_task->inf("[PollThread]:IO Handle opened");
                  // Make some pool reads during 5 seconds, to clean/received init strings of modem
                  int cnt_time = 0;
                  while (m_handle != NULL && cnt_time < 500)
                  {
                    Poll::poll(*m_handle, 0.01);
                    Time::Delay::waitMsec(10);
                    cnt_time++;
                  }
                  if(m_handle == NULL)
                  {
                    m_task->err("[PollThread]: Failed to open IO handle");
                    return;
                  }
                  m_handle->flushInput(); // Flush input buffer
                  m_handle->flushOutput(); // Flush output buffer
                  m_cnt_rx = 0; // Reset the RX counter
                  m_bfr_rx[m_cnt_rx] = '\0';
                  m_is_handle_opened = true;
                  m_task->inf("[PollThread]:IO Handle flushed and ready");
                  m_is_handle_reset = true; // Set the flag to indicate handle reset
                }
              }
            }
          }
          else
          {
            Time::Delay::waitMsec(100);
          }
        }
    };
  }
}

#endif


