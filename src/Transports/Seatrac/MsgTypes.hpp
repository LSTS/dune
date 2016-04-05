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
// DUNE headers.
#include <DUNE/DUNE.hpp> 
// Local Headers 
#include "DataTypes.hpp"

namespace Transports
{
  namespace Seatrac
  {
  using DUNE_NAMESPACES;



  struct CidStatusMsg {

    uint8_t output_flags; 
    uint8_t outputflags_list[6];
    uint64_t timestamp ;              //The value of the beacon’s clock (set to zero whenthe beacon was powered up – not rebooted!).Values are encoded in milliseconds, so divide by1000 for seconds.
    //ENVIRONMENT
    uint16_t environment_supply ;      //The beacons supply voltage. Values are encoded in milli-volts, so divide by 1000 for a value in Volts.
    int16_t  environment_temperature ; // The temperature of air/water in contact with the diaphragm of the pressure sensor. Values are encoded in deci-Celsius, so divide by 10 to obtain a value in Celsius.
    int32_t  environment_pressure ;    //The external pressure measured on the diaphragm of the pressure sensor. Values are encoded in milli-bars, so divide by 1000 to obtain a value in Bar. Please note, the specification of pressure reading is 0.5% of the sensors full-scale value, so for a 200 Bar sensor the to
    int32_t  EnvironmentDepth ;       //The computed depth based on the measured environmental pressure. Values are encoded in deci-metres, so divide by 10 for a value in metres.
    uint16_t EnvironmentVos ;         // The value of Velocity-of-Sound currently being used for computing ranges. This may be either the manually specified VOS from settings, or the auto-computed value based on pressure, temperature and salinity. Values are encoded in deci-metres-per-second, so divide by 10 to obtain a value in metres-per-
    //ATTITUDE
    int16_t attitude_yaw ;       // The current Yaw angle of the beacon, relative to magnetic north, measured by the beacons AHRS system. Values are encoded as deci-degrees, so divide the value by 10 to obtain a value in degrees.
    int16_t attitude_pitch ;     // The current Pitch angle of the beacon, relative to magnetic north, measured by the beacons AHRS system. Values are encoded as deci-degrees, so divide the value by 10 to obtain a value in degrees.
    int16_t attitude_roll ;      // The current Roll angle of the beacon, relative to magnetic north, measured by the beacons AHRS system. Values are encoded as deci-degrees, so divide the value by 10 to obtain a value in degrees.
    //MAG_CAL
    uint8_t mag_cal_buf ;       //  Value that indicates how full the data buffer is that holds magnetometer values describing the surrounding magnetic environment. Values are encoded as a percentage from 0 to 100 representing empty (where no magnetic calibration is possible) to full (where the best magnetic calibration can be computed). 
    bool    mag_cal_valid;      //  The flag is True if a magnetic calibration has been computed and is currently in use, compensating magnetometer readings. 
    int32_t mag_cal_age ;       // he number of seconds that have elapsed since the magnetometer calibration was last computed. When dynamic calibration is enabled, and there is sufficient data in the magnetic calibration buffer, then calibrations should be computed every 30
    uint8_t mag_cal_fit;        // Value indicating how well the current magnetometer calibration can fit the measured data to an ideal “sphere” (or perfect calibration). Values are encoded as a percentage from 0 to 10 
    //ACC_CAL
    int16_t acc_lim_min_x ;     //  Value that holds the raw accelerometer sensor value that will be used to represent -1G on the X sensor axis.    
    int16_t acc_lim_min_y ;     //  Value that holds the raw accelerometer sensor value that will be used to represent -1G on the Y sensor axis.  
    int16_t acc_lim_min_z ;     //  Value that holds the raw accelerometer sensor value that will be used to represent -1G on the Z sensor axis.  
    int16_t acc_lim_max_x ;     //  Value that holds the raw accelerometer sensor value that will be used to represent +1G on the X sensor axis.
    int16_t acc_lim_max_y ;     //  Value that holds the raw accelerometer sensor value that will be used to represent +1G on the Y sensor axis.
    int16_t acc_lim_max_z ;     //  Value that holds the raw accelerometer sensor value that will be used to represent +1G on the Z sensor axis.
    //AHRS_RAW_DATA
    int16_t ahrs_raw_acc_x;     // The last raw accelerometer sensor value measured on the X-axis. This field is used during functional testing and can be used to assist with the accelerometer calibration procedure.
    int16_t ahrs_raw_acc_y;     // The last raw accelerometer sensor value measured on the y-axis. This field is used during functional testing and can be used to assist with the accelerometer calibration procedure.
    int16_t ahrs_raw_acc_z;     // The last raw accelerometer sensor value measured on the Z-axis. This field is used during functional testing and can be used to assist with the accelerometer calibration procedure.
    int16_t ahrs_raw_mag_x ;    // The last raw magnetometer sensor value measure on the X-axis. This field is used during functional testing and can be used to assist with the magnetometer calibration procedure (in conjunction with the accelerometer orientation value).
    int16_t ahrs_raw_mag_y ;    // The last raw magnetometer sensor value measure on the y-axis. This field is used during functional testing and can be used to assist with the magnetometer calibration procedure (in conjunction with the accelerometer orientation value).
    int16_t ahrs_raw_mag_z ;    // The last raw magnetometer sensor value measure on the Z-axis. This field is used during functional testing and can be used to assist with the magnetometer calibration procedure (in conjunction with the accelerometer orientation value).
    int16_t ahrs_raw_gyro_x ;   // The last raw rate of rotation measured around the X-axis of the gyroscope sensor. Values are encoded in degrees-per-second.
    int16_t ahrs_raw_gyro_y ;   // The last raw rate of rotation measured around the Y-axis of the gyroscope sensor. Values are encoded in degrees-per-second.
    int16_t ahrs_raw_gyro_z ;   // The last raw rate of rotation measured around the Z-axis of the gyroscope sensor. Values are encoded in degrees-per-second.
    //AHRS_COMP_DATA
    float ahrs_comp_acc_x   ;   //  The ahrs_raw_acc_x sensor reading after the calibration coefficients have been applied.
    float ahrs_comp_acc_y   ;   //  The ahrs_raw_acc_y sensor reading after the calibration coefficients have been applied. 
    float ahrs_comp_acc_z   ;   //  The ahrs_raw_acc_z sensor reading after the calibration coefficients have been applied.
    float ahrs_comp_mag_x   ;   //  The ahrs_comp_mag_x sensor reading after the calibration coefficients have been applied.  
    float ahrs_comp_mag_y   ;   //  The ahrs_comp_mag_y sensor reading after the calibration coefficients have been applied.
    float ahrs_comp_mag_z   ;   //  The ahrs_comp_mag_z sensor reading after the calibration coefficients have been applied.
    float ahrs_comp_gyro_x  ;   //  The ahrs_comp_gyro_x sensor reading after the calibration coefficients have been applied.
    float ahrs_comp_gyro_y  ;   //  The ahrs_comp_gyro_y sensor reading after the calibration coefficients have been applied.
    float ahrs_comp_gyro_z  ;   //  The ahrs_comp_gyro_z sensor reading after the calibration coefficients have been applied.

