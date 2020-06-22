//***************************************************************************
// Copyright 2007-2020 Universidade do Porto - Faculdade de Engenharia      *
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
// Author: Paulo Dias                                                       *
//***************************************************************************

#ifndef CONTROL_PIONEER_PROTOCOL_COMMANDS_HPP_INCLUDED_
#define CONTROL_PIONEER_PROTOCOL_COMMANDS_HPP_INCLUDED_

// ISO C++ 98 headers.
#include <string>
#include <cstddef>

// DUNE headers.
#include <DUNE/Config.hpp>

namespace Control
{
  namespace Pioneer
  {
    namespace ProtocolCommands
    {
      enum Pioneer_Msg_Version
      {
        PIONEER_CMD_VERSION_1 = 1,
        PIONEER_CMD_VERSION_2 = 2,
      };

      enum Pioneer_Reply_Version_1_Msg_Code
      {
        PIONEER_REPLY_VERSION_1_ACK = 'a',
        PIONEER_REPLY_VERSION_1_PING = 'P',
        PIONEER_REPLY_VERSION_1_GET_CAMERA = 'V',
      };

      enum Pioneer_Cmd_Version_1_Msg_Code
      {
        PIONEER_CMD_VERSION_1_MOTION_INPUT = 'j',
        PIONEER_CMD_VERSION_1_SET_LIGHTS = 'l',
        PIONEER_CMD_VERSION_1_PING = 'p',
        PIONEER_CMD_VERSION_1_START_RECORDING = 'r',
        PIONEER_CMD_VERSION_1_STOP_RECORDING = 'R',
        PIONEER_CMD_VERSION_1_START_COMPASS_CALIBRATION = 'i',
        PIONEER_CMD_VERSION_1_CANCEL_COMPASS_CALIBRATION = 'I',
        PIONEER_CMD_VERSION_1_SAVE_COMPASS_CALIBRATION = 'c',
        PIONEER_CMD_VERSION_1_USER_GEO_LOCATION = 'g',
        PIONEER_CMD_VERSION_1_WATCHDOG = 'w',
        PIONEER_CMD_VERSION_1_AUTO_HEADING_ON = 'h',
        PIONEER_CMD_VERSION_1_AUTO_HEADING_OFF = 'H',
        PIONEER_CMD_VERSION_1_AUTO_DEPTH_ON = 'd',
        PIONEER_CMD_VERSION_1_AUTO_DEPTH_OFF = 'D',
        PIONEER_CMD_VERSION_1_AUTO_DEPTH_STEP = 'a',
        PIONEER_CMD_VERSION_1_AUTO_HEADING_STEP = 'A',
        PIONEER_CMD_VERSION_1_SET_SYSTEM_TIME = 't',
        PIONEER_CMD_VERSION_1_SET_CAMERA = 'v',
        PIONEER_CMD_VERSION_1_GET_CAMERA = 'V',
      };

      enum Pioneer_SubCmd_Version_1_Set_Camera_Msg_Code
      {
        PIONEER_SUBCMD_VERSION_1_SET_CAMERA_EXPOSURE = 'e',
        PIONEER_SUBCMD_VERSION_1_SET_CAMERA_WHITEBALANCE = 'w',
        PIONEER_SUBCMD_VERSION_1_SET_CAMERA_HUE = 'h',
        PIONEER_SUBCMD_VERSION_1_SET_CAMERA_BITRATE = 'b',
      };

      enum Pioneer_SubCmd_Version_1_Get_Camera_Msg_Code
      {
        PIONEER_CMD_VERSION_1_GET_CAMERA_PARAMETERS = 'a',
      };

      enum Pioneer_Reply_Version_2_Msg_Code
      {
        PIONEER_REPLY_VERSION_2_ACK = 'a',
        PIONEER_REPLY_VERSION_2_PING = 'P',
        PIONEER_REPLY_VERSION_2_GET_CAMERA = 'V',
      };

