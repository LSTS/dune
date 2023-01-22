//***************************************************************************
// Copyright 2007-2022 Universidade do Porto - Faculdade de Engenharia      *
// Laboratório de Sistemas e Tecnologia Subaquática (LSTS)                  *
//***************************************************************************
// This file is part of DUNE: Unified Navigation Environment.               *
//                                                                          *
// Commercial Licence Usage                                                 *
// Licencees holding valid commercial DUNE licences may use this file in    *
// accordance with the commercial licence agreement provided with the       *
// Software or, alternatively, in accordance with the terms contained in a  *
// written agreement between you and Faculdade de Engenharia da             *
// Universidade do Porto. For licensing terms, conditions, and further      *
// information contact lsts@fe.up.pt.                                       *
//                                                                          *
// Modified European Union Public Licence - EUPL v.1.1 Usage                *
// Alternatively, this file may be used under the terms of the Modified     *
// EUPL, Version 1.1 only (the "Licence"), appearing in the file LICENCE.md *
// included in the packaging of this file. You may not use this work        *
// except in compliance with the Licence. Unless required by applicable     *
// law or agreed to in writing, software distributed under the Licence is   *
// distributed on an "AS IS" basis, WITHOUT WARRANTIES OR CONDITIONS OF     *
// ANY KIND, either express or implied. See the Licence for the specific    *
// language governing permissions and limitations at                        *
// https://github.com/LSTS/dune/blob/master/LICENCE.md and                  *
// http://ec.europa.eu/idabc/eupl.html.                                     *
//***************************************************************************
// Author: Pedro Gonçalves                                                 *
//***************************************************************************

// ISO C++ 98 headers.
#include <string>
#include <cstring>

// DUNE headers.
#include <DUNE/DUNE.hpp>

// Local Headers.
#include "Parser.hpp"

namespace Actuators
{
  namespace AMC
  {
    using DUNE_NAMESPACES;

    static const unsigned int c_max_csum = 2;
    static const unsigned int c_max_motors = 4;
    static const unsigned int c_max_buffer = 32;
    static const unsigned int c_numb_motor_id = 2;
    static const float c_time_check_motor = 2.0f;
    static const unsigned int c_sleep_time = 25000;
    static const unsigned int c_max_value_motor = 25000;

    enum AmcMessages
    {
      // RPM
      RPM,
      // TEMPERATURE
      TEMPERATURE,
      // Voltage and Current
      PWR,
      // All info given by motor
      ALL,
      // State of motor
      STATE
    };

    struct Arguments
    {
      //! Serial port device.
      std::string uart_dev;
      //! Serial port baud rate.
      unsigned uart_baud;
      //! Rpm entity labels
      std::string motor_elabels[c_max_motors];
      //! Internal conversion factors RPM
      double ifactor_rpm[c_max_motors];
      //! Internal conversion factors TEMPERATURE
      int ifactor_orientation[c_max_motors];
      //! Motor state
      bool motor_state[c_max_motors];
    };

    struct Task: public Tasks::Periodic
    {
      //! Rpm message
      IMC::Rpm m_rpm[c_max_motors];
      //! Temperature message
      IMC::Temperature m_tmp[c_max_motors];
      //! Voltage message
      IMC::Voltage m_volt[c_max_motors];
      //! Current message
      IMC::Current m_amp[c_max_motors];
      //! Task arguments.
      Arguments m_args;
      //! Serial port device.
      SerialPort* m_uart;
      //! I/O Multiplexer.
      Poll m_poll;
      //! Scratch buffer.
      uint8_t m_buffer[c_max_buffer];
      //! CSUM value
      uint8_t m_csum[c_max_csum];
      //! Buffer for message received
      char m_msg[c_max_buffer];
      //! Parser for message
      Parser* m_parse;
      //! Counter stage id motor
      uint8_t m_cnt_motor;
      //! Values for motors
      double m_act[c_numb_motor_id];
      //! count for fail rx uart
      uint8_t m_fail_uart;
      //! state time to check state of motors
      Time::Counter<float> m_cnt_motor_check;
      //! Read timestamp.
      double m_tstamp;

