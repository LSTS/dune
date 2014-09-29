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
// Author: Tiago Rodrigues                                                  *
//***************************************************************************

// DUNE headers.
#include <DUNE/DUNE.hpp>


namespace Sensors
{
  //! Device driver for the AML OEM MetrecX
  //!
  //!
  //! Metrec•X is an externally-powered, multi-parameter
  //! instrument that allows you to change the
  //! instrument’s sensor load, in the field and on-demand.
  //! and log data to its internal memory simultaneously.
  //!
  //! This device enables to change sensors
  //! like plug and play. It has five digital ports
  //! and two analog ports. The digital ports are
  //! configured automatically, just need to reboot
  //! dune. It is possible to connect an expander
  //! (more two analog ports) to an analog port.
  //! Therefore it is assumed a maximum of four
  //! analog ports active, that are configurable
  //! in the configurable file metrecx.ini.
  //!
  //! The sensor output is made by the following order:
  //! 1 - Digital Sensors; 2 - Analog Sensors;
  //! 3 - Calculation Channels;
  //! The output is only composed by active channels,
  //! and the output order is incremented from channel 1.
  //!
  //! @author Tiago Rodrigues

  namespace MetrecX
  {
    // using DUNE_NAMESPACES;
    using DUNE_NAMESPACES;

    struct Arguments
    {
      //! Serial port device.
      std::string uart_dev;
      //! Serial port baud rate.
      unsigned uart_baud;
      //! Input timeout.
      double input_timeout;
      //! Analog channels Label
      std::vector<std::string> label;
    };

    struct Sensor
    {
      //! Sensor name
      char name[20];
      //! Sensor channel
      int channel;
      //!Sensor value
      float value;
    };

    enum MaxTotals
    {
      MT_DIG = 5,
      MT_ANALOG = 4,
      MT_CALCULATION_CHANNEL = 3,
      MT_SHIFT = 1,
      MT_MAX = MT_DIG + MT_ANALOG + MT_CALCULATION_CHANNEL
    };

    //! Template to detect digital sensors
    static const char* c_dig_templates[] = {"SV.X",
                                            "C.X",
                                            "P.X",
                                            "T.X",
                                            "Tu.X"};

    //! Template for analog sensors
    static const char* c_analog_templates[] = {"Temperature",
                                               "Pressure"};

    //! Template for calculation channels
    static const char* c_calculation_channel_templates[] = {"SV",
                                                            "Salinity",
                                                            "Density"};

    //! Labels for Entity reservation for digital sensors
    static const char* c_dig_entities[] = {"Water Quality Sensor dig 1",
                                           "Water Quality Sensor dig 2",
                                           "Water Quality Sensor dig 3",
                                           "Water Quality Sensor dig 4",
                                           "Water Quality Sensor dig 5"};

    //! Labels for Entity reservation for analog sensors
    static const char* c_analog_entities[] = {"Water Quality Sensor analog 1",
                                              "Water Quality Sensor analog 2",
                                              "Water Quality Sensor analog 3",
                                              "Water Quality Sensor analog 4"};

    //! Labels for Entity reservation for calculation channels
    static const char* c_calculation_channel_entities[] = {"Water Quality calculation channel 1",
                                                           "Water Quality calculation channel 2",
                                                           "Water Quality calculation channel 3"};

    struct Task: public DUNE::Tasks::Task
    {
      //! Serial port handle.
      SerialPort* m_uart;
      //! Task arguments
      Arguments m_args;
      //! Sensor structure
      Sensor m_sconfig[MT_MAX];
      //! Task Watchdog
      Counter<double> m_wdog;
      //! Function ConfigDetect Watchdog
      Counter<double> m_wdogdetect;
      // DigSensorflags [] = {SV.X flag, C.X flag, P.X flag, T.X flag, Tu.X flag};
      bool dig_sensor_flags[MT_DIG];
      //! calculation channels can be turned on
      //! CalculationChannels [] =  {Salinity & Density flag, SV flag};
      bool calculation_channels[MT_CALCULATION_CHANNEL];
      //! Array for Entity ids of Analog Sensors
      //! 4 is the maximum number of analog
      //! sensors allowed
      int analog_ids[MT_ANALOG];
      //! Array for Entity ids of Digital Sensors
      //! Only 5 digital sensors are allowed
      int dig_ids[MT_DIG];
      //! Array for Entity ids of calculation
      //! channels
      int calculation_channel_ids[MT_CALCULATION_CHANNEL];
      //! dBar to m coefficient
      float dbar2m_coef;
      //! Temperature message.
      IMC::Temperature m_temp;
      //! Pressure message.
      IMC::Pressure m_press;
      //! Depth message
      IMC::Depth m_depth;
      //! Sound speed message.
      IMC::SoundSpeed m_sspeed;
      //! Conductivity message
      IMC::Conductivity m_conduct;
      //! Turbidity message
      // IMC::Turbidity m_turb;
      //! WaterDensity message
      IMC::WaterDensity m_wdens;
      //! Salinity message
      IMC::Salinity m_sal;