    void outputFlagsComp()
    {
      outputflags_list[0]=  (0x01 & output_flags) ;  // When set, appends environmental sensor data fields (temperature, depth, VOS, supply voltage etc) to the end of the status output message
      outputflags_list[1]=  (0x02 & output_flags) ;  // When set, appends the AHRS attitude (yaw, pitch, roll) fields to the end of the status output message.
      outputflags_list[2]=  (0x04 & output_flags) ;  // When set, appends magnetometer calibration and buffer fields to the end of the status output message
      outputflags_list[3]=  (0x08 & output_flags) ;  // When set, appends accelerometer calibration and limits fields to the end of the status output message.
      outputflags_list[4]=  (0x10 & output_flags) ;  // When set, appends raw sensor data fields to the end of the status output message.
      outputflags_list[5]=  (0x20 & output_flags) ;  // When set, appends compensated sensor data fields to the end of the status output message
    }

  };


  struct CidPingRespMsg{

    Acofix_t aco_fix;
  };

  struct CidNavBeaconPosUpdateMsg{

    Acofix_t aco_fix;      //A Fix structure containing information relating to signal from the beacon sending data. This will not contain range or position information, but will contain the message SRC_ID.
    uint8_t beacon_id;     //The ID code of the beacon this position refers to. Valid values are form 1 to 15. NB: This ID code does not necessarily refer to the local beacon (although it may).
    int16_t position_easting;   //The Easting distance component of the beacon specified by beacon_id relative to the USBL head (or sender of this message). This value must be encoded in deci-meters, so divide the value by 10 to obtain a distance in metres.
    int16_t position_northing;  //The Northing distance component of the beacon specified by beacon_id relative to the USBL head (or sender of this message). This value must be encoded in deci-meters, so Page 133SeaTrac Serial Command Interface Reference divide the value by 10 to obtain a distance in metres.
    int16_t position_depth;     //The vertical Depth distance component of the beacon specified by beacon_id relative to the USBL head (or sender of this message). This value must be encoded in deci-meters, so divide the value by 10 to obtain a distance in metre
  };

