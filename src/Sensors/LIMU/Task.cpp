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
    //! Number of hard-iron correction factors.
    static const unsigned c_hard_iron_count = 3;

    //! Packet identifiers.
    enum PacketIds
    {
      //! Sample data.
      PKT_ID_OUTPUT_DATA  = 1,
      //! Continuous output configuration.
      PKT_ID_OUTPUT_CONF  = 2,
      //! Run self-test.
      PKT_ID_SELF_TEST    = 3,
      //! Hard-iron calibration parameters.
      PKT_ID_HARD_IRON    = 4,
      //! Raw sample data.
      PKT_ID_OUTPUT_RAW   = 5
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
      //! Scratch frame.
      UCTK::Frame m_frame;

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
        .size(c_hard_iron_count)
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
        if (!setOutputFrequency(m_args.output_frq))
          throw RestartNeeded("failed to configure output frequency", 5);

        if (!setHardIronCorrection(m_args.hard_iron))
          throw RestartNeeded("failed to set hard-iron correction factors", 5);

        m_wdog.setTop(2.0);
      }

      bool
      setOutputFrequency(uint8_t frequency)
      {
        m_frame.setId(PKT_ID_OUTPUT_CONF);
        m_frame.setPayloadSize(1);
        m_frame.set(frequency, 0);
        return m_uart->sendFrame(m_frame);
      }

      std::vector<double>
      getHardIronCorrection(void)
      {
        std::vector<double> factors;

        m_frame.setId(PKT_ID_HARD_IRON);
        m_frame.setPayloadSize(0);
        if (m_uart->sendFrame(m_frame))
        {
          int16_t tmp = 0;
          for (unsigned i = 0; i < c_hard_iron_count; ++i)
          {
            m_frame.get(tmp, i * 2);
            factors.push_back(tmp / 10e3);
          }
        }

        return factors;
      }

      bool
      setHardIronCorrection(const std::vector<double>& factors)
      {
        m_frame.setId(PKT_ID_HARD_IRON);
        m_frame.setPayloadSize(6);
        for (unsigned i = 0; i < c_hard_iron_count; ++i)
          m_frame.set<int16_t>(factors[i] * 10e3, i * 2);
        return m_uart->sendFrame(m_frame);
      }

      void
      decodeOutputRaw(const UCTK::Frame& frame)
      {
        uint16_t tmp_u16 = 0;
        int16_t tmp_s16 = 0;
        const uint8_t* ptr = frame.getPayload();

        // sys_e_flag (12).
        ptr += ByteCopy::fromLE(tmp_u16, ptr);
        printf(", %04x", tmp_u16);

        // gyro_x.
        ptr += ByteCopy::fromLE(tmp_s16, ptr);
        printf(", %d", tmp_s16);

        // gyro_y.
        ptr += ByteCopy::fromLE(tmp_s16, ptr);
        printf(", %d", tmp_s16);

        // gyro_z.
        ptr += ByteCopy::fromLE(tmp_s16, ptr);
        printf(", %d", tmp_s16);

        // accl_x.
        ptr += ByteCopy::fromLE(tmp_s16, ptr);
        printf(", %d", tmp_s16);

        // accl_y.
        ptr += ByteCopy::fromLE(tmp_s16, ptr);
        printf(", %d", tmp_s16);

        // accl_z.
        ptr += ByteCopy::fromLE(tmp_s16, ptr);
        printf(", %d", tmp_s16);

        // deltang_x.
        ptr += ByteCopy::fromLE(tmp_s16, ptr);
        printf(", %d", tmp_s16);

        // deltang_y.
        ptr += ByteCopy::fromLE(tmp_s16, ptr);
        printf(", %d", tmp_s16);

        // deltang_z.
        ptr += ByteCopy::fromLE(tmp_s16, ptr);
        printf(", %d", tmp_s16);

        // deltvel_x.
        ptr += ByteCopy::fromLE(tmp_s16, ptr);
        printf(", %d", tmp_s16);

        // deltvel_y.
        ptr += ByteCopy::fromLE(tmp_s16, ptr);
        printf(", %d", tmp_s16);

        // deltvel_z.
        ptr += ByteCopy::fromLE(tmp_s16, ptr);
        printf(", %d", tmp_s16);

        // magn_x.
        ptr += ByteCopy::fromLE(tmp_s16, ptr);
        printf(", %d", tmp_s16);

        // magn_y.
        ptr += ByteCopy::fromLE(tmp_s16, ptr);
        printf(", %d", tmp_s16);

        // magn_z.
        ptr += ByteCopy::fromLE(tmp_s16, ptr);
        printf(", %d", tmp_s16);

        // temp.
        ptr += ByteCopy::fromLE(tmp_s16, ptr);
        printf(", %d", tmp_s16);

        printf("\n");
      }

      void
      decodeOutputData(const UCTK::Frame& frame)
      {
        double imc_tstamp = Clock::getSinceEpoch();
        float tmp = 0;
        const uint8_t* ptr = frame.getPayload();

        // Timestamp.
        uint16_t tmp_u16 = 0;
        ptr += ByteCopy::fromLE(tmp_u16, ptr);
        double dev_tstamp = tmp_u16 / 1024.0;

        // Angular Velocity.
        ptr += ByteCopy::fromLE(tmp, ptr);
        m_ang_vel.x = tmp;
        ptr += ByteCopy::fromLE(tmp, ptr);
        m_ang_vel.y = tmp;
        ptr += ByteCopy::fromLE(tmp, ptr);
        m_ang_vel.z = tmp;
        m_ang_vel.time = dev_tstamp;
        m_ang_vel.setTimeStamp(imc_tstamp);
        dispatch(m_ang_vel, DF_KEEP_TIME);

        // Acceleration.
        ptr += ByteCopy::fromLE(tmp, ptr);
        m_accel.x = tmp;
        ptr += ByteCopy::fromLE(tmp, ptr);
        m_accel.y = tmp;
        ptr += ByteCopy::fromLE(tmp, ptr);
        m_accel.z = tmp;
        m_accel.time = dev_tstamp;
        m_accel.setTimeStamp(imc_tstamp);
        dispatch(m_accel, DF_KEEP_TIME);

        // Delta Angles.
        ptr += ByteCopy::fromLE(tmp, ptr);
        m_delt_ang.x = tmp;
        ptr += ByteCopy::fromLE(tmp, ptr);
        m_delt_ang.y = tmp;
        ptr += ByteCopy::fromLE(tmp, ptr);
        m_delt_ang.z = tmp;
        m_delt_ang.time = dev_tstamp;
        m_delt_ang.setTimeStamp(imc_tstamp);
        dispatch(m_delt_ang, DF_KEEP_TIME);

        // Delta Velocity.
        ptr += ByteCopy::fromLE(tmp, ptr);
        m_delt_vel.x = tmp;
        ptr += ByteCopy::fromLE(tmp, ptr);
        m_delt_vel.y = tmp;
        ptr += ByteCopy::fromLE(tmp, ptr);
        m_delt_vel.z = tmp;
        m_delt_vel.time = dev_tstamp;
        m_delt_vel.setTimeStamp(imc_tstamp);
        dispatch(m_delt_vel, DF_KEEP_TIME);

        // Magnetic Field.
        ptr += ByteCopy::fromLE(tmp, ptr);
        m_magn.x = tmp;
        ptr += ByteCopy::fromLE(tmp, ptr);
        m_magn.y = tmp;
        ptr += ByteCopy::fromLE(tmp, ptr);
        m_magn.z = tmp;
        m_magn.time = dev_tstamp;
        m_magn.setTimeStamp(imc_tstamp);
        dispatch(m_magn, DF_KEEP_TIME);

        // Euler Angles.
        ptr += ByteCopy::fromLE(tmp, ptr);
        m_euler.phi = tmp;
        ptr += ByteCopy::fromLE(tmp, ptr);
        m_euler.theta = tmp;
        ptr += ByteCopy::fromLE(tmp, ptr);
        m_euler.psi_magnetic = tmp;
        m_euler.psi = tmp;
        m_euler.time = dev_tstamp;
        m_euler.setTimeStamp(imc_tstamp);
        dispatch(m_euler, DF_KEEP_TIME);

        // Temperature.
        ptr += ByteCopy::fromLE(tmp, ptr);
        m_temp.value = tmp;
        m_temp.setTimeStamp(imc_tstamp);
        dispatch(m_temp, DF_KEEP_TIME);

        // Error flags.
        uint8_t error = *ptr;

#if 1
        printf("%0.8f, %u, % 0.8f, % 0.8f, % 0.8f, % 0.8f, % 0.8f, % 0.8f, % 0.8f, % 0.8f, % 0.8f",
               dev_tstamp,
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
        printf("\n");
#endif

        m_wdog.reset();
      }

      void
      decode(const UCTK::Frame& frame)
      {
        if (frame.getId() == PKT_ID_OUTPUT_DATA)
          decodeOutputData(frame);
        else if (frame.getId() == PKT_ID_OUTPUT_RAW)
          decodeOutputRaw(frame);
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
