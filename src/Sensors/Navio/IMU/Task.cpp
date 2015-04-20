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
  //! Device driver for the OceanServer OS4000/5000 Digital Compass.
  namespace Navio
  {
    namespace IMU
    {
      using DUNE_NAMESPACES;

      //! %Task arguments.
      struct Arguments
      {
        double data_tout;
        int data_rate;
      };


      struct Task: public DUNE::Tasks::Periodic
      {
        //! Internal read buffer.
        static const unsigned c_bfr_size = 128;
        //! Euler angles message.
        IMC::EulerAngles m_euler;
        //! Magnetic field message.
        IMC::MagneticField m_mag;
        //! Acceleration message.
        IMC::Acceleration m_accel;
        //! Temperature.
        IMC::Temperature m_temp;
        //! Internal read buffer.
        char m_bfr[c_bfr_size];
        //! Read timestamp.
        double m_tstamp;
        //! Task arguments.
        Arguments m_args;
        //! Watchdog.
        Counter<double> m_wdog;
        //! Sensor object
        MPU9250 m_imu;

        Task(const std::string& name, Tasks::Context& ctx):
          DUNE::Tasks::Periodic(name, ctx),
          m_tstamp(0)
        {
          param("Data Timeout", m_args.data_tout)
          .defaultValue("0.5")
          .minimumValue("0.2")
          .units(Units::Second)
          .description("Number of seconds without data before reporting an error");

          param("Data Rate", m_args.data_rate)
          .defaultValue("40")
          .minimumValue("-50")
          .maximumValue("40")
          .description("Sensor data rate");

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
          m_wdog.reset();
        }

        //! Update %Task parameters.
        void
        onUpdateParameters(void)
        {
          if (paramChanged(m_args.data_tout))
            m_wdog.setTop(m_args.data_tout);
        }

        void
        consume(const IMC::DevCalibrationControl* msg)
        {
          if (msg->getDestinationEntity() != getEntityId())
            return;

          if (getEntityState() == IMC::EntityState::ESTA_BOOT)
            return;
        }

        void
        task(void)
        {
          consumeMessages();

          float ax, ay, az, gx, gy, gz, mx, my, mz;

          m_imu.getMotion9(&ax, &ay, &az, &gx, &gy, &gz, &mx, &my, &mz);

          if (m_wdog.overflow())
            setEntityState(IMC::EntityState::ESTA_ERROR, Status::CODE_COM_ERROR);


          // Convert degree to radian.
          m_euler.setTimeStamp();
          m_euler.psi_magnetic = Angles::radians(m_euler.psi_magnetic);
          m_euler.psi = m_euler.psi_magnetic;
          m_euler.phi = Angles::radians(m_euler.phi);
          m_euler.theta = Angles::radians(m_euler.theta);
          dispatch(m_euler, DF_KEEP_TIME);

          // Convert G to m/s/s.
          m_accel.setTimeStamp(m_euler.getTimeStamp());
          m_accel.x = ax;
          m_accel.y = ay * -1.0;
          m_accel.z = az * -1.0;
          dispatch(m_accel, DF_KEEP_TIME);

          m_mag.setTimeStamp(m_euler.getTimeStamp());
          m_mag.x = mx;
          m_mag.y = my;
          m_mag.z = mz;
          dispatch(m_mag, DF_KEEP_TIME);

          m_temp.setTimeStamp(m_euler.getTimeStamp());
          m_temp.value = m_imu.temperature;
          dispatch(m_temp, DF_KEEP_TIME);

          setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_ACTIVE);
          m_wdog.reset();
        }
      };
    }
  }
}
DUNE_TASK
