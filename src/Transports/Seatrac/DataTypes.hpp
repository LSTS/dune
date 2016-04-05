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
#ifndef TRANSPORTS_SEATRAC_DATATYPES_HPP_INCLUDED_
#define TRANSPORTS_SEATRAC_DATATYPES_HPP_INCLUDED_


#define MESSAGE_NUMBER (0x77 +0x1)
#define MAX_MESSAGE_ERRORS 5
#define MAX_PACKET_LEN 31
#define MAX_MESSAGE_PERIOD 30

namespace Transports
{
  namespace Seatrac
  {
  using DUNE_NAMESPACES;

 

   // States of the internal SM.
  enum ParserStates
  {
    // No message is being parsed.
    PS_NONE,
    // Preamble.
    PS_PRE,
    // Data bytes.
    PS_DATA,
    // Parsing complete
    PS_COMPLETE
    

  };

  // Command Identification Codes
  enum CommandID {
  
    CID_SYS_ALIVE             =  0x01, //Command sent to receive a simple alivemessage from the beacon. 
    CID_SYS_INFO              =  0x02, //Command sent to receive hardware &firmware identification information.
    CID_SYS_REBOOT            =  0x03, //Command sent to soft reboot the beacon. 
    CID_SYS_ENGINEERING       =  0x04, //Command sent to perform engineeringa ctions.Firmware Programming Messages
    CID_PROG_INIT             =  0x0D, //Command sent to initialise a firmware programming sequence. 
    CID_PROG_BLOCK            =  0x0E, //Command sent to transfer a firmware programming block. 
    CID_PROG_UPDATE           =  0x0F, //Command sent to update the firmware once program transfer has completed. status Messages 
    CID_STATUS                =  0x10, //Command sent to request the current system status (AHRS, Depth, Temp, etc). 
    CID_STATUS_CFG_GET        =  0x11, //Command sent to retrieve the configuration of the status system (message content and auto-output interval). 
    CID_STATUS_CFG_SET        =  0x12, //Command sent to set the configuration of the status system (message content and auto- output interval). 
    CID_SETTINGS_GET          =  0x15, //Command sent to retrieve the working settings in use on the beacon. 
    CID_SETTINGS_SET          =  0x16, //Command sent to set the working settings and apply them. They are NOT saved to permanent memory until CID_SETTINGS_SAVE is issued. The device will need to be rebooted after this to apply some of the changes. 
    CID_SETTINGS_LOAD         =  0x17, //Command sent to load the working settings from permanent storage and apply them. Not all settings can be loaded and applied as they only affect the device on start-up. 
    CID_SETTINGS_SAVE         =  0x18, //Command sent to save the working settings into permanent storage. 
    CID_SETTINGS_RESET        =  0x19, //Command sent to restore the working settings to defaults, store them into permanent memory and apply them. Calibration Messages 
    CID_CAL_ACTION            =  0x20, //Command sent to perform specific calibration actions. 
    CID_AHRS_CAL_GET          =  0x21, //Command sent to retrieve the current AHRS calibration. 
    CID_AHRS_CAL_SET          =  0x22, //Command sent to set the contents of the current AHRS calibration (and store to memory)/ Acoustic Transceiver Messages 
    CID_XCVR_ANALYSE          =  0x30, //Command sent to instruct the receiver to perform a noise analysis and report the results. 
    CID_XCVR_TX_MSG           =  0x31, //Message sent when the transceiver transmits a message. 
    CID_XCVR_RX_ERR           =  0x32, //Message sent when the transceiver receiver encounters an error. 
    CID_XCVR_RX_MSG           =  0x33, //Message sent when the transceiver receives a message (not requiring a response). 
    CID_XCVR_RX_REQ           =  0x34, //Message sent when the transceiver receives a request (requiring a response).
    CID_XCVR_RX_RESP          =  0x35, //Message sent when the transceiver receives a response (to a transmitted request). 
    CID_XCVR_RX_UNHANDLED     =  0x37, //Message sent when a message has been received but not handled by the protocol stack. 
    CID_XCVR_USBL             =  0x38, //Message sent when a USBL signal is decoded into an angular bearing.  
    CID_XCVR_FIX              =  0x39, //Message sent when the transceiver gets a position/range fix on a beacon from a request/response. 
    CID_XCVR_STATUS           =  0x3A, //Message sent to query the current transceiver state. PING Protocol Messages 
    CID_PING_SEND             =  0x40, //Command sent to transmit a PING message. 
    CID_PING_REQ              =  0x41, //Message sent when a PING request is received. 
    CID_PING_RESP             =  0x42, //Message sent when a PING response is received, or timeout occurs, with the echo response data. 
    CID_PING_ERROR            =  0x43, //Message sent when a PING response error/timeout occurs. ECHO Protocol Messages 
    CID_ECHO_SEND             =  0x48, //Command sent to transmit an ECHO message.
    CID_ECHO_REQ              =  0x49, //Message sent when an ECHO request is received. 
    CID_ECHO_RESP             =  0x4A, //Message sent when an ECHO response is received, or timeout occurs, with the echo response data. 
    CID_ECHO_ERROR            =  0x4B, //Message sent when an ECHO response error/timeout occurs. NAV Protocol Messages 
    CID_NAV_QUERY_SEND        =  0x50, //Message sent to query navigation information from a remote beacon.  
    CID_NAV_QUERY_REQ         =  0x51, //Message sent from a beacon that receives a NAV_QUERY.
    CID_NAV_QUERY_RESP        =  0x52, //Message generated when the beacon received a response to a NAV_QUERY. 
    CID_NAV_ERROR             =  0x53, //Message generated if there is a problem with a NAV_QUERY - i.e. timeout etc. 
    CID_NAV_REF_POS_SEND      =  0x54, //Message issued to broadcast a reference position (latitude and longitude) to all other beacons.
    CID_NAV_REF_POS_UPDATE    =  0x55, //Message generated when a beacon receives a NAV_REF_POS message.
    CID_NAV_BEACON_POS_SEND   =  0x56, //Message issued to broadcast the relative position (NED) of a beacon to all other beacons
    CID_NAV_BEACON_POS_UPDATE =  0x57, //Message generated when a beacon receives a NAV_BEACON_POS message. DAT Protocol Messages
    CID_DAT_SEND              =  0x60, //Message sent to transmit a datagram to another beacon 
    CID_DAT_RECEIVE           =  0x61, //Message generated when a beacon receives a datagram. 
    CID_DAT_ERROR             =  0x63, //Message generated when a beacon response error/timeout occurs for ACKs. 
    CID_DAT_QUEUE_SET         =  0x64, //Message sent to set the contents of the packet data queue.
    CID_DAT_QUEUE_CLR         =  0x65, //Message sent to clear the contents of the packet data queue.
    CID_DAT_QUEUE_STATUS      =  0x66, //Message sent to obtain the current status of the packet data queue. DEX Protocol Messages
    CID_DEX_CLOSE             =  0x70, //Command sent to close a socket used for data exchange between beacons, and free memory resources. 
    CID_DEX_DEBUG             =  0x71, //Command sent to get information about a specified socket, including buffer space used and free, and data pending transfer.  
    CID_DEX_ENQUEUE           =  0x72, //Command sent to add data onto a socket buffer pending transfer. 
    CID_DEX_OPEN              =  0x73, //Command sent to create a new socket for Page 38SeaTrac Serial Command Interface Reference data exchange between beacons. 
    CID_DEX_RESET             =  0x74, //Command sent to reset the buffers and state of a socket. 
    CID_DEX_SEND              =  0x75, //Command sent to initiate a transfer of data pending on the specified socket. 
    CID_DEX_SOCKETS           =  0x76, //Command sent to retrieve a list of open sockets on the beacon, and a summary of data pending transfer on each one. 
    CID_DEX_RECEIVE           =  0x77  //Message sent when the beacon has received data through a socket.
    
  };
  
