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

    static const char* templates[] = {"SV.X","C.X","P.X","T.X","Tu.X"};

    struct Task: public DUNE::Tasks::Task
    {
      //! Serial port handle.
      SerialPort* m_uart;
      //! Task arguments
      Arguments m_args;
      //! Sensor structure
      Sensor m_sconfig[12];
      //! Task Watchdog
      Counter<double> m_wdog;
      //! Function ConfigDetect Watchdog
      Counter<double> m_wdogdetect;
      //! Array of booleans to check which digital
      //! sensors are connected
      // DigSensorflags [] = {SV.X flag, C.X flag, P.X flag, T.X flag, Tu.X flag};
      bool DigSensorflags[5];
      //! Array of booleans to check if the
      //! Density, Salinity or Sound Velocity
      //! calculation channels can be turned on
      // CalculationChannels [] =  {Salinity & Density flag, SV flag};
      bool CalculationChannels[2];
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

        DigSensorflags[0] = false;
        DigSensorflags[1] = false;
        DigSensorflags[2] = false;
        DigSensorflags[3] = false;
        DigSensorflags[4] = false;

        CalculationChannels[0] = false;
        CalculationChannels[1] = false;

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
      getDigName(char bfr[], int &i, int &k)
      {
        for(int j = 0; j < 5; j++)
        {
          if(strstr( bfr, templates[j]) != NULL)
          {
            DigSensorflags[j] = true;
            strcpy(m_sconfig[i].name, templates[j]);
            m_sconfig[i].channel = bfr[0] - '0';
            i++;
          }
        }
        if(strstr( bfr, "empty") != NULL)
            k++;
       }

      void
      SensorConfigDetect(int &i, int &k)
      {
        char bfr[255];
        int j;
        std::string buffer;

        j = 0;

        m_wdogdetect.setTop(10);
        while(0 != std::strcmp( bfr, "Detection complete\r\n"))
        {
          // To task don't stuck here
          if (m_wdogdetect.overflow())
          {
            setEntityState(IMC::EntityState::ESTA_ERROR, Status::CODE_COM_ERROR);
            throw RestartNeeded(DTR(Status::getString(CODE_COM_ERROR)), 5);
          }

          if(!Poll::poll(*m_uart, 1.0))
            continue;

          // Check sensor configuration
          m_uart->readString(bfr, sizeof(bfr));

          // Avoid to send garbage to functions
          if(0 != strcmp(bfr, "Detecting Sensors\r\n") && 0 != strcmp(bfr, "Detection complete\r\n"))
          {
            // Function to detect analog sensors configuration
            //if(( i + k) >= 5)
            //getAnalogState(bfr, flag);
            // There is at least one analog channel active if flag>0
            // Possibility for future analog auto-configuration (talk Mode)

            // Function to detect digital sensors configuration
            if((i+k)<5)
              getDigName(bfr, i, k);
          }
        }
        m_wdogdetect.reset();

        // Passing Sensor names to the structure
        for(j = 0; j < (int)m_args.label.size(); j++ )
        {
          strcpy(m_sconfig[i+j].name, m_args.label[j].c_str());
          m_sconfig[i+j].channel = j + 6;
        }

        // Indicating total number of analog and digital channels
        // To alocate Density, Salinity and SV calculation at the end
        i = i + m_args.label.size();

        // Check which digital sensores are active and set flags to turn
        // on the Density, Salinity or Sound Velocity calculation
        if( (DigSensorflags[0] || DigSensorflags[1]) && DigSensorflags[2] && DigSensorflags[3])
          CalculationChannels[0] = true;
       else
         CalculationChannels[0] = false;

       if(DigSensorflags[1]  && DigSensorflags[2] && DigSensorflags[3])
         CalculationChannels[1] = true;
       else
         CalculationChannels[1] = false;
      }

      bool
      sendCommand(const char* cmd, const char* reply)
      {
        char bfr[128];

        m_uart->writeString(cmd);

        if (Poll::poll(*m_uart, 1.0))
        {
          m_uart->readString(bfr, sizeof(bfr));debug("Check reply - %s\n",bfr);
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

        if(!sendCommand("DETECT\r",">DETECT\r\n"))
          throw RestartNeeded(DTR("failed to detect sensor configuration"), 5);
        else
          SensorConfigDetect(i, k);

        if(CalculationChannels[0])
        {
          if(!sendCommand("SET SCAN DENSITY\r",">SET SCAN DENSITY\r\n"))
             throw RestartNeeded(DTR("failed to set density calculation"), 5);

          strcpy(m_sconfig[i].name,"Density");
          m_sconfig[i].channel = i + k + 1;

          if(!sendCommand("SET SCAN SALINITY\r",">SET SCAN SALINITY\r\n"))
             throw RestartNeeded(DTR("failed to set salinity calculation"), 5);

          strcpy(m_sconfig[i + 1].name,"Salinity");
          m_sconfig[i + 1].channel = i + k + 2;
        }
        else if(!CalculationChannels[0])
        {
          if(!sendCommand("SET SCAN NODENSITY\r",">SET SCAN NODENSITY\r\n"))
             throw RestartNeeded(DTR("failed to disable density calculation"), 5);

          if(!sendCommand("SET SCAN NOSALINITY\r",">SET SCAN NOSALINITY\r\n"))
             throw RestartNeeded(DTR("failed to disable salinity calculation"), 5);
        }

        if(CalculationChannels[1])
        {
          if(!sendCommand("SET SCAN SV\r",">SET SCAN SV\r\n"))
             throw RestartNeeded(DTR("failed to set sv calculation"), 5);

          strcpy(m_sconfig[i + 2].name,"SV");
          m_sconfig[i + 2].channel = i + k + 3;
        }
        else if(!CalculationChannels[1])
        {
          if(!sendCommand("SET SCAN NOSV\r",">SET SCAN NOSV\r\n"))
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
          debug("DBG: %s",bfr);
          ptr = bfr;
          n_data = 0;
          n = 0;
          // Extract reveived values to structure
          while( 1 == sscanf(ptr,"%f%n",&m_sconfig[n_data].value,&n) )
          {
            n_data++;
            ptr +=n;
          }

          // Dispatch of received values
          for(i = 0; i<n_data; i++)
          {
            if(0 == strcmp(m_sconfig[i].name,templates[0]) || 0 == strcmp(m_sconfig[i].name,"SV"))
              m_sspeed.value = m_sconfig[i].value;

            if(0 == strcmp(m_sconfig[i].name,templates[1]))
              m_conduct.value = m_sconfig[i].value;

            if(0 == strcmp(m_sconfig[i].name,templates[3]) || 0 == strcmp(m_sconfig[i].name,"Temperature"))
              m_temp.value = m_sconfig[i].value;

            if(0 == strcmp(m_sconfig[i].name,templates[2]) || 0 == strcmp(m_sconfig[i].name,"Pressure"))
              m_press.value = m_sconfig[i].value;

            if(0 == strcmp(m_sconfig[i].name,templates[2]) || 0 == strcmp(m_sconfig[i].name,"Pressure"))
              m_depth.value = m_sconfig[i].value * dbar2m_coef;

            if(0 == strcmp(m_sconfig[i].name, "Salinity"))
              m_sal.value = m_sconfig[i].value;

            if(0 == strcmp(m_sconfig[i].name, "Density"))
              m_wdens.value = m_sconfig[i].value;

            std::cout<<"Name - "<<m_sconfig[i].name<<" | "<<"Channel - "<<m_sconfig[i].channel<<" | "<<"Value - "<<m_sconfig[i].value<<std::endl;
          }

          // Dispatch
          dispatch(m_sspeed);
          dispatch(m_conduct);
          dispatch(m_temp);
          dispatch(m_press);
          dispatch(m_sal);
          dispatch(m_wdens);

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
