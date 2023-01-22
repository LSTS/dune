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
// Author: Pedro Gonçalves                                                   *
//***************************************************************************

// ISO C++ 98 headers.
#include <string>
#include <cstring>

// DUNE headers.
#include <DUNE/DUNE.hpp>

// Local Headers.
#include <Sensors/SADC/DriverSADC.hpp>

namespace Sensors
{
  namespace SADC
  {
    using DUNE_NAMESPACES;

    static const unsigned int c_max_adc = 4;
    static const unsigned int c_max_buffer = 32;
    static const float c_adc_resolution = 32768.0f;
    static const float c_timeout_connection_sadc = 5.0f;

    struct Arguments
    {
      //! Serial port device.
      std::string uart_dev;
      //! Serial port baud rate.
      unsigned uart_baud;
      //! Serial Port timeOut for reading
      float timeout_uart;
      //! Adc state
      bool adc_state[c_max_adc];
      //! Minimum Value for auto-switch gain
      float min_value[c_max_adc];
      //! Maximum Value for auto-switch gain
      float max_value[c_max_adc];
      //! Adc fixed gain
      bool adc_fixed_gain[c_max_adc];
      //! Adc fixed gain value
      int adc_fixed_gain_value[c_max_adc];
      //! Sample Rate of acquisition data
      int sample_rate;
      //! Number of sample before switch auto-gain
      int number_sample_switch;
      // ADC entity labels.
      std::string adc_elabels[c_max_adc];
      //! Maximum Value of input in adc channel
      float adc_conversion_factor;
    };

    struct Task: public DUNE::Tasks::Task
    {
      //! Rpm message
      IMC::SadcReadings m_sadc;
      //! Voltage message
      IMC::Voltage m_volt[c_max_adc];
      //! Task arguments.
      Arguments m_args;
      //! Serial port device.
      SerialPort* m_uart;
      //! I/O Multiplexer.
      Poll m_poll;
      //! Read timestamp.
      double m_tstamp;
      //! Parser for message
      DriverSADC* m_driver;
      //! Scratch buffer.
      uint8_t m_buffer[c_max_buffer];
      //! Flag to check correct configuration of SADC
      bool m_is_correct_conf;
      //! Value of adc in voltage
      float m_voltage_value;

      //! Constructor.
      //! @param[in] name task name.
      //! @param[in] ctx context.
      Task(const std::string& name, Tasks::Context& ctx):
        DUNE::Tasks::Task(name, ctx),
        m_uart(NULL),
        m_tstamp(0),
        m_driver(NULL)
      {
        param("Serial Port - Device", m_args.uart_dev)
        .visibility(Tasks::Parameter::VISIBILITY_DEVELOPER)
        .defaultValue("")
        .description("Serial port device used to communicate with the sensor");

        param("Serial Port - Baud Rate", m_args.uart_baud)
        .visibility(Tasks::Parameter::VISIBILITY_DEVELOPER)
        .defaultValue("57600")
        .description("Serial port baud rate");

        param("Serial Port - TimeOut", m_args.timeout_uart)
        .visibility(Tasks::Parameter::VISIBILITY_DEVELOPER)
        .defaultValue("2.0")
        .minimumValue("1.0")
        .maximumValue("5.0")
        .description("Serial Port timeOut for reading.");

        for(unsigned i = 1; i < c_max_adc + 1; ++i)
        {
          std::string option = String::str("ADC %u - Is Active", i);
          param(option, m_args.adc_state[i-1])
          .visibility(Tasks::Parameter::VISIBILITY_DEVELOPER)
          .defaultValue("true")
          .description("ADC channel State");

          option = String::str("ADC %u - Minimum Value", i);
          param(option, m_args.min_value[i-1])
          .visibility(Tasks::Parameter::VISIBILITY_DEVELOPER)
          .minimumValue("0")
          .maximumValue("5.0")
          .defaultValue("0.3")
          .description("Minimum Value (in Volt) for auto-switch gain");

          option = String::str("ADC %u - Maximum Value", i);
          param(option, m_args.max_value[i-1])
          .visibility(Tasks::Parameter::VISIBILITY_DEVELOPER)
          .minimumValue("0")
          .maximumValue("5")
          .defaultValue("4.7")
          .description("Maximum Value (in Volt) for auto-switch gain");

          option = String::str("ADC %u - Fixed Gain", i);
          param(option, m_args.adc_fixed_gain[i-1])
          .visibility(Tasks::Parameter::VISIBILITY_DEVELOPER)
          .defaultValue("false")
          .description("Fix Gain in Channel");

          option = String::str("ADC %u - Fixed Gain Value", i);
          param(option, m_args.adc_fixed_gain_value[i-1])
          .visibility(Tasks::Parameter::VISIBILITY_DEVELOPER)
          .defaultValue("1")
          .description("Fix Gain Value in Channel (x1, x10, x100)");

          option = String::str("ADC %u - Entity Label", i);
          param(option, m_args.adc_elabels[i-1]);
        }

        param("Sample Rate", m_args.sample_rate)
        .visibility(Tasks::Parameter::VISIBILITY_DEVELOPER)
        .defaultValue("1")
        .minimumValue("1")
        .maximumValue("5")
        .description("Sample Rate (1 a 5 Hz)");

        param("Samples to Switch Gain", m_args.number_sample_switch)
        .visibility(Tasks::Parameter::VISIBILITY_DEVELOPER)
        .defaultValue("5")
        .minimumValue("1")
        .maximumValue("100")
        .description("Sample Rate Before Switch (1 a 100)");

        param("ADC Conversion Factor", m_args.adc_conversion_factor)
        .visibility(Tasks::Parameter::VISIBILITY_DEVELOPER)
        .defaultValue("6.14")
        .description("ADC conversion factor.");

      }

