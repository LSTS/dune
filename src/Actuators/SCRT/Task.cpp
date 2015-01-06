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
// Author: Renato Caldas                                                    *
// Author: Ricardo Martins                                                  *
// Author: Pedro Calado (servo fault detection)                             *
//***************************************************************************

// ISO C++ 98 headers.
#include <cmath>

// DUNE headers.
#include <DUNE/DUNE.hpp>

namespace Actuators
{
  namespace SCRT
  {
    using DUNE_NAMESPACES;

    //! Number of servos
    static const unsigned c_servo_count = 4;

    //! Device commands.
    enum Commands
    {
      //! Device state.
      CMD_STATE = 0x01,
      //! Device configuration flags.
      CMD_FLAGS = 0x02,
      //! Set servo positions.
      CMD_SERVO_SET = 0x03
    };

    //! Device configuration flags.
    enum ConfigFlags
    {
      //! Servo power on/off.
      FLG_SERVO_ON = (1 << 0),
      //! Continuous state.
      FLG_STATE_CTN = (1 << 1)
    };

    struct Arguments
    {
      //! Minimum servo position (radians).
      double servo_min;
      //! Maximum servo position (radians).
      double servo_max;
      //! Maximum servo rotation rate (radians/sec)
      double servo_rate_max;
      //! Servo rate limitation flag
      bool limit_servo_rate;
      //! ADC sampling period.
      double adc_sper;
      //! ADC voltage reference.
      double ref_volt;
      //! Serial port device.
      std::string uart_dev;
      //! Enable leak sensors.
      bool leaks;
      //! Servo middle point calibration
      float servo_middle[c_servo_count];
      //! Servo orientation.
      int servo_orient[c_servo_count];
      //! Servo Numbering hack
      std::vector<unsigned> servo_renumbering;
      //! A/D conversion factors.
      std::vector<double> adc_conv;
      //! Leak entity labels.
      std::string elabel_leak[2];
      //! Servo current entity labels.
      std::string elabel_ampg[c_servo_count];
      //! Servo position entity labels.
      std::string elabel_posi[c_servo_count];
      //! Voltage entity label.
      std::string elabel_volt;
      //! Temperature entity label.
      std::string elabel_temp;
    };

    struct Task: public Tasks::Periodic
    {
      //! Voltage sensor message.
      IMC::Voltage m_volt;
      //! Current sensor messages.
      IMC::Current m_ampg[4];
      //! Temperature sensor message.
      IMC::Temperature m_temp;
      //! Leak detection.
      IMC::EntityState m_leaks[2];
      //! Servo references.
      uint16_t m_servo_ref[c_servo_count];
      //! Device protocol handler.
      LUCL::Protocol m_proto;
      //! Hardware major
      int m_hw_major;
      //! Last ADC sampling.
      Counter<double> m_last_adc;
      //! Task arguments.
      Arguments m_args;
      //! Servo's previous set reference (needed for angular rate limitation)
      float m_last_ref[c_servo_count];
      //! Servo's previous set reference's time (needed for angular rate limitation)
      float m_last_timestamp[c_servo_count];
      //! Servo's position voltage signal
      unsigned m_pos_id[c_servo_count];
      //! Servo's set position received in the IMC messages
      float m_set_position[c_servo_count];