  enum AmsgType_E{
    
    MSG_OWAY    = 0x0 , // Indicates an acoustic message is sent One-Way, and does not require a response. One-Way messages may also be broadcast to all beacons if required. No USBL information is sent.
    MSG_OWAYU   = 0x1 , // Indicates an acoustic message is sent One- Way, and does not require a response. One-Way messages may also be broadcast to all beacons if required Additionally, the message is sent with USBL acoustic information
    MSG_REQ     = 0x2 , // Indicates an acoustic message is sent as a Request type. This requires the receiver to generate and return a Response (MSG_RESP) message. 
    MSG_RESP    = 0x3 , // Indicate an acoustic message is sent as a Response to a previous Request message (MSG_REQ).
    MSG_REQU    = 0x4 , // Indicates an acoustic message is sent as a Request type. This requires the receiver to generate and return a Response (MSG_RESP) message.
    MSG_RESPU   = 0x5 , // Indicate an acoustic message is sent as a Response to a previous Request message  (MSG_REQ).
    MSG_REQX    = 0x6 , // Indicates an acoustic message is sent as a Request type. This requires the receiver to generate and return a Response (MSG_RESP) message.
    MSG_RESPX   = 0x7 , // Indicate an acoustic message is sent as a Response to a previous Request message (MSG_REQ).
    MSG_UNKNOWN = 0xFF  // This value is NEVER used to specify a message type when sending Acoustic Messages. However, on occasions certain structures need to specify “No Message Type”
  };