  struct CidPingRequestMsg{

    Acofix_t aco_fix;

  };

  struct CidNavBeaconPosSendMsg{
    uint8_t beacon_id;     
    int16_t position_easting;   
    int16_t position_northing; 
    int16_t position_depth; 
    // response 
    uint8_t status ;
  };

  struct  CidPingErrorMsg{
    CST_E status; 
    uint8_t beacon_id; 
  };

  struct CidNavQueryReqMsg{
    Acofix_t aco_fix;
    uint8_t nav_query_t; //Bit mask that contains the fields the CID_NAV_QUERY_SEND message specified.
 

   };
  struct CidPingSendMsg{
    
    //Command Message Parameters
    uint8_t dest_id;
    AmsgType_E msg_type;

    //Response Message Parameters
    CST_E status;
    uint8_t beacon_id;
  };

  struct  CidSettingsSetMsg{
    uint8_t status;
  };
  struct  CidSettingsSaveMsg{
    uint8_t status;
  };


  struct  CidNavRefPosSendMsg{

    int32_t position_latitude ; //INT32 The latitude part of the local beacons position, used as the reference position from which relative Northing/Easting/Depth positions are based. This value must be encoded in milliseconds of arc angle – i.e. value in degrees multiplied by 3600000.
    int32_t position_longitude; //INT32 The longitude part of the local beacons position, used as the reference position from which relative Northing/Easting/Depth positions are based. This value must be encoded in milliseconds of arc angle – i.e. value in degrees multiplied by 3600000.
    uint8_t status;
  };

 struct  CidNavRefPosUpdateMsg{
    Acofix_t aco_fix;  //A Fix structure containing information relating to signal from the beacon sending data. This will not contain range or position information, but will contain the message SRC_ID.
    uint8_t beacon_id       ;       //BID_E The ID code of the beacon this position refers to. Valid values are form 1 to 15. NB: This ID code does not necessarily refer to the local beacon (although it may).
    int32_t position_latitude; //INT32 The latitude part of the sending beacons position, used as the reference position from which relative Northing/Easting/Depth positions are based. This value is encoded in milliseconds of arc angle, so divide by 3600000 to obtain a value in decimal degrees.
    int32_t position_longitude; //INT32  he longitude part of the sending beacons position,  sed as the reference position from which relative  orthing/Easting/Depth positions are based.  his value is encoded in milliseconds of arc angle,  o divide by 3600000 to obtain a value in decimal  egrees.
};
    struct  CidDatReceiveMsg{

    Acofix_t aco_fix;   // A Fix structure containing information relating to the range and position of the beacon sending data. Messages generated at the remote beacon (or MSG_OWAY/MSG_OWAYU types were used) will not contain range or position information.
    uint8_t ack_flag;        // Flag is true if this message has been generated as a response to a CID_DAT_SEND command which requested an ACK – in which case, remotely queued data may have also been transmitted back and in included in this message.
    uint8_t packet_len;      // The number of bytes sent in the DAT acoustic packet. Valid values are from 0 to 31. A value of 0 indicate no data is present.
    char packet_data[31];    // The array of data received in the DAT acoustic packet, where “x

    int  data_rec_flag;
    uint8_t indice;
    uint8_t n_sub_messages;
    uint8_t n_sub_messages_last;
    std::string full_msg; 

