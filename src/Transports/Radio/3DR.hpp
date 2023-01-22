//***************************************************************************
// Copyright 2007-2021 OceanScan - Marine Systems & Technology, Lda.        *
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
// Author: João Teixeira                                                    *
//***************************************************************************

#ifndef DUNE_TRANSPORTS_RADIO_3DR_HPP_INCLUDED_
#define DUNE_TRANSPORTS_RADIO_3DR_HPP_INCLUDED_

// ISO C++ 98 headers.
#include <string>
#include <vector>

// DUNE headers.
#include <DUNE/Coordinates.hpp>
#include <DUNE/IMC/Definitions.hpp>

namespace Transports
{
  namespace Radio
  {
    using DUNE_NAMESPACES;

    static const char * AT_3DR[] = {
      "+++",
      "AT",
      "ATI",
      "ATI2",
      "ATI3",
      "ATI4",
      "ATI5",
      "ATI6",
      "ATI7",
      "ATO",
      "ATS",
      "ATZ",
      "AT&W",
      "AT&T=RSSI",
      "AT&T=TDM",
      "AT&T",
      ""
    };

    //! @author João Teixeira.
    class Radio3dr: public RadioDriver
    {
      public:
    //! Entity states.
        enum At_cmd
        {
          ENABLE_CMD,
          AT,
          RADIO_VERSION,
          BOARD_TYPE,
          BOARD_FREQUENCY,
          BOARD_VERSION,
          SETTABLE_EEPROM_PARAMETERS,
          TDM_TIMING,
          RSSI,
          EXIT_AT_COMMAND_MODE,
          DISPLAY_OR_SET_PARAMETER_N,
          REBOOT,
          WRITE_PARAMETERS_EEPROM,
          ENABLE_RSSI_REPORTING,
          ENABLE_TDM_REPORTING,
          DISABLE_DEBUG_REPORTING,
          NO_CMD
     };


        enum Mavlink
        {
          NO_MAVLINK_FRAMING = 0,
          FRAME_MAVLINK = 1,
          LOW_LATENCY_MAVLINK = 2
        };

        struct DeviceParam
        {
          std::string s0_format;
          std::string s1_serial_speed;
          std::string s2_air_speed;
          std::string s3_net_id;
          std::string s4_power_level;
          std::string s5_error_correction;
          std::string s6_mavlink;
          std::string s7_oppresend;
          std::string s8_min_frequency;
          std::string s9_max_frequency;
          std::string s10_mum_channels;
          std::string s11_duty_cycle;
          std::string s12_lbt_rssi;
          std::string s13_manchester;
          std::string s14_rtscts;
          // hardware specs
          std::string radio_version;
          std::string board_type;
          std::string board_frequency;
          std::string board_version;

        };

        //! Radio 3DR driver.
        Radio3dr(RadioConfParam args , Tasks::Task* taskp = NULL):
        RadioDriver( args ,taskp ),
        cmd_mode(false)
        {
        }

        //! Default destructor.
        ~Radio3dr(void)
        {
           Memory::clear(m_handle);
        }

        int
        configDevice(void)
        {
          int status;
          status =DeviceVerifyConf();
          if(status==0)
            return 0;

          if(status==2)
           status = DeviceVerifyConf();
          task->trace("configure device final status: %d", status);
          return status;
        }

