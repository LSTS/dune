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
// Author: Joao teixeira                                                    *
//***************************************************************************

// DUNE headers.
#define MESSAGE_NUMBER (0x77 +0x1)
#define MAX_MESSAGE_ERRORS 5
#define MAX_PACKET_LEN 31
#define MAX_MESSAGE_PERIOD 30
#include <DUNE/DUNE.hpp>

// Local headers.

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
  enum Cid {
  
    CID_SYS_ALIVE          =  0x01, //Command sent to receive a simple alivemessage from the beacon. 
    CID_SYS_INFO           =  0x02, //Command sent to receive hardware &firmware identification information.
    CID_SYS_REBOOT         =  0x03, //Command sent to soft reboot the beacon. 
    CID_SYS_ENGINEERING      =  0x04, //Command sent to perform engineeringa ctions.Firmware Programming Messages
    CID_PROG_INIT          =  0x0D, //Command sent to initialise a firmware programming sequence. 
    CID_PROG_BLOCK         =  0x0E, //Command sent to transfer a firmware programming block. 
    CID_PROG_UPDATE        =  0x0F, //Command sent to update the firmware once program transfer has completed. Status Messages 
    CID_STATUS           =  0x10, //Command sent to request the current system status (AHRS, Depth, Temp, etc). 
    CID_STATUS_CFG_GET       =  0x11, //Command sent to retrieve the configuration of the status system (message content and auto-output interval). 
    CID_STATUS_CFG_SET       =  0x12, //Command sent to set the configuration of the status system (message content and auto- output interval). 
    CID_SETTINGS_GET       =  0x15, //Command sent to retrieve the working settings in use on the beacon. 
    CID_SETTINGS_SET       =  0x16, //Command sent to set the working settings and apply them. They are NOT saved to permanent memory until CID_SETTINGS_SAVE is issued. The device will need to be rebooted after this to apply some of the changes. 
    CID_SETTINGS_LOAD        =  0x17, //Command sent to load the working settings from permanent storage and apply them. Not all settings can be loaded and applied as they only affect the device on start-up. 
    CID_SETTINGS_SAVE        =  0x18, //Command sent to save the working settings into permanent storage. 
    CID_SETTINGS_RESET       =  0x19, //Command sent to restore the working settings to defaults, store them into permanent memory and apply them. Calibration Messages 
    CID_CAL_ACTION         =  0x20, //Command sent to perform specific calibration actions. 
    CID_AHRS_CAL_GET       =  0x21, //Command sent to retrieve the current AHRS calibration. 
    CID_AHRS_CAL_SET       =  0x22, //Command sent to set the contents of the current AHRS calibration (and store to memory)/ Acoustic Transceiver Messages 
    CID_XCVR_ANALYSE       =  0x30, //Command sent to instruct the receiver to perform a noise analysis and report the results. 
    CID_XCVR_TX_MSG        =  0x31, //Message sent when the transceiver transmits a message. 
    CID_XCVR_RX_ERR        =  0x32, //Message sent when the transceiver receiver encounters an error. 
    CID_XCVR_RX_MSG        =  0x33, //Message sent when the transceiver receives a message (not requiring a response). 
    CID_XCVR_RX_REQ        =  0x34, //Message sent when the transceiver receives a request (requiring a response).
    CID_XCVR_RX_RESP       =  0x35, //Message sent when the transceiver receives a response (to a transmitted request). 
    CID_XCVR_RX_UNHANDLED      =  0x37, //Message sent when a message has been received but not handled by the protocol stack. 
    CID_XCVR_USBL          =  0x38, //Message sent when a USBL signal is decoded into an angular bearing.  
    CID_XCVR_FIX         =  0x39, //Message sent when the transceiver gets a position/range fix on a beacon from a request/response. 
    CID_XCVR_STATUS        =  0x3A, //Message sent to query the current transceiver state. PING Protocol Messages 
    CID_PING_SEND          =  0x40, //Command sent to transmit a PING message. 
    CID_PING_REQ         =  0x41, //Message sent when a PING request is received. 
    CID_PING_RESP          =  0x42, //Message sent when a PING response is received, or timeout occurs, with the echo response data. 
    CID_PING_ERROR         =  0x43, //Message sent when a PING response error/timeout occurs. ECHO Protocol Messages 
    CID_ECHO_SEND          =  0x48, //Command sent to transmit an ECHO message.
    CID_ECHO_REQ         =  0x49, //Message sent when an ECHO request is received. 
    CID_ECHO_RESP          =  0x4A, //Message sent when an ECHO response is received, or timeout occurs, with the echo response data. 
    CID_ECHO_ERROR         =  0x4B, //Message sent when an ECHO response error/timeout occurs. NAV Protocol Messages 
    CID_NAV_QUERY_SEND       =  0x50, //Message sent to query navigation information from a remote beacon.  
    CID_NAV_QUERY_REQ        =  0x51, //Message sent from a beacon that receives a NAV_QUERY.
    CID_NAV_QUERY_RESP       =  0x52, //Message generated when the beacon received a response to a NAV_QUERY. 
    CID_NAV_ERROR          =  0x53, //Message generated if there is a problem with a NAV_QUERY - i.e. timeout etc. 
    CID_NAV_REF_POS_SEND     =  0x54, //Message issued to broadcast a reference position (latitude and longitude) to all other beacons.
    CID_NAV_REF_POS_UPDATE     =  0x55, //Message generated when a beacon receives a NAV_REF_POS message.
    CID_NAV_BEACON_POS_SEND    =  0x56, //Message issued to broadcast the relative position (NED) of a beacon to all other beacons
    CID_NAV_BEACON_POS_UPDATE    =  0x57, //Message generated when a beacon receives a NAV_BEACON_POS message. DAT Protocol Messages
    CID_DAT_SEND         =  0x60, //Message sent to transmit a datagram to another beacon 
    CID_DAT_RECEIVE        =  0x61, //Message generated when a beacon receives a datagram. 
    CID_DAT_ERROR          =  0x63, //Message generated when a beacon response error/timeout occurs for ACKs. 
    CID_DAT_QUEUE_SET        =  0x64, //Message sent to set the contents of the packet data queue.
    CID_DAT_QUEUE_CLR        =  0x65, //Message sent to clear the contents of the packet data queue.
    CID_DAT_QUEUE_STATUS     =  0x66, //Message sent to obtain the current status of the packet data queue. DEX Protocol Messages
    CID_DEX_CLOSE          =  0x70, //Command sent to close a socket used for data exchange between beacons, and free memory resources. 
    CID_DEX_DEBUG          =  0x71, //Command sent to get information about a specified socket, including buffer space used and free, and data pending transfer.  
    CID_DEX_ENQUEUE        =  0x72, //Command sent to add data onto a socket buffer pending transfer. 
    CID_DEX_OPEN         =  0x73, //Command sent to create a new socket for Page 38SeaTrac Serial Command Interface Reference data exchange between beacons. 
    CID_DEX_RESET          =  0x74, //Command sent to reset the buffers and state of a socket. 
    CID_DEX_SEND         =  0x75, //Command sent to initiate a transfer of data pending on the specified socket. 
    CID_DEX_SOCKETS        =  0x76, //Command sent to retrieve a list of open sockets on the beacon, and a summary of data pending transfer on each one. 
    CID_DEX_RECEIVE        =  0x77  //Message sent when the beacon has received data through a socket.
    
  };
  

  enum Type_AMSGTYPE_E{
    
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
    //  General Status Codes
    CST_OK            = 0x00 ,   //Returned if a command or operation is completed successful without error.
    CST_FAIL          = 0x01 ,   //Returned if a command or operation cannot be completed.
    CST_EEPROM_ERROR      = 0x03 ,   //Returned if an error occurs while reading or writing EEPROM data.
    //  Command Processor Status Codes
    CST_CMD_PARAM_MISSING     = 0x04 ,   //Returned if a command message is given that does not have enough defined fields for the specified CID code.
    CST_CMD_PARAM_INVALID     = 0x05 ,   //Returned if a data field in a message does not contain a valid or expected value.
    //  Firmware Programming Status Codes
    CST_PROG_FLASH_ERROR    = 0x0A ,   //Returned if an error occurs while writing data into the processors flash memory.
    CST_PROG_FIRMWARE_ERROR   = 0x0B ,   //Returned if firmware cannot be programmed due to incorrect firmware credentials or signature.
    CST_PROG_SECTION_ERROR    = 0x0C ,   //Returned if the firmware cannot be programmed into the specified memory section.
    CST_PROG_LENGTH_ERROR     = 0x0D ,   //Returned if the firmware length is too large to fit into the specified memory section, or not what the current operation is expecting. Page 40SeaTrac Serial Command Interface Reference
    CST_PROG_DATA_ERROR     = 0x0E ,   //Returned if there is an error decoding data in a firmware block.
    CST_PROG_CHECKSUM_ERROR   = 0x0F ,   //Returned if the specified checksum for the firmware does not match the checksum computed prior to performing the update.
    //  Acoustic Transceiver Status Codes
    CST_XCVR_BUSY         = 0x30 ,   //Returned if the transceiver cannot perform a requested action as it is currently busy (i.e. transmitting a message).
    CST_XCVR_ID_REJECTED    = 0x31 ,   //Returned if the received message did not match the specified transceiver ID (and wasn’t a Sent-To-All), and the message has been rejected.
    CST_XCVR_CSUM_ERROR     = 0x32 ,   //Returned if received acoustic message’s checksum was invalid, and the message has been rejected.
    CST_XCVR_LENGTH_ERROR     = 0x33 ,   //Returned if an error occurred with message framing, meaning the end of the message has not been received within the expected time.
    CST_XCVR_RESP_TIMEOUT     = 0x34 ,   //Returned if the transceiver has sent a request message to a beacon, but no response has been returned within the allotted waiting period.
    CST_XCVR_RESP_ERROR     = 0x35 ,   //Returned if the transceiver has send a request message to a beacon, but an error occurred while receiving the response.
    CST_XCVR_RESP_WRONG     = 0x36 ,   //Returned if the transceiver has sent a request message to a beacon, but received an unexpected response from another beacon while waiting.
    CST_XCVR_PLOAD_ERROR    = 0x37 ,   //Returned by protocol payload decoders, if the payload can’t be parsed correctly.
    CST_XCVR_STATE_STOPPED    = 0x3A ,   //Indicates the transceiver is in a stopped state.
    CST_XCVR_STATE_IDLE     = 0x3B ,   //Indicates the transceiver is in an idle state waiting for reception or transmission to start.
    CST_XCVR_STATE_TX       = 0x3C ,   //Indicates the transceiver is in a transmitting states.
    CST_XCVR_STATE_REQ      = 0x3D ,   //Indicates the transceiver is in a requesting state, having transmitted a message and is waiting for a response to be received. Page 41SeaTrac Serial Command Interface Reference
    CST_XCVR_STATE_RX       = 0x3E ,   //Indicates the transceiver is in a receiving state.
    CST_XCVR_STATE_RESP     = 0x3F ,   //Indicates the transceiver is in a responding state, where a message is being composed and the “response time” period is being observed.
    //  DEX Protocol Status Codes
    CST_DEX_SOCKET_ERROR    = 0x70 ,   //Returned by the DEX protocol handler if an error occurred trying to open, close or access a specified socket ID.
    CST_DEX_RX_SYNC       = 0x71 ,   //Returned by the DEX protocol handler when receiver synchronisation has occurred with the socket master and data transfer is ready to commence.
    CST_DEX_RX_DATA       = 0x72 ,   //Returned by the DEX protocol handler when data has been received through a socket.
    CST_DEX_RX_SEQ_ERROR    = 0x73 ,   //Returned by the DEX protocol handler when data transfer synchronisation has been lost with the socket master.
    CST_DEX_RX_MSG_ERROR    = 0x74 ,   //Returned by the DEX protocol handler to indicate an unexpected acoustic message type with the DEX protocol has been received and cannot be processed.
    CST_DEX_REQ_ERROR       = 0x75 ,   //Returned by the DEX protocol handler to indicate a error has occurred while responding to a request (i.e. lack of data).
    CST_DEX_RESP_TMO_ERROR    = 0x76 ,   //Returned by the DEX protocol handler to indicate a timeout has occurred while waiting for a response back from a remote beacon with requested data.
    CST_DEX_RESP_MSG_ERROR    = 0x77 ,   //Returned by the DEX protocol handler to indicate an error has occurred while receiving response back from a remote beacon.
    CST_DEX_RESP_REMOTE_ERROR   = 0x78     //Returned by the DEX protocol handler to indicate the remote beacon has encountered an error and cannot return the requested
  };



 

  struct Type_CID_STATUS {

    uint8_t OutputFlags; 
    uint8_t OutputFlags_list[6];
    uint64_t Timestamp ;              //The value of the beacon’s clock (set to zero whenthe beacon was powered up – not rebooted!).Values are encoded in milliseconds, so divide by1000 for seconds.
    //ENVIRONMENT
    uint16_t EnvironmentSupply ;      //The beacons supply voltage. Values are encoded in milli-volts, so divide by 1000 for a value in Volts.
    int16_t  EnvironmentTemperature ; // The temperature of air/water in contact with the diaphragm of the pressure sensor. Values are encoded in deci-Celsius, so divide by 10 to obtain a value in Celsius.
    int32_t  EnvironmentPressure ;    //The external pressure measured on the diaphragm of the pressure sensor. Values are encoded in milli-bars, so divide by 1000 to obtain a value in Bar. Please note, the specification of pressure reading is 0.5% of the sensors full-scale value, so for a 200 Bar sensor the to
    int32_t  EnvironmentDepth ;       //The computed depth based on the measured environmental pressure. Values are encoded in deci-metres, so divide by 10 for a value in metres.
    uint16_t EnvironmentVos ;         // The value of Velocity-of-Sound currently being used for computing ranges. This may be either the manually specified VOS from settings, or the auto-computed value based on pressure, temperature and salinity. Values are encoded in deci-metres-per-second, so divide by 10 to obtain a value in metres-per-
    //ATTITUDE
    int16_t AttitudeYaw ;       // The current Yaw angle of the beacon, relative to magnetic north, measured by the beacons AHRS system. Values are encoded as deci-degrees, so divide the value by 10 to obtain a value in degrees.
    int16_t AttitudePitch ;     // The current Pitch angle of the beacon, relative to magnetic north, measured by the beacons AHRS system. Values are encoded as deci-degrees, so divide the value by 10 to obtain a value in degrees.
    int16_t AttitudeRoll ;      // The current Roll angle of the beacon, relative to magnetic north, measured by the beacons AHRS system. Values are encoded as deci-degrees, so divide the value by 10 to obtain a value in degrees.
    //MAG_CAL
    uint8_t MAG_CAL_BUF ;       //  Value that indicates how full the data buffer is that holds magnetometer values describing the surrounding magnetic environment. Values are encoded as a percentage from 0 to 100 representing empty (where no magnetic calibration is possible) to full (where the best magnetic calibration can be computed). 
    bool    MAG_CAL_VALID;      //  The flag is True if a magnetic calibration has been computed and is currently in use, compensating magnetometer readings. 
    int32_t MAG_CAL_AGE ;       // he number of seconds that have elapsed since the magnetometer calibration was last computed. When dynamic calibration is enabled, and there is sufficient data in the magnetic calibration buffer, then calibrations should be computed every 30
    uint8_t MAG_CAL_FIT;        // Value indicating how well the current magnetometer calibration can fit the measured data to an ideal “sphere” (or perfect calibration). Values are encoded as a percentage from 0 to 10 
    //ACC_CAL
    int16_t ACC_LIM_MIN_X ;     //  Value that holds the raw accelerometer sensor value that will be used to represent -1G on the X sensor axis.    
    int16_t ACC_LIM_MIN_Y ;     //  Value that holds the raw accelerometer sensor value that will be used to represent -1G on the Y sensor axis.  
    int16_t ACC_LIM_MIN_Z ;     //  Value that holds the raw accelerometer sensor value that will be used to represent -1G on the Z sensor axis.  
    int16_t ACC_LIM_MAX_X ;     //  Value that holds the raw accelerometer sensor value that will be used to represent +1G on the X sensor axis.
    int16_t ACC_LIM_MAX_Y ;     //  Value that holds the raw accelerometer sensor value that will be used to represent +1G on the Y sensor axis.
    int16_t ACC_LIM_MAX_Z ;     //  Value that holds the raw accelerometer sensor value that will be used to represent +1G on the Z sensor axis.
    //AHRS_RAW_DATA
    int16_t AHRS_RAW_ACC_X;     // The last raw accelerometer sensor value measured on the X-axis. This field is used during functional testing and can be used to assist with the accelerometer calibration procedure.
    int16_t AHRS_RAW_ACC_Y;     // The last raw accelerometer sensor value measured on the y-axis. This field is used during functional testing and can be used to assist with the accelerometer calibration procedure.
    int16_t AHRS_RAW_ACC_Z;     // The last raw accelerometer sensor value measured on the Z-axis. This field is used during functional testing and can be used to assist with the accelerometer calibration procedure.
    int16_t AHRS_RAW_MAG_X ;    // The last raw magnetometer sensor value measure on the X-axis. This field is used during functional testing and can be used to assist with the magnetometer calibration procedure (in conjunction with the accelerometer orientation value).
    int16_t AHRS_RAW_MAG_Y ;    // The last raw magnetometer sensor value measure on the y-axis. This field is used during functional testing and can be used to assist with the magnetometer calibration procedure (in conjunction with the accelerometer orientation value).
    int16_t AHRS_RAW_MAG_Z ;    // The last raw magnetometer sensor value measure on the Z-axis. This field is used during functional testing and can be used to assist with the magnetometer calibration procedure (in conjunction with the accelerometer orientation value).
    int16_t AHRS_RAW_GYRO_X ;   // The last raw rate of rotation measured around the X-axis of the gyroscope sensor. Values are encoded in degrees-per-second.
    int16_t AHRS_RAW_GYRO_Y ;   // The last raw rate of rotation measured around the Y-axis of the gyroscope sensor. Values are encoded in degrees-per-second.
    int16_t AHRS_RAW_GYRO_Z ;   // The last raw rate of rotation measured around the Z-axis of the gyroscope sensor. Values are encoded in degrees-per-second.
    //AHRS_COMP_DATA
    float AHRS_COMP_ACC_X   ;   //  The AHRS_RAW_ACC_X sensor reading after the calibration coefficients have been applied.
    float AHRS_COMP_ACC_Y   ;   //  The AHRS_RAW_ACC_Y sensor reading after the calibration coefficients have been applied. 
    float AHRS_COMP_ACC_Z   ;   //  The AHRS_RAW_ACC_Z sensor reading after the calibration coefficients have been applied.
    float AHRS_COMP_MAG_X   ;   //  The AHRS_COMP_MAG_X sensor reading after the calibration coefficients have been applied.  
    float AHRS_COMP_MAG_Y   ;   //  The AHRS_COMP_MAG_Y sensor reading after the calibration coefficients have been applied.
    float AHRS_COMP_MAG_Z   ;   //  The AHRS_COMP_MAG_Z sensor reading after the calibration coefficients have been applied.
    float AHRS_COMP_GYRO_X  ;   //  The AHRS_COMP_GYRO_X sensor reading after the calibration coefficients have been applied.
    float AHRS_COMP_GYRO_Y  ;   //  The AHRS_COMP_GYRO_Y sensor reading after the calibration coefficients have been applied.
    float AHRS_COMP_GYRO_Z  ;   //  The AHRS_COMP_GYRO_Z sensor reading after the calibration coefficients have been applied.

    void OutputFlagsComp()
    {
      OutputFlags_list[0]=  (0x01 & OutputFlags) ;  // When set, appends environmental sensor data fields (temperature, depth, VOS, supply voltage etc) to the end of the status output message
      OutputFlags_list[1]=  (0x02 & OutputFlags) ;  // When set, appends the AHRS attitude (yaw, pitch, roll) fields to the end of the status output message.
      OutputFlags_list[2]=  (0x04 & OutputFlags) ;  // When set, appends magnetometer calibration and buffer fields to the end of the status output message
      OutputFlags_list[3]=  (0x08 & OutputFlags) ;  // When set, appends accelerometer calibration and limits fields to the end of the status output message.
      OutputFlags_list[4]=  (0x10 & OutputFlags) ;  // When set, appends raw sensor data fields to the end of the status output message.
      OutputFlags_list[5]=  (0x20 & OutputFlags) ;  // When set, appends compensated sensor data fields to the end of the status output message
    }

  };



  struct Type_ACOFIX_T{

    uint8_t DEST_ID ;       // The ID code of the beacon that this data is sent to 1 to F  0 broadcast to all.
    uint8_t SRC_ID  ;       //The ID code of the beacon that sent the data.
    uint8_t FLAGS ;
    uint8_t AMSGTYPE_E;     //The type of acoustic message received to generate  - defenition in enum Type_AMSGTYPE_E
    int16_t ATTITUDE_YAW;   //The yaw angle (relative to magnetic north) of the local beacon when the fix was computed. Values are encoded as deci-Degrees, so divide by 10 for just degrees to a 0.1° resolution.
    int16_t ATTITUDE_PITCH; // The pitch angle of the local beacon when the fix was computed. Values are encoded as deci-Degrees, so divide by 10 for just degrees to a 0.1° resolution.
    int16_t ATTITUDE_ROLL;  // The roll angle of the local beacon when the fix was computed. Values are encoded as deci-Degrees, so divide by 10 for just degrees to a 0.1° resolution.
    int16_t DEPTH_LOCAL;    // he reading from the local beacon depth sensor when the fix was calculated. Values are encoded in decimetres, so divide by 10 to obtain a value in metres to a 0.1m resolution.
    uint16_t VOS;           // The velocity of sound value used for the computation of the remote beacon’s range based on timing information. Values are encoded in decimetres-per-second, so divide by 10 for a value in metres-per-second.
    int16_t RSSI;           // The Received Signal Strength Indicator value for the received message, encoded in centibels. To decode, divide this value by 10 for decibels to a 0.1 dB resolution.
    //Range fields
    uint32_t RANGE_COUNT;   // The number of 16kHz timer intervals that were counted between Request message transmission and Response message reception.
    uint32_t RANGE_TIME;    // The time in seconds derived from the RANGE_COUNT value, and with internal timing offsets and compensation applied. Values are encoded in 100 nanosecond multiples, so divide by 10000000 to obtain a value in seconds.
    uint16_t RANGE_DIST ;   // The resolved line-of-sight distance to the remote beacon, based on the RANGE_TIME and VOS values. Values are encoded in decimetres, so divide by 10 for a value in metres.
    //USBL Fields
    uint8_t USBL_CHANNELS;   //The number of USBL receiver channels being used to compute the signal angle. Typically this value is either 3 or 4.
    int16_t USBL_RSSI[4];    //An array of the received signal strengths for each of he USBL receiver channels, where “x” is the value defined by the CHANNELS field.
    int16_t USBL_AZIMUTH ;   //The incoming signal azimuth angle from 0° to 360°. deci-Degrees, so divide by 10 for just degrees to a 0.1° resolution.
    int16_t USBL_ELEVATION;  //The incoming signal elevation angle from -90° to +90 so divide by 10 for just degrees to a 0.1° resolution
    int16_t USBL_FIT_ERROR;  //The fit error value returns a number that indicates he quality of fit (or confidence) of the signal azimuth and elevation values from the timing and phase-angle data available. Values are dimensionless, but divide the value by 100 to obtain a signed floating-point value to a resolution of 0.01.
    //Position Fields
    int16_t POSITION_EASTING;  //The Easting distance component of the relative position of the remote beacon to the local beacon computed from the range, incoming signal angle, local beacon depth, attitude and magnetic heading. Values are encoded in decimetres, so divide by 10 for a value in metres. 
    int16_t POSITION_NORTHING; // The Northing distance component of the relative position of the remote beacon to the local beacon computed from the range, incoming signal angle, local beacon depth, attitude and magnetic heading. Reference Values are encoded in decimetres, so divide by 10 for a value in metres.
    int16_t POSITION_DEPTH;    //The vertical Depth distance component of the relative position of the remote beacon to the local beacon computed from the range, incoming signal angle, local beacon depth, attitude and magnetic heading. Values are encoded in decimetres, so divide by 10 for a value in metres. NB: If the ‘Fix’ has been obtained by a MSG_REQU (Usbl) type request, then this value is computed from the beacon’s attitude and incoming signal angle. If a MSG_REQX (Enhanced) type request has been used, then this value is the remotely transmitted beacon depth sensor value.

    uint8_t OutputFlags_list[6]; 
    void OutputFlagsComp()
    {
      OutputFlags_list[0]=  (0x01 & FLAGS) ;  //Bit[0] = If this bit is set, it indicates the record contains the Range fields discussed below.
      OutputFlags_list[1]=  (0x02 & FLAGS) ;  //Bit[1] = If this bit is set, it indicates the record contains the USBL fields discussed below.
      OutputFlags_list[2]=  (0x04 & FLAGS) ;  //Bit[2] = POSITION_VALID If this bit is set, it indicates the record contains the Position fields discussed below.
      OutputFlags_list[3]=  (0x08 & FLAGS) ;  //Bit[3] = POSITION_ENHANCED If this bit is set, it indicates the Position fix has been computed from an Enhanced USBL return – this means the Depth will be the value from the remote beacons depth sensor rather than computed form the incoming signal angle.
    }
  };

  struct Type_CID_PING_RESP{

    Type_ACOFIX_T ACO_FIX;
  };

  struct Type_CID_NAV_BEACON_POS_UPDATE{

    Type_ACOFIX_T ACO_FIX;      //A Fix structure containing information relating to signal from the beacon sending data. This will not contain range or position information, but will contain the message SRC_ID.
    uint8_t BEACON_ID;     //The ID code of the beacon this position refers to. Valid values are form 1 to 15. NB: This ID code does not necessarily refer to the local beacon (although it may).
    int16_t POSITION_EASTING;   //The Easting distance component of the beacon specified by BEACON_ID relative to the USBL head (or sender of this message). This value must be encoded in deci-meters, so divide the value by 10 to obtain a distance in metres.
    int16_t POSITION_NORTHING;  //The Northing distance component of the beacon specified by BEACON_ID relative to the USBL head (or sender of this message). This value must be encoded in deci-meters, so Page 133SeaTrac Serial Command Interface Reference divide the value by 10 to obtain a distance in metres.
    int16_t POSITION_DEPTH;     //The vertical Depth distance component of the beacon specified by BEACON_ID relative to the USBL head (or sender of this message). This value must be encoded in deci-meters, so divide the value by 10 to obtain a distance in metre
  };

  struct Type_CID_PING_REQ{

    Type_ACOFIX_T ACO_FIX;

  };

  struct Type_CID_NAV_BEACON_POS_SEND{
    uint8_t BEACON_ID;     
    int16_t POSITION_EASTING;   
    int16_t POSITION_NORTHING; 
    int16_t POSITION_DEPTH; 
    // response 
    uint8_t STATUS ;
  };

  struct  Type_CID_PING_ERROR{
    CST_E STATUS; 
    uint8_t BEACON_ID; 
  };

  struct Type_CID_NAV_QUERY_REQ {
    Type_ACOFIX_T ACO_FIX;
    uint8_t NAV_QUERY_T; //Bit mask that contains the fields the CID_NAV_QUERY_SEND message specified.
 

   };
  struct  Type_CID_PING_SEND{
    
    //Command Message Parameters
    uint8_t DEST_ID;
    Type_AMSGTYPE_E MSG_TYPE;

    //Response Message Parameters
    CST_E STATUS;
    uint8_t BEACON_ID;
  };

  struct  Type_CID_SETTINGS_SET{
    uint8_t STATUS;
  };
  struct  Type_CID_SETTINGS_SAVE{
    uint8_t STATUS;
  };


  struct  Type_CID_NAV_REF_POS_SEND{

    int32_t POSITION_LATITUDE ; //INT32 The latitude part of the local beacons position, used as the reference position from which relative Northing/Easting/Depth positions are based. This value must be encoded in milliseconds of arc angle – i.e. value in degrees multiplied by 3600000.
    int32_t POSITION_LONGITUDE; //INT32 The longitude part of the local beacons position, used as the reference position from which relative Northing/Easting/Depth positions are based. This value must be encoded in milliseconds of arc angle – i.e. value in degrees multiplied by 3600000.
    uint8_t STATUS;
  };

 struct  Type_CID_NAV_REF_POS_UPDATE{
    Type_ACOFIX_T ACO_FIX;  //A Fix structure containing information relating to signal from the beacon sending data. This will not contain range or position information, but will contain the message SRC_ID.
    uint8_t BEACON_ID       ;       //BID_E The ID code of the beacon this position refers to. Valid values are form 1 to 15. NB: This ID code does not necessarily refer to the local beacon (although it may).
    int32_t POSITION_LATITUDE; //INT32 The latitude part of the sending beacons position, used as the reference position from which relative Northing/Easting/Depth positions are based. This value is encoded in milliseconds of arc angle, so divide by 3600000 to obtain a value in decimal degrees.
    int32_t POSITION_LONGITUDE; //INT32  he longitude part of the sending beacons position,  sed as the reference position from which relative  orthing/Easting/Depth positions are based.  his value is encoded in milliseconds of arc angle,  o divide by 3600000 to obtain a value in decimal  egrees.
};
    struct  Type_CID_DAT_RECEIVE{

    Type_ACOFIX_T ACO_FIX;   // A Fix structure containing information relating to the range and position of the beacon sending data. Messages generated at the remote beacon (or MSG_OWAY/MSG_OWAYU types were used) will not contain range or position information.
    uint8_t ACK_FLAG;        // Flag is true if this message has been generated as a response to a CID_DAT_SEND command which requested an ACK – in which case, remotely queued data may have also been transmitted back and in included in this message.
    uint8_t PACKET_LEN;      // The number of bytes sent in the DAT acoustic packet. Valid values are from 0 to 31. A value of 0 indicate no data is present.
    char PACKET_DATA[31];    // The array of data received in the DAT acoustic packet, where “x

    int  data_rec_flag;
    uint8_t indice;
    uint8_t n_sub_messages;
    uint8_t n_sub_messages_last;
    std::string full_msg; 

    int 
    packetDataDecode() 
    {
    	std::memcpy(&indice , PACKET_DATA + 0     , 1);
      	std::memcpy(&n_sub_messages , PACKET_DATA + 1     , 1);

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
                full_msg.assign(PACKET_DATA + 2,PACKET_LEN-2);
                n_sub_messages_last=n_sub_messages;
                return 0;
            }
             else if (data_rec_flag!=0)
            {
                data_rec_flag++;
                if(data_rec_flag==indice)
                {
                     full_msg.append(PACKET_DATA+2, PACKET_LEN-2 );

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
      full_msg.assign(PACKET_DATA + 2,PACKET_LEN-2);  
      data_rec_flag=0;     
      return 1;
    }

  	uint8_t  
    getFullMsg(std::string& msg )
    {	msg=full_msg;
        full_msg.clear();
    	return 0;
    }

   };

  struct  Type_CID_DAT_SEND{
    //Command Message Parameters
    uint8_t DEST_ID;         //The ID code of the beacon to send the DATA to. Valid values are form 0 to 15. A value of BEACON_ALL (0) indicates data is broadcast to all other beacons. However when this is used the SEND_MODE value can only be NOACK or NACK_USBL.
    Type_AMSGTYPE_E MSG_TYPE;//AMSGTYPE_E Value specifying the type of data message that should be sent Valid values are... MSG_OWAY  or MSG_OWAYU or  MSG_REQ  or MSG_REQU  or MSG_REQX 
    uint8_t PACKET_LEN;      //The number of bytes to send in the DAT acoustic packet. Valid values are from 0 to 31.
    std::string PACKET_DATA; // The array of data that should be sent in the DAT acoustic packet, where “x” is the value specified in PACKET_LEN.
    //Response Message Parameters
    CST_E STATUS;            //Status code indicating the error that occurred. Valid values are... CST_XCVR_RESP_TIMEOUT  or  CST_XCVR_RESP_WRONG  or     CST_XCVR_RESP_ERROR      
    uint8_t BEACON_ID;       //The ID code of the beacon that the error applies to (i.e. the DEST_ID value used in the CID_DAT_SEND command). Valid values are form 1 to 15.
    //state machine 
    int  lock_flag;
    uint8_t n_sub_messages;
    int n_sub_rest;
    uint8_t message_indice; 
    std::string hex;
    int error_number; 
    Time::Counter<double> msgTimer;

     int
     packetDataBuild(std::vector<char> msg, int dest_id)
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
        DEST_ID=dest_id;
        MSG_TYPE=MSG_REQU;
        message_indice=1;
        n_sub_messages=1;
         if (msg.size()<(MAX_PACKET_LEN*2-4))
          { 
            PACKET_DATA=String::str("%02X%02X", message_indice ,  n_sub_messages);
            PACKET_LEN=(4+msg.size())/2;
            PACKET_DATA+=hex.substr(0,hex.size());
          }
          else 
          {
            n_sub_messages=hex.size()/(MAX_PACKET_LEN*2-4);
            n_sub_rest=hex.size()%(MAX_PACKET_LEN*2-4);
            if (n_sub_rest!=0)
            n_sub_messages++;
            PACKET_DATA=String::str("%02X%02X", message_indice ,  n_sub_messages);
            PACKET_LEN=MAX_PACKET_LEN;  
            PACKET_DATA+=hex.substr(0,(PACKET_LEN*2-4));          
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
        PACKET_DATA=String::str("%02X%02X", message_indice ,  n_sub_messages);
        n_sub_rest=hex.size()-(message_indice-1)*(PACKET_LEN*2-4);
        PACKET_LEN=MAX_PACKET_LEN; 
        if(message_indice<=n_sub_messages)
        {   
            if (n_sub_rest<=(PACKET_LEN*2-4))
                {
                    PACKET_DATA+=hex.substr(((PACKET_LEN*2-4)*(message_indice-1)), n_sub_rest );
                    PACKET_LEN=n_sub_rest/2+2; 
                 }
               else PACKET_DATA+=hex.substr(((PACKET_LEN*2-4)*(message_indice-1)), (PACKET_LEN*2-4) );   

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

  struct MacAddr_T {
    union {
    uint64_t Addr;
    uint8_t Bytes[6];
    };
  };

  struct IpAddr_T {
    union {
    uint32_t Addr;
    uint8_t Bytes[4];
    };
  };
  
  struct AHRSCAL_T {
    
    uint16_t ACC_MIN_X    ;     //The accelerometer X-axis sensor value that corresponds to -1G of gravitational force. Valid values lie in the range -1000 to +1000. Default value is -270.
    uint16_t ACC_MIN_Y    ;     //The accelerometer Y-axis sensor value that corresponds to -1G of gravitational force. Valid values lie in the range -1000 to +1000. Default value is -270.
    uint16_t ACC_MIN_Z    ;     //The accelerometer Z-axis sensor value that corresponds to -1G of gravitational force. Valid values lie in the range -1000 to +1000. Default value is -270.
    uint16_t ACC_MAX_X    ;     //The accelerometer X-axis sensor value that corresponds to +1G of gravitational force. Valid values lie in the range -1000 to +1000. Default value is 270.
    uint16_t ACC_MAX_Y    ;     //The accelerometer Y-axis sensor value that corresponds to +1G of gravitational force. Valid values lie in the range -1000 to +1000. Default value is 270.
    uint16_t ACC_MAX_Z    ;     //The accelerometer Z-axis sensor value that corresponds to +1G of gravitational force. Valid values lie in the range -1000 to +1000. Default value is 270.
    uint8_t  MAG_VALID    ;     //Flag is true when the calibration contains (or represents) a valid set of coefficients. Writing an invalid calibration causes no compensation to be performed on sensor values. Reading this flag as false indicates no dynamic calibration has been computed or loaded from EEPROM memory.
    float    MAG_HARD_X   ;     //The magnetometer X-axis sensor offset value to compensate for Hard Iron effects. Valid values lie in the range -2000 to +2000. Default value is 0.
    float    MAG_HARD_Y   ;     //The magnetometer Y-axis sensor offset value to compensate for Hard Iron effects. Valid values lie in the range -2000 to +2000. Default value is 0.
    float    MAG_HARD_Z   ;     //The magnetometer Z-axis sensor offset value to compensate for Hard Iron effects. Valid values lie in the range -2000 to +2000. Default value is 0.
    float    MAG_SOFT_X   ;     //The magnetometer X-axis sensor scaling value to compensate for Soft Iron effects. Valid values lie in the range -10 to +10. Default value is 1.
    float    MAG_SOFT_Y   ;     //The magnetometer Y-axis sensor scaling value to compensate for Soft Iron effects. Valid values lie in the range -10 to +10. Default value is 1.
    float    MAG_SOFT_Z   ;     //The magnetometer Z-axis sensor scaling value to compensate for Soft Iron effects. Valid values lie in the range -10 to +10. Default value is 1.
    float    MAG_FIELD    ;     //The normalised (not actual) magnetic field used for magnetometer calibration. Valid values lie between 0 and 100, with a typical value for idea fit being 50. Default value is 0.
    float    MAG_ERROR    ;     //The fit error of the magnetic calibration. Values are expressed as a percentage between 0 and 100. Default value is 100 representing 100% error.
    uint16_t GYRO_OFFSET_X;     //The rotational rate gyroscope X-axis sensor offset. Valid values lie in the range -1000 to +1000. Default value of 0.
    uint16_t GYRO_OFFSET_Y;     //The rotational rate gyroscope Y-axis sensor offset. Valid values lie in the range -1000 to +1000. Default value of 0.
    uint16_t GYRO_OFFSET_Z;     //The rotational rate gyroscope Z-axis sensor offset. Valid values lie in the range -1000 to +1000. Default value of 0.
   };

  struct Type_SETTINGS_T{ 

    uint8_t STATUS_FLAGS    ;       //Value containing flags that control the generation and output of CID_STATUS messages. Bit values are... Bits[7:3] = RESERVED Reserved for future use, treat as 0’s. Bits[2:0] = STATUS_MODE Specifies how often periodic status output~messages are generated. Mask and then treat as a STATUSMODE_E value.
    uint8_t STATUS_OUTPUT   ;       //A bit-mask specifying which information should beincluded in generated status output messages.For each bit set in this mask, a correspondinggroup of output fields will be appended to statusmessages (making them larger in size).For details of how these fields affect the statusmessage content, see CID_STATUS.
    uint8_t UART_MAIN_BAUD  ;       //Specifies the serial baud rate to be used by the main communications port.
    uint8_t UART_AUX_BAUD   ;       //Reserved for future use.When populating this field, use a default value of BAUD_115200.
    MacAddr_T NET_MAC_ADDR  ;       //Reserved for future use. When populating this structure, use a default value of 0.
    IpAddr_T NET_IP_ADDR    ;       //Reserved for future use. When populating this structure, use a default value of 0xC0A801FA (192.168.1.250).
    IpAddr_T NET_IP_SUBNET  ;       //Reserved for future use. When populating this structure, use a value of 0xFFFF0000 (255.255.0.0).
    IpAddr_T NET_IP_GATEWAY ;       //Reserved for future use. When populating this structure, use a default value of 0xC0A80101 (192.168.1.1).
    IpAddr_T NET_IP_DNS     ;       //Reserved for future use. When populating this structure, use a default value of 0xC0A80101 (192.168.1.1).
    uint16_t NET_TCP_PORT   ;       //Reserved for future use. When populating this structure, use a default value of 8100.
    uint8_t  ENV_FLAGS      ;       //This value contains flags that control the processing of the beacons environmental sensors (pressure, temperature, supply voltage etc). Bit values are...  Bits[7:2] = RESERVED Reserved for future use.  Bit[1] = AUTO_PRESSURE_OFS When this flag is true, the pressure offset is automatically chosen using the minimum observed pressure reading when the beacon is in less than  3m of water (0.3 bar). The assumption is than when fitted to an ROV this value will be seen on deck after the ROV is powered up, but if power is cycled when the beacon is below 3m, the pressure offset will not be updated.  Bit[0] = AUTO_VOS When this flag is true, the velocity-of-sound used in range timing equations is automatically computed form the current water pressure, temperature and manually specified salinity. VOS is calculated using the Coppens 1981 equation where temperature is valid over 0°C to 45°C, salinity over 0ptt to 35ppt and depth over 0m to 4000m.
    uint32_t ENV_PRESSURE_OFS;      //The manually specified offset applied to readings take from the pressure sensor to compensate for altitude and atmospheric pressure changes. Values are encoded in milli-Bars, so divide by 1000 to obtain a value in Bars. Valid values lie in the range -1 to 1000 Bar. If auto-computation of pressure offset is enabled (in ENV_FLAGS), then any value written to this field will be lost the next time the offset is calculated.
    uint16_t ENV_SALINITY   ;       //The salinity value used when computing the velocity-of-sound from current pressure/depth. Values are encoded as deci-parts-per-thousand (i.e. a value of 345 represents 34.5 ppt), so divide this value by 10 to obtain a value in ppt. Typically a value of 0 represents fresh water, while 350 (35ppt) represents average sea water. Values are valid in the range 0 to 100ppt. If auto-computation of VOS is disabled (in ENV_FLAGS) then this value is not used.
    uint16_t ENV_VOS        ;       //The manually specified velocity of sound (VOS) to be used to convert range timing information into distances. Values are encoded in deci-metres-per-second, so divide by 10 to obtain a value in metres-per- second. Valid values are in the range 100ms -1 to 2000ms -1 . If auto-computation of VOS is enabled (in ENV_FLAGS), then any value written to this field will be lost the next time the VOS is calculated.
    uint8_t  AHRS_FLAGS     ;       //This value contains flags that control the operation of the beacons AHRS system. Bit values are...  Bits[7:1] = RESERVED Reserved for future use. Page 58SeaTrac Serial Command Interface Reference  Bit[0] = AUTO_CAL_MAG When this bit is true, automatic (dynamic) calibration of the magnetometer is enabled. In this mode, the magnetic field surrounding the beacon is continuously samples as the beacon is rotated through space, and every 30s a new calibration is attempted. If the results are better than the current calibration, then the new coefficients are accepted.
    AHRSCAL_T AHRS_CAL      ;       //Structure containing the calibration data for the Attitude/Heading Reference System (AHRS).
    uint16_t AHRS_YAW_OFS   ;       //fixed attitude yaw offset that is applied to all AHRS reading. Offsets are applied to the AHRS output via a Direction-Cosine-Matrix, in the Euler sequence Yaw, Pitch then Roll. Values are encoded as deci-degrees, so divide the value by 10 to obtain a value in degrees. Valid values are cyclically wrapped to the range 0° to 359.9°.
    uint16_t AHRS_PITCH_OFS ;       //fixed attitude pitch offset that is applied to all AHRS reading. Offsets are applied to the AHRS output via a Direction-Cosine-Matrix, in the Euler sequence Yaw, Pitch then Roll. Values are encoded as deci-degrees, so divide the value by 10 to obtain a value in degrees. Valid values are clipped to the range -90.0° to +90.0°.
    uint16_t AHRS_ROLL_OFS  ;       //fixed attitude roll offset that is applied to all AHRS reading. Offsets are applied to the AHRS output via a Direction-Cosine-Matrix, in the Euler sequence Yaw, Pitch then Roll. Values are encoded as deci-degrees, so divide the value by 10 to obtain a value in degrees. Valid values are clipped to the range -180.0° to +180.0°.
    uint8_t  XCVR_FLAGS     ;       //Value containing flags to control the operation of the acoustic transceiver. Bit values are... Page 59SeaTrac Serial Command Interface Reference Bit[7] = XCVR_DIAG_MSGS When this flag is true a series of diagnostic status messages will be generated by triggering events processed by the acoustic transceiver – for further details see the following commands... CID_XCVR_TX_MSG, CID_XCVR_RX_ERR CID_XCVR_RX_MSG, CID_XCVR_RX_REQ CID_XCVR_RX_RESP, CID_XCVR_RX_RESP_ERROR CID_XCVR_RX_UNHANDLED Bit[6] = XCVR_FIX_MSGS When this flag is true, a CID_XCVR_FIX status message will be generated on successful reception of an acoustic response message. The fix message contains details relating to distance, position and depth of the remote beacon. Bit[5] = XCVR_USBL_MSGS When this flag is true, a CID_XCVR_USBL status message is generated on successfully reception of an acoustic message containing USBL signal information. Bits[4:1] = RESERVED Reserved for future use. Bit[0] = USBL_USE_AHRS When this flag is true the acoustic transceiver will use the current AHRS attitude (updated internally at a 50Hz rate) when resolving relative positions of remote beacons to the local beacon. When the flag is false, the fixed attitude specified in the XCVR_YAW, XCVR_PITCH and XCVR_ROLL fields will be used.
    uint8_t  XCVR_BEACON_ID ;       //The identification code the local beacon will accept messages addressed to, or use as the source identifier when sending messages. Valid values are from 1 to 15 (0x1 to 0xF). A value of 0 (BEACON_ALL) should not be used.
    uint16_t XCVR_RANGE_TMO ;       //The range timeout specifies a distance (related to time by the VOS setting) beyond which responses from beacons are ignored, and the remote beacon is considered to have timed out (see CID_XCVR_RX_RESP_ERROR messages). Values are encoded in metres. Valid values are in the range 100m to 3000m. Page 60SeaTrac Serial Command Interface Reference
    uint16_t XCVR_RESP_TIME ;       //The response turnaround time specifies how long the beacon will wait between receiving a request message and starting transmission of the response message. All beacons communicating acoustically within the same network must use the same value otherwise range errors will be observed. Typically, larger values than the default of 10ms can be used to reduce multi-path issues in confined spaces and allow echoes to die down before the response is sent, but should only be adjust if communication reliability issues are observed. Values are encoded in milliseconds. Valid values are in the range 10ms to 1000ms.
    uint16_t XCVR_YAW       ;       //When the AHRS attitude is not used to specify the transceiver attitude, this value is used as the manually specified yaw attitude from which relative positions of remote beacons to the local beacon are computed. Attitudes are applied in the position calculation routine via a Direction-Cosine-Matrix, in the Euler sequence Yaw, Pitch then Roll. Values are encoded as deci-degrees, so divide the value by 10 to obtain a value in degrees. Valid values are cyclically wrapped to the range 0° to 359.9°.
    uint16_t XCVR_PITCH     ;       //When the AHRS attitude is not used to specify the transceiver attitude, this value is used as the manually specified pitch attitude from which relative positions of remote beacons to the local beacon are computed. Attitudes are applied in the position calculation routine via a Direction-Cosine-Matrix, in the Euler sequence Yaw, Pitch then Roll. Values are encoded as deci-degrees, so divide the value by 10 to obtain a value in degrees. Valid values are clipped to the range -90.0° to +90.0°.
    uint16_t XCVR_ROLL      ;       //When the AHRS attitude is not used to specify the transceiver attitude, this value is used as the manually specified roll attitude from which relative positions of remote beacons to the local beacon are computed. Attitudes are applied in the position calculation routine via a Direction-Cosine-Matrix, in the Euler sequence Yaw, Pitch then Roll. Values are encoded as deci-degrees, so divide the value by 10 to obtain a value in degrees. Valid values are clipped to the range -180.0° to +180.0°.
   };

  struct Type_CID_XCVR_FIX{


      Type_ACOFIX_T  ACO_FIX ;
    };

  struct Type_CID_SYS_REBOOT{

      uint8_t  STATUS; 
    };


  struct Type_CID_NAV_QUERY_SEND{
    uint8_t DEST_ID ;
    uint8_t QUERY_FLAGS;
    uint8_t STATUS ;
  };
  struct Type_CID_NAV_QUERY_RESP{

    Type_ACOFIX_T  ACO_FIX ;
    uint8_t QUERY_FLAGS;
    int32_t REMOTE_DEPTH  ;      //INT32  The remote beacons depth based on the measured environmental pressure. Values are encoded in deci-metres, so divide by 10 for a value in metres. See note above regarding enhanced resolution when using the QRY_DEPTH flag.
    int16_t REMOTE_SUPPLY ;      //UINT16 The remote beacons supply voltage. Values are encoded in milli-volts, so divide by 1000 for a value in Volts.
    int16_t REMOTE_TEMP   ;      //INT16 The temperature of air/water in contact with the diaphragm of the pressure sensor or the remote beacon. Values are encoded in deci-Celsius, so divide by 10 to obtain a value in Celsius.
    int16_t REMOTE_YAW    ;      //INT16 The Yaw angle of the remote beacon, relative to magnetic north, measured by the beacons AHRS system. Values are encoded as deci-degrees, so divide the value by 10 to obtain a value in degrees.
    int16_t REMOTE_PITCH  ;      //INT16 The Pitch angle of the remote beacon, relative to magnetic north, measured by the beacons AHRS system. Values are encoded as deci-degrees, so divide the value by 10 to obtain a value in degrees.
    int16_t REMOTE_ROLL   ;      //INT16 The Roll angle of the remote beacon, relative to magnetic north, measured by the beacons AHRS system. Values are encoded as deci-degrees, so divide the value by 10 to obtain a value in degrees.
    uint8_t QUERY_FLAGS_list[6]; 

    void   QUERY_FLAGS_extract()
    {
      QUERY_FLAGS_list[0]=  (0x01 & QUERY_FLAGS) ;  
      QUERY_FLAGS_list[1]=  (0x02 & QUERY_FLAGS) ;  
      QUERY_FLAGS_list[2]=  (0x04 & QUERY_FLAGS) ;  
      QUERY_FLAGS_list[3]=  (0x08 & QUERY_FLAGS) ;  

    }
  };

  //Seatrac data structure  
  struct Data_Seatrac {

    //status 
    Type_CID_STATUS CID_STATUS_m;
    //ping protocol
    Type_CID_PING_REQ  type_CID_PING_REQ_m; //R
    Type_CID_PING_REQ  type_CID_PING_REQ_t; //T
    Type_CID_PING_SEND  type_CID_PING_SEND_m;   
    Type_CID_PING_RESP type_CID_PING_RESP_m; // reply to a ping
    Type_CID_PING_ERROR type_CID_PING_ERROR_m; // Ping Error 
    //data protocol
    Type_CID_DAT_RECEIVE type_CID_DAT_RECEIVE_m;
    Type_CID_DAT_SEND  type_CID_DAT_SEND_t;
    //conf protocol
    Type_SETTINGS_T   Becon_settings;
    Type_CID_SYS_REBOOT  SYS_REBOOT;
    Type_CID_SETTINGS_SET SETTINGS_SET;
    Type_CID_SETTINGS_SAVE  SETTINGS_SAVE;
    //NAV protocol
    Type_CID_XCVR_FIX  XCVR_FIX;
    Type_CID_NAV_QUERY_REQ NAV_QUERY_REQ;
    Type_CID_NAV_QUERY_SEND NAV_QUERY_SEND;
    Type_CID_NAV_QUERY_RESP NAV_QUERY_RESP;
    Type_CID_NAV_BEACON_POS_UPDATE NAV_BEACON_POS_UPDATE;
    Type_CID_NAV_BEACON_POS_SEND NAV_BEACON_POS_SEND;
    Type_CID_NAV_REF_POS_SEND  NAV_REF_POS_SEND;
    Type_CID_NAV_REF_POS_UPDATE  NAV_REF_POS_UPDATE;

    uint8_t new_message[MESSAGE_NUMBER];
    std::string data_message;
     
    Data_Seatrac()
    {
      type_CID_DAT_SEND_t.lock_flag=0;
      type_CID_DAT_RECEIVE_m.data_rec_flag=0;
      for (int i=0; i<MESSAGE_NUMBER;i++)
      new_message[i]= 0;
    }
    void 
    set(Cid setdata)
    {
      new_message[setdata]=1;

    }
    uint8_t
    newDataAvailable(unsigned setdata)
    {
        if(setdata< MESSAGE_NUMBER)
        {


          if(new_message[setdata]==1)
            {
            new_message[setdata]=0;
            return 1;
            }
        }
     return 0;    
    }
  };


  // Extract  to  data_Seatrac data structure
  void
  dataParser(uint16_t typemessege, const char* msg_raw ,   Data_Seatrac& dataBeacon )
  { 
    uint16_t ind;
    int i=0;
    switch(typemessege)
    {
      case CID_STATUS:
      {
      dataBeacon.set(CID_STATUS);
      std::memcpy(&dataBeacon.CID_STATUS_m.OutputFlags, msg_raw , 1);
      dataBeacon.CID_STATUS_m.OutputFlagsComp();
      std::memcpy(&dataBeacon.CID_STATUS_m.Timestamp, msg_raw + 1, 8);
      ind=9;
      if (dataBeacon.CID_STATUS_m.OutputFlags_list[0]) //ENVIRONMENT
      {
        
        std::memcpy(&dataBeacon.CID_STATUS_m.EnvironmentSupply      , msg_raw + ind     , 2);
        std::memcpy(&dataBeacon.CID_STATUS_m.EnvironmentTemperature , msg_raw + ind + 2 , 2);
        std::memcpy(&dataBeacon.CID_STATUS_m.EnvironmentPressure    , msg_raw + ind + 4 , 4); 
        std::memcpy(&dataBeacon.CID_STATUS_m.EnvironmentDepth       , msg_raw + ind + 8 , 4); 
        std::memcpy(&dataBeacon.CID_STATUS_m.EnvironmentVos     , msg_raw + ind + 12, 2);
        ind=ind+14;
      }
      if (dataBeacon.CID_STATUS_m.OutputFlags_list[1]) //ATTITUDE
      {
        std::memcpy(&dataBeacon.CID_STATUS_m.AttitudeYaw  , msg_raw + ind    , 2);
        std::memcpy(&dataBeacon.CID_STATUS_m.AttitudePitch, msg_raw + ind + 2, 2);
        std::memcpy(&dataBeacon.CID_STATUS_m.AttitudeRoll , msg_raw + ind + 4, 2);
        ind=ind+6;
      }
      if (dataBeacon.CID_STATUS_m.OutputFlags_list[2]) //MAG_CAL
      {
        std::memcpy(&dataBeacon.CID_STATUS_m.MAG_CAL_BUF   , msg_raw + ind      , 1);
        std::memcpy(&dataBeacon.CID_STATUS_m.MAG_CAL_VALID , msg_raw + ind  + 1 , 1);
        std::memcpy(&dataBeacon.CID_STATUS_m.MAG_CAL_AGE   , msg_raw + ind  + 2 , 4);
        std::memcpy(&dataBeacon.CID_STATUS_m.MAG_CAL_FIT   , msg_raw + ind  + 6 , 1);
        ind=ind+7;
      }
      if (dataBeacon.CID_STATUS_m.OutputFlags_list[3]) //ACC_CAL
      {
        std::memcpy(&dataBeacon.CID_STATUS_m.ACC_LIM_MIN_Y , msg_raw + ind     , 2);
        std::memcpy(&dataBeacon.CID_STATUS_m.ACC_LIM_MIN_Z , msg_raw + ind + 2 , 2);
        std::memcpy(&dataBeacon.CID_STATUS_m.ACC_LIM_MIN_X , msg_raw + ind + 4 , 2);
        std::memcpy(&dataBeacon.CID_STATUS_m.ACC_LIM_MAX_X , msg_raw + ind + 6 , 2);
        std::memcpy(&dataBeacon.CID_STATUS_m.ACC_LIM_MAX_Y , msg_raw + ind + 8 , 2);
        std::memcpy(&dataBeacon.CID_STATUS_m.ACC_LIM_MAX_Z , msg_raw + ind + 10, 2);
        ind=ind+12;
      }
      if (dataBeacon.CID_STATUS_m.OutputFlags_list[4])//AHRS_RAW_DATA
      {
        std::memcpy(&dataBeacon.CID_STATUS_m.AHRS_RAW_ACC_X  , msg_raw + ind     , 2);
        std::memcpy(&dataBeacon.CID_STATUS_m.AHRS_RAW_ACC_Y  , msg_raw + ind + 2 , 2);
        std::memcpy(&dataBeacon.CID_STATUS_m.AHRS_RAW_ACC_Z  , msg_raw + ind + 4 , 2);
        std::memcpy(&dataBeacon.CID_STATUS_m.AHRS_RAW_MAG_X  , msg_raw + ind + 6 , 2);
        std::memcpy(&dataBeacon.CID_STATUS_m.AHRS_RAW_MAG_Y  , msg_raw + ind + 8 , 2);
        std::memcpy(&dataBeacon.CID_STATUS_m.AHRS_RAW_MAG_Z  , msg_raw + ind + 10, 2);
        std::memcpy(&dataBeacon.CID_STATUS_m.AHRS_RAW_GYRO_X , msg_raw + ind + 12, 2);
        std::memcpy(&dataBeacon.CID_STATUS_m.AHRS_RAW_GYRO_Y , msg_raw + ind + 14, 2);
        std::memcpy(&dataBeacon.CID_STATUS_m.AHRS_RAW_GYRO_Z , msg_raw + ind + 16, 2);  
        ind=ind+18;           
      }
      if (dataBeacon.CID_STATUS_m.OutputFlags_list[5])//AHRS_COMP_DATA
      {   
        std::memcpy(&dataBeacon.CID_STATUS_m.AHRS_COMP_ACC_X   , msg_raw + ind     , 4);
        std::memcpy(&dataBeacon.CID_STATUS_m.AHRS_COMP_ACC_Y   , msg_raw + ind + 4 , 4);
        std::memcpy(&dataBeacon.CID_STATUS_m.AHRS_COMP_ACC_Z   , msg_raw + ind + 8 , 4);
        std::memcpy(&dataBeacon.CID_STATUS_m.AHRS_COMP_MAG_X   , msg_raw + ind + 12 ,4);
        std::memcpy(&dataBeacon.CID_STATUS_m.AHRS_COMP_MAG_Y   , msg_raw + ind + 16 ,4);
        std::memcpy(&dataBeacon.CID_STATUS_m.AHRS_COMP_MAG_Z   , msg_raw + ind + 20 ,4);
        std::memcpy(&dataBeacon.CID_STATUS_m.AHRS_COMP_GYRO_X  , msg_raw + ind + 24 ,4);
        std::memcpy(&dataBeacon.CID_STATUS_m.AHRS_COMP_GYRO_Y  , msg_raw + ind + 28 ,4);
        std::memcpy(&dataBeacon.CID_STATUS_m.AHRS_COMP_GYRO_Z  , msg_raw + ind + 32 ,4);
      }
      
    
      }  
      break;
  
      case CID_PING_REQ:  // CID_PING_REQ status message is generated when the beacon received an acoustic PING  message from the sending beaconand reports local info.  
        dataBeacon.set(CID_PING_REQ);
        ind=0;
      std::memcpy(&dataBeacon.type_CID_PING_REQ_m.ACO_FIX.DEST_ID      , msg_raw + ind     , 1);
      std::memcpy(&dataBeacon.type_CID_PING_REQ_m.ACO_FIX.SRC_ID       , msg_raw + ind + 1 , 1);
      std::memcpy(&dataBeacon.type_CID_PING_REQ_m.ACO_FIX.FLAGS          , msg_raw + ind + 2 , 1); 
      std::memcpy(&dataBeacon.type_CID_PING_REQ_m.ACO_FIX.AMSGTYPE_E     , msg_raw + ind + 3 , 1); 
      std::memcpy(&dataBeacon.type_CID_PING_REQ_m.ACO_FIX.ATTITUDE_YAW   , msg_raw + ind + 4,  2);
      std::memcpy(&dataBeacon.type_CID_PING_REQ_m.ACO_FIX.ATTITUDE_PITCH , msg_raw + ind + 6 , 2);
      std::memcpy(&dataBeacon.type_CID_PING_REQ_m.ACO_FIX.ATTITUDE_ROLL  , msg_raw + ind + 8 , 2);
      std::memcpy(&dataBeacon.type_CID_PING_REQ_m.ACO_FIX.DEPTH_LOCAL    , msg_raw + ind + 10, 2); 
      std::memcpy(&dataBeacon.type_CID_PING_REQ_m.ACO_FIX.VOS            , msg_raw + ind + 12, 2); 
      std::memcpy(&dataBeacon.type_CID_PING_REQ_m.ACO_FIX.RSSI           , msg_raw + ind + 14, 2);
      ind=ind+16;
      dataBeacon.type_CID_PING_REQ_m.ACO_FIX.OutputFlagsComp();
      if (dataBeacon.type_CID_PING_REQ_m.ACO_FIX.OutputFlags_list[0]) //Range fields
      {
        
        std::memcpy(&dataBeacon.type_CID_PING_REQ_m.ACO_FIX.RANGE_COUNT, msg_raw + ind     , 4);
        std::memcpy(&dataBeacon.type_CID_PING_REQ_m.ACO_FIX.RANGE_TIME , msg_raw + ind + 4 , 4);
        std::memcpy(&dataBeacon.type_CID_PING_REQ_m.ACO_FIX.RANGE_DIST , msg_raw + ind + 8 , 2); 
        ind=ind+10;
      }
      if (dataBeacon.type_CID_PING_REQ_m.ACO_FIX.OutputFlags_list[1]) //USBL Fields
      {
        std::memcpy(&dataBeacon.type_CID_PING_REQ_m.ACO_FIX.USBL_CHANNELS   , msg_raw + ind , 1);
        for (i=0; i<dataBeacon.type_CID_PING_REQ_m.ACO_FIX.USBL_CHANNELS ;i++)
        {
        std::memcpy(&dataBeacon.type_CID_PING_REQ_m.ACO_FIX.USBL_RSSI[i]   , msg_raw + ind + 1+2*i, 2); 
        }
        std::memcpy(&dataBeacon.type_CID_PING_REQ_m.ACO_FIX.USBL_AZIMUTH    , msg_raw + ind + 1+2*i, 2);
        std::memcpy(&dataBeacon.type_CID_PING_REQ_m.ACO_FIX.USBL_ELEVATION  , msg_raw + ind + 3+2*i, 2);
        std::memcpy(&dataBeacon.type_CID_PING_REQ_m.ACO_FIX.USBL_FIT_ERROR  , msg_raw + ind + 5+2*i, 2);
        ind=ind+7+i*2;
      }
      if (dataBeacon.type_CID_PING_REQ_m.ACO_FIX.OutputFlags_list[2]) //Position Fields
      {
        std::memcpy(&dataBeacon.type_CID_PING_REQ_m.ACO_FIX.POSITION_EASTING  , msg_raw + ind     , 2);
        std::memcpy(&dataBeacon.type_CID_PING_REQ_m.ACO_FIX.POSITION_NORTHING , msg_raw + ind + 2 , 2);
        std::memcpy(&dataBeacon.type_CID_PING_REQ_m.ACO_FIX.POSITION_DEPTH    , msg_raw + ind + 4 , 2);
      }
      
       
      break;
  
      case CID_PING_RESP:  //Message sent when a PING response is received  
      {
        dataBeacon.set(CID_PING_RESP);
      ind=0;
      std::memcpy(&dataBeacon.type_CID_PING_RESP_m.ACO_FIX.DEST_ID      , msg_raw + ind     , 1);
      std::memcpy(&dataBeacon.type_CID_PING_RESP_m.ACO_FIX.SRC_ID       , msg_raw + ind + 1 , 1);
      std::memcpy(&dataBeacon.type_CID_PING_RESP_m.ACO_FIX.FLAGS          , msg_raw + ind + 2 , 1); 
      std::memcpy(&dataBeacon.type_CID_PING_RESP_m.ACO_FIX.AMSGTYPE_E     , msg_raw + ind + 3 , 1); 
      std::memcpy(&dataBeacon.type_CID_PING_RESP_m.ACO_FIX.ATTITUDE_YAW   , msg_raw + ind + 4,  2);
      std::memcpy(&dataBeacon.type_CID_PING_RESP_m.ACO_FIX.ATTITUDE_PITCH , msg_raw + ind + 6 , 2);
      std::memcpy(&dataBeacon.type_CID_PING_RESP_m.ACO_FIX.ATTITUDE_ROLL  , msg_raw + ind + 8 , 2);
      std::memcpy(&dataBeacon.type_CID_PING_RESP_m.ACO_FIX.DEPTH_LOCAL    , msg_raw + ind + 10, 2); 
      std::memcpy(&dataBeacon.type_CID_PING_RESP_m.ACO_FIX.VOS            , msg_raw + ind + 12, 2); 
      std::memcpy(&dataBeacon.type_CID_PING_RESP_m.ACO_FIX.RSSI           , msg_raw + ind + 14, 2);
      dataBeacon.type_CID_PING_RESP_m.ACO_FIX.OutputFlagsComp();
      ind=ind+16;
      if (dataBeacon.type_CID_PING_RESP_m.ACO_FIX.OutputFlags_list[0]) //Range fields
      {
        
        std::memcpy(&dataBeacon.type_CID_PING_RESP_m.ACO_FIX.RANGE_COUNT, msg_raw + ind     , 4);
        std::memcpy(&dataBeacon.type_CID_PING_RESP_m.ACO_FIX.RANGE_TIME , msg_raw + ind + 4 , 4);
        std::memcpy(&dataBeacon.type_CID_PING_RESP_m.ACO_FIX.RANGE_DIST , msg_raw + ind + 8 , 2); 
        ind=ind+10;
      }
      if (dataBeacon.type_CID_PING_RESP_m.ACO_FIX.OutputFlags_list[1]) //USBL Fields
      {
        std::memcpy(&dataBeacon.type_CID_PING_RESP_m.ACO_FIX.USBL_CHANNELS   , msg_raw + ind , 1);
        for (i=0; i<dataBeacon.type_CID_PING_RESP_m.ACO_FIX.USBL_CHANNELS ;i++)
        {
        std::memcpy(&dataBeacon.type_CID_PING_RESP_m.ACO_FIX.USBL_RSSI[i]   , msg_raw + ind + 1+2*i, 2); 
        }
        std::memcpy(&dataBeacon.type_CID_PING_RESP_m.ACO_FIX.USBL_AZIMUTH    , msg_raw + ind + 1+2*i, 2);
        std::memcpy(&dataBeacon.type_CID_PING_RESP_m.ACO_FIX.USBL_ELEVATION  , msg_raw + ind + 3+2*i, 2);
        std::memcpy(&dataBeacon.type_CID_PING_RESP_m.ACO_FIX.USBL_FIT_ERROR  , msg_raw + ind + 5+2*i, 2);
        ind=ind+7+(i)*2;
      }
      if (dataBeacon.type_CID_PING_RESP_m.ACO_FIX.OutputFlags_list[2]) //Position Fields
      {
        std::memcpy(&dataBeacon.type_CID_PING_RESP_m.ACO_FIX.POSITION_EASTING  , msg_raw + ind     , 2);
        std::memcpy(&dataBeacon.type_CID_PING_RESP_m.ACO_FIX.POSITION_NORTHING , msg_raw + ind + 2 , 2);
        std::memcpy(&dataBeacon.type_CID_PING_RESP_m.ACO_FIX.POSITION_DEPTH    , msg_raw + ind + 4 , 2);
      }
   
      }  
       break;

      case CID_PING_ERROR:  
      {
      dataBeacon.set(CID_PING_ERROR);
      ind=0;
      std::memcpy(&dataBeacon.type_CID_PING_ERROR_m.STATUS  , msg_raw + ind     , 1);
      std::memcpy(&dataBeacon.type_CID_PING_ERROR_m.BEACON_ID , msg_raw + ind + 1 , 1);

      }
       break;

       case CID_PING_SEND: 
          dataBeacon.set(CID_PING_SEND); 
          ind=0;
          std::memcpy(&dataBeacon.type_CID_PING_SEND_m.STATUS     , msg_raw + ind     , 1);
        std::memcpy(&dataBeacon.type_CID_PING_SEND_m.BEACON_ID    , msg_raw + ind + 1 , 1);

      break;

      
       case CID_DAT_SEND: 
          dataBeacon.set(CID_DAT_SEND);  
        ind=0;
        std::memcpy(&dataBeacon.type_CID_DAT_SEND_t.STATUS      , msg_raw + ind     , 1);
        std::memcpy(&dataBeacon.type_CID_DAT_SEND_t.BEACON_ID     , msg_raw + ind + 1 , 1);
        if(dataBeacon.type_CID_DAT_SEND_t.STATUS!=0)
        {
            dataBeacon.type_CID_DAT_SEND_t.lock_flag=0;
        }
      

      break;

      case CID_DAT_RECEIVE: //8.3. DAT Protocol Messages
          
        ind=0;
        std::memcpy(&dataBeacon.type_CID_DAT_RECEIVE_m.ACO_FIX.DEST_ID      , msg_raw + ind     , 1);
        std::memcpy(&dataBeacon.type_CID_DAT_RECEIVE_m.ACO_FIX.SRC_ID       , msg_raw + ind + 1 , 1);
        std::memcpy(&dataBeacon.type_CID_DAT_RECEIVE_m.ACO_FIX.FLAGS          , msg_raw + ind + 2 , 1); 
        std::memcpy(&dataBeacon.type_CID_DAT_RECEIVE_m.ACO_FIX.AMSGTYPE_E     , msg_raw + ind + 3 , 1); 
        std::memcpy(&dataBeacon.type_CID_DAT_RECEIVE_m.ACO_FIX.ATTITUDE_YAW   , msg_raw + ind + 4,  2);
        std::memcpy(&dataBeacon.type_CID_DAT_RECEIVE_m.ACO_FIX.ATTITUDE_PITCH , msg_raw + ind + 6 , 2);
        std::memcpy(&dataBeacon.type_CID_DAT_RECEIVE_m.ACO_FIX.ATTITUDE_ROLL  , msg_raw + ind + 8 , 2);
        std::memcpy(&dataBeacon.type_CID_DAT_RECEIVE_m.ACO_FIX.DEPTH_LOCAL    , msg_raw + ind + 10, 2); 
        std::memcpy(&dataBeacon.type_CID_DAT_RECEIVE_m.ACO_FIX.VOS            , msg_raw + ind + 12, 2); 
        std::memcpy(&dataBeacon.type_CID_DAT_RECEIVE_m.ACO_FIX.RSSI           , msg_raw + ind + 14, 2);
        dataBeacon.type_CID_DAT_RECEIVE_m.ACO_FIX.OutputFlagsComp();
        ind=ind+16;
        if (dataBeacon.type_CID_DAT_RECEIVE_m.ACO_FIX.OutputFlags_list[0]) //Range fields
        {
          
          std::memcpy(&dataBeacon.type_CID_DAT_RECEIVE_m.ACO_FIX.RANGE_COUNT, msg_raw + ind     , 4);
          std::memcpy(&dataBeacon.type_CID_DAT_RECEIVE_m.ACO_FIX.RANGE_TIME , msg_raw + ind + 4 , 4);
          std::memcpy(&dataBeacon.type_CID_DAT_RECEIVE_m.ACO_FIX.RANGE_DIST , msg_raw + ind + 8 , 2); 
          ind=ind+10;
        }
        if (dataBeacon.type_CID_DAT_RECEIVE_m.ACO_FIX.OutputFlags_list[1]) //USBL Fields
        {
          std::memcpy(&dataBeacon.type_CID_DAT_RECEIVE_m.ACO_FIX.USBL_CHANNELS   , msg_raw + ind , 1);
          for (i=0; i<dataBeacon.type_CID_DAT_RECEIVE_m.ACO_FIX.USBL_CHANNELS ;i++)
          {
          std::memcpy(&dataBeacon.type_CID_DAT_RECEIVE_m.ACO_FIX.USBL_RSSI[i]   , msg_raw + ind + 1+2*i, 2); 
          }
          std::memcpy(&dataBeacon.type_CID_DAT_RECEIVE_m.ACO_FIX.USBL_AZIMUTH    , msg_raw + ind + 1+2*i, 2);
          std::memcpy(&dataBeacon.type_CID_DAT_RECEIVE_m.ACO_FIX.USBL_ELEVATION  , msg_raw + ind + 3+2*i, 2);
          std::memcpy(&dataBeacon.type_CID_DAT_RECEIVE_m.ACO_FIX.USBL_FIT_ERROR  , msg_raw + ind + 5+2*i, 2);
          ind=ind+7+i*2;
        }
        if (dataBeacon.type_CID_DAT_RECEIVE_m.ACO_FIX.OutputFlags_list[2]) //Position Fields
        {
          std::memcpy(&dataBeacon.type_CID_DAT_RECEIVE_m.ACO_FIX.POSITION_EASTING  , msg_raw + ind     , 2);
          std::memcpy(&dataBeacon.type_CID_DAT_RECEIVE_m.ACO_FIX.POSITION_NORTHING , msg_raw + ind + 2 , 2);
          std::memcpy(&dataBeacon.type_CID_DAT_RECEIVE_m.ACO_FIX.POSITION_DEPTH    , msg_raw + ind + 4 , 2);
          ind=ind+6;
        }
        std::memcpy(&dataBeacon.type_CID_DAT_RECEIVE_m.ACK_FLAG          , msg_raw + ind     , 1);
        std::memcpy(&dataBeacon.type_CID_DAT_RECEIVE_m.PACKET_LEN        , msg_raw + ind   +1 , 1);
        ind=ind+2;
        for (i=0;i<dataBeacon.type_CID_DAT_RECEIVE_m.PACKET_LEN ;i++)
        {
          std::memcpy(&dataBeacon.type_CID_DAT_RECEIVE_m.PACKET_DATA[i]  , msg_raw + ind  + i   , 1);
        }
        
        dataBeacon.set(CID_DAT_RECEIVE);

      break;


      case CID_DAT_ERROR: // DAT Protocol Messages
          dataBeacon.set(CID_DAT_ERROR);
          std::memcpy(&dataBeacon.type_CID_DAT_SEND_t.STATUS  , msg_raw, 1);
          std::memcpy(&dataBeacon.type_CID_DAT_SEND_t.BEACON_ID  , msg_raw + 1 , 1);
      break;

      case CID_SETTINGS_GET: 
          dataBeacon.set(CID_SETTINGS_GET);

          std::memcpy(&dataBeacon.Becon_settings.STATUS_FLAGS              , msg_raw , 1);  
          std::memcpy(&dataBeacon.Becon_settings.STATUS_OUTPUT             , msg_raw + 1, 1);   
          std::memcpy(&dataBeacon.Becon_settings.UART_MAIN_BAUD            , msg_raw + 2, 1);   
          std::memcpy(&dataBeacon.Becon_settings.UART_AUX_BAUD             , msg_raw + 3  , 1);   
          std::memcpy(&dataBeacon.Becon_settings.NET_MAC_ADDR              , msg_raw + 4  , 6);  
          std::memcpy(&dataBeacon.Becon_settings.NET_IP_ADDR               , msg_raw + 10 , 4);   
          std::memcpy(&dataBeacon.Becon_settings.NET_IP_SUBNET             , msg_raw + 14  , 4);   
          std::memcpy(&dataBeacon.Becon_settings.NET_IP_GATEWAY            , msg_raw + 18 , 4);   
          std::memcpy(&dataBeacon.Becon_settings.NET_IP_DNS                , msg_raw + 22 , 4);  
          std::memcpy(&dataBeacon.Becon_settings.NET_TCP_PORT              , msg_raw + 26 , 2);   
          std::memcpy(&dataBeacon.Becon_settings.ENV_FLAGS                 , msg_raw + 28 , 1);   
          std::memcpy(&dataBeacon.Becon_settings.ENV_PRESSURE_OFS          , msg_raw + 29 , 4);   
          std::memcpy(&dataBeacon.Becon_settings.ENV_SALINITY              , msg_raw + 33 , 2);   
          std::memcpy(&dataBeacon.Becon_settings.ENV_VOS                   , msg_raw + 35 , 2);   
          std::memcpy(&dataBeacon.Becon_settings.AHRS_FLAGS                , msg_raw + 37 , 1);   
          std::memcpy(&dataBeacon.Becon_settings.AHRS_CAL.ACC_MIN_X        , msg_raw + 38, 2);
          std::memcpy(&dataBeacon.Becon_settings.AHRS_CAL.ACC_MIN_Y        , msg_raw + 40, 2);
          std::memcpy(&dataBeacon.Becon_settings.AHRS_CAL.ACC_MIN_Z        , msg_raw + 42, 2);
          std::memcpy(&dataBeacon.Becon_settings.AHRS_CAL.ACC_MAX_X        , msg_raw + 44, 2);
          std::memcpy(&dataBeacon.Becon_settings.AHRS_CAL.ACC_MAX_Y        , msg_raw + 46, 2);
          std::memcpy(&dataBeacon.Becon_settings.AHRS_CAL.ACC_MAX_Z        , msg_raw + 48, 2);
          std::memcpy(&dataBeacon.Becon_settings.AHRS_CAL.MAG_VALID        , msg_raw + 50, 1);
          std::memcpy(&dataBeacon.Becon_settings.AHRS_CAL.MAG_HARD_X       , msg_raw + 51, 4);
          std::memcpy(&dataBeacon.Becon_settings.AHRS_CAL.MAG_HARD_Y       , msg_raw + 55, 4);
          std::memcpy(&dataBeacon.Becon_settings.AHRS_CAL.MAG_HARD_Z       , msg_raw + 59, 4);
          std::memcpy(&dataBeacon.Becon_settings.AHRS_CAL.MAG_SOFT_X       , msg_raw + 63, 4);
          std::memcpy(&dataBeacon.Becon_settings.AHRS_CAL.MAG_SOFT_Y       , msg_raw + 67, 4);
          std::memcpy(&dataBeacon.Becon_settings.AHRS_CAL.MAG_SOFT_Z       , msg_raw + 71, 4);
          std::memcpy(&dataBeacon.Becon_settings.AHRS_CAL.MAG_FIELD        , msg_raw + 75, 4);
          std::memcpy(&dataBeacon.Becon_settings.AHRS_CAL.MAG_ERROR        , msg_raw + 79, 4);
          std::memcpy(&dataBeacon.Becon_settings.AHRS_CAL.GYRO_OFFSET_X    , msg_raw + 83, 2);
          std::memcpy(&dataBeacon.Becon_settings.AHRS_CAL.GYRO_OFFSET_Y    , msg_raw + 85, 2);
          std::memcpy(&dataBeacon.Becon_settings.AHRS_CAL.GYRO_OFFSET_Z    , msg_raw + 87, 2);
          std::memcpy(&dataBeacon.Becon_settings.AHRS_YAW_OFS              , msg_raw + 89, 2);   
          std::memcpy(&dataBeacon.Becon_settings.AHRS_PITCH_OFS            , msg_raw + 91, 2);   
          std::memcpy(&dataBeacon.Becon_settings.AHRS_ROLL_OFS             , msg_raw + 93, 2);   
          std::memcpy(&dataBeacon.Becon_settings.XCVR_FLAGS                , msg_raw + 95, 1);   
          std::memcpy(&dataBeacon.Becon_settings.XCVR_BEACON_ID            , msg_raw + 96, 1);   
          std::memcpy(&dataBeacon.Becon_settings.XCVR_RANGE_TMO            , msg_raw + 97, 2);   
          std::memcpy(&dataBeacon.Becon_settings.XCVR_RESP_TIME            , msg_raw + 99, 2);   
          std::memcpy(&dataBeacon.Becon_settings.XCVR_YAW                  , msg_raw + 101, 2);   
          std::memcpy(&dataBeacon.Becon_settings.XCVR_PITCH                , msg_raw + 103, 2);   
          std::memcpy(&dataBeacon.Becon_settings.XCVR_ROLL                 , msg_raw + 105, 2);
        

      break;


      case  CID_NAV_QUERY_REQ:
            dataBeacon.set(CID_NAV_QUERY_REQ);
                    ind=0;
        std::memcpy(&dataBeacon.NAV_QUERY_REQ.ACO_FIX.DEST_ID      , msg_raw + ind     , 1);
        std::memcpy(&dataBeacon.NAV_QUERY_REQ.ACO_FIX.SRC_ID       , msg_raw + ind + 1 , 1);
        std::memcpy(&dataBeacon.NAV_QUERY_REQ.ACO_FIX.FLAGS          , msg_raw + ind + 2 , 1); 
        std::memcpy(&dataBeacon.NAV_QUERY_REQ.ACO_FIX.AMSGTYPE_E     , msg_raw + ind + 3 , 1); 
        std::memcpy(&dataBeacon.NAV_QUERY_REQ.ACO_FIX.ATTITUDE_YAW   , msg_raw + ind + 4,  2);
        std::memcpy(&dataBeacon.NAV_QUERY_REQ.ACO_FIX.ATTITUDE_PITCH , msg_raw + ind + 6 , 2);
        std::memcpy(&dataBeacon.NAV_QUERY_REQ.ACO_FIX.ATTITUDE_ROLL  , msg_raw + ind + 8 , 2);
        std::memcpy(&dataBeacon.NAV_QUERY_REQ.ACO_FIX.DEPTH_LOCAL    , msg_raw + ind + 10, 2); 
        std::memcpy(&dataBeacon.NAV_QUERY_REQ.ACO_FIX.VOS            , msg_raw + ind + 12, 2); 
        std::memcpy(&dataBeacon.NAV_QUERY_REQ.ACO_FIX.RSSI           , msg_raw + ind + 14, 2);
        dataBeacon.NAV_QUERY_REQ.ACO_FIX.OutputFlagsComp();
        ind=ind+16;
        if (dataBeacon.NAV_QUERY_REQ.ACO_FIX.OutputFlags_list[0]) //Range fields
        {
          
          std::memcpy(&dataBeacon.NAV_QUERY_REQ.ACO_FIX.RANGE_COUNT, msg_raw + ind     , 4);
          std::memcpy(&dataBeacon.NAV_QUERY_REQ.ACO_FIX.RANGE_TIME , msg_raw + ind + 4 , 4);
          std::memcpy(&dataBeacon.NAV_QUERY_REQ.ACO_FIX.RANGE_DIST , msg_raw + ind + 8 , 2); 
          ind=ind+10;
        }
        if (dataBeacon.NAV_QUERY_REQ.ACO_FIX.OutputFlags_list[1]) //USBL Fields
        {
          std::memcpy(&dataBeacon.NAV_QUERY_REQ.ACO_FIX.USBL_CHANNELS   , msg_raw + ind , 1);
          for (i=0; i<dataBeacon.NAV_QUERY_REQ.ACO_FIX.USBL_CHANNELS ;i++)
          {
          std::memcpy(&dataBeacon.NAV_QUERY_REQ.ACO_FIX.USBL_RSSI[i]   , msg_raw + ind + 1+2*i, 2); 
          }
          std::memcpy(&dataBeacon.NAV_QUERY_REQ.ACO_FIX.USBL_AZIMUTH    , msg_raw + ind + 1+2*i, 2);
          std::memcpy(&dataBeacon.NAV_QUERY_REQ.ACO_FIX.USBL_ELEVATION  , msg_raw + ind + 3+2*i, 2);
          std::memcpy(&dataBeacon.NAV_QUERY_REQ.ACO_FIX.USBL_FIT_ERROR  , msg_raw + ind + 5+2*i, 2);
          ind=ind+7+i*2;
        }
        if (dataBeacon.NAV_QUERY_REQ.ACO_FIX.OutputFlags_list[2]) //Position Fields
        {
          std::memcpy(&dataBeacon.NAV_QUERY_REQ.ACO_FIX.POSITION_EASTING  , msg_raw + ind     , 2);
          std::memcpy(&dataBeacon.NAV_QUERY_REQ.ACO_FIX.POSITION_NORTHING , msg_raw + ind + 2 , 2);
          std::memcpy(&dataBeacon.NAV_QUERY_REQ.ACO_FIX.POSITION_DEPTH    , msg_raw + ind + 4 , 2);
          ind=ind+6;
        }
        std::memcpy(&dataBeacon.NAV_QUERY_REQ.NAV_QUERY_T    , msg_raw + ind  + i , 1); 

      break;

      case  CID_XCVR_FIX:
         {
          dataBeacon.set(CID_XCVR_FIX);
        ind=0;
        std::memcpy(&dataBeacon.XCVR_FIX.ACO_FIX.DEST_ID      , msg_raw + ind     , 1);
        std::memcpy(&dataBeacon.XCVR_FIX.ACO_FIX.SRC_ID       , msg_raw + ind + 1 , 1);
        std::memcpy(&dataBeacon.XCVR_FIX.ACO_FIX.FLAGS          , msg_raw + ind + 2 , 1); 
        std::memcpy(&dataBeacon.XCVR_FIX.ACO_FIX.AMSGTYPE_E     , msg_raw + ind + 3 , 1); 
        std::memcpy(&dataBeacon.XCVR_FIX.ACO_FIX.ATTITUDE_YAW   , msg_raw + ind + 4,  2);
        std::memcpy(&dataBeacon.XCVR_FIX.ACO_FIX.ATTITUDE_PITCH , msg_raw + ind + 6 , 2);
        std::memcpy(&dataBeacon.XCVR_FIX.ACO_FIX.ATTITUDE_ROLL  , msg_raw + ind + 8 , 2);
        std::memcpy(&dataBeacon.XCVR_FIX.ACO_FIX.DEPTH_LOCAL    , msg_raw + ind + 10, 2); 
        std::memcpy(&dataBeacon.XCVR_FIX.ACO_FIX.VOS            , msg_raw + ind + 12, 2); 
        std::memcpy(&dataBeacon.XCVR_FIX.ACO_FIX.RSSI           , msg_raw + ind + 14, 2);
        dataBeacon.XCVR_FIX.ACO_FIX.OutputFlagsComp();
        ind=ind+16;
        if (dataBeacon.XCVR_FIX.ACO_FIX.OutputFlags_list[0]) //Range fields
        {
          
          std::memcpy(&dataBeacon.XCVR_FIX.ACO_FIX.RANGE_COUNT, msg_raw + ind     , 4);
          std::memcpy(&dataBeacon.XCVR_FIX.ACO_FIX.RANGE_TIME , msg_raw + ind + 4 , 4);
          std::memcpy(&dataBeacon.XCVR_FIX.ACO_FIX.RANGE_DIST , msg_raw + ind + 8 , 2); 
          ind=ind+10;
        }
        if (dataBeacon.XCVR_FIX.ACO_FIX.OutputFlags_list[1]) //USBL Fields
        {
          std::memcpy(&dataBeacon.XCVR_FIX.ACO_FIX.USBL_CHANNELS   , msg_raw + ind , 1);
          for (i=0; i<dataBeacon.XCVR_FIX.ACO_FIX.USBL_CHANNELS ;i++)
          {
          std::memcpy(&dataBeacon.XCVR_FIX.ACO_FIX.USBL_RSSI[i]   , msg_raw + ind + 1+2*i, 2); 
          }
          std::memcpy(&dataBeacon.XCVR_FIX.ACO_FIX.USBL_AZIMUTH    , msg_raw + ind + 1+2*i, 2);
          std::memcpy(&dataBeacon.XCVR_FIX.ACO_FIX.USBL_ELEVATION  , msg_raw + ind + 3+2*i, 2);
          std::memcpy(&dataBeacon.XCVR_FIX.ACO_FIX.USBL_FIT_ERROR  , msg_raw + ind + 5+2*i, 2);
          ind=ind+7+i*2;
        }
        if (dataBeacon.XCVR_FIX.ACO_FIX.OutputFlags_list[2]) //Position Fields
        {
          std::memcpy(&dataBeacon.XCVR_FIX.ACO_FIX.POSITION_EASTING  , msg_raw + ind     , 2);
          std::memcpy(&dataBeacon.XCVR_FIX.ACO_FIX.POSITION_NORTHING , msg_raw + ind + 2 , 2);
          std::memcpy(&dataBeacon.XCVR_FIX.ACO_FIX.POSITION_DEPTH    , msg_raw + ind + 4 , 2);
          ind=ind+6;
        }

        }
       break;

       case CID_NAV_QUERY_RESP:  
         dataBeacon.set(CID_NAV_QUERY_RESP);
        ind=0;
        std::memcpy(&dataBeacon.NAV_QUERY_RESP.ACO_FIX.DEST_ID      , msg_raw + ind     , 1);
        std::memcpy(&dataBeacon.NAV_QUERY_RESP.ACO_FIX.SRC_ID       , msg_raw + ind + 1 , 1);
        std::memcpy(&dataBeacon.NAV_QUERY_RESP.ACO_FIX.FLAGS          , msg_raw + ind + 2 , 1); 
        std::memcpy(&dataBeacon.NAV_QUERY_RESP.ACO_FIX.AMSGTYPE_E     , msg_raw + ind + 3 , 1); 
        std::memcpy(&dataBeacon.NAV_QUERY_RESP.ACO_FIX.ATTITUDE_YAW   , msg_raw + ind + 4,  2);
        std::memcpy(&dataBeacon.NAV_QUERY_RESP.ACO_FIX.ATTITUDE_PITCH , msg_raw + ind + 6 , 2);
        std::memcpy(&dataBeacon.NAV_QUERY_RESP.ACO_FIX.ATTITUDE_ROLL  , msg_raw + ind + 8 , 2);
        std::memcpy(&dataBeacon.NAV_QUERY_RESP.ACO_FIX.DEPTH_LOCAL    , msg_raw + ind + 10, 2); 
        std::memcpy(&dataBeacon.NAV_QUERY_RESP.ACO_FIX.VOS            , msg_raw + ind + 12, 2); 
        std::memcpy(&dataBeacon.NAV_QUERY_RESP.ACO_FIX.RSSI           , msg_raw + ind + 14, 2);
        dataBeacon.NAV_QUERY_RESP.ACO_FIX.OutputFlagsComp();
        ind=ind+16;
        if (dataBeacon.NAV_QUERY_RESP.ACO_FIX.OutputFlags_list[0]) //Range fields
        {
          
          std::memcpy(&dataBeacon.NAV_QUERY_RESP.ACO_FIX.RANGE_COUNT, msg_raw + ind     , 4);
          std::memcpy(&dataBeacon.NAV_QUERY_RESP.ACO_FIX.RANGE_TIME , msg_raw + ind + 4 , 4);
          std::memcpy(&dataBeacon.NAV_QUERY_RESP.ACO_FIX.RANGE_DIST , msg_raw + ind + 8 , 2); 
          ind=ind+10;
        }
        if (dataBeacon.NAV_QUERY_RESP.ACO_FIX.OutputFlags_list[1]) //USBL Fields
        {
          std::memcpy(&dataBeacon.NAV_QUERY_RESP.ACO_FIX.USBL_CHANNELS   , msg_raw + ind , 1);
          for (i=0; i<dataBeacon.NAV_QUERY_RESP.ACO_FIX.USBL_CHANNELS ;i++)
          {
          std::memcpy(&dataBeacon.NAV_QUERY_RESP.ACO_FIX.USBL_RSSI[i]   , msg_raw + ind + 1+2*i, 2); 
          }
          std::memcpy(&dataBeacon.NAV_QUERY_RESP.ACO_FIX.USBL_AZIMUTH    , msg_raw + ind + 1+2*i, 2);
          std::memcpy(&dataBeacon.NAV_QUERY_RESP.ACO_FIX.USBL_ELEVATION  , msg_raw + ind + 3+2*i, 2);
          std::memcpy(&dataBeacon.NAV_QUERY_RESP.ACO_FIX.USBL_FIT_ERROR  , msg_raw + ind + 5+2*i, 2);
          ind=ind+7+i*2;
        }
        if (dataBeacon.NAV_QUERY_RESP.ACO_FIX.OutputFlags_list[2]) //Position Fields
        {
          std::memcpy(&dataBeacon.NAV_QUERY_RESP.ACO_FIX.POSITION_EASTING  , msg_raw + ind     , 2);
          std::memcpy(&dataBeacon.NAV_QUERY_RESP.ACO_FIX.POSITION_NORTHING , msg_raw + ind + 2 , 2);
          std::memcpy(&dataBeacon.NAV_QUERY_RESP.ACO_FIX.POSITION_DEPTH    , msg_raw + ind + 4 , 2);
          ind=ind+12;
        }
         std::memcpy(&dataBeacon.NAV_QUERY_RESP.QUERY_FLAGS ,  msg_raw + ind  , 1);
         ind=ind+1;
         dataBeacon.NAV_QUERY_RESP.QUERY_FLAGS_extract();
       
        if (dataBeacon.NAV_QUERY_RESP.QUERY_FLAGS_list[0]) 
        {
            std::memcpy(&dataBeacon.NAV_QUERY_RESP.REMOTE_DEPTH       , msg_raw + ind     ,4 );  
            ind=ind+4; 
        }
        if (dataBeacon.NAV_QUERY_RESP.QUERY_FLAGS_list[1])
        {
            std::memcpy(&dataBeacon.NAV_QUERY_RESP.REMOTE_SUPPLY      , msg_raw + ind     , 2);  
            ind=ind+2;        
        }
        if (dataBeacon.NAV_QUERY_RESP.QUERY_FLAGS_list[2])  
        {
            std::memcpy(&dataBeacon.NAV_QUERY_RESP.REMOTE_TEMP        , msg_raw + ind     , 2);   
             ind=ind+2;          
        }
        if (dataBeacon.NAV_QUERY_RESP.QUERY_FLAGS_list[3]) 
        { 
            std::memcpy(&dataBeacon.NAV_QUERY_RESP.REMOTE_YAW         , msg_raw + ind     , 2);          
            std::memcpy(&dataBeacon.NAV_QUERY_RESP.REMOTE_PITCH       , msg_raw + ind  +2   , 2);          
            std::memcpy(&dataBeacon.NAV_QUERY_RESP.REMOTE_ROLL        , msg_raw + ind   +4  , 2);          
        }

       break;

      case  CID_SYS_REBOOT:
            {
              std::memcpy(&dataBeacon.SYS_REBOOT.STATUS  , msg_raw    , 1);
            }
        break;

      case  CID_SETTINGS_SAVE:
            {
              std::memcpy(&dataBeacon.SETTINGS_SAVE.STATUS  , msg_raw    , 1);
            }
        break;

        case CID_NAV_QUERY_SEND:
                std::memcpy(&dataBeacon.NAV_QUERY_SEND.STATUS, msg_raw    , 1);

        break;
        
        case CID_NAV_ERROR : 
                
        break;   

        case CID_NAV_BEACON_POS_UPDATE  :
               dataBeacon.set(CID_NAV_BEACON_POS_UPDATE);
        ind=0;
        std::memcpy(&dataBeacon.NAV_BEACON_POS_UPDATE.ACO_FIX.DEST_ID      , msg_raw + ind     , 1);
        std::memcpy(&dataBeacon.NAV_BEACON_POS_UPDATE.ACO_FIX.SRC_ID       , msg_raw + ind + 1 , 1);
        std::memcpy(&dataBeacon.NAV_BEACON_POS_UPDATE.ACO_FIX.FLAGS          , msg_raw + ind + 2 , 1); 
        std::memcpy(&dataBeacon.NAV_BEACON_POS_UPDATE.ACO_FIX.AMSGTYPE_E     , msg_raw + ind + 3 , 1); 
        std::memcpy(&dataBeacon.NAV_BEACON_POS_UPDATE.ACO_FIX.ATTITUDE_YAW   , msg_raw + ind + 4,  2);
        std::memcpy(&dataBeacon.NAV_BEACON_POS_UPDATE.ACO_FIX.ATTITUDE_PITCH , msg_raw + ind + 6 , 2);
        std::memcpy(&dataBeacon.NAV_BEACON_POS_UPDATE.ACO_FIX.ATTITUDE_ROLL  , msg_raw + ind + 8 , 2);
        std::memcpy(&dataBeacon.NAV_BEACON_POS_UPDATE.ACO_FIX.DEPTH_LOCAL    , msg_raw + ind + 10, 2); 
        std::memcpy(&dataBeacon.NAV_BEACON_POS_UPDATE.ACO_FIX.VOS            , msg_raw + ind + 12, 2); 
        std::memcpy(&dataBeacon.NAV_BEACON_POS_UPDATE.ACO_FIX.RSSI           , msg_raw + ind + 14, 2);
        dataBeacon.NAV_BEACON_POS_UPDATE.ACO_FIX.OutputFlagsComp();
        ind=ind+16;
        if (dataBeacon.NAV_BEACON_POS_UPDATE.ACO_FIX.OutputFlags_list[0]) //Range fields
        {
          
          std::memcpy(&dataBeacon.NAV_BEACON_POS_UPDATE.ACO_FIX.RANGE_COUNT, msg_raw + ind     , 4);
          std::memcpy(&dataBeacon.NAV_BEACON_POS_UPDATE.ACO_FIX.RANGE_TIME , msg_raw + ind + 4 , 4);
          std::memcpy(&dataBeacon.NAV_BEACON_POS_UPDATE.ACO_FIX.RANGE_DIST , msg_raw + ind + 8 , 2); 
          ind=ind+10;
        }
        if (dataBeacon.NAV_BEACON_POS_UPDATE.ACO_FIX.OutputFlags_list[1]) //USBL Fields
        {
          std::memcpy(&dataBeacon.NAV_BEACON_POS_UPDATE.ACO_FIX.USBL_CHANNELS   , msg_raw + ind , 1);
          for (i=0; i<dataBeacon.NAV_BEACON_POS_UPDATE.ACO_FIX.USBL_CHANNELS ;i++)
          {
          std::memcpy(&dataBeacon.NAV_BEACON_POS_UPDATE.ACO_FIX.USBL_RSSI[i]   , msg_raw + ind + 1+2*i, 2); 
          }
          std::memcpy(&dataBeacon.NAV_BEACON_POS_UPDATE.ACO_FIX.USBL_AZIMUTH    , msg_raw + ind + 1+2*i, 2);
          std::memcpy(&dataBeacon.NAV_BEACON_POS_UPDATE.ACO_FIX.USBL_ELEVATION  , msg_raw + ind + 3+2*i, 2);
          std::memcpy(&dataBeacon.NAV_BEACON_POS_UPDATE.ACO_FIX.USBL_FIT_ERROR  , msg_raw + ind + 5+2*i, 2);
          ind=ind+7+i*2;
        }
        if (dataBeacon.NAV_BEACON_POS_UPDATE.ACO_FIX.OutputFlags_list[2]) //Position Fields
        {
          std::memcpy(&dataBeacon.NAV_BEACON_POS_UPDATE.ACO_FIX.POSITION_EASTING  , msg_raw + ind     , 2);
          std::memcpy(&dataBeacon.NAV_BEACON_POS_UPDATE.ACO_FIX.POSITION_NORTHING , msg_raw + ind + 2 , 2);
          std::memcpy(&dataBeacon.NAV_BEACON_POS_UPDATE.ACO_FIX.POSITION_DEPTH    , msg_raw + ind + 4 , 2);
          ind=ind+12;
        }
        std::memcpy(&dataBeacon.NAV_BEACON_POS_UPDATE.BEACON_ID   ,       msg_raw + ind     , 1); 
        std::memcpy(&dataBeacon.NAV_BEACON_POS_UPDATE.POSITION_EASTING  , msg_raw + ind + 1 , 2);
        std::memcpy(&dataBeacon.NAV_BEACON_POS_UPDATE.POSITION_NORTHING , msg_raw + ind + 3 , 2);
        std::memcpy(&dataBeacon.NAV_BEACON_POS_UPDATE.POSITION_DEPTH    , msg_raw + ind + 5 , 2);
        break;   

        case CID_NAV_BEACON_POS_SEND:
                std::memcpy(&dataBeacon.NAV_BEACON_POS_SEND.STATUS , msg_raw , 1);
        break;
        case CID_NAV_REF_POS_SEND:
                    std::memcpy(&dataBeacon.NAV_REF_POS_SEND.STATUS, msg_raw ,1);
        break;


        case  CID_NAV_REF_POS_UPDATE:

            dataBeacon.set(CID_NAV_REF_POS_UPDATE);
            ind=0;
            std::memcpy(&dataBeacon.NAV_REF_POS_UPDATE.ACO_FIX.DEST_ID      , msg_raw + ind     , 1);
            std::memcpy(&dataBeacon.NAV_REF_POS_UPDATE.ACO_FIX.SRC_ID       , msg_raw + ind + 1 , 1);
            std::memcpy(&dataBeacon.NAV_REF_POS_UPDATE.ACO_FIX.FLAGS          , msg_raw + ind + 2 , 1); 
            std::memcpy(&dataBeacon.NAV_REF_POS_UPDATE.ACO_FIX.AMSGTYPE_E     , msg_raw + ind + 3 , 1); 
            std::memcpy(&dataBeacon.NAV_REF_POS_UPDATE.ACO_FIX.ATTITUDE_YAW   , msg_raw + ind + 4,  2);
            std::memcpy(&dataBeacon.NAV_REF_POS_UPDATE.ACO_FIX.ATTITUDE_PITCH , msg_raw + ind + 6 , 2);
            std::memcpy(&dataBeacon.NAV_REF_POS_UPDATE.ACO_FIX.ATTITUDE_ROLL  , msg_raw + ind + 8 , 2);
            std::memcpy(&dataBeacon.NAV_REF_POS_UPDATE.ACO_FIX.DEPTH_LOCAL    , msg_raw + ind + 10, 2); 
            std::memcpy(&dataBeacon.NAV_BEACON_POS_UPDATE.ACO_FIX.VOS            , msg_raw + ind + 12, 2); 
            std::memcpy(&dataBeacon.NAV_REF_POS_UPDATE.ACO_FIX.RSSI           , msg_raw + ind + 14, 2);
            dataBeacon.NAV_REF_POS_UPDATE.ACO_FIX.OutputFlagsComp();
            ind=ind+16;
            if (dataBeacon.NAV_REF_POS_UPDATE.ACO_FIX.OutputFlags_list[0]) //Range fields
            {
              
              std::memcpy(&dataBeacon.NAV_REF_POS_UPDATE.ACO_FIX.RANGE_COUNT, msg_raw + ind     , 4);
              std::memcpy(&dataBeacon.NAV_REF_POS_UPDATE.ACO_FIX.RANGE_TIME , msg_raw + ind + 4 , 4);
              std::memcpy(&dataBeacon.NAV_REF_POS_UPDATE.ACO_FIX.RANGE_DIST , msg_raw + ind + 8 , 2); 
              ind=ind+10;
            }
            if (dataBeacon.NAV_REF_POS_UPDATE.ACO_FIX.OutputFlags_list[1]) //USBL Fields
            {
              std::memcpy(&dataBeacon.NAV_REF_POS_UPDATE.ACO_FIX.USBL_CHANNELS   , msg_raw + ind , 1);
              for (i=0; i<dataBeacon.NAV_REF_POS_UPDATE.ACO_FIX.USBL_CHANNELS ;i++)
              {
              std::memcpy(&dataBeacon.NAV_REF_POS_UPDATE.ACO_FIX.USBL_RSSI[i]   , msg_raw + ind + 1+2*i, 2); 
              }
              std::memcpy(&dataBeacon.NAV_REF_POS_UPDATE.ACO_FIX.USBL_AZIMUTH    , msg_raw + ind + 1+2*i, 2);
              std::memcpy(&dataBeacon.NAV_REF_POS_UPDATE.ACO_FIX.USBL_ELEVATION  , msg_raw + ind + 3+2*i, 2);
              std::memcpy(&dataBeacon.NAV_REF_POS_UPDATE.ACO_FIX.USBL_FIT_ERROR  , msg_raw + ind + 5+2*i, 2);
              ind=ind+7+i*2;
            }
            if (dataBeacon.NAV_REF_POS_UPDATE.ACO_FIX.OutputFlags_list[2]) //Position Fields
            {
              std::memcpy(&dataBeacon.NAV_REF_POS_UPDATE.ACO_FIX.POSITION_EASTING  , msg_raw + ind     , 2);
              std::memcpy(&dataBeacon.NAV_REF_POS_UPDATE.ACO_FIX.POSITION_NORTHING , msg_raw + ind + 2 , 2);
              std::memcpy(&dataBeacon.NAV_REF_POS_UPDATE.ACO_FIX.POSITION_DEPTH    , msg_raw + ind + 4 , 2);
              ind=ind+12;
            }
            std::memcpy(&dataBeacon.NAV_REF_POS_UPDATE.BEACON_ID   ,       msg_raw + ind     , 1); 
            std::memcpy(&dataBeacon.NAV_REF_POS_UPDATE.POSITION_LATITUDE  , msg_raw + ind + 1 , 4);
            std::memcpy(&dataBeacon.NAV_REF_POS_UPDATE.POSITION_LONGITUDE , msg_raw + ind + 5 , 4);

        break;

       // Should never get here.
     default:
       //m_data_state = DP_COMPLETE;
       break;
    }
  }

  std::string
  ComandCreateSeatrac(Cid cid_m , Data_Seatrac& dataBeacon )
  {
    std::string cmd = "#" ;
    std::string check_sum;
    std::string data_m=String::str("%02X",(uint16_t) cid_m );
    std::string tmp ;
    switch(cid_m)
      {
          case CID_PING_SEND:
            data_m+= String::str("%02X%02X",((uint8_t)dataBeacon.type_CID_PING_SEND_m.DEST_ID ), ((uint8_t) dataBeacon.type_CID_PING_SEND_m.MSG_TYPE));
            break;
      
          case CID_DAT_SEND:  
            data_m+= String::str("%02X%02X%02X",((uint8_t)dataBeacon.type_CID_DAT_SEND_t.DEST_ID ),((uint8_t)dataBeacon.type_CID_DAT_SEND_t.MSG_TYPE),((uint8_t)dataBeacon.type_CID_DAT_SEND_t.PACKET_LEN));
            data_m+= dataBeacon.type_CID_DAT_SEND_t.PACKET_DATA;
          break;
          case CID_SETTINGS_SET:
               {
                    std::vector<char> msg_temp( 107, 0);                  
                    std::memcpy( &msg_temp[0]  ,  &dataBeacon.Becon_settings.STATUS_FLAGS              ,  1);       
                    std::memcpy( &msg_temp[1]  ,  &dataBeacon.Becon_settings.STATUS_OUTPUT             ,  1);   
                    std::memcpy( &msg_temp[2]  ,  &dataBeacon.Becon_settings.UART_MAIN_BAUD            ,  1);   
                    std::memcpy( &msg_temp[3]  ,  &dataBeacon.Becon_settings.UART_AUX_BAUD             ,  1);   
                    std::memcpy( &msg_temp[4]  ,  &dataBeacon.Becon_settings.NET_MAC_ADDR              ,  6);  
                    std::memcpy( &msg_temp[10] ,  &dataBeacon.Becon_settings.NET_IP_ADDR               ,  4);   
                    std::memcpy( &msg_temp[14] ,  &dataBeacon.Becon_settings.NET_IP_SUBNET             ,  4);   
                    std::memcpy( &msg_temp[18] ,  &dataBeacon.Becon_settings.NET_IP_GATEWAY            ,  4);   
                    std::memcpy( &msg_temp[22] ,  &dataBeacon.Becon_settings.NET_IP_DNS                ,  4);  
                    std::memcpy( &msg_temp[26] ,  &dataBeacon.Becon_settings.NET_TCP_PORT              ,  2);   
                    std::memcpy( &msg_temp[28] ,  &dataBeacon.Becon_settings.ENV_FLAGS                 ,  1);   
                    std::memcpy( &msg_temp[29] ,  &dataBeacon.Becon_settings.ENV_PRESSURE_OFS          ,  4);   
                    std::memcpy( &msg_temp[33] ,  &dataBeacon.Becon_settings.ENV_SALINITY              ,  2);   
                    std::memcpy( &msg_temp[35] ,  &dataBeacon.Becon_settings.ENV_VOS                   ,  2);   
                    std::memcpy( &msg_temp[37] ,  &dataBeacon.Becon_settings.AHRS_FLAGS                ,  1);   
                    std::memcpy( &msg_temp[38] ,  &dataBeacon.Becon_settings.AHRS_CAL.ACC_MIN_X        ,  2);
                    std::memcpy( &msg_temp[40] ,  &dataBeacon.Becon_settings.AHRS_CAL.ACC_MIN_Y        ,  2);
                    std::memcpy( &msg_temp[42] ,  &dataBeacon.Becon_settings.AHRS_CAL.ACC_MIN_Z        ,  2);
                    std::memcpy( &msg_temp[44] ,  &dataBeacon.Becon_settings.AHRS_CAL.ACC_MAX_X        ,  2);
                    std::memcpy( &msg_temp[46] ,  &dataBeacon.Becon_settings.AHRS_CAL.ACC_MAX_Y        ,  2);
                    std::memcpy( &msg_temp[48] ,  &dataBeacon.Becon_settings.AHRS_CAL.ACC_MAX_Z        ,  2);
                    std::memcpy( &msg_temp[50] ,  &dataBeacon.Becon_settings.AHRS_CAL.MAG_VALID        ,  1);
                    std::memcpy( &msg_temp[51] ,  &dataBeacon.Becon_settings.AHRS_CAL.MAG_HARD_X       ,  4);
                    std::memcpy( &msg_temp[55] ,  &dataBeacon.Becon_settings.AHRS_CAL.MAG_HARD_Y       ,  4);
                    std::memcpy( &msg_temp[59] ,  &dataBeacon.Becon_settings.AHRS_CAL.MAG_HARD_Z       ,  4);
                    std::memcpy( &msg_temp[63] ,  &dataBeacon.Becon_settings.AHRS_CAL.MAG_SOFT_X       ,  4);
                    std::memcpy( &msg_temp[67] ,  &dataBeacon.Becon_settings.AHRS_CAL.MAG_SOFT_Y       ,  4);
                    std::memcpy( &msg_temp[71] ,  &dataBeacon.Becon_settings.AHRS_CAL.MAG_SOFT_Z       ,  4);
                    std::memcpy( &msg_temp[75] ,  &dataBeacon.Becon_settings.AHRS_CAL.MAG_FIELD        ,  4);
                    std::memcpy( &msg_temp[79] ,  &dataBeacon.Becon_settings.AHRS_CAL.MAG_ERROR        ,  4);
                    std::memcpy( &msg_temp[83] ,  &dataBeacon.Becon_settings.AHRS_CAL.GYRO_OFFSET_X    ,  2);
                    std::memcpy( &msg_temp[85] ,  &dataBeacon.Becon_settings.AHRS_CAL.GYRO_OFFSET_Y    ,  2);
                    std::memcpy( &msg_temp[87] ,  &dataBeacon.Becon_settings.AHRS_CAL.GYRO_OFFSET_Z    ,  2);
                    std::memcpy( &msg_temp[89] ,  &dataBeacon.Becon_settings.AHRS_YAW_OFS              ,  2);   
                    std::memcpy( &msg_temp[91] ,  &dataBeacon.Becon_settings.AHRS_PITCH_OFS            ,  2);   
                    std::memcpy( &msg_temp[93] ,  &dataBeacon.Becon_settings.AHRS_ROLL_OFS             ,  2);   
                    std::memcpy( &msg_temp[95] ,  &dataBeacon.Becon_settings.XCVR_FLAGS                ,  1);   
                    std::memcpy( &msg_temp[96] ,  &dataBeacon.Becon_settings.XCVR_BEACON_ID            ,  1);   
                    std::memcpy( &msg_temp[97] ,  &dataBeacon.Becon_settings.XCVR_RANGE_TMO            ,  2);   
                    std::memcpy( &msg_temp[99] ,  &dataBeacon.Becon_settings.XCVR_RESP_TIME            ,  2);   
                    std::memcpy( &msg_temp[101], &dataBeacon.Becon_settings.XCVR_YAW                   ,  2);   
                    std::memcpy( &msg_temp[103], &dataBeacon.Becon_settings.XCVR_PITCH                 ,  2);   
                    std::memcpy( &msg_temp[105], &dataBeacon.Becon_settings.XCVR_ROLL                  ,  2);
                //converter data para string 
                data_m+= String::toHex(msg_temp);
            }
          break;

          case  CID_SYS_REBOOT:
            {
                data_m+= String::str("%02X%02X",0x95,0x6A);
            }
          break;

          case  CID_NAV_BEACON_POS_SEND:
            {
                 std::vector<char> msg_temp( 7, 0);  
                 
                std::memcpy( &msg_temp[0]  , &dataBeacon.NAV_BEACON_POS_SEND.BEACON_ID, 1);
                std::memcpy( &msg_temp[1]  , &dataBeacon.NAV_BEACON_POS_SEND.POSITION_EASTING , 2); 
                std::memcpy( &msg_temp[3]  , &dataBeacon.NAV_BEACON_POS_SEND.POSITION_NORTHING, 2);
                std::memcpy( &msg_temp[5]  , &dataBeacon.NAV_BEACON_POS_SEND.POSITION_DEPTH, 2);
                data_m+= String::toHex(msg_temp);
            }
          break;

          case  CID_SETTINGS_SAVE:
            {
              //not require parameters

            }
        break;

        case CID_NAV_REF_POS_SEND:

            {    std::vector<char> msg_temp( 8, 0);  
                 
                  std::memcpy( &msg_temp[0], &dataBeacon.NAV_REF_POS_SEND.POSITION_LATITUDE , 4);
                  std::memcpy( &msg_temp[4], &dataBeacon.NAV_REF_POS_SEND.POSITION_LONGITUDE, 4);
                data_m+= String::toHex(msg_temp);

            }
        break;

        case CID_NAV_QUERY_SEND:
            {
               data_m+= String::str("%02X%02X",((uint8_t)dataBeacon.NAV_QUERY_SEND.DEST_ID ), ((uint8_t) dataBeacon.NAV_QUERY_SEND.QUERY_FLAGS));
            }
        break;

          //Should never get here.
        default:
            
           break;
      }
    //clac CRC 
    std::string msg = String::fromHex(data_m);
    const char* msg_raw = msg.data();
        uint16_t temp_crc =CRC16::compute((uint8_t*) msg_raw ,msg.size() ,0);
        uint16_t crc= ((0x00ff & temp_crc)<<8) + ( (0xff00 & temp_crc) >> 8);  
        check_sum=String::str("%04X",(uint16_t) crc );
        // ADD params to message 
    cmd+= data_m;
      cmd+=  check_sum; 
    cmd+= "\n\r";
    //std::cout << "COMANDO: " << cmd << std::endl;
    return cmd;
  }

  



   void 
   printSeatracFunction(unsigned typemessege,  Data_Seatrac& dataBeacon)
   {
    
      int i;
      switch(typemessege)
      {
        case CID_STATUS:
        {
              //std::cout <<  " MESSAGE CID_STATUS  " << std::endl;
            /*
            std::cout << std::dec << (int)dataBeacon.CID_STATUS_m.OutputFlags << std::endl;
            std::cout << std::dec << dataBeacon.CID_STATUS_m.Timestamp/1000 <<  "s" << std::endl;
            
            if (dataBeacon.CID_STATUS_m.OutputFlags_list[0]) //ENVIRONMENT
            {
              
            
              std::cout << std::dec << (dataBeacon.CID_STATUS_m.EnvironmentSupply) <<  " mv" << std::endl;
              std::cout << std::dec << (dataBeacon.CID_STATUS_m.EnvironmentTemperature)/10 <<  " º" << std::endl;
              std::cout << std::dec << (dataBeacon.CID_STATUS_m.EnvironmentPressure) <<  " m_bar" << std::endl;
              std::cout << std::dec << (dataBeacon.CID_STATUS_m.EnvironmentDepth) <<  " dm" << std::endl;
              std::cout << std::dec << (dataBeacon.CID_STATUS_m.EnvironmentVos)/10 <<  " m/s sond" << std::endl;
            }
            if (dataBeacon.CID_STATUS_m.OutputFlags_list[1]) //ATTITUDE
            {
            
              std::cout << std::dec << dataBeacon.CID_STATUS_m.AttitudeYaw/10 <<  " A_Yaw" << std::endl;
              std::cout << std::dec << dataBeacon.CID_STATUS_m.AttitudePitch/10 <<  " A_Pich" << std::endl;
              std::cout << std::dec << dataBeacon.CID_STATUS_m.AttitudeRoll/10 <<  " A_roll" << std::endl;
            }
            if (dataBeacon.CID_STATUS_m.OutputFlags_list[2]) //MAG_CAL
            {
              std::cout << std::dec << (int) dataBeacon.CID_STATUS_m.MAG_CAL_BUF       << "  dataBeacon.CID_STATUS_m.MAG_CAL_BUF      "  <<std::endl;
              std::cout << std::dec << dataBeacon.CID_STATUS_m.MAG_CAL_VALID     << "  dataBeacon.CID_STATUS_m.MAG_CAL_VALID    "  <<std::endl;
              std::cout << std::dec << dataBeacon.CID_STATUS_m.MAG_CAL_AGE       << "  dataBeacon.CID_STATUS_m.MAG_CAL_AGE      "  <<std::endl;
              std::cout << std::dec << (int) dataBeacon.CID_STATUS_m.MAG_CAL_FIT       << "  dataBeacon.CID_STATUS_m.MAG_CAL_FIT      "  <<std::endl;
          
            }
            if (dataBeacon.CID_STATUS_m.OutputFlags_list[3]) //ACC_CAL
            {
              std::cout << std::dec << dataBeacon.CID_STATUS_m.ACC_LIM_MIN_Y     << "   dataBeacon.CID_STATUS_m.ACC_LIM_MIN_Y   "  <<std::endl;
              std::cout << std::dec << dataBeacon.CID_STATUS_m.ACC_LIM_MIN_Z     << "   dataBeacon.CID_STATUS_m.ACC_LIM_MIN_Z   "  <<std::endl;
              std::cout << std::dec << dataBeacon.CID_STATUS_m.ACC_LIM_MIN_X     << "   dataBeacon.CID_STATUS_m.ACC_LIM_MIN_X   "  <<std::endl;
              std::cout << std::dec << dataBeacon.CID_STATUS_m.ACC_LIM_MAX_X     << "   dataBeacon.CID_STATUS_m.ACC_LIM_MAX_X   "  <<std::endl;
              std::cout << std::dec << dataBeacon.CID_STATUS_m.ACC_LIM_MAX_Y     << "   dataBeacon.CID_STATUS_m.ACC_LIM_MAX_Y   "  <<std::endl;
              std::cout << std::dec << dataBeacon.CID_STATUS_m.ACC_LIM_MAX_Z     << "   dataBeacon.CID_STATUS_m.ACC_LIM_MAX_Z   "  <<std::endl;
          
            }
            if (dataBeacon.CID_STATUS_m.OutputFlags_list[4])//AHRS_RAW_DATA
            {
              std::cout << std::dec << dataBeacon.CID_STATUS_m.AHRS_RAW_ACC_X    << "  dataBeacon.CID_STATUS_m.AHRS_RAW_ACC_X   "  <<std::endl;
              std::cout << std::dec << dataBeacon.CID_STATUS_m.AHRS_RAW_ACC_Y    << "  dataBeacon.CID_STATUS_m.AHRS_RAW_ACC_Y   "  <<std::endl;
              std::cout << std::dec << dataBeacon.CID_STATUS_m.AHRS_RAW_ACC_Z    << "  dataBeacon.CID_STATUS_m.AHRS_RAW_ACC_Z   "  <<std::endl;
              std::cout << std::dec << dataBeacon.CID_STATUS_m.AHRS_RAW_MAG_X    << "  dataBeacon.CID_STATUS_m.AHRS_RAW_MAG_X   "  <<std::endl;
              std::cout << std::dec << dataBeacon.CID_STATUS_m.AHRS_RAW_MAG_Y    << "  dataBeacon.CID_STATUS_m.AHRS_RAW_MAG_Y   "  <<std::endl;
              std::cout << std::dec << dataBeacon.CID_STATUS_m.AHRS_RAW_MAG_Z    << "  dataBeacon.CID_STATUS_m.AHRS_RAW_MAG_Z   "  <<std::endl;
              std::cout << std::dec << dataBeacon.CID_STATUS_m.AHRS_RAW_GYRO_X   << "  dataBeacon.CID_STATUS_m.AHRS_RAW_GYRO_X  "  <<std::endl;
              std::cout << std::dec << dataBeacon.CID_STATUS_m.AHRS_RAW_GYRO_Y   << "  dataBeacon.CID_STATUS_m.AHRS_RAW_GYRO_Y  "  <<std::endl;
              std::cout << std::dec << dataBeacon.CID_STATUS_m.AHRS_RAW_GYRO_Z     << "  dataBeacon.CID_STATUS_m.AHRS_RAW_GYRO_Z  "  <<std::endl;
                
            }
            if (dataBeacon.CID_STATUS_m.OutputFlags_list[5])//AHRS_COMP_DATA
            {   
              std::cout << std::dec <<  dataBeacon.CID_STATUS_m.AHRS_COMP_ACC_X    << "  dataBeacon.CID_STATUS_m.AHRS_COMP_ACC_X  "  <<std::endl;
              std::cout << std::dec <<  dataBeacon.CID_STATUS_m.AHRS_COMP_ACC_Y    << "  dataBeacon.CID_STATUS_m.AHRS_COMP_ACC_Y  "  <<std::endl;
              std::cout << std::dec <<  dataBeacon.CID_STATUS_m.AHRS_COMP_ACC_Z    << "  dataBeacon.CID_STATUS_m.AHRS_COMP_ACC_Z  "  <<std::endl;
              std::cout << std::dec <<  dataBeacon.CID_STATUS_m.AHRS_COMP_MAG_X    << "  dataBeacon.CID_STATUS_m.AHRS_COMP_MAG_X  "  <<std::endl;
              std::cout << std::dec <<  dataBeacon.CID_STATUS_m.AHRS_COMP_MAG_Y    << "  dataBeacon.CID_STATUS_m.AHRS_COMP_MAG_Y  "  <<std::endl;
              std::cout << std::dec <<  dataBeacon.CID_STATUS_m.AHRS_COMP_MAG_Z    << "  dataBeacon.CID_STATUS_m.AHRS_COMP_MAG_Z  "  <<std::endl;
              std::cout << std::dec <<  dataBeacon.CID_STATUS_m.AHRS_COMP_GYRO_X   << "  dataBeacon.CID_STATUS_m.AHRS_COMP_GYRO_X "  <<std::endl;
              std::cout << std::dec <<  dataBeacon.CID_STATUS_m.AHRS_COMP_GYRO_Y   << "  dataBeacon.CID_STATUS_m.AHRS_COMP_GYRO_Y "  <<std::endl;
              std::cout << std::dec <<  dataBeacon.CID_STATUS_m.AHRS_COMP_GYRO_Z   << "  dataBeacon.CID_STATUS_m.AHRS_COMP_GYRO_Z "  <<std::endl;
            }
            */
        
        }  
        break;
   
        case CID_PING_REQ: 
          
            std::cout <<  " MESSAGE  CID_PING_REQ" << std::endl;
    
            std::cout << std::dec << (int) dataBeacon.type_CID_PING_REQ_m.ACO_FIX.DEST_ID      <<  "    :ACO_FIX.DEST_ID      " << std::endl;
            std::cout << std::dec << (int) dataBeacon.type_CID_PING_REQ_m.ACO_FIX.SRC_ID       <<  "    :ACO_FIX.SRC_ID     " << std::endl;
            std::cout << std::dec << (int) dataBeacon.type_CID_PING_REQ_m.ACO_FIX.FLAGS        <<  "    :ACO_FIX.FLAGS         " << std::endl;
            std::cout << std::dec << (int) dataBeacon.type_CID_PING_REQ_m.ACO_FIX.AMSGTYPE_E   <<  "    :ACO_FIX.AMSGTYPE_E   " << std::endl;
            std::cout << std::dec << dataBeacon.type_CID_PING_REQ_m.ACO_FIX.ATTITUDE_YAW       <<  "    :ACO_FIX.ATTITUDE_YAW " << std::endl;
            std::cout << std::dec << dataBeacon.type_CID_PING_REQ_m.ACO_FIX.ATTITUDE_PITCH     <<  "    :ACO_FIX.ATTITUDE_PITCH" << std::endl;
            std::cout << std::dec << dataBeacon.type_CID_PING_REQ_m.ACO_FIX.ATTITUDE_ROLL      <<  "    :ACO_FIX.ATTITUDE_ROLL " << std::endl;
            std::cout << std::dec << dataBeacon.type_CID_PING_REQ_m.ACO_FIX.DEPTH_LOCAL        <<  "    :ACO_FIX.DEPTH_LOCAL   " << std::endl;
            std::cout << std::dec << dataBeacon.type_CID_PING_REQ_m.ACO_FIX.VOS                <<  "    :ACO_FIX.VOS           " << std::endl;
            std::cout << std::dec << dataBeacon.type_CID_PING_REQ_m.ACO_FIX.RSSI               <<  "    :ACO_FIX.RSSI          " << std::endl;
            
    
              
            if (dataBeacon.type_CID_PING_REQ_m.ACO_FIX.OutputFlags_list[0]) //Range fields
            {
              
              std::cout << std::dec << dataBeacon.type_CID_PING_REQ_m.ACO_FIX.RANGE_COUNT << " dataBeacon.type_CID_PING_REQ_m.ACO_FIX.RANGE_COUNT   " << std::endl;
              std::cout << std::dec << dataBeacon.type_CID_PING_REQ_m.ACO_FIX.RANGE_TIME  << " dataBeacon.type_CID_PING_REQ_m.ACO_FIX.RANGE_TIME    " << std::endl;
              std::cout << std::dec << dataBeacon.type_CID_PING_REQ_m.ACO_FIX.RANGE_DIST  << " dataBeacon.type_CID_PING_REQ_m.ACO_FIX.RANGE_DIST    " << std::endl;
              
            }
            if (dataBeacon.type_CID_PING_REQ_m.ACO_FIX.OutputFlags_list[1]) //USBL Fields
            {
              std::cout << std::dec << dataBeacon.type_CID_PING_REQ_m.ACO_FIX.USBL_CHANNELS << "   dataBeacon.type_CID_PING_REQ_m.ACO_FIX.USBL_CHANNELS " << std::endl;
              for (i=0; i<dataBeacon.type_CID_PING_REQ_m.ACO_FIX.USBL_CHANNELS ;i++)
              {
              std::cout << std::dec << dataBeacon.type_CID_PING_REQ_m.ACO_FIX.USBL_RSSI[i]   << "  dataBeacon.type_CID_PING_REQ_m.ACO_FIX.USBL_RSSI[i]    " << std::endl;
              }
              std::cout << std::dec << dataBeacon.type_CID_PING_REQ_m.ACO_FIX.USBL_AZIMUTH    << "   dataBeacon.type_CID_PING_REQ_m.ACO_FIX.USBL_AZIMUTH    " << std::endl;
              std::cout << std::dec << dataBeacon.type_CID_PING_REQ_m.ACO_FIX.USBL_ELEVATION  << "   dataBeacon.type_CID_PING_REQ_m.ACO_FIX.USBL_ELEVATION  " << std::endl;
              std::cout << std::dec << dataBeacon.type_CID_PING_REQ_m.ACO_FIX.USBL_FIT_ERROR  << "   dataBeacon.type_CID_PING_REQ_m.ACO_FIX.USBL_FIT_ERROR  " << std::endl;
              
            }
            if (dataBeacon.type_CID_PING_REQ_m.ACO_FIX.OutputFlags_list[2]) //Position Fields
            {
              std::cout << std::dec << (long int) dataBeacon.type_CID_PING_REQ_m.ACO_FIX.POSITION_EASTING  << "   dataBeacon.type_CID_PING_REQ_m.ACO_FIX.POSITION_EASTING  " << std::endl;
              std::cout << std::dec << (long int) dataBeacon.type_CID_PING_REQ_m.ACO_FIX.POSITION_NORTHING << "   dataBeacon.type_CID_PING_REQ_m.ACO_FIX.POSITION_NORTHING " << std::endl;
              std::cout << std::dec << (long int) dataBeacon.type_CID_PING_REQ_m.ACO_FIX.POSITION_DEPTH    << "   dataBeacon.type_CID_PING_REQ_m.ACO_FIX.POSITION_DEPTH    " << std::endl;
            }
            
             
        break;
    
        case CID_PING_RESP:  //Message sent when a PING response is received 
            {
            std::cout <<  " MESSAGE  CID_PING_RESP" << std::endl;
    
            std::cout << std::dec << (int) dataBeacon.type_CID_PING_RESP_m.ACO_FIX.DEST_ID  <<   "  dataBeacon.type_CID_PING_RESP_m.ACO_FIX.DEST_ID           "   << std::endl;
            std::cout << std::dec << (int) dataBeacon.type_CID_PING_RESP_m.ACO_FIX.SRC_ID   <<   "  dataBeacon.type_CID_PING_RESP_m.ACO_FIX.SRC_ID        "   << std::endl;
            std::cout << std::dec << (int) dataBeacon.type_CID_PING_RESP_m.ACO_FIX.FLAGS        <<   "  dataBeacon.type_CID_PING_RESP_m.ACO_FIX.FLAGS             "   << std::endl;
            std::cout << std::dec << (int) dataBeacon.type_CID_PING_RESP_m.ACO_FIX.AMSGTYPE_E   <<   "  dataBeacon.type_CID_PING_RESP_m.ACO_FIX.AMSGTYPE_E        "   << std::endl;
            std::cout << std::dec << dataBeacon.type_CID_PING_RESP_m.ACO_FIX.ATTITUDE_YAW   <<   "  dataBeacon.type_CID_PING_RESP_m.ACO_FIX.ATTITUDE_YAW      "   << std::endl;
            std::cout << std::dec << dataBeacon.type_CID_PING_RESP_m.ACO_FIX.ATTITUDE_PITCH <<   "  dataBeacon.type_CID_PING_RESP_m.ACO_FIX.ATTITUDE_PITCH    "   << std::endl;
            std::cout << std::dec << dataBeacon.type_CID_PING_RESP_m.ACO_FIX.ATTITUDE_ROLL  <<   "  dataBeacon.type_CID_PING_RESP_m.ACO_FIX.ATTITUDE_ROLL     "   << std::endl;
            std::cout << std::dec << dataBeacon.type_CID_PING_RESP_m.ACO_FIX.DEPTH_LOCAL    <<   "  dataBeacon.type_CID_PING_RESP_m.ACO_FIX.DEPTH_LOCAL       "   << std::endl;
            std::cout << std::dec << dataBeacon.type_CID_PING_RESP_m.ACO_FIX.VOS            <<   "  dataBeacon.type_CID_PING_RESP_m.ACO_FIX.VOS               "   << std::endl;
            std::cout << std::dec << dataBeacon.type_CID_PING_RESP_m.ACO_FIX.RSSI           <<   "  dataBeacon.type_CID_PING_RESP_m.ACO_FIX.RSSI              "   << std::endl;
        
            if (dataBeacon.type_CID_PING_RESP_m.ACO_FIX.OutputFlags_list[0]) //Range fields
            {
              
              std::cout << std::dec << dataBeacon.type_CID_PING_RESP_m.ACO_FIX.RANGE_COUNT  << "    dataBeacon.type_CID_PING_RESP_m.ACO_FIX.RANGE_COUNT   "   << std::endl; 
              std::cout << std::dec << dataBeacon.type_CID_PING_RESP_m.ACO_FIX.RANGE_TIME   << "    dataBeacon.type_CID_PING_RESP_m.ACO_FIX.RANGE_TIME    "   << std::endl;
              std::cout << std::dec << dataBeacon.type_CID_PING_RESP_m.ACO_FIX.RANGE_DIST   << "    dataBeacon.type_CID_PING_RESP_m.ACO_FIX.RANGE_DIST    "   << std::endl;       
            }
            if (dataBeacon.type_CID_PING_RESP_m.ACO_FIX.OutputFlags_list[1]) //USBL Fields
            {
              std::cout << std::dec << (int) dataBeacon.type_CID_PING_RESP_m.ACO_FIX.USBL_CHANNELS  << "      dataBeacon.type_CID_PING_RESP_m.ACO_FIX.USBL_CHANNELS "   << std::endl;   
              for (i=0; i<dataBeacon.type_CID_PING_RESP_m.ACO_FIX.USBL_CHANNELS ;i++)
              {
              std::cout << std::dec << dataBeacon.type_CID_PING_RESP_m.ACO_FIX.USBL_RSSI[i]   << "  dataBeacon.type_CID_PING_RESP_m.ACO_FIX.USBL_RSSI       "   << std::endl;   
              }
              std::cout << std::dec << dataBeacon.type_CID_PING_RESP_m.ACO_FIX.USBL_AZIMUTH     << "   dataBeacon.type_CID_PING_RESP_m.ACO_FIX.USBL_AZIMUTH     "   << std::endl;
              std::cout << std::dec << dataBeacon.type_CID_PING_RESP_m.ACO_FIX.USBL_ELEVATION   << "    dataBeacon.type_CID_PING_RESP_m.ACO_FIX.USBL_ELEVATION    "   << std::endl;
              std::cout << std::dec << dataBeacon.type_CID_PING_RESP_m.ACO_FIX.USBL_FIT_ERROR   << "    dataBeacon.type_CID_PING_RESP_m.ACO_FIX.USBL_FIT_ERROR    "   << std::endl;
              
            }
            if (dataBeacon.type_CID_PING_RESP_m.ACO_FIX.OutputFlags_list[2]) //Position Fields
            {
              std::cout << std::dec << (long int) dataBeacon.type_CID_PING_RESP_m.ACO_FIX.POSITION_EASTING   << "    dataBeacon.type_CID_PING_RESP_m.ACO_FIX.POSITION_EASTING    "   << std::endl;     
              std::cout << std::dec << (long int) dataBeacon.type_CID_PING_RESP_m.ACO_FIX.POSITION_NORTHING  << "    dataBeacon.type_CID_PING_RESP_m.ACO_FIX.POSITION_NORTHING   "   << std::endl;     
              std::cout << std::dec << (long int) dataBeacon.type_CID_PING_RESP_m.ACO_FIX.POSITION_DEPTH     << "  dataBeacon.type_CID_PING_RESP_m.ACO_FIX.POSITION_DEPTH      "   << std::endl;   
            }
        
            }  
         break;
  
        case CID_PING_ERROR:  //Message sent when a PING response error/timeout    
        {

    
            std::cout <<  " MESSAGE CID_PING_ERROR " << std::endl;
            std::cout << std::dec << (int) dataBeacon.type_CID_PING_ERROR_m.STATUS <<  " dataBeacon.type_CID_PING_ERROR_m.STATUS "   <<std::endl;
            switch(dataBeacon.type_CID_PING_ERROR_m.STATUS)
              {
                case CST_XCVR_RESP_TIMEOUT:
                 std::cout << "CST_XCVR_RESP_TIMEOUT   " ;
                 break;
                case CST_XCVR_RESP_WRONG:
                  std::cout << "CST_XCVR_RESP_WRONG   " ;
                case CST_XCVR_RESP_ERROR:
                  std::cout << "CST_XCVR_RESP_ERROR   " ;
                 break;
            default:
             break;
            }
            std::cout << std::dec << (int) dataBeacon.type_CID_PING_ERROR_m.BEACON_ID  << "  dataBeacon.type_CID_PING_ERROR_m.BEACON_ID "   <<std::endl;
            }
         break;
  
         case CID_PING_SEND: 
            std::cout <<  " MESSAGE  CID_PING_SEND AK" << std::endl;

            std::cout << (int) dataBeacon.type_CID_PING_SEND_m.STATUS  << "  dataBeacon.type_CID_PING_SEND_m.STATUS   " << std::endl;
            std::cout << (int) dataBeacon.type_CID_PING_SEND_m.BEACON_ID << "  dataBeacon.type_CID_PING_SEND_m.BEACON_ID  " << std::endl;
          break;
  
         case CID_DAT_SEND: // Report of CID_DAT_SEND opeeration   
            std::cout <<  " MESSAGE  CID_DAT_SEND AK " << std::endl;
            std::cout << (int) dataBeacon.type_CID_DAT_SEND_t.STATUS     << "  dataBeacon.type_CID_DAT_SEND_t.STATUS  " << std::endl;
            std::cout << (int) dataBeacon.type_CID_DAT_SEND_t.BEACON_ID  << "  dataBeacon.type_CID_DAT_SEND_t.BEACON_ID " << std::endl; 
        break;

         case CID_DAT_RECEIVE: //8.3. DAT Protocol Messages  
  
            std::cout <<  " MESSAGE  CID_DAT_RECEIVE " << std::endl;
            std::cout << (int) dataBeacon.type_CID_DAT_RECEIVE_m.ACO_FIX.DEST_ID        <<  "    dataBeacon.type_CID_DAT_RECEIVE_m.ACO_FIX.DEST_ID            " << std::endl;
            std::cout << (int) dataBeacon.type_CID_DAT_RECEIVE_m.ACO_FIX.SRC_ID         <<  "    dataBeacon.type_CID_DAT_RECEIVE_m.ACO_FIX.SRC_ID             " << std::endl;
            std::cout << (int) dataBeacon.type_CID_DAT_RECEIVE_m.ACO_FIX.FLAGS          <<  "    dataBeacon.type_CID_DAT_RECEIVE_m.ACO_FIX.FLAGS              " << std::endl;
            std::cout << (int) dataBeacon.type_CID_DAT_RECEIVE_m.ACO_FIX.AMSGTYPE_E     <<  "    dataBeacon.type_CID_DAT_RECEIVE_m.ACO_FIX.AMSGTYPE_E         " << std::endl;
            std::cout << dataBeacon.type_CID_DAT_RECEIVE_m.ACO_FIX.ATTITUDE_YAW         <<  "    dataBeacon.type_CID_DAT_RECEIVE_m.ACO_FIX.ATTITUDE_YAW       " << std::endl;
            std::cout << dataBeacon.type_CID_DAT_RECEIVE_m.ACO_FIX.ATTITUDE_PITCH       <<  "    dataBeacon.type_CID_DAT_RECEIVE_m.ACO_FIX.ATTITUDE_PITCH     " << std::endl;
            std::cout << dataBeacon.type_CID_DAT_RECEIVE_m.ACO_FIX.ATTITUDE_ROLL        <<  "    dataBeacon.type_CID_DAT_RECEIVE_m.ACO_FIX.ATTITUDE_ROLL      " << std::endl;
            std::cout << dataBeacon.type_CID_DAT_RECEIVE_m.ACO_FIX.DEPTH_LOCAL          <<  "    dataBeacon.type_CID_DAT_RECEIVE_m.ACO_FIX.DEPTH_LOCAL        " << std::endl;
            std::cout << dataBeacon.type_CID_DAT_RECEIVE_m.ACO_FIX.VOS                  <<  "    dataBeacon.type_CID_DAT_RECEIVE_m.ACO_FIX.VOS                " << std::endl;
            std::cout << dataBeacon.type_CID_DAT_RECEIVE_m.ACO_FIX.RSSI                 <<  "    dataBeacon.type_CID_DAT_RECEIVE_m.ACO_FIX.RSSI               " << std::endl;
            if (dataBeacon.type_CID_DAT_RECEIVE_m.ACO_FIX.OutputFlags_list[0]) //Range fields
            {
              
              std::cout << dataBeacon.type_CID_DAT_RECEIVE_m.ACO_FIX.RANGE_COUNT     <<  "     dataBeacon.type_CID_DAT_RECEIVE_m.ACO_FIX.RANGE_COUNT  "  << std::endl;
              std::cout << dataBeacon.type_CID_DAT_RECEIVE_m.ACO_FIX.RANGE_TIME      <<  "     dataBeacon.type_CID_DAT_RECEIVE_m.ACO_FIX.RANGE_TIME   "  << std::endl;
              std::cout << dataBeacon.type_CID_DAT_RECEIVE_m.ACO_FIX.RANGE_DIST      <<  "     dataBeacon.type_CID_DAT_RECEIVE_m.ACO_FIX.RANGE_DIST   "  << std::endl;
            }
            if (dataBeacon.type_CID_DAT_RECEIVE_m.ACO_FIX.OutputFlags_list[1]) //USBL Fields
            {
              std::cout << dataBeacon.type_CID_DAT_RECEIVE_m.ACO_FIX.USBL_CHANNELS     <<  "  dataBeacon.type_CID_DAT_RECEIVE_m.ACO_FIX.USBL_CHANNELS  "  << std::endl; 
              for (i=0; i<dataBeacon.type_CID_DAT_RECEIVE_m.ACO_FIX.USBL_CHANNELS ;i++) 
              {
              std::cout << dataBeacon.type_CID_DAT_RECEIVE_m.ACO_FIX.USBL_RSSI[i]      <<  "  dataBeacon.type_CID_DAT_RECEIVE_m.ACO_FIX.USBL_RSSI[i]  "  << std::endl;  
              }
              std::cout << dataBeacon.type_CID_DAT_RECEIVE_m.ACO_FIX.USBL_AZIMUTH       <<  "  dataBeacon.type_CID_DAT_RECEIVE_m.ACO_FIX.USBL_AZIMUTH     "  << std::endl;
              std::cout << dataBeacon.type_CID_DAT_RECEIVE_m.ACO_FIX.USBL_ELEVATION     <<  "  dataBeacon.type_CID_DAT_RECEIVE_m.ACO_FIX.USBL_ELEVATION   "  << std::endl;
              std::cout << dataBeacon.type_CID_DAT_RECEIVE_m.ACO_FIX.USBL_FIT_ERROR     <<  "  dataBeacon.type_CID_DAT_RECEIVE_m.ACO_FIX.USBL_FIT_ERROR   "  << std::endl;
              
            }
            if (dataBeacon.type_CID_DAT_RECEIVE_m.ACO_FIX.OutputFlags_list[2]) //Position Fields
            {
              std::cout << (long int) dataBeacon.type_CID_DAT_RECEIVE_m.ACO_FIX.POSITION_EASTING    <<  "  dataBeacon.type_CID_DAT_RECEIVE_m.ACO_FIX.POSITION_EASTING    "  << std::endl;
              std::cout << (long int) dataBeacon.type_CID_DAT_RECEIVE_m.ACO_FIX.POSITION_NORTHING   <<  "  dataBeacon.type_CID_DAT_RECEIVE_m.ACO_FIX.POSITION_NORTHING   "  << std::endl;
              std::cout << (long int) dataBeacon.type_CID_DAT_RECEIVE_m.ACO_FIX.POSITION_DEPTH      <<  "  dataBeacon.type_CID_DAT_RECEIVE_m.ACO_FIX.POSITION_DEPTH      "  << std::endl;
              
            }


            std::cout << (int) dataBeacon.type_CID_DAT_RECEIVE_m.ACK_FLAG             <<  "    dataBeacon.type_CID_DAT_RECEIVE_m.ACK_FLAG                 " << std::endl;
            std::cout << (int) dataBeacon.type_CID_DAT_RECEIVE_m.PACKET_LEN           <<  "    dataBeacon.type_CID_DAT_RECEIVE_m.PACKET_LEN               " << std::endl;
            for (i=0;i<(int) dataBeacon.type_CID_DAT_RECEIVE_m.PACKET_LEN ;i++)
            {
              std::cout << (int) dataBeacon.type_CID_DAT_RECEIVE_m.PACKET_DATA[i]     <<  "    dataBeacon.type_CID_DAT_RECEIVE_m.PACKET_DATA["<<i+1 <<"]   " << std::endl;
            }
        
  
        break;
  
        case CID_DAT_ERROR: 
            std::cout <<  " MESSAGE  CID_DAT_ERROR " << std::endl;
            std::cout <<std::hex<< (int)dataBeacon.type_CID_DAT_SEND_t.STATUS     <<  "  dataBeacon.type_CID_DAT_SEND_t.STATUS  "   <<std::endl;
            std::cout << (int)dataBeacon.type_CID_DAT_SEND_t.BEACON_ID  <<  "  dataBeacon.type_CID_DAT_SEND_t.BEACON_ID  "  <<std::endl;
        break;
  
        case CID_NAV_ERROR : 
                std::cout <<  " MESSAGE  CID_NAV_ERROR (msg not decoded) " << std::endl;
        break;     

        case CID_SETTINGS_GET:

            std::cout <<  " MESSAGE  CID_SETTINGS_GET " << std::endl;
            std::cout << (int) dataBeacon.Becon_settings.STATUS_FLAGS            <<  "         dataBeacon.Becon_settings.STATUS_FLAGS            "  <<std::endl; 
            std::cout << (int) dataBeacon.Becon_settings.STATUS_OUTPUT           <<  "         dataBeacon.Becon_settings.STATUS_OUTPUT           "  <<std::endl;    
            std::cout << (int)dataBeacon.Becon_settings.UART_MAIN_BAUD          <<  "         dataBeacon.Becon_settings.UART_MAIN_BAUD          "  <<std::endl;    
            std::cout << (int)dataBeacon.Becon_settings.UART_AUX_BAUD           <<  "         dataBeacon.Becon_settings.UART_AUX_BAUD           "  <<std::endl;    
            std::cout << (int) dataBeacon.Becon_settings.NET_TCP_PORT            <<  "        dataBeacon.Becon_settings.NET_TCP_PORT        "  <<std::endl; 
            std::cout <<  (int)dataBeacon.Becon_settings.ENV_FLAGS               <<  "         dataBeacon.Becon_settings.ENV_FLAGS               "  <<std::endl;   
            std::cout <<  (long int) dataBeacon.Becon_settings.ENV_PRESSURE_OFS        <<  "         dataBeacon.Becon_settings.ENV_PRESSURE_OFS        "  <<std::endl;   
            std::cout <<  (int) dataBeacon.Becon_settings.ENV_SALINITY            <<  "         dataBeacon.Becon_settings.ENV_SALINITY            "  <<std::endl;    
            std::cout <<  dataBeacon.Becon_settings.ENV_VOS                 <<  "         dataBeacon.Becon_settings.ENV_VOS                 "  <<std::endl;   
            std::cout <<  (int )dataBeacon.Becon_settings.AHRS_FLAGS              <<  "         dataBeacon.Becon_settings.AHRS_FLAGS              "  <<std::endl;    
            std::cout <<  dataBeacon.Becon_settings.AHRS_CAL.ACC_MIN_X      <<  "         dataBeacon.Becon_settings.AHRS_CAL.ACC_MIN_X      "  <<std::endl; 
            std::cout <<  dataBeacon.Becon_settings.AHRS_CAL.ACC_MIN_Y      <<  "         dataBeacon.Becon_settings.AHRS_CAL.ACC_MIN_Y      "  <<std::endl; 
            std::cout <<  dataBeacon.Becon_settings.AHRS_CAL.ACC_MIN_Z      <<  "         dataBeacon.Becon_settings.AHRS_CAL.ACC_MIN_Z      "  <<std::endl; 
            std::cout <<  dataBeacon.Becon_settings.AHRS_CAL.ACC_MAX_X      <<  "         dataBeacon.Becon_settings.AHRS_CAL.ACC_MAX_X      "  <<std::endl; 
            std::cout <<  dataBeacon.Becon_settings.AHRS_CAL.ACC_MAX_Y      <<  "         dataBeacon.Becon_settings.AHRS_CAL.ACC_MAX_Y      "  <<std::endl; 
            std::cout <<  dataBeacon.Becon_settings.AHRS_CAL.ACC_MAX_Z      <<  "         dataBeacon.Becon_settings.AHRS_CAL.ACC_MAX_Z      "  <<std::endl; 
            std::cout <<  (int)dataBeacon.Becon_settings.AHRS_CAL.MAG_VALID      <<  "         dataBeacon.Becon_settings.AHRS_CAL.MAG_VALID      "  <<std::endl; 
            std::cout <<  dataBeacon.Becon_settings.AHRS_CAL.MAG_HARD_X     <<  "         dataBeacon.Becon_settings.AHRS_CAL.MAG_HARD_X     "  <<std::endl; 
            std::cout <<  dataBeacon.Becon_settings.AHRS_CAL.MAG_HARD_Y     <<  "         dataBeacon.Becon_settings.AHRS_CAL.MAG_HARD_Y     "  <<std::endl; 
            std::cout <<  dataBeacon.Becon_settings.AHRS_CAL.MAG_HARD_Z     <<  "         dataBeacon.Becon_settings.AHRS_CAL.MAG_HARD_Z     "  <<std::endl; 
            std::cout <<  dataBeacon.Becon_settings.AHRS_CAL.MAG_SOFT_X     <<  "         dataBeacon.Becon_settings.AHRS_CAL.MAG_SOFT_X     "  <<std::endl; 
            std::cout <<  dataBeacon.Becon_settings.AHRS_CAL.MAG_SOFT_Y     <<  "         dataBeacon.Becon_settings.AHRS_CAL.MAG_SOFT_Y     "  <<std::endl; 
            std::cout <<  dataBeacon.Becon_settings.AHRS_CAL.MAG_SOFT_Z     <<  "         dataBeacon.Becon_settings.AHRS_CAL.MAG_SOFT_Z     "  <<std::endl; 
            std::cout <<  dataBeacon.Becon_settings.AHRS_CAL.MAG_FIELD      <<  "         dataBeacon.Becon_settings.AHRS_CAL.MAG_FIELD      "  <<std::endl; 
            std::cout <<  dataBeacon.Becon_settings.AHRS_CAL.MAG_ERROR      <<  "         dataBeacon.Becon_settings.AHRS_CAL.MAG_ERROR      "  <<std::endl; 
            std::cout <<  dataBeacon.Becon_settings.AHRS_CAL.GYRO_OFFSET_X  <<  "         dataBeacon.Becon_settings.AHRS_CAL.GYRO_OFFSET_X  "  <<std::endl; 
            std::cout <<  dataBeacon.Becon_settings.AHRS_CAL.GYRO_OFFSET_Y  <<  "         dataBeacon.Becon_settings.AHRS_CAL.GYRO_OFFSET_Y  "  <<std::endl; 
            std::cout <<  dataBeacon.Becon_settings.AHRS_CAL.GYRO_OFFSET_Z  <<  "         dataBeacon.Becon_settings.AHRS_CAL.GYRO_OFFSET_Z  "  <<std::endl; 
            std::cout <<  dataBeacon.Becon_settings.AHRS_YAW_OFS            <<  "         dataBeacon.Becon_settings.AHRS_YAW_OFS            "  <<std::endl;   
            std::cout <<  dataBeacon.Becon_settings.AHRS_PITCH_OFS          <<  "         dataBeacon.Becon_settings.AHRS_PITCH_OFS          "  <<std::endl;   
            std::cout <<  dataBeacon.Becon_settings.AHRS_ROLL_OFS           <<  "         dataBeacon.Becon_settings.AHRS_ROLL_OFS           "  <<std::endl;   
            std::cout <<  (int)dataBeacon.Becon_settings.XCVR_FLAGS         <<  "         dataBeacon.Becon_settings.XCVR_FLAGS              "  <<std::endl;   
            std::cout <<  (int)dataBeacon.Becon_settings.XCVR_BEACON_ID     <<  "         dataBeacon.Becon_settings.XCVR_BEACON_ID          "  <<std::endl;   
            std::cout <<  dataBeacon.Becon_settings.XCVR_RANGE_TMO          <<  "         dataBeacon.Becon_settings.XCVR_RANGE_TMO          "  <<std::endl;   
            std::cout <<  dataBeacon.Becon_settings.XCVR_RESP_TIME          <<  "         dataBeacon.Becon_settings.XCVR_RESP_TIME          "  <<std::endl;   
            std::cout <<  dataBeacon.Becon_settings.XCVR_YAW                <<  "         dataBeacon.Becon_settings.XCVR_YAW                "  <<std::endl;   
            std::cout <<  dataBeacon.Becon_settings.XCVR_PITCH              <<  "         dataBeacon.Becon_settings.XCVR_PITCH              "  <<std::endl;   
            std::cout <<  dataBeacon.Becon_settings.XCVR_ROLL               <<  "         dataBeacon.Becon_settings.XCVR_ROLL               "  <<std::endl;     
        break;

        case  CID_NAV_QUERY_REQ:
            
            std::cout <<  " MESSAGE  CID_NAV_QUERY_REQ " << std::endl;

            std::cout << (int) dataBeacon.NAV_QUERY_REQ.ACO_FIX.DEST_ID        << "      dataBeacon.NAV_QUERY_REQ.ACO_FIX.DEST_ID       " << std::endl;
            std::cout << (int) dataBeacon.NAV_QUERY_REQ.ACO_FIX.SRC_ID         << "      dataBeacon.NAV_QUERY_REQ.ACO_FIX.SRC_ID        " << std::endl;
            std::cout << (int) dataBeacon.NAV_QUERY_REQ.ACO_FIX.FLAGS          << "      dataBeacon.NAV_QUERY_REQ.ACO_FIX.FLAGS         " << std::endl;
            std::cout << (int) dataBeacon.NAV_QUERY_REQ.ACO_FIX.AMSGTYPE_E     << "      dataBeacon.NAV_QUERY_REQ.ACO_FIX.AMSGTYPE_E    " << std::endl;
            std::cout << dataBeacon.NAV_QUERY_REQ.ACO_FIX.ATTITUDE_YAW    << "      dataBeacon.NAV_QUERY_REQ.ACO_FIX.ATTITUDE_YAW  " << std::endl;
            std::cout << dataBeacon.NAV_QUERY_REQ.ACO_FIX.ATTITUDE_PITCH  << "      dataBeacon.NAV_QUERY_REQ.ACO_FIX.ATTITUDE_PITCH" << std::endl;
            std::cout << dataBeacon.NAV_QUERY_REQ.ACO_FIX.ATTITUDE_ROLL   << "      dataBeacon.NAV_QUERY_REQ.ACO_FIX.ATTITUDE_ROLL " << std::endl;
            std::cout << dataBeacon.NAV_QUERY_REQ.ACO_FIX.DEPTH_LOCAL     << "      dataBeacon.NAV_QUERY_REQ.ACO_FIX.DEPTH_LOCAL   " << std::endl;
            std::cout << dataBeacon.NAV_QUERY_REQ.ACO_FIX.VOS             << "      dataBeacon.NAV_QUERY_REQ.ACO_FIX.VOS           " << std::endl;
            std::cout << dataBeacon.NAV_QUERY_REQ.ACO_FIX.RSSI            << "      dataBeacon.NAV_QUERY_REQ.ACO_FIX.RSSI          " << std::endl;
            if (dataBeacon.NAV_QUERY_REQ.ACO_FIX.OutputFlags_list[0]) //Range fields
            {
              
              std::cout << dataBeacon.NAV_QUERY_REQ.ACO_FIX.RANGE_COUNT << "    dataBeacon.NAV_QUERY_REQ.ACO_FIX.RANGE_COUNT "  << std::endl; 
              std::cout << dataBeacon.NAV_QUERY_REQ.ACO_FIX.RANGE_TIME  << "    dataBeacon.NAV_QUERY_REQ.ACO_FIX.RANGE_TIME  "  << std::endl;
              std::cout << dataBeacon.NAV_QUERY_REQ.ACO_FIX.RANGE_DIST  << "    dataBeacon.NAV_QUERY_REQ.ACO_FIX.RANGE_DIST  "  << std::endl; 
            }
            if (dataBeacon.NAV_QUERY_REQ.ACO_FIX.OutputFlags_list[1]) //USBL Fields
            {
              for ( i=0; i<dataBeacon.NAV_QUERY_REQ.ACO_FIX.USBL_CHANNELS ;i++)
              {
              std::cout << dataBeacon.NAV_QUERY_REQ.ACO_FIX.USBL_RSSI[i]  <<"    dataBeacon.NAV_QUERY_REQ.ACO_FIX.USBL_RSSI[i] "  << std::endl; 
              }
              std::cout << dataBeacon.NAV_QUERY_REQ.ACO_FIX.USBL_AZIMUTH   << "     dataBeacon.NAV_QUERY_REQ.ACO_FIX.USBL_AZIMUTH   " << std::endl; 
              std::cout << dataBeacon.NAV_QUERY_REQ.ACO_FIX.USBL_ELEVATION << "     dataBeacon.NAV_QUERY_REQ.ACO_FIX.USBL_ELEVATION " << std::endl; 
              std::cout << dataBeacon.NAV_QUERY_REQ.ACO_FIX.USBL_FIT_ERROR << "     dataBeacon.NAV_QUERY_REQ.ACO_FIX.USBL_FIT_ERROR " << std::endl; 
            }
            if (dataBeacon.NAV_QUERY_REQ.ACO_FIX.OutputFlags_list[2]) //Position Fields
            {
              std::cout << dataBeacon.NAV_QUERY_REQ.ACO_FIX.POSITION_EASTING  << "      dataBeacon.NAV_QUERY_REQ.ACO_FIX.POSITION_EASTING "  << std::endl; 
              std::cout << dataBeacon.NAV_QUERY_REQ.ACO_FIX.POSITION_NORTHING << "      dataBeacon.NAV_QUERY_REQ.ACO_FIX.POSITION_NORTHING"  << std::endl; 
              std::cout << dataBeacon.NAV_QUERY_REQ.ACO_FIX.POSITION_DEPTH    << "      dataBeacon.NAV_QUERY_REQ.ACO_FIX.POSITION_DEPTH   "  << std::endl; 
             }
            std::cout << (int) dataBeacon.NAV_QUERY_REQ.NAV_QUERY_T  <<"       dataBeacon.NAV_QUERY_REQ.NAV_QUERY_T "  <<std::endl; 
        break;
        
        case CID_XCVR_FIX :


            std::cout <<  " MESSAGE  CID_XCVR_FIX " << std::endl;
            std::cout << (int) dataBeacon.XCVR_FIX.ACO_FIX.DEST_ID        << "      dataBeacon.XCVR_FIX.ACO_FIX.DEST_ID       " << std::endl;
            std::cout << (int) dataBeacon.XCVR_FIX.ACO_FIX.SRC_ID         << "      dataBeacon.XCVR_FIX.ACO_FIX.SRC_ID        " << std::endl;
            std::cout << (int) dataBeacon.XCVR_FIX.ACO_FIX.FLAGS          << "      dataBeacon.XCVR_FIX.ACO_FIX.FLAGS         " << std::endl;
            std::cout << (int) dataBeacon.XCVR_FIX.ACO_FIX.AMSGTYPE_E     << "      dataBeacon.XCVR_FIX.ACO_FIX.AMSGTYPE_E    " << std::endl;
            std::cout << dataBeacon.XCVR_FIX.ACO_FIX.ATTITUDE_YAW         << "      dataBeacon.XCVR_FIX.ACO_FIX.ATTITUDE_YAW  " << std::endl;
            std::cout << dataBeacon.XCVR_FIX.ACO_FIX.ATTITUDE_PITCH       << "      dataBeacon.XCVR_FIX.ACO_FIX.ATTITUDE_PITCH" << std::endl;
            std::cout << dataBeacon.XCVR_FIX.ACO_FIX.ATTITUDE_ROLL        << "      dataBeacon.XCVR_FIX.ACO_FIX.ATTITUDE_ROLL " << std::endl;
            std::cout << dataBeacon.XCVR_FIX.ACO_FIX.DEPTH_LOCAL          << "      dataBeacon.XCVR_FIX.ACO_FIX.DEPTH_LOCAL   " << std::endl;
            std::cout << dataBeacon.XCVR_FIX.ACO_FIX.VOS                  << "      dataBeacon.XCVR_FIX.ACO_FIX.VOS           " << std::endl;
            std::cout << dataBeacon.XCVR_FIX.ACO_FIX.RSSI                 << "      dataBeacon.XCVR_FIX.ACO_FIX.RSSI          " << std::endl;
            if (dataBeacon.XCVR_FIX.ACO_FIX.OutputFlags_list[0]) //Range fields
            {
              
              std::cout << dataBeacon.XCVR_FIX.ACO_FIX.RANGE_COUNT << "    dataBeacon.XCVR_FIX.ACO_FIX.RANGE_COUNT "  << std::endl; 
              std::cout << dataBeacon.XCVR_FIX.ACO_FIX.RANGE_TIME  << "    dataBeacon.XCVR_FIX.ACO_FIX.RANGE_TIME  "  << std::endl;
              std::cout << dataBeacon.XCVR_FIX.ACO_FIX.RANGE_DIST  << "    dataBeacon.XCVR_FIX.ACO_FIX.RANGE_DIST  "  << std::endl; 
            }
            if (dataBeacon.XCVR_FIX.ACO_FIX.OutputFlags_list[1]) //USBL Fields
            {
              for ( i=0; i<dataBeacon.XCVR_FIX.ACO_FIX.USBL_CHANNELS ;i++)
              {
              std::cout << dataBeacon.XCVR_FIX.ACO_FIX.USBL_RSSI[i]  <<"    dataBeacon.XCVR_FIX.ACO_FIX.USBL_RSSI[i] "  << std::endl; 
              }
              std::cout << dataBeacon.XCVR_FIX.ACO_FIX.USBL_AZIMUTH   << "     dataBeacon.XCVR_FIX.ACO_FIX.USBL_AZIMUTH   " << std::endl; 
              std::cout << dataBeacon.XCVR_FIX.ACO_FIX.USBL_ELEVATION << "     dataBeacon.XCVR_FIX.ACO_FIX.USBL_ELEVATION " << std::endl; 
              std::cout << dataBeacon.XCVR_FIX.ACO_FIX.USBL_FIT_ERROR << "     dataBeacon.XCVR_FIX.ACO_FIX.USBL_FIT_ERROR " << std::endl; 
            }
            if (dataBeacon.XCVR_FIX.ACO_FIX.OutputFlags_list[2]) //Position Fields
            {
              std::cout << dataBeacon.XCVR_FIX.ACO_FIX.POSITION_EASTING  << "      dataBeacon.XCVR_FIX.ACO_FIX.POSITION_EASTING "  << std::endl; 
              std::cout << dataBeacon.XCVR_FIX.ACO_FIX.POSITION_NORTHING << "      dataBeacon.XCVR_FIX.ACO_FIX.POSITION_NORTHING"  << std::endl; 
              std::cout << dataBeacon.XCVR_FIX.ACO_FIX.POSITION_DEPTH    << "      dataBeacon.XCVR_FIX.ACO_FIX.POSITION_DEPTH   "  << std::endl; 
             }
   
        break;


        case CID_SYS_REBOOT:
            std::cout <<  " MESSAGE  CID_SYS_REBOOT " << std::endl;
            
            std::cout << (int)  dataBeacon.SYS_REBOOT.STATUS << "         dataBeacon.SYS_REBOOT.STATUS" <<std::endl; 
        break;

        case CID_SETTINGS_SET:
            std::cout <<  " MESSAGE  CID_SETTINGS_SET " << std::endl;
            std::cout << (int) dataBeacon.SETTINGS_SET.STATUS <<"   dataBeacon.SETTINGS_SET.STATUS" <<std::endl;
        break;

        case  CID_SETTINGS_SAVE:
            {
              std::cout <<  " MESSAGE  CID_SETTINGS_SAVE " << std::endl;
              std::cout << (int) dataBeacon.SETTINGS_SAVE.STATUS <<"    dataBeacon.SETTINGS_SAVE.STATUS" <<std::endl;
            }
        break;

        case CID_NAV_QUERY_SEND:

            std::cout <<  " MESSAGE  NAV_QUERY_SEND " << std::endl;
            std::cout << (int) dataBeacon.NAV_QUERY_SEND.STATUS <<"    dataBeacon.SETTINGS_SAVE.STATUS" <<std::endl;

        break;

        case CID_NAV_QUERY_RESP:

            std::cout <<  " MESSAGE  CID_NAV_QUERY_RESP " << std::endl;
            std::cout << (int) dataBeacon.NAV_QUERY_RESP.ACO_FIX.DEST_ID        << "      dataBeacon.NAV_QUERY_RESP.ACO_FIX.DEST_ID       " << std::endl;
            std::cout << (int) dataBeacon.NAV_QUERY_RESP.ACO_FIX.SRC_ID         << "      dataBeacon.NAV_QUERY_RESP.ACO_FIX.SRC_ID        " << std::endl;
            std::cout << (int) dataBeacon.NAV_QUERY_RESP.ACO_FIX.FLAGS          << "      dataBeacon.NAV_QUERY_RESP.ACO_FIX.FLAGS         " << std::endl;
            std::cout << (int) dataBeacon.NAV_QUERY_RESP.ACO_FIX.AMSGTYPE_E     << "      dataBeacon.NAV_QUERY_RESP.ACO_FIX.AMSGTYPE_E    " << std::endl;
            std::cout << dataBeacon.NAV_QUERY_RESP.ACO_FIX.ATTITUDE_YAW         << "      dataBeacon.NAV_QUERY_RESP.ACO_FIX.ATTITUDE_YAW  " << std::endl;
            std::cout << dataBeacon.NAV_QUERY_RESP.ACO_FIX.ATTITUDE_PITCH       << "      dataBeacon.NAV_QUERY_RESP.ACO_FIX.ATTITUDE_PITCH" << std::endl;
            std::cout << dataBeacon.NAV_QUERY_RESP.ACO_FIX.ATTITUDE_ROLL        << "      dataBeacon.NAV_QUERY_RESP.ACO_FIX.ATTITUDE_ROLL " << std::endl;
            std::cout << dataBeacon.NAV_QUERY_RESP.ACO_FIX.DEPTH_LOCAL          << "      dataBeacon.NAV_QUERY_RESP.ACO_FIX.DEPTH_LOCAL   " << std::endl;
            std::cout << dataBeacon.NAV_QUERY_RESP.ACO_FIX.VOS                  << "      dataBeacon.NAV_QUERY_RESP.ACO_FIX.VOS           " << std::endl;
            std::cout << dataBeacon.NAV_QUERY_RESP.ACO_FIX.RSSI                 << "      dataBeacon.NAV_QUERY_RESP.ACO_FIX.RSSI          " << std::endl;
            if (dataBeacon.NAV_QUERY_RESP.ACO_FIX.OutputFlags_list[0]) //Range fields
            {
              
              std::cout << dataBeacon.NAV_QUERY_RESP.ACO_FIX.RANGE_COUNT << "    dataBeacon.NAV_QUERY_RESP.ACO_FIX.RANGE_COUNT "  << std::endl; 
              std::cout << dataBeacon.NAV_QUERY_RESP.ACO_FIX.RANGE_TIME  << "    dataBeacon.NAV_QUERY_RESP.ACO_FIX.RANGE_TIME  "  << std::endl;
              std::cout << dataBeacon.NAV_QUERY_RESP.ACO_FIX.RANGE_DIST  << "    dataBeacon.NAV_QUERY_RESP.ACO_FIX.RANGE_DIST  "  << std::endl; 
            }
            if (dataBeacon.NAV_QUERY_RESP.ACO_FIX.OutputFlags_list[1]) //USBL Fields
            {
              for ( i=0; i<dataBeacon.NAV_QUERY_RESP.ACO_FIX.USBL_CHANNELS ;i++)
              {
              std::cout << dataBeacon.NAV_QUERY_RESP.ACO_FIX.USBL_RSSI[i]  <<"    dataBeacon.NAV_QUERY_RESP.ACO_FIX.USBL_RSSI[i] "  << std::endl; 
              }
              std::cout << dataBeacon.NAV_QUERY_RESP.ACO_FIX.USBL_AZIMUTH   << "     dataBeacon.NAV_QUERY_RESP.ACO_FIX.USBL_AZIMUTH   " << std::endl; 
              std::cout << dataBeacon.NAV_QUERY_RESP.ACO_FIX.USBL_ELEVATION << "     dataBeacon.NAV_QUERY_RESP.ACO_FIX.USBL_ELEVATION " << std::endl; 
              std::cout << dataBeacon.NAV_QUERY_RESP.ACO_FIX.USBL_FIT_ERROR << "     dataBeacon.NAV_QUERY_RESP.ACO_FIX.USBL_FIT_ERROR " << std::endl; 
            }
            if (dataBeacon.NAV_QUERY_RESP.ACO_FIX.OutputFlags_list[2]) //Position Fields
            {
              std::cout << dataBeacon.NAV_QUERY_RESP.ACO_FIX.POSITION_EASTING  << "      dataBeacon.NAV_QUERY_RESP.ACO_FIX.POSITION_EASTING "  << std::endl; 
              std::cout << dataBeacon.NAV_QUERY_RESP.ACO_FIX.POSITION_NORTHING << "      dataBeacon.NAV_QUERY_RESP.ACO_FIX.POSITION_NORTHING"  << std::endl; 
              std::cout << dataBeacon.NAV_QUERY_RESP.ACO_FIX.POSITION_DEPTH    << "      dataBeacon.NAV_QUERY_RESP.ACO_FIX.POSITION_DEPTH   "  << std::endl; 
             }

            std::cout << (int) dataBeacon.NAV_QUERY_RESP.QUERY_FLAGS    << "      dataBeacon.NAV_QUERY_RESP.QUERY_FLAGS   "  << std::endl; 

            if (dataBeacon.NAV_QUERY_RESP.QUERY_FLAGS_list[0]) 
             {
                  std::cout << dataBeacon.NAV_QUERY_RESP.REMOTE_DEPTH    << "   dataBeacon.NAV_QUERY_RESP.REMOTE_DEPTH  "  << std::endl; 
             }
            if (dataBeacon.NAV_QUERY_RESP.QUERY_FLAGS_list[1])
             {
                  std::cout << dataBeacon.NAV_QUERY_RESP.REMOTE_SUPPLY << "      dataBeacon.NAV_QUERY_RESP.REMOTE_SUPPLY   "  << std::endl;    
             }
            if (dataBeacon.NAV_QUERY_RESP.QUERY_FLAGS_list[2])  
             {
                  std::cout << dataBeacon.NAV_QUERY_RESP.REMOTE_TEMP   << "     dataBeacon.NAV_QUERY_RESP.REMOTE_TEMP      "  << std::endl;        
             }
            if (dataBeacon.NAV_QUERY_RESP.QUERY_FLAGS_list[3]) 
             { 
                 std::cout <<   dataBeacon.NAV_QUERY_RESP.REMOTE_YAW       << "    dataBeacon.NAV_QUERY_RESP.REMOTE_YAW   "  << std::endl;    
                 std::cout <<   dataBeacon.NAV_QUERY_RESP.REMOTE_PITCH     << "    dataBeacon.NAV_QUERY_RESP.REMOTE_PITCH "  << std::endl;  
                 std::cout <<   dataBeacon.NAV_QUERY_RESP.REMOTE_ROLL      << "    dataBeacon.NAV_QUERY_RESP.REMOTE_ROLL  "  << std::endl;   
             }
        break;
        

        case CID_NAV_BEACON_POS_UPDATE  :
            std::cout <<  " CID_NAV_BEACON_POS_UPDATE " << std::endl;
            std::cout <<   (int )dataBeacon.NAV_BEACON_POS_UPDATE.ACO_FIX.DEST_ID        << "      dataBeacon.NAV_BEACON_POS_UPDATE.ACO_FIX.DEST_ID        " << std::endl; 
            std::cout <<   (int )dataBeacon.NAV_BEACON_POS_UPDATE.ACO_FIX.SRC_ID         << "      dataBeacon.NAV_BEACON_POS_UPDATE.ACO_FIX.SRC_ID         " << std::endl; 
            std::cout <<   dataBeacon.NAV_BEACON_POS_UPDATE.ACO_FIX.FLAGS          << "      dataBeacon.NAV_BEACON_POS_UPDATE.ACO_FIX.FLAGS          " << std::endl;  
            std::cout <<   dataBeacon.NAV_BEACON_POS_UPDATE.ACO_FIX.AMSGTYPE_E     << "      dataBeacon.NAV_BEACON_POS_UPDATE.ACO_FIX.AMSGTYPE_E     " << std::endl;  
            std::cout <<   dataBeacon.NAV_BEACON_POS_UPDATE.ACO_FIX.ATTITUDE_YAW   << "      dataBeacon.NAV_BEACON_POS_UPDATE.ACO_FIX.ATTITUDE_YAW   " << std::endl; 
            std::cout <<   dataBeacon.NAV_BEACON_POS_UPDATE.ACO_FIX.ATTITUDE_PITCH << "      dataBeacon.NAV_BEACON_POS_UPDATE.ACO_FIX.ATTITUDE_PITCH " << std::endl; 
            std::cout <<   dataBeacon.NAV_BEACON_POS_UPDATE.ACO_FIX.ATTITUDE_ROLL  << "      dataBeacon.NAV_BEACON_POS_UPDATE.ACO_FIX.ATTITUDE_ROLL  " << std::endl; 
            std::cout <<   dataBeacon.NAV_BEACON_POS_UPDATE.ACO_FIX.DEPTH_LOCAL    << "      dataBeacon.NAV_BEACON_POS_UPDATE.ACO_FIX.DEPTH_LOCAL    " << std::endl;  
            std::cout <<   dataBeacon.NAV_BEACON_POS_UPDATE.ACO_FIX.VOS            << "      dataBeacon.NAV_BEACON_POS_UPDATE.ACO_FIX.VOS            " << std::endl;  
            std::cout <<   dataBeacon.NAV_BEACON_POS_UPDATE.ACO_FIX.RSSI           << "      dataBeacon.NAV_BEACON_POS_UPDATE.ACO_FIX.RSSI           " << std::endl; 
            if (dataBeacon.NAV_BEACON_POS_UPDATE.ACO_FIX.OutputFlags_list[0]) //Range fields
            {
              
              std::cout <<   dataBeacon.NAV_BEACON_POS_UPDATE.ACO_FIX.RANGE_COUNT << "           dataBeacon.NAV_BEACON_POS_UPDATE.ACO_FIX.RANGE_COUNT   " << std::endl;
              std::cout <<   dataBeacon.NAV_BEACON_POS_UPDATE.ACO_FIX.RANGE_TIME  << "           dataBeacon.NAV_BEACON_POS_UPDATE.ACO_FIX.RANGE_TIME    " << std::endl;
              std::cout <<   dataBeacon.NAV_BEACON_POS_UPDATE.ACO_FIX.RANGE_DIST  << "           dataBeacon.NAV_BEACON_POS_UPDATE.ACO_FIX.RANGE_DIST    " << std::endl;
            }
            if (dataBeacon.NAV_BEACON_POS_UPDATE.ACO_FIX.OutputFlags_list[1]) //USBL Fields
            {
               std::cout <<   dataBeacon.NAV_BEACON_POS_UPDATE.ACO_FIX.USBL_CHANNELS   << "       dataBeacon.NAV_BEACON_POS_UPDATE.ACO_FIX.USBL_CHANNELS        " << std::endl;
              for (i=0; i<dataBeacon.NAV_BEACON_POS_UPDATE.ACO_FIX.USBL_CHANNELS ;i++)
              {
               std::cout <<   dataBeacon.NAV_BEACON_POS_UPDATE.ACO_FIX.USBL_RSSI[i]   << "     dataBeacon.NAV_BEACON_POS_UPDATE.ACO_FIX.USBL_RSSI[i]         " << std::endl;
              }
              std::cout <<   dataBeacon.NAV_BEACON_POS_UPDATE.ACO_FIX.USBL_AZIMUTH    << "         dataBeacon.NAV_BEACON_POS_UPDATE.ACO_FIX.USBL_AZIMUTH       " << std::endl;
              std::cout <<   dataBeacon.NAV_BEACON_POS_UPDATE.ACO_FIX.USBL_ELEVATION  << "         dataBeacon.NAV_BEACON_POS_UPDATE.ACO_FIX.USBL_ELEVATION     " << std::endl;
              std::cout <<   dataBeacon.NAV_BEACON_POS_UPDATE.ACO_FIX.USBL_FIT_ERROR  << "         dataBeacon.NAV_BEACON_POS_UPDATE.ACO_FIX.USBL_FIT_ERROR     " << std::endl;
            }
            if (dataBeacon.NAV_BEACON_POS_UPDATE.ACO_FIX.OutputFlags_list[2]) //Position Fields
            {
              std::cout <<   dataBeacon.NAV_BEACON_POS_UPDATE.ACO_FIX.POSITION_EASTING  << "        dataBeacon.NAV_BEACON_POS_UPDATE.ACO_FIX.POSITION_EASTING       " << std::endl;
              std::cout <<   dataBeacon.NAV_BEACON_POS_UPDATE.ACO_FIX.POSITION_NORTHING << "        dataBeacon.NAV_BEACON_POS_UPDATE.ACO_FIX.POSITION_NORTHING      " << std::endl;
              std::cout <<   dataBeacon.NAV_BEACON_POS_UPDATE.ACO_FIX.POSITION_DEPTH    << "        dataBeacon.NAV_BEACON_POS_UPDATE.ACO_FIX.POSITION_DEPTH         " << std::endl;
            }
              std::cout <<   (int )dataBeacon.NAV_BEACON_POS_UPDATE.BEACON_ID          << "       dataBeacon.NAV_BEACON_POS_UPDATE.BEACON_ID               " << std::endl;
              std::cout <<   dataBeacon.NAV_BEACON_POS_UPDATE.POSITION_EASTING   << "       dataBeacon.NAV_BEACON_POS_UPDATE.POSITION_EASTING        " << std::endl;
              std::cout <<   dataBeacon.NAV_BEACON_POS_UPDATE.POSITION_NORTHING  << "       dataBeacon.NAV_BEACON_POS_UPDATE.POSITION_NORTHING       " << std::endl;
              std::cout <<   dataBeacon.NAV_BEACON_POS_UPDATE.POSITION_DEPTH     << "       dataBeacon.NAV_BEACON_POS_UPDATE.POSITION_DEPTH          " << std::endl;
        break;   

        case  CID_NAV_BEACON_POS_SEND:
            std::cout <<  " CID_NAV_BEACON_POS_SEND " << std::endl;
            std::cout <<  (int )dataBeacon.NAV_BEACON_POS_SEND.STATUS <<  "        dataBeacon.NAV_BEACON_POS_SEND.STATUS" << std::endl;
        break;         

        case CID_NAV_REF_POS_SEND:
            std::cout <<  " CID_NAV_REF_POS_SEND " << std::endl;
            std::cout << (int ) dataBeacon.NAV_REF_POS_SEND.STATUS   <<  "         dataBeacon.NAV_REF_POS_SEND.STATUS,IND" << std::endl;
        break;    


        case  CID_NAV_REF_POS_UPDATE:

            std::cout <<  " CID_NAV_REF_POS_UPDATE " << std::endl;
            std::cout <<  dataBeacon.NAV_REF_POS_UPDATE.ACO_FIX.DEST_ID          << "dataBeacon.NAV_REF_POS_UPDATE.ACO_FIX.DEST_ID       " << std::endl;
            std::cout <<  dataBeacon.NAV_REF_POS_UPDATE.ACO_FIX.SRC_ID           << "dataBeacon.NAV_REF_POS_UPDATE.ACO_FIX.SRC_ID        " << std::endl;
            std::cout <<  dataBeacon.NAV_REF_POS_UPDATE.ACO_FIX.FLAGS            << "dataBeacon.NAV_REF_POS_UPDATE.ACO_FIX.FLAGS         " << std::endl;
            std::cout <<  dataBeacon.NAV_REF_POS_UPDATE.ACO_FIX.AMSGTYPE_E       << "dataBeacon.NAV_REF_POS_UPDATE.ACO_FIX.AMSGTYPE_E    " << std::endl;
            std::cout <<  dataBeacon.NAV_REF_POS_UPDATE.ACO_FIX.ATTITUDE_YAW     << "dataBeacon.NAV_REF_POS_UPDATE.ACO_FIX.ATTITUDE_YAW  " << std::endl;
            std::cout <<  dataBeacon.NAV_REF_POS_UPDATE.ACO_FIX.ATTITUDE_PITCH   << "dataBeacon.NAV_REF_POS_UPDATE.ACO_FIX.ATTITUDE_PITCH" << std::endl;
            std::cout <<  dataBeacon.NAV_REF_POS_UPDATE.ACO_FIX.ATTITUDE_ROLL    << "dataBeacon.NAV_REF_POS_UPDATE.ACO_FIX.ATTITUDE_ROLL " << std::endl;
            std::cout <<  dataBeacon.NAV_REF_POS_UPDATE.ACO_FIX.DEPTH_LOCAL      << "dataBeacon.NAV_REF_POS_UPDATE.ACO_FIX.DEPTH_LOCAL   " << std::endl;
            std::cout <<  dataBeacon.NAV_BEACON_POS_UPDATE.ACO_FIX.VOS           << "dataBeacon.NAV_BEACON_POS_UPDATE.ACO_FIX.VOS        " << std::endl;
            std::cout <<  dataBeacon.NAV_REF_POS_UPDATE.ACO_FIX.RSSI             << "dataBeacon.NAV_REF_POS_UPDATE.ACO_FIX.RSSI          " << std::endl;
 
            if (dataBeacon.NAV_REF_POS_UPDATE.ACO_FIX.OutputFlags_list[0]) //Range fields
            {
              
              std::cout <<  dataBeacon.NAV_REF_POS_UPDATE.ACO_FIX.RANGE_COUNT   <<   "dataBeacon.NAV_REF_POS_UPDATE.ACO_FIX.RANGE_COUNT"  << std::endl;
              std::cout <<  dataBeacon.NAV_REF_POS_UPDATE.ACO_FIX.RANGE_TIME    <<   "dataBeacon.NAV_REF_POS_UPDATE.ACO_FIX.RANGE_TIME "  << std::endl;
              std::cout <<  dataBeacon.NAV_REF_POS_UPDATE.ACO_FIX.RANGE_DIST    <<   "dataBeacon.NAV_REF_POS_UPDATE.ACO_FIX.RANGE_DIST "  << std::endl;
              
            }
            if (dataBeacon.NAV_REF_POS_UPDATE.ACO_FIX.OutputFlags_list[1]) //USBL Fields
            {
             std::cout <<  dataBeacon.NAV_REF_POS_UPDATE.ACO_FIX.USBL_CHANNELS   <<  "dataBeacon.NAV_REF_POS_UPDATE.ACO_FIX.USBL_CHANNELS"   << std::endl;
              for (i=0; i<dataBeacon.NAV_REF_POS_UPDATE.ACO_FIX.USBL_CHANNELS ;i++)
              {
              std::cout <<  dataBeacon.NAV_REF_POS_UPDATE.ACO_FIX.USBL_RSSI[i]  << " dataBeacon.NAV_REF_POS_UPDATE.ACO_FIX.USBL_RSSI[i]  "  <<  std::endl;
              }
              std::cout <<   dataBeacon.NAV_REF_POS_UPDATE.ACO_FIX.USBL_AZIMUTH     << "dataBeacon.NAV_REF_POS_UPDATE.ACO_FIX.USBL_AZIMUTH   " <<    std::endl;
              std::cout <<   dataBeacon.NAV_REF_POS_UPDATE.ACO_FIX.USBL_ELEVATION   << "dataBeacon.NAV_REF_POS_UPDATE.ACO_FIX.USBL_ELEVATION " <<    std::endl;
              std::cout <<   dataBeacon.NAV_REF_POS_UPDATE.ACO_FIX.USBL_FIT_ERROR   << "dataBeacon.NAV_REF_POS_UPDATE.ACO_FIX.USBL_FIT_ERROR " <<    std::endl;
              
            }
            if (dataBeacon.NAV_REF_POS_UPDATE.ACO_FIX.OutputFlags_list[2]) //Position Fields
            {
              std::cout <<  dataBeacon.NAV_REF_POS_UPDATE.ACO_FIX.POSITION_EASTING  << "dataBeacon.NAV_REF_POS_UPDATE.ACO_FIX.POSITION_EASTING  " <<   std::endl;  
              std::cout <<  dataBeacon.NAV_REF_POS_UPDATE.ACO_FIX.POSITION_NORTHING << "dataBeacon.NAV_REF_POS_UPDATE.ACO_FIX.POSITION_NORTHING " <<   std::endl;
              std::cout <<  dataBeacon.NAV_REF_POS_UPDATE.ACO_FIX.POSITION_DEPTH    << "dataBeacon.NAV_REF_POS_UPDATE.ACO_FIX.POSITION_DEPTH    " <<   std::endl;
              
            }
                std::cout <<  dataBeacon.NAV_REF_POS_UPDATE.BEACON_ID            << "dataBeacon.NAV_REF_POS_UPDATE.BEACON_ID          "   <<    std::endl; 
                std::cout <<  dataBeacon.NAV_REF_POS_UPDATE.POSITION_LATITUDE    << "dataBeacon.NAV_REF_POS_UPDATE.POSITION_LATITUDE  "   <<    std::endl; 
                std::cout <<  dataBeacon.NAV_REF_POS_UPDATE.POSITION_LONGITUDE   << "dataBeacon.NAV_REF_POS_UPDATE.POSITION_LONGITUDE "   <<    std::endl; 
    
        break;
       default:
             std::cout <<  "  MESSAGE  unknown " <<std::hex << (int)typemessege <<std::endl;
        break;

      }

   }
  

   void 
   printSeatracFunctionIfNew(unsigned typemessege,  Data_Seatrac& dataBeacon)
   {
        if(dataBeacon.newDataAvailable(typemessege)==0) return;
        printSeatracFunction( typemessege, dataBeacon);
   }
  

   }
}