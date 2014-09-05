//***************************************************************************
// Copyright 2007-2014 Universidade do Porto - Faculdade de Engenharia      *
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
// https://www.lsts.pt/dune/licence.                                        *
//***************************************************************************
// Author: Tiago Rodrigues                                                  *
//***************************************************************************

// DUNE headers.
#include <DUNE/DUNE.hpp>

using DUNE_NAMESPACES;

namespace Sensors
{
  namespace MetrecX
  {
    // using DUNE_NAMESPACES;

     struct Arguments
     {
      //! Serial port device.
      std::string uart_dev;
      //! Serial port baud rate.
      unsigned uart_baud;
      //! Input timeout.
      double input_timeout;
      };

    struct Task: public DUNE::Tasks::Task
    {
      //! Serial port handle.
      SerialPort* m_uart;
      //! Task arguments
      Arguments m_args;
      //! Watchdog.
      Counter<double> m_wdog;


      //! Constructor.
      //! @param[in] name task name.
      //! @param[in] ctx context.
      Task(const std::string& name, Tasks::Context& ctx):
        DUNE::Tasks::Task(name, ctx),
        m_uart(NULL)
      {
        m_args.uart_dev = "/dev/ttyUSB0";
        m_args.uart_baud = 2400;
        m_args.input_timeout = 3;
      }

      //! Update internal state with new parameter values.
      void
      onUpdateParameters(void)
      {
      }

      //! Reserve entity identifiers.
      void
      onEntityReservation(void)
      {
      }

      //! Resolve entity names.
      void
      onEntityResolution(void)
      {
      }

      //! Acquire resources.
      void
      onResourceAcquisition(void)
      {
        m_uart = new SerialPort(m_args.uart_dev, m_args.uart_baud);
        m_uart->setCanonicalInput(true);
        m_uart->flush();
      }

      //! Initialize resources.
      void
      onResourceInitialization(void)
      {
      }

      //! Release resources.
      void
      onResourceRelease(void)
      {
        Memory::clear(m_uart);
      }

      //! Main loop.
      void
      onMain(void)
      {
        char bfr[255];
        size_t rv;

        m_uart->writeString("CR");

        while (!stopping())
        {

          if (!Poll::poll(*m_uart, 1.0))
          {
            m_uart->writeString("DISPLAY OPTIONS\r\n");
            continue;
          }

          rv = m_uart->readString(bfr,sizeof(bfr));
          printf("Message recieved - %s ",bfr);

       }
      }
    };
  }
}

DUNE_TASK