        int
        DeviceVerifyConf()
        {
          std::string data;
          task->spew("wait two seconds to enter in AT mode");
          Delay::wait(2);
          sendCommandAndWait(commandCreate(ENABLE_CMD,data),1);
          sendCommandAndWait(commandCreate(REBOOT,data),3);
          Delay::wait(3);
          sendCommandAndWait(commandCreate(ENABLE_CMD,data),1);
          sendCommandAndWait(commandCreate(AT,data),1);
          m_line.clear();
          sendCommandAndWait(commandCreate(AT,data),1);
          if(!(String::startsWith(m_last_line,"OK" )))
          {
              task->err("Not in AT mode");
              return 0;
          }
          cmd_mode = true;
          sendCommandAndWait(commandCreate(RADIO_VERSION,data),1);
          if(device_param.radio_version.size()==0)
          {
              task->err("Incorrect radio_version");
              return 0;
          }
          sendCommandAndWait(commandCreate(BOARD_TYPE,data),1);
          if(device_param.board_type.size()==0)
          {
              task->err("Incorrect board_type");
              return 0;
          }
          sendCommandAndWait(commandCreate(BOARD_FREQUENCY,data),1);
          if(device_param.board_frequency.size()==0)
          {
              task->err("Incorrect board_frequency");
              return 0;
          }
          sendCommandAndWait(commandCreate(BOARD_VERSION,data),1);
          if(device_param.board_version.size()==0)
          {
              task->err("Incorrect board_version");
              return 0;
          }

          sendCommandAndWait(commandCreate(RSSI,data),1);
          if(device_reports.rssi.size()==0)
          {
              task->err("No RSSI reporting");
              return 0;
          }

          sendCommandAndWait(commandCreate(TDM_TIMING,data),1);
          if(device_reports.tdm_timing_max_data_packet.size()==0)
          {
              task->err("No tdm_timing reporting");
              return 0;
          }

          sendCommandAndWait(commandCreate(SETTABLE_EEPROM_PARAMETERS,data),1);

          //todo verify if necessary
          //      S6:  MAVLINK=1
          //      S7:  OPPRESEND=1
          //      S12: LBT_RSSI=0
          //      S13: MANCHESTER=0
          //      S14: RTSCTS=0
          bool changed =false;

          if(radioParams.air_speed.compare(device_param.s2_air_speed) !=0)
          {
            data = "2="+ radioParams.air_speed;
            sendCommandAndWait(commandCreate(DISPLAY_OR_SET_PARAMETER_N, data),1);
            task->trace("change air_speed from %s to %s",device_param.s2_air_speed.c_str(),radioParams.air_speed.c_str());
            changed=true;
          }
          if(radioParams.net_id.compare(device_param.s3_net_id) !=0)
          {
            data = "3="+ radioParams.net_id;
            sendCommandAndWait(commandCreate(DISPLAY_OR_SET_PARAMETER_N, data),1);
            task->trace("change net_id from %s to %s",device_param.s3_net_id.c_str(),radioParams.net_id.c_str());
            changed=true;
          }
          if(radioParams.power_level.compare(device_param.s4_power_level) !=0)
          {
            data ="4="+ radioParams.power_level;
            sendCommandAndWait(commandCreate(DISPLAY_OR_SET_PARAMETER_N, data),1);
            task->trace("change power_level from %s to %s",device_param.s4_power_level.c_str(),radioParams.power_level.c_str());
            changed=true;
          }
          if(radioParams.error_correction && device_param.s5_error_correction.compare("1") !=0 )
          {
              data ="5=1";
              sendCommandAndWait(commandCreate(DISPLAY_OR_SET_PARAMETER_N, data),1);
              task->trace("change error_correction from %s to %s",device_param.s5_error_correction.c_str(),"1");
              changed=true;

          }
          if( !radioParams.error_correction && device_param.s5_error_correction.compare("0") != 0 )
          {
              data ="5=0";
              sendCommandAndWait(commandCreate(DISPLAY_OR_SET_PARAMETER_N, data),1);
              task->trace("change error_correction from %s to %s",device_param.s5_error_correction.c_str(),"0");
              changed=true;

          }
          if(radioParams.min_frequency.compare(device_param.s8_min_frequency) !=0)
          {
            data= "8=" + String::str("%s", radioParams.min_frequency.c_str());
            sendCommandAndWait(commandCreate(DISPLAY_OR_SET_PARAMETER_N, data),1);
            task->trace("change min_frequency from %s to %s",device_param.s8_min_frequency.c_str(),radioParams.min_frequency.c_str());
            changed=true;
          }

          if(radioParams.max_frequency.compare(device_param.s9_max_frequency) !=0)
          {
            data= "9=" + String::str("%s", radioParams.max_frequency.c_str());
            sendCommandAndWait(commandCreate(DISPLAY_OR_SET_PARAMETER_N, data),1);
            task->trace("change max_frequency from %s to %s",device_param.s9_max_frequency.c_str(),radioParams.max_frequency.c_str());
            changed=true;
          }

          if(radioParams.mum_channels.compare(device_param.s10_mum_channels) !=0)
          {
            data= "10=" + String::str("%s", radioParams.mum_channels.c_str());
            sendCommandAndWait(commandCreate(DISPLAY_OR_SET_PARAMETER_N, data),1);
            task->trace("change mum_channels from %s to %s",device_param.s10_mum_channels.c_str(),radioParams.mum_channels.c_str());
            changed=true;
          }

          if(radioParams.duty_cycle.compare(device_param.s11_duty_cycle) !=0)
          {
            data= "11=" + String::str("%s", radioParams.duty_cycle.c_str());
            sendCommandAndWait(commandCreate(DISPLAY_OR_SET_PARAMETER_N, data),1);
            task->trace("change duty_cycle from %s to %s",device_param.s11_duty_cycle.c_str(),radioParams.duty_cycle.c_str());
            changed=true;
          }

          if (changed)
          {
            data.clear();
            sendCommandAndWait(commandCreate(WRITE_PARAMETERS_EEPROM,data),3);
            sendCommandAndWait(commandCreate(REBOOT,data),3);
            return 2;
          }
          data.clear();
          //enable radio report
          if(radioParams.rssi_report)
            sendCommandAndWait(commandCreate(ENABLE_RSSI_REPORTING,data),1);
          if(radioParams.tdm_report)
            sendCommandAndWait(commandCreate(ENABLE_TDM_REPORTING,data),1);
          //disable CMD line
          data.clear();
          sendCommandAndWait(commandCreate(EXIT_AT_COMMAND_MODE,data),3);
          cmd_mode = false;
          return 1;
        }

