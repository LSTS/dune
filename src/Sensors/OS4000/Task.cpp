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
// Author: Ricardo Martins                                                  *
//***************************************************************************

// ISO C++ 98 headers.
#include <stdexcept>

// DUNE headers.
#include <DUNE/DUNE.hpp>

namespace Sensors
{
  //! Device driver for the OceanServer OS4000/5000 Digital Compass.
  namespace OS4000
  {
    using DUNE_NAMESPACES;

    //! Driver data fields.
    enum DataFields
    {
      DF_AZIM = 1 << 0,
      DF_PITCH = 1 << 1,
      DF_ROLL = 1 << 2,
      DF_TEMP = 1 << 3,
      DF_MAG = 1 << 6,
      DF_ACCEL = 1 << 8
    };

    //! Calibration States.
    enum CalibrationStates
    {
      STA_BOOT,
      STA_WAIT_LEVEL,
      STA_ROTATE,
      STA_CALIBRATED,
      STA_NUM_STEPS,
      STA_ERROR,
      STA_MAX
    };

    //! Calibration state description labels.
    static const char* c_state_desc[] =
    {
      "boot",
      "waiting for platform to be levelled",
      "rotate device",
      "calibrated",
      "number of steps",
      "calibration error"
    };

    //! %Task arguments.
    struct Arguments
    {
      std::string uart_dev;
      unsigned uart_baud;
      double data_tout;
      int data_rate;
    };

    //! Display fields.
    static const int c_display_fields = DF_AZIM + DF_PITCH + DF_ROLL + DF_TEMP + DF_MAG + DF_ACCEL;
    //! Minimum number of calibration output
    //! characters to validate process.
    static const int c_min_chars = 10;

    struct Task: public DUNE::Tasks::Task
    {
      //! Internal read buffer.
      static const unsigned c_bfr_size = 128;
      //! Serial port.
      SerialPort* m_uart;
      //! Euler angles message.
      IMC::EulerAngles m_euler;
      //! Magnetic field message.
      IMC::MagneticField m_mag;
      //! Acceleration message.
      IMC::Acceleration m_accel;
      //! Temperature.
      IMC::Temperature m_temp;
      //! Device Calibration State message.
      IMC::DevCalibrationState m_states[STA_MAX];
      //! Calibration states.
      CalibrationStates m_state;
      //! Calibration characters accumulator.
      int m_accumulator;
      //! Internal read buffer.
      char m_bfr[c_bfr_size];
      //! Read timestamp.
      double m_tstamp;
      //! Task arguments.
      Arguments m_args;
      //! Watchdog.
      Counter<double> m_wdog;

      Task(const std::string& name, Tasks::Context& ctx):
        DUNE::Tasks::Task(name, ctx),
        m_uart(NULL),
        m_tstamp(0)
      {
        // Retrieve config values.
        param("Serial Port - Device", m_args.uart_dev)
        .defaultValue("")
        .description("Serial port device used to communicate with the sensor");

        param("Serial Port - Baud Rate", m_args.uart_baud)
        .defaultValue("19200")
        .description("Serial port baud rate");

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

        // Initialize calibration states.
        m_states[STA_BOOT].step_number = STA_BOOT;
        m_states[STA_BOOT].step = DTR("initializing");
        m_states[STA_BOOT].total_steps = STA_NUM_STEPS;
        m_states[STA_BOOT].flags = (IMC::DevCalibrationState::DCS_PREVIOUS_NOT_SUPPORTED |
                                      IMC::DevCalibrationState::DCS_NEXT_NOT_SUPPORTED |
                                      IMC::DevCalibrationState::DCS_WAITING_CONTROL);

        m_states[STA_WAIT_LEVEL].step_number = STA_WAIT_LEVEL;
        m_states[STA_WAIT_LEVEL].step = DTR("Level the device and hit NEXT");
        m_states[STA_WAIT_LEVEL].total_steps = STA_NUM_STEPS;
        m_states[STA_WAIT_LEVEL].flags = IMC::DevCalibrationState::DCS_PREVIOUS_NOT_SUPPORTED;

        m_states[STA_ROTATE].step_number = STA_ROTATE;
        m_states[STA_ROTATE].step = DTR("Rotate the device and keep it levelled (rotation must last +20s)");
        m_states[STA_ROTATE].total_steps = STA_NUM_STEPS;
        m_states[STA_ROTATE].flags = IMC::DevCalibrationState::DCS_NEXT_NOT_SUPPORTED;

        m_states[STA_CALIBRATED].step_number = STA_CALIBRATED;
        m_states[STA_CALIBRATED].step = DTR("Device is calibrated");
        m_states[STA_CALIBRATED].total_steps = STA_NUM_STEPS;
        m_states[STA_CALIBRATED].flags = (IMC::DevCalibrationState::DCS_PREVIOUS_NOT_SUPPORTED |
                                            IMC::DevCalibrationState::DCS_NEXT_NOT_SUPPORTED |
                                            IMC::DevCalibrationState::DCS_COMPLETED);

        m_states[STA_ERROR].step_number = STA_BOOT;
        m_states[STA_ERROR].step = DTR("Calibration error, calibration procedure must be restarted");
        m_states[STA_ERROR].total_steps = STA_NUM_STEPS;
        m_states[STA_ERROR].flags = (IMC::DevCalibrationState::DCS_WAITING_CONTROL |
                                       IMC::DevCalibrationState::DCS_PREVIOUS_NOT_SUPPORTED |
                                       IMC::DevCalibrationState::DCS_NEXT_NOT_SUPPORTED |
                                       IMC::DevCalibrationState::DCS_ERROR);

        // Register listeners.
        bind<IMC::DevCalibrationControl>(this);
      }

