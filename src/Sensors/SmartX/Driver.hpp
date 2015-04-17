//***************************************************************************
// Copyright 2007-2015 OceanScan - Marine Systems & Technology, Lda.        *
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

#ifndef SENSORS_SMART_X_DRIVER_HPP_INCLUDED_
#define SENSORS_SMART_X_DRIVER_HPP_INCLUDED_

// ISO C++ 98 headers.
#include <queue>

// DUNE headers.
#include <DUNE/DUNE.hpp>

namespace Sensors
{
  namespace SmartX
  {
    using DUNE_NAMESPACES;

    //! Invalid serial number string.
    static const char* c_invalid_serial = "000000";

    class Driver
    {
    public:
      //! Output channel.
      struct Channel
      {
        //! Channel type.
        std::string type;
        //! IMC message.
        IMC::Message* message;
        //! Conversion factor.
        double conversion;
        //! Serial number
        std::string serial;

        Channel(void):
          message(NULL),
          conversion(1.0)
        { }

        bool
        isCalculated(void) const
        {
          return serial == c_invalid_serial;
        }
      };

      //! Constructor.
      //! @param[in] task parent task.
      //! @param[in] uart_dev serial port device.
      //! @param[in] uart_baud serial port baud rate.
      Driver(Tasks::Task* task, const std::string& uart_dev, unsigned uart_baud):
        m_task(task)
      {
        m_uart = new SerialPort(uart_dev, uart_baud);
      }

      //! Destructor.
      ~Driver(void)
      {
        m_task->debug("closing serial port");
        Memory::clear(m_uart);
      }

      //! Start sampling.
      //! @return true if command was accepted, false otherwise.
      bool
      samplingStart(double timeout)
      {
        bool rv = sendCommand("MONITOR\r", "MONITOR\r\n", timeout);
        if (rv)
          m_uart->setCanonicalInput(true);

        return rv;
      }

      //! Stop sampling.
      //! @return true if command was accepted, false otherwise.
      bool
      samplingStop(double timeout)
      {
        m_uart->setCanonicalInput(false);
        write("\r");
        m_uart->flushInput();
        return sendCommand("\r", timeout);
      }

      //! Set sampling rate.
      //! @param[in] value sampling frequency in Hz.
      //! @return true if command was accepted, false otherwise.
      bool
      setSamplingRate(double value, double timeout)
      {
        std::string cmd;
        if (value == 0)
        {
          // FIXME: what to do here ?
        }
        else if (value >= 1.0)
        {
          cmd = String::str("SET S %u /s\r", (unsigned)value);
        }
        else
        {
          unsigned rate = Math::round(1.0 / value);
          cmd = String::str("SET S %u s\r", (unsigned)rate);
        }

        return sendCommand(cmd, timeout);
      }

      //! Start detection procedure.
      //! @return true if detection procedure was started, false
      //! otherwise.
      bool
      detectionStart(double timeout)
      {
        m_channels.clear();
        m_detection_buffer.clear();
        return sendCommand("DETECT\r", "DETECT\r\nDetecting Sensors\r\n", timeout);
      }

      //! Read detection results.
      //! @return true if detection procedure is complete, false
      //! otherwise.
      bool
      detectionRead(double timeout)
      {
        bool done = expect("Detection complete\r\n>", m_detection_buffer, timeout);
        if (done)
        {
          detectionInterpret();
        }

        return done;
      }

      bool
      setCalculatedChannels(double timeout)
      {
        Counter<double> timer(timeout);

        if (!setCalculatedChannel("TIME", false, timer.getRemaining()))
          return false;

        if (!setCalculatedChannel("DENSITY", true, timer.getRemaining()))
          return false;

        if (!setCalculatedChannel("SALINITY", true, timer.getRemaining()))
          return false;

        if (!setCalculatedChannel("SV", true, timer.getRemaining()))
          return false;

        return true;
      }

      bool
      readSample(double timeout = 1.0)
      {
        if (!Poll::poll(*m_uart, timeout))
          return false;

        m_uart->readString(m_bfr, sizeof(m_bfr));
        std::vector<std::string> parts;
        String::split(m_bfr, "  ", parts);
        if (parts.size() < m_channels.size())
          return false;

        for (size_t i = 0; i < m_channels.size(); ++i)
        {
          if (m_channels[i].type.empty())
            continue;

          double value = 0;
          castLexical(parts[i], value);
          value *= m_channels[i].conversion;
          m_channels[i].message->setValueFP(value);
          m_task->dispatch(m_channels[i].message);
        }

        return true;
      }

