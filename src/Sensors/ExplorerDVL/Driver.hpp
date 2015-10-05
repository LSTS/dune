//***************************************************************************
// Copyright 2007-2015 OceanScan - Marine Systems & Technology, Lda         *
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

#ifndef SENSORS_EXPLORER_DVL_DRIVER_HPP_INCLUDED_
#define SENSORS_EXPLORER_DVL_DRIVER_HPP_INCLUDED_

// ISO C++ 98 headers.
#include <string>

// DUNE headers.
#include <DUNE/DUNE.hpp>

namespace Sensors
{
  namespace ExplorerDVL
  {
    using DUNE_NAMESPACES;

    class Driver
    {
    public:
      enum InputTriggerBehaviour
      {
        ITB_OFF = 0,
        ITB_RISING_EDGE = 1,
        ITB_FALLING_EDGE = 2,
        ITB_BOTH_EDGES = 3,
        ITB_LOW_LEVEL = 4,
        ITB_HIGH_LEVEL = 5
      };

      //! Constructor.
      //! @param[in] task parent task.
      //! @param[in] uart serial port device.
      //! @param[in] baud serial port baud rate.
      Driver(Tasks::Task* task, const std::string& uart, unsigned baud):
        m_task(task),
        m_uart(NULL),
        m_timeout_count(0),
        m_timeout(2.0)
      {
        m_uart = new SerialPort(uart.c_str(), baud);
      }

      //! Destructor.
      ~Driver(void)
      {
        Memory::clear(m_uart);
      }

      bool
      restartPinging(void)
      {
        Counter<double> timer(5.0);

        while (!timer.overflow())
        {
          if (stopPinging())
          {
            if (startPinging())
              return true;
          }
        }

        return false;
      }

      //! Start pinging and collecting data.
      //! @return true if command succeeded, false otherwise.
      bool
      startPinging(void)
      {
        m_uart->writeString("CS\r");
        return readUntil("CS\r\n", m_timeout);
      }

      //! Stop pinging and enter command mode.
      //! @return true if command succeeded, false otherwise.
      bool
      stopPinging(void)
      {
        m_uart->flush();
        m_uart->sendBreak(300);
        return readUntil("\r\n>", m_timeout);
      }

      //! Set data format number.
      //! @param[in] value data format number.
      //! @return true if command succeeded, false otherwise.
      bool
      setDataFormat(unsigned value)
      {
        String::format(m_cmd_bfr, sizeof(m_cmd_bfr), "#PD%u\r", value);
        return sendCommand(m_cmd_bfr);
      }

      //! Set number of depth cells.
      //! @param[in] number number of depth cells.
      //! @return true if command succeeded, false otherwise.
      bool
      setDepthCells(uint8_t number)
      {
        String::format(m_cmd_bfr, sizeof(m_cmd_bfr), "WN%03u\r", number);
        return sendCommand(m_cmd_bfr);
      }

      //! Set heading alignment.
      //! @param[in] angle alignment angle in degree.
      //! @return true if command succeeded, false otherwise.
      bool
      setHeadingAlignment(double angle)
      {
        String::format(m_cmd_bfr, sizeof(m_cmd_bfr), "EA%+05d\r", (int)(angle * 100));
        return sendCommand(m_cmd_bfr);
      }

      //! Enable/disable automatic pinging.
      //! @param[in] value true to enable, false to disable automatic pinging.
      //! @return true if command succeeded, false otherwise.
      bool
      setTurnKey(bool value)
      {
        String::format(m_cmd_bfr, sizeof(m_cmd_bfr), "#CT%u\r", (unsigned)value);
        return sendCommand(m_cmd_bfr);
      }

      //! Set maximum tracking depth.
      //! @param[in] value maximum tracking depth in meter.
      //! @return true if command succeeded, false otherwise.
      bool
      setMaximumTrackingDepth(unsigned value)
      {
        if (value > 1000)
          throw std::runtime_error("invalid value");

        String::format(m_cmd_bfr, sizeof(m_cmd_bfr), "BX%05u\r", (unsigned)value);
        return sendCommand(m_cmd_bfr);
      }

      //! Set the number of bottom-track pings to average together in each
      //! data ensemble.
      //! @param[in] number of pings.
      //! @return true if command succeeded, false otherwise.
      bool
      setBottomTrackPingsPerEnsemble(unsigned value)
      {
        String::format(m_cmd_bfr, sizeof(m_cmd_bfr), "BP%u\r", (unsigned)value);
        return sendCommand(m_cmd_bfr);
      }

      //! Set speed of sound.
      //! @param[in] value speed of sound in m/s.
      //! @return true if command succeeded, false otherwise.
      bool
      setSoundSpeed(unsigned value)
      {
        if (value < 1400 || value > 1600)
          value = 1500;

        String::format(m_cmd_bfr, sizeof(m_cmd_bfr), "#EC%u\r", value);
        return sendCommand(m_cmd_bfr);
      }

      bool
      setEarthCoordinates(void)
      {
        return sendCommand("EX11111\r");
      }

      //! Set the source of environmental sensor data to manual. This is
      //! useful when the DVL doesn't have any installed optional sensors.
      //! @return true if command succeeded, false otherwise.
      bool
      setManualSensorSource(void)
      {
        return sendCommand("EZ00000000\r");
      }

      bool
      setInputTriggerEnable(InputTriggerBehaviour behaviour, uint16_t delay, uint16_t timeout = 65535)
      {
        std::string cmd = String::str("CX %u %u %u\r", behaviour, delay, timeout);
        return sendCommand(cmd);
      }

      //! Set the number of seconds to wait for a reply.
      //! @param[in] timeout number of seconds to wait for a reply.
      void
      setTimeout(double timeout)
      {
        m_timeout = timeout;
      }

      //! Get the number of timeouts that ocurred thus far.
      //! @return number of timeouts.
      size_t
      getTimeoutCount(void) const
      {
        return m_timeout_count;
      }

      //! Read data.
      //! @param[in] bfr buffer to hold data.
      //! @param[in] bfr_size size of data buffer.
      //! @return number of bytes read.
      size_t
      readData(uint8_t* bfr, size_t bfr_size)
      {
        if (!Poll::poll(*m_uart, m_timeout))
          return 0;

        return m_uart->read(bfr, bfr_size);
      }

    private:
      //! Parent task.
      Tasks::Task* m_task;
      //! Serial Port handle.
      SerialPort* m_uart;
      //! Command buffer.
      char m_cmd_bfr[64];
      //! Timeout count.
      size_t m_timeout_count;
      //! Timeout value.
      double m_timeout;

      //! Send command and wait for reply.
      //! @param[in] cmd command to send.
      //! @return true if command succeeded, false otherwise.
      bool
      sendCommand(const std::string& cmd)
      {
        m_uart->writeString(cmd.c_str());
        std::string reply(cmd + "\n>");
        return readUntil(reply, m_timeout);
      }

      //! Read input until a given sequence is received. Note that
      //! data after the sequence might be discarded.
      //! @param[in] sequence sequence to search.
      //! @param[in] timeout timeout in second.
      bool
      readUntil(const std::string& sequence, float timeout)
      {
        Counter<float> timer(timeout);
        char bfr[256] = {0};
        size_t offset = 0;

        while (!timer.overflow())
        {
          if (!Poll::poll(*m_uart, timer.getRemaining()))
            break;

          offset += m_uart->read(bfr + offset, sizeof(bfr) - offset);
          if (offset > sizeof(bfr))
            break;

          if (String::endsWith(bfr, sequence))
            return true;
        }

        ++m_timeout_count;
        return false;
      }
    };
  }
}

#endif