  enum CST_E {
    //  General status Codes
    CST_OK                      = 0x00 ,   //Returned if a command or operation is completed successful without error.
    CST_FAIL                    = 0x01 ,   //Returned if a command or operation cannot be completed.
    CST_EEPROM_ERROR            = 0x03 ,   //Returned if an error occurs while reading or writing EEPROM data.
    //  Command Processor status Codes
    CST_CMD_PARAM_MISSING       = 0x04 ,   //Returned if a command message is given that does not have enough defined fields for the specified CommandID code.
    CST_CMD_PARAM_INVALID       = 0x05 ,   //Returned if a data field in a message does not contain a valid or expected value.
    //  Firmware Programming status Codes
    CST_PROG_FLASH_ERROR        = 0x0A ,   //Returned if an error occurs while writing data into the processors flash memory.
    CST_PROG_FIRMWARE_ERROR     = 0x0B ,   //Returned if firmware cannot be programmed due to incorrect firmware credentials or signature.
    CST_PROG_SECTION_ERROR      = 0x0C ,   //Returned if the firmware cannot be programmed into the specified memory section.
    CST_PROG_LENGTH_ERROR       = 0x0D ,   //Returned if the firmware length is too large to fit into the specified memory section, or not what the current operation is expecting. Page 40SeaTrac Serial Command Interface Reference
    CST_PROG_DATA_ERROR         = 0x0E ,   //Returned if there is an error decoding data in a firmware block.
    CST_PROG_CHECKSUM_ERROR     = 0x0F ,   //Returned if the specified checksum for the firmware does not match the checksum computed prior to performing the update.
    //  Acoustic Transceiver status Codes
    CST_XCVR_BUSY               = 0x30 ,   //Returned if the transceiver cannot perform a requested action as it is currently busy (i.e. transmitting a message).
    CST_XCVR_ID_REJECTED        = 0x31 ,   //Returned if the received message did not match the specified transceiver ID (and wasn’t a Sent-To-All), and the message has been rejected.
    CST_XCVR_CSUM_ERROR         = 0x32 ,   //Returned if received acoustic message’s checksum was invalid, and the message has been rejected.
    CST_XCVR_LENGTH_ERROR       = 0x33 ,   //Returned if an error occurred with message framing, meaning the end of the message has not been received within the expected time.
    CST_XCVR_RESP_TIMEOUT       = 0x34 ,   //Returned if the transceiver has sent a request message to a beacon, but no response has been returned within the allotted waiting period.
    CST_XCVR_RESP_ERROR         = 0x35 ,   //Returned if the transceiver has send a request message to a beacon, but an error occurred while receiving the response.
    CST_XCVR_RESP_WRONG         = 0x36 ,   //Returned if the transceiver has sent a request message to a beacon, but received an unexpected response from another beacon while waiting.
    CST_XCVR_PLOAD_ERROR        = 0x37 ,   //Returned by protocol payload decoders, if the payload can’t be parsed correctly.
    CST_XCVR_STATE_STOPPED      = 0x3A ,   //Indicates the transceiver is in a stopped state.
    CST_XCVR_STATE_IDLE         = 0x3B ,   //Indicates the transceiver is in an idle state waiting for reception or transmission to start.
    CST_XCVR_STATE_TX           = 0x3C ,   //Indicates the transceiver is in a transmitting states.
    CST_XCVR_STATE_REQ          = 0x3D ,   //Indicates the transceiver is in a requesting state, having transmitted a message and is waiting for a response to be received. Page 41SeaTrac Serial Command Interface Reference
    CST_XCVR_STATE_RX           = 0x3E ,   //Indicates the transceiver is in a receiving state.
    CST_XCVR_STATE_RESP         = 0x3F ,   //Indicates the transceiver is in a responding state, where a message is being composed and the “response time” period is being observed.
    //  DEX Protocol status Codes
    CST_DEX_SOCKET_ERROR        = 0x70 ,   //Returned by the DEX protocol handler if an error occurred trying to open, close or access a specified socket ID.
    CST_DEX_RX_SYNC             = 0x71 ,   //Returned by the DEX protocol handler when receiver synchronisation has occurred with the socket master and data transfer is ready to commence.
    CST_DEX_RX_DATA             = 0x72 ,   //Returned by the DEX protocol handler when data has been received through a socket.
    CST_DEX_RX_SEQ_ERROR        = 0x73 ,   //Returned by the DEX protocol handler when data transfer synchronisation has been lost with the socket master.
    CST_DEX_RX_MSG_ERROR        = 0x74 ,   //Returned by the DEX protocol handler to indicate an unexpected acoustic message type with the DEX protocol has been received and cannot be processed.
    CST_DEX_REQ_ERROR           = 0x75 ,   //Returned by the DEX protocol handler to indicate a error has occurred while responding to a request (i.e. lack of data).
    CST_DEX_RESP_TMO_ERROR      = 0x76 ,   //Returned by the DEX protocol handler to indicate a timeout has occurred while waiting for a response back from a remote beacon with requested data.
    CST_DEX_RESP_MSG_ERROR      = 0x77 ,   //Returned by the DEX protocol handler to indicate an error has occurred while receiving response back from a remote beacon.
    CST_DEX_RESP_REMOTE_ERROR   = 0x78     //Returned by the DEX protocol handler to indicate the remote beacon has encountered an error and cannot return the requested
  };