      Task(const std::string& name, Tasks::Context& ctx):
        Tasks::Periodic(name, ctx)
      {
        // Define configuration parameters.
        param("Serial Port - Device", m_args.uart_dev)
        .defaultValue("")
        .description("Serial port device used to communicate with the sensor");

        param("ADC Reference Voltage", m_args.ref_volt)
        .defaultValue("1.1");

        param("ADC Sampling Frequency", m_args.adc_sper)
        .units(Units::Hertz)
        .defaultValue("1.0")
        .minimumValue("0.1")
        .maximumValue("10.0");

        param("Servo Rotation - Minimum", m_args.servo_min)
        .units(Units::Degree)
        .defaultValue("-45.0")
        .minimumValue("-60.0")
        .maximumValue("0.0");

        param("Servo Rotation - Maximum", m_args.servo_max)
        .units(Units::Degree)
        .defaultValue("45.0")
        .minimumValue("0.0")
        .maximumValue("60.0");

        param("Servo Rotation Rate - Maximum", m_args.servo_rate_max)
        .units(Units::DegreePerSecond)
        .defaultValue("333.3")
        .minimumValue("0.0");

        param("Enable Rotation Rate Limit", m_args.limit_servo_rate)
        .defaultValue("false")
        .description("Enable limit of rotation rate according to manufacturer");

        param("Servo Renumbering", m_args.servo_renumbering)
        .defaultValue("0, 1, 2, 3")
        .size(4)
        .description("Servo renumbering hack");

        param("A/D Conversion Factors", m_args.adc_conv)
        .size(12)
        .description("A/D conversion factors");

        for (unsigned i = 0; i < c_servo_count; ++i)
        {
          std::string option = String::str("Servo %d Middle", i);
          param(option, m_args.servo_middle[i])
          .defaultValue("");

          option = String::str("Servo %d Orientation", i);
          param(option, m_args.servo_orient[i])
          .defaultValue("1")
          .description("Servo orientation");

          option = String::str("Entity Label - Current %d", i);
          param(option, m_args.elabel_ampg[i]);

          option = String::str("Entity Label - Servo Position %d", i);
          param(option, m_args.elabel_posi[i]);
        }

        param("Entity Label - Voltage", m_args.elabel_volt);

        param("Entity Label - Temperature", m_args.elabel_temp);

        param("Enable Leak Sensors", m_args.leaks)
        .defaultValue("true")
        .description("Enable leak sensors");

        for (unsigned i = 0; i < 2; ++i)
        {
          std::string option = String::str("Entity Label - Leak %d", i);
          param(option, m_args.elabel_leak[i]);
        }

        // Register handler routines.
        bind<IMC::SetServoPosition>(this);
        bind<IMC::Voltage>(this);
      }

      void
      onUpdateParameters(void)
      {
        if (paramChanged(m_args.adc_sper))
        {
          m_args.adc_sper = 1 / m_args.adc_sper;
          m_last_adc.setTop(m_args.adc_sper);
        }

        // Initialize data structures.
        for (unsigned i = 0; i < c_servo_count; ++i)
        {
          m_servo_ref[i] = 256;
          if (paramChanged(m_args.servo_middle[i]))
            m_args.servo_middle[i] = Angles::radians(m_args.servo_middle[i]);

          m_last_ref[i] = 0;
          m_last_timestamp[i] = Clock::get();
        }

        // Convert rotation limits from degrees to radians.
        if (paramChanged(m_args.servo_min))
          m_args.servo_min = Angles::radians(m_args.servo_min);

        if (paramChanged(m_args.servo_max))
          m_args.servo_max = Angles::radians(m_args.servo_max);

        // Convert maximum rotation rate to radians
        if (paramChanged(m_args.servo_rate_max))
          m_args.servo_rate_max = Angles::radians(m_args.servo_rate_max);
      }

      void
      onEntityReservation(void)
      {
        if (m_args.leaks)
        {
          // Initialize leak messages.
          for (unsigned i = 0; i < 2; ++i)
          {
            m_leaks[i].state = IMC::EntityState::ESTA_NORMAL;
            m_leaks[i].description = DTR(Status::getString(Status::CODE_ACTIVE));
            m_leaks[i].setSourceEntity(reserveEntity(m_args.elabel_leak[i]));
          }
        }

        for (unsigned i = 0; i < c_servo_count; ++i)
          m_ampg[i].setSourceEntity(reserveEntity(m_args.elabel_ampg[i]));

        m_volt.setSourceEntity(reserveEntity(m_args.elabel_volt));
        m_temp.setSourceEntity(reserveEntity(m_args.elabel_temp));
      }

      void
      onEntityResolution(void)
      {
        for (unsigned i = 0; i < c_servo_count; ++i)
        {
          try
          {
            m_pos_id[i] = resolveEntity(m_args.elabel_posi[i]);
          }
          catch (...)
          {
            m_pos_id[i] = 0;
          }
        }
      }

      void
      onResourceRelease(void)
      {

      }