      //! Constructor.
      //! @param[in] name task name.
      //! @param[in] ctx context.
      Task(const std::string& name, Tasks::Context& ctx):
        Tasks::Periodic(name, ctx),
        m_uart(NULL),
        m_tstamp(0)
      {
        // Define configuration parameters.
        param("Serial Port - Device", m_args.uart_dev)
        .defaultValue("")
        .description("Serial port device used to communicate with the sensor");

        param("Serial Port - Baud Rate", m_args.uart_baud)
        .defaultValue("57600")
        .description("Serial port baud rate");

        // Extract motor configurations
        for(unsigned i = 0; i < c_max_motors; ++i)
        {
          std::string option = String::str("Motor %u - Entity Label", i);
          param(option, m_args.motor_elabels[i])
          .defaultValue("")
          .description("Motor Entity Label");

          option = String::str("Motor %u - Conversion RPM", i);
          param(option, m_args.ifactor_rpm[i])
          .size(1)
          .defaultValue("1.0")
          .description("Motor rpm conversion factor");

          option = String::str("Motor %u - Orientation", i);
          param(option, m_args.ifactor_orientation[i])
          .visibility(Tasks::Parameter::VISIBILITY_USER)
          .defaultValue("1")
          .values("-1, 1")
          .description("Motor Orientation ( 1, -1 )");

          option = String::str("Motor %u - State", i);
          param(option, m_args.motor_state[i])
          .visibility(Tasks::Parameter::VISIBILITY_USER)
          .defaultValue("true")
          .description("Motor State");
        }

        bind<IMC::SetThrusterActuation>(this);
      }

      //! Reserve entity identifiers.
      void
      onEntityReservation(void)
      {
        unsigned eid = 0;

        for (unsigned i = 0; i < c_max_motors; ++i)
        {
          if (!m_args.motor_state[i])
            continue;

          if (m_args.motor_elabels[i].empty())
            continue;

          try
          {
            eid = resolveEntity(m_args.motor_elabels[i]);
          }
          catch (Entities::EntityDataBase::NonexistentLabel& e)
          {
            (void)e;
            eid = reserveEntity(m_args.motor_elabels[i]);
          }

          m_rpm[i].setSourceEntity(eid);
          m_tmp[i].setSourceEntity(eid);
          m_volt[i].setSourceEntity(eid);
          m_amp[i].setSourceEntity(eid);
        }
      }

      //! Acquire resources.
      void
      onResourceAcquisition(void)
      {
        setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_IDLE);
        m_uart = new SerialPort(m_args.uart_dev, m_args.uart_baud);
      }

      //! Initialize resources.
      void
      onResourceInitialization(void)
      {
        m_parse = new Parser();
        m_poll.add(*m_uart);
        setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_ACTIVE);
        checkStateMotor(true);
        stopAllMotor();
        m_cnt_motor = 0;
        m_fail_uart = 0;
        m_cnt_motor_check.setTop(c_time_check_motor);
      }

      //! Release resources.
      void
      onResourceRelease(void)
      {
        if (m_uart != NULL)
        {
          m_poll.remove(*m_uart);
          delete m_uart;
          m_uart = NULL;
        }

        Memory::clear(m_parse);
      }

      //! Consume message IMC::SetThrusterActuation
      void
      consume(const IMC::SetThrusterActuation* msg)
      {
        m_act[msg->id] = msg->value * c_max_value_motor;
      }

      //! Read data send by AMC board.
      bool
      checkSerialPort(void)
      {
        if (m_poll.wasTriggered(*m_uart))
        {
          std::memset(&m_buffer, '0', sizeof(m_buffer));
          int rv = 0;

          try
          {
            rv = m_uart->read(m_buffer, sizeof(m_buffer));
            m_tstamp = Clock::getSinceEpoch();
          }
          catch (std::exception& e)
          {
            err(DTR("read error: %s"), e.what());
            return false;
          }

          if (rv <= 0)
          {
            err(DTR("unknown read error"));
            return false;
          }
          else
          {
            for (uint8_t i = 0; i < rv; ++i)
            {
              if (!m_parse->parse(m_buffer[i]))
                continue;

              return true;
            }
          }
        }

        return false;
      }

      //! Send value of rpm to motor
      int
      setRPM(int motor, int rpm)
      {
        std::memset(&m_msg, '\0', sizeof(m_msg));
        std::sprintf(m_msg, "@S,%d,%d,*", motor, rpm);
        m_csum[0] = Algorithms::XORChecksum::compute((uint8_t*)m_msg, strlen(m_msg) - 1);
        int t = m_uart->write(m_msg, strlen(m_msg));
        m_uart->write(m_csum, 1);
        t++;
        Delay::waitUsec(c_sleep_time);
        return t;
      }

