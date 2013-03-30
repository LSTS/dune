//***************************************************************************
// Copyright 2007-2013 Universidade do Porto - Faculdade de Engenharia      *
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
// Author: Ricardo Martins                                                  *
//***************************************************************************

// DUNE headers.
#include <DUNE/DUNE.hpp>

namespace Sensors
{
  namespace LIMU
  {
    using DUNE_NAMESPACES;

    //! Baud rate is constant.
    static const unsigned c_baud_rate = 115200;

    //! Sample.
    struct Sample
    {
      //! Acceleration.
      float accel[3];
      //! Delta Angles.
      float deltang[3];
      //! Delta Velocity.
      float deltvel[3];
      //! Euler Angles.
      float magne[3];
      //! Temperature.
      float temp;
      //! Flags.
      uint16_t flags;
    };

    //! Calibration parameters.
    struct Calibration
    {
      //! Hard-Iron calibration parameters.
      int16_t hiron[3];
      //! Soft-Iron calibration parameters.
      int16_t siron[9];
    };

    //! %Task arguments.
    struct Arguments
    {
      //! Serial port device.
      std::string uart_dev;
      //! Sampling frequency.
      unsigned sample_frq;
    };

    struct Task: public Tasks::Task
    {
      //! Task arguments.
      Arguments m_args;
      //! Serial port device.
      UCTK::InterfaceUART* m_uart;
      //! Watchdog.
      Counter<double> m_wdog;

      Task(const std::string& name, Tasks::Context& ctx):
        Tasks::Task(name, ctx),
        m_uart(NULL)
      {
        // Define configuration parameters.
        param("Serial Port - Device", m_args.uart_dev)
        .defaultValue("")
        .description("Serial port device used to communicate with the sensor");

        param("Sampling Frequency", m_args.sample_frq)
        .units(Units::Hertz)
        .defaultValue("100")
        .description("Sampling frequency");
      }

      ~Task(void)
      {
        Task::onResourceRelease();
      }

      void
      onResourceRelease(void)
      {
        Memory::clear(m_uart);
      }

      void
      onResourceAcquisition(void)
      {
        try
        {
          m_uart = new UCTK::InterfaceUART(m_args.uart_dev, c_baud_rate);
        }
        catch (std::runtime_error& e)
        {
          throw RestartNeeded(e.what(), 30);
        }
      }

      void
      onResourceInitialization(void)
      {
        m_wdog.setTop(5.0);
      }

      void
      onMain(void)
      {
        while (!stopping())
        {
          waitForMessages(0.1);

          if (m_wdog.overflow())
            setEntityState(IMC::EntityState::ESTA_ERROR, Status::CODE_COM_ERROR);
        }
      }
    };
  }
}

DUNE_TASK
