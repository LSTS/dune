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
#include <Sensors/DMS/DriverDMS.hpp>

namespace Sensors
{
  namespace DMS
  {
    using DUNE_NAMESPACES;

    static const unsigned int c_max_adc = 16;
    static const unsigned int c_max_buffer = 32;
    static const float c_adc_resolution = 32768.0f;
    static const float c_adc_scalor_factor = 6.144f;
    static const float c_timeout_connection_sadc = 5.0f;

    struct Arguments
    {
      //! Serial port device.
      std::string uart_dev;
      //! Serial port baud rate.
      unsigned uart_baud;
      //! Serial Port timeOut for reading
      float timeout_uart;
      //! ADC entity label
      std::string adc_label;
      //! Number of channels of adc
      int number_adc;
      //! Baseline of channels
      float channel_baseline[c_max_adc];
      //! Scale factor for positive detection
      float baseline_scale;
      //! Number of channels to read/s
      int sample_rate;
    };

    struct Task: public DUNE::Tasks::Task
    {
      //! Voltage message
      IMC::Voltage m_volt[c_max_adc];
      //! DMS Detection message
      IMC::DmsDetection m_dms_detection[c_max_adc];
      //! Task arguments.
      Arguments m_args;
      //! Serial port device.
      SerialPort* m_uart;
      //! I/O Multiplexer.
      Poll m_poll;
      //! Read timestamp.
      double m_tstamp;
      //! Parser for message
      DriverDMS* m_driver;
      //! Scratch buffer.
      uint8_t m_buffer[c_max_buffer];
      //! Flag to check correct configuration of DMS
      bool m_is_correct_conf;
      //! Buffer for DMS readings
      float m_dms_readings[c_max_adc];

      //! Constructor.
      //! @param[in] name task name.
      //! @param[in] ctx context.
      Task(const std::string& name, Tasks::Context& ctx):
        DUNE::Tasks::Task(name, ctx),
        m_uart(NULL),
        m_tstamp(0),
        m_driver(NULL),
        m_is_correct_conf(0)
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

        param("ADC Reads - Entity Label", m_args.adc_label)
        .visibility(Tasks::Parameter::VISIBILITY_DEVELOPER)
        .description("Label for ADC labels.");

        param("ADC Channels", m_args.number_adc)
        .visibility(Tasks::Parameter::VISIBILITY_DEVELOPER)
        .defaultValue("16")
        .minimumValue("1")
        .maximumValue("16")
        .description("Number of Channels of ADC.");

        for(uint8_t i = 1; i <= c_max_adc; i++)
        {
          std::string option = String::str("DMS CH%u Baseline", i);
          param(option, m_args.channel_baseline[i-1])
          .visibility(Tasks::Parameter::VISIBILITY_DEVELOPER)
          .minimumValue("0")
          .maximumValue("4.99")
          .description("Baseline of channel.");
        }

        param("Scale Factor Positive", m_args.baseline_scale)
        .visibility(Tasks::Parameter::VISIBILITY_DEVELOPER)
        .defaultValue("3")
        .minimumValue("1")
        .maximumValue("10")
        .description("Scale Factor for Positive Detection.");

        param("Number Samples per s", m_args.sample_rate)
        .visibility(Tasks::Parameter::VISIBILITY_DEVELOPER)
        .defaultValue("4")
        .minimumValue("1")
        .maximumValue("16")
        .description("Number of channels to read/s.");
      }

      //! Reserve entity identifiers.
      void
      onEntityReservation(void)
      {
        unsigned eid = 0;

        for (unsigned i = 1; i <= c_max_adc; ++i)
        {
          if (m_args.adc_label.empty())
            continue;

          try
          {
            eid = resolveEntity(m_args.adc_label + " CH"+ NumberToString(i));
          }
          catch (Entities::EntityDataBase::NonexistentLabel& e)
          {
            (void)e;
            eid = reserveEntity(m_args.adc_label + " CH"+ NumberToString(i));
          }

          m_volt[i-1].setSourceEntity(eid);
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
          throw RestartNeeded(e.what(), 15);
        }
      }

      //! Initialize resources.
      void
      onResourceInitialization(void)
      {
        setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_ACTIVATING);

        for(uint8_t i = 0; i < c_max_adc; i++)
          m_dms_readings[i] = -1.0;

