//***************************************************************************
// Copyright 2007-2016 Universidade do Porto - Faculdade de Engenharia      *
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
// Author: Pedro Gonçalves                                                 *
//***************************************************************************

// DUNE headers.
#include <DUNE/DUNE.hpp>

//Local Headers
#include "MessageControl.hpp"

namespace Actuators
{
  namespace AMC
  {
    using DUNE_NAMESPACES;

    static const int c_max_csum = 2;
    static const int c_max_motors = 4;
    static const int c_max_buffer = 16;
    static const uint8_t c_poly = 0x00;
    static const int c_sleep_time = 25000;

    enum AmcMessages
    {
      // RPM
      RPM,
      // TEMPERATURE
      TEMPERATURE,
      // Voltage and Current
      PWR,
      // All info
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
      double internal_factors_rpm[c_max_motors];
      //! Internal conversion factors TEMPERATURE
      char internal_factors_tmp[c_max_motors];
      //! Motor state
      bool motor_state[c_max_motors];
    };

    struct Task: public Tasks::Periodic
    {
      //! Rpm message
      IMC::Rpm m_rpm_val[c_max_motors];
      //!Temperature message
      IMC::Temperature m_tmp_val[c_max_motors];
      //!Voltage message
      IMC::Voltage m_volt_val[c_max_motors];
      //!Current message
      IMC::Current m_amp_val[c_max_motors];
      //! Task arguments.
      Arguments m_args;
      //!Func read name
      AmcMessages m_func_name;
      //! Serial port device.
      SerialPort* m_uart;
      // I/O Multiplexer.
      Poll m_poll;
      //! Scratch buffer.
      uint8_t m_buffer[c_max_buffer];
      //CSUM
      uint8_t m_csum[c_max_csum];
      //Buffer msg
      char m_msg[c_max_buffer];
      //Parser
      MessageParse* m_parse;
      //! Watchdog.
      Counter<double> m_wdog;
      //Counter stage id motor
      uint8_t m_cnt_motor;
      
      double motorId0;
      double motorId1;

      //! Constructor.
      //! @param[in] name task name.
      //! @param[in] ctx context.
      Task(const std::string& name, Tasks::Context& ctx):
        Tasks::Periodic(name, ctx),
        m_uart(NULL)
      {
        // Define configuration parameters.
        param("Serial Port - Device", m_args.uart_dev)
        .defaultValue("")
        .description("Serial port device used to communicate with the sensor");

        param("Serial Port - Baud Rate", m_args.uart_baud)
        .defaultValue("57600")
        .description("Serial port baud rate");

        // Extract motor configurations
        for (unsigned i = 0; i < c_max_motors; ++i)
        {
          std::string option = String::str("Motor %u - Entity Label", i);
          param(option, m_args.motor_elabels[i])
          .defaultValue("")
          .description("Motor Entity Label");

          option = String::str("Motor %u - Conversion RPM", i);
          param(option, m_args.internal_factors_rpm[i])
          .size(1)
          .defaultValue("1.0")
          .description("Motor rpm conversion factor");

          option = String::str("Motor %u - Conversion Temperature", i);
          param(option, m_args.internal_factors_tmp[i])
          .defaultValue("C")
          .description("Motor Temperature conversion factor");

          option = String::str("Motor %u - State", i);
          param(option, m_args.motor_state[i])
          .defaultValue("true")
          .description("Motor State");
        }

        bind<IMC::SetThrusterActuation>(this);
      }

      //! Update internal state with new parameter values.
      void
      onUpdateParameters(void)
      {
      }

      //! Reserve entity identifiers.
      void
      onEntityReservation(void)
      {
        for (unsigned i = 0; i < c_max_motors; ++i)
        {
        	try
          {
            resolveEntity(m_args.motor_elabels[i]);
          }
          catch (Entities::EntityDataBase::NonexistentLabel& e)
          {
            (void)e;
            reserveEntity(m_args.motor_elabels[i]);
          }
        }
      }

      //! Resolve entity names.
      void
      onEntityResolution(void)
      {
      	unsigned eid = 0;
        for (unsigned i = 0; i < c_max_motors; ++i)
        {
          try
          {
            eid = resolveEntity(m_args.motor_elabels[i]);
          }
          catch (...)
          { }

          if (m_args.motor_elabels[i].empty())
            continue;

          m_rpm_val[i].setSourceEntity(eid);
          m_tmp_val[i].setSourceEntity(eid);
          m_volt_val[i].setSourceEntity(eid);
          m_amp_val[i].setSourceEntity(eid);
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
        m_parse = new MessageParse();
        m_parse->m_amc_state = MessageParse::PS_PREAMBLE;
        m_poll.add(*m_uart);
				setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_ACTIVE);
        checkStateMotor();
        stopAllMotor();
        m_wdog.setTop(10.0);
        m_cnt_motor = 0;
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
      }

      void
      consume(const IMC::SetThrusterActuation* msg)
      {          
          if(msg->id == 0)
		      {
		      	if(msg->value != 0)
		      		motorId0 = msg->value * 30000;
		        else
		        	motorId0 = 0;
		      }
		      else if(msg->id == 1)
		      {
		      	if(msg->value != 0)
		      		motorId1 = msg->value * 30000;
		        else
		        	motorId1 = 0;
		      }
      }