  struct MacAddr_T {
    union {
    uint64_t Addr;
    uint8_t bytes[6];
    };
  };

  struct IpAddr_T {
    union {
    uint32_t Addr;
    uint8_t bytes[4];
    };
  };
  
  struct AhrsCal_t {
    
    int16_t  acc_min_x    ;     //The accelerometer X-axis sensor value that corresponds to -1G of gravitational force. Valid values lie in the range -1000 to +1000. Default value is -270.
    int16_t  acc_min_y    ;     //The accelerometer Y-axis sensor value that corresponds to -1G of gravitational force. Valid values lie in the range -1000 to +1000. Default value is -270.
    int16_t  acc_min_z    ;     //The accelerometer Z-axis sensor value that corresponds to -1G of gravitational force. Valid values lie in the range -1000 to +1000. Default value is -270.
    int16_t  acc_max_x    ;     //The accelerometer X-axis sensor value that corresponds to +1G of gravitational force. Valid values lie in the range -1000 to +1000. Default value is 270.
    int16_t  acc_max_y    ;     //The accelerometer Y-axis sensor value that corresponds to +1G of gravitational force. Valid values lie in the range -1000 to +1000. Default value is 270.
    int16_t  acc_max_z    ;     //The accelerometer Z-axis sensor value that corresponds to +1G of gravitational force. Valid values lie in the range -1000 to +1000. Default value is 270.
    uint8_t  mag_valid    ;     //Flag is true when the calibration contains (or represents) a valid set of coefficients. Writing an invalid calibration causes no compensation to be performed on sensor values. Reading this flag as false indicates no dynamic calibration has been computed or loaded from EEPROM memory.
    float    mag_hard_x   ;     //The magnetometer X-axis sensor offset value to compensate for Hard Iron effects. Valid values lie in the range -2000 to +2000. Default value is 0.
    float    mag_hard_y   ;     //The magnetometer Y-axis sensor offset value to compensate for Hard Iron effects. Valid values lie in the range -2000 to +2000. Default value is 0.
    float    mag_hard_z   ;     //The magnetometer Z-axis sensor offset value to compensate for Hard Iron effects. Valid values lie in the range -2000 to +2000. Default value is 0.
    float    mag_soft_x   ;     //The magnetometer X-axis sensor scaling value to compensate for Soft Iron effects. Valid values lie in the range -10 to +10. Default value is 1.
    float    mag_soft_y   ;     //The magnetometer Y-axis sensor scaling value to compensate for Soft Iron effects. Valid values lie in the range -10 to +10. Default value is 1.
    float    mag_soft_z   ;     //The magnetometer Z-axis sensor scaling value to compensate for Soft Iron effects. Valid values lie in the range -10 to +10. Default value is 1.
    float    mag_field    ;     //The normalised (not actual) magnetic field used for magnetometer calibration. Valid values lie between 0 and 100, with a typical value for idea fit being 50. Default value is 0.
    float    mag_error    ;     //The fit error of the magnetic calibration. Values are expressed as a percentage between 0 and 100. Default value is 100 representing 100% error.
    int16_t  gyro_offset_x;     //The rotational rate gyroscope X-axis sensor offset. Valid values lie in the range -1000 to +1000. Default value of 0.
    int16_t  gyro_offset_y;     //The rotational rate gyroscope Y-axis sensor offset. Valid values lie in the range -1000 to +1000. Default value of 0.
    int16_t  gyro_offset_z;     //The rotational rate gyroscope Z-axis sensor offset. Valid values lie in the range -1000 to +1000. Default value of 0.
   };

