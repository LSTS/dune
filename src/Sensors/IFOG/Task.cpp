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
#include <stdexcept>
#include <cerrno>

// DUNE headers.
#include <DUNE/DUNE.hpp>

// Linux headers.
#include <sys/select.h>

// SAB 82532 Receive Status Register: Valid Frame.
#define SAB82532_RSTA_VFR    (1 << 7)
// SAB 82532 Receive Status Register: CRC Check OK.
#define SAB82532_RSTA_CRC    (1 << 5)

namespace Sensors
{
  namespace IFOG
  {
    using DUNE_NAMESPACES;

    //! PSU Packet Identifiers.
    enum PacketIds
    {
      //! State.
      PKT_ID_STATE  = 1,
      //! Power.
      PKT_ID_PWR    = 2,
      //! Trigger.
      PKT_ID_TRG    = 3
    };

    //! Data Frame Offsets.
    enum FrameOffsets
    {
      //! HDLC Address.
      OFF_ADDR = 0,
      //! HDLC Control Field.
      OFF_CNTR = 1,
      //! Angular Increment 0.
      OFF_ANG_INC0 = 2,
      //! Angular Increment 1.
      OFF_ANG_INC1 = 5,
      //! Angular Increment 2.
      OFF_ANG_INC2 = 8,
      //! Velocity Increment 0.
      OFF_VEL_INC0 = 11,
      //! Velocity Increment 1.
      OFF_VEL_INC1 = 14,
      //! Velocity Increment 2.
      OFF_VEL_INC2 = 17,
      //! Failure status.
      OFF_STA_FAIL = 20,
      //! IMU Status.
      OFF_STA_IMU = 22
    };

    //! PSU UART baud rate.
    static const unsigned c_baud_rate = 115200;
    //! IMU address.
    static const uint8_t c_imu_addr = 0x01;
    //! Data Frame Size.
    static const unsigned c_frame_size = 25;
    //! Angles scaling.
    static const double c_ang_scale = 0.1 / 206264.806247;
    //! Velocity scaling.
    static const double c_vel_scale = 0.05 / 32768.0;

    //! Task arguments.
    struct Arguments
    {
      //! ESCC - IMU.
      std::string imu_dev;
      //! ESCC - PSU.
      std::string psu_dev;
      //! Input timeout.
      float input_tout;
      //! IMU rotation matrix values.
      std::vector<double> rotation_mx;
      //! Trigger frequency.
      unsigned trigger_frq;
    };

    struct Task: public DUNE::Tasks::Task
    {
      //! Rotation Matrix to correct IMU mounting position.
      Matrix m_rotation;
      //! Sensor data matrix.
      Matrix m_data;
      //! Euler Angles Delta.
      IMC::EulerAnglesDelta m_edelta;
      //! Velocity Delta.
      IMC::VelocityDelta m_vdelta;
      //! Input Watchdog.
      Counter<float> m_wdog;
      //! IMU timestamp.
      double m_imu_time;
      //! IMU handle.
      Hardware::ESCC* m_imu_escc;
      //! PSU UART.
      Hardware::ESCC* m_psu_escc;
      //! PSU handle.
      UCTK::Interface* m_psu_ctl;
      //! Failure Status Word.
      uint16_t m_sta_fail;
      //! IMU Status Word.
      uint16_t m_sta_imu;
      //! Task arguments.
      Arguments m_args;

      Task(const std::string& name, Tasks::Context& ctx):
        Tasks::Task(name, ctx),
        m_imu_time(0),
        m_imu_escc(NULL),
        m_psu_escc(NULL),
        m_psu_ctl(NULL),
        m_sta_fail(0),
        m_sta_imu(0)
      {
        paramActive(Tasks::Parameter::SCOPE_IDLE,
                    Tasks::Parameter::VISIBILITY_USER);

        param("ESCC - IMU Device", m_args.imu_dev)
        .defaultValue("")
        .description("ESCC device where IMU is connected");

        param("ESCC - PSU Device", m_args.psu_dev)
        .defaultValue("")
        .description("ESCC device where PSU is connected");

        param("Input Timeout", m_args.input_tout)
        .units(Units::Second)
        .defaultValue("2")
        .minimumValue("1")
        .description("Number of seconds for the watchdog");

        param("Trigger Frequency", m_args.trigger_frq)
        .units(Units::Hertz)
        .minimumValue("100")
        .maximumValue("400")
        .defaultValue("100")
        .description("Trigger frequency");

        param("IMU Rotation Matrix", m_args.rotation_mx)
        .defaultValue("")
        .size(9)
        .description("IMU rotation matrix which is dependent of the mounting position");

        // Resize sensor data matrix.
        m_data.resize(3, 1);
      }

      void
      onUpdateParameters(void)
      {
        m_rotation.fill(3, 3, &m_args.rotation_mx[0]);
        m_edelta.timestep = 1.0 / m_args.trigger_frq;
      }

      ~Task(void)
      {
        onResourceRelease();
      }