        m_is_correct_conf = true;
        m_driver = new DriverDMS();
        m_poll.add(*m_uart);
        if(checkConnectionDMS(c_timeout_connection_sadc))
        {
          configDMS();
          Delay::waitMsec(1000);
          setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_IDLE);
        }
        else
        {
          throw RestartNeeded("Cannot connect to board", 10);
        }
      }

      //! Release resources.
      void
      onResourceRelease(void)
      {
        if (m_uart != NULL)
        {
          m_uart->write(m_driver->disable_output(), strlen(m_driver->disable_output()));

          m_poll.remove(*m_uart);
          delete m_uart;
          m_uart = NULL;

          Memory::clear(m_driver);
        }
      }

      //! Config board DMS
      void
      configDMS(void)
      {
        m_uart->write(m_driver->disable_output(), strlen(m_driver->disable_output()));
        processFeedback();
        m_uart->write(m_driver->set_sample_ps(m_args.sample_rate), strlen(m_driver->set_sample_ps(m_args.sample_rate)));
        processFeedback();

        if(m_is_correct_conf)
        {
          inf(DTR("Requesting DMS readings"));
          m_uart->write(m_driver->enable_output(), strlen(m_driver->enable_output()));
          processFeedback();
        }
        else
        {
          err(DTR("Board DMS not operational"));
        }
      }

      //! Check connection to dms board
      bool
      checkConnectionDMS(float c_timeout)
      {
        bool is_connect = false;
        for(int i = 0; i < (int)(c_timeout/0.2); i++)
        {
          m_uart->write(m_driver->disable_output(), strlen(m_driver->disable_output()));
          is_connect = processInput(0.2, false);
          if(is_connect)
            break;
        }
        return is_connect;
      }

      //! Check feadback of commands
      void
      processFeedback(void)
      {
        if(!processInput(m_args.timeout_uart, false))
          m_is_correct_conf = false;
      }

      //! Read data send by DMS board.
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
            throw RestartNeeded(DTR("unknown read error"), 15);
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
          if (m_poll.poll(0.01))
          {
            if (checkSerialPort())
            {
              if(isData)
              {
                if(m_driver->translate())
                {
                  debug("Channel %d -> %ld", m_driver->m_dms.channel, m_driver->m_dms.value);
                  m_volt[m_driver->m_dms.channel - 1].setTimeStamp(m_tstamp);
                  m_volt[m_driver->m_dms.channel - 1].setDestination(getSystemId());
                  m_volt[m_driver->m_dms.channel - 1].value = (m_driver->m_dms.value * c_adc_scalor_factor) / c_adc_resolution;
                  dispatch(m_volt[m_driver->m_dms.channel - 1], DF_KEEP_TIME);
                  processValueOfDMSChannel(m_driver->m_dms.channel, (m_driver->m_dms.value * c_adc_scalor_factor) / c_adc_resolution);
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

      void
      processValueOfDMSChannel(int channel, float value)
      {
        float real_value = value - m_args.channel_baseline[channel-1];
        float valueAdc = real_value - (m_args.baseline_scale * m_args.channel_baseline[channel-1]);
        m_dms_readings[channel-1] = valueAdc;
        debug("DMS Sample - CH%d | R: %0.3f | V: %0.3f | S: %0.3f", channel, real_value, valueAdc, m_args.baseline_scale);

        if(channel == 16)
        {
          m_dms_detection->setTimeStamp(m_tstamp);
          m_dms_detection->setDestination(getSystemId());
          m_dms_detection->ch01 = m_dms_readings[0];
          m_dms_detection->ch02 = m_dms_readings[1];
          m_dms_detection->ch03 = m_dms_readings[2];
          m_dms_detection->ch04 = m_dms_readings[3];
          m_dms_detection->ch05 = m_dms_readings[4];
          m_dms_detection->ch06 = m_dms_readings[5];
          m_dms_detection->ch07 = m_dms_readings[6];
          m_dms_detection->ch08 = m_dms_readings[7];
          m_dms_detection->ch09 = m_dms_readings[8];
          m_dms_detection->ch10 = m_dms_readings[9];
          m_dms_detection->ch11 = m_dms_readings[10];
          m_dms_detection->ch12 = m_dms_readings[11];
          m_dms_detection->ch13 = m_dms_readings[12];
          m_dms_detection->ch14 = m_dms_readings[13];
          m_dms_detection->ch15 = m_dms_readings[14];
          m_dms_detection->ch16 = m_dms_readings[15];
          dispatch(m_dms_detection, DF_KEEP_TIME);
        }
      }

      bool
      checkDataDMS(void)
      {
        bool checkEnd = processInput(m_args.timeout_uart, true);
        m_uart->flush();
        return checkEnd;
      }

      template <typename T>
      std::string NumberToString ( T Number )
      {
        std::stringstream ss;
        ss << Number;
        return ss.str();
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

            if(checkDataDMS())
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