      //! Read input from arduino.
      uint8_t
      checkSerialPort(void)
      {
        if (m_poll.wasTriggered(*m_uart))
        {
          memset(&m_buffer, '\0', sizeof(m_buffer));
          int rv = 0;

          try
          {
            rv = m_uart->read(m_buffer, 1);
          }
          catch (std::exception& e)
          {
            err(DTR("read error: %s"), e.what());
            return 0;
          }

          if (rv <= 0)
          {
            err(DTR("unknown read error"));
            return 0;
          }
          else
          {
            m_parse->ParserAMC(m_buffer[0]);
            return m_buffer[0];
          }
        }
        return 0;
      }

      int
      setRPM( int motor, int rpm )
      {
        //Algorithms::CRC8 crc(c_poly);
        memset(&m_msg, '\0', sizeof(m_msg));
        sprintf(m_msg, "@S,%d,%d,*", motor, rpm);
        //m_csum[0] = crc.putArray((unsigned char *)m_msg, strlen(m_msg) - 1);
        m_csum[0] = m_parse->CRC8((unsigned char *)m_msg);
        int t = m_uart->write(m_msg, strlen(m_msg));
        m_uart->write(m_csum, 1);
        t++;
        //war("SEND: %s%c   SIZE: %d", m_msg, m_csum[0], t + 1);

        return t;
      }

      void
      checkStateMotor(void)
      {
      	int cnt_rx = 0;
        for(int i = 0; i < 4; i++)
        {
          readParameterAMC(i, STATE);
          cnt_rx = 0;
          while(cnt_rx < 10 && !stopping())
          {
            if (m_poll.poll(0.5))
            {
              checkSerialPort();
              cnt_rx++;
            }
          }
        }

        int cnt_war = 0;

        for(int i = 0; i < 4; i++)
        {
          if(m_parse->m_motor.state[i] == 0)
          {
            war(DTR("AMC Motor %d - ERROR"), i);
            cnt_war++;
          }
        }

        if(cnt_war > 0)
          setEntityState(IMC::EntityState::ESTA_ERROR, Utils::String::str(DTR("AMC Motor ERROR")));
        else if(cnt_war == 0)
        	war("ALL AMC MOTOR STATE OK");
      }

      void
      checkAllMotor(uint8_t id_motor)
      {
        uint8_t checkEnd = 0x00;
        readParameterAMC(id_motor, ALL);
        while(checkEnd != '*' && !stopping())
        {
          if (m_poll.poll(0.5))
            checkEnd = checkSerialPort();
        }
        if (m_poll.poll(0.5))
          checkEnd = checkSerialPort();

        dispatchRpm(id_motor, (int)m_parse->m_motor.rpm[id_motor]);
        usleep(c_sleep_time);
        dispatchTmp(id_motor, (int)m_parse->m_motor.tmp[id_motor]);
        usleep(c_sleep_time);
        dispatchPwr(id_motor, m_parse->m_motor.volt[id_motor], m_parse->m_motor.current[id_motor]);
        usleep(c_sleep_time);
        m_uart->flush();
      }

      void
      checkRpmMotor(uint8_t id_motor)
      {
        readParameterAMC(id_motor, RPM);
        uint8_t checkEnd = 0x00;
        while(checkEnd != '*' && !stopping())
        {
          if (m_poll.poll(0.5))
            checkEnd = checkSerialPort();
        }
        if (m_poll.poll(0.5))
          checkEnd = checkSerialPort();

        // Dispatch rpm motors.
        dispatchRpm(id_motor, (int)m_parse->m_motor.rpm[id_motor]);
        usleep(c_sleep_time);
        m_uart->flush();
      }

      void
      checkTmpMotor(uint8_t id_motor)
      {
        readParameterAMC(id_motor, TEMPERATURE);
        uint8_t checkEnd = 0x00;
        while(checkEnd != '*' && !stopping())
        {
          if (m_poll.poll(0.5))
            checkEnd = checkSerialPort();
        }
        if (m_poll.poll(0.5))
          checkEnd = checkSerialPort();

        // Dispatch tmp motors.
        dispatchTmp(id_motor, (int)m_parse->m_motor.tmp[id_motor]);
        usleep(c_sleep_time);
        m_uart->flush();
      }

      void
      checkPwrMotor( uint8_t id_motor)
      {
        readParameterAMC(id_motor, PWR);
        uint8_t checkEnd = 0x00;
        while(checkEnd != '*' && !stopping())
        {
          if (m_poll.poll(0.5))
            checkEnd = checkSerialPort();
        }
        if (m_poll.poll(0.5))
          checkEnd = checkSerialPort();

        // Dispatch pwr motors.
        dispatchPwr(id_motor, m_parse->m_motor.volt[id_motor], m_parse->m_motor.current[id_motor]);
        usleep(c_sleep_time);
        m_uart->flush();
      }