      //! Reserve entity identifiers.
      void
      onEntityReservation(void)
      {
        unsigned eid = 0;

        for (unsigned i = 0; i < c_max_adc; ++i)
        {
          if (!m_args.adc_state[i])
            continue;

          if (m_args.adc_elabels[i].empty())
            continue;

          try
          {
            eid = resolveEntity(m_args.adc_elabels[i]);
          }
          catch (Entities::EntityDataBase::NonexistentLabel& e)
          {
            (void)e;
            eid = reserveEntity(m_args.adc_elabels[i]);
          }

          m_volt[i].setSourceEntity(eid);
        }
      }

      //! Acquire resources.
      void
      onResourceAcquisition(void)
      {
        try
        {
          m_uart = new SerialPort(m_args.uart_dev, m_args.uart_baud);
        }
        catch (std::runtime_error& e)
        {
          throw RestartNeeded(e.what(), 30);
        }
      }

      //! Initialize resources.
      void
      onResourceInitialization(void)
      {
        setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_ACTIVATING);
        m_is_correct_conf = true;
        m_driver = new DriverSADC();
        m_poll.add(*m_uart);
        if(check_connection_sadc(c_timeout_connection_sadc))
        {
          config_SADC();
          Delay::waitMsec(1000);
          setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_IDLE);
        }
        else
        {
          throw RestartNeeded("Cannot connect to board", 5);
        }
      }

      //! Release resources.
      void
      onResourceRelease(void)
      {
        if (m_uart != NULL)
        {
          m_uart->write(m_driver->disable_output(), strlen(m_driver->enable_output()));

          m_poll.remove(*m_uart);
          delete m_uart;
          m_uart = NULL;

          Memory::clear(m_driver);
        }
      }

      //! Config board SADC
      void
      config_SADC(void)
      {
        m_uart->write(m_driver->disable_output(), strlen(m_driver->enable_output()));
        process_feedback();

        for(uint8_t t = 1; t <= c_max_adc; t++)
        {
          if(m_args.adc_state[t-1] == true)
          {
            m_uart->write(m_driver->set_min_change_gain(t, m_args.min_value[t-1]), strlen(m_driver->set_min_change_gain(t, m_args.min_value[t-1])));
            process_feedback();
            m_uart->write(m_driver->set_max_change_gain(t, m_args.max_value[t-1]), strlen(m_driver->set_max_change_gain(t, m_args.max_value[t-1])));
            process_feedback();
            m_uart->write(m_driver->enable_channel(t), strlen(m_driver->enable_channel(t)));
            process_feedback();
            if(m_args.adc_fixed_gain[t-1])
            {
              m_uart->write(m_driver->fix_gain(t, m_args.adc_fixed_gain_value[t-1]), strlen(m_driver->fix_gain(t, m_args.adc_fixed_gain_value[t-1])));
              process_feedback();
            }
            else
            {
              m_uart->write(m_driver->enable_auto_gain(t), strlen(m_driver->enable_auto_gain(t)));
              process_feedback();
            }
          }
          else
          {
            m_uart->write(m_driver->disable_channel(t), strlen(m_driver->disable_channel(t)));
            process_feedback();
          }
        }

        m_uart->write(m_driver->set_sample_ps(m_args.sample_rate), strlen(m_driver->set_sample_ps(m_args.sample_rate)));
        process_feedback();
        m_uart->write(m_driver->set_number_sample_sw(m_args.number_sample_switch), strlen(m_driver->set_number_sample_sw(m_args.number_sample_switch)));
        process_feedback();

        if(m_is_correct_conf)
        {
          inf(DTR("Requesting SADC readings"));
          m_uart->write(m_driver->enable_output(), strlen(m_driver->enable_output()));
          process_feedback();
        }
        else
        {
          err(DTR("Board SADC not operational"));
        }
      }

