#ifndef CONTROL_PIONEER_PIONEER_APP_PROTOCOL_COMMANDS_HPP_INCLUDED_
#define CONTROL_PIONEER_PIONEER_APP_PROTOCOL_COMMANDS_HPP_INCLUDED_

// ISO C++ 98 headers.
#include <string>
#include <cstddef>

// DUNE headers.
#include <DUNE/Config.hpp>

namespace Control
{
  namespace Pioneer
  {
    namespace PioneerAppProtocolCommands
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

      struct __attribute__((__packed__)) P2AppProtocolReplyVersion1Ack
      {
        uint8_t command_type = 'a';
      };

      struct __attribute__((__packed__)) P2AppProtocolCmdVersion1MotionInput
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

      struct __attribute__((__packed__)) P2AppProtocolCmdVersion1SetLights
      {
        uint8_t command_type = 'l';
        //! "upper_limit": 255,
        //! "lower_limit": 0
        uint8_t brightness_upper = 0;
        //! "upper_limit": 255,
        //! "lower_limit": 0
        uint8_t brightness_lower = 0;
      };

      struct __attribute__((__packed__)) P2AppProtocolCmdVersion1Ping
      {
        //! "expected_reply": "P"
        uint8_t command_type = 'p';
      };

      struct __attribute__((__packed__)) P2AppProtocolReplyVersion1Ping
      {
        //! "reply from": "p"
        uint8_t command_type = 'P';
      };

      struct __attribute__((__packed__)) P2AppProtocolCmdVersion1StartRecording
      {
        uint8_t command_type = 'r';
      };

      struct __attribute__((__packed__)) P2AppProtocolCmdVersion1StopRecording
      {
        uint8_t command_type = 'R';
      };

      struct __attribute__((__packed__)) P2AppProtocolCmdVersion1StartCompassCalibration
      {
        uint8_t command_type = 'i';
      };

      struct __attribute__((__packed__)) P2AppProtocolCmdVersion1CancelCompassCalibration
      {
        uint8_t command_type = 'I';
      };

      struct __attribute__((__packed__)) P2AppProtocolCmdVersion1SaveCompassCalibration
      {
        uint8_t command_type = 'c';
      };

      struct __attribute__((__packed__)) P2AppProtocolCmdVersion1UserGeoLocation
      {
        uint8_t command_type = 'g';
        //! "description": "longitude that is included in the log file in degrees"
        double longitude = 0.0;
        //! "description": "latitude that is included in the log file in degrees"
        double latitude = 0.0;
      };

      struct __attribute__((__packed__)) P2AppProtocolCmdVersion1Watchdog
      {
        uint8_t command_type = 'w';
        //! "description": "time in seconds since connected to drone"
        int16_t connection_duration = 0;
      };

      struct __attribute__((__packed__)) P2AppProtocolCmdVersion1AutoHeadingOn
      {
        uint8_t command_type = 'h';
      };

      struct __attribute__((__packed__)) P2AppProtocolCmdVersion1AutoHeadingOff
      {
        uint8_t command_type = 'H';
      };

      struct __attribute__((__packed__)) P2AppProtocolCmdVersion1AutoDepthOn
      {
        uint8_t command_type = 'd';
      };

      struct __attribute__((__packed__)) P2AppProtocolCmdVersion1AutoDepthOff
      {
        uint8_t command_type = 'D';
      };

      struct __attribute__((__packed__)) P2AppProtocolCmdVersion1AutoDepthStep
      {
        uint8_t command_type = 'a';
        //! "description": " 1 for up, -1 for down"
        int16_t direction = 0;
      };

      struct __attribute__((__packed__)) P2AppProtocolCmdVersion1AutoHeadingStep
      {
        uint8_t command_type = 'A';
        //! "description": "1 for up, -1 for down"
        int16_t direction = 0;
      };

      struct __attribute__((__packed__)) P2AppProtocolCmdVersion1SetSystemTime
      {
        //! "description": "set the system time on the on-board computer",
        //! "expected_reply": "a",
        uint8_t command_type = 't';
        int32_t unix_timestamp = 0;
      };

