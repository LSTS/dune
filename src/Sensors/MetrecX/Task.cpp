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
      //! Sensor structure
      Sensor s_config[8];
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

        strcpy(P_SV,"SV.X");
        strcpy(P_C,"C.X");
        strcpy(S_U_P,"T.X");
        strcpy(S_U_T,"P.X");
        strcpy(S_L_Tu, "TU.X");
        P_SV_flag = 0;
        P_C_flag = 0;
        S_U_P_flag = 0;
        S_U_T_flag = 0;
        S_L_Tu_flag = 0;
        S_D_flag = 0;
        SV_flag = 0;
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
      getName(char bfr[],int &i)
      {
        if(i>=5)
          return;
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
        {
          S_L_Tu_flag = 1;
          strcpy(s_config[i].name, "empty");
          s_config[i].channel = bfr[0] - '0';
          i++;
        }
        std::cout<<"Name - "<<s_config[i-1].name<<" | "<<"Channel - "<<s_config[i-1].channel<<std::endl;
      }

      void
      SensorConfigDetect()
      {
        char bfr[255];
        int i;

        i = 0;

        while(0 != std::strcmp(bfr,"Detection complete\r\n"))
        {
          if(!Poll::poll(*m_uart, 1.0))
            continue;
          //! Check sensor configuration
          m_uart->readString(bfr,sizeof(bfr));
          getName(bfr,i);
        }

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
        m_uart->writeString("\r");
        Delay::wait(1.0);
        m_uart->flush();

        if (!sendCommand("\r", "\r\n"))
          throw RestartNeeded(DTR("failed to enter command mode"), 5);

        if(!sendCommand("DETECT\r",">DETECT\r\n"))
          throw RestartNeeded(DTR("failed to detect sensor configuration"), 5);
        else
          SensorConfigDetect();

        if(S_D_flag == 1)
        {
          if(!sendCommand("SET SCAN DENSITY\r",">SET SCAN DENSITY\r\n"))
             throw RestartNeeded(DTR("failed to set density calculation"), 5);

          strcpy(s_config[5].name,"Density");
          s_config[5].channel = 5;

          if(!sendCommand("SET SCAN SALINITY\r",">SET SCAN SALINITY\r\n"))
             throw RestartNeeded(DTR("failed to set salinity calculation"), 5);

          strcpy(s_config[6].name,"Salinity");
          s_config[6].channel = 6;
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

          strcpy(s_config[7].name,"SV");
          s_config[7].channel = 7;
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
        float vals[8];
        int n_data;
        int n;
        int k;

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
          while( 1 == sscanf(ptr,"%f%n",&vals[n_data],&n) )
          {std::cout<<"While - "<<vals[n_data]<<" | "<<n_data<<std::endl;
            n_data++;
            ptr +=n;
          }
          k = 0;
          //! Extract Data before dispatch
          for(int i = 0; i<n_data; i++)
          {
            if(strcmp(s_config[i].name, "empty") != 0)
            {
              s_config[i].value = vals[k];std::cout<<"For - "<<s_config[i].value<<" | "<<s_config[i].name<<" | "<<s_config[i].channel<<std::endl;
              k++;
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