      //! Release allocated resources.
      void
      onResourceRelease(void)
      {
        Memory::clear(m_uart);
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
        m_accumulator = 0;
        m_state = STA_BOOT;

        while (!stopping())
        {
          if (setParameter("R", "Output rate", m_args.data_rate))
            break;
        }

        while (!stopping())
        {
          if (setParameter("X", "Display", c_display_fields))
            break;
        }

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

      //! Read a string from the serial port,
      //! @return amount of bytes actually read.
      int
      readString(void)
      {
        consumeMessages();

        if (!Poll::poll(*m_uart, 1.0))
          return 0;

        return m_uart->readString(m_bfr, c_bfr_size);
      }

      //! Define a given parameter in the device.
      //! @param[in] command input command.
      //! @param[in] label label of the parameter.
      //! @param[in] value value of the parameter.
      //! @return true if successful, false otherwise.
      bool
      setParameter(const char* command, const char* label, int value)
      {
        Counter<double> timer(2);
        int min_value = 0;
        int max_value = 0;
        int cur_value = 0;

        m_uart->writeString("\x1b");
        m_uart->writeString(command);

        std::string format = String::str("%s (%%d..%%d)=%%d\r\n", label);

        while (!stopping() && !timer.overflow())
        {
          if (readString() <= 0)
            continue;

          if (std::sscanf(m_bfr, format.c_str(), &min_value, &max_value, &cur_value) == 3)
          {
            if (cur_value != value)
            {
              std::string value_str = String::str("%d\r\n", value);
              m_uart->writeString(value_str.c_str());
            }
            else
            {
              m_uart->writeString("\x1b");
            }

            debug("%s '%s' %s %d", "parameter", command, "configured to", value);
            return true;
          }
        }

        return false;
      }

      //! Change calibration state.
      //! @param[in] state calibration state.
      void
      changeCalibrationState(CalibrationStates state)
      {
        debug("Entered new calibration state: %d - %s", state, c_state_desc[state]);
        m_state = state;
        dispatch(m_states[m_state]);
      }

      void
      consume(const IMC::DevCalibrationControl* msg)
      {
        if (msg->getDestinationEntity() != getEntityId())
          return;

        if (getEntityState() == IMC::EntityState::ESTA_BOOT)
          return;

        switch (m_state)
        {
          case STA_BOOT:
            if (msg->op == IMC::DevCalibrationControl::DCAL_START)
              changeCalibrationState(STA_WAIT_LEVEL);
            break;

          case STA_WAIT_LEVEL:
            if (msg->op == IMC::DevCalibrationControl::DCAL_STEP_NEXT)
            {
              setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_CALIBRATING);
              m_uart->setCanonicalInput(false);
              m_uart->flush();
              m_uart->writeString("\x1b");
              m_uart->writeString("C");
              changeCalibrationState(STA_ROTATE);
            }

            if (msg->op == IMC::DevCalibrationControl::DCAL_STOP)
              changeCalibrationState(STA_BOOT);
            break;

          case STA_ROTATE:
            if (msg->op == IMC::DevCalibrationControl::DCAL_STEP_PREVIOUS)
            {
              terminateCalibration();
              changeCalibrationState(STA_WAIT_LEVEL);
            }

            if (msg->op == IMC::DevCalibrationControl::DCAL_STOP)
            {
              terminateCalibration();
              changeCalibrationState(STA_BOOT);
            }
            break;

          case STA_CALIBRATED:
            if (msg->op == IMC::DevCalibrationControl::DCAL_START)
              changeCalibrationState(STA_WAIT_LEVEL);
            break;

          case STA_ERROR:
            if (msg->op == IMC::DevCalibrationControl::DCAL_START)
              changeCalibrationState(STA_WAIT_LEVEL);

            if (msg->op == IMC::DevCalibrationControl::DCAL_STOP)
              changeCalibrationState(STA_BOOT);
            break;
          default:
            break;
        }
      }