      enum Pioneer_Cmd_Version_2_Msg_Code
      {
        PIONEER_CMD_VERSION_2_MOTION_INPUT = 'j',
        PIONEER_CMD_VERSION_2_MOTION_INPUT_TILT = 'J',
        PIONEER_CMD_VERSION_2_SET_LIGHTS = 'l',
        PIONEER_CMD_VERSION_2_PING = 'p',
        PIONEER_CMD_VERSION_2_START_RECORDING = 'r',
        PIONEER_CMD_VERSION_2_STOP_RECORDING = 'R',
        PIONEER_CMD_VERSION_2_START_COMPASS_CALIBRATION = 'i',
        PIONEER_CMD_VERSION_2_CANCEL_COMPASS_CALIBRATION = 'I',
        PIONEER_CMD_VERSION_2_SAVE_COMPASS_CALIBRATION = 'c',
        PIONEER_CMD_VERSION_2_USER_GEO_LOCATION = 'g',
        PIONEER_CMD_VERSION_2_WATCHDOG = 'w',
        PIONEER_CMD_VERSION_2_AUTO_HEADING_ON = 'h',
        PIONEER_CMD_VERSION_2_AUTO_HEADING_OFF = 'H',
        PIONEER_CMD_VERSION_2_AUTO_DEPTH_ON = 'd',
        PIONEER_CMD_VERSION_2_AUTO_DEPTH_OFF = 'D',
        PIONEER_CMD_VERSION_2_AUTO_DEPTH_STEP = 'a',
        PIONEER_CMD_VERSION_2_AUTO_HEADING_STEP = 'A',
        PIONEER_CMD_VERSION_2_SET_SYSTEM_TIME = 't',
        PIONEER_CMD_VERSION_2_SET_WATER_DENSITY = 'W',
        PIONEER_CMD_VERSION_2_TAKE_STILL_PICTURE = 's',
        PIONEER_CMD_VERSION_2_SET_CAMERA = 'v',
        PIONEER_CMD_VERSION_2_GET_CAMERA = 'V',
      };

      enum Pioneer_SubCmd_Version_2_Set_Camera_Msg_Code
      {
        PIONEER_SUBCMD_VERSION_2_SET_CAMERA_EXPOSURE = 'e',
        PIONEER_SUBCMD_VERSION_2_SET_CAMERA_WHITEBALANCE = 'w',
        PIONEER_SUBCMD_VERSION_2_SET_CAMERA_HUE = 'h',
        PIONEER_SUBCMD_VERSION_2_SET_CAMERA_BITRATE = 'b',
        PIONEER_SUBCMD_VERSION_2_SET_CAMERA_FRAMERATE = 'f',
        PIONEER_SUBCMD_VERSION_2_SET_CAMERA_RESOLUTION = 'r',
      };

      enum Pioneer_SubCmd_Version_2_Get_Camera_Msg_Code
      {
        PIONEER_CMD_VERSION_2_GET_CAMERA_PARAMETERS = 'a',
      };

      // Version: 1 commands

      struct __attribute__((__packed__)) ReplyVersion1Ack
      {
        uint8_t command_type = 'a';
      };

      struct __attribute__((__packed__)) CmdVersion1MotionInput
      {
        uint8_t command_type = 'j';
        //! "upper_limit": 1,
        //! "lower_limit": -1
        float surge_motion_input = 0.0f;
        //! "upper_limit": 1,
        //! "lower_limit": -1
        float sway_motion_input = 0.0f;
        //! "upper_limit": 1,
        //! "lower_limit": -1
        float heave_motion_input = 0.0f;
        //! "upper_limit": 1,
        //! "lower_limit": -1
        float yaw_motion_input = 0.0f;
        //! "upper_limit": 1,
        //! "lower_limit": 0
        float slow_input = 0.0f;
        //! "upper_limit": 1,
        //! "lower_limit": 0
        float boost_input = 0.0f;
      };

      struct __attribute__((__packed__)) CmdVersion1SetLights
      {
        uint8_t command_type = 'l';
        //! "upper_limit": 255,
        //! "lower_limit": 0
        uint8_t brightness_upper = 0;
        //! "upper_limit": 255,
        //! "lower_limit": 0
        uint8_t brightness_lower = 0;
      };

      struct __attribute__((__packed__)) CmdVersion1Ping
      {
        //! "expected_reply": "P"
        uint8_t command_type = 'p';
      };

