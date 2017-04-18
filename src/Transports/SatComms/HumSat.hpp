//***************************************************************************
// Copyright 2007-2013 Universidade do Porto - Faculdade de Engenharia      *
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
// Author: André Guerra                                                     *
//***************************************************************************
// Class for working with HumSat radio                                      *
//      This file has all the HumSat functions needed                       *
// The HumSat functions were adapted from files provided by UVigo           *
//***************************************************************************

#ifndef TRANSPORTS_SATCOMMS_HUMSAT_HPP_INCLUDED_
#define TRANSPORTS_SATCOMMS_HUMSAT_HPP_INCLUDED_

// DUNE headers.
#include <DUNE/DUNE.hpp>

// Local headers
#include <stdint.h>
#include <stdbool.h>
#include <stdlib.h>

#include <algorithm>        // std::min
#include "HumSat_Utils.hpp"

#include <inttypes.h>       //! For debug messages

/////////////
//! GLOBAL DEFINITIONS
/////////////

//////////////////////////////
///////	Endianness  //////////
//////////////////////////////
//! Define the endianness of our system, so that this code can run properly
#ifdef __ORDER_LITTLE_ENDIAN__
#define uint16_be(x) (((x) >> 8) | ((x) << 8))
#define uint32_be(x) (((x) >> 24) | (((x) & 0x00FF0000) >> 8) | (((x) & 0x0000FF00) << 8) | ((x) << 24))
#else
#define uint16_be(x) x
#define uint32_be(x) x
#endif


//! Redundacy: Creates three copies of the same message
#define PACKET_NUMBER_OF_COPIES		3
//! Length of the packet preamble 
#define PACKET_PREAMBLE_LENGTH		43


//! Carriage return character (ASCII)
#define HUMSNS_END_TRAMA_BYTE   (0x0D)
//! Escape character (ASCII)
#define HUMSNS_ESCAPE_BYTE      (0x5C)
//! Internal buffer 
#define TRANSMISSION_BUFFER     (500)


// !!!!WRN: Might need to be changed!!!!
// Max Radio Output Power -> HEXADECIMAL
#define HUMSAT_MAXPOWER		0x0AD0
// Min Radio Output Power
#define HUMSAT_MINPOWER		0
// Max Radio Output Frequency
#define HUMSAT_MAXFREQ		0x1B5880F7
// Min Radio Output Frequency
#define HUMSAT_MINFREQ		0

namespace Transports {
  namespace SatComms {
    using DUNE_NAMESPACES;

    /////////////
    //! VARIABLE TYPES DEFINITION
    /////////////

    //! Radio return codes
    enum HumSatRetCode {
      HUMSAT_RETURN_ERROR,
      HUMSAT_RETURN_OK
    };

    //! Radio Operational Modes
    enum HumSatOpMode {
      HUMSAT_OP_MODE_UNKNOWN = 0,
      HUMSAT_OP_MODE_STANDBY = 'S',
      HUMSAT_OP_MODE_TRANSMISSION = 'T',
      HUMSAT_OP_MODE_DISCOVERY = 'D'
    };

    //! Message Format
    struct HumSatPacket {
      uint8_t radio_id[6];        //! User Amateur Radio Id
      uint16_t sensor_id;         //! User Sensor identifier
      uint8_t system_flags;       //! System flags
      uint8_t reserved_field[6];  //! Reserved field
      uint8_t data_length;        //! Length of user data field
      uint8_t payload_data[32];   //! User data
      uint16_t crc_algorithm;	    //! Verification algorithm
      uint8_t RS_parity[32];      //! Error detection and correction algorithm
    };

    //! Radio Message Frame (packet)
    union HumSatMessageFrame {
      uint8_t raw_frame[sizeof(HumSatPacket)];  //! Raw message frame (size of HumSatPacket)
      HumSatPacket coded_frame;                 //! Message frame of type HumSatPacket
    };

    //! HumSat radio readiness level
    struct HumSatCheckList {
      bool serial_device_check; //! Serial device set
      bool radio_active_check;  //! HumSat terminal activated
      bool power_check;         //! Terminal power set
      bool freq_check;          //! Terminal frequency set
      bool radio_param_check;   //! Radio main parameters set
      bool data_check;          //| User data set
    };

    //! Serial device parameters
    struct SerialDevice {
      std::string device_name;  //! Serial port device
      uint16_t baud_rate;       //! Serial port baud rate
      double device_timeout;    //! Serial port timeout
    };

    //! Radio device paramenters
    struct RadioDevice {
      char *radio_id;           //! User amateur call id
      uint16_t sensor_id;       //! Internal terminal id
      uint16_t transmit_power;  //! HumSat terminal output transmission power
      int32_t transmit_freq;    //! HumSat terminal output transmission frequency
    };


