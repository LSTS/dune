//***************************************************************************
// Copyright 2007-2015 OceanScan - Marine Systems & Technology, Lda.        *
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
// Author: Ricardo Martins                                                  *
//***************************************************************************

#ifndef SENSORS_KLEIN3500_CONSTANTS_HPP_INCLUDED_
#define SENSORS_KLEIN3500_CONSTANTS_HPP_INCLUDED_

// DUNE headers.
#include <DUNE/DUNE.hpp>

namespace Sensors
{
  namespace Klein3500
  {
    //! Header types.
    enum HeaderType
    {
      //! UUV 3500 Low-frequency.
      HT_LF = 3501,
      //! UUV 3500 High-frequency
      HT_HF = 3502
    };

    //! Configuration bits.
    enum ConfigBit
    {
      //! Low-frequency port channel.
      CFG_CHAN1  = 0x00000001,
      //! Low-frequency starboard channel.
      CFG_CHAN2  = 0x00000002,
      //! High-frequency port channel.
      CFG_CHAN3  = 0x00000004,
      //! High-frequency starboard channel.
      CFG_CHAN4  = 0x00000008,
      //! Bathymetry channel.
      CFG_BT     = 0x000000F3,
      //! Master fish control.
      CFG_MASTER = 0x80000000
    };

    //! Ping types.
    enum PingType
    {
      //! Low-frequency sidescan.
      PT_LF = 21,
      //! High-frequency sidescan.
      PT_HF = 22,
      //! Bathymetric raw data.
      PT_BT = 23
    };

    //! Possible outcomes when getting data pages.
    enum GetDataPageOutcome
    {
      //! Server reported page returned successfully.
      GDPS_SUCCESS       = 1,
      //! Server reported no data page available/ready yet.
      GDPS_NO_DATA       = 0,
      //! Server reported data page no longer available.
      GDPS_ERROR_OLD     = -1,
      //! Server reported invalid page version.
      GDPS_ERROR_VERSION = -2
    };

    //! Sidescan commands.
    enum Commands
    {
      //! Start slave connection.
      CMD_START_SLAVE        = 10,
      //! End slave connection.
      CMD_END_SLAVE          = 11,
      //! Open connection to sonar.
      CMD_OPEN_SONAR         = 201,
      //! Close connection to sonar.
      CMD_CLOSE_SONAR        = 202,
      //! Set range.
      CMD_SET_RANGE          = 203,
      //! Get range.
      CMD_GET_RANGE          = 204,
      //! Get speed of sound.
      CMD_SET_SSOUND         = 207,
      //! Resolution mode.
      CMD_SET_RES_MODE       = 209,
      //! Send fish command.
      CMD_SEND_FISH_CMD      = 213,
      //! Set standby mode.
      CMD_SET_STAND_BY       = 216,
      //! Set date/time.
      CMD_SET_TIME           = 227,
      //! Set despeckle switch.
      CMD_SET_DESP_SW        = 228,
      //! Inquire sonar capabilities.
      CMD_INQ_CAPS           = 230,
      //! Get data page.
      CMD_GET_DATA_PAGE2     = 301,
      //! Set framing mode.
      CMD_SET_FRAME_MODE     = 406,
      //! Set recording mode
      CMD_SET_RECORDING_MODE = 466,
      //! Set recording file path.
      CMD_SET_FILE_PATH      = 475,
      //! Set recording file format.
      CMD_SET_FILE_FORMAT    = 468,
      //! Set number of pings per recorded file.
      CMD_SET_PINGS_PER_FILE = 470,
      CMD_SET_NEW_FILE       = 472,
      //! Set recording file prefix.
      CMD_SET_FILE_PREFIX    = 473
    };

    //! Framing mode.
    enum FramingMode
    {
      //! Low-frequency sidescan.
      FM_LFSS = 0x01,
      //! High-frequency sidescan.
      FM_HFSS = 0x02,
      //! Low-frequency and high-frequency sidescan.
      FM_LFSS_HFSS = FM_LFSS | FM_HFSS
    };

    enum Offset
    {
      OFS_PAGE_VERSION     = 8,
      OFS_CONFIG           = 12,
      OFS_PING_NUMBER      = 16,
      OFS_NUM_SAMPLES      = 20,
      OFS_BEAMS_TO_DISPLAY = 24,
      OFS_ERROR_FLAGS      = 28,
      OFS_RANGE            = 32,
      OFS_SPEED_FISH       = 36,
      OFS_SPEED_SOUND      = 40,
      OFS_PING_INTERVAL    = 368
    };

    //! SDF ping marker.
    static const uint32_t c_ping_mark = 0xffffffff;
    //! Maximum packet size.
    static const size_t c_max_packet_size = 256 * 1024;
    //! Command offset.
    static const size_t c_offs_command = 0;
    //! Size offset.
    static const size_t c_offs_size = 4;
    //! Handle offset.
    static const size_t c_offs_handle = 8;
    //! Data offset.
    static const size_t c_offs_data = 12;
  }
}

#endif