      struct __attribute__((__packed__)) ReplyVersion1Ping
      {
        //! "reply from": "p"
        uint8_t command_type = 'P';
      };

      struct __attribute__((__packed__)) CmdVersion1StartRecording
      {
        uint8_t command_type = 'r';
      };

      struct __attribute__((__packed__)) CmdVersion1StopRecording
      {
        uint8_t command_type = 'R';
      };

      struct __attribute__((__packed__)) CmdVersion1StartCompassCalibration
      {
        uint8_t command_type = 'i';
      };

      struct __attribute__((__packed__)) CmdVersion1CancelCompassCalibration
      {
        uint8_t command_type = 'I';
      };

      struct __attribute__((__packed__)) CmdVersion1SaveCompassCalibration
      {
        uint8_t command_type = 'c';
      };

      struct __attribute__((__packed__)) CmdVersion1UserGeoLocation
      {
        uint8_t command_type = 'g';
        //! "description": "longitude that is included in the log file in degrees"
        double longitude = 0.0;
        //! "description": "latitude that is included in the log file in degrees"
        double latitude = 0.0;
      };

      struct __attribute__((__packed__)) CmdVersion1Watchdog
      {
        uint8_t command_type = 'w';
        //! "description": "time in seconds since connected to drone"
        int16_t connection_duration = 0;
      };

      struct __attribute__((__packed__)) CmdVersion1AutoHeadingOn
      {
        uint8_t command_type = 'h';
      };

      struct __attribute__((__packed__)) CmdVersion1AutoHeadingOff
      {
        uint8_t command_type = 'H';
      };

      struct __attribute__((__packed__)) CmdVersion1AutoDepthOn
      {
        uint8_t command_type = 'd';
      };

      struct __attribute__((__packed__)) CmdVersion1AutoDepthOff
      {
        uint8_t command_type = 'D';
      };

      struct __attribute__((__packed__)) CmdVersion1AutoDepthStep
      {
        uint8_t command_type = 'a';
        //! "description": " 1 for up, -1 for down"
        int16_t direction = 0;
      };

      struct __attribute__((__packed__)) CmdVersion1AutoHeadingStep
      {
        uint8_t command_type = 'A';
        //! "description": "1 for up, -1 for down"
        int16_t direction = 0;
      };

      struct __attribute__((__packed__)) CmdVersion1SetSystemTime
      {
        //! "description": "set the system time on the on-board computer",
        //! "expected_reply": "a",
        uint8_t command_type = 't';
        int32_t unix_timestamp = 0;
      };

      struct __attribute__((__packed__)) CmdVersion1SetCameraExposure
      {
        //! "expected_reply": "a",
        uint8_t command_type = 'v';
        uint8_t command_subtype = 'e';
        //! "description": "1 = 1/1000th of a second, 5 = 1/200th of a second. Valid values are in the range <1, 5000>"
        int32_t exposure_value = 0;
      };

      struct __attribute__((__packed__)) CmdVersion1SetCameraWhitebalance
      {
        //! "expected_reply": "a",
        uint8_t command_type = 'v';
        uint8_t command_subtype = 'w';
        //! "description": "valid values are in the range <2800, 9300>"
        int32_t whitebalance_value = 0;
      };

      struct __attribute__((__packed__)) CmdVersion1SetCameraHue
      {
        //! "expected_reply": "a",
        uint8_t command_type = 'v';
        uint8_t command_subtype = 'h';
        //! "description": "valid values are in the range <-40, 40>"
        int32_t hue_value = 0;
      };

      struct __attribute__((__packed__)) CmdVersion1SetCameraBitrate
      {
        //! "expected_reply": "a",
        uint8_t command_type = 'v';
        uint8_t command_subtype = 'b';
        //! "description": "set camera bitrate in bits. Valid values are in range <1 000 000, 16 000 000> "
        int32_t bitrate_value = 0;
      };

      struct __attribute__((__packed__)) CmdVersion1GetCameraParameters
      {
        uint8_t command_type = 'V';
        uint8_t command_subtype = 'a';
      };

