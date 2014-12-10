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
// Author: Ricardo Martins                                                  *
//***************************************************************************

#ifndef SENSORS_EDGETECH_2205_CONSTANTS_HPP_INCLUDED_
#define SENSORS_EDGETECH_2205_CONSTANTS_HPP_INCLUDED_

// DUNE headers.
#include <DUNE/DUNE.hpp>

namespace Sensors
{
  namespace Edgetech2205
  {
    //! Command types.
    enum CommandType
    {
      //! Set properties.
      COMMAND_TYPE_SET = 0,
      //! Retrieve information.
      COMMAND_TYPE_GET = 1,
      //! Reply to COMMAND_TYPE_GET.
      COMMAND_TYPE_REPLY = 2,
      //! Command cannot be executed.
      COMMAND_TYPE_ERROR = 3
    };

    //! Subsystem identifiers.
    enum SubsystemId
    {
      //! Low-frequency sidescan.
      SUBSYS_SSL = 20,
      //! High-frequency sidescan.
      SUBSYS_SSH = 21
    };

    //! Channel identifiers.
    enum ChannelId
    {
      //! Port.
      CHAN_PORT = 0,
      //! Starboard.
      CHAN_STARBOARD = 1
    };

    //! Trigger modes.
    enum TriggerMode
    {
      //! Internal trigger.
      TRIG_MODE_INTERNAL = 0,
      //! External trigger.
      TRIG_MODE_EXTERNAL = 1,
      //! Coupled mode.
      TRIG_MODE_COUPLED = 2
    };

    //! Message type identifiers.
    enum MessageIds
    {
      MSG_ID_SYSTEM_TIME = 22,
      MSG_ID_SYSTEM_TIME_DELTA = 23,
      //! Shutdown system.
      MSG_ID_SYSTEM_SHUTDOWN = 25,
      MSG_ID_ALIVE = 41,
      //! Ping trace.
      MSG_ID_SONAR_DATA = 80,
      //! Enable/disable output of ping traces.
      MSG_ID_DATA_ACTIVE = 83,
      //! Enable/disable ping operation.
      MSG_ID_PING = 120,
      MSG_ID_PING_GAIN = 121,
      //! Trigger mode.
      MSG_ID_PING_TRIGGER = 125,
      //! Ping rate based on ping range.
      MSG_ID_PING_RANGE = 128,
      MSG_ID_PING_AUTOSEL_MODE = 133,
      //! Ping coupling parameters.
      MSG_ID_PING_COUPLING_PARAMS = 129,
      //! Automatic Gain Control.
      MSG_ID_ADC_AGC = 141
    };

    enum SonarDataIndices
    {
      SDATA_IDX_TIME = 0,
      SDATA_IDX_PING_NUMBER = 8,
      SDATA_IDX_MSB = 16,
      SDATA_IDX_VALIDITY = 30,
      SDATA_IDX_DATA_FORMAT = 34,
      SDATA_IDX_LONGITUDE = 80,
      SDATA_IDX_LATITUDE = 84,
      SDATA_IDX_COORDINATE_UNITS = 88,
      SDATA_IDX_ANNOTATION_STRING = 90,
      SDATA_IDX_DATA_SAMPLES  = 114,
      SDATA_IDX_SAMPLING_INTERVAL  = 116,
      SDATA_IDX_PULSE_START_FREQ = 126,
      SDATA_IDX_PULSE_END_FREQ = 128,
      SDATA_IDX_DEPTH = 136,
      SDATA_IDX_ALTITUDE = 144,
      SDATA_IDX_CPU_YEAR = 156,
      SDATA_IDX_CPU_DAY = 158,
      SDATA_IDX_CPU_HOUR = 160,
      SDATA_IDX_CPU_MINUTES = 162,
      SDATA_IDX_CPU_SECONDS = 164,
      SDATA_IDX_CPU_TIME_BASIS = 166,
      SDATA_IDX_WEIGHT_FACTOR = 168,
      SDATA_IDX_HEADING = 172,
      SDATA_IDX_PITCH = 174,
      SDATA_IDX_ROLL = 176,
      SDATA_IDX_NMEA_HOUR = 186,
      SDATA_IDX_NMEA_MINUTES = 188,
      SDATA_IDX_NMEA_SECONDS = 190,
      SDATA_IDX_COURSE = 192,
      SDATA_IDX_SPEED = 194,
      SDATA_IDX_MILLISECOND_TODAY = 200,
      SDATA_IDX_TRACE_DATA = 240
    };

    //! Channel count.
    static const size_t c_channel_count = 2;
    //! Subsystem count.
    static const size_t c_subsys_count = 2;
    //! First byte of the start of header marker.
    static const uint8_t c_marker0 = 0x01;
    //! Second byte of the start of header marker.
    static const uint8_t c_marker1 = 0x16;
    //! Protocol version.
    static const uint8_t c_version = 13;
    //! Offset of the first sidescan channel.
    static const unsigned c_subsys_ss_offset = SUBSYS_SSL;
  }
}

#endif