    /////////////
    //! Satellite Radio Class
    /////////////
    class SatelliteRadio {
      ///////////////////////////////////////
      //! PRIVATE ACCESS
    private:
      /////////////////////
      //! Private Variables
      Tasks::Task* m_task;                //! Pointer to task
      Hardware::SerialPort* m_uart;       //! Serial port handle
      //TODO Counter<double> m_wdog;             //! Serial port watchdog.

      HumSatMessageFrame radio_frame;     //! Radio message frame
      HumSatOpMode op_mode;               //! Current radio operational mode
      uint8_t max_wait_number;            //! Number of times to wait for reply

      HumSatCheckList radio_ready;        //! HumSat transmitter ready
      SerialDevice serial_arg;            //! Serial device main parameters
      RadioDevice radio_arg;              //! Radio device main parameters

      /////////////////////
      //! Private Functions
      /////////////
      //! Operation Mode functions

      //! Initialise HumSat terminal
      //! @param[in]  device_name     - serial port device.
      //! @param[in]  baud_rate       - serial port baud rate.
      //! @param[in]  device_timeout  - serial port timeout.
      //! @return     HumSatRetCode.
      HumSatRetCode initialiseHumSatComm(std::string device_name, uint16_t baud_rate, double device_timeout) {
        op_mode = HUMSAT_OP_MODE_UNKNOWN; //! Initialise operational mode
        max_wait_number = 10;             //! Initialise times to wait for reply

        //! Initialise connection
        m_uart = new SerialPort(device_name, baud_rate);

        //! Set timeout
        //TODO m_wdog.setTop(device_timeout);
        //TODO use a watchdog for the serial comms
        //TODO look in "dune/src/actuators/led4R"
        m_task->debug("TODO Device timeout (%.1f) not used currently", device_timeout);

        //! Reset HumSat terminal
        if (terminalReset() == HUMSAT_RETURN_ERROR) {
          return HUMSAT_RETURN_ERROR;
        }

        //! Check HumSat mode
        if (getOperationModeComm() == HUMSAT_RETURN_ERROR) {
          return HUMSAT_RETURN_ERROR;
        }

        // Prepopulate preamble
        memset(radio_frame.raw_frame, 0, sizeof(HumSatPacket));

        return HUMSAT_RETURN_OK;
      }

      //! Reset HumSat terminal
      //! @return     HumSatRetCode.
      HumSatRetCode terminalReset(void) {
        //! Send RESET command
        m_uart->writeString("RE\r");

        //! Wait one second
        Time::Delay::wait(1);

        //! Flush all input and output
        m_uart->flush();

        m_task->debug("HumSat Terminal: Resetting device.");
        return HUMSAT_RETURN_OK;
      }

      //! Wait until HumSat terminal is in STANDBY mode
      //! @return     HumSatRetCode.
      HumSatRetCode waitUntilStandby(void) {
        uint8_t currentWaitTimes = 0;                   //! Current number of times waited

        while (op_mode != HUMSAT_OP_MODE_STANDBY) {     //! Wait until HumSat terminal is in standy mode
          if (currentWaitTimes++ == max_wait_number) {  //! Verify number of times waited
            m_task->debug("HumSat Terminal: ERROR: Timeout in transmission mode.");
            return HUMSAT_RETURN_ERROR;
          }

          //! Get operational mode
          getOperationModeComm();

          //! Wait one second
          Time::Delay::wait(1);
        }
        return HUMSAT_RETURN_OK;
      }

      //! Transmit stored message
      //! @return     HumSatRetCode.
      HumSatRetCode transmitMessageComm(void) {
        char *transmit_message_command = (char *) "OP T\r";   //! Get data command

        //! Send command to terminal to transmit stored message frame
        m_uart->writeString(transmit_message_command);

        //! Check if command was received
        if (receiveOK() == HUMSAT_RETURN_ERROR) {
          return HUMSAT_RETURN_ERROR;
        }
        m_task->debug("HumSat Terminal: Transmit mode succesfully set.");

        //! Wait to get back to STANDBY mode
        if (waitUntilStandby() == HUMSAT_RETURN_ERROR) {
          m_task->err("ERROR: HumSat terminal does not return to standby mode.");
          return HUMSAT_RETURN_ERROR;
        }

        return HUMSAT_RETURN_OK;
      }



      /////////////
      //! Serial methods

