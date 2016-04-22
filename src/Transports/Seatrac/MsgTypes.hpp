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
// Author: João Teixeira                                                    *
//***************************************************************************
#ifndef TRANSPORTS_SEATRAC_MSGTYPES_HPP_INCLUDED_
#define TRANSPORTS_SEATRAC_MSGTYPES_HPP_INCLUDED_

// ISO C++ 98 headers.
#include <string>
#include <cstring>
#include <vector>

// DUNE headers.
#include <DUNE/DUNE.hpp>

// Local headers
#include "DataTypes.hpp"

namespace Transports
{
  namespace Seatrac
  {
    using DUNE_NAMESPACES;

    struct CidStatusMsg
    {
      uint8_t output_flags;
      uint8_t outputflags_list[6];
      uint64_t timestamp;
      //ENVIRONMENT
      uint16_t environment_supply;
      int16_t  environment_temperature;
      int32_t  environment_pressure;
      int32_t  EnvironmentDepth;
      uint16_t EnvironmentVos;
      //ATTITUDE
      int16_t attitude_yaw;
      int16_t attitude_pitch;
      int16_t attitude_roll;
      //MAG_CAL
      uint8_t mag_cal_buf;
      bool    mag_cal_valid;
      int32_t mag_cal_age;
      uint8_t mag_cal_fit;
      //ACC_CAL
      int16_t acc_lim_min_x;
      int16_t acc_lim_min_y;
      int16_t acc_lim_min_z;
      int16_t acc_lim_max_x;
      int16_t acc_lim_max_y;
      int16_t acc_lim_max_z;
      //AHRS_RAW_DATA
      int16_t ahrs_raw_acc_x;
      int16_t ahrs_raw_acc_y;
      int16_t ahrs_raw_acc_z;
      int16_t ahrs_raw_mag_x;
      int16_t ahrs_raw_mag_y;
      int16_t ahrs_raw_mag_z;
      int16_t ahrs_raw_gyro_x;
      int16_t ahrs_raw_gyro_y;
      int16_t ahrs_raw_gyro_z;
      //AHRS_COMP_DATA
      float ahrs_comp_acc_x;
      float ahrs_comp_acc_y;
      float ahrs_comp_acc_z;
      float ahrs_comp_mag_x;
      float ahrs_comp_mag_y;
      float ahrs_comp_mag_z;
      float ahrs_comp_gyro_x;
      float ahrs_comp_gyro_y;
      float ahrs_comp_gyro_z;

      //!define the message structure fields
      void outputFlagsComp(void)
      {
        outputflags_list[0]=(0x01 & output_flags);
        outputflags_list[1]=(0x02 & output_flags);
        outputflags_list[2]=(0x04 & output_flags);
        outputflags_list[3]=(0x08 & output_flags);
        outputflags_list[4]=(0x10 & output_flags);
        outputflags_list[5]=(0x20 & output_flags);
      }

    };

    struct CidPingRespMsg
    {
      Acofix_t aco_fix;
    };

    struct CidNavBeaconPosUpdateMsg
    {
      Acofix_t aco_fix;
      uint8_t beacon_id;
      int16_t position_easting;
      int16_t position_northing;
      int16_t position_depth;
    };

    struct CidPingRequestMsg
    {
      Acofix_t aco_fix;
    };

    struct CidSysInfo
    {
     uint32_t seconds;
     uint8_t section;
     Hardware_t hardware;
     Firmware_t boot_firmware;
     Firmware_t main_firmware;
    };

    struct CidNavBeaconPosSendMsg
    {
      uint8_t beacon_id;
      int16_t position_easting;
      int16_t position_northing;
      int16_t position_depth;
      // response
      uint8_t status;
    };

    struct  CidPingErrorMsg
    {
      CST_E status;
      uint8_t beacon_id;
    };