      std::vector<Channel>::const_iterator
      beginChannels(void) const
      {
        return m_channels.begin();
      }

      std::vector<Channel>::const_iterator
      endChannels(void) const
      {
        return m_channels.end();
      }

    private:
      //! Parent task.
      Tasks::Task* m_task;
      //! Serial port handle.
      SerialPort* m_uart;
      //! Internal buffer.
      char m_bfr[128];
      //! Input queue.
      std::queue<char> m_input;
      //! Detection buffer.
      std::string m_detection_buffer;
      //! Real channel list.
      std::vector<Channel> m_channels;

      void
      write(const std::string& str)
      {
        m_uart->writeString(str.c_str());
      }

      size_t
      read(void)
      {
        return m_uart->readString(m_bfr, sizeof(m_bfr));
      }

      bool
      sendCommand(const std::string& str, const std::string& reply, double timeout)
      {
        write(str);
        return expect(reply, timeout);
      }

      bool
      sendCommand(const std::string& str, double timeout)
      {
        std::string reply = str + "\n>";
        return sendCommand(str, reply, timeout);
      }

      bool
      expect(const std::string& str, std::string& bfr, double timeout)
      {
        Counter<double> timer(timeout);

        while (!timer.overflow())
        {
          if (!Poll::poll(*m_uart, timer.getRemaining()))
            break;

          size_t rv = read();
          bfr.append(m_bfr, rv);

          if (String::endsWith(bfr, str))
            return true;
        }

        return false;
      }

      void
      detectionInterpret(void)
      {
        std::vector<std::string> lines;
        String::split(m_detection_buffer, "\n", lines);

        for (size_t i = 0; i < 2; ++i)
          detectionInterpretLine(lines[i]);

        addCalculatedChannels();
      }

      void
      detectionInterpretLine(const std::string& line)
      {
        std::vector<std::string> parts;
        String::split(line, " ", parts);

        if ((parts.size() % 4) != 0)
          return;

        if (!String::endsWith(parts[0], ":"))
          return;

        size_t beg = 2;
        size_t end = parts.size() - beg;
        size_t sensors = (end - beg) / 4;

        for (size_t i = 0; i < sensors; ++i)
        {
          std::string type = parts[beg + (i * 4)];
          std::string serial = parts[beg + (i * 4) + 2];
          Channel channel;

          if (serial != c_invalid_serial)
            setChannel(channel, type, serial);

          m_channels.push_back(channel);
        }
      }

      bool
      setCalculatedChannel(const std::string& channel, bool value, double timeout)
      {
        std::string cmd = String::str("SET SCAN %s%s\r", value ? "" : "NO", channel.c_str());
        return sendCommand(cmd, timeout);
      }

      bool
      expect(const std::string& str, double timeout)
      {
        std::string bfr;
        return expect(str, bfr, timeout);
      }

      void
      addCalculatedChannels(void)
      {
        if (!channelIsAvailable("T.X") || !channelIsAvailable("P.X"))
          return;

        bool svx = channelIsAvailable("SV.X");
        bool cx = channelIsAvailable("C.X");

        if (cx || svx)
        {
          Channel channel;
          setChannel(channel, "WD.X", c_invalid_serial);
          m_channels.push_back(channel);
          setChannel(channel, "S.X", c_invalid_serial);
          m_channels.push_back(channel);

          if (cx)
          {
            setChannel(channel, "SV.X", c_invalid_serial);
            m_channels.push_back(channel);
          }
        }
      }

      bool
      channelIsAvailable(const std::string& type)
      {
        for (size_t i = 0; i < m_channels.size(); ++i)
        {
          if (m_channels[i].type == type)
            return true;
        }

        return false;
      }

      //! Convert sensor type to IMC message.
      void
      setChannel(Channel& channel, const std::string& sensor_type, const std::string& serial)
      {
#define SENSOR(t, m, c)                                 \
        if (sensor_type == t)                           \
        {                                               \
          channel.type = sensor_type;                   \
          channel.message = IMC::Factory::produce(m);   \
          channel.conversion = c;                       \
          channel.serial = serial;                      \
          return;                                       \
        }
#include "Sensors.def"

        throw std::runtime_error(String::str("unknown sensor type: %s", sensor_type.c_str()));
      }
    };
  }
}

#endif
