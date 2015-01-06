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
// Author: Eduardo Marques                                                  *
//***************************************************************************

// ISO C++ 98 headers.
#include <vector>

// DUNE headers.
#include <DUNE/DUNE.hpp>

namespace Transports
{
  namespace Serial
  {
    using DUNE_NAMESPACES;

    struct Arguments
    {
      std::string device;
      uint16_t baud_rate;
    };

    struct Task: public Tasks::SimpleTransport
    {
      // Task arguments.
      Arguments m_args;

      // Serial port handle.
      Hardware::SerialPort* m_uart;

      // Parser handle.
      IMC::Parser m_parser;

      Task(const std::string& name, Tasks::Context& ctx):
        Tasks::SimpleTransport(name, ctx),
        m_uart(NULL)
      {
        param("Serial Port - Device", m_args.device)
        .defaultValue("")
        .description("Serial port device");

        param("Serial Port - Baud Rate", m_args.baud_rate)
        .defaultValue("9600")
        .description("Serial port baud rate");
      }

      void
      onResourceAcquisition(void)
      {
        m_uart = new SerialPort(m_args.device, m_args.baud_rate);
      }

      void
      onResourceRelease(void)
      {
        Memory::clear(m_uart);

        m_parser.reset();
      }

      ~Task(void)
      {
        onResourceRelease();
      }

      void
      onDataTransmission(const uint8_t* p, unsigned int n)
      {
        m_uart->write(p, n);
      }

      void
      onDataReception(uint8_t* p, unsigned int n, double timeout)
      {
        if (!Poll::poll(*m_uart, timeout))
          return;

        int n_r;

        try
        {
          n_r = m_uart->read(p, n);
        }
        catch (std::exception& e)
        {
          err(DTR("read error: %s"), e.what());
          return;
        }

        if (n_r < 0)
        {
          err(DTR("unknown read error"));
          return;
        }

        handleData(m_parser, p, n_r);
      }
    };
  }
}

DUNE_TASK