      //! Constructor.
      //! @param[in] name task name.
      //! @param[in] ctx context.
      Task(const std::string& name, Tasks::Context& ctx):
        DUNE::Tasks::Task(name, ctx),
        m_uart(NULL)
      {
        param("Serial Port - Device", m_args.uart_dev)
        .defaultValue("")
        .description("Serial port device used to communicate with the sensor");

        param("Serial Port - Baud Rate", m_args.uart_baud)
        .defaultValue("38400")
        .description("Serial port baud rate");

        param("Input Timeout", m_args.input_timeout)
        .defaultValue("4.0")
        .minimumValue("1.0")
        .units(Units::Second)
        .description("Amount of seconds to wait for data before reporting an error");

        param("Analog Channels Label", m_args.label)
        .description("Analog Channels Label indicating sensor type");

        for (int i = 0; i < MT_DIG; i++)
        {
          dig_sensor_flags[i] = false;

          dig_ids[i] = -1;

          if (i < MT_ANALOG)
            analog_ids[i] = -1;

          if (i < MT_CALCULATION_CHANNEL)
          {
            calculation_channel_ids[i] = -1;
            calculation_channels[i] = false;
          }
        }

        dbar2m_coef = 1.019716;
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
        for (int i = 0; i < MT_DIG;  i++)
        {
          try
          {
            dig_ids[i] = reserveEntity(c_dig_entities[i]);
          }
          catch (...)
          {
            dig_ids[i] = -10;
          }
        }

        for (int j = 0; j < MT_ANALOG;  j++)
        {
          try
          {
            analog_ids[j] = reserveEntity(c_analog_entities[j]);
          }
          catch (...)
          {
            analog_ids[j] = -10;
          }
        }

        for (int i = 0; i < MT_CALCULATION_CHANNEL;  i++)
        {
          try
          {
            calculation_channel_ids[i] = reserveEntity(c_calculation_channel_entities[i]);
          }
          catch (...)
          {
            calculation_channel_ids[i] = -10;
          }
        }
      }

      //! Resolve entity names.
      void
      onEntityResolution(void)
      {
      }

      //! Acquire resources.
      void
      onResourceAcquisition(void)
      {
        setEntityState(IMC::EntityState::ESTA_BOOT, Status::CODE_INIT);
        m_uart = new SerialPort(m_args.uart_dev, m_args.uart_baud);
        m_uart->setCanonicalInput(true);
        m_uart->flush();
      }

      //! Release resources.
      void
      onResourceRelease(void)
      {
        Memory::clear(m_uart);
      }

      void
      getDigName(char bfr[], int& i, int& k)
      {
        for (int j = 0; j < MT_DIG; j++)
        {
          if (strstr( bfr, c_dig_templates[j]) != NULL)
          {
            dig_sensor_flags[j] = true;
            strcpy(m_sconfig[i].name, c_dig_templates[j]);
            m_sconfig[i].channel = bfr[0] - '0';
            i++;
          }
        }
        if (strstr( bfr, "empty") != NULL)
          k++;
      }