        std::string
        commandCreate(At_cmd cmd_type, std::string& data)
        {
          std::string command;

          if(ENABLE_CMD == cmd_type)
          {
            command = AT_3DR[cmd_type];
          }
          else
          {
            if(data.size()>0)
            {
              command =  (AT_3DR[cmd_type]+data + "\r\n");
            }
            else
            {
              std::string cmd = AT_3DR[cmd_type];
              command = (cmd + "\r\n");
            }
          }
          last_command = command;
          return command ;
        }


        void
        sendCommandAndWait(const std::string& cmd, double delay_aft)
        {
          sendCommand(cmd);
          processInputInit(delay_aft);
        }

        void
        sendCommand(const std::string& cmd)
        {
          m_handle->writeString(cmd.c_str());
          m_dev_data.value.assign("TX: " + sanitize(cmd));
          task->dispatch(m_dev_data);
          task->spew("%s",m_dev_data.value.c_str());
        }

        void
        sendString(std::string& msg)
        {
          std::string data =  "$"+ msg;
          sendCommand(commandCreate(NO_CMD,data));
        }

        bool
        saveIfExpectedCmdIs(const std::string& msg, std::string& expectedCmd, std::string& output)
        {
          if(String::startsWith(msg, expectedCmd.c_str()))
          {
            output = msg.substr(expectedCmd.size());
            output = sanitize(output.erase(output.size()-1));
            task->trace("For %s output is: %s",expectedCmd.c_str(),output.c_str());
            return true;
          }
          return false;
        }