      void
      stopAllMotor(void)
      {
        setRPM(0, 0);
        usleep(c_sleep_time);
        setRPM(1, 0);
        usleep(c_sleep_time);
        setRPM(2, 0);
        usleep(c_sleep_time);
        setRPM(3, 0);
        usleep(c_sleep_time);
      }

      void
      readParameterAMC(int motor, AmcMessages _func_name)
      {
        //Algorithms::CRC8 crc(c_poly);
        int t = 0;
        if(_func_name == RPM)
        {
          memset(&m_msg, '\0', sizeof(m_msg));
          sprintf(m_msg, "@R,%d,rpm,*", motor);
          //m_csum[0] = crc.putArray((unsigned char *)m_msg, strlen(m_msg) - 1);
          m_csum[0] = m_parse->CRC8((unsigned char *)m_msg);
          t = m_uart->write(m_msg, strlen(m_msg));
          m_uart->write(m_csum, 1);
          t++;
        }
        else if(_func_name == TEMPERATURE)
        {
          memset(&m_msg, '\0', sizeof(m_msg));
          sprintf(m_msg, "@R,%d,tmp,*", motor);
          //m_csum[0] = crc.putArray((unsigned char *)m_msg, strlen(m_msg) - 1);
          m_csum[0] = m_parse->CRC8((unsigned char *)m_msg);
          t = m_uart->write(m_msg, strlen(m_msg));
          m_uart->write(m_csum, 1);
          t++;
        }
        else if(_func_name == PWR)
        {
          memset(&m_msg, '\0', sizeof(m_msg));
          sprintf(m_msg, "@R,%d,pwr,*", motor);
          //m_csum[0] = crc.putArray((unsigned char *)m_msg, strlen(m_msg) - 1);
          m_csum[0] = m_parse->CRC8((unsigned char *)m_msg);
          t = m_uart->write(m_msg, strlen(m_msg));
          m_uart->write(m_csum, 1);
          t++;
        }
        else if(_func_name == STATE)
        {
          memset(&m_msg, '\0', sizeof(m_msg));
          sprintf(m_msg, "@R,%d,sta,*", motor);
          //m_csum[0] = crc.putArray((unsigned char *)m_msg, strlen(m_msg) - 1);
          m_csum[0] = m_parse->CRC8((unsigned char *)m_msg);
          t = m_uart->write(m_msg, strlen(m_msg));
          m_uart->write(m_csum, 1);
          t++;
        }
        else if(_func_name == ALL)
        {
          //err("AQUI ALL");
          memset(&m_msg, '\0', sizeof(m_msg));
          sprintf(m_msg, "@R,%d,all,*", motor);
          //m_csum[0] = crc.putArray((unsigned char *)m_msg, strlen(m_msg) - 1);
          m_csum[0] = m_parse->CRC8((unsigned char *)m_msg);
          t = m_uart->write(m_msg, strlen(m_msg));
          m_uart->write(m_csum, 1);
          t++;
        }
        usleep(c_sleep_time);
        //war("SEND: %s%c   SIZE: %d", m_msg, m_csum[0], t + 1);
      }

      void
      dispatchRpm(int _id, int _rpm)
      {
        //war("ID: %d  RPM: %d", _id, (int)_rpm);
        //printf("ID: %d  RPM: %d  ", _id, (int)_rpm);
        if(_id >= 0 && _id < c_max_motors)
        {
          m_rpm_val->setSourceEntity(resolveEntity(m_args.motor_elabels[_id]));
          m_rpm_val->value = _rpm;
          dispatch(m_rpm_val);
        }
      }

      void
      dispatchTmp(int _id, float _tmp)
      {
        //war("ID: %d  Temperature: %f", _id, _tmp);
        //printf("Temperature: %f  ", _tmp);
        if(_id >= 0 && _id < c_max_motors)
        {
          m_tmp_val->setSourceEntity(resolveEntity(m_args.motor_elabels[_id]));
          m_tmp_val->value = _tmp;
          dispatch(m_tmp_val);
        }
      }

      void
      dispatchPwr(int _id, float _volt, float _amp)
      {
        //war("ID: %d  Volt: %f Current: %f", _id, _volt, _amp);
        //printf("Volt: %f Current: %f\n", _volt, _amp);
        if(_id >= 0 && _id < c_max_motors)
        {
          m_volt_val->setSourceEntity(resolveEntity(m_args.motor_elabels[_id]));
          m_volt_val->value = _volt;
          dispatch(m_volt_val);
          m_amp_val->setSourceEntity(resolveEntity(m_args.motor_elabels[_id]));
          m_amp_val->value = _amp;
          dispatch(m_amp_val);
        }
      }

      //! Main loop.
      void
      task(void)
      {      
				setRPM(0, motorId0);
		    setRPM(1, -motorId0);
		    setRPM(2, motorId1);
		    setRPM(3, -motorId1);
        
        //wait for update data in firmware motor
        usleep(c_sleep_time * 5);
		    
        for(uint8_t i = 0; i <= 3; i++)
          checkAllMotor( i );

      }
    };
  }
}

DUNE_TASK