      //! Check if HumSat terminal is sending an ok
      //! @return     HumSatRetCode.
      HumSatRetCode receiveOK() {
        //! Debug message
        m_task->spew("receive OK entered");

        const size_t c_serial_receive_data_length = 3;              //! Received Data Length (constant value)
        size_t serial_receive_data_length = 3;                      //! Received Data Length (non constant value, equal to const)
        uint8_t serial_receive_data[c_serial_receive_data_length];  //! Received Data from terminal

        if (receivingData(serial_receive_data, &serial_receive_data_length) == HUMSAT_RETURN_ERROR) { //! If there is a problem receiving data
          m_task->debug("HumSat Terminal: ERROR: Error receiving 'OK' from terminal.");
          return HUMSAT_RETURN_ERROR;
        }
        else if (!((serial_receive_data[0] == 'O') && (serial_receive_data[1] == 'K'))) {             //! If code received is different from OK
          m_task->debug("HumSat Terminal: ERROR: No 'OK' received from terminal.");
          return HUMSAT_RETURN_ERROR;
        }

        //! Debug message
        m_task->spew("receive OK left");
        return HUMSAT_RETURN_OK;
      }

      //! Send command to HumSat terminal
      //! @param[in]  command_data     - command to send.
      //! @param[in]  command_length   - number of bytes of command.
      //! @return     HumSatRetCode.
      HumSatRetCode sendCommand(uint8_t *command_data, size_t command_length) {
        //! Debug messages
        m_task->spew("Send Command entered");
        m_task->spew("Data -> %s", command_data);
        m_task->spew("Length = %d", (int)command_length);

        char escape_char = HUMSNS_ESCAPE_BYTE;  //! Escape character (ASCII)
        char *final_char = (char *) "\r";       //! Final character

        for (int i = 0; i < (int)command_length; i++) {
          //! Debug messages
          m_task->spew("I = %d", i);
          m_task->spew("Data -> %c", command_data[i]);
          m_task->spew("Data -> %d", command_data[i]);

          if ((command_data[i] == HUMSNS_END_TRAMA_BYTE) || (command_data[i] == HUMSNS_ESCAPE_BYTE)) {  //! If data has any of these characters
              //! Write an escape character
            m_uart->write(&escape_char, 1);
          }

          //! Write the character from data
          m_uart->write(&command_data[i], 1);
        }

        //! Debug messages
        m_task->spew("Final char");
        m_task->spew("Data -> %d", *final_char);

        //! Write final character
        m_uart->write(final_char, sizeof(*final_char));

        //! Debug message
        m_task->spew("Send Command left");

        return HUMSAT_RETURN_OK;
      }

      //! Receive data from HumSat terminal
      //! @param[in]  data_received        - buffer for received data.
      //! @param[in]  data_length - number of bytes to receive.
      //! @return     HumSatRetCode.
      HumSatRetCode receivingData(uint8_t *data_received, size_t *data_length) {
        //! Debug messages
        m_task->spew("receiving Data entered");
        m_task->spew("Length = %d", (int)*data_length);

        size_t length_control = 0;              //! Length control
        bool escape_control = false;            //! Loop control
        int num_attempts = 0;                   //! Number of attempts it tried to read a character
        int max_attempts = 10; //! Maximum number of attempts before giving error
        size_t byte_read = 0;

        while (length_control < *data_length) {
          //! Read one byte from HumSat terminal
          //TODO Check if runs ok, or if it requires a try/catch (linhas 103-111 na Transports/Serial) (e/ou usar m_dog?)

          if (Poll::poll(*m_uart, 1.0))
            byte_read = m_uart->read(&data_received[length_control], 1);
          else
            m_task->spew("No character read from uart!");

          if (!byte_read) {       //! If no character was read restart loop
            num_attempts++;
            if (num_attempts < max_attempts) {
              continue;
            }
            else {
              m_task->war(DTR("WARNING: RECEIVEDATA: Unable to read data from HumSat. %d bytes received!"), (int)length_control);
              break;
            }
          }
          else {
            m_task->spew("Number of attempts = %d", num_attempts);
            num_attempts = 0;
          }

          if (!escape_control) {  //! If an escape character was not read
              //! Debug message
            m_task->spew("No Escape -> %u", data_received[length_control]);
            if (data_received[length_control] == HUMSNS_ESCAPE_BYTE) {           //! If escape byte is read
              escape_control = true;
            }
            else if (data_received[length_control++] == HUMSNS_END_TRAMA_BYTE) { //! (Increment always!) If the next character on the array is the carriage return character
              break;
            }
          }
          else {          //! If escape byte was read
              //! Debug message
            m_task->spew("Escape -> %u", data_received[length_control]);
            escape_control = false;
            length_control++;
          }
        }

        //! Debug messages
        m_task->spew("Length = %d", (int)length_control);
        m_task->spew("receiving Data left -> %s", data_received);

        return (length_control > 0) ? HUMSAT_RETURN_OK : HUMSAT_RETURN_ERROR;
      }