      void
      onResourceAcquisition(void)
      {
        try
        {
          // Open PSU.
          m_psu_escc = new Hardware::ESCC(m_args.psu_dev);
          m_psu_ctl = new UCTK::Interface(m_psu_escc);
          UCTK::FirmwareInfo info = m_psu_ctl->getFirmwareInfo();
          if (info.isDevelopment())
            war(DTR("device is using unstable firmware"));
          else
            inf(DTR("firmware version %u.%u.%u"), info.major,
                info.minor, info.patch);

          // Open IMU.
          m_imu_escc = new Hardware::ESCC(m_args.imu_dev);
        }
        catch (std::runtime_error& e)
        {
          throw RestartNeeded(e.what(), 30);
        }
      }

      void
      onResourceRelease(void)
      {
        if (m_psu_ctl != NULL)
        {
          setPower(false);
          delete m_psu_ctl;
          m_psu_ctl = NULL;
        }

        Memory::clear(m_psu_escc);
        Memory::clear(m_imu_escc);
      }

      void
      onResourceInitialization(void)
      {
        if (!setTriggerFrequency(m_args.trigger_frq))
          throw RestartNeeded(DTR("failed to configure trigger frequency"), 5);

        setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_IDLE);
        m_wdog.setTop(m_args.input_tout);
      }

      void
      onActivation(void)
      {
        if (!setPower(true))
          throw RestartNeeded(DTR("failed to turn on device"), 5);
      }

      void
      onDeactivation(void)
      {
        setPower(false);
        setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_IDLE);
      }

      bool
      setTriggerFrequency(uint16_t frequency)
      {
        UCTK::Frame frame;
        frame.setId(PKT_ID_TRG);
        frame.setPayloadSize(2);
        frame.set(frequency, 0);
        return m_psu_ctl->sendFrame(frame);
      }

      bool
      setPower(bool on)
      {
        uint8_t value = on ? 1 : 0;
        UCTK::Frame frame;
        frame.setId(PKT_ID_PWR);
        frame.setPayloadSize(1);
        frame.set(value, 0);
        return m_psu_ctl->sendFrame(frame, 2.0);
      }

      int32_t
      read24b(const uint8_t* data)
      {
        uint32_t value = (data[2] << 16) | (data[1] << 8) | data[0];
        if (data[2] & 0x80)
          value |= 0xff000000;
        return value;
      }

      bool
      decodeFrame(const uint8_t* bfr, unsigned bfr_len)
      {
        if (bfr_len != c_frame_size)
          return false;

        if (!(bfr[bfr_len - 1] & SAB82532_RSTA_VFR))
          return false;

        if (bfr[0] != c_imu_addr)
          return false;

        double tstamp = Clock::getSinceEpoch();

        // Angles Increment.
        m_edelta.setTimeStamp(tstamp);
        m_edelta.time += m_edelta.timestep;
        m_edelta.x = read24b(bfr + OFF_ANG_INC0) * c_ang_scale;
        m_edelta.y = read24b(bfr + OFF_ANG_INC1) * c_ang_scale;
        m_edelta.z = read24b(bfr + OFF_ANG_INC2) * c_ang_scale;
        dispatch(m_edelta, DF_KEEP_TIME);

        // Velocity Increment.
        m_vdelta.setTimeStamp(tstamp);
        m_vdelta.time += m_edelta.timestep;
        m_vdelta.x = read24b(bfr + OFF_VEL_INC0) * c_vel_scale;
        m_vdelta.y = read24b(bfr + OFF_VEL_INC1) * c_vel_scale;
        m_vdelta.z = read24b(bfr + OFF_VEL_INC2) * c_vel_scale;
        dispatch(m_vdelta, DF_KEEP_TIME);

        // Status words.
        m_sta_fail = bfr[OFF_STA_FAIL + 1] << 8 | bfr[OFF_STA_FAIL];
        m_sta_imu = bfr[OFF_STA_IMU + 1] << 8 | bfr[OFF_STA_IMU];

        return true;
      }

      void
      onMain(void)
      {
        uint8_t bfr[c_frame_size];

        while (!stopping())
        {
          if (!isActive())
          {
            waitForMessages(1.0);
            continue;
          }

          consumeMessages();
          if (!isActive())
            continue;

          if (Poll::poll(*m_imu_escc, 1.0))
          {
            size_t rv = m_imu_escc->read(bfr, sizeof(bfr));
            if (rv == 0)
              continue;

            if (decodeFrame(bfr, rv))
            {
              if (m_sta_fail != 0)
              {
                std::string msg = String::str(DTR("IMU failure: %04X"), m_sta_fail);
                setEntityState(IMC::EntityState::ESTA_NORMAL, msg);
              }
              else if (m_sta_imu != 0)
              {
                std::string msg = String::str(DTR("data might be unreliable: %04X"), m_sta_imu);
                setEntityState(IMC::EntityState::ESTA_NORMAL, msg);
              }
              else
              {
                setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_ACTIVE);
              }

              m_wdog.reset();
            }
          }

          if (m_wdog.overflow())
          {
            setEntityState(IMC::EntityState::ESTA_ERROR, Status::CODE_COM_ERROR);
            m_wdog.reset();
          }
        }
      }
    };
  }
}

DUNE_TASK