    struct CidNavQueryReqMsg
    {
      Acofix_t aco_fix;
      uint8_t nav_query_t;

    };
    struct CidPingSendMsg
    {
      uint8_t dest_id;
      AmsgType_E msg_type;
      CST_E status;
      uint8_t beacon_id;
    };

    struct  CidSettingsSetMsg
    {
      uint8_t status;
    };

    struct  CidSettingsSaveMsg
    {
      uint8_t status;
    };

    struct  CidNavRefPosSendMsg
    {
      int32_t position_latitude;
      int32_t position_longitude;
      uint8_t status;
    };

    struct  CidNavRefPosUpdateMsg
    {
      Acofix_t aco_fix;
      uint8_t beacon_id;
      int32_t position_latitude;
      int32_t position_longitude;
    };
    struct  CidDatReceiveMsg
    {

      Acofix_t aco_fix;
      uint8_t ack_flag;
      uint8_t packet_len;
      char packet_data[31];
      int  data_rec_flag;
      uint8_t indice;
      uint8_t n_sub_messages;
      uint8_t n_sub_messages_last;
      std::string full_msg;

      //! decoding the data packet
      int
      packetDataDecode(void)
      {
        std::memcpy(&indice, packet_data + 0, 1);
        std::memcpy(&n_sub_messages, packet_data + 1, 1);
        if (data_rec_flag==0 && indice!=n_sub_messages && indice!=1)
        {
          return -1;
        }
        else if((indice==1)==n_sub_messages)
        {
          full_msg="";
        }
        else if (n_sub_messages >1)
        {
          if (data_rec_flag==0 && indice==1)
          {
            data_rec_flag=1;
            full_msg="";
            full_msg.assign(packet_data + 2,packet_len - 2);
            n_sub_messages_last=n_sub_messages;
            return 0;
          }
          else if (data_rec_flag!=0)
          {
            data_rec_flag++;
            if(data_rec_flag==indice)
            {
              full_msg.append(packet_data+2, packet_len-2);
              if (data_rec_flag==n_sub_messages_last)
              {
                data_rec_flag=0;n_sub_messages_last=0;
                return 1;
              }
              return 0;
            }
            data_rec_flag=0;n_sub_messages_last=0;
            return -1;
          }
        }
        full_msg.assign(packet_data + 2,packet_len - 2);
        data_rec_flag=0;
        return 1;
      }
      //! return full message
      uint8_t
      getFullMsg(std::string& msg)
      {
        msg=full_msg;
        full_msg.clear();
        return 0;
      }

    };

    struct  CidDatSendMsg
    {
      //Command Message Parameters
      uint8_t dest_id;
      AmsgType_E msg_type;
      uint8_t packet_len;
      std::string packet_data;
      //Response Message Parameters
      CST_E status;
      uint8_t beacon_id;
      //state machine
      int  lock_flag;
      uint8_t n_sub_messages;
      int n_sub_rest;
      uint8_t message_indice;
      std::string hex;
      int error_number;
      Time::Counter<double> msgTimer;

      //!begins construction of data packets
      int
      packetDataBuild(std::vector<char> msg, int dest_id_t)
      {
        int erro_code=1;
        if(msg.size()%2 != 0)
        {
          return erro_code=3;
        }
        if (msgTimer.overflow())
        {
          msgTimer.reset();
          lock_flag=0;
          erro_code=2;
        }
        if (lock_flag==0)
        {
          msgTimer.setTop(MAX_MESSAGE_PERIOD);
          hex=  std::string(msg.begin(), msg.end());
          error_number=0;
          lock_flag=1;
          dest_id=dest_id_t;
          message_indice=1;
          n_sub_messages=1;
          if (msg.size()<(MAX_PACKET_LEN*2-4))
          {
            packet_data=String::str("%02X%02X", message_indice, n_sub_messages);
            packet_len=(4+msg.size())/2;
            packet_data+=hex.substr(0,hex.size());
          }
          else
          {
            n_sub_messages=hex.size()/(MAX_PACKET_LEN*2-4);
            n_sub_rest=hex.size()%(MAX_PACKET_LEN*2-4);
            if (n_sub_rest!=0)
            {
              n_sub_messages++;
            }
            packet_data=String::str("%02X%02X", message_indice, n_sub_messages);
            packet_len=MAX_PACKET_LEN;
            packet_data+=hex.substr(0,(packet_len*2-4));
          }
          return 0;
        }
        return erro_code;
      }