      //! Get message frame stored in terminal to be transmitted later
      //! @return     HumSatRetCode.
      //TODO Use in the future if needed
      HumSatRetCode getTransmitDataComm(uint8_t *data_received, size_t *data_length) {
        const size_t c_receive_data_length = TRANSMISSION_BUFFER;   //! Received Data Length (constant value)
        size_t receive_data_length = TRANSMISSION_BUFFER;           //! Received Data Length (non constant value, equal to const)
        uint8_t receive_data[c_receive_data_length];                //! Received Data from terminal

        char *get_data_command = (char *) "DT\r";                   //! Get data command

        //! Send command to terminal to get data stored
        m_uart->writeString(get_data_command);

        //! Get data from terminal
        if (receivingData(receive_data, &receive_data_length) == HUMSAT_RETURN_ERROR) {
          m_task->debug("ERROR: HumSat GETTD: Error receiving SERIAL data.");
          return HUMSAT_RETURN_ERROR;
        }

        //! Copy data to the destination variable
        memcpy(data_received, receive_data, *data_length);

        return HUMSAT_RETURN_OK;
      }



      /////////////
      //! Configuration functions

      //! Get current operational of terminal
      //! @return     HumSatRetCode.
      HumSatRetCode getOperationModeComm(void) {
        //! Debug message
        m_task->spew("get Operation Mode Comm entered");

        const size_t c_receive_data_length = 2;         //! Received Data Length (constant value)
        size_t receive_data_length = 2;                 //! Received Data Length (non constant value, equal to const)
        uint8_t receive_data[c_receive_data_length];    //! Received Data from terminal

        char *get_opmode_command = (char *) "OP\r";     //! Get operational mode command

        //! Send command to terminal to get operational mode
        m_uart->writeString(get_opmode_command);

        //! Get operational mode from terminal
        if (receivingData(receive_data, &receive_data_length) == HUMSAT_RETURN_ERROR) {
          m_task->debug("ERROR: HumSat GETOP: Error receiving SERIAL data.");
          op_mode = HUMSAT_OP_MODE_UNKNOWN;
          return HUMSAT_RETURN_ERROR;
        }
        else {
          op_mode = (HumSatOpMode)receive_data[0];
          //! Debug message
          m_task->spew("get Operation Mode Comm left -> %d", op_mode);
          return HUMSAT_RETURN_OK;
        }
      }

      //! Set output transmit power calibration
      //! @param[in]  power_calibration   - value of power to be set.
      //! @return     HumSatRetCode.
      HumSatRetCode setTransmissionPowerComm(uint16_t power_calibration) {
        //! Debug messages
        m_task->spew("Set Transmission Power Comm entered");
        m_task->spew("Power %" PRIu16 "", power_calibration);

        uint8_t power_array[2] = {                      //! Power calibration
            (uint8_t)((power_calibration >> 8) & 0xFF),
            (uint8_t)(power_calibration & 0xFF)};

        uint8_t set_power_command[] = {'T', 'P', ' ', power_array[0], power_array[1]};  //! Set power command

        //! Send command to HumSat terminal
        sendCommand(set_power_command, sizeof(set_power_command));

        //! Check if command was received
        if (receiveOK() == HUMSAT_RETURN_ERROR) {
          return HUMSAT_RETURN_ERROR;
        }

        m_task->spew("Terminal: Transmission power succesfully set.");
        return HUMSAT_RETURN_OK;
      }

      //! Get output transmit power calibration
      //! @return     HumSatRetCode.
      HumSatRetCode getTransmitPowerComm(void) {
        const size_t c_receive_data_length = 3;       //! Received Data Length (constant value)
        size_t receive_data_length = 3;               //! Received Data Length (non constant value, equal to const)
        uint8_t receive_data[c_receive_data_length];  //! Received Data from terminal

        char *get_power_command = (char *) "TP\r";    //! Get data command

        //! Send command to terminal to get power calibration
        m_uart->writeString(get_power_command);

        //! Get data from terminal
        if (receivingData(receive_data, &receive_data_length) == HUMSAT_RETURN_ERROR) {
          m_task->debug("ERROR: HumSat GETTP: Error receiving SERIAL data.");
          return HUMSAT_RETURN_ERROR;
        }
        else {
          //! Debug message
          m_task->spew("OLD Power = %d", radio_arg.transmit_power);

          //! Write new power
          radio_arg.transmit_power = (uint16_t)((((uint16_t)receive_data[0]) << 8) | (((uint16_t)receive_data[1])));

          //! Debug message
          m_task->spew("NEW Power = %d", radio_arg.transmit_power);

          return HUMSAT_RETURN_OK;
        }
      }

