//***************************************************************************
// Copyright 2013-2015 Norwegian University of Science and Technology (NTNU)*
// Centre for Autonomous Marine Operations and Systems (AMOS)               *
// Department of Engineering Cybernetics (ITK)                              *
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
// Author: João Fortuna                                                     *
//***************************************************************************

// ISO C++ 98 headers.
#include <stdexcept>

// DUNE headers.
#include <DUNE/DUNE.hpp>

// Vendor headers.
#include <navio/MPU9250.h>

namespace Sensors
{
  namespace Navio
  {
    //! Device driver for the Navio+ MPU9250 IMU
    namespace IMU
    {
      using DUNE_NAMESPACES;

      //! %Task arguments.
      struct Arguments
      {
        //! Accelerometer scale
        int acc_scale;
        //! Gyroscope scale
        int gyr_scale;
      };

      struct Task: public DUNE::Tasks::Periodic
      {
        //! Angular velocity message.
        IMC::AngularVelocity m_gyro;
        //! Magnetic field message.
        IMC::MagneticField m_mag;
        //! Acceleration message.
        IMC::Acceleration m_accel;
        //! Temperature.
        IMC::Temperature m_temp;
        //! Read timestamp.
        double m_tstamp;
        //! Task arguments.
        Arguments m_args;
        //! Sensor object
        MPU9250 m_imu;

        Task(const std::string& name, Tasks::Context& ctx):
          DUNE::Tasks::Periodic(name, ctx),
          m_tstamp(0)
        {
          param("Acc Scale", m_args.acc_scale)
          .defaultValue("4")
          .values("2, 4, 8, 16")
          .visibility(Tasks::Parameter::VISIBILITY_USER)
          .description("Accelerometer Scale");

          param("Gyro Scale", m_args.gyr_scale)
          .defaultValue("2000")
          .values("250, 500, 1000, 2000")
          .visibility(Tasks::Parameter::VISIBILITY_USER)
          .description("Gyroscope Scale");

          // Register listeners.
          bind<IMC::DevCalibrationControl>(this);
        }

        //! Acquire resources.
        void
        onResourceAcquisition(void)
        {
          m_imu.initialize();
        }

        //! Initialize resources.
        void
        onResourceInitialization(void)
        {
          setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_IDLE);
        }

        void
        consume(const IMC::DevCalibrationControl* msg)
        {
          if (msg->getDestinationEntity() != getEntityId())
            return;

          if (getEntityState() == IMC::EntityState::ESTA_BOOT)
            return;

          setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_CALIBRATING);

          m_imu.calib_acc();
          m_imu.calib_mag();

          setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_CALIBRATED);
        }

        void
        task(void)
        {
          consumeMessages();

          float ax, ay, az, gx, gy, gz, mx, my, mz;

          m_imu.getMotion9(&ax, &ay, &az, &gx, &gy, &gz, &mx, &my, &mz);

          m_gyro.setTimeStamp();
          m_gyro.x = gx;
          m_gyro.y = gy;
          m_gyro.z = gz;
          dispatch(m_gyro, DF_KEEP_TIME);

          m_accel.setTimeStamp(m_gyro.getTimeStamp());
          m_accel.x = ax;
          m_accel.y = ay;
          m_accel.z = az;
          dispatch(m_accel, DF_KEEP_TIME);

          m_mag.setTimeStamp(m_gyro.getTimeStamp());
          m_mag.x = mx;
          m_mag.y = my;
          m_mag.z = mz;
          dispatch(m_mag, DF_KEEP_TIME);

          m_temp.setTimeStamp(m_gyro.getTimeStamp());
          m_temp.value = m_imu.temperature;
          dispatch(m_temp, DF_KEEP_TIME);

          setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_ACTIVE);
        }
      };
    }
  }
}
DUNE_TASK
