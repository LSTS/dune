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

// ISO C++ 98 headers.
#include <cstring>
#include <cstddef>

// DUNE headers.
#include <DUNE/DUNE.hpp>

namespace Sensors
{
  namespace GillWindObserverII
  {
    using DUNE_NAMESPACES;

    struct Arguments
    {
      // UART device.
      std::string uart_dev;
      // UART baud rate.
      unsigned uart_baud;
    };

    struct Task: public DUNE::Tasks::Task
    {
      // Serial port handle.
      SerialPort* m_uart;
      // Wind speed message.
      IMC::WindSpeed m_wind;
      // Task arguments.
      Arguments m_args;

      Task(const std::string& name, Tasks::Context& ctx):
        DUNE::Tasks::Task(name, ctx),
        m_uart(NULL)
      {
        // Define configuration parameters.
        param("Serial Port - Device", m_args.uart_dev)
        .defaultValue("")
        .description("Serial port device used to communicate with the sensor");

        param("Serial Port - Baud Rate", m_args.uart_baud)
        .defaultValue("9600")
        .description("Serial port baud rate");
      }

      void
      onResourceAcquisition(void)
      {
        m_uart = new SerialPort(m_args.uart_dev, m_args.uart_baud);
        m_uart->setCanonicalInput(true);
      }

      void
      onResourceRelease(void)
      {
        Memory::clear(m_uart);
      }

      void
      onMain(void)
      {
        char line[128];
        int rv = 0;
        int wind_dir;

        inf("%s", DTR(Status::getString(Status::CODE_ACTIVE)));

        while (!stopping())
        {
          rv = m_uart->read(line, 128);

          if (rv <= 0)
            continue;

          // Terminate string.
          line[rv] = 0;

          std::vector<std::string> parts;
          String::split(line, ",", parts);

          if (parts.size() != 6)
            continue;

          std::sscanf(parts[1].c_str(), "%d", &wind_dir);
          m_wind.direction = DUNE::Math::Angles::radians(wind_dir);
          std::sscanf(parts[2].c_str(), "%f", &m_wind.speed);

          dispatch(m_wind);
        }
      }
    };
  }
}

DUNE_TASK
