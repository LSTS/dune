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
// Author: Joao_teixeira                                                    *
//***************************************************************************
// DUNE headers.
#include <DUNE/DUNE.hpp>

// Local headers.
//configurar o numero do beacon é com o varia ve XCVR_BEACON_ID  da mensagem  CID_SETTINGS_SET  //todo

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
	enum cid {
	
		CID_SYS_ALIVE    			 =  0x01, //Command sent to receive a simple alivemessage from the beacon. 
		CID_SYS_INFO     			 =  0x02, //Command sent to receive hardware &firmware identification information.
		CID_SYS_REBOOT 				 =  0x03, //Command sent to soft reboot the beacon. 
		CID_SYS_ENGINEERING 		 =  0x04, //Command sent to perform engineeringa ctions.Firmware Programming Messages
		CID_PROG_INIT 				 =  0x0D, //Command sent to initialise a firmware programming sequence. 
		CID_PROG_BLOCK 				 =  0x0E, //Command sent to transfer a firmware programming block. 
		CID_PROG_UPDATE 			 =  0x0F, //Command sent to update the firmware once program transfer has completed. Status Messages 
		CID_STATUS 					 =  0x10, //Command sent to request the current system status (AHRS, Depth, Temp, etc). 
		CID_STATUS_CFG_GET 			 =  0x11, //Command sent to retrieve the configuration of the status system (message content and auto-output interval). 
		CID_STATUS_CFG_SET 			 =  0x12, //Command sent to set the configuration of the status system (message content and auto- output interval). Page 35SeaTrac Serial Command Interface Reference Settings Messages 
		CID_SETTINGS_GET 			 =  0x15, //Command sent to retrieve the working settings in use on the beacon. 
		CID_SETTINGS_SET 			 =  0x16, //Command sent to set the working settings and apply them. They are NOT saved to permanent memory until CID_SETTINGS_SAVE is issued. The device will need to be rebooted after this to apply some of the changes. 
		CID_SETTINGS_LOAD 			 =  0x17, //Command sent to load the working settings from permanent storage and apply them. Not all settings can be loaded and applied as they only affect the device on start-up. 
		CID_SETTINGS_SAVE 			 =  0x18, //Command sent to save the working settings into permanent storage. 
		CID_SETTINGS_RESET 			 =  0x19, //Command sent to restore the working settings to defaults, store them into permanent memory and apply them. Calibration Messages 
		CID_CAL_ACTION 				 =  0x20, //Command sent to perform specific calibration actions. 
		CID_AHRS_CAL_GET 			 =  0x21, //Command sent to retrieve the current AHRS calibration. 
		CID_AHRS_CAL_SET 			 =  0x22, //Command sent to set the contents of the current AHRS calibration (and store to memory)/ Acoustic Transceiver Messages 
		CID_XCVR_ANALYSE 			 =  0x30, //Command sent to instruct the receiver to perform a noise analysis and report the results. 
		CID_XCVR_TX_MSG 			 =  0x31, //Message sent when the transceiver transmits a message. 
		CID_XCVR_RX_ERR 			 =  0x32, //Message sent when the transceiver receiver encounters an error. 
		CID_XCVR_RX_MSG 			 =  0x33, //Message sent when the transceiver receives a message (not requiring a response). 
		CID_XCVR_RX_REQ 			 =  0x34, //Message sent when the transceiver receives a request (requiring a response).Page 36SeaTrac Serial Command Interface Reference  
		CID_XCVR_RX_RESP 			 =  0x35, //Message sent when the transceiver receives a response (to a transmitted request). 
		CID_XCVR_RX_UNHANDLED 		 =  0x37, //Message sent when a message has been received but not handled by the protocol stack. 
		CID_XCVR_USBL 				 =  0x38, //Message sent when a USBL signal is decoded into an angular bearing.  
		CID_XCVR_FIX 				 =  0x39, //Message sent when the transceiver gets a position/range fix on a beacon from a request/response. 
		CID_XCVR_STATUS 			 =  0x3A, //Message sent to query the current transceiver state. PING Protocol Messages 
		CID_PING_SEND 				 =  0x40, //Command sent to transmit a PING message. 
		CID_PING_REQ 				 =  0x41, //Message sent when a PING request is received. 
		CID_PING_RESP 				 =  0x42, //Message sent when a PING response is received, or timeout occurs, with the echo response data. 
		CID_PING_ERROR 				 =  0x43, //Message sent when a PING response error/timeout occurs. ECHO Protocol Messages 
		CID_ECHO_SEND 				 =  0x48, //Command sent to transmit an ECHO message.
		CID_ECHO_REQ 				 =  0x49, //Message sent when an ECHO request is received. 
		CID_ECHO_RESP 				 =  0x4A, //Message sent when an ECHO response is received, or timeout occurs, with the echo response data. 
		CID_ECHO_ERROR 				 =  0x4B, //Message sent when an ECHO response error/timeout occurs. NAV Protocol Messages 
		CID_NAV_QUERY_SEND 			 =  0x50, //Message sent to query navigation information from a remote beacon.  
		CID_NAV_QUERY_REQ 			 =  0x51, //Message sent from a beacon that receives a NAV_QUERY. Page 37SeaTrac Serial Command Interface Reference  
		CID_NAV_QUERY_RESP 			 =  0x52, //Message generated when the beacon received a response to a NAV_QUERY. 
		CID_NAV_ERROR 				 =  0x53, //Message generated if there is a problem with a NAV_QUERY - i.e. timeout etc. 
		CID_NAV_REF_POS_SEND 		 =  0x54, //Message issued to broadcast a reference position (latitude and longitude) to all other beacons.
		CID_NAV_REF_POS_UPDATE 		 =  0x55, //Message generated when a beacon receives a NAV_REF_POS message.
		CID_NAV_BEACON_POS_SEND 	 =  0x56, //Message issued to broadcast the relative position (NED) of a beacon to all other beacons
		CID_NAV_BEACON_POS_UPDATE 	 =  0x57, //Message generated when a beacon receives a NAV_BEACON_POS message. DAT Protocol Messages
		CID_DAT_SEND 				 =  0x60, //Message sent to transmit a datagram to another beacon 
		CID_DAT_RECEIVE 			 =  0x61, //Message generated when a beacon receives a datagram. 
		CID_DAT_ERROR 				 =  0x63, //Message generated when a beacon response error/timeout occurs for ACKs. 
		CID_DAT_QUEUE_SET 		 	 =  0x64, //Message sent to set the contents of the packet data queue.
		CID_DAT_QUEUE_CLR 		 	 =  0x65, //Message sent to clear the contents of the packet data queue.
		CID_DAT_QUEUE_STATUS 		 =  0x66, //Message sent to obtain the current status of the packet data queue. DEX Protocol Messages
		CID_DEX_CLOSE 				 =  0x70, //Command sent to close a socket used for data exchange between beacons, and free memory resources. 
		CID_DEX_DEBUG 				 =  0x71, //Command sent to get information about a specified socket, including buffer space used and free, and data pending transfer.  
		CID_DEX_ENQUEUE 			 =  0x72, //Command sent to add data onto a socket buffer pending transfer. 
		CID_DEX_OPEN 				 =  0x73, //Command sent to create a new socket for Page 38SeaTrac Serial Command Interface Reference data exchange between beacons. 
		CID_DEX_RESET 				 =  0x74, //Command sent to reset the buffers and state of a socket. 
		CID_DEX_SEND 				 =  0x75, //Command sent to initiate a transfer of data pending on the specified socket. 
		CID_DEX_SOCKETS 			 =  0x76, //Command sent to retrieve a list of open sockets on the beacon, and a summary of data pending transfer on each one. 
		CID_DEX_RECEIVE 			 =  0x77  //Message sent when the beacon has received data through a socket.
		
	};
	

	enum type_AMSGTYPE_E{
		
		MSG_OWAY    = 0x0 , // Indicates an acoustic message is sent One-Way, and does not require a response. One-Way messages may also be broadcast to all beacons if required.
		MSG_OWAYU   = 0x1 , // Indicates an acoustic message is sent One- Way, and does not require a response. One-Way messages may also be broadcast to all beacons if required
		MSG_REQ     = 0x2 , // Indicates an acoustic message is sent as a Request type. This requires the receiver to generate and return a Response (MSG_RESP) message. 
		MSG_RESP    = 0x3 , // Indicate an acoustic message is sent as a Response to a previous Request message (MSG_REQ).
		MSG_REQU    = 0x4 , // Indicates an acoustic message is sent as a Request type. This requires the receiver to generate and return a Response (MSG_RESP) message.
		MSG_RESPU   = 0x5 , // Indicate an acoustic message is sent as a Response to a previous Request message  (MSG_REQ).
		MSG_REQX    = 0x6 , // Indicates an acoustic message is sent as a Request type. This requires the receiver to generate and return a Response (MSG_RESP) message.
		MSG_RESPX   = 0x7 , // Indicate an acoustic message is sent as a Response to a previous Request message (MSG_REQ).
		MSG_UNKNOWN = 0xFF  // This value is NEVER used to specify a message type when sending Acoustic Messages. However, on occasions certain structures need to specify “No Message Type”
	};

	enum CST_E {
		//	General Status Codes
		CST_OK 						= 0x00 ,   //Returned if a command or operation is completed successful without error.
		CST_FAIL 					= 0x01 ,   //Returned if a command or operation cannot be completed.
		CST_EEPROM_ERROR			= 0x03 ,   //Returned if an error occurs while reading or writing EEPROM data.
		//	Command Processor Status Codes
		CST_CMD_PARAM_MISSING 		= 0x04 ,   //Returned if a command message is given that does not have enough defined fields for the specified CID code.
		CST_CMD_PARAM_INVALID 		= 0x05 ,   //Returned if a data field in a message does not contain a valid or expected value.
		//	Firmware Programming Status Codes
		CST_PROG_FLASH_ERROR 		= 0x0A ,   //Returned if an error occurs while writing data into the processors flash memory.
		CST_PROG_FIRMWARE_ERROR 	= 0x0B ,   //Returned if firmware cannot be programmed due to incorrect firmware credentials or signature.
		CST_PROG_SECTION_ERROR		= 0x0C ,   //Returned if the firmware cannot be programmed into the specified memory section.
		CST_PROG_LENGTH_ERROR 		= 0x0D ,   //Returned if the firmware length is too large to fit into the specified memory section, or not what the current operation is expecting. Page 40SeaTrac Serial Command Interface Reference
		CST_PROG_DATA_ERROR 		= 0x0E ,   //Returned if there is an error decoding data in a firmware block.
		CST_PROG_CHECKSUM_ERROR 	= 0x0F ,   //Returned if the specified checksum for the firmware does not match the checksum computed prior to performing the update.
		//	Acoustic Transceiver Status Codes
		CST_XCVR_BUSY 				= 0x30 ,   //Returned if the transceiver cannot perform a requested action as it is currently busy (i.e. transmitting a message).
		CST_XCVR_ID_REJECTED 		= 0x31 ,   //Returned if the received message did not match the specified transceiver ID (and wasn’t a Sent-To-All), and the message has been rejected.
		CST_XCVR_CSUM_ERROR 		= 0x32 ,   //Returned if received acoustic message’s checksum was invalid, and the message has been rejected.
		CST_XCVR_LENGTH_ERROR 		= 0x33 ,   //Returned if an error occurred with message framing, meaning the end of the message has not been received within the expected time.
		CST_XCVR_RESP_TIMEOUT 		= 0x34 ,   //Returned if the transceiver has sent a request message to a beacon, but no response has been returned within the allotted waiting period.
		CST_XCVR_RESP_ERROR 		= 0x35 ,   //Returned if the transceiver has send a request message to a beacon, but an error occurred while receiving the response.
		CST_XCVR_RESP_WRONG 		= 0x36 ,   //Returned if the transceiver has sent a request message to a beacon, but received an unexpected response from another beacon while waiting.
		CST_XCVR_PLOAD_ERROR 		= 0x37 ,   //Returned by protocol payload decoders, if the payload can’t be parsed correctly.
		CST_XCVR_STATE_STOPPED 		= 0x3A ,   //Indicates the transceiver is in a stopped state.
		CST_XCVR_STATE_IDLE 		= 0x3B ,   //Indicates the transceiver is in an idle state waiting for reception or transmission to start.
		CST_XCVR_STATE_TX 			= 0x3C ,   //Indicates the transceiver is in a transmitting states.
		CST_XCVR_STATE_REQ 			= 0x3D ,   //Indicates the transceiver is in a requesting state, having transmitted a message and is waiting for a response to be received. Page 41SeaTrac Serial Command Interface Reference
		CST_XCVR_STATE_RX 			= 0x3E ,   //Indicates the transceiver is in a receiving state.
		CST_XCVR_STATE_RESP 		= 0x3F ,   //Indicates the transceiver is in a responding state, where a message is being composed and the “response time” period is being observed.
		//	DEX Protocol Status Codes
		CST_DEX_SOCKET_ERROR 		= 0x70 ,   //Returned by the DEX protocol handler if an error occurred trying to open, close or access a specified socket ID.
		CST_DEX_RX_SYNC 			= 0x71 ,   //Returned by the DEX protocol handler when receiver synchronisation has occurred with the socket master and data transfer is ready to commence.
		CST_DEX_RX_DATA 			= 0x72 ,   //Returned by the DEX protocol handler when data has been received through a socket.
		CST_DEX_RX_SEQ_ERROR 		= 0x73 ,   //Returned by the DEX protocol handler when data transfer synchronisation has been lost with the socket master.
		CST_DEX_RX_MSG_ERROR 		= 0x74 ,   //Returned by the DEX protocol handler to indicate an unexpected acoustic message type with the DEX protocol has been received and cannot be processed.
		CST_DEX_REQ_ERROR 			= 0x75 ,   //Returned by the DEX protocol handler to indicate a error has occurred while responding to a request (i.e. lack of data).
		CST_DEX_RESP_TMO_ERROR 		= 0x76 ,   //Returned by the DEX protocol handler to indicate a timeout has occurred while waiting for a response back from a remote beacon with requested data.
		CST_DEX_RESP_MSG_ERROR 		= 0x77 ,   //Returned by the DEX protocol handler to indicate an error has occurred while receiving response back from a remote beacon.
		CST_DEX_RESP_REMOTE_ERROR 	= 0x78     //Returned by the DEX protocol handler to indicate the remote beacon has encountered an error and cannot return the requested
	};

	struct type_CID_STATUS {

		uint8_t OutputFlags; 
		uint8_t OutputFlags_list[6];
		uint64_t Timestamp ; 			 //The value of the beacon’s clock (set to zero whenthe beacon was powered up – not rebooted!).Values are encoded in milliseconds, so divide by1000 for seconds.
		//ENVIRONMENT
		uint16_t EnvironmentSupply ; 	 //The beacons supply voltage. Values are encoded in milli-volts, so divide by 1000 for a value in Volts.
		int16_t EnvironmentTemperature ; // The temperature of air/water in contact with the diaphragm of the pressure sensor. Values are encoded in deci-Celsius, so divide by 10 to obtain a value in Celsius.
		int32_t EnvironmentPressure ; 	 //The external pressure measured on the diaphragm of the pressure sensor. Values are encoded in milli-bars, so divide by 1000 to obtain a value in Bar. Please note, the specification of pressure reading is 0.5% of the sensors full-scale value, so for a 200 Bar sensor the to
		int32_t EnvironmentDepth ;		 //The computed depth based on the measured environmental pressure. Values are encoded in deci-metres, so divide by 10 for a value in metres.
		uint16_t EnvironmentVos ; 		 // The value of Velocity-of-Sound currently being used for computing ranges. This may be either the manually specified VOS from settings, or the auto-computed value based on pressure, temperature and salinity. Values are encoded in deci-metres-per-second, so divide by 10 to obtain a value in metres-per-
		//ATTITUDE
		int16_t AttitudeYaw ;			 // The current Yaw angle of the beacon, relative to magnetic north, measured by the beacons AHRS system. Values are encoded as deci-degrees, so divide the value by 10 to obtain a value in degrees.
		int16_t AttitudePitch ;			 // The current Pitch angle of the beacon, relative to magnetic north, measured by the beacons AHRS system. Values are encoded as deci-degrees, so divide the value by 10 to obtain a value in degrees.
		int16_t AttitudeRoll ;			 //	The current Roll angle of the beacon, relative to magnetic north, measured by the beacons AHRS system. Values are encoded as deci-degrees, so divide the value by 10 to obtain a value in degrees.
		//MAG_CAL
		uint8_t MAG_CAL_BUF ;			//	Value that indicates how full the data buffer is that holds magnetometer values describing the surrounding magnetic environment. Values are encoded as a percentage from 0 to 100 representing empty (where no magnetic calibration is possible) to full (where the best magnetic calibration can be computed).	
		bool    MAG_CAL_VALID;			//  The flag is True if a magnetic calibration has been computed and is currently in use, compensating magnetometer readings.	
		int32_t MAG_CAL_AGE ;			// he number of seconds that have elapsed since the magnetometer calibration was last computed. When dynamic calibration is enabled, and there is sufficient data in the magnetic calibration buffer, then calibrations should be computed every 30
		uint8_t MAG_CAL_FIT; 			// Value indicating how well the current magnetometer calibration can fit the measured data to an ideal “sphere” (or perfect calibration). Values are encoded as a percentage from 0 to 10 
		//ACC_CAL
		int16_t ACC_LIM_MIN_X ;			//	Value that holds the raw accelerometer sensor value that will be used to represent -1G on the X sensor axis.		
		int16_t ACC_LIM_MIN_Y ;			//	Value that holds the raw accelerometer sensor value that will be used to represent -1G on the Y sensor axis.	
		int16_t ACC_LIM_MIN_Z ;			//  Value that holds the raw accelerometer sensor value that will be used to represent -1G on the Z sensor axis.	
		int16_t ACC_LIM_MAX_X ;			//  Value that holds the raw accelerometer sensor value that will be used to represent +1G on the X sensor axis.
		int16_t ACC_LIM_MAX_Y ;			//	Value that holds the raw accelerometer sensor value that will be used to represent +1G on the Y sensor axis.
		int16_t ACC_LIM_MAX_Z ;			//	Value that holds the raw accelerometer sensor value that will be used to represent +1G on the Z sensor axis.
		//AHRS_RAW_DATA
		int16_t AHRS_RAW_ACC_X;			// The last raw accelerometer sensor value measured on the X-axis. This field is used during functional testing and can be used to assist with the accelerometer calibration procedure.
		int16_t AHRS_RAW_ACC_Y;			// The last raw accelerometer sensor value measured on the y-axis. This field is used during functional testing and can be used to assist with the accelerometer calibration procedure.
		int16_t AHRS_RAW_ACC_Z;			// The last raw accelerometer sensor value measured on the Z-axis. This field is used during functional testing and can be used to assist with the accelerometer calibration procedure.
		int16_t AHRS_RAW_MAG_X ;		// The last raw magnetometer sensor value measure on the X-axis. This field is used during functional testing and can be used to assist with the magnetometer calibration procedure (in conjunction with the accelerometer orientation value).
		int16_t AHRS_RAW_MAG_Y ;		// The last raw magnetometer sensor value measure on the y-axis. This field is used during functional testing and can be used to assist with the magnetometer calibration procedure (in conjunction with the accelerometer orientation value).
		int16_t AHRS_RAW_MAG_Z ;		// The last raw magnetometer sensor value measure on the Z-axis. This field is used during functional testing and can be used to assist with the magnetometer calibration procedure (in conjunction with the accelerometer orientation value).
		int16_t AHRS_RAW_GYRO_X ;		// The last raw rate of rotation measured around the X-axis of the gyroscope sensor. Values are encoded in degrees-per-second.
		int16_t AHRS_RAW_GYRO_Y ;		// The last raw rate of rotation measured around the Y-axis of the gyroscope sensor. Values are encoded in degrees-per-second.
		int16_t AHRS_RAW_GYRO_Z ;		// The last raw rate of rotation measured around the Z-axis of the gyroscope sensor. Values are encoded in degrees-per-second.
		//AHRS_COMP_DATA
		float AHRS_COMP_ACC_X   ;		//  The AHRS_RAW_ACC_X sensor reading after the calibration coefficients have been applied.
		float AHRS_COMP_ACC_Y   ;		//  The AHRS_RAW_ACC_Y sensor reading after the calibration coefficients have been applied. 
		float AHRS_COMP_ACC_Z   ;		//  The AHRS_RAW_ACC_Z sensor reading after the calibration coefficients have been applied.
		float AHRS_COMP_MAG_X   ;		//  The AHRS_COMP_MAG_X sensor reading after the calibration coefficients have been applied.  
		float AHRS_COMP_MAG_Y   ;		//  The AHRS_COMP_MAG_Y sensor reading after the calibration coefficients have been applied.
		float AHRS_COMP_MAG_Z   ;		//  The AHRS_COMP_MAG_Z sensor reading after the calibration coefficients have been applied.
		float AHRS_COMP_GYRO_X  ;		//  The AHRS_COMP_GYRO_X sensor reading after the calibration coefficients have been applied.
		float AHRS_COMP_GYRO_Y  ;		//  The AHRS_COMP_GYRO_Y sensor reading after the calibration coefficients have been applied.
		float AHRS_COMP_GYRO_Z  ;		//  The AHRS_COMP_GYRO_Z sensor reading after the calibration coefficients have been applied.

		void OutputFlags_comp()
		{
			OutputFlags_list[0]=  (0x01 & OutputFlags) ;	// When set, appends environmental sensor data fields (temperature, depth, VOS, supply voltage etc) to the end of the status output message
			OutputFlags_list[1]=  (0x02 & OutputFlags) ;	// When set, appends the AHRS attitude (yaw, pitch, roll) fields to the end of the status output message.
			OutputFlags_list[2]=  (0x04 & OutputFlags) ;	// When set, appends magnetometer calibration and buffer fields to the end of the status output message
			OutputFlags_list[3]=  (0x08 & OutputFlags) ;	// When set, appends accelerometer calibration and limits fields to the end of the status output message.
			OutputFlags_list[4]=  (0x10 & OutputFlags) ;	// When set, appends raw sensor data fields to the end of the status output message.
			OutputFlags_list[5]=  (0x20 & OutputFlags) ;	// When set, appends compensated sensor data fields to the end of the status output message
		}

	};



	struct type_ACOFIX_T{

		uint8_t DEST_ID ;  		// The ID code of the beacon that this data is sent to 1 to F  0 broadcast to all.
		uint8_t SRC_ID  ;		//The ID code of the beacon that sent the data.
		uint8_t FLAGS ;
		uint8_t AMSGTYPE_E;  	//The type of acoustic message received to generate  - defenition in enum type_AMSGTYPE_E
		int16_t ATTITUDE_YAW;	//The yaw angle (relative to magnetic north) of the local beacon when the fix was computed. Values are encoded as deci-Degrees, so divide by 10 for just degrees to a 0.1° resolution.
		int16_t ATTITUDE_PITCH;	// The pitch angle of the local beacon when the fix was computed. Values are encoded as deci-Degrees, so divide by 10 for just degrees to a 0.1° resolution.
		int16_t ATTITUDE_ROLL;  // The roll angle of the local beacon when the fix was computed. Values are encoded as deci-Degrees, so divide by 10 for just degrees to a 0.1° resolution.
		int16_t DEPTH_LOCAL;    // he reading from the local beacon depth sensor when the fix was calculated. Values are encoded in decimetres, so divide by 10 to obtain a value in metres to a 0.1m resolution.
		uint16_t VOS;           // The velocity of sound value used for the computation of the remote beacon’s range based on timing information. Values are encoded in decimetres-per-second, so divide by 10 for a value in metres-per-second.
		int16_t RSSI;  			// The Received Signal Strength Indicator value for the received message, encoded in centibels. To decode, divide this value by 10 for decibels to a 0.1 dB resolution.
		//Range fields
		uint32_t RANGE_COUNT;   // The number of 16kHz timer intervals that were counted between Request message transmission and Response message reception.
		uint32_t RANGE_TIME;    // The time in seconds derived from the RANGE_COUNT value, and with internal timing offsets and compensation applied. Values are encoded in 100 nanosecond multiples, so divide by 10000000 to obtain a value in seconds.
		uint16_t RANGE_DIST ;   // The resolved line-of-sight distance to the remote beacon, based on the RANGE_TIME and VOS values. Values are encoded in decimetres, so divide by 10 for a value in metres.
		//USBL Fields
		uint8_t USBL_CHANNELS;   //The number of USBL receiver channels being used to compute the signal angle. Typically this value is either 3 or 4.
		int16_t USBL_RSSI[4];   //An array of the received signal strengths for each of he USBL receiver channels, where “x” is the value defined by the CHANNELS field.
		int16_t USBL_AZIMUTH ;   //The incoming signal azimuth angle from 0° to 360°. deci-Degrees, so divide by 10 for just degrees to a 0.1° resolution.
		int16_t USBL_ELEVATION;  //The incoming signal elevation angle from -90° to +90 so divide by 10 for just degrees to a 0.1° resolution
		int16_t USBL_FIT_ERROR;  //The fit error value returns a number that indicates he quality of fit (or confidence) of the signal azimuth and elevation values from the timing and phase-angle data available. Values are dimensionless, but divide the value by 100 to obtain a signed floating-point value to a resolution of 0.01.
		//Position Fields
		int32_t POSITION_EASTING;  //The Easting distance component of the relative position of the remote beacon to the local beacon computed from the range, incoming signal angle, local beacon depth, attitude and magnetic heading. Values are encoded in decimetres, so divide by 10 for a value in metres. 
		int32_t POSITION_NORTHING; // The Northing distance component of the relative position of the remote beacon to the local beacon computed from the range, incoming signal angle, local beacon depth, attitude and magnetic heading. Page 47SeaTrac Serial Command Interface Reference Values are encoded in decimetres, so divide by 10 for a value in metres.
		int32_t POSITION_DEPTH;	   //The vertical Depth distance component of the relative position of the remote beacon to the local beacon computed from the range, incoming signal angle, local beacon depth, attitude and magnetic heading. Values are encoded in decimetres, so divide by 10 for a value in metres. NB: If the ‘Fix’ has been obtained by a MSG_REQU (Usbl) type request, then this value is computed from the beacon’s attitude and incoming signal angle. If a MSG_REQX (Enhanced) type request has been used, then this value is the remotely transmitted beacon depth sensor value.

		uint8_t OutputFlags_list[6]; 
		void OutputFlags_comp()
		{
			OutputFlags_list[0]=  (0x01 & FLAGS) ;	//Bit[0] = If this bit is set, it indicates the record contains the Range fields discussed below.
			OutputFlags_list[1]=  (0x02 & FLAGS) ;	//Bit[1] = If this bit is set, it indicates the record contains the USBL fields discussed below.
			OutputFlags_list[2]=  (0x04 & FLAGS) ;	//Bit[2] = POSITION_VALID If this bit is set, it indicates the record contains the Position fields discussed below.
			OutputFlags_list[3]=  (0x08 & FLAGS) ;	//Bit[3] = POSITION_ENHANCED If this bit is set, it indicates the Position fix has been computed from an Enhanced USBL return – this means the Depth will be the value from the remote beacons depth sensor rather than computed form the incoming signal angle.
		}


	};

	struct type_CID_PING_RESP{

		type_ACOFIX_T PING_RESP_Beacon;
	};

	struct type_CID_PING_REQ{

		type_ACOFIX_T PING_REQ_Beacon;

	};


	struct  type_CID_PING_ERROR{
		uint8_t STATUS; 
		uint8_t BEACON_ID; 
	};

	struct  type_CID_PING_SEND{
		
		uint8_t DEST_ID;
		type_AMSGTYPE_E type_AMSGTYPE_E_m;
		uint8_t STATUS_report;
		uint8_t DEST_ID_repot;
	};
	//Seatrac data structure  
	struct data_Seatrac {

		type_CID_STATUS CID_STATUS_m;
		type_CID_PING_RESP type_CID_PING_RESP_m;
		type_CID_PING_ERROR type_CID_PING_ERROR_m;
		type_CID_PING_REQ  type_CID_PING_REQ_m;
		type_CID_PING_SEND  type_CID_PING_SEND_m;
	};


	// Extract the comma filtered values
	// to  data_Seatrac data structure
	void
	dataParser(uint16_t typemessege, const char* msg_raw ,   data_Seatrac& Data_Beacon )
	{ 
		
		//type_CID_STATUS CID_STATUS_m;
		uint16_t ind;
		int i;
		switch(typemessege)
		{
		  case CID_STATUS:
		  {
			ind=9;

			std::memcpy(&Data_Beacon.CID_STATUS_m.OutputFlags, msg_raw , 1);
			Data_Beacon.CID_STATUS_m.OutputFlags_comp();
			std::memcpy(&Data_Beacon.CID_STATUS_m.Timestamp, msg_raw + 1, 8);

			std::cout << std::dec << (Data_Beacon.CID_STATUS_m.Timestamp)/1000 <<  "s" << std::endl;
			if (Data_Beacon.CID_STATUS_m.OutputFlags_list[0]) //ENVIRONMENT
			{
				
				std::memcpy(&Data_Beacon.CID_STATUS_m.EnvironmentSupply      , msg_raw + ind     , 2);
				std::memcpy(&Data_Beacon.CID_STATUS_m.EnvironmentTemperature , msg_raw + ind + 2 , 2);
				std::memcpy(&Data_Beacon.CID_STATUS_m.EnvironmentPressure    , msg_raw + ind + 4 , 4); 
				std::memcpy(&Data_Beacon.CID_STATUS_m.EnvironmentDepth       , msg_raw + ind + 8 , 4); 
				std::memcpy(&Data_Beacon.CID_STATUS_m.EnvironmentVos 		 , msg_raw + ind + 12, 2);
				ind=ind+14;

				std::cout << std::dec << (Data_Beacon.CID_STATUS_m.EnvironmentSupply) <<  " mv" << std::endl;
				std::cout << std::dec << (Data_Beacon.CID_STATUS_m.EnvironmentTemperature)/10 <<  " º" << std::endl;
				std::cout << std::dec << (Data_Beacon.CID_STATUS_m.EnvironmentPressure) <<  " m_bar" << std::endl;
				std::cout << std::dec << (Data_Beacon.CID_STATUS_m.EnvironmentDepth) <<  " dm" << std::endl;
				std::cout << std::dec << (Data_Beacon.CID_STATUS_m.EnvironmentVos)/10 <<  " m/s sond" << std::endl;
			}
			if (Data_Beacon.CID_STATUS_m.OutputFlags_list[1]) //ATTITUDE
			{
				std::memcpy(&Data_Beacon.CID_STATUS_m.AttitudeYaw  , msg_raw + ind    , 2);
				std::memcpy(&Data_Beacon.CID_STATUS_m.AttitudePitch, msg_raw + ind + 2, 2);
				std::memcpy(&Data_Beacon.CID_STATUS_m.AttitudeRoll , msg_raw + ind + 4, 2);
				ind=ind+6;
				std::cout << std::dec << (Data_Beacon.CID_STATUS_m.AttitudeYaw)/10 <<  " A_Yaw" << std::endl;
				std::cout << std::dec << (Data_Beacon.CID_STATUS_m.AttitudePitch)/10 <<  " A_Pich" << std::endl;
				std::cout << std::dec << (Data_Beacon.CID_STATUS_m.AttitudeRoll)/10 <<  " A_roll" << std::endl;
			}
			if (Data_Beacon.CID_STATUS_m.OutputFlags_list[2]) //MAG_CAL
			{
				std::memcpy(&Data_Beacon.CID_STATUS_m.MAG_CAL_BUF   , msg_raw + ind      , 1);
				std::memcpy(&Data_Beacon.CID_STATUS_m.MAG_CAL_VALID , msg_raw + ind  + 1 , 1);
				std::memcpy(&Data_Beacon.CID_STATUS_m.MAG_CAL_AGE   , msg_raw + ind  + 2 , 4);
				std::memcpy(&Data_Beacon.CID_STATUS_m.MAG_CAL_FIT   , msg_raw + ind  + 6 , 1);
				ind=ind+7;
			}
			if (Data_Beacon.CID_STATUS_m.OutputFlags_list[3]) //ACC_CAL
			{
				std::memcpy(&Data_Beacon.CID_STATUS_m.ACC_LIM_MIN_Y , msg_raw + ind     , 2);
				std::memcpy(&Data_Beacon.CID_STATUS_m.ACC_LIM_MIN_Z , msg_raw + ind + 2	, 2);
				std::memcpy(&Data_Beacon.CID_STATUS_m.ACC_LIM_MIN_X , msg_raw + ind + 4 , 2);
				std::memcpy(&Data_Beacon.CID_STATUS_m.ACC_LIM_MAX_X , msg_raw + ind + 6 , 2);
				std::memcpy(&Data_Beacon.CID_STATUS_m.ACC_LIM_MAX_Y , msg_raw + ind + 8	, 2);
				std::memcpy(&Data_Beacon.CID_STATUS_m.ACC_LIM_MAX_Z , msg_raw + ind + 10, 2);
				ind=ind+12;
			}
			if (Data_Beacon.CID_STATUS_m.OutputFlags_list[4])//AHRS_RAW_DATA
			{
				std::memcpy(&Data_Beacon.CID_STATUS_m.AHRS_RAW_ACC_X  , msg_raw + ind     , 2);
				std::memcpy(&Data_Beacon.CID_STATUS_m.AHRS_RAW_ACC_Y  , msg_raw + ind + 2 , 2);
				std::memcpy(&Data_Beacon.CID_STATUS_m.AHRS_RAW_ACC_Z  , msg_raw + ind + 4 , 2);
				std::memcpy(&Data_Beacon.CID_STATUS_m.AHRS_RAW_MAG_X  , msg_raw + ind + 6 , 2);
				std::memcpy(&Data_Beacon.CID_STATUS_m.AHRS_RAW_MAG_Y  , msg_raw + ind + 8 , 2);
				std::memcpy(&Data_Beacon.CID_STATUS_m.AHRS_RAW_MAG_Z  , msg_raw + ind + 10, 2);
				std::memcpy(&Data_Beacon.CID_STATUS_m.AHRS_RAW_GYRO_X , msg_raw + ind + 12, 2);
				std::memcpy(&Data_Beacon.CID_STATUS_m.AHRS_RAW_GYRO_Y , msg_raw + ind + 14, 2);
				std::memcpy(&Data_Beacon.CID_STATUS_m.AHRS_RAW_GYRO_Z , msg_raw + ind + 16, 2);  
				ind=ind+18; 		   		
			}
			if (Data_Beacon.CID_STATUS_m.OutputFlags_list[5])//AHRS_COMP_DATA
			{		
				std::memcpy(&Data_Beacon.CID_STATUS_m.AHRS_COMP_ACC_X   , msg_raw + ind     , 4);
				std::memcpy(&Data_Beacon.CID_STATUS_m.AHRS_COMP_ACC_Y   , msg_raw + ind + 4 , 4);
				std::memcpy(&Data_Beacon.CID_STATUS_m.AHRS_COMP_ACC_Z   , msg_raw + ind + 8 , 4);
				std::memcpy(&Data_Beacon.CID_STATUS_m.AHRS_COMP_MAG_X   , msg_raw + ind + 12 ,4);
				std::memcpy(&Data_Beacon.CID_STATUS_m.AHRS_COMP_MAG_Y   , msg_raw + ind + 16 ,4);
				std::memcpy(&Data_Beacon.CID_STATUS_m.AHRS_COMP_MAG_Z   , msg_raw + ind + 20 ,4);
				std::memcpy(&Data_Beacon.CID_STATUS_m.AHRS_COMP_GYRO_X  , msg_raw + ind + 24 ,4);
				std::memcpy(&Data_Beacon.CID_STATUS_m.AHRS_COMP_GYRO_Y  , msg_raw + ind + 28 ,4);
				std::memcpy(&Data_Beacon.CID_STATUS_m.AHRS_COMP_GYRO_Z  , msg_raw + ind + 32 ,4);
			}
			
		
		  }  
		  break;
	
		  case CID_PING_REQ:  // CID_PING_REQ status message is generated when the beacon received an acoustic PING  message from the sending beaconand reports local info.  
		  //todo "this info nead to be internaly reported ????"
		  		ind=0;
				std::memcpy(&Data_Beacon.type_CID_PING_REQ_m.PING_REQ_Beacon.DEST_ID  	  , msg_raw + ind     , 1);
				std::memcpy(&Data_Beacon.type_CID_PING_REQ_m.PING_REQ_Beacon.SRC_ID 		  , msg_raw + ind + 1 , 1);
				std::memcpy(&Data_Beacon.type_CID_PING_REQ_m.PING_REQ_Beacon.FLAGS          , msg_raw + ind + 2 , 1); 
				std::memcpy(&Data_Beacon.type_CID_PING_REQ_m.PING_REQ_Beacon.AMSGTYPE_E  	  , msg_raw + ind + 3 , 1); 
				std::memcpy(&Data_Beacon.type_CID_PING_REQ_m.PING_REQ_Beacon.ATTITUDE_YAW	  , msg_raw + ind + 4,  2);
				std::memcpy(&Data_Beacon.type_CID_PING_REQ_m.PING_REQ_Beacon.ATTITUDE_PITCH , msg_raw + ind + 6 , 2);
				std::memcpy(&Data_Beacon.type_CID_PING_REQ_m.PING_REQ_Beacon.ATTITUDE_ROLL  , msg_raw + ind + 8 , 2);
				std::memcpy(&Data_Beacon.type_CID_PING_REQ_m.PING_REQ_Beacon.DEPTH_LOCAL    , msg_raw + ind + 10, 2); 
				std::memcpy(&Data_Beacon.type_CID_PING_REQ_m.PING_REQ_Beacon.VOS            , msg_raw + ind + 12, 2); 
				std::memcpy(&Data_Beacon.type_CID_PING_REQ_m.PING_REQ_Beacon.RSSI           , msg_raw + ind + 14, 2);
				ind=ind+16;
			if (Data_Beacon.type_CID_PING_REQ_m.PING_REQ_Beacon.OutputFlags_list[0]) //Range fields
			{
				
				std::memcpy(&Data_Beacon.type_CID_PING_REQ_m.PING_REQ_Beacon.RANGE_COUNT, msg_raw + ind     , 4);
				std::memcpy(&Data_Beacon.type_CID_PING_REQ_m.PING_REQ_Beacon.RANGE_TIME , msg_raw + ind + 4 , 4);
				std::memcpy(&Data_Beacon.type_CID_PING_REQ_m.PING_REQ_Beacon.RANGE_DIST , msg_raw + ind + 8 , 4); 
				ind=ind+12;
			}
			if (Data_Beacon.type_CID_PING_REQ_m.PING_REQ_Beacon.OutputFlags_list[1]) //USBL Fields
			{
				std::memcpy(&Data_Beacon.type_CID_PING_REQ_m.PING_REQ_Beacon.USBL_CHANNELS   , msg_raw + ind , 1);
				for (i=0; i<Data_Beacon.type_CID_PING_REQ_m.PING_REQ_Beacon.USBL_CHANNELS ;i++)
				{
				std::memcpy(&Data_Beacon.type_CID_PING_REQ_m.PING_REQ_Beacon.USBL_RSSI[i]   , msg_raw + ind + 1+2*i, 2); 
				}
				std::memcpy(&Data_Beacon.type_CID_PING_REQ_m.PING_REQ_Beacon.USBL_AZIMUTH    , msg_raw + ind + 1+2*i, 2);
				std::memcpy(&Data_Beacon.type_CID_PING_REQ_m.PING_REQ_Beacon.USBL_ELEVATION  , msg_raw + ind + 3+2*i, 2);
				std::memcpy(&Data_Beacon.type_CID_PING_REQ_m.PING_REQ_Beacon.USBL_FIT_ERROR  , msg_raw + ind + 5+2*i, 2);
				ind=ind+7+i*2;
			}
			if (Data_Beacon.type_CID_PING_REQ_m.PING_REQ_Beacon.OutputFlags_list[2]) //Position Fields
			{
				std::memcpy(&Data_Beacon.type_CID_PING_REQ_m.PING_REQ_Beacon.POSITION_EASTING  , msg_raw + ind     , 4);
				std::memcpy(&Data_Beacon.type_CID_PING_REQ_m.PING_REQ_Beacon.POSITION_NORTHING , msg_raw + ind + 4 , 4);
				std::memcpy(&Data_Beacon.type_CID_PING_REQ_m.PING_REQ_Beacon.POSITION_DEPTH    , msg_raw + ind + 8 , 4);
			}
		  
			 
		  break;
	
		  case CID_PING_RESP:  //Message sent when a PING response is received  //todo verificar as deslocações 
		  {
			ind=0;
				std::memcpy(&Data_Beacon.type_CID_PING_RESP_m.PING_RESP_Beacon.DEST_ID  	  , msg_raw + ind     , 1);
				std::memcpy(&Data_Beacon.type_CID_PING_RESP_m.PING_RESP_Beacon.SRC_ID 		  , msg_raw + ind + 1 , 1);
				std::memcpy(&Data_Beacon.type_CID_PING_RESP_m.PING_RESP_Beacon.FLAGS          , msg_raw + ind + 2 , 1); 
				std::memcpy(&Data_Beacon.type_CID_PING_RESP_m.PING_RESP_Beacon.AMSGTYPE_E  	  , msg_raw + ind + 3 , 1); 
				std::memcpy(&Data_Beacon.type_CID_PING_RESP_m.PING_RESP_Beacon.ATTITUDE_YAW	  , msg_raw + ind + 4,  2);
				std::memcpy(&Data_Beacon.type_CID_PING_RESP_m.PING_RESP_Beacon.ATTITUDE_PITCH , msg_raw + ind + 6 , 2);
				std::memcpy(&Data_Beacon.type_CID_PING_RESP_m.PING_RESP_Beacon.ATTITUDE_ROLL  , msg_raw + ind + 8 , 2);
				std::memcpy(&Data_Beacon.type_CID_PING_RESP_m.PING_RESP_Beacon.DEPTH_LOCAL    , msg_raw + ind + 10, 2); 
				std::memcpy(&Data_Beacon.type_CID_PING_RESP_m.PING_RESP_Beacon.VOS            , msg_raw + ind + 12, 2); 
				std::memcpy(&Data_Beacon.type_CID_PING_RESP_m.PING_RESP_Beacon.RSSI           , msg_raw + ind + 14, 2);
				ind=ind+16;
			if (Data_Beacon.type_CID_PING_RESP_m.PING_RESP_Beacon.OutputFlags_list[0]) //Range fields
			{
				
				std::memcpy(&Data_Beacon.type_CID_PING_RESP_m.PING_RESP_Beacon.RANGE_COUNT, msg_raw + ind     , 4);
				std::memcpy(&Data_Beacon.type_CID_PING_RESP_m.PING_RESP_Beacon.RANGE_TIME , msg_raw + ind + 4 , 4);
				std::memcpy(&Data_Beacon.type_CID_PING_RESP_m.PING_RESP_Beacon.RANGE_DIST , msg_raw + ind + 8 , 4); 
				ind=ind+12;
			}
			if (Data_Beacon.type_CID_PING_RESP_m.PING_RESP_Beacon.OutputFlags_list[1]) //USBL Fields
			{
				std::memcpy(&Data_Beacon.type_CID_PING_RESP_m.PING_RESP_Beacon.USBL_CHANNELS   , msg_raw + ind , 1);
				for (i=0; i<Data_Beacon.type_CID_PING_RESP_m.PING_RESP_Beacon.USBL_CHANNELS ;i++)
				{
				std::memcpy(&Data_Beacon.type_CID_PING_RESP_m.PING_RESP_Beacon.USBL_RSSI[i]   , msg_raw + ind + 1+2*i, 2); 
				}
				std::memcpy(&Data_Beacon.type_CID_PING_RESP_m.PING_RESP_Beacon.USBL_AZIMUTH    , msg_raw + ind + 1+2*i, 2);
				std::memcpy(&Data_Beacon.type_CID_PING_RESP_m.PING_RESP_Beacon.USBL_ELEVATION  , msg_raw + ind + 3+2*i, 2);
				std::memcpy(&Data_Beacon.type_CID_PING_RESP_m.PING_RESP_Beacon.USBL_FIT_ERROR  , msg_raw + ind + 5+2*i, 2);
				ind=ind+7+i*2;
			}
			if (Data_Beacon.type_CID_PING_RESP_m.PING_RESP_Beacon.OutputFlags_list[2]) //Position Fields
			{
				std::memcpy(&Data_Beacon.type_CID_PING_RESP_m.PING_RESP_Beacon.POSITION_EASTING  , msg_raw + ind     , 4);
				std::memcpy(&Data_Beacon.type_CID_PING_RESP_m.PING_RESP_Beacon.POSITION_NORTHING , msg_raw + ind + 4 , 4);
				std::memcpy(&Data_Beacon.type_CID_PING_RESP_m.PING_RESP_Beacon.POSITION_DEPTH    , msg_raw + ind + 8 , 4);
			}
	 
		  }  
		   break;

		   case CID_PING_ERROR:  //Message sent when a PING response error/timeou    //todo adicinar coisas a fazer para reportar erros para IMC
				ind=0;
				std::memcpy(&Data_Beacon.type_CID_PING_ERROR_m.STATUS  , msg_raw + ind     , 1);
				std::memcpy(&Data_Beacon.type_CID_PING_ERROR_m.BEACON_ID , msg_raw + ind + 1 , 1);

				switch(Data_Beacon.type_CID_PING_ERROR_m.STATUS)
					{
						case CST_XCVR_RESP_TIMEOUT:
						 std::cout << "CST_XCVR_RESP_TIMEOUT" << Data_Beacon.type_CID_PING_ERROR_m.BEACON_ID <<std::endl;
						 break;
						case CST_XCVR_RESP_WRONG:
						  std::cout << "CST_XCVR_RESP_WRONG" << Data_Beacon.type_CID_PING_ERROR_m.BEACON_ID  << std::endl;
						 break;
						case CST_XCVR_RESP_ERROR:
							std::cout << "CST_XCVR_RESP_ERROR" << Data_Beacon.type_CID_PING_ERROR_m.BEACON_ID <<std::endl;
						 break;
				default:

				// unknown error
				   break;
				}
		   break;

		   case CID_PING_SEND: // Report of CID_PING_SEND opeeration //todo complete

/*
STATUS CST_E Status code used to indicate if the command
executed successfully.
Valid values are...
 CST_OK The PING command is being sent.
 CST_CMD_PARAM_INVALID The DEST_ID parameter is invalid.
 CST_CMD_PARAM_MISSING The DEST_ID has not been specified correctly.
 CST_XCVR_BUSY The message cannot be sent as the acoustic
transceiver is busy performing another operation.
BEACON_ID
BID_E
The ID code of the beacon that the command was
sent to.
Valid values are form 1 to 15.
*/
		  break;

		
		  case CID_DAT_RECEIVE: //8.3. DAT Protocol Messages



		  break;


		  case CID_DAT_ERROR: //8.3. DAT Protocol Messages

		  break;

		   // Should never get here.
		 default:
		   //m_data_state = DP_COMPLETE;
		   break;
		}



	  
	}

	std:: string
	Comand_SEND_seatrac(cid cid_m , data_Seatrac& Data_Beacon )
	{
		std::string cmd = "#" ;
		std::string check_sum;
		std::string data_m=String::str("%u",(uint16_t) cid_m );

		switch(cid_m)
			{
		  		case CID_PING_SEND:

					Data_Beacon.type_CID_PING_SEND_m.STATUS_report= CST_XCVR_BUSY;
					Data_Beacon.type_CID_PING_SEND_m.DEST_ID_repot=0x0;
		  			data_m+= String::str("%u%u",((uint8_t)Data_Beacon.type_CID_PING_SEND_m.DEST_ID ), ((uint8_t) Data_Beacon.type_CID_PING_SEND_m.type_AMSGTYPE_E_m));
		  		  break;
/*
		  		case CID_PING_SEND:

		  			//data_m+=  String::str("%u", );

		  		  break;
		   		*/// Should never get here.
		 		default:
		   			
		   		 break;
			}
		//clac CRC 
		std::string msg = String::fromHex(data_m);
		const char* msg_raw = msg.data();
        uint16_t crc =CRC16::compute((uint8_t*) msg_raw ,msg.size() ,0);
        check_sum=String::str("%u",(uint16_t) crc );

        // ADD params to message 
		cmd+= data_m;
  		cmd+=  check_sum; 
 		cmd+= "\r\n";
		return cmd;
	}

	
  }
}
/* unsigned ping_time = static_cast<unsigned>(m_args.ping_tout_nb * 1000);
std::string cmd = String::str("$CCPNT,%u,%u,%u,%u,%u,%u,%u,%u,1\r\n",
                              query, m_args.tx_length, m_args.rx_length, ping_time,
                              freqs[0], freqs[1], freqs[2], freqs[3]);*/