      //! builds the next msg package
      int
      packetDataNextPart(int next)
      {
        if (msgTimer.overflow())
        {
          lock_flag=0;
        }
        msgTimer.reset();
        if(next==1)// next part of message
        {
          error_number=0;
          message_indice++;
          if(message_indice<=n_sub_messages)
          {
            packet_data=String::str("%02X%02X", message_indice, n_sub_messages);
            n_sub_rest=hex.size()-(message_indice-1)*(packet_len*2-4);
            packet_len=MAX_PACKET_LEN;
            if (n_sub_rest<=(packet_len*2-4))
            {
              packet_data+=hex.substr(((packet_len*2-4)*(message_indice-1)), n_sub_rest);
              packet_len=n_sub_rest/2+2;
            }
            else
            {
              packet_data+=hex.substr(((packet_len*2-4)*(message_indice-1)), (packet_len*2-4));
            }
          }
          else
          {
            lock_flag=0;
            return -1;
          }
        }
        else
        {
          error_number++;
          if (MAX_MESSAGE_ERRORS== error_number)
          {
            lock_flag=0;
          }
          return error_number;
        }
        //re-send same msg
        return 0;
      }

      //!Returns if packages constructor is free
      int
      packetDataSendStatus(void)
      {
        return lock_flag;
      }
    };

    struct CidSettingsMsg
    {
      uint8_t status_flags;
      uint8_t status_output;
      uint8_t uart_main_baud;
      uint8_t uart_aux_baud;
      MacAddr_T net_mac_addr;
      IpAddr_T net_ip_addr;
      IpAddr_T net_ip_subnet;
      IpAddr_T net_ip_gateway;
      IpAddr_T net_ip_dns;
      uint16_t net_tcp_port;
      uint8_t  env_flags;
      int32_t env_pressure_ofs;
      uint16_t env_salinity;
      uint16_t env_vos;
      uint8_t  ahrs_flags;
      AhrsCal_t ahrs_cal;
      uint16_t ahrs_yaw_ofs;
      uint16_t ahrs_pitch_ofs;
      uint16_t ahrs_roll_ofs;
      uint8_t  xcvr_flags;
      uint8_t  xcvr_beacon_id;
      uint16_t xcvr_range_tmo;
      uint16_t xcvr_resp_time;
      uint16_t xcvr_yaw;
      uint16_t xcvr_pitch;
      uint16_t xcvr_roll;
      uint8_t xcvr_posflt_vel;
      uint8_t xcvr_posflt_ang;
      uint8_t xcvr_posflt_tmo;

    };

    struct CidXcvrFixMsg
    {
      Acofix_t  aco_fix;
    };

    struct CidSysRebootMsg
    {
      uint8_t status;
    };

    struct CidNavQuerySendMsg
    {
      uint8_t dest_id;
      uint8_t query_flags;
      uint8_t status;
    };
    struct CidNavQuerryRespMsg
    {

      Acofix_t  aco_fix;
      uint8_t query_flags;
      int32_t remote_depth;
      int16_t remote_supply;
      int16_t remote_temp;
      int16_t remote_yaw;
      int16_t remote_pitch;
      int16_t remote_roll;
      uint8_t query_flags_list[4];

      //!define the message structure fields
      void queryFlagsExtract()
      {
        query_flags_list[0]=(0x01 & query_flags);
        query_flags_list[1]=(0x02 & query_flags);
        query_flags_list[2]=(0x04 & query_flags);
        query_flags_list[3]=(0x08 & query_flags);
      }
    };

  }
}
#endif
