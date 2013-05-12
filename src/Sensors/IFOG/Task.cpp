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
      //! ESCC - Device.
      std::string escc_dev;
      //! Input timeout.
      float input_tout;
      //! IMU rotation matrix values.
      std::vector<double> rotation_mx;
      //! Trigger frequency.
      unsigned trigger_freq;
    };

    // Convenience function to throw the last system error.
    inline void
    throwLastError(const std::string& msg)
    {
      throw std::runtime_error(msg + System::Error::getLastMessage());
    }

    struct Task: public DUNE::Tasks::Task
    {
      //! ESCC descriptor.
      int m_fd;
      //! Rotation Matrix to correct IMU mounting position.
      Matrix m_rotation;
      //! Sensor data matrix.
      Matrix m_data;
      //! Euler Angles Delta.
      IMC::EulerAnglesDelta m_edelt;
      //! Velocity Delta.
      IMC::VelocityDelta m_vdelt;
      //! Input Watchdog.
      Counter<float> m_wdog;
      //! IMU timestamp.
      double m_imu_time;
      //! Task arguments.
      Arguments m_args;

      Task(const std::string& name, Tasks::Context& ctx):
        Tasks::Task(name, ctx),
        m_fd(-1),
        m_imu_time(0)
      {
        param("ESCC - Device", m_args.escc_dev)
        .defaultValue("")
        .description("HG1700 ESCC Device parameter");

        param("Input Timeout", m_args.input_tout)
        .units(Units::Second)
        .defaultValue("2")
        .description("Number of seconds for the watchdog");

        param("Trigger Frequency", m_args.trigger_freq)
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
        m_edelt.timestep = 0.01;
      }

      void
      onUpdateParameters(void)
      {
        m_rotation.fill(3, 3, &m_args.rotation_mx[0]);
      }

      ~Task(void)
      {
        onResourceRelease();
      }

      void
      onResourceAcquisition(void)
      {
        m_fd = open(m_args.escc_dev.c_str(), O_RDWR);
        if (m_fd == -1)
          throwLastError(DTR("failed to open ESCC device"));
      }

      void
      onResourceRelease(void)
      {
        if (m_fd != -1)
        {
          close(m_fd);
          m_fd = -1;
        }
      }

      void
      onResourceInitialization(void)
      {
        setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_IDLE);
        m_wdog.setTop(m_args.input_tout);
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

        double ang_inc[3] =
        {
          read24b(bfr + OFF_ANG_INC0) * c_ang_scale,
          read24b(bfr + OFF_ANG_INC1) * c_ang_scale,
          read24b(bfr + OFF_ANG_INC2) * c_ang_scale
        };

        double vel_inc[3] =
        {
          read24b(bfr + OFF_VEL_INC0) * c_vel_scale,
          read24b(bfr + OFF_VEL_INC1) * c_vel_scale,
          read24b(bfr + OFF_VEL_INC2) * c_vel_scale
        };

#if 0
        printf("%0.8f, %0.8f, %0.8f, %0.8f, %0.8f, %0.8f\n",
               ang_inc[0], ang_inc[1], ang_inc[2],
                vel_inc[0], vel_inc[1], vel_inc[2]);
#endif

        return true;
      }

      bool
      hasData(void)
      {
        fd_set rfd;
        FD_ZERO(&rfd);
        FD_SET(m_fd, &rfd);

        timeval tv = {1, 0};
        int rv = select(m_fd + 1, &rfd, 0, 0, &tv);

        return rv > 0;
      }

      void
      onMain(void)
      {
        uint8_t bfr[c_frame_size];

        while (!stopping())
        {
          // if (!m_active)
          // {
          //   waitForMessages(1.0);
          //   continue;
          // }

          consumeMessages();
          // if (!m_active)
          //   continue;

          if (hasData())
          {
            int rv = read(m_fd, bfr, sizeof(bfr));
            if (rv <= 0)
              continue;

            if (decodeFrame(bfr, rv))
            {
              setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_ACTIVE);
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
