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

// Local headers.
#include "Packets.hpp"

namespace Sensors
{
  namespace LIMU
  {
    using DUNE_NAMESPACES;

    //! Baud rate is constant.
    static const unsigned c_baud_rate = 115200;

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
      //! Output frequency.
      unsigned output_frq;
      //! Hard-iron correction factors.
      std::vector<double> hard_iron;
    };

    struct Task: public Tasks::Task
    {
      //! Task arguments.
      Arguments m_args;
      //! Angular velocity.
      IMC::AngularVelocity m_ang_vel;
      //! Acceleration.
      IMC::Acceleration m_accel;
      //! Delta angles.
      IMC::EulerAnglesDelta m_delt_ang;
      //! Delta velocity.
      IMC::VelocityDelta m_delt_vel;
      //! Euler Angles.
      IMC::EulerAngles m_euler;
      //! Magnetic Field.
      IMC::MagneticField m_magn;
      //! Temperature.
      IMC::Temperature m_temp;
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

        param("Output Frequency", m_args.output_frq)
        .units(Units::Hertz)
        .defaultValue("100")
        .description("Output frequency");

        param("Hard-Iron Calibration", m_args.hard_iron)
        .units(Units::Gauss)
        .size(3)
        .description("Hard-Iron calibration parameters");

        param("Output Frequency", m_args.output_frq)
        .units(Units::Hertz)
        .defaultValue("100")
        .description("Output frequency");
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
        debug("initializing");

        OutputConfig out_cfg;
        out_cfg.frequency = m_args.output_frq;

        if (m_uart->command(out_cfg))
          debug("frequency configured");
        else
          debug("failed");

        m_wdog.setTop(2.0);
      }

      void
      getHardIronCorrection(double factors[3])
      {
        UCTK::Frame cmd;
        int16_t tmp = 0;
        for (unsigned i = 0; i < sizeof(factors) / sizeof(double); ++i)
        {
          cmd.get(tmp, i * 2);
          factors[i] = tmp / 10e3;
        }
      }

      void
      setHardIronCorrection(const double factors[3])
      {
        UCTK::Frame cmd;
        for (unsigned i = 0; i < sizeof(factors) / sizeof(double); ++i)
          cmd.set<int16_t>(factors[i] * 10e3, i * 2);
      }

      void
      decodeOutputData(const UCTK::Frame& frame)
      {
        double tstamp = Clock::getSinceEpoch();
        float tmp = 0;
        const uint8_t* ptr = frame.getData();

        // Angular Velocity.
        ptr += ByteCopy::fromLE(tmp, ptr);
        m_ang_vel.x = tmp;
        ptr += ByteCopy::fromLE(tmp, ptr);
        m_ang_vel.y = tmp;
        ptr += ByteCopy::fromLE(tmp, ptr);
        m_ang_vel.z = tmp;
        m_ang_vel.setTimeStamp(tstamp);
        dispatch(m_ang_vel, DF_KEEP_TIME);

        // Acceleration.
        ptr += ByteCopy::fromLE(tmp, ptr);
        m_accel.x = tmp;
        ptr += ByteCopy::fromLE(tmp, ptr);
        m_accel.y = tmp;
        ptr += ByteCopy::fromLE(tmp, ptr);
        m_accel.z = tmp;
        m_accel.setTimeStamp(tstamp);
        dispatch(m_accel, DF_KEEP_TIME);

        // Delta Angles.
        ptr += ByteCopy::fromLE(tmp, ptr);
        m_delt_ang.x = tmp;
        ptr += ByteCopy::fromLE(tmp, ptr);
        m_delt_ang.y = tmp;
        ptr += ByteCopy::fromLE(tmp, ptr);
        m_delt_ang.z = tmp;
        m_delt_ang.setTimeStamp(tstamp);
        dispatch(m_delt_ang, DF_KEEP_TIME);

        // Delta Velocity.
        ptr += ByteCopy::fromLE(tmp, ptr);
        m_delt_vel.x = tmp;
        ptr += ByteCopy::fromLE(tmp, ptr);
        m_delt_vel.y = tmp;
        ptr += ByteCopy::fromLE(tmp, ptr);
        m_delt_vel.z = tmp;
        m_delt_vel.setTimeStamp(tstamp);
        dispatch(m_delt_vel, DF_KEEP_TIME);

        // Magnetic Field.
        ptr += ByteCopy::fromLE(tmp, ptr);
        m_magn.x = tmp;
        ptr += ByteCopy::fromLE(tmp, ptr);
        m_magn.y = tmp;
        ptr += ByteCopy::fromLE(tmp, ptr);
        m_magn.z = tmp;
        m_magn.setTimeStamp(tstamp);
        dispatch(m_magn, DF_KEEP_TIME);

        // Euler Angles.
        ptr += ByteCopy::fromLE(tmp, ptr);
        m_euler.phi = tmp;
        ptr += ByteCopy::fromLE(tmp, ptr);
        m_euler.theta = tmp;
        ptr += ByteCopy::fromLE(tmp, ptr);
        m_euler.psi_magnetic = tmp;
        m_euler.psi = tmp;
        m_euler.setTimeStamp(tstamp);
        dispatch(m_euler, DF_KEEP_TIME);

        // Temperature.
        ptr += ByteCopy::fromLE(tmp, ptr);
        m_temp.value = tmp;
        m_temp.setTimeStamp(tstamp);
        dispatch(m_temp, DF_KEEP_TIME);

        // Error flags.
        uint8_t error = *ptr;

        spew("%u | % 0.8f | % 0.8f | % 0.8f | % 0.8f | % 0.8f | % 0.8f | MAG: % 0.8f | % 0.8f | % 0.8f",
             error,
             m_accel.x,
             m_accel.y,
             m_accel.z,
             Angles::degrees(m_euler.phi),
             Angles::degrees(m_euler.theta),
             Angles::degrees(m_euler.psi),
             m_magn.x,
             m_magn.y,
             m_magn.z
             );

        m_wdog.reset();
      }

      void
      decode(const UCTK::Frame& frame)
      {
        if (frame.getId() == 1)
          decodeOutputData(frame);
      }

      void
      onMain(void)
      {
        uint8_t bfr[128];
        UCTK::Parser parser;
        UCTK::Frame frame;

        while (!stopping())
        {
          consumeMessages();

          if (m_wdog.overflow())
          {
            setEntityState(IMC::EntityState::ESTA_ERROR, Status::CODE_COM_ERROR);
            throw RestartNeeded("input timeout", 1);
          }

          if (!m_uart->poll(1.0))
            continue;

          unsigned rv = m_uart->read(bfr, sizeof(bfr));
          for (unsigned i = 0; i < rv; ++i)
          {
            if (parser.parse(bfr[i], frame))
            {
              decode(frame);
            }
          }
        }
      }
    };
  }
}

DUNE_TASK