    int 
    packetDataDecode() 
    {
        std::memcpy(&indice , packet_data + 0     , 1);
        std::memcpy(&n_sub_messages , packet_data + 1     , 1);

        if (data_rec_flag==0 && indice!=n_sub_messages && indice!=1 )   
            return -1; 
       else if( (indice==1)==n_sub_messages)
       {
        full_msg="";
       }
       else if ( n_sub_messages >1 )
       {   
            if (data_rec_flag==0 && indice==1)
            {
                data_rec_flag=1;
                full_msg="";
                full_msg.assign(packet_data + 2,packet_len-2);
                n_sub_messages_last=n_sub_messages;
                return 0;
            }
             else if (data_rec_flag!=0)
            {
                data_rec_flag++;
                if(data_rec_flag==indice)
                {
                     full_msg.append(packet_data+2, packet_len-2 );

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
      full_msg.assign(packet_data + 2,packet_len-2);  
      data_rec_flag=0;     
      return 1;
    }

    uint8_t  
    getFullMsg(std::string& msg )
    {   msg=full_msg;
        full_msg.clear();
        return 0;
    }

   };

  struct  CidDatSendMsg{
    //Command Message Parameters
    uint8_t dest_id;         //The ID code of the beacon to send the DATA to. Valid values are form 0 to 15. A value of BEACON_ALL (0) indicates data is broadcast to all other beacons. However when this is used the SEND_MODE value can only be NOACK or NACK_USBL.
    AmsgType_E msg_type;//AMSGTYPE_E Value specifying the type of data message that should be sent Valid values are... MSG_OWAY  or MSG_OWAYU or  MSG_REQ  or MSG_REQU  or MSG_REQX 
    uint8_t packet_len;      //The number of bytes to send in the DAT acoustic packet. Valid values are from 0 to 31.
    std::string packet_data; // The array of data that should be sent in the DAT acoustic packet, where “x” is the value specified in packet_len.
    //Response Message Parameters
    CST_E status;            //status code indicating the error that occurred. Valid values are... CST_XCVR_RESP_TIMEOUT  or  CST_XCVR_RESP_WRONG  or     CST_XCVR_RESP_ERROR      
    uint8_t beacon_id;       //The ID code of the beacon that the error applies to (i.e. the dest_id value used in the CID_DAT_SEND command). Valid values are form 1 to 15.
    //state machine 
    int  lock_flag;
    uint8_t n_sub_messages;
    int n_sub_rest;
    uint8_t message_indice; 
    std::string hex;
    int error_number; 
    Time::Counter<double> msgTimer;

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
            packet_data=String::str("%02X%02X", message_indice ,  n_sub_messages);
            packet_len=(4+msg.size())/2;
            packet_data+=hex.substr(0,hex.size());
          }
          else 
          {
            n_sub_messages=hex.size()/(MAX_PACKET_LEN*2-4);
            n_sub_rest=hex.size()%(MAX_PACKET_LEN*2-4);
            if (n_sub_rest!=0)
            n_sub_messages++;
            packet_data=String::str("%02X%02X", message_indice ,  n_sub_messages);
            packet_len=MAX_PACKET_LEN;  
            packet_data+=hex.substr(0,(packet_len*2-4));          
          }
        
          
       return 0;
      }

      return erro_code;
    }
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
          packet_data=String::str("%02X%02X", message_indice ,  n_sub_messages);
          n_sub_rest=hex.size()-(message_indice-1)*(packet_len*2-4);
          packet_len=MAX_PACKET_LEN; 
          