  struct Acofix_t{

    uint8_t dest_id         ;  // The ID code of the beacon that this data is sent to 1 to F  0 broadcast to all.
    uint8_t src_id          ;  //The ID code of the beacon that sent the data.
    uint8_t flags           ;  
    uint8_t amsgtype_e      ;  //The type of acoustic message received to generate  - defenition in enum AmsgType_E
    int16_t attitude_yaw    ;  //The yaw angle (relative to magnetic north) of the local beacon when the fix was computed. Values are encoded as deci-Degrees, so divide by 10 for just degrees to a 0.1° resolution.
    int16_t attitude_pitch  ;  // The pitch angle of the local beacon when the fix was computed. Values are encoded as deci-Degrees, so divide by 10 for just degrees to a 0.1° resolution.
    int16_t attitude_roll   ;  // The roll angle of the local beacon when the fix was computed. Values are encoded as deci-Degrees, so divide by 10 for just degrees to a 0.1° resolution.
    int16_t depth_local     ;  // he reading from the local beacon depth sensor when the fix was calculated. Values are encoded in decimetres, so divide by 10 to obtain a value in metres to a 0.1m resolution.
    uint16_t vos            ;  // The velocity of sound value used for the computation of the remote beacon’s range based on timing information. Values are encoded in decimetres-per-second, so divide by 10 for a value in metres-per-second.
    int16_t rssi            ;  // The Received Signal Strength Indicator value for the received message, encoded in centibels. To decode, divide this value by 10 for decibels to a 0.1 dB resolution.
    //Range fields
    uint32_t range_count    ;  // The number of 16kHz timer intervals that were counted between Request message transmission and Response message reception.
    uint32_t range_time     ;  // The time in seconds derived from the RANGE_COUNT value, and with internal timing offsets and compensation applied. Values are encoded in 100 nanosecond multiples, so divide by 10000000 to obtain a value in seconds.
    uint16_t range_dist     ;  // The resolved line-of-sight distance to the remote beacon, based on the RANGE_TIME and VOS values. Values are encoded in decimetres, so divide by 10 for a value in metres.
    //USBL Fields
    uint8_t usbl_channels   ;  //The number of USBL receiver channels being used to compute the signal angle. Typically this value is either 3 or 4.
    int16_t usbl_rssi[4]    ;  //An array of the received signal strengths for each of he USBL receiver channels, where “x” is the value defined by the CHANNELS field.
    int16_t usbl_azimuth    ;  //The incoming signal azimuth angle from 0° to 360°. deci-Degrees, so divide by 10 for just degrees to a 0.1° resolution.
    int16_t usbl_elevation  ;  //The incoming signal elevation angle from -90° to +90 so divide by 10 for just degrees to a 0.1° resolution
    int16_t usbl_fit_error  ;  //The fit error value returns a number that indicates he quality of fit (or confidence) of the signal azimuth and elevation values from the timing and phase-angle data available. Values are dimensionless, but divide the value by 100 to obtain a signed floating-point value to a resolution of 0.01.
    //Position Fields
    int16_t position_easting;  //The Easting distance component of the relative position of the remote beacon to the local beacon computed from the range, incoming signal angle, local beacon depth, attitude and magnetic heading. Values are encoded in decimetres, so divide by 10 for a value in metres. 
    int16_t position_northing; // The Northing distance component of the relative position of the remote beacon to the local beacon computed from the range, incoming signal angle, local beacon depth, attitude and magnetic heading. Reference Values are encoded in decimetres, so divide by 10 for a value in metres.
    int16_t position_depth;    //The vertical Depth distance component of the relative position of the remote beacon to the local beacon computed from the range, incoming signal angle, local beacon depth, attitude and magnetic heading. Values are encoded in decimetres, so divide by 10 for a value in metres. NB: If the ‘Fix’ has been obtained by a MSG_REQU (Usbl) type request, then this value is computed from the beacon’s attitude and incoming signal angle. If a MSG_REQX (Enhanced) type request has been used, then this value is the remotely transmitted beacon depth sensor value.

    uint8_t outputflags_list[4]; 
    void outputFlagsComp()
    {
      outputflags_list[0]=  (0x01 & flags) ;  //Bit[0] = If this bit is set, it indicates the record contains the Range fields discussed below.
      outputflags_list[1]=  (0x02 & flags) ;  //Bit[1] = If this bit is set, it indicates the record contains the USBL fields discussed below.
      outputflags_list[2]=  (0x04 & flags) ;  //Bit[2] = POSITION_VALID If this bit is set, it indicates the record contains the Position fields discussed below.
      outputflags_list[3]=  (0x08 & flags) ;  //Bit[3] = POSITION_ENHANCED If this bit is set, it indicates the Position fix has been computed from an Enhanced USBL return – this means the Depth will be the value from the remote beacons depth sensor rather than computed form the incoming signal angle.
    }
  };

}
}
#endif