      //! Set output transmit frequency calibration
      //! @param[in]  frequency_calibration   - value of frequency to be set.
      //! @return     HumSatRetCode.
      HumSatRetCode setTransmissionFreqComm(int32_t frequency_calibration) {
        //! Debug messages
        m_task->spew("Set Transmission Frequency Comm entered");
        m_task->spew("Freq %d", frequency_calibration);

        //! Set frequency command
        uint8_t set_freq_command[] = {'F', 'Q', ' ',
            (uint8_t)((frequency_calibration >> 24) & 0xFF),
            (uint8_t)((frequency_calibration >> 16) & 0xFF),
            (uint8_t)((frequency_calibration >> 8) & 0xFF),
            (uint8_t)(frequency_calibration & 0xFF)};

        const size_t c_receive_data_length = 10;      //! Received Data Length (constant value)
        size_t receive_data_length = 10;              //! Received Data Length (non constant value, equal to const)
        uint8_t receive_data[c_receive_data_length];  //! Received Data from terminal

        char *get_freq_command = (char *) "FQ\r";     //! Get data command

        // Set new frequency
        sendCommand(set_freq_command, sizeof(set_freq_command));

        //! Check if command was received
        if (receiveOK() == HUMSAT_RETURN_ERROR) {
          return HUMSAT_RETURN_ERROR;
        }

        //! Send command to terminal to get frequency calibration
        m_uart->writeString(get_freq_command);

        //! Get data from terminal
        if (receivingData(receive_data, &receive_data_length) == HUMSAT_RETURN_ERROR) {
          m_task->err("HumSat ERROR: Error receiving through serial port");
          return HUMSAT_RETURN_ERROR;
        }
        if (memcmp(receive_data, &set_freq_command[3], 4) != 0) {
          m_task->war("HumSat WARNING: Read frequency does not match written value");
          return HUMSAT_RETURN_ERROR;
        }

        m_task->spew("HumSat Terminal: Transmission frequency succesfully set");
        return HUMSAT_RETURN_OK;
      }

      //! Get output transmit frequency calibration
      //! @return     HumSatRetCode.
      HumSatRetCode getTransmitFreqComm(void) {
        const size_t c_receive_data_length = 10;      //! Received Data Length (constant value)
        size_t receive_data_length = 10;              //! Received Data Length (non constant value, equal to const)
        uint8_t receive_data[c_receive_data_length];  //! Received Data from terminal

        char *get_freq_command = (char *) "FQ\r";     //! Get data command

        //! Send command to terminal to get frequency calibration
        m_uart->writeString(get_freq_command);

        //! Get data from terminal
        if (receivingData(receive_data, &receive_data_length) == HUMSAT_RETURN_ERROR) {
          m_task->debug("HumSat ERROR: GETOP: Error receiving SERIAL data.");
          return HUMSAT_RETURN_ERROR;
        }
        else {
          //! Debug message
          m_task->spew("OLD Frequency = %d", radio_arg.transmit_freq);

          //! Write new frequency
          radio_arg.transmit_freq = (int32_t)((((uint32_t)receive_data[0]) << 24) | (((uint32_t)receive_data[1]) << 16) | (((uint32_t)receive_data[2]) << 8) | (((uint32_t)receive_data[3])));

          //! Debug message
          m_task->spew("NEW Frequency = %d", radio_arg.transmit_freq);

          return HUMSAT_RETURN_OK;
        }
      }



      /////////////
      //! Package methods

      //! Generate HumSat message frame to be sent
      //! @param[in]  user_data       - user data to be sent.
      //! @param[in]  data_length     - user data length.
      //! @param[in]  sensor_id       - internal sensor ID.
      //! @param[in]  radio_id        - amateur call id.
      //! @return     HumSatRetCode.
      HumSatRetCode generateMessageFrame(uint8_t *user_data, uint8_t data_length, uint16_t sensor_id, char radio_id[6]) {
        //Generates the Humsat packet cointaing the User Data (user_data) with the specified sensorID and RadioID
        //! It is scrambled but it does not include the preamble (included later in sendMessageFrame)

        uint8_t *raw_frame = (uint8_t*)(radio_frame.raw_frame);   //! Raw message frame (size of HumSatPacket)
        HumSatPacket *humsat_frame = &(radio_frame.coded_frame);  //! Message frame of type HumSatPacket

        //! Construct HumSatPacket message fields

        //! Radio ID
        memcpy(humsat_frame->radio_id, radio_id, sizeof(humsat_frame->radio_id));

        //! Sensor ID  
        humsat_frame->sensor_id = sensor_id;

        //! Flags
        humsat_frame->system_flags = HUMPL_PKT_FLAGS_FIELD_GROUND_bm | HUMPL_PKT_FLAGS_FIELD_DATA_bm |
          HUMPL_PKT_FLAGS_FIELD_REEDSOLOMON_bm;

        //! Reserved field
        memset(humsat_frame->reserved_field, 0, sizeof(humsat_frame->reserved_field));

        //! Data Length
        data_length = std::min((uint8_t)32, data_length);
        humsat_frame->data_length = data_length;

        //! Payload (+ padding)
        memcpy(humsat_frame->payload_data, user_data, data_length);
        memset(humsat_frame->payload_data + data_length, 0, sizeof(humsat_frame->payload_data) - data_length);

        //! CRC
        uint16_t crc_algorithm = humpl_crc_generate(raw_frame, offsetof(HumSatPacket, payload_data) + data_length);
        humsat_frame->crc_algorithm = uint16_be(crc_algorithm); /////// uint16_be

        //! Reed-Solomon E16
        reedSolomon_encode(raw_frame, offsetof(HumSatPacket, crc_algorithm), humsat_frame->RS_parity, REEDSOLOMON_CCSDS_E16);

        //! Scramble transmission data
        humpl_pkt_scramble(raw_frame, raw_frame, sizeof(HumSatPacket));

        //! Debug - Print generated message
        if (m_task->getDebugLevel() == DEBUG_LEVEL_SPEW) {
          m_task->trace("Terminal: New data field:");
          uint8_t* raw_data_field = (uint8_t*)&radio_frame;
          for (int i = 0; i < (int) sizeof(radio_frame); i++) {
            m_task->spew("Message char -> %d", raw_data_field[i]);
          }
        }

        return HUMSAT_RETURN_OK;
      }

