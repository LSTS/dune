//***************************************************************************
// Copyright 2007-2022 Universidade do Porto - Faculdade de Engenharia      *
// Laboratório de Sistemas e Tecnologia Subaquática (LSTS)                  *
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
// Author: Raúl Sáez                                                        *
//***************************************************************************

#ifndef TRANSPORTS_SEATRAC_DATA_TYPES_HPP_INCLUDED_
#define TRANSPORTS_SEATRAC_DATA_TYPES_HPP_INCLUDED_

#define MESSAGE_NUMBER (0x77 +0x1)
#define MAX_MESSAGE_ERRORS 5
#define MAX_PACKET_LEN 31
#define MAX_MESSAGE_PERIOD 30
#define MIN_SOUND_SPEED 1400
//! Defines the minimum message length without preamble nor postamble
#define MIN_MESSAGE_LENGTH 6

namespace Transports
{
  namespace Seatrac
  {
    using DUNE_NAMESPACES;

    //! Input Timeout (s).
    static const double c_input_tout =  5;
    //! The bitrate of acoustic communication (bits/second).
    static const double c_acoustic_bitrate =  100;
    //! Message preamble
    static const char c_preamble = '$';
    //! Maximum buffer size.
    static const int c_bfr_size = 256;

    //! States of the internal SM.
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
    enum CommandID
    {
      CID_SYS_ALIVE = 0x01,
      CID_SYS_INFO = 0x02,
      CID_SYS_REBOOT = 0x03,
      CID_SYS_ENGINEERING = 0x04,
      CID_PROG_INIT = 0x0D,
      CID_PROG_BLOCK = 0x0E,
      CID_PROG_UPDATE = 0x0F,
      CID_STATUS = 0x10,
      CID_STATUS_CFG_GET = 0x11,
      CID_STATUS_CFG_SET = 0x12,
      CID_SETTINGS_GET = 0x15,
      CID_SETTINGS_SET = 0x16,
      CID_SETTINGS_LOAD = 0x17,
      CID_SETTINGS_SAVE = 0x18,
      CID_SETTINGS_RESET = 0x19,
      CID_CAL_ACTION = 0x20,
      CID_AHRS_CAL_GET = 0x21,
      CID_AHRS_CAL_SET = 0x22,
      CID_XCVR_ANALYSE = 0x30,
      CID_XCVR_TX_MSG = 0x31,
      CID_XCVR_RX_ERR = 0x32,
      CID_XCVR_RX_MSG = 0x33,
      CID_XCVR_RX_REQ = 0x34,
      CID_XCVR_RX_RESP = 0x35,
      CID_XCVR_RX_UNHANDLED = 0x37,
      CID_XCVR_USBL = 0x38,
      CID_XCVR_FIX = 0x39,
      CID_XCVR_STATUS = 0x3A,
      CID_PING_SEND = 0x40,
      CID_PING_REQ = 0x41,
      CID_PING_RESP = 0x42,
      CID_PING_ERROR = 0x43,
      CID_ECHO_SEND = 0x48,
      CID_ECHO_REQ = 0x49,
      CID_ECHO_RESP = 0x4A,
      CID_ECHO_ERROR = 0x4B,
      CID_NAV_QUERY_SEND = 0x50,
      CID_NAV_QUERY_REQ = 0x51,
      CID_NAV_QUERY_RESP = 0x52,
      CID_NAV_ERROR = 0x53,
      CID_NAV_REF_POS_SEND  = 0x54,
      CID_NAV_REF_POS_UPDATE = 0x55,
      CID_NAV_BEACON_POS_SEND = 0x56,
      CID_NAV_BEACON_POS_UPDATE = 0x57,
      CID_DAT_SEND = 0x60,
      CID_DAT_RECEIVE = 0x61,
      CID_DAT_ERROR = 0x63,
      CID_DAT_QUEUE_SET = 0x64,
      CID_DAT_QUEUE_CLR = 0x65,
      CID_DAT_QUEUE_STATUS= 0x66,
      CID_DEX_CLOSE = 0x70,
      CID_DEX_DEBUG = 0x71,
      CID_DEX_ENQUEUE = 0x72,
      CID_DEX_OPEN = 0x73,
      CID_DEX_RESET = 0x74,
      CID_DEX_SEND = 0x75,
      CID_DEX_SOCKETS = 0x76,
      CID_DEX_RECEIVE = 0x77
    };

    // Beacon Type
    enum BeaconType_E
    {
      BT_X110 = 0x34B,
      BT_X150 = 0x31B
    };


    // Status Output Mode
    enum StatusMode_E
    {
      STATUS_MODE_MANUAL = 0x0,
      STATUS_MODE_1HZ = 0x1,
      STATUS_MODE_2HZ5 = 0x2,
      STATUS_MODE_5HZ = 0x3,
      STATUS_MODE_10HZ = 0x4,
      STATUS_MODE_25HZ = 0x5
    };

    // Status output flags
    enum StatusOutputFlags_E
    {
      ENVIRONMENT_FLAG = 0x1,
      ATTITUDE_FLAG = 0x2,
      MAG_CAL_FLAG = 0x4,
      ACC_CAL_FLAG = 0x8,
      AHRS_RAW_DATA_FLAG = 0x10,
      AHRS_COMP_DATA_FLAG = 0x20
    };

    // Control environment flags
    enum ControlEnvFlags_E
    {
      AUTO_VOS_FLAG = 0x1,
      AUTO_PRESSURE_OFS_FLAG = 0x2
    };

    // Control AHRS flags
    enum ControlAhrsFlags_E
    {
      AUTO_CAL_MAG_FLAG = 0x1
    };