      void
      sensorConfigDetect(int& i, int& k)
      {
        char bfr[255];
        int j;
        std::string buffer;

        j = 0;

        m_wdogdetect.setTop(10);
        while (0 != std::strcmp( bfr, "Detection complete\r\n"))
        {
          // To task don't stuck here
          if (m_wdogdetect.overflow())
          {
            setEntityState(IMC::EntityState::ESTA_ERROR, Status::CODE_COM_ERROR);
            throw RestartNeeded(DTR(Status::getString(CODE_COM_ERROR)), 5);
          }

          if (!Poll::poll(*m_uart, 1.0))
            continue;

          // Check sensor configuration
          m_uart->readString(bfr, sizeof(bfr));

          // Avoid to send garbage to functions
          if (0 != strcmp(bfr, "Detecting Sensors\r\n") && 0 != strcmp(bfr, "Detection complete\r\n"))
          {
            // Function to detect analog sensors configuration
            //if(( i + k) >= 5)
            //getAnalogState(bfr, flag);

            // Function to detect digital sensors configuration
            if ((i+k) < 5)
              getDigName(bfr, i, k);
          }
        }
        m_wdogdetect.reset();

        // Passing Sensor names to the structure
        for (j = 0; j < (int)m_args.label.size(); j++)
        {
          strcpy(m_sconfig[i+j].name, m_args.label[j].c_str());
          m_sconfig[i+j].channel = j + MT_DIG + MT_SHIFT;//6;
        }

        // Indicating total number of analog and digital channels
        // To alocate Density, Salinity and SV calculation at the end
        i = i + m_args.label.size();

        // Check which digital sensores are active and set flags to turn
        // on the Density, Salinity or Sound Velocity calculation
        if ((dig_sensor_flags[0] || dig_sensor_flags[1]) && dig_sensor_flags[2] && dig_sensor_flags[3])
          calculation_channels[0] = true;
        else
          calculation_channels[0] = false;

        if (dig_sensor_flags[1] && dig_sensor_flags[2] && dig_sensor_flags[3])
          calculation_channels[1] = true;
        else
          calculation_channels[1] = false;
      }

      bool
      sendCommand(const char* cmd, const char* reply)
      {
        char bfr[128];

        m_uart->writeString(cmd);

        if (Poll::poll(*m_uart, 1.0))
        {
          m_uart->readString(bfr, sizeof(bfr));
          if (std::strcmp(bfr, reply) == 0)
            return true;
        }

        return false;
      }

      void
      onResourceInitialization(void)
      {
        int i;
        int k;

        i = 0;
        k = 0;

        m_uart->writeString("\r");
        Delay::wait(1.0);
        m_uart->flush();

        if (!sendCommand("\r", "\r\n"))
          throw RestartNeeded(DTR("failed to enter command mode"), 5);

        if (!sendCommand("DETECT\r", ">DETECT\r\n"))
          throw RestartNeeded(DTR("failed to detect sensor configuration"), 5);
        else
          sensorConfigDetect(i, k);

        if (calculation_channels[0])
        {
          if (!sendCommand("SET SCAN DENSITY\r", ">SET SCAN DENSITY\r\n"))
            throw RestartNeeded(DTR("failed to set density calculation"), 5);

          strcpy(m_sconfig[i].name, "Density");
          m_sconfig[i].channel = i + k + 1;

          if (!sendCommand("SET SCAN SALINITY\r", ">SET SCAN SALINITY\r\n"))
            throw RestartNeeded(DTR("failed to set salinity calculation"), 5);

          strcpy(m_sconfig[i + 1].name, "Salinity");
          m_sconfig[i + 1].channel = i + k + 2;
        }
        else if (!calculation_channels[0])
        {
          if (!sendCommand("SET SCAN NODENSITY\r", ">SET SCAN NODENSITY\r\n"))
            throw RestartNeeded(DTR("failed to disable density calculation"), 5);

          if (!sendCommand("SET SCAN NOSALINITY\r", ">SET SCAN NOSALINITY\r\n"))
            throw RestartNeeded(DTR("failed to disable salinity calculation"), 5);
        }

        if (calculation_channels[1])
        {
          if (!sendCommand("SET SCAN SV\r", ">SET SCAN SV\r\n"))
            throw RestartNeeded(DTR("failed to set sv calculation"), 5);

          strcpy(m_sconfig[i + 2].name,"SV");
          m_sconfig[i + 2].channel = i + k + 3;
        }
        else if (!calculation_channels[1])
        {
          if (!sendCommand("SET SCAN NOSV\r", ">SET SCAN NOSV\r\n"))
            throw RestartNeeded(DTR("failed to disable sv calculation"), 5);
        }

        if (!sendCommand("SET S 1 s\r", ">SET S 1 s\r\n"))
          throw RestartNeeded(DTR("failed to set sampling rate"), 5);

        if (!sendCommand("MONITOR\r", ">MONITOR\r\n"))
          throw RestartNeeded(DTR("failed to enter monitor mode"), 5);

        m_wdog.setTop(m_args.input_timeout);
      }