      void
      onResourceAcquisition(void)
      {
        try
        {
          m_proto.setUART(m_args.uart_dev);
          m_proto.open();
          m_proto.requestVersion();
        }
        catch (std::runtime_error& e)
        {
          throw RestartNeeded(e.what(), 30);
        }
      }

      void
      onResourceInitialization(void)
      {
        for (unsigned i = 0; i < c_servo_count; ++i)
        {
          enableServo(i);
          actuateServo(i, 0);
        }
      }

      void
      onReportEntityState(void)
      {
        if (m_args.leaks)
        {
          dispatch(m_leaks[0]);
          dispatch(m_leaks[1]);
        }
      }

      void
      consume(const IMC::SetServoPosition* msg)
      {
        actuateServo(msg->id, msg->value);
      }

      void
      consume(const IMC::Voltage* msg)
      {
        for (unsigned i = 0; i < c_servo_count; ++i)
        {
          if (msg->getSourceEntity() == m_pos_id[i] && m_pos_id[i])
          {
            IMC::ServoPosition pos;
            pos.id = i;
            pos.value = msg->value;
            dispatch(pos);
          }
        }
      }

      void
      actuateServo(unsigned nr, double value)
      {
        if (nr >= c_servo_count)
        {
          err(DTR("servo number out of bounds: %u"), nr);
          return;
        }
        m_set_position[nr] = value;
      }

      void
      setLeakStatus(int idx, bool leak)
      {
        IMC::EntityState& es = m_leaks[idx];

        if (leak)
        {
          if (es.state == IMC::EntityState::ESTA_NORMAL)
          {
            es.state = IMC::EntityState::ESTA_FAILURE;
            es.description = DTR("leak detected");
            dispatch(es);
          }
        }
        else if (es.state == IMC::EntityState::ESTA_FAILURE)
        {
          es.state = IMC::EntityState::ESTA_NORMAL;
          es.description = DTR("no leak");
          dispatch(es);
        }
      }

      void
      enableServo(unsigned i)
      {
        // @TODO: enable these functions
        (void)i;
      }

      void
      disableServo(unsigned i)
      {
        // @TODO: enable these functions
        (void)i;
      }

      void
      onCommand(uint8_t cmd, const uint8_t* data, int data_size)
      {
        (void)data_size;

        switch (cmd)
        {
          case CMD_STATE:
            uint16_t adc_vals[6];
            adc_vals[0] = data[0] | (data[4] & 0x3) << 8;
            adc_vals[1] = data[1] | (data[4] & 0x3 << 2) << 6;
            adc_vals[2] = data[2] | (data[4] & 0x3 << 4) << 4;
            adc_vals[3] = data[3] | (data[4] & 0x3 << 6) << 2;

            adc_vals[4] = data[5] | (data[7] & 0x3) << 8;
            adc_vals[5] = data[6] | (data[7] & 0x3 << 2) << 6;

            if (m_hw_major == 1)
            {
              // Dispatch Current Measurements
              m_ampg[0].value = m_args.adc_conv[0] * ((adc_vals[0] / 1024.0) * m_args.ref_volt) + m_args.adc_conv[1];
              dispatch(m_ampg[0]);

              // Dispatch Voltage Measurement
              m_volt.value = m_args.adc_conv[2] * ((adc_vals[1] / 1024.0) * m_args.ref_volt) + m_args.adc_conv[3];
              dispatch(m_volt);

              // Dispatch Temperature Measurement
              m_temp.value = m_args.adc_conv[4] * ((adc_vals[2] / 1024.0) * m_args.ref_volt) + m_args.adc_conv[5];
              dispatch(m_temp);
            }
            else
            {
              // Dispatch Current Measurements
              for (int i = 0; i < 4; i++)
              {
                m_ampg[i].value = m_args.adc_conv[i * 2] * ((adc_vals[i] / 1024.0) * m_args.ref_volt) + m_args.adc_conv[(i * 2) + 1];
                dispatch(m_ampg[i]);
              }

              // Dispatch Voltage Measurement
              m_volt.value = m_args.adc_conv[8] * ((adc_vals[4] / 1024.0) * m_args.ref_volt) + m_args.adc_conv[9];
              dispatch(m_volt);

              // Dispatch Temperature Measurement
              m_temp.value = m_args.adc_conv[10] * ((adc_vals[5] / 1024.0) * m_args.ref_volt) + m_args.adc_conv[11];
              dispatch(m_temp);
            }

            // Leak detector.
            if (m_args.leaks)
            {
              setLeakStatus(0, (data[7] & (1 << 6)) != 0);
              setLeakStatus(1, (data[7] & (1 << 7)) != 0);
            }
            break;
        }
      }