    // Control XCVR flags
    enum ControlXcvrFlags_E {
      USBL_USE_AHRS_FLAG = 0x1,
      XCVR_POSFLT_ENABLE_FLAG = 0x2,
      XCVR_USBL_MSGS_FLAG = 0x20,
      XCVR_FIX_MSGS_FLAG = 0x40,
      XCVR_DIAG_MSGS_FLAG = 0x80
    };

    // Msg status
    enum AmsgType_E
    {
      MSG_OWAY = 0x0,
      MSG_OWAYU = 0x1,
      MSG_REQ = 0x2,
      MSG_RESP = 0x3,
      MSG_REQU = 0x4,
      MSG_RESPU = 0x5,
      MSG_REQX = 0x6,
      MSG_RESPX = 0x7,
      MSG_UNKNOWN = 0xFF
    };

    enum CST_E
    {
      // General status Codes
      CST_OK = 0x00,
      CST_FAIL = 0x01,
      CST_EEPROM_ERROR = 0x03,
      // Command Processor status Codes
      CST_CMD_PARAM_MISSING = 0x04,
      CST_CMD_PARAM_INVALID = 0x05,
      // Firmware Programming status Codes
      CST_PROG_FLASH_ERROR = 0x0A,
      CST_PROG_FIRMWARE_ERROR = 0x0B,
      CST_PROG_SECTION_ERROR = 0x0C,
      CST_PROG_LENGTH_ERROR = 0x0D,
      CST_PROG_DATA_ERROR = 0x0E,
      CST_PROG_CHECKSUM_ERROR = 0x0F,
      // Acoustic Transceiver status Codes
      CST_XCVR_BUSY = 0x30,
      CST_XCVR_ID_REJECTED = 0x31,
      CST_XCVR_CSUM_ERROR = 0x32,
      CST_XCVR_LENGTH_ERROR = 0x33,
      CST_XCVR_RESP_TIMEOUT = 0x34,
      CST_XCVR_RESP_ERROR = 0x35,
      CST_XCVR_RESP_WRONG = 0x36,
      CST_XCVR_PLOAD_ERROR = 0x37,
      CST_XCVR_STATE_STOPPED = 0x3A,
      CST_XCVR_STATE_IDLE = 0x3B,
      CST_XCVR_STATE_TX = 0x3C,
      CST_XCVR_STATE_REQ = 0x3D,
      CST_XCVR_STATE_RX = 0x3E,
      CST_XCVR_STATE_RESP = 0x3F,
      // DEX Protocol status Codes
      CST_DEX_SOCKET_ERROR = 0x70,
      CST_DEX_RX_SYNC = 0x71,
      CST_DEX_RX_DATA = 0x72,
      CST_DEX_RX_SEQ_ERROR = 0x73,
      CST_DEX_RX_MSG_ERROR = 0x74,
      CST_DEX_REQ_ERROR = 0x75,
      CST_DEX_RESP_TMO_ERROR = 0x76,
      CST_DEX_RESP_MSG_ERROR = 0x77,
      CST_DEX_RESP_REMOTE_ERROR = 0x78
    };

    struct Ticket
    {
      //! IMC source address.
      uint16_t imc_sid;
      //! IMC source entity.
      uint8_t imc_eid;
      //! Sequence number.
      uint16_t seq;
      //! Destination modem address.
      uint16_t addr;
      //! Wait for ack.
      bool ack;
    };

    struct MacAddr_T
    {
      union
      {
        uint64_t Addr;
        uint8_t bytes[6];
      };
    };

    struct IpAddr_T
    {
      union
      {
        uint32_t Addr;
        uint8_t bytes[4];
      };
    };

    struct AhrsCal_t
    {
      int16_t acc_min_x;
      int16_t acc_min_y;
      int16_t acc_min_z;
      int16_t acc_max_x;
      int16_t acc_max_y;
      int16_t acc_max_z;
      uint8_t mag_valid;
      float mag_hard_x;
      float mag_hard_y;
      float mag_hard_z;
      float mag_soft_x;
      float mag_soft_y;
      float mag_soft_z;
      float mag_field;
      float mag_error;
      int16_t gyro_offset_x;
      int16_t gyro_offset_y;
      int16_t gyro_offset_z;
    };

    struct Hardware_t
    {
      uint16_t part_number;
      uint8_t part_rev;
      uint32_t serial_number;
      uint16_t flags_sys;
      uint16_t flags_user;
    };

    struct Firmware_t
    {
      uint8_t valid;
      uint16_t part_number;
      uint8_t version_maj;
      uint8_t version_min;
      uint16_t version_build;
      uint32_t checksum;
    };

    struct Acofix_t
    {
      uint8_t dest_id;
      uint8_t src_id;
      uint8_t flags;
      uint8_t amsgtype_e;
      int16_t attitude_yaw;
      int16_t attitude_pitch;
      int16_t attitude_roll;
      int16_t depth_local;
      uint16_t vos;
      int16_t rssi;
      // Range fields.
      uint32_t range_count;
      uint32_t range_time;
      uint16_t range_dist;
      // USBL Fields.
      uint8_t usbl_channels;
      std::vector<int16_t> usbl_rssi;
      int16_t usbl_azimuth;
      int16_t usbl_elevation;
      int16_t usbl_fit_error;
      // Position Fields.
      int16_t position_easting;
      int16_t position_northing;
      int16_t position_depth;
      uint8_t outputflags_list[4];

      void
      outputFlagsComp(void)
      {
        outputflags_list[0] = (0x01 & flags);
        outputflags_list[1] = (0x02 & flags);
        outputflags_list[2] = (0x04 & flags);
        outputflags_list[3] = (0x08 & flags);
      }
    };
  }
}

#endif
