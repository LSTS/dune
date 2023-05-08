//***************************************************************************
// Copyright 2007-2023 Universidade do Porto - Faculdade de Engenharia      *
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
// Author: Bernardo Gabriel                                                 *
//***************************************************************************

// DUNE headers.
#include <DUNE/DUNE.hpp>

namespace MiniASV
{
  //! Insert short task description here.
  //!
  //! Insert explanation on task behaviour here.
  //! @author Bernardo Gabriel
  namespace Tag
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
      //! Number of attempts before error
      int number_attempts;
    };

    struct Task : public DUNE::Tasks::Task
    {
      //! Serial port handle
      SerialPort *m_uart;
      //! I/O Multiplexer
      Poll m_poll;
      //! Task arguments
      Arguments m_args;
      //! Timer
      Counter<double> m_wdog;
      //! IMC msg
      IMC::DeviceState m_position;
      //! Read timestamp.
      double m_tstamp;
      //! Distances
      float m_distance1 = 0;
      float m_distance2 = 0;
      //! Position
      float m_x;
      float m_y;

      char bfr[128];

      //! Constructor.
      //! @param[in] name task name.
      //! @param[in] ctx context.
      Task(const std::string &name, Tasks::Context &ctx) : DUNE::Tasks::Task(name, ctx)
      {
        param("Serial Port - Device", m_args.uart_dev)
            .defaultValue("")
            .description("Serial port device");

        param("Serial Port - Baud Rate", m_args.uart_baud)
            .defaultValue("")
            .description("Serial port baud rate");

        param("Input Timeout", m_args.input_timeout)
            .defaultValue("3.0")
            .minimumValue("2.0")
            .maximumValue("4.0")
            .units(Units::Second)
            .description("Amount of seconds to wait for data before reporting an error");
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
        setEntityState(IMC::EntityState::ESTA_BOOT, Status::CODE_INIT);
        try
        {
          m_uart = new SerialPort(m_args.uart_dev, m_args.uart_baud);
          m_uart->setCanonicalInput(true);
          m_uart->flush();
          m_poll.add(*m_uart);
        }
        catch (const std::runtime_error &e)
        {
          throw RestartNeeded(e.what(), 10);
        }
      }

      //! Initialize resources.
      void
      onResourceInitialization(void)
      {
        m_uart->flush();
        Delay::wait(1.0f);
        m_wdog.setTop(m_args.input_timeout);
        m_wdog.reset();
      }

      //! Release resources.
      void
      onResourceRelease(void)
      {
        /* if (m_uart != nullptr)
          {
            m_poll.remove(*m_uart);
            Memory::clear(m_uart);
          } */
      }

      void dispatchData()
      {
        m_tstamp = Clock::getSinceEpoch();
        m_position.setTimeStamp(m_tstamp);
        m_position.x = m_x;
        m_position.y = m_y;
        m_position.z = 0;
        dispatch(m_position, DF_KEEP_TIME);
      }

      bool
      haveNewData()
      {
        std::size_t rv = m_uart->readString(bfr, sizeof(bfr));

        if (rv == 0)
        {
          err(DTR("I/O error"));
          return false;
        }

        bfr[strlen(bfr) - 3] = '\0';

        char *param = std::strtok(bfr, ",");

        if (!strcmp(param, "$DIST"))
        {
          param = std::strtok(NULL, ",");
          m_distance1 = atof(param);
          param = std::strtok(NULL, ",");
          m_distance2 = atof(param);

          m_x = (pow(m_distance1, 2) + pow(1, 2) - pow(m_distance2, 2)) / 2;
          m_y = sqrt(pow(m_distance1, 2) - pow(m_x, 2));

          inf("Estimated Vehicle Position: (%.3f, %.3f)", m_x, m_y);
        }

        bfr[0] = '\0';

        m_uart->flush();

        return true;
      }

      //! Main loop.
      void
      onMain(void)
      {
        while (!stopping())
        {
          waitForMessages(0.1);

          if (haveNewData())
            dispatchData();
        }
      }
    };
  }
}

DUNE_TASK