      //! Main loop.
      void
      onMain(void)
      {
        char bfr[255];
        char *ptr;
        int n_data;
        int n;
        int i;

        while (!stopping())
        {
          consumeMessages();

          if (m_wdog.overflow())
          {
            setEntityState(IMC::EntityState::ESTA_ERROR, Status::CODE_COM_ERROR);
            throw RestartNeeded(DTR(Status::getString(CODE_COM_ERROR)), 5);
          }

          if (!Poll::poll(*m_uart, 1.0))
            continue;

          size_t rv = m_uart->readString(bfr, sizeof(bfr));
          ptr = bfr;
          n_data = 0;
          n = 0;
          // Extract reveived values to structure
          while ( 1 == sscanf(ptr, "%f%n", &m_sconfig[n_data].value,&n) )
          {
            n_data++;
            ptr +=n;
          }

          // Dispatch of received values
          for (i = 0; i < n_data; i++)
          {
            // Sound Velocity
            if (0 == strcmp(m_sconfig[i].name, c_dig_templates[0]) || 0 == strcmp(m_sconfig[i].name, c_calculation_channel_templates[0]))
            {
              m_sspeed.value = m_sconfig[i].value;

              if (m_sconfig[i].channel <= MT_DIG)
                m_sspeed.setSourceEntity(dig_ids[ m_sconfig[i].channel - MT_SHIFT ]);

              if (m_sconfig[i].channel > (MT_DIG + (int)m_args.label.size()))
                m_sspeed.setSourceEntity(calculation_channel_ids[ m_sconfig[i].channel - MT_DIG - MT_SHIFT - (int)m_args.label.size() ]);

              dispatch(m_sspeed);
            }

            // Conductivity
            if (0 == strcmp(m_sconfig[i].name, c_dig_templates[1]))
            {
              m_conduct.value = m_sconfig[i].value;
              m_conduct.setSourceEntity(dig_ids[ m_sconfig[i].channel - MT_SHIFT ]);
              dispatch(m_conduct);
            }

            // Temperature
            if (0 == strcmp(m_sconfig[i].name, c_dig_templates[3]) || 0 == strcmp(m_sconfig[i].name, c_analog_templates[0]))
            {
              m_temp.value = m_sconfig[i].value;

              if (m_sconfig[i].channel <= MT_DIG)
                m_temp.setSourceEntity(dig_ids[ m_sconfig[i].channel - MT_SHIFT ]);

              if (m_sconfig[i].channel > MT_DIG)
                m_temp.setSourceEntity(analog_ids[ m_sconfig[i].channel - MT_DIG - MT_SHIFT]);

              dispatch(m_temp);
            }

            // Pressure
            if (0 == strcmp(m_sconfig[i].name, c_dig_templates[2]) || 0 == strcmp(m_sconfig[i].name, c_analog_templates[1]))
            {
              m_press.value = m_sconfig[i].value;

              if (m_sconfig[i].channel <= MT_DIG)
                m_press.setSourceEntity(dig_ids[ m_sconfig[i].channel - MT_SHIFT ]);

              if (m_sconfig[i].channel > MT_DIG)
                m_press.setSourceEntity(analog_ids[ m_sconfig[i].channel - MT_DIG -  MT_SHIFT ]);

              dispatch(m_press);
            }

            // Pressure/Depth
            if (0 == strcmp(m_sconfig[i].name, c_dig_templates[2]) || 0 == strcmp(m_sconfig[i].name, c_analog_templates[1]))
            {
              m_depth.value = m_sconfig[i].value * dbar2m_coef;

              if (m_sconfig[i].channel <= MT_DIG )
                m_depth.setSourceEntity(dig_ids[ m_sconfig[i].channel - MT_SHIFT ]);

              if (m_sconfig[i].channel > MT_DIG)
                m_depth.setSourceEntity(analog_ids[ m_sconfig[i].channel - MT_DIG - MT_SHIFT ]);

              dispatch(m_depth);
            }

            // Salinity
            if (0 == strcmp(m_sconfig[i].name, c_calculation_channel_templates[1]))
            {
              m_sal.value = m_sconfig[i].value;
              m_sal.setSourceEntity(calculation_channel_ids[ m_sconfig[i].channel - MT_DIG - MT_SHIFT - (int)m_args.label.size() ]);
              dispatch(m_sal);
            }
            // Water Density
            if (0 == strcmp(m_sconfig[i].name, c_calculation_channel_templates[2]))
            {
              m_wdens.setSourceEntity(calculation_channel_ids[m_sconfig[i].channel - MT_DIG - MT_SHIFT - (int)m_args.label.size()]);
              m_wdens.value = m_sconfig[i].value;
              dispatch(m_wdens);
            }
          }

          if (rv == 0)
            throw RestartNeeded(DTR("I/O error"), 5);

          setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_ACTIVE);

          m_wdog.reset();

        }
      }
    };
  }
}

DUNE_TASK
