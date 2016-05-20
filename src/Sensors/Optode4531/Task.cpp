//***************************************************************************
// Copyright 2007-2016 OceanScan - Marine Systems & Technology, Lda.        *
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
// Author: José Braga                                                       *
//***************************************************************************

// ISO C++ 98 headers.
#include <cstdio>
#include <string>

// DUNE headers.
#include <DUNE/DUNE.hpp>

namespace Sensors
{
  namespace Optode4531
  {
    using DUNE_NAMESPACES;

    //! Dissolved oxygen depth compensation factor.
    static const float c_depth_factor = 3.2e-05;

    struct Arguments
    {
      //! Serial port device.
      std::string uart_dev;
      //! Serial port baud rate.
      unsigned uart_baud;
      //! Sampling period.
      double period;
    };

    struct Task: public DUNE::Tasks::Task
    {
      //! Last compensated depth.
      double m_depth;
      //! Last defined salinity.
      double m_salinity;
      //! Serial port handle.
      SerialPort* m_uart;
      //! Watchdog.
      Counter<double> m_wdog;
      //! Save device raw data.
      IMC::DevDataText m_dev_data;
      //! Received data line.
      std::string m_line;
      //! Task arguments.
      Arguments m_args;

      //! Constructor.
      //! @param[in] name task name.
      //! @param[in] ctx context.
      Task(const std::string& name, Tasks::Context& ctx):
        DUNE::Tasks::Task(name, ctx),
        m_depth(0.0),
        m_salinity(0.0),
        m_uart(NULL)
      {
        param("Serial Port - Device", m_args.uart_dev)
        .defaultValue("")
        .description("Serial port device used to communicate with the sensor");

        param("Serial Port - Baud Rate", m_args.uart_baud)
        .defaultValue("9600")
        .description("Serial port baud rate");

        param("Sampling Interval", m_args.period)
        .defaultValue("5.0")
        .minimumValue("2.0")
        .maximumValue("15300")
        .units(Units::Second)
        .description("Amount of seconds between samplings");

        bind<IMC::EstimatedState>(this);
        bind<IMC::Salinity>(this);
      }

      //! Update internal state with new parameter values.
      void
      onUpdateParameters(void)
      {
        if (paramChanged(m_args.period))
          setPeriod(m_args.period);
      }

      //! Acquire resources.
      void
      onResourceAcquisition(void)
      {
        setEntityState(IMC::EntityState::ESTA_BOOT, Status::CODE_INIT);

        try
        {
          m_uart = new SerialPort(m_args.uart_dev, m_args.uart_baud);
          m_uart->setCanonicalInput(true);
          m_uart->flush();
        }
        catch (std::runtime_error& e)
        {
          throw RestartNeeded(e.what(), 30);
        }
      }

      //! Initialize resources.
      void
      onResourceInitialization(void)
      {
        // Wake-up device.
        sendCommand(";");
        Delay::wait(0.1);

        getVersion();
        sendCommand("set passkey(1)");
        sendCommand("set enable text(yes)");
        sendCommand("set enable decimalformat(yes)");
        sendCommand("set enable AirSaturation(yes)");
        sendCommand("set enable Temperature(yes)");
        sendCommand("set enable RawData(yes)");
        sendCommand("set enable Polled Mode(no)");
        sendCommand("set enable sleep(yes)");
        sendCommand("start");
        m_wdog.reset();
      }

      //! Release resources.
      void
      onResourceRelease(void)
      {
        sendCommand("stop");
        Memory::clear(m_uart);
      }

      void
      consume(const IMC::EstimatedState* msg)
      {
        if (msg->getSource() != getSystemId())
          return;

        m_depth = msg->depth;
      }

      void
      consume(const IMC::Salinity* msg)
      {
        if (msg->getSource() != getSystemId())
          return;

        if (msg->value < 0)
          return;

        if (std::fabs(msg->value - m_salinity) > 3.0)
        {
          sendCommand("set passkey(1000)");
          sendCommand(String::str("set salinity(%f)", msg->value));
          m_salinity = msg->value;
        }
      }

      //! Request device's firmware version.
      void
      getVersion(void)
      {
        sendCommand("get sw version");
        listen();
      }

      //! Set device's sampling rate interval.
      //! @param[in] period desired sampling rate interval.
      void
      setPeriod(double period)
      {
        // Watchdog will be twice desired sampling rate interval.
        m_wdog.setTop(m_args.period * 2);

        std::string cmd = String::str("set interval(%f)", period);
        sendCommand(cmd);
        sendCommand("save");
      }

      //! Process incoming sentence.
      //! @param[in] msg sentence.
      void
      process(const std::string& msg)
      {
        double tstamp = Clock::getSinceEpoch();
        m_dev_data.value.assign(sanitize(msg));
        m_dev_data.setTimeStamp(tstamp);
        dispatch(m_dev_data, DF_KEEP_TIME);

        if (String::startsWith(msg, "MEASUREMENT"))
          publish(msg, tstamp);
        else if (String::startsWith(msg, "SW Version"))
          onVersion(msg);
      }

      //! Process and dispatch measurement data.
      //! @param[in] msg sentence.
      //! @param[in] tstamp current timestamp.
      void
      publish(const std::string& msg, double tstamp)
      {
        IMC::Temperature temp;
        IMC::AirSaturation air;
        IMC::DissolvedOxygen oxy;

        std::sscanf(msg.c_str(),
                    "%*[^\t]\t%*u\t%*u\t%*s\t%f\t%*s\t%f\t%*s\t%f%*[^\n]\n",
                    &oxy.value, &air.value, &temp.value);

        air.value *= (1 + c_depth_factor * m_depth);

        temp.setTimeStamp(tstamp);
        air.setTimeStamp(tstamp);
        oxy.setTimeStamp(tstamp);

        dispatch(temp, DF_KEEP_TIME);
        dispatch(air, DF_KEEP_TIME);
        dispatch(oxy, DF_KEEP_TIME);

        setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_ACTIVE);
        m_wdog.reset();
      }

      //! Process and announce firmware version
      //! @param[in] msg sentence.
      void
      onVersion(const std::string& msg)
      {
        int major, minor, patch;
        std::sscanf(msg.c_str(), "%*[^\t]\t%*u\t%*u\t%d, %d, %d%*[^\n]\n",
                    &major, &minor, &patch);

        inf(DTR("firmware version %u.%u.%u"), major, minor, patch);
      }

      //! Send command to device.
      //! @param[in] cmd command to send.
      void
      sendCommand(const std::string& cmd)
      {
        if (m_uart == NULL)
          return;

        m_dev_data.value.assign(sanitize(cmd));
        dispatch(m_dev_data);

        m_uart->writeString(String::str("%s\r\n", cmd).c_str());
      }

      //! Check serial port for incoming transmissions.
      void
      listen(void)
      {
        char bfr[256];

        if (!Poll::poll(*m_uart, 1.0))
          return;

        size_t rv = m_uart->readString(bfr, sizeof(bfr));

        for (size_t i = 0; i < rv; ++i)
        {
          m_line.push_back(bfr[i]);

          // Detect line termination.
          if (bfr[i] == '\n')
          {
            process(m_line);
            m_line.clear();
          }
        }
      }

      //! Main loop.
      void
      onMain(void)
      {
        while (!stopping())
        {
          consumeMessages();
          listen();

          if (m_wdog.overflow())
          {
            setEntityState(IMC::EntityState::ESTA_ERROR, Status::CODE_COM_ERROR);
            throw RestartNeeded(DTR(Status::getString(CODE_COM_ERROR)), 5);
          }
        }
      }
    };
  }
}

DUNE_TASK