      //! Check state of motor (Active/Disable)
      int
      checkStateMotor(bool spew_ok)
      {
        uint8_t cnt_rx = 0;
        for (int i = 0; i < 4; i++)
        {
          if (m_args.motor_state[i])
          {
            readParameterAMC(i, STATE);
            cnt_rx = 0;
            m_fail_uart = 0;

            while(cnt_rx < 10 && !stopping() && m_fail_uart < 4)
            {
              if (m_poll.poll(0.2))
              {
                if (checkSerialPort())
                {
                  if (m_parse->translate())
                    cnt_rx = 10;
                }
                cnt_rx++;
              }
              else
              {
                m_fail_uart++;
              }
            }
          }
        }

        uint8_t cnt_war = 0;

        for (uint8_t i = 0; i < 4; i++)
        {
          if (m_args.motor_state[i] && !m_parse->m_motor.state[i])
          {
            if (spew_ok)
              war(DTR("AMC Motor %d - ERROR"), i);

            cnt_war++;
          }
        }

        if (m_fail_uart > 3)
        {
          err("%s", DTR(Status::getString(CODE_COM_ERROR)));
          setEntityState(IMC::EntityState::ESTA_ERROR, Status::CODE_COM_ERROR);
          return -1;
        }
        else
        {
          if (cnt_war > 0)
          {
            setEntityState(IMC::EntityState::ESTA_ERROR, Utils::String::str(DTR("AMC Motor ERROR")));
          }
          else
          {
            if (spew_ok)
              war(DTR("ALL MOTORS OK"));

            setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_ACTIVE);
          }

          return cnt_war;
        }

        return 0;
      }

      //! Request/read all info of motor to AMC board
      void
      checkDataMotor(uint8_t id_motor)
      {
        bool checkEnd = false;
        uint8_t jump_read_uart = 0;
        readParameterAMC(id_motor, ALL);

        while (!checkEnd && !stopping() && jump_read_uart < 6)
        {
          if (m_poll.poll(0.1))
          {
            if (checkSerialPort())
              checkEnd = m_parse->translate();
          }
          else
          {
            jump_read_uart++;
          }
        }

        if (jump_read_uart < 6)
        {
          dispatchAllData(id_motor);
          m_uart->flush();
        }
      }

      //! Stop all motors
      void
      stopAllMotor(void)
      {
        for (uint8_t i = 0; i < c_max_motors; i++)
        {
          if (m_args.motor_state[i])
          {
            setRPM(i, 0);
            Delay::waitUsec(c_sleep_time);
          }
        }
      }

      //! Requests specific data type
      void
      readParameterAMC(int motor, AmcMessages fname)
      {
        std::memset(&m_msg, '\0', sizeof(m_msg));

        switch (fname)
        {
          case RPM:
            std::sprintf(m_msg, "@R,%d,rpm,*", motor);
            break;

          case TEMPERATURE:
            std::sprintf(m_msg, "@R,%d,tmp,*", motor);
            break;

          case PWR:
            std::sprintf(m_msg, "@R,%d,pwr,*", motor);
            break;

          case STATE:
            std::sprintf(m_msg, "@R,%d,sta,*", motor);
            break;

          case ALL:
            std::sprintf(m_msg, "@R,%d,all,*", motor);
            break;

          default:
            war(DTR("Wrong parameter request"));
            return;
        }

        m_csum[0] = Algorithms::XORChecksum::compute((uint8_t*)m_msg, strlen(m_msg) - 1);
        m_uart->write(m_msg, strlen(m_msg));
        m_uart->write(m_csum, 1);
        Delay::waitUsec(c_sleep_time);
      }

      //! Dispatch rpm value to IMC message
      void
      dispatchAllData(uint8_t id)
      {
        if (id < c_max_motors)
        {
          // Set timestamps so we have realistic times.
          m_rpm[id].setTimeStamp(m_tstamp);
          m_tmp[id].setTimeStamp(m_tstamp);
          m_volt[id].setTimeStamp(m_tstamp);
          m_amp[id].setTimeStamp(m_tstamp);

          // Set values.
          m_rpm[id].value = m_parse->m_motor.rpm[id];
          if(m_args.ifactor_orientation[id] == -1)
            m_rpm[id].value = -m_rpm[id].value;

          m_tmp[id].value = m_parse->m_motor.tmp[id];
          m_volt[id].value = m_parse->m_motor.volt[id];
          m_amp[id].value = m_parse->m_motor.current[id];

          // Dispatch messages.
          dispatch(m_rpm[id], DF_KEEP_TIME);
          dispatch(m_tmp[id], DF_KEEP_TIME);
          dispatch(m_volt[id], DF_KEEP_TIME);
          dispatch(m_amp[id], DF_KEEP_TIME);
        }
      }

      //! Set rpm for all motors
      void
      setRpmValues(void)
      {
        for (uint8_t i = 0; i < c_max_motors; i++)
        {
          if (m_parse->m_motor.state[i] && m_args.motor_state[i])
          {
            setRPM(i, m_args.ifactor_orientation[i] * m_act[(unsigned)std::floor(i / 2.0)]);
          }
        }
      }

      //! Main loop.
      void
      task(void)
      {
        setRpmValues();

        for (uint8_t i = 0; i <= 3; i++)
        {
          // Read values of active motor.
          if (m_parse->m_motor.state[i] && m_args.motor_state[i])
            checkDataMotor(i);
        }

        if (m_cnt_motor_check.overflow())
        {
          checkStateMotor(false);
          m_cnt_motor_check.reset();
        }
      }
    };
  }
}

DUNE_TASK