      void
      calibrating(void)
      {
        if (!Poll::poll(*m_uart, 1.0))
          return;

        uint8_t byte;
        m_uart->read(&byte, 1);
        m_wdog.reset();

        if (byte == 0x2e)
        {
          m_accumulator++;

          if (m_accumulator > c_min_chars)
          {
            terminateCalibration();
            changeCalibrationState(STA_CALIBRATED);
          }
          else
          {
            spew("Received %d calibration characters; %d left to calibrate",
                  m_accumulator, c_min_chars - m_accumulator);
          }
        }
        else
          m_accumulator = 0;
      }

      void
      terminateCalibration(void)
      {
        m_accumulator = 0;
        m_uart->writeString("\x20");
        m_uart->setCanonicalInput(true);
        setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_ACTIVE);
      }

      void
      onMain(void)
      {
        while (!stopping())
        {
          if (m_wdog.overflow())
            setEntityState(IMC::EntityState::ESTA_ERROR, Status::CODE_COM_ERROR);

          consumeMessages();

          if (m_state == STA_WAIT_LEVEL)
          {
            std::string desc = String::str(DTR("Level the device and hit NEXT (Roll: %0.2f | Pitch: %0.2f)"),
                                           m_euler.phi, m_euler.theta);
            m_states[STA_WAIT_LEVEL].step = desc;
            dispatch(m_states[m_state]);
          }

          if (m_state == STA_ROTATE)
          {

            calibrating();
            continue;
          }

          int rv = readString();
          if (rv <= 0)
            continue;

          unsigned rcsum = 0;
          unsigned ccsum = XORChecksum::compute((uint8_t*)m_bfr + 1, rv - 1 - 5);

          std::sscanf(m_bfr, "$C%lfP%lfR%lfT%fMx%lfMy%lfMz%lfAx%lfAy%lfAz%lf*%02X\r\n",
                      &m_euler.psi_magnetic, &m_euler.theta, &m_euler.phi,
                      &m_temp.value,
                      &m_mag.x, &m_mag.y, &m_mag.z,
                      &m_accel.x, &m_accel.y, &m_accel.z,
                      &rcsum);

          if (rcsum != ccsum)
            continue;

          // Convert degree to radian.
          m_euler.setTimeStamp();
          m_euler.psi_magnetic = Angles::radians(m_euler.psi_magnetic);
          m_euler.psi = m_euler.psi_magnetic;
          m_euler.phi = Angles::radians(m_euler.phi);
          m_euler.theta = Angles::radians(m_euler.theta);
          dispatch(m_euler, DF_KEEP_TIME);

          // Convert G to m/s/s.
          m_accel.setTimeStamp(m_euler.getTimeStamp());
          m_accel.x = Math::c_gravity * m_accel.x;
          m_accel.y = Math::c_gravity * m_accel.y * -1.0;
          m_accel.z = Math::c_gravity * m_accel.z * -1.0;
          dispatch(m_accel, DF_KEEP_TIME);

          m_temp.setTimeStamp(m_euler.getTimeStamp());
          dispatch(m_temp, DF_KEEP_TIME);

          m_mag.setTimeStamp(m_euler.getTimeStamp());
          m_mag.x /= 1000.0;
          m_mag.y /= 1000.0;
          m_mag.z /= 1000.0;
          dispatch(m_mag, DF_KEEP_TIME);

          setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_ACTIVE);
          m_wdog.reset();
        }
      }
    };
  }
}

DUNE_TASK
