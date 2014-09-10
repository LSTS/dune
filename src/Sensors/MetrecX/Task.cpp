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
     };

    struct Analog_Labels
    {
      //! Number of channels
      int n_channels;
      //! Channels Label
      std::string label;
    };

     struct Sensor
     {
       //! Sensor name
       char name[255];
       //! Sensor channel
       int channel;
       //!Sensor value
       float value;
     };

    struct Task: public DUNE::Tasks::Task
    {
      //! Serial port handle.
      SerialPort* m_uart;
      //! Task arguments
      Arguments m_args;
      //! Analog Labels Structure
      Analog_Labels a_label[4];
      //! Sensor structure
      Sensor s_config[20];
      //! Watchdog.
      Counter<double> m_wdog;
      //! Template detector for SV
      char P_SV[255];
      //! Template detector for C
      char P_C[255];
      //! Template detector for P
      char S_U_P[255];
      //! Template detector for T
      char S_U_T[255];
      //! Template detector for Tu
      char S_L_Tu[255];
      //! SV.X flag
      int P_SV_flag;
      //! C.X flag
      int P_C_flag;
      //! P.X flag
      int S_U_P_flag;
      //! T.X flag
      int S_U_T_flag;
      //! Tu.X flag
      int S_L_Tu_flag;
      //! Salinity and Density flag
      int S_D_flag;
      //! SV flag calculator
      int SV_flag;
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

        param("Number Channels", a_label[0].n_channels)
        .defaultValue("2.0")
        .description("Number of analog channels connected");

        param("Analog C61 Label", a_label[0].label)
        .defaultValue("N/A")
        .description("Analog C61 Label indicating sensor type");

        param("Analog C62 Label", a_label[1].label)
        .defaultValue("N/A")
        .description("Analog C62 Label indicating sensor type");

        param("Analog C71 Label", a_label[2].label)
        .defaultValue("N/A")
        .description("Analog C71 Label indicating sensor type");

        param("Analog C72 Label", a_label[3].label)
        .defaultValue("N/A")
        .description("Analog C72 Label indicating sensor type");

        strcpy(P_SV,"SV.X");
        strcpy(P_C,"C.X");
        strcpy(S_U_P,"P.X");
        strcpy(S_U_T,"T.X");
        strcpy(S_L_Tu, "TU.X");
        P_SV_flag = 0;
        P_C_flag = 0;
        S_U_P_flag = 0;
        S_U_T_flag = 0;
        S_L_Tu_flag = 0;
        S_D_flag = 0;
        SV_flag = 0;
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
      getAnalogState(char bfr[],int &flag)
      {
        if(strstr(bfr,"empty") == NULL)
          flag++;
      }


      void
      getDigName(char bfr[],int &i,int &k)
      {
        if(strstr(bfr,P_SV) != NULL)
        {
          P_SV_flag = 1;
          strcpy(s_config[i].name, P_SV);
          s_config[i].channel = bfr[0] - '0';
          i++;
        }
        if(strstr(bfr,P_C) != NULL)
        {
          P_C_flag = 1;
          strcpy(s_config[i].name, P_C);
          s_config[i].channel = bfr[0] - '0';
          i++;
        }
        if(strstr(bfr,S_U_P) != NULL)
        {
          S_U_P_flag = 1;
          strcpy(s_config[i].name, S_U_P);
          s_config[i].channel = bfr[0] - '0';
          i++;
        }
        if(strstr(bfr,S_U_T) != NULL)
        {
          S_U_T_flag = 1;
          strcpy(s_config[i].name, S_U_T);
          s_config[i].channel = bfr[0] - '0';
          i++;
        }
        if(strstr(bfr,S_L_Tu) != NULL)
        {
          S_L_Tu_flag = 1;
          strcpy(s_config[i].name, S_L_Tu);
          s_config[i].channel = bfr[0] - '0';
          i++;
          }
        if(strstr(bfr,"empty") != NULL)
          k++;
      }

      void
      SensorConfigDetect(int &i,int &k)
      {
        char bfr[255];
        int flag;
        int j;

        j = 0;
        flag = 0;

        while(0 != std::strcmp(bfr,"Detection complete\r\n"))
        {
          if(!Poll::poll(*m_uart, 1.0))
            continue;

          //! Check sensor configuration
          m_uart->readString(bfr,sizeof(bfr));

          //! Avoid to send garbage to functions
          if(0 != strcmp(bfr,"Detecting Sensors\r\n") && 0 != strcmp(bfr,"Detection complete\r\n"))
          {
            //! Function to detect analog sensors configuration
            if((i+k)>=5)
              getAnalogState(bfr,flag);

            //! Function to detect digital sensors configuration
            if((i+k)<5)
              getDigName(bfr,i,k);
          }
        }

        //! There is at least one analog channel active if flag>0
        //! Possibility for future analog auto-configuration (talk Mode)

        //! Passing Sensor names to the structure
        for(j = 0;j<a_label[0].n_channels;j++ )
        {
          strcpy(s_config[i+j].name,a_label[j].label.c_str());
          s_config[i+j].channel = j + 6;
        }

        //! Indicating total number of analog and digital channels
        //! To alocate Density, Salinity and SV calculation at the end
        i = i + a_label[0].n_channels;

       if( (P_SV_flag == 1 || P_C_flag == 1) && S_U_P_flag == 1 && S_U_T_flag == 1)
         S_D_flag = 1;
       else
         S_D_flag = 0;

       if(P_C_flag == 1  && S_U_P_flag == 1 && S_U_T_flag == 1)
         SV_flag = 1;
       else
         SV_flag = 0;
      }

      bool
      sendCommand(const char* cmd, const char* reply)
      {
        char bfr[128];

        m_uart->writeString(cmd);

        if (Poll::poll(*m_uart, 1.0))
        {
          m_uart->readString(bfr, sizeof(bfr));printf("Check reply - %s\n",bfr);
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
          SensorConfigDetect(i,k);

        if(S_D_flag == 1)
        {
          if(!sendCommand("SET SCAN DENSITY\r",">SET SCAN DENSITY\r\n"))
             throw RestartNeeded(DTR("failed to set density calculation"), 5);

          strcpy(s_config[i].name,"Density");
          s_config[i].channel = i;

          if(!sendCommand("SET SCAN SALINITY\r",">SET SCAN SALINITY\r\n"))
             throw RestartNeeded(DTR("failed to set salinity calculation"), 5);

          strcpy(s_config[i+1].name,"Salinity");
          s_config[i+1].channel = i+1;
        }
        else if(S_D_flag == 0)
        {
          if(!sendCommand("SET SCAN NODENSITY\r",">SET SCAN NODENSITY\r\n"))
             throw RestartNeeded(DTR("failed to disable density calculation"), 5);

          if(!sendCommand("SET SCAN NOSALINITY\r",">SET SCAN NOSALINITY\r\n"))
             throw RestartNeeded(DTR("failed to disable salinity calculation"), 5);
        }

        if(SV_flag == 1)
        {
          if(!sendCommand("SET SCAN SV\r",">SET SCAN SV\r\n"))
             throw RestartNeeded(DTR("failed to set sv calculation"), 5);

          strcpy(s_config[i+2].name,"SV");
          s_config[i+2].channel = i+2;
        }
        else if(SV_flag == 0)
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
          printf("DBG: %s",bfr);
          ptr = bfr;
          n_data = 0;
          n = 0;
          //! Extract reveived values to structure
          while( 1 == sscanf(ptr,"%f%n",&s_config[n_data].value,&n) )
          {
            n_data++;
            ptr +=n;
          }

          //! Dispatch of received values
          for(i = 0; i<n_data; i++)
          {
            if(0 == strcmp(s_config[i].name,P_SV) || 0 == strcmp(s_config[i].name,"SV"))
              m_sspeed.value = s_config[i].value;

            if(0 == strcmp(s_config[i].name,P_C))
              m_conduct.value = s_config[i].value;

           if(0 == strcmp(s_config[i].name,S_U_T) || 0 == strcmp(s_config[i].name,"Temperature"))
              m_temp.value = s_config[i].value;

           if(0 == strcmp(s_config[i].name,S_U_P) || 0 == strcmp(s_config[i].name,"Pressure"))
              m_press.value = s_config[i].value;

          if(0 == strcmp(s_config[i].name,S_U_P) || 0 == strcmp(s_config[i].name,"Pressure"))
              m_depth.value = s_config[i].value * dbar2m_coef;

            if(0 == strcmp(s_config[i].name, "Salinity"))
              m_sal.value = s_config[i].value;

           if(0 == strcmp(s_config[i].name, "Density"))
              m_wdens.value = s_config[i].value;

            std::cout<<"Name - "<<s_config[i].name<<" | "<<"Channel - "<<s_config[i].channel<<std::endl;
          }

          //! Dispatch
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