        //! Process sentence.
        //! @param[in] msg sentence.
        void
        process(const std::string msg)
        {

          m_dev_data.value.assign("RX: " + sanitize(msg));
          task->spew("%s",m_dev_data.value.c_str());
          task->dispatch(m_dev_data);

          try
          {

            //AT comadns
            if(cmd_mode)
            {
                if(String::startsWith(last_command,AT_3DR[RADIO_VERSION]))
                {
                  if(String::startsWith(msg,"SiK"))
                  {
                      device_param.radio_version = msg;
                      task->trace("%s",device_param.radio_version.c_str());
                  }
                }

                if(String::startsWith(last_command,AT_3DR[BOARD_TYPE]))
                {
                  if(String::startsWith(msg,"78"))
                  {
                      device_param.board_type = msg;
                      task->trace("%s",device_param.board_type.c_str());
                  }
                }

                if(String::startsWith(last_command,AT_3DR[BOARD_FREQUENCY]))
                 {
                   if(String::startsWith(msg,"67"))
                   {
                       device_param.board_frequency = msg;
                       task->trace("%s",device_param.board_frequency.c_str());
                   }
                 }

                if(String::startsWith(last_command,AT_3DR[BOARD_VERSION]))
                 {
                   if(String::startsWith(msg,"1"))
                   {
                       device_param.board_version = msg;
                       task->trace("%s",device_param.board_version.c_str());
                   }
                 }

                if(String::startsWith(last_command,AT_3DR[SETTABLE_EEPROM_PARAMETERS]))
                  {

                     std::string output;

                     std::string expectedCMD = "S0: FORMAT=";
                     saveIfExpectedCmdIs(msg, expectedCMD, device_param.s0_format);
                     expectedCMD = "S1: SERIAL_SPEED=";
                     saveIfExpectedCmdIs(msg, expectedCMD, device_param.s1_serial_speed);
                     expectedCMD ="S2: AIR_SPEED=";
                     saveIfExpectedCmdIs(msg, expectedCMD, device_param.s2_air_speed);
                     expectedCMD ="S3: NETID=";
                     saveIfExpectedCmdIs(msg, expectedCMD,device_param.s3_net_id);
                     expectedCMD ="S4: TXPOWER=";
                     saveIfExpectedCmdIs(msg, expectedCMD,device_param.s4_power_level);
                     expectedCMD ="S5: ECC=";
                     saveIfExpectedCmdIs(msg, expectedCMD,device_param.s5_error_correction);
                     expectedCMD ="S6: MAVLINK=";
                     saveIfExpectedCmdIs(msg, expectedCMD,device_param.s6_mavlink);
                     expectedCMD ="S7: OPPRESEND=";
                     saveIfExpectedCmdIs(msg, expectedCMD,device_param.s7_oppresend);
                     expectedCMD ="S8: MIN_FREQ=";
                     saveIfExpectedCmdIs(msg, expectedCMD,device_param.s8_min_frequency);
                     expectedCMD ="S9: MAX_FREQ=";
                     saveIfExpectedCmdIs(msg, expectedCMD,device_param.s9_max_frequency);
                     expectedCMD ="S10: NUM_CHANNELS=";
                     saveIfExpectedCmdIs(msg, expectedCMD,device_param.s10_mum_channels);
                     expectedCMD ="S11: DUTY_CYCLE=";
                     saveIfExpectedCmdIs(msg, expectedCMD,device_param.s11_duty_cycle);
                     expectedCMD ="S12: LBT_RSSI=";
                     saveIfExpectedCmdIs(msg, expectedCMD,device_param.s12_lbt_rssi);
                     expectedCMD ="S13: MANCHESTER=";
                     saveIfExpectedCmdIs(msg, expectedCMD,device_param.s13_manchester);
                     expectedCMD ="S14: RTSCTS=";
                     saveIfExpectedCmdIs(msg, expectedCMD,device_param.s14_rtscts);

                  }

                if(String::startsWith(last_command,AT_3DR[TDM_TIMING]))
                 {
                   if(String::startsWith(msg,"tx_window_width:"))
                   {
                       device_reports.tdm_timing_tx_window = msg;
                       task->trace("%s",device_reports.tdm_timing_tx_window.c_str());

                   }
                   if(String::startsWith(msg,"silence_period:"))
                   {
                       device_reports.tdm_timing_silence_period = msg;
                       task->trace("%s",device_reports.tdm_timing_silence_period.c_str());

                   }
                   if(String::startsWith(msg,"max_data_packet_length:"))
                   {
                    std::string expectedCMD= "max_data_packet_length:";
                       saveIfExpectedCmdIs(msg, expectedCMD,device_reports.tdm_timing_max_data_packet);
                       task->trace("max_data_packet_length: %s",device_reports.tdm_timing_max_data_packet.c_str());
                   }

                 }


            }
           //End AT commands
            if(String::startsWith(msg,"$"))
            {
              std::string tmp = msg;
              tmp.erase( (msg.size()- 1), 1);
              tmp.erase(0,1);
              device_reports.data_report = tmp;
              device_reports.report_status[DATA_REPORT] = true;
              //task->spew("data_report:%s",device_reports.data_report.c_str());
            }
            //Radio Report
            if(String::startsWith(msg,"L/R RSSI:"))
            {
              device_reports.rssi = msg;
              device_reports.report_status[RSSI_REPORT] = true;
              task->spew("%s",device_reports.rssi.c_str());
            }

            if(String::startsWith(msg,"TDM:"))
            {
              device_reports.tdm_report = msg;
              device_reports.report_status[TDM_REPORT] = true;
              task->spew("%s",device_reports.tdm_report.c_str());
            }
          }
          catch (std::exception& e)
          {
            task->err("%s", e.what());
          }

        }

      protected:

        DeviceParam device_param;
        bool cmd_mode;
        std::string last_command;
    };
  }
}


#endif

