//***************************************************************************
// Copyright 2007-2024 Universidade do Porto - Faculdade de Engenharia      *
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
// Author: Ricardo Martins                                                  *
//***************************************************************************

// DUNE headers.
#include <DUNE/DUNE.hpp>

using DUNE_NAMESPACES;

namespace Sensors
{
  //! Device driver for the AML OEM Xchange Sound Velocimeter.
  namespace XchangeSV
  {
    struct Arguments
    {
      //! IO device (URI).
      std::string io_dev;
      //! Power on Delay
      double pwr_on_delay;
      //! Input timeout.
      double input_timeout;
    };

    //! Minimum sound speed value.
    static const double c_min_speed = 1375.0;
    //! Maximum sound speed value.
    static const double c_max_speed = 1625.0;

    struct Task: public Hardware::BasicDeviceDriver
    {
      //! Sound speed message.
      IMC::SoundSpeed m_sspeed;
      //! Serial port handle.
      IO::Handle* m_handle;
      //! Task arguments.
      Arguments m_args;
      //! Watchdog.
      Counter<double> m_wdog;
      //! True if IO handle is a SerialPort.
      bool m_uart;
      //! Read buffer
      char m_bfr[32];

      Task(const std::string& name, Tasks::Context& ctx):
        Hardware::BasicDeviceDriver(name, ctx),
        m_handle(nullptr),
        m_uart(false)
      {
        paramActive(Tasks::Parameter::SCOPE_GLOBAL,
                    Tasks::Parameter::VISIBILITY_DEVELOPER, 
                    true);
                    
        param("IO Port - Device", m_args.io_dev)
        .defaultValue("")
        .description("IO device URI in the form \"tcp://ADDRESS:PORT\" "
                     "or \"uart://DEVICE:BAUD\"");

        param(DTR_RT("Power On Delay"), m_args.pwr_on_delay)
        .defaultValue("0.0");

        param("Input Timeout", m_args.input_timeout)
        .defaultValue("4.0")
        .minimumValue("1.0")
        .units(Units::Second)
        .description("Amount of seconds to wait for data before reporting an error");
      }

      //! Try to connect to the device.
      //! @return true if connection was established, false otherwise.
      bool
      onConnect() override
      {
        Delay::wait(m_args.pwr_on_delay);

        try
        {        
          m_handle = openSocketTCP(m_args.io_dev);

          if (m_handle == nullptr)
          {
            m_handle = openUART(m_args.io_dev);
            static_cast<SerialPort*>(m_handle)->setCanonicalInput(true);
            m_uart = true;
          }

          if (m_handle != nullptr)
            m_handle->flush();

          return m_handle != nullptr;
        }
        catch (...)
        {
          throw RestartNeeded(DTR(Status::getString(CODE_COM_ERROR)), 5);
        }

        return false;
      }

      //! Disconnect from device.
      void
      onDisconnect() override
      {
        Memory::clear(m_handle);
      }

      //! Device may be initialized.
      void
      onInitializeDevice() override
      {
        m_handle->writeString("\r");
        Delay::wait(1.0);
        m_handle->flush();

        if (m_uart)
          if (!sendCommand("\r", "\r\n"))
            throw RestartNeeded(DTR("failed to enter command mode"), 5, false);

        if (!sendCommand("SET SAMPLE 1 s\r", ">SET SAMPLE 1 s\r\n"))
          throw RestartNeeded(DTR("failed to set sampling rate"), 5, false);

        if (!sendCommand("MONITOR\r", ">MONITOR\r\n"))
          throw RestartNeeded(DTR("failed to enter monitor mode"), 5, false);

        m_wdog.setTop(m_args.input_timeout);
      }

      bool
      sendCommand(const char* cmd, const char* reply)
      {
        char bfr[128];

        m_handle->writeString(cmd);

        if (Poll::poll(*m_handle, 1.0))
        {
          m_handle->readString(bfr, sizeof(bfr));
          if (std::strcmp(bfr, reply) == 0)
            return true;
        }

        return false;
      }

      //! Get data from device.
      //! @return true if data was received, false otherwise.
      bool
      onReadData() override
      {
        if (m_wdog.overflow())
        {
          setEntityState(IMC::EntityState::ESTA_ERROR, Status::CODE_COM_ERROR);
          throw RestartNeeded(DTR(Status::getString(CODE_COM_ERROR)), 5);
        }

        if (!Poll::poll(*m_handle, 1.0))
          return false;

        size_t rv = m_handle->readString(m_bfr, sizeof(m_bfr));

        if (rv == 0)
          throw RestartNeeded(DTR("I/O error"), 5);

        if (std::sscanf(m_bfr, "%f", &m_sspeed.value) != 1)
          return false;

        if ((m_sspeed.value < c_min_speed) || (m_sspeed.value > c_max_speed))
          m_sspeed.value = -1;

        setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_ACTIVE);
        m_wdog.reset();
        dispatch(m_sspeed);

        return true;
      }
    };
  }
}

DUNE_TASK