      struct __attribute__((__packed__)) P2AppProtocolCmdVersion1SetCameraExposure
      {
        //! "expected_reply": "a",
        uint8_t command_type = 'v';
        uint8_t command_subtype = 'e';
        //! "description": "1 = 1/1000th of a second, 5 = 1/200th of a second. Valid values are in the range <1, 5000>"
        int32_t exposure_value = 0;
      };

      struct __attribute__((__packed__)) P2AppProtocolCmdVersion1SetCameraWhitebalance
      {
        //! "expected_reply": "a",
        uint8_t command_type = 'v';
        uint8_t command_subtype = 'w';
        //! "description": "valid values are in the range <2800, 9300>"
        int32_t whitebalance_value = 0;
      };

      struct __attribute__((__packed__)) P2AppProtocolCmdVersion1SetCameraHue
      {
        //! "expected_reply": "a",
        uint8_t command_type = 'v';
        uint8_t command_subtype = 'h';
        //! "description": "valid values are in the range <-40, 40>"
        int32_t hue_value = 0;
      };

      struct __attribute__((__packed__)) P2AppProtocolCmdVersion1SetCameraBitrate
      {
        //! "expected_reply": "a",
        uint8_t command_type = 'v';
        uint8_t command_subtype = 'b';
        //! "description": "set camera bitrate in bits. Valid values are in range <1 000 000, 16 000 000> "
        int32_t bitrate_value = 0;
      };

      struct __attribute__((__packed__)) P2AppProtocolCmdVersion1GetCameraParameters
      {
        uint8_t command_type = 'V';
        uint8_t command_subtype = 'a';
      };

      struct __attribute__((__packed__)) P2AppProtocolReplyVersion1GetCameraParameters
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

      struct __attribute__((__packed__)) P2AppProtocolReplyVersion2Ack
      {
        uint8_t command_type = 'a';
      };

      struct __attribute__((__packed__)) P2AppProtocolCmdVersion2MotionInput
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

      struct __attribute__((__packed__)) P2AppProtocolCmdVersion2MotionInputTilt
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

      struct __attribute__((__packed__)) P2AppProtocolCmdVersion2SetLights
      {
        uint8_t command_type = 'l';
        //! "upper_limit": 255,
        //! "lower_limit": 0
        uint8_t brightness_upper = 0;
        //! "upper_limit": 255,
        //! "lower_limit": 0
        uint8_t brightness_lower = 0;
      };

      struct __attribute__((__packed__)) P2AppProtocolCmdVersion2Ping
      {
        //! "expected_reply": "P"
        uint8_t command_type = 'p';
      };

      struct __attribute__((__packed__)) P2AppProtocolReplyVersion2Ping
      {
        //! "reply from": "p"
        uint8_t command_type = 'P';
      };

      struct __attribute__((__packed__)) P2AppProtocolCmdVersion2StartRecording
      {
        uint8_t command_type = 'r';
      };

      struct __attribute__((__packed__)) P2AppProtocolCmdVersion2StopRecording
      {
        uint8_t command_type = 'R';
      };

      struct __attribute__((__packed__)) P2AppProtocolCmdVersion2StartCompassCalibration
      {
        uint8_t command_type = 'i';
      };

      struct __attribute__((__packed__)) P2AppProtocolCmdVersion2CancelCompassCalibration
      {
        uint8_t command_type = 'I';
      };

      struct __attribute__((__packed__)) P2AppProtocolCmdVersion2SaveCompassCalibration
      {
        uint8_t command_type = 'c';
      };

      struct __attribute__((__packed__)) P2AppProtocolCmdVersion2UserGeoLocation
      {
        uint8_t command_type = 'g';
        //! "description": "longitude that is included in the log file in degrees"
        double longitude = 0.0;
        //! "description": "latitude that is included in the log file in degrees"
        double latitude = 0.0;
      };

      struct __attribute__((__packed__)) P2AppProtocolCmdVersion2Watchdog
      {
        uint8_t command_type = 'w';
        //! "description": "time in seconds since connected to drone"
        int16_t connection_duration = 0;
      };