      //! Send HumSat message frame to terminal (to be transmitted later)
      //! @param[in]  preamble_length     - length of preamble.
      //! @param[in]  n_pakets_per_frame  - number of packets per frame.
      //! @return     HumSatRetCode.
      HumSatRetCode sendMessageFrame(uint8_t preamble_length, uint8_t n_pakets_per_frame) {
        char escape_char = HUMSNS_ESCAPE_BYTE;                    //! Escape character (ASCII)
        char final_char = HUMSNS_END_TRAMA_BYTE;                  //! Final character
        char b_preamble_char = (uint8_t)HUMPL_PKT_PREAMBLE_CODE; //! Preamble begining code character
        char e_preamble_char = HUMPL_PKT_END_PREAMBLE_CODE;       //! Preamble ending code character

        uint8_t* data_frame = radio_frame.raw_frame;              //! HumSat message frame

        uint16_t preamble_size = preamble_length + (sizeof(HumSatPacket) + HUMPL_PKT_END_PREAMBLE_LENGTH) * n_pakets_per_frame; //! Preamble size
        uint8_t dt_first[] = {'D', 'T', ' ', (uint8_t)(preamble_size >> 8), (uint8_t)(preamble_size & 0xFF), ' '};              //! Command begining code

        //! Send first command bytes
        for (int i = 0; i < (int) sizeof(dt_first); i++) {
          if ((dt_first[i] == HUMSNS_END_TRAMA_BYTE) || (dt_first[i] == HUMSNS_ESCAPE_BYTE)) {        //! If data has any of these characters
              //! Write an escape character
            m_uart->write(&escape_char, 1);
          }
          //! Write the character from data
          m_uart->write(&dt_first[i], 1);
        }

        //! Write preamble
        for (int i = 0; i < preamble_length; i++) {
          //! Write the character for the preamble
          m_uart->write(&b_preamble_char, 1);
        }

        //! Write data (byte basis) escaping data
        for (int n = 0; n < n_pakets_per_frame; n++) {
          for (int i = 0; i < HUMPL_PKT_END_PREAMBLE_LENGTH; i++) {
            //! Write the character for the preamble
            m_uart->write(&e_preamble_char, 1);
          }

          for (int i = 0; i < (int) sizeof(humpl_pkt_t); i++) {
            if ((data_frame[i] == HUMSNS_END_TRAMA_BYTE) || (data_frame[i] == HUMSNS_ESCAPE_BYTE)) {  //! If data has any of these characters
                //! Write an escape character
              m_uart->write(&escape_char, 1);
            }
            //! Write the character from data
            m_uart->write(&data_frame[i], 1);
          }
        }

        //! Finish serial transmission (write final character)
        m_uart->write(&final_char, 1);

        //! Receive OK from terminal
        if (receiveOK() == HUMSAT_RETURN_ERROR) {
          return HUMSAT_RETURN_ERROR;
        }
        m_task->trace("HumSat Terminal: New data succesfully set.");

        return HUMSAT_RETURN_OK;
      }



      ///////////////////////////////////////
      //! PUBLIC ACCESS
    public:
      //! Constructor
      SatelliteRadio(Tasks::Task* task) :
        m_task(task),
        m_uart(NULL) {
        //! Initialise variables
        radio_arg.transmit_freq = 0;
        radio_arg.transmit_power = 0;
        radio_ready.serial_device_check = false;
        radio_ready.radio_active_check = false;
        radio_ready.power_check = false;
        radio_ready.freq_check = false;
        radio_ready.radio_param_check = false;
        radio_ready.data_check = false;
      }

      //! Destructor
      ~SatelliteRadio() {
        Memory::clear(m_uart);
      }