      void
      onVersion(unsigned major, unsigned minor, unsigned patch)
      {
        m_hw_major = major;
        inf(DTR("firmware version %u.%u.%u"), major, minor, patch);
        setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_ACTIVE);
      }

      bool
      waitForCommand(uint8_t code)
      {
        LUCL::Command cmd;
        unsigned retries = 10;

        while (retries)
        {
          LUCL::CommandType type = m_proto.consumeData(cmd);

          switch (type)
          {
            case LUCL::CommandTypeNormal:
              onCommand(cmd.command.code, cmd.command.data, cmd.command.size);
              if (cmd.command.code == code)
                return true;
              break;

            case LUCL::CommandTypeVersion:
              onVersion(cmd.version.major, cmd.version.minor, cmd.version.patch);
              break;

            case LUCL::CommandTypeInvalidVersion:
              err("%s", DTR(Status::getString(Status::CODE_INVALID_CHECKSUM)));
              break;

            case LUCL::CommandTypeError:
              err(DTR("device reported: %s"), m_proto.getErrorString(cmd.error.code));
              break;

            case LUCL::CommandTypeInvalidChecksum:
              err("%s", DTR(Status::getString(Status::CODE_INVALID_CHECKSUM)));
              break;

            case LUCL::CommandTypeNone:
              --retries;
              Delay::waitMsec(50);
              break;

            default:
              break;
          }
        }

        return false;
      }

      void
      task(void)
      {
        // Set servo positions.
        uint8_t data[c_servo_count + 1];

        data[0] = 0;
        for (unsigned i = 0; i < c_servo_count; ++i)
        {
          unsigned nr = m_args.servo_renumbering[i];
          float value = m_set_position[nr];

          // compute elapsed time to trim according to max rotation rate
          double elapsedtime = Clock::get() - m_last_timestamp[nr];
          if (elapsedtime > 0 && m_args.limit_servo_rate)
          {
            elapsedtime = trimValue(elapsedtime, 0, (m_args.servo_max - m_args.servo_min) / m_args.servo_rate_max);

            if (value - m_last_ref[nr] >= 0)
              value = std::min((double)value, m_last_ref[nr] + m_args.servo_rate_max * elapsedtime);
            else
              value = std::max((double)value, m_last_ref[nr] - m_args.servo_rate_max * elapsedtime);
          }

          // trim according to max and min rotation
          value = trimValue(value, m_args.servo_min, m_args.servo_max);

          // update variables used as previous
          m_last_ref[nr] = value;
          m_last_timestamp[nr] = Clock::get();

          int ticks = (int)(256 + m_args.servo_orient[nr] * (value + m_args.servo_middle[nr]) * (400.0 / DUNE::Math::c_pi));
          m_servo_ref[nr] = trimValue(ticks, 0, 511);

          data[0] |= (m_servo_ref[nr] & 0x100) >> (8 - i);
          data[i + 1] = m_servo_ref[nr] & 0xFF;
        }

        m_proto.sendCommand(CMD_SERVO_SET, data, c_servo_count + 1);
        if (!waitForCommand(CMD_SERVO_SET))
        {
          setEntityState(IMC::EntityState::ESTA_ERROR, Status::CODE_COM_ERROR);
          throw RestartNeeded(DTR(Status::getString(Status::CODE_COM_ERROR)), 5);
        }
        else
        {
          setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_ACTIVE);
        }

        if (!m_last_adc.overflow())
          return;

        m_last_adc.reset();

        // Request state.
        m_proto.sendCommand(CMD_STATE);
        if (!waitForCommand(CMD_STATE))
        {
          setEntityState(IMC::EntityState::ESTA_ERROR, Status::CODE_COM_ERROR);
        }
        else
        {
          setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_ACTIVE);
        }
      }
    };
  }
}

DUNE_TASK