      struct __attribute__((__packed__)) ReplyVersion1GetCameraParameters
      {
        uint8_t command_type = 'V';
        uint8_t command_subtype = 'a';
        //! "description": "a char describing what camera parameters were returned, 'a' for all parameters"
        uint8_t parameter = 0;
        int32_t camera_bitrate = 0;
        int32_t camera_exposure = 0;
        int32_t camera_whitebalance = 0;
        int32_t camera_hue = 0;
      };

      // Version: 2 commands

      struct __attribute__((__packed__)) ReplyVersion2Ack
      {
        uint8_t command_type = 'a';
      };

      struct __attribute__((__packed__)) CmdVersion2MotionInput
      {
        uint8_t command_type = 'j';
        //! "upper_limit": 1,
        //! "lower_limit": -1
        float surge_motion_input = 0.0f;
        //! "upper_limit": 1,
        //! "lower_limit": -1
        float sway_motion_input = 0.0f;
        //! "upper_limit": 1,
        //! "lower_limit": -1
        float heave_motion_input = 0.0f;
        //! "upper_limit": 1,
        //! "lower_limit": -1
        float yaw_motion_input = 0.0f;
        //! "upper_limit": 1,
        //! "lower_limit": 0
        float slow_input = 0.0f;
        //! "upper_limit": 1,
        //! "lower_limit": 0
        float boost_input = 0.0f;
      };

      struct __attribute__((__packed__)) CmdVersion2MotionInputTilt
      {
        uint8_t command_type = 'J';
        //! "upper_limit": 1,
        //! "lower_limit": -1
        float surge_motion_input = 0.0f;
        //! "upper_limit": 1,
        //! "lower_limit": -1
        float sway_motion_input = 0.0f;
        //! "upper_limit": 1,
        //! "lower_limit": -1
        float heave_motion_input = 0.0f;
        //! "upper_limit": 1,
        //! "lower_limit": -1
        float yaw_motion_input = 0.0f;
        //! "upper_limit": 1,
        //! "lower_limit": 0
        float slow_input = 0.0f;
        //! "upper_limit": 1,
        //! "lower_limit": 0
        float boost_input = 0.0f;
        //! "upper_limit": 1,
        //! "lower_limit": -1,
        //! "description": "Speed input for the camera tilt angle. 1 for max up, -1 for max down, 0 for stop."
        float tilt_speed_input = 0.0f;
      };

      struct __attribute__((__packed__)) CmdVersion2SetLights
      {
        uint8_t command_type = 'l';
        //! "upper_limit": 255,
        //! "lower_limit": 0
        uint8_t brightness_upper = 0;
        //! "upper_limit": 255,
        //! "lower_limit": 0
        uint8_t brightness_lower = 0;
      };

      struct __attribute__((__packed__)) CmdVersion2Ping
      {
        //! "expected_reply": "P"
        uint8_t command_type = 'p';
      };

      struct __attribute__((__packed__)) ReplyVersion2Ping
      {
        //! "reply from": "p"
        uint8_t command_type = 'P';
      };

      struct __attribute__((__packed__)) CmdVersion2StartRecording
      {
        uint8_t command_type = 'r';
      };

      struct __attribute__((__packed__)) CmdVersion2StopRecording
      {
        uint8_t command_type = 'R';
      };

      struct __attribute__((__packed__)) CmdVersion2StartCompassCalibration
      {
        uint8_t command_type = 'i';
      };

      struct __attribute__((__packed__)) CmdVersion2CancelCompassCalibration
      {
        uint8_t command_type = 'I';
      };

      struct __attribute__((__packed__)) CmdVersion2SaveCompassCalibration
      {
        uint8_t command_type = 'c';
      };

      struct __attribute__((__packed__)) CmdVersion2UserGeoLocation
      {
        uint8_t command_type = 'g';
        //! "description": "longitude that is included in the log file in degrees"
        double longitude = 0.0;
        //! "description": "latitude that is included in the log file in degrees"
        double latitude = 0.0;
      };

      struct __attribute__((__packed__)) CmdVersion2Watchdog
      {
        uint8_t command_type = 'w';
        //! "description": "time in seconds since connected to drone"
        int16_t connection_duration = 0;
      };

      struct __attribute__((__packed__)) CmdVersion2AutoHeadingOn
      {
        uint8_t command_type = 'h';
      };