      /////////////////////
      //! Public Functions

      //! Set serial device main parameters
      //! @param[in]  device_name          - serial port device.
      //! @param[in]  baud_rate       - serial port baud rate.
      //! @param[in]  device_timeout  - serial port timeout.
      void setSerialDevice(std::string device_name, uint16_t baud_rate, double device_timeout) {
        //! Set variables
        serial_arg.device_name = device_name;
        serial_arg.baud_rate = baud_rate;
        serial_arg.device_timeout = device_timeout;

        //! Check item of radio checklist
        radio_ready.serial_device_check = true; //! Serial device parameters was set

        //! Inform the user
        m_task->debug(DTR("HumSat Serial device main parameters set."));
      }



      //! Activate HumSat terminal
      //! @return     boolean         - If HumSat terminal was activated properly.
      bool activateRadio() {
        //! Check if it is possible to activate terminal
        if (radio_ready.serial_device_check == true) {    //! Serial device paramenters was set
          if (radio_ready.radio_active_check == false) {  //! Radio has not been initialise yet
              //! Initialise terminal
            if (initialiseHumSatComm(serial_arg.device_name, serial_arg.baud_rate, serial_arg.device_timeout) == HUMSAT_RETURN_ERROR) {
              m_task->err(DTR("HumSat ERROR: Problems activating radio."));
              return false;
            }
          }

          //! Reset radio if it was previously initialise
          terminalReset();

          //! Check item of radio checklist
          radio_ready.radio_active_check = true;    //! Radio has been activated
          radio_ready.power_check = false;          //! Power needs to be set
          radio_ready.freq_check = false;           //! Frequency needs to be set
          radio_ready.data_check = false;           //! Data to be transmitted needs to be set

          //! Inform the user
          m_task->inf(DTR("HumSat Terminal activated/reset OK."));
          return true;
        }
        else {
          //! Inform the user
          m_task->war(DTR("HumSat WARNING: Terminal cannot be activated prior to setting serial device main parameters."));
          return false;
        }
      }



      //! Set power calibration
      //! @param[in]  transmit_power  - HumSat terminal output transmission power.
      //! @return     boolean         - If power was set correctly or not.
      bool setPower(uint16_t transmit_power) {
        //! Debug messages
        m_task->spew("Set Power entered");
        m_task->spew("ORIGINAL Power = %d", radio_arg.transmit_power);
        m_task->spew("FUTURE   Power = %d", transmit_power);

        //! Old Value
        uint16_t old_val = radio_arg.transmit_power;

        //! Set terminal transmit power
        if (setTransmissionPowerComm(transmit_power) == HUMSAT_RETURN_ERROR) {
          radio_arg.transmit_power = old_val;
          m_task->err(DTR("ERROR: HumSat SETCONF: Error setting transmission power."));
          return false;
        }

        //! Set variables (radio_arg.transmit_power)
        if (getTransmitPowerComm() == HUMSAT_RETURN_ERROR) {
          radio_arg.transmit_power = old_val;
          m_task->err(DTR("ERROR: HumSat GETCONF: Error getting transmission power."));
          return false;
        }

        //! Check if it was set correctly
        if (radio_arg.transmit_power != transmit_power) {
          radio_arg.transmit_power = old_val;
          m_task->err(DTR("ERROR: HumSat SETGCONF: Error, transmission power not correct."));
          return false;
        }

        //! Check item of radio checklist
        radio_ready.power_check = true;   //! Power was set

        //! Inform the user
        m_task->debug(DTR("HumSat SETCONF: Setting transmission power OK."));

        return true;
      }

      //! Get power calibration
      //! @return     transmit_power  - HumSat terminal output transmission power.
      uint16_t getPower(void) {
        //! Set variables (radio_arg.transmit_power)
        if (getTransmitPowerComm() == HUMSAT_RETURN_ERROR) {
          m_task->err(DTR("ERROR: HumSat GETCONF: Error getting transmission power."));
        }

        return radio_arg.transmit_power;
      }