      //! Check connection to sadc board
      bool
      check_connection_sadc(float c_timeout)
      {
        bool is_connect = false;
        for(int i = 0; i < (int)(c_timeout/0.2); i++)
        {
          m_uart->write(m_driver->disable_output(), strlen(m_driver->enable_output()));
          is_connect = processInput(0.2, false);
          if(is_connect)
            break;
        }

        return is_connect;
      }

      //! Check feadback of commands
      void
      process_feedback(void)
      {
        if(!processInput(m_args.timeout_uart, false))
          m_is_correct_conf = false;
      }

      //! Read data send by SADC board.
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
            setEntityState(IMC::EntityState::ESTA_ERROR, Status::CODE_COM_ERROR);
            return false;
          }

          if (rv <= 0)
          {
            setEntityState(IMC::EntityState::ESTA_ERROR, Status::CODE_COM_ERROR);
            throw RestartNeeded(DTR("unknown read error"), 30);
          }
          else
          {
            for (uint8_t i = 0; i < rv; ++i)
            {
              if (!m_driver->parse(m_buffer[i]))
                continue;

              return true;
            }
          }
        }

        return false;
      }

      bool
      processInput(double timeout, bool isData)
      {
        bool result = false;
        double deadline = Clock::get() + timeout;

        while (Clock::get() <= deadline)
        {
          if (m_poll.poll(0.2))
          {
            if (checkSerialPort())
            {
              if(isData)
              {
                if(m_driver->translate())
                {
                  debug("Channel %d -> %ld  Gain: %d", m_driver->m_sadc.channel, m_driver->m_sadc.value, m_driver->m_sadc.gain);
                  m_sadc.setTimeStamp(m_tstamp);
                  m_sadc.setDestination(getSystemId());
                  m_sadc.channel = m_driver->m_sadc.channel;
                  m_sadc.value = m_driver->m_sadc.value;
                  switch(m_driver->m_sadc.gain)
                  {
                    case 1:
                      m_sadc.gain = IMC::SadcReadings::GAIN_X1;
                      m_voltage_value = (m_args.adc_conversion_factor * m_sadc.value)/c_adc_resolution;
                      break;

                    case 10:
                      m_sadc.gain = IMC::SadcReadings::GAIN_X10;
                      m_voltage_value = ((m_args.adc_conversion_factor * m_sadc.value)/c_adc_resolution)/10.0;
                      break;

                    case 100:
                      m_sadc.gain = IMC::SadcReadings::GAIN_X100;
                      m_voltage_value = ((m_args.adc_conversion_factor * m_sadc.value)/c_adc_resolution)/100.0;
                      break;

                    default:
                      break;
                  }
                  dispatch(m_sadc, DF_KEEP_TIME);
                  m_volt[m_driver->m_sadc.channel - 1].setTimeStamp(m_tstamp);
                  m_volt[m_driver->m_sadc.channel - 1].setDestination(getSystemId());
                  m_volt[m_driver->m_sadc.channel - 1].value = m_voltage_value;
                  dispatch(m_volt[m_driver->m_sadc.channel - 1], DF_KEEP_TIME);
                  result = true;
                  break;
                }
              }
              else
              {
                std::string feedback_text = m_driver->translate_feadback();
                if(feedback_text.compare("OK") == 0)
                {
                  debug("%s",feedback_text.c_str());
                  result = true;
                  break;
                }
                else
                {
                  err("%s",feedback_text.c_str());
                  result = false;
                  break;
                }
              }
            }
          }
        }

        return result;
      }

      bool
      checkDataSADC(void)
      {
        bool checkEnd = false;

        checkEnd = processInput(m_args.timeout_uart, true);

        if(!checkEnd)
        {
          if(m_args.adc_state[0] || m_args.adc_state[1] || m_args.adc_state[2] || m_args.adc_state[3])
          {
            err(DTR("no read error received"));
            setEntityState(IMC::EntityState::ESTA_ERROR, Status::CODE_COM_ERROR);
          }
          else
          {
            err(DTR("none adc channel active, mistake config?"));
            setEntityState(IMC::EntityState::ESTA_ERROR, Status::CODE_COM_ERROR);
          }
        }

        m_uart->flush();

        return checkEnd;
      }

      //! Main loop.
      void
      onMain(void)
      {
        while (!stopping())
        {
          if(m_is_correct_conf)
          {
            consumeMessages();

            if(checkDataSADC())
              setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_ACTIVE);
          }
          else
          {
            waitForMessages(1.0);
            setEntityState(IMC::EntityState::ESTA_ERROR, Status::CODE_INTERNAL_ERROR);
          }
        }
      }
    };
  }
}

DUNE_TASK