      struct __attribute__((__packed__)) P2AppProtocolCmdVersion2AutoHeadingOn
      {
        uint8_t command_type = 'h';
      };

      struct __attribute__((__packed__)) P2AppProtocolCmdVersion2AutoHeadingOff
      {
        uint8_t command_type = 'H';
      };

      struct __attribute__((__packed__)) P2AppProtocolCmdVersion2AutoDepthOn
      {
        uint8_t command_type = 'd';
      };

      struct __attribute__((__packed__)) P2AppProtocolCmdVersion2AutoDepthOff
      {
        uint8_t command_type = 'D';
      };

      struct __attribute__((__packed__)) P2AppProtocolCmdVersion2AutoDepthStep
      {
        uint8_t command_type = 'a';
        //! "description": " 1 for up, -1 for down"
        int16_t direction = 0;
      };

      struct __attribute__((__packed__)) P2AppProtocolCmdVersion2AutoHeadingStep
      {
        uint8_t command_type = 'A';
        //! "description": "1 for up, -1 for down"
        int16_t direction = 0;
      };

      struct __attribute__((__packed__)) P2AppProtocolCmdVersion2SetSystemTime
      {
        //! "description": "set the system time on the on-board computer",
        //! "expected_reply": "a",
        uint8_t command_type = 't';
        int32_t unix_timestamp = 0;
      };

      struct __attribute__((__packed__)) P2AppProtocolCmdVersion2SetWaterDensity
      {
        //! "description": "Set the water density for improved accuracy of the depth sensor.",
        uint8_t command_type = 'W';
        
        //! "description": "water density in grams per liter"
        int16_t water_density = 0;
      };

      struct __attribute__((__packed__)) P2AppProtocolCmdVersion2TakeStillPicture
      {
        //! "description": "Takes a still picture and stores it locally on the drone."
        uint8_t command_type = 's';
      };

      struct __attribute__((__packed__)) P2AppProtocolCmdVersion2SetCameraExposure
      {
        //! "expected_reply": "a",
        uint8_t command_type = 'v';
        uint8_t command_subtype = 'e';
        //! "description": "1 = 1/1000th of a second, 5 = 1/200th of a second. Valid values are in the range <1, 5000>"
        int32_t exposure_value = 0;
      };

      struct __attribute__((__packed__)) P2AppProtocolCmdVersion2SetCameraWhitebalance
      {
        //! "expected_reply": "a",
        uint8_t command_type = 'v';
        uint8_t command_subtype = 'w';
        //! "description": "valid values are in the range <2800, 9300>"
        int32_t whitebalance_value = 0;
      };

      struct __attribute__((__packed__)) P2AppProtocolCmdVersion2SetCameraHue
      {
        //! "expected_reply": "a",
        uint8_t command_type = 'v';
        uint8_t command_subtype = 'h';
        //! "description": "valid values are in the range <-40, 40>"
        int32_t hue_value = 0;
      };

      struct __attribute__((__packed__)) P2AppProtocolCmdVersion2SetCameraBitrate
      {
        //! "expected_reply": "a",
        uint8_t command_type = 'v';
        uint8_t command_subtype = 'b';
        //! "description": "set camera bitrate in bits. Valid values are in range <1 000 000, 16 000 000> "
        int32_t bitrate_value = 0;
      };

      struct __attribute__((__packed__)) P2AppProtocolCmdVersion2SetCameraFramerate
      {
        //! "expected_reply": "a",
        uint8_t command_type = 'vf';
        //! "description": "valid values are 25 or 30"
        int32_t framerate_value = 0;
      };

      struct __attribute__((__packed__)) P2AppProtocolCmdVersion2SetCameraResolution
      {
        //! "expected_reply": "a",
        uint8_t command_type = 'vr';
        //! "description": "valid values are 480, 720 or 1080"
        int32_t resolution_value = 0;
      };

      struct __attribute__((__packed__)) P2AppProtocolCmdVersion2GetCameraParameters
      {
        uint8_t command_type = 'V';
        uint8_t command_subtype = 'a';
      };

      struct __attribute__((__packed__)) P2AppProtocolReplyVersion2GetCameraParameters
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