      //! Set frequency calibration
      //! @param[in]  transmit_freq   - HumSat terminal output transmission frequency.
      //! @return     boolean         - If frequency was set correctly or not.
      bool setFreq(int32_t transmit_freq) {
        //! Debug messages
        m_task->spew("Set Frequency entered");
        m_task->spew("ORIGINAL Frequency = %d", radio_arg.transmit_freq);
        m_task->spew("FUTURE   Frequency = %d", transmit_freq);

        //! Old Value
        int32_t old_val = radio_arg.transmit_freq;

        //! Set terminal transmit frequency
        if (setTransmissionFreqComm(transmit_freq) == HUMSAT_RETURN_ERROR) {
          radio_arg.transmit_freq = old_val;
          m_task->err(DTR("ERROR: HumSat SETCONF: Error setting central frequency."));
          return false;
        }

        //! Set variables (radio_arg.transmit_freq)
        if (getTransmitFreqComm() == HUMSAT_RETURN_ERROR) {
          radio_arg.transmit_freq = old_val;
          m_task->err(DTR("ERROR: HumSat GETCONF: Error getting transmission frequency."));
          return false;
        }

        //! Check if it was set correctly
        if (radio_arg.transmit_freq != transmit_freq) {
          radio_arg.transmit_freq = old_val;
          m_task->err(DTR("ERROR: HumSat SETGCONF: Error central frequency not correct."));
          return false;
        }

        //! Check item of radio checklist
        radio_ready.freq_check = true;    //! Frequency was set

        //! Inform the user
        m_task->debug(DTR("HumSat SETCONF: Setting transmission frequency OK."));

        return true;
      }

      //! Get frequency calibration
      //! @return     transmit_freq   - HumSat terminal output transmission frequency.
      int32_t getFreq(void) {
        //! Set variables (radio_arg.transmit_power)
        if (getTransmitFreqComm() == HUMSAT_RETURN_ERROR) {
          m_task->err(DTR("ERROR: HumSat GETCONF: Error getting transmission frequency."));
        }

        return radio_arg.transmit_freq;
      }



      //! Set radio main parameters
      //! @param[in]  radio_id        - user amateur call id.
      //! @param[in]  sensor_id       - internal terminal id.
      void setRadioArgs(char radio_id[6], uint16_t sensor_id) {
        //! Set variables
        radio_arg.radio_id = radio_id;
        radio_arg.sensor_id = sensor_id;

        //! Check item of radio checklist
        radio_ready.radio_param_check = true;     //! Radio and sensor ID was set

        //! Inform the user
        m_task->debug(DTR("Radio main parameters set."));
      }

      //! Sends HumSat message frame to terminal
      //! @param[in]  user_data       - user data to be sent.
      //! @param[in]  data_length     - user data length.
      //! @return     boolean         - If message was set correctly to be sent or not.
      bool sendMessage(uint8_t * user_data, uint8_t data_length) {
        //! Check if it is possible to send the data
        if (radio_ready.radio_param_check == true) {  //! Radio and sensor ID was set
            //! Codify data
          if (generateMessageFrame(user_data, data_length, radio_arg.sensor_id, radio_arg.radio_id) == HUMSAT_RETURN_ERROR) {
            m_task->err(DTR("ERROR: HumSat GENERATE_DATA: Error generating HumSat paket."));
            return false;
          }

          //! Send data to terminal
          if (sendMessageFrame(PACKET_PREAMBLE_LENGTH, PACKET_NUMBER_OF_COPIES) == HUMSAT_RETURN_ERROR) {
            m_task->err(DTR("ERROR: HumSat SEND_DATA: Error generating terminal paket."));
            return false;
          }

          //! Check item of radio checklist
          radio_ready.data_check = true;            //! Data to be transmitted was set

          //! Inform the user
          m_task->debug(DTR("Data sent to HumSat terminal to be transmitted OK."));
          return true;
        }
        else {
          //! Inform the user
          m_task->war(DTR("HumSat WARNING: Before sending data radio and sensor ID need to be set."));
          return false;
        }
      }

      //! Transmits HumSat message
      //! @return     boolean         - If message was transmitted or not.
      bool transmitMessage(void) {
        //! Check if it is possible to transmit the data
        if (radio_ready.radio_active_check == true) { //! Radio is activated
          if (radio_ready.power_check == true) {      //! Power was set
            if (radio_ready.freq_check == true) {     //! Frequency was set
              if (radio_ready.data_check == true) {   //! Data to be transmitted was set
                if (transmitMessageComm() == HUMSAT_RETURN_ERROR) {
                  m_task->err(DTR("ERROR: HumSat TRANSMIT_DATA: Error transmitting data."));
                  return false;
                }

                //! Check item of radio checklist
                radio_ready.data_check = false;       //! Data has been transmitted, new one has to be set

                //! Inform the user
                m_task->inf(DTR("Data transmitted by HumSat radio OK."));
                return true;
              }
              else {
                //! Inform the user
                m_task->war(DTR("HumSat WARNING: Before transmitting, data needs to be set."));
                return false;
              }
            }
            else {
              //! Inform the user
              m_task->war(DTR("HumSat WARNING: Before transmitting, output frequency needs to be set."));
              return false;
            }
          }
          else {
            //! Inform the user
            m_task->war(DTR("HumSat WARNING: Before transmitting, output power needs to be set."));
            return false;
          }
        }
        else {
          //! Inform the user
          m_task->war(DTR("HumSat WARNING: Before transmitting, radio has to be activated."));
          return false;
        }
      }
    };
  }
}

#endif
