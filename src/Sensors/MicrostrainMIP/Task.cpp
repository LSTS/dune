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

// DUNE headers.
#include <DUNE/DUNE.hpp>

// Local headers.
#include "Driver.hpp"

namespace Sensors
{
  //! Device driver for the Microstrain MIP Capable Devices.
  //!
  //! This task configures and extracts acceleration, angular rates,
  //! magnetic field and euler angles information from the IMU/AHRS.
  //!
  //! This task allows for Hard-Iron calibration when resources are
  //! initialized.
  //!
  //! @author Ricardo Martins
  namespace MicrostrainMIP
  {
    using DUNE_NAMESPACES;

    //! Hard Iron calibration parameter name.
    static const std::string c_hard_iron_param = "Hard-Iron Calibration";

    //! %Task arguments.
    struct Arguments
    {
      //! UART device.
      std::string uart_dev;
      //! UART baud rate.
      unsigned uart_baud;
      //! Number of seconds without data before reporting an error.
      double timeout_error;
      //! Number of seconds without data before reporting a failure and
      //! restarting.
      double timeout_failure;
      //! Calibration threshold.
      double calib_threshold;
      //! Sampling frequency.
      unsigned sample_freq;
      //! Hard iron calibration.
      std::vector<float> hard_iron;
      // Rotation matrix values.
      std::vector<double> rotation_mx;
    };

    //! %MicrostrainMIP software driver.
    struct Task: public DUNE::Tasks::Task
    {
      //! Driver.
      Driver* m_driver;
      //! Rotated hard-iron calibration parameters.
      float m_hard_iron_rotated[c_axes_count];
      //! Rotation Matrix to correct mounting position.
      Math::Matrix m_rotation;
      //! Data input watchdog.
      Counter<double> m_wdog;
      //! Entity state timer.
      Counter<double> m_state_timer;
      //! True if hard-iron calibration is pending.
      bool m_hard_iron_pending;
      //! Task arguments.
      Arguments m_args;

      Task(const std::string& name, Tasks::Context& ctx):
        DUNE::Tasks::Task(name, ctx),
        m_driver(NULL),
        m_rotation(3, 3),
        m_state_timer(1.0),
        m_hard_iron_pending(false)
      {
        param("Serial Port - Device", m_args.uart_dev)
        .defaultValue("")
        .description("Serial port device used to communicate with the sensor");

        param("Serial Port - Baud Rate", m_args.uart_baud)
        .defaultValue("115200")
        .description("Serial port baud rate");

        param("Sampling Frequency", m_args.sample_freq)
        .defaultValue("50")
        .units(Units::Hertz)
        .description("Sampling frequency");

        param("Timeout - Error", m_args.timeout_error)
        .defaultValue("2.0")
        .minimumValue("1.0")
        .units(Units::Second)
        .description("Number of seconds without data before reporting an error");

        param("Timeout - Failure", m_args.timeout_failure)
        .defaultValue("4.0")
        .minimumValue("1.0")
        .units(Units::Second)
        .description("Number of seconds without data before restarting task");

        param("Calibration Threshold", m_args.calib_threshold)
        .defaultValue("0.1")
        .units(Units::Gauss)
        .minimumValue("0.0")
        .description("Minimum magnetic field calibration values to reset hard iron parameters");

        param(c_hard_iron_param, m_args.hard_iron)
        .units(Units::Gauss)
        .size(c_axes_count)
        .description("Hard-Iron calibration parameters");

        param("IMU Rotation Matrix", m_args.rotation_mx)
        .defaultValue("")
        .size(9)
        .description("IMU rotation matrix which is dependent on the mounting position");

        bind<IMC::MagneticField>(this);
      }

      //! Update parameters.
      void
      onUpdateParameters(void)
      {
        m_rotation.fill(3, 3, &m_args.rotation_mx[0]);

        // Rotate hard-iron offset.
        Math::Matrix data(c_axes_count, 1);
        for (unsigned i = 0; i < c_axes_count; i++)
          data(i) = m_args.hard_iron[i];
        data = inverse(m_rotation) * data;
        for (unsigned i = 0; i < c_axes_count; i++)
          m_hard_iron_rotated[i] = data(i);

        if (paramChanged(m_args.rotation_mx))
        {
          if (m_driver != NULL)
            m_driver->setRotationMatrix(m_rotation);
        }

        if (paramChanged(m_args.hard_iron) || paramChanged(m_args.rotation_mx))
          m_hard_iron_pending = true;

        if (paramChanged(m_args.timeout_error))
          m_wdog.setTop(m_args.timeout_error);
      }