      struct __attribute__((__packed__)) CmdVersion2AutoHeadingOff
      {
        uint8_t command_type = 'H';
      };

      struct __attribute__((__packed__)) CmdVersion2AutoDepthOn
      {
        uint8_t command_type = 'd';
      };

      struct __attribute__((__packed__)) CmdVersion2AutoDepthOff
      {
        uint8_t command_type = 'D';
      };

      struct __attribute__((__packed__)) CmdVersion2AutoDepthStep
      {
        uint8_t command_type = 'a';
        //! "description": " 1 for up, -1 for down"
        int16_t direction = 0;
      };

      struct __attribute__((__packed__)) CmdVersion2AutoHeadingStep
      {
        uint8_t command_type = 'A';
        //! "description": "1 for up, -1 for down"
        int16_t direction = 0;
      };

      struct __attribute__((__packed__)) CmdVersion2SetSystemTime
      {
        //! "description": "set the system time on the on-board computer",
        //! "expected_reply": "a",
        uint8_t command_type = 't';
        int32_t unix_timestamp = 0;
      };

      struct __attribute__((__packed__)) CmdVersion2SetWaterDensity
      {
        //! "description": "Set the water density for improved accuracy of the depth sensor.",
        uint8_t command_type = 'W';
        
        //! "description": "water density in grams per liter"
        int16_t water_density = 0;
      };

      struct __attribute__((__packed__)) CmdVersion2TakeStillPicture
      {
        //! "description": "Takes a still picture and stores it locally on the drone."
        uint8_t command_type = 's';
      };

      struct __attribute__((__packed__)) CmdVersion2SetCameraExposure
      {
        //! "expected_reply": "a",
        uint8_t command_type = 'v';
        uint8_t command_subtype = 'e';
        //! "description": "1 = 1/1000th of a second, 5 = 1/200th of a second. Valid values are in the range <1, 5000>"
        int32_t exposure_value = 0;
      };

      struct __attribute__((__packed__)) CmdVersion2SetCameraWhitebalance
      {
        //! "expected_reply": "a",
        uint8_t command_type = 'v';
        uint8_t command_subtype = 'w';
        //! "description": "valid values are in the range <2800, 9300>"
        int32_t whitebalance_value = 0;
      };

      struct __attribute__((__packed__)) CmdVersion2SetCameraHue
      {
        //! "expected_reply": "a",
        uint8_t command_type = 'v';
        uint8_t command_subtype = 'h';
        //! "description": "valid values are in the range <-40, 40>"
        int32_t hue_value = 0;
      };

      struct __attribute__((__packed__)) CmdVersion2SetCameraBitrate
      {
        //! "expected_reply": "a",
        uint8_t command_type = 'v';
        uint8_t command_subtype = 'b';
        //! "description": "set camera bitrate in bits. Valid values are in range <1 000 000, 16 000 000> "
        int32_t bitrate_value = 0;
      };

      struct __attribute__((__packed__)) CmdVersion2SetCameraFramerate
      {
        //! "expected_reply": "a",
        uint8_t command_type = 'v';
        uint8_t command_subtype = 'f';
        //! "description": "valid values are 25 or 30"
        int32_t framerate_value = 0;
      };

      struct __attribute__((__packed__)) CmdVersion2SetCameraResolution
      {
        //! "expected_reply": "a",
        uint8_t command_type = 'v';
        uint8_t command_subtype = 'r';
        //! "description": "valid values are 480, 720 or 1080"
        int32_t resolution_value = 0;
      };

      struct __attribute__((__packed__)) CmdVersion2GetCameraParameters
      {
        uint8_t command_type = 'V';
        uint8_t command_subtype = 'a';
      };

      struct __attribute__((__packed__)) ReplyVersion2GetCameraParameters
      {
        uint8_t command_type = 'V';
        uint8_t command_subtype = 'a';
        //! "description": "a char describing what camera parameters were returned, 'a' for all parameters"
        uint8_t parameter = 0;
        int32_t camera_bitrate = 0;
        int32_t camera_exposure = 0;
        int32_t camera_whitebalance = 0;
        int32_t camera_hue = 0;
        int32_t camera_resolution = 0;
        int32_t camera_framerate = 0;
      };

    }
  }
}

#endif