            if (n_sub_rest<=(packet_len*2-4))
                {
                    packet_data+=hex.substr(((packet_len*2-4)*(message_indice-1)), n_sub_rest );
                    packet_len=n_sub_rest/2+2; 
                 }
               else packet_data+=hex.substr(((packet_len*2-4)*(message_indice-1)), (packet_len*2-4) );   
         }   
        else
        {
            lock_flag=0;
            return -1;
        }

      }
      else {error_number++;  if (MAX_MESSAGE_ERRORS== error_number) lock_flag=0; return error_number;}
      //re-send same msg
      return 0 ;
    }

    int
    packetDataSendStatus()
    {
      return lock_flag;  
    }
  };

  struct CidSettingsMsg { 

    uint8_t status_flags    ;       //Value containing flags that control the generation and output of CID_STATUS messages. Bit values are... Bits[7:3] = RESERVED Reserved for future use, treat as 0’s. Bits[2:0] = STATUS_MODE Specifies how often periodic status output~messages are generated. Mask and then treat as a STATUSMODE_E value.
    uint8_t status_output   ;       //A bit-mask specifying which information should beincluded in generated status output messages.For each bit set in this mask, a correspondinggroup of output fields will be appended to statusmessages (making them larger in size).For details of how these fields affect the statusmessage content, see CID_STATUS.
    uint8_t uart_main_baud  ;       //Specifies the serial baud rate to be used by the main communications port.
    uint8_t uart_aux_baud   ;       //Reserved for future use.When populating this field, use a default value of BAUD_115200.
    MacAddr_T net_mac_addr  ;       //Reserved for future use. When populating this structure, use a default value of 0.
    IpAddr_T net_ip_addr    ;       //Reserved for future use. When populating this structure, use a default value of 0xC0A801FA (192.168.1.250).
    IpAddr_T net_ip_subnet  ;       //Reserved for future use. When populating this structure, use a value of 0xFFFF0000 (255.255.0.0).
    IpAddr_T net_ip_gateway ;       //Reserved for future use. When populating this structure, use a default value of 0xC0A80101 (192.168.1.1).
    IpAddr_T net_ip_dns     ;       //Reserved for future use. When populating this structure, use a default value of 0xC0A80101 (192.168.1.1).
    uint16_t net_tcp_port   ;       //Reserved for future use. When populating this structure, use a default value of 8100.
    uint8_t  env_flags      ;       //This value contains flags that control the processing of the beacons environmental sensors (pressure, temperature, supply voltage etc). Bit values are...  Bits[7:2] = RESERVED Reserved for future use.  Bit[1] = AUTO_PRESSURE_OFS When this flag is true, the pressure offset is automatically chosen using the minimum observed pressure reading when the beacon is in less than  3m of water (0.3 bar). The assumption is than when fitted to an ROV this value will be seen on deck after the ROV is powered up, but if power is cycled when the beacon is below 3m, the pressure offset will not be updated.  Bit[0] = AUTO_VOS When this flag is true, the velocity-of-sound used in range timing equations is automatically computed form the current water pressure, temperature and manually specified salinity. VOS is calculated using the Coppens 1981 equation where temperature is valid over 0°C to 45°C, salinity over 0ptt to 35ppt and depth over 0m to 4000m.
    int32_t env_pressure_ofs;       //The manually specified offset applied to readings take from the pressure sensor to compensate for altitude and atmospheric pressure changes. Values are encoded in milli-Bars, so divide by 1000 to obtain a value in Bars. Valid values lie in the range -1 to 1000 Bar. If auto-computation of pressure offset is enabled (in env_flags), then any value written to this field will be lost the next time the offset is calculated.
    uint16_t env_salinity   ;       //The salinity value used when computing the velocity-of-sound from current pressure/depth. Values are encoded as deci-parts-per-thousand (i.e. a value of 345 represents 34.5 ppt), so divide this value by 10 to obtain a value in ppt. Typically a value of 0 represents fresh water, while 350 (35ppt) represents average sea water. Values are valid in the range 0 to 100ppt. If auto-computation of VOS is disabled (in env_flags) then this value is not used.
    uint16_t env_vos        ;       //The manually specified velocity of sound (VOS) to be used to convert range timing information into distances. Values are encoded in deci-metres-per-second, so divide by 10 to obtain a value in metres-per- second. Valid values are in the range 100ms -1 to 2000ms -1 . If auto-computation of VOS is enabled (in env_flags), then any value written to this field will be lost the next time the VOS is calculated.
    uint8_t  ahrs_flags     ;       //This value contains flags that control the operation of the beacons AHRS system. Bit values are...  Bits[7:1] = RESERVED Reserved for future use. Page 58SeaTrac Serial Command Interface Reference  Bit[0] = AUTO_CAL_MAG When this bit is true, automatic (dynamic) calibration of the magnetometer is enabled. In this mode, the magnetic field surrounding the beacon is continuously samples as the beacon is rotated through space, and every 30s a new calibration is attempted. If the results are better than the current calibration, then the new coefficients are accepted.
    AhrsCal_t ahrs_cal      ;       //Structure containing the calibration data for the Attitude/Heading Reference System (AHRS).
    uint16_t ahrs_yaw_ofs   ;       //fixed attitude yaw offset that is applied to all AHRS reading. Offsets are applied to the AHRS output via a Direction-Cosine-Matrix, in the Euler sequence Yaw, Pitch then Roll. Values are encoded as deci-degrees, so divide the value by 10 to obtain a value in degrees. Valid values are cyclically wrapped to the range 0° to 359.9°.
    uint16_t ahrs_pitch_ofs ;       //fixed attitude pitch offset that is applied to all AHRS reading. Offsets are applied to the AHRS output via a Direction-Cosine-Matrix, in the Euler sequence Yaw, Pitch then Roll. Values are encoded as deci-degrees, so divide the value by 10 to obtain a value in degrees. Valid values are clipped to the range -90.0° to +90.0°.
    uint16_t ahrs_roll_ofs  ;       //fixed attitude roll offset that is applied to all AHRS reading. Offsets are applied to the AHRS output via a Direction-Cosine-Matrix, in the Euler sequence Yaw, Pitch then Roll. Values are encoded as deci-degrees, so divide the value by 10 to obtain a value in degrees. Valid values are clipped to the range -180.0° to +180.0°.
    uint8_t  xcvr_flags     ;       //Value containing flags to control the operation of the acoustic transceiver. Bit values are... Page 59SeaTrac Serial Command Interface Reference Bit[7] = XCVR_DIAG_MSGS When this flag is true a series of diagnostic status messages will be generated by triggering events processed by the acoustic transceiver – for further details see the following commands... CID_XCVR_TX_MSG, CID_XCVR_RX_ERR CID_XCVR_RX_MSG, CID_XCVR_RX_REQ CID_XCVR_RX_RESP, CID_XCVR_RX_RESP_ERROR CID_XCVR_RX_UNHANDLED Bit[6] = XCVR_FIX_MSGS When this flag is true, a CID_XCVR_FIX status message will be generated on successful reception of an acoustic response message. The fix message contains details relating to distance, position and depth of the remote beacon. Bit[5] = XCVR_USBL_MSGS When this flag is true, a CID_XCVR_USBL status message is generated on successfully reception of an acoustic message containing USBL signal information. Bits[4:1] = RESERVED Reserved for future use. Bit[0] = USBL_USE_AHRS When this flag is true the acoustic transceiver will use the current AHRS attitude (updated internally at a 50Hz rate) when resolving relative positions of remote beacons to the local beacon. When the flag is false, the fixed attitude specified in the xcvr_yaw, xcvr_pitch and xcvr_roll fields will be used.
    uint8_t  xcvr_beacon_id ;       //The identification code the local beacon will accept messages addressed to, or use as the source identifier when sending messages. Valid values are from 1 to 15 (0x1 to 0xF). A value of 0 (BEACON_ALL) should not be used.
    uint16_t xcvr_range_tmo ;       //The range timeout specifies a distance (related to time by the VOS setting) beyond which responses from beacons are ignored, and the remote beacon is considered to have timed out (see CID_XCVR_RX_RESP_ERROR messages). Values are encoded in metres. Valid values are in the range 100m to 3000m. Page 60SeaTrac Serial Command Interface Reference
    uint16_t xcvr_resp_time ;       //The response turnaround time specifies how long the beacon will wait between receiving a request message and starting transmission of the response message. All beacons communicating acoustically within the same network must use the same value otherwise range errors will be observed. Typically, larger values than the default of 10ms can be used to reduce multi-path issues in confined spaces and allow echoes to die down before the response is sent, but should only be adjust if communication reliability issues are observed. Values are encoded in milliseconds. Valid values are in the range 10ms to 1000ms.
    uint16_t xcvr_yaw       ;       //When the AHRS attitude is not used to specify the transceiver attitude, this value is used as the manually specified yaw attitude from which relative positions of remote beacons to the local beacon are computed. Attitudes are applied in the position calculation routine via a Direction-Cosine-Matrix, in the Euler sequence Yaw, Pitch then Roll. Values are encoded as deci-degrees, so divide the value by 10 to obtain a value in degrees. Valid values are cyclically wrapped to the range 0° to 359.9°.
    uint16_t xcvr_pitch     ;       //When the AHRS attitude is not used to specify the transceiver attitude, this value is used as the manually specified pitch attitude from which relative positions of remote beacons to the local beacon are computed. Attitudes are applied in the position calculation routine via a Direction-Cosine-Matrix, in the Euler sequence Yaw, Pitch then Roll. Values are encoded as deci-degrees, so divide the value by 10 to obtain a value in degrees. Valid values are clipped to the range -90.0° to +90.0°.
    uint16_t xcvr_roll      ;       //When the AHRS attitude is not used to specify the transceiver attitude, this value is used as the manually specified roll attitude from which relative positions of remote beacons to the local beacon are computed. Attitudes are applied in the position calculation routine via a Direction-Cosine-Matrix, in the Euler sequence Yaw, Pitch then Roll. Values are encoded as deci-degrees, so divide the value by 10 to obtain a value in degrees. Valid values are clipped to the range -180.0° to +180.0°.
    uint8_t xcvr_posflt_vel ;       //The maximum velocity limit (in metres per second) that the position filter expects to see a beacon move at. Position Fix outputs for Beacons that have moved faster than this in the time between pings will be marked as a position error.
    uint8_t xcvr_posflt_ang ;       // For beacons that are further away, azimuth errors start to come into play. This value defines the angular limits that beacons can move (or position jitter) within without being marked as an error. Vales are specified in degrees, and typically this value is 10 degrees.
    uint8_t xcvr_posflt_tmo ;       // This timeout limit specified in seconds that maximum time that a beacon is not communicated with before its position filter is reset, allowing its next position (what ever that may be) to be marked as valid. For example, a value of 60 seconds means that if no communications have been made with the beacon for 60 seconds, then its position could be far outside the limits expected by the position filter, so allow its position and restart tracking on the next fix.

   };

  struct CidXcvrFixMsg{


      Acofix_t  aco_fix ;
    };

  struct CidSysRebootMsg{

      uint8_t  status; 
    };


  struct CidNavQuerySendMsg{
    uint8_t dest_id ;
    uint8_t query_flags;
    uint8_t status ;
  };
  struct CidNavQuerryRespMsg{

    Acofix_t  aco_fix ;
    uint8_t query_flags;
    int32_t remote_depth  ;      //INT32  The remote beacons depth based on the measured environmental pressure. Values are encoded in deci-metres, so divide by 10 for a value in metres. See note above regarding enhanced resolution when using the QRY_DEPTH flag.
    int16_t remote_supply ;      //UINT16 The remote beacons supply voltage. Values are encoded in milli-volts, so divide by 1000 for a value in Volts.
    int16_t remote_temp   ;      //INT16 The temperature of air/water in contact with the diaphragm of the pressure sensor or the remote beacon. Values are encoded in deci-Celsius, so divide by 10 to obtain a value in Celsius.
    int16_t remote_yaw    ;      //INT16 The Yaw angle of the remote beacon, relative to magnetic north, measured by the beacons AHRS system. Values are encoded as deci-degrees, so divide the value by 10 to obtain a value in degrees.
    int16_t remote_pitch  ;      //INT16 The Pitch angle of the remote beacon, relative to magnetic north, measured by the beacons AHRS system. Values are encoded as deci-degrees, so divide the value by 10 to obtain a value in degrees.
    int16_t remote_roll   ;      //INT16 The Roll angle of the remote beacon, relative to magnetic north, measured by the beacons AHRS system. Values are encoded as deci-degrees, so divide the value by 10 to obtain a value in degrees.
    uint8_t query_flags_list[4]; 

    void   queryFlagsExtract()
    {
      query_flags_list[0]=  (0x01 & query_flags) ;  
      query_flags_list[1]=  (0x02 & query_flags) ;  
      query_flags_list[2]=  (0x04 & query_flags) ;  
      query_flags_list[3]=  (0x08 & query_flags) ;  

    }
  };


 }
}
#endif