      //! Acquire resources.
      void
      onResourceAcquisition(void)
      {
        setEntityState(IMC::EntityState::ESTA_BOOT, Status::CODE_INIT);

        try
        {
          m_driver = new Driver(this, m_args.uart_dev, m_args.uart_baud);
        }
        catch (std::runtime_error& e)
        {
          throw RestartNeeded(e.what(), 30);
        }
      }

      //! Release resources.
      void
      onResourceRelease(void)
      {
        Memory::clear(m_driver);
      }

      //! Initialize resources.
      void
      onResourceInitialization(void)
      {
        m_driver->setRotationMatrix(m_rotation);
        unsigned rate_decimation = 1000 / m_args.sample_freq;

        while (!stopping())
        {
          consumeMessages();

          if (!m_driver->setToIdleNoAck())
            continue;

          if (!m_driver->setToIdle())
            continue;

          if (!m_driver->enableContinuousStream(false))
            continue;

          if (!m_driver->getDeviceInfo())
            continue;

          if (!updateHardIronOffset())
            continue;

          if (!m_driver->setContinuousStreamFormat(rate_decimation))
            continue;

          if (!m_driver->enableContinuousStream(true))
            continue;

          break;
        }

        inf("%s, %s, %s",
            m_driver->getModelName().c_str(),
            m_driver->getModelNumber().c_str(),
            m_driver->getSerialNumber().c_str());

        setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_ACTIVE);
        m_wdog.setTop(m_args.timeout_error);
        m_wdog.reset();
      }

      void
      consume(const IMC::MagneticField* msg)
      {
        if (msg->getDestinationEntity() != getEntityId())
          return;

        // Reject if it is a small adjustment.
        if ((std::abs(msg->x) < m_args.calib_threshold) &&
            (std::abs(msg->y) < m_args.calib_threshold))
          return;

        double hi_x = m_args.hard_iron[0] + msg->x;
        double hi_y = m_args.hard_iron[1] + msg->y;

        IMC::EntityParameter hip;
        hip.name = c_hard_iron_param;
        hip.value = String::str("%f, %f, 0.0", hi_x, hi_y);

        IMC::SetEntityParameters np;
        np.name = getEntityLabel();
        np.params.push_back(hip);
        dispatch(np, DF_LOOP_BACK);

        IMC::SaveEntityParameters sp;
        sp.name = getEntityLabel();
        dispatch(sp);
      }

      //! Set new hard iron calibration parameters.
      //! @return true if successful, false otherwise.
      bool
      updateHardIronOffset(void)
      {
        if (m_driver == NULL)
          return false;

        // Retrieve current hard-iron offset.
        float hard_iron_read[3];
        if (!m_driver->getHardIronOffset(hard_iron_read[0], hard_iron_read[1], hard_iron_read[2]))
          return false;

        // Exit if hard-iron offsets match the ones we have.
        if (hard_iron_read[0] == m_hard_iron_rotated[0] && hard_iron_read[1] == m_hard_iron_rotated[1])
          return true;

        inf("%f == %f && %f == %f", hard_iron_read[0], m_hard_iron_rotated[0], hard_iron_read[1], m_hard_iron_rotated[1]);

        // Update hard-iron offsets.
        if (m_driver->setHardIronOffset(m_hard_iron_rotated[0], m_hard_iron_rotated[1], 0))
        {
          inf(DTR("new hard-iron calibration parameters: %f, %f, 0.0"),
              m_hard_iron_rotated[0],
              m_hard_iron_rotated[1]);

          return true;
        }

        return false;
      }

      void
      reportEntityState(void)
      {
        if (m_wdog.overflow())
        {
          std::string text = String::str(DTR("%0.1f seconds without valid data"),
                                         m_wdog.getElapsed());

          if (m_wdog.getElapsed() >= m_args.timeout_failure)
            throw RestartNeeded(text, 0);
          else
            setEntityState(IMC::EntityState::ESTA_ERROR, text);

          return;
        }

        if (!m_state_timer.overflow())
          return;

        double time_elapsed = m_state_timer.getElapsed();
        double frequency = Math::round(m_driver->getSampleCount() / time_elapsed);

        std::string text = String::str(DTR("active | timeouts: %u | faults: %u | frequency: %u"),
                                       m_driver->getTimeoutCount(),
                                       m_driver->getInvalidCount(),
                                       (unsigned)frequency);

        setEntityState(IMC::EntityState::ESTA_NORMAL, text);

        m_state_timer.reset();
        m_driver->setSampleCount(0);
      }

      void
      readSample(void)
      {
        if (m_driver->readSample(1.0))
          m_wdog.reset();
      }

      //! Main loop.
      void
      onMain(void)
      {
        while (!stopping())
        {
          consumeMessages();
          readSample();
          reportEntityState();

          if (m_hard_iron_pending)
          {
            if (updateHardIronOffset())
              m_hard_iron_pending = false;
          }
        }
      }
    };
  }
}

DUNE_TASK
