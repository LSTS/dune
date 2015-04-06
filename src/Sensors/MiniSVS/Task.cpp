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

// DUNE headers.
#include <DUNE/DUNE.hpp>

namespace Sensors
{
  //! Device driver for Valeport's miniSVS Sound Velocity %Sensors.
  namespace MiniSVS
  {
    using DUNE_NAMESPACES;

    struct Arguments
    {
      //! Serial port device.
      std::string uart_dev;
      //! Serial port baud rate.
      unsigned uart_baud;
      //! Input timeout.
      double input_timeout;
    };

    //! Minimum sound speed value.
    static const double c_min_speed = 1375.0;
    //! Maximum sound speed value.
    static const double c_max_speed = 1900.0;

    struct Task: public DUNE::Tasks::Task
    {
      //! Sound speed message.
      IMC::SoundSpeed m_sspeed;
      //! Serial port handle.
      SerialPort* m_uart;
      //! Watchdog.
      Counter<double> m_wdog;
      //! Task arguments
      Arguments m_args;

      Task(const std::string& name, Tasks::Context& ctx):
        DUNE::Tasks::Task(name, ctx),
        m_uart(NULL)
      {
        param("Serial Port - Device", m_args.uart_dev)
        .defaultValue("")
        .description("Serial port device used to communicate with the sensor");

        param("Serial Port - Baud Rate", m_args.uart_baud)
        .defaultValue("19200")
        .description("Serial port baud rate");

        param("Input Timeout", m_args.input_timeout)
        .defaultValue("4.0")
        .minimumValue("2.0")
        .units(Units::Second)
        .description("Amount of seconds to wait for data before reporting an error");
      }

      void
      onResourceAcquisition(void)
      {
        setEntityState(IMC::EntityState::ESTA_BOOT, Status::CODE_INIT);
        m_uart = new SerialPort(m_args.uart_dev, m_args.uart_baud);
        m_uart->setCanonicalInput(true);
      }

      void
      onResourceInitialization(void)
      {
        m_uart->writeString("#");
        m_uart->writeString("M1\r\n");
        m_wdog.setTop(m_args.input_timeout);
      }

      void
      onResourceRelease(void)
      {
        Memory::clear(m_uart);
      }

      void
      onMain(void)
      {
        char bfr[16];

        while (!stopping())
        {
          consumeMessages();

          if (m_wdog.overflow())
          {
            setEntityState(IMC::EntityState::ESTA_ERROR, Status::CODE_COM_ERROR);
            throw RestartNeeded(DTR(Status::getString(CODE_COM_ERROR)), 5);
          }

          if (!Poll::poll(*m_uart, 1.0))
            continue;

          size_t rv = m_uart->readString(bfr, sizeof(bfr));
          if (rv == 0)
          {
            setEntityState(IMC::EntityState::ESTA_ERROR, Status::CODE_COM_ERROR);
            throw RestartNeeded(DTR("I/O error"), 5);
          }

          if (std::sscanf(bfr, "%f", &m_sspeed.value) == 1)
          {
            m_sspeed.value /= 1000.0;
            if ((m_sspeed.value < c_min_speed) || (m_sspeed.value > c_max_speed))
              m_sspeed.value = -1.0;

            m_wdog.reset();
            dispatch(m_sspeed);
            setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_ACTIVE);

          }
        }
      }
    };
  }
}

DUNE_TASK
