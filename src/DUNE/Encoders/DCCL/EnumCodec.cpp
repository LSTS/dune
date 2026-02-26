// AUTO-GENERATED ENUM CODEC (ENCODER + DECODER)
#include "EnumCodec.hpp" 

#include <DUNE/DUNE.hpp>

namespace DUNE
{
  namespace Encoders
  {
    namespace DCCL
    {
      // =====================================
      //              DECODERS
      // =====================================
      // ------------------------------------------------------
      // Decode ZUnits Enum
      // ------------------------------------------------------
      DUNE::IMC::ZUnits decodeZUnits(const uint8_t& dccl_src)
      {
          if (dccl_src == IMC_DCCL::ZUnits::Z_NONE) return DUNE::IMC::ZUnits::Z_NONE;
          if (dccl_src == IMC_DCCL::ZUnits::Z_DEPTH) return DUNE::IMC::ZUnits::Z_DEPTH;
          if (dccl_src == IMC_DCCL::ZUnits::Z_ALTITUDE) return DUNE::IMC::ZUnits::Z_ALTITUDE;
          if (dccl_src == IMC_DCCL::ZUnits::Z_HEIGHT) return DUNE::IMC::ZUnits::Z_HEIGHT;
      }

      // ------------------------------------------------------
      // Decode SpeedUnits Enum
      // ------------------------------------------------------
      DUNE::IMC::SpeedUnits decodeSpeedUnits(const uint8_t& dccl_src)
      {
          if (dccl_src == IMC_DCCL::SpeedUnits::SUNITS_METERS_PS) return DUNE::IMC::SpeedUnits::SUNITS_METERS_PS;
          if (dccl_src == IMC_DCCL::SpeedUnits::SUNITS_RPM) return DUNE::IMC::SpeedUnits::SUNITS_RPM;
          if (dccl_src == IMC_DCCL::SpeedUnits::SUNITS_PERCENTAGE) return DUNE::IMC::SpeedUnits::SUNITS_PERCENTAGE;
      }

      // ------------------------------------------------------
      // Decode ManeuverType Enum
      // ------------------------------------------------------
      std::string decodeManeuverType(const uint8_t& dccl_src)
      {
          if (dccl_src == IMC_DCCL::ManeuverType::GOTO) return "Goto";
          if (dccl_src == IMC_DCCL::ManeuverType::LOITER) return "Loiter";
          if (dccl_src == IMC_DCCL::ManeuverType::FOLLOWPATH) return "FollowPath";
          if (dccl_src == IMC_DCCL::ManeuverType::STATIONKEEPING) return "StationKeeping";
      }

      // ------------------------------------------------------
      // Decode ParamValue Enum
      // ------------------------------------------------------
      std::string decodeParamValue(const uint8_t& dccl_src)
      {
          if (dccl_src == IMC_DCCL::ParamValue::TRUE) return "true";
          if (dccl_src == IMC_DCCL::ParamValue::FALSE) return "false";
          if (dccl_src == IMC_DCCL::ParamValue::BOTH) return "both";
      }

      // ------------------------------------------------------
      // Decode TransitionConditionEnum Enum
      // ------------------------------------------------------
      std::string decodeTransitionConditionEnum(const uint8_t& dccl_src)
      {
          if (dccl_src == IMC_DCCL::TransitionConditionEnum::MANEUVERISDONE) return "maneuverisdone";
      }

      // ------------------------------------------------------
      // Decode ParameterName Enum
      // ------------------------------------------------------
      std::string decodeParameterName(const uint8_t& dccl_src)
      {
          if (dccl_src == IMC_DCCL::ParameterName::ACTIVE) return "Active";
          if (dccl_src == IMC_DCCL::ParameterName::ARDUPILOT_TRACKER) return "Ardupilot Tracker";
          if (dccl_src == IMC_DCCL::ParameterName::BATHYMETRY_CHANNEL_AVAILABLE) return "Bathymetry Channel Available";
          if (dccl_src == IMC_DCCL::ParameterName::BOTTOM_TRACK_MINIMUM_DEPTH) return "Bottom Track -- Minimum Depth";
          if (dccl_src == IMC_DCCL::ParameterName::DATA_BITS) return "Data Bits";
          if (dccl_src == IMC_DCCL::ParameterName::FLIR_DUO_R) return "FLIR Duo R";
          if (dccl_src == IMC_DCCL::ParameterName::FORMATION_FLIGHT) return "Formation Flight";
          if (dccl_src == IMC_DCCL::ParameterName::FORMATION_POSITIONS) return "Formation Positions";
          if (dccl_src == IMC_DCCL::ParameterName::FORMATION_REFERENCE_FRAME) return "Formation Reference Frame";
          if (dccl_src == IMC_DCCL::ParameterName::FREQUENCY) return "Frequency";
          if (dccl_src == IMC_DCCL::ParameterName::HIGH_FREQUENCY_CHANNEL) return "High-Frequency Channel";
          if (dccl_src == IMC_DCCL::ParameterName::HIGH_FREQUENCY_CHANNELS) return "High-Frequency Channels";
          if (dccl_src == IMC_DCCL::ParameterName::HIGH_FREQUENCY_RANGE) return "High-Frequency Range";
          if (dccl_src == IMC_DCCL::ParameterName::LOW_FREQUENCY_BATHYMETRY_CHANNEL) return "Low-Frequency Bathymetry Channel";
          if (dccl_src == IMC_DCCL::ParameterName::LOW_FREQUENCY_CHANNEL) return "Low-Frequency Channel";
          if (dccl_src == IMC_DCCL::ParameterName::LOW_FREQUENCY_CHANNELS) return "Low-Frequency Channels";
          if (dccl_src == IMC_DCCL::ParameterName::LOW_FREQUENCY_RANGE) return "Low-Frequency Range";
          if (dccl_src == IMC_DCCL::ParameterName::ONBOARD_CAMERA) return "Onboard Camera";
          if (dccl_src == IMC_DCCL::ParameterName::OPTIMIZE_FOR_THIS_SPEED) return "Optimize for this Speed";
          if (dccl_src == IMC_DCCL::ParameterName::PERIODICITY_OF_DATA_SAMPLING) return "Periodicity of Data Sampling";
          if (dccl_src == IMC_DCCL::ParameterName::PROFILE_MODE) return "Profile Mode";
          if (dccl_src == IMC_DCCL::ParameterName::RANGE) return "Range";
          if (dccl_src == IMC_DCCL::ParameterName::RANGE_MULTIPLIER) return "Range Multiplier";
          if (dccl_src == IMC_DCCL::ParameterName::SAMPLE_TIME_DURATION) return "Sample Time Duration";
          if (dccl_src == IMC_DCCL::ParameterName::SCALE_FACTOR) return "Scale Factor";
          if (dccl_src == IMC_DCCL::ParameterName::SECTOR_WIDTH) return "Sector Width";
          if (dccl_src == IMC_DCCL::ParameterName::SHUTTER_VALUE_MS) return "Shutter Value (ms)";
          if (dccl_src == IMC_DCCL::ParameterName::STEP_SIZE) return "Step Size";
          if (dccl_src == IMC_DCCL::ParameterName::STROBE_DELAY_US) return "Strobe Delay (us)";
          if (dccl_src == IMC_DCCL::ParameterName::THRUSTER_ALWAYS_ON) return "Thruster Always On";
          if (dccl_src == IMC_DCCL::ParameterName::TRANSITION_TO_FW) return "Transition to FW";
          if (dccl_src == IMC_DCCL::ParameterName::TRANSITION_TO_MC) return "Transition to MC";
          if (dccl_src == IMC_DCCL::ParameterName::USE_CONTROLLER) return "Use controller";
          if (dccl_src == IMC_DCCL::ParameterName::VEHICLE_LIST) return "Vehicle List";
      }

      // ------------------------------------------------------
      // Decode EntityName Enum
      // ------------------------------------------------------
      std::string decodeEntityName(const uint8_t& dccl_src)
      {
          if (dccl_src == IMC_DCCL::EntityName::ACOUSTIC_MODEM) return "Acoustic Modem";
          if (dccl_src == IMC_DCCL::EntityName::ADCP) return "ADCP";
          if (dccl_src == IMC_DCCL::EntityName::AUTOPILOT) return "Autopilot";
          if (dccl_src == IMC_DCCL::EntityName::CAMERA) return "Camera";
          if (dccl_src == IMC_DCCL::EntityName::CTD) return "CTD";
          if (dccl_src == IMC_DCCL::EntityName::DISSOLVED_OXYGEN) return "Dissolved Oxygen";
          if (dccl_src == IMC_DCCL::EntityName::FLUOROMETERS) return "Fluorometers";
          if (dccl_src == IMC_DCCL::EntityName::FORMATION_COORDINATOR) return "Formation Coordinator";
          if (dccl_src == IMC_DCCL::EntityName::HEADING_CONTROLLER) return "Heading Controller";
          if (dccl_src == IMC_DCCL::EntityName::HEIGHT_CONTROL) return "Height Control";
          if (dccl_src == IMC_DCCL::EntityName::LBL) return "LBL";
          if (dccl_src == IMC_DCCL::EntityName::MOTOR_CONTROLLER_CHANNEL_0) return "Motor Controller - Channel 0";
          if (dccl_src == IMC_DCCL::EntityName::MOTOR_CONTROLLER_CHANNEL_1) return "Motor Controller - Channel 1";
          if (dccl_src == IMC_DCCL::EntityName::MULTIBEAM) return "Multibeam";
          if (dccl_src == IMC_DCCL::EntityName::PATH_CONTROL) return "Path Control";
          if (dccl_src == IMC_DCCL::EntityName::PATH_CONTROL_LEADER) return "Path Control Leader";
          if (dccl_src == IMC_DCCL::EntityName::PENCIL_BEAM) return "Pencil Beam";
          if (dccl_src == IMC_DCCL::EntityName::PHOTO_TRIGGER) return "Photo Trigger";
          if (dccl_src == IMC_DCCL::EntityName::RANGER) return "Ranger";
          if (dccl_src == IMC_DCCL::EntityName::REMOTE_CONTROL) return "Remote Control";
          if (dccl_src == IMC_DCCL::EntityName::REMOTE_OPERATION) return "Remote Operation";
          if (dccl_src == IMC_DCCL::EntityName::SIDESCAN) return "Sidescan";
          if (dccl_src == IMC_DCCL::EntityName::SLAVE_CPU) return "Slave CPU";
          if (dccl_src == IMC_DCCL::EntityName::UAVCAMERA) return "UAVCamera";
      }

      // ------------------------------------------------------
      // Decode LoiterTypeEnum Enum
      // ------------------------------------------------------
      DUNE::IMC::Loiter::LoiterTypeEnum decodeLoiterTypeEnum(const uint8_t& dccl_src)
      {
          if (dccl_src == IMC_DCCL::Loiter::LT_DEFAULT) return DUNE::IMC::Loiter::LoiterTypeEnum::LT_DEFAULT;
          if (dccl_src == IMC_DCCL::Loiter::LT_CIRCULAR) return DUNE::IMC::Loiter::LoiterTypeEnum::LT_CIRCULAR;
          if (dccl_src == IMC_DCCL::Loiter::LT_RACETRACK) return DUNE::IMC::Loiter::LoiterTypeEnum::LT_RACETRACK;
          if (dccl_src == IMC_DCCL::Loiter::LT_EIGHT) return DUNE::IMC::Loiter::LoiterTypeEnum::LT_EIGHT;
          if (dccl_src == IMC_DCCL::Loiter::LT_HOVER) return DUNE::IMC::Loiter::LoiterTypeEnum::LT_HOVER;
      }

      // ------------------------------------------------------
      // Decode DirectionEnum Enum
      // ------------------------------------------------------
      DUNE::IMC::Loiter::DirectionEnum decodeDirectionEnum(const uint8_t& dccl_src)
      {
          if (dccl_src == IMC_DCCL::Loiter::LD_VDEP) return DUNE::IMC::Loiter::DirectionEnum::LD_VDEP;
          if (dccl_src == IMC_DCCL::Loiter::LD_CLOCKW) return DUNE::IMC::Loiter::DirectionEnum::LD_CLOCKW;
          if (dccl_src == IMC_DCCL::Loiter::LD_CCLOCKW) return DUNE::IMC::Loiter::DirectionEnum::LD_CCLOCKW;
          if (dccl_src == IMC_DCCL::Loiter::LD_IWINDCURR) return DUNE::IMC::Loiter::DirectionEnum::LD_IWINDCURR;
      }

      // ------------------------------------------------------
      // Decode ParameterEnum Enum
      // ------------------------------------------------------
      DUNE::IMC::VerticalProfile::ParameterEnum decodeParameterEnum(const uint8_t& dccl_src)
      {
          if (dccl_src == IMC_DCCL::VerticalProfile::PROF_TEMPERATURE) return DUNE::IMC::VerticalProfile::ParameterEnum::PROF_TEMPERATURE;
          if (dccl_src == IMC_DCCL::VerticalProfile::PROF_SALINITY) return DUNE::IMC::VerticalProfile::ParameterEnum::PROF_SALINITY;
          if (dccl_src == IMC_DCCL::VerticalProfile::PROF_CONDUCTIVITY) return DUNE::IMC::VerticalProfile::ParameterEnum::PROF_CONDUCTIVITY;
          if (dccl_src == IMC_DCCL::VerticalProfile::PROF_PH) return DUNE::IMC::VerticalProfile::ParameterEnum::PROF_PH;
          if (dccl_src == IMC_DCCL::VerticalProfile::PROF_REDOX) return DUNE::IMC::VerticalProfile::ParameterEnum::PROF_REDOX;
          if (dccl_src == IMC_DCCL::VerticalProfile::PROF_CHLOROPHYLL) return DUNE::IMC::VerticalProfile::ParameterEnum::PROF_CHLOROPHYLL;
          if (dccl_src == IMC_DCCL::VerticalProfile::PROF_TURBIDITY) return DUNE::IMC::VerticalProfile::ParameterEnum::PROF_TURBIDITY;
      }

      // ------------------------------------------------------
      // Decode TypeEnum Enum
      // ------------------------------------------------------
      DUNE::IMC::PlanDB::TypeEnum decodeTypeEnum(const uint8_t& dccl_src)
      {
          if (dccl_src == IMC_DCCL::PlanDB::DBT_REQUEST) return DUNE::IMC::PlanDB::TypeEnum::DBT_REQUEST;
          if (dccl_src == IMC_DCCL::PlanDB::DBT_SUCCESS) return DUNE::IMC::PlanDB::TypeEnum::DBT_SUCCESS;
          if (dccl_src == IMC_DCCL::PlanDB::DBT_FAILURE) return DUNE::IMC::PlanDB::TypeEnum::DBT_FAILURE;
          if (dccl_src == IMC_DCCL::PlanDB::DBT_IN_PROGRESS) return DUNE::IMC::PlanDB::TypeEnum::DBT_IN_PROGRESS;
      }

      // ------------------------------------------------------
      // Decode OperationEnum Enum
      // ------------------------------------------------------
      DUNE::IMC::PlanDB::OperationEnum decodeOperationEnum(const uint8_t& dccl_src)
      {
          if (dccl_src == IMC_DCCL::PlanDB::DBOP_SET) return DUNE::IMC::PlanDB::OperationEnum::DBOP_SET;
          if (dccl_src == IMC_DCCL::PlanDB::DBOP_DEL) return DUNE::IMC::PlanDB::OperationEnum::DBOP_DEL;
          if (dccl_src == IMC_DCCL::PlanDB::DBOP_GET) return DUNE::IMC::PlanDB::OperationEnum::DBOP_GET;
          if (dccl_src == IMC_DCCL::PlanDB::DBOP_GET_INFO) return DUNE::IMC::PlanDB::OperationEnum::DBOP_GET_INFO;
          if (dccl_src == IMC_DCCL::PlanDB::DBOP_CLEAR) return DUNE::IMC::PlanDB::OperationEnum::DBOP_CLEAR;
          if (dccl_src == IMC_DCCL::PlanDB::DBOP_GET_STATE) return DUNE::IMC::PlanDB::OperationEnum::DBOP_GET_STATE;
          if (dccl_src == IMC_DCCL::PlanDB::DBOP_GET_DSTATE) return DUNE::IMC::PlanDB::OperationEnum::DBOP_GET_DSTATE;
          if (dccl_src == IMC_DCCL::PlanDB::DBOP_BOOT) return DUNE::IMC::PlanDB::OperationEnum::DBOP_BOOT;
      }


      // =====================================
      //              ENCODERS
      // =====================================
      // ------------------------------------------------------
      // Encode ZUnits Enum
      // ------------------------------------------------------
      IMC_DCCL::ZUnits encodeZUnits(const uint8_t& imc_src)
      {
          if (imc_src == DUNE::IMC::ZUnits::Z_NONE) return IMC_DCCL::ZUnits::Z_NONE;
          if (imc_src == DUNE::IMC::ZUnits::Z_DEPTH) return IMC_DCCL::ZUnits::Z_DEPTH;
          if (imc_src == DUNE::IMC::ZUnits::Z_ALTITUDE) return IMC_DCCL::ZUnits::Z_ALTITUDE;
          if (imc_src == DUNE::IMC::ZUnits::Z_HEIGHT) return IMC_DCCL::ZUnits::Z_HEIGHT;
          return IMC_DCCL::ZUnits::Z_UNKNOWN;
      }

      // ------------------------------------------------------
      // Encode SpeedUnits Enum
      // ------------------------------------------------------
      IMC_DCCL::SpeedUnits encodeSpeedUnits(const uint8_t& imc_src)
      {
          if (imc_src == DUNE::IMC::SpeedUnits::SUNITS_METERS_PS) return IMC_DCCL::SpeedUnits::SUNITS_METERS_PS;
          if (imc_src == DUNE::IMC::SpeedUnits::SUNITS_RPM) return IMC_DCCL::SpeedUnits::SUNITS_RPM;
          if (imc_src == DUNE::IMC::SpeedUnits::SUNITS_PERCENTAGE) return IMC_DCCL::SpeedUnits::SUNITS_PERCENTAGE;
          return IMC_DCCL::SpeedUnits::SUNITS_UNKNOWN;
      }

      // ------------------------------------------------------
      // Encode ManeuverType Enum
      // ------------------------------------------------------
      IMC_DCCL::ManeuverType encodeManeuverType(const std::string& imc_src)
      {
          if (imc_src == "Goto") return IMC_DCCL::ManeuverType::GOTO;
          if (imc_src == "Loiter") return IMC_DCCL::ManeuverType::LOITER;
          if (imc_src == "FollowPath") return IMC_DCCL::ManeuverType::FOLLOWPATH;
          if (imc_src == "StationKeeping") return IMC_DCCL::ManeuverType::STATIONKEEPING;
          return IMC_DCCL::ManeuverType::MT_UNKNOWN;
      }

      // ------------------------------------------------------
      // Encode ParamValue Enum
      // ------------------------------------------------------
      IMC_DCCL::ParamValue encodeParamValue(const std::string& imc_src)
      {
          if (imc_src == "true") return IMC_DCCL::ParamValue::TRUE;
          if (imc_src == "false") return IMC_DCCL::ParamValue::FALSE;
          if (imc_src == "both") return IMC_DCCL::ParamValue::BOTH;
          return IMC_DCCL::ParamValue::PV_UNKNOWN;
      }

      // ------------------------------------------------------
      // Encode TransitionConditionEnum Enum
      // ------------------------------------------------------
      IMC_DCCL::TransitionConditionEnum encodeTransitionConditionEnum(const std::string& imc_src)
      {
          if (imc_src == "maneuverisdone") return IMC_DCCL::TransitionConditionEnum::MANEUVERISDONE;
          return IMC_DCCL::TransitionConditionEnum::TC_UNKNOWN;
      }

      // ------------------------------------------------------
      // Encode ParameterName Enum
      // ------------------------------------------------------
      IMC_DCCL::ParameterName encodeParameterName(const std::string& imc_src)
      {
          if (imc_src == "Active") return IMC_DCCL::ParameterName::ACTIVE;
          if (imc_src == "Ardupilot Tracker") return IMC_DCCL::ParameterName::ARDUPILOT_TRACKER;
          if (imc_src == "Bathymetry Channel Available") return IMC_DCCL::ParameterName::BATHYMETRY_CHANNEL_AVAILABLE;
          if (imc_src == "Bottom Track -- Minimum Depth") return IMC_DCCL::ParameterName::BOTTOM_TRACK_MINIMUM_DEPTH;
          if (imc_src == "Data Bits") return IMC_DCCL::ParameterName::DATA_BITS;
          if (imc_src == "FLIR Duo R") return IMC_DCCL::ParameterName::FLIR_DUO_R;
          if (imc_src == "Formation Flight") return IMC_DCCL::ParameterName::FORMATION_FLIGHT;
          if (imc_src == "Formation Positions") return IMC_DCCL::ParameterName::FORMATION_POSITIONS;
          if (imc_src == "Formation Reference Frame") return IMC_DCCL::ParameterName::FORMATION_REFERENCE_FRAME;
          if (imc_src == "Frequency") return IMC_DCCL::ParameterName::FREQUENCY;
          if (imc_src == "High-Frequency Channel") return IMC_DCCL::ParameterName::HIGH_FREQUENCY_CHANNEL;
          if (imc_src == "High-Frequency Channels") return IMC_DCCL::ParameterName::HIGH_FREQUENCY_CHANNELS;
          if (imc_src == "High-Frequency Range") return IMC_DCCL::ParameterName::HIGH_FREQUENCY_RANGE;
          if (imc_src == "Low-Frequency Bathymetry Channel") return IMC_DCCL::ParameterName::LOW_FREQUENCY_BATHYMETRY_CHANNEL;
          if (imc_src == "Low-Frequency Channel") return IMC_DCCL::ParameterName::LOW_FREQUENCY_CHANNEL;
          if (imc_src == "Low-Frequency Channels") return IMC_DCCL::ParameterName::LOW_FREQUENCY_CHANNELS;
          if (imc_src == "Low-Frequency Range") return IMC_DCCL::ParameterName::LOW_FREQUENCY_RANGE;
          if (imc_src == "Onboard Camera") return IMC_DCCL::ParameterName::ONBOARD_CAMERA;
          if (imc_src == "Optimize for this Speed") return IMC_DCCL::ParameterName::OPTIMIZE_FOR_THIS_SPEED;
          if (imc_src == "Periodicity of Data Sampling") return IMC_DCCL::ParameterName::PERIODICITY_OF_DATA_SAMPLING;
          if (imc_src == "Profile Mode") return IMC_DCCL::ParameterName::PROFILE_MODE;
          if (imc_src == "Range") return IMC_DCCL::ParameterName::RANGE;
          if (imc_src == "Range Multiplier") return IMC_DCCL::ParameterName::RANGE_MULTIPLIER;
          if (imc_src == "Sample Time Duration") return IMC_DCCL::ParameterName::SAMPLE_TIME_DURATION;
          if (imc_src == "Scale Factor") return IMC_DCCL::ParameterName::SCALE_FACTOR;
          if (imc_src == "Sector Width") return IMC_DCCL::ParameterName::SECTOR_WIDTH;
          if (imc_src == "Shutter Value (ms)") return IMC_DCCL::ParameterName::SHUTTER_VALUE_MS;
          if (imc_src == "Step Size") return IMC_DCCL::ParameterName::STEP_SIZE;
          if (imc_src == "Strobe Delay (us)") return IMC_DCCL::ParameterName::STROBE_DELAY_US;
          if (imc_src == "Thruster Always On") return IMC_DCCL::ParameterName::THRUSTER_ALWAYS_ON;
          if (imc_src == "Transition to FW") return IMC_DCCL::ParameterName::TRANSITION_TO_FW;
          if (imc_src == "Transition to MC") return IMC_DCCL::ParameterName::TRANSITION_TO_MC;
          if (imc_src == "Use controller") return IMC_DCCL::ParameterName::USE_CONTROLLER;
          if (imc_src == "Vehicle List") return IMC_DCCL::ParameterName::VEHICLE_LIST;
      }

      // ------------------------------------------------------
      // Encode EntityName Enum
      // ------------------------------------------------------
      IMC_DCCL::EntityName encodeEntityName(const std::string& imc_src)
      {
          if (imc_src == "Acoustic Modem") return IMC_DCCL::EntityName::ACOUSTIC_MODEM;
          if (imc_src == "ADCP") return IMC_DCCL::EntityName::ADCP;
          if (imc_src == "Autopilot") return IMC_DCCL::EntityName::AUTOPILOT;
          if (imc_src == "Camera") return IMC_DCCL::EntityName::CAMERA;
          if (imc_src == "CTD") return IMC_DCCL::EntityName::CTD;
          if (imc_src == "Dissolved Oxygen") return IMC_DCCL::EntityName::DISSOLVED_OXYGEN;
          if (imc_src == "Fluorometers") return IMC_DCCL::EntityName::FLUOROMETERS;
          if (imc_src == "Formation Coordinator") return IMC_DCCL::EntityName::FORMATION_COORDINATOR;
          if (imc_src == "Heading Controller") return IMC_DCCL::EntityName::HEADING_CONTROLLER;
          if (imc_src == "Height Control") return IMC_DCCL::EntityName::HEIGHT_CONTROL;
          if (imc_src == "LBL") return IMC_DCCL::EntityName::LBL;
          if (imc_src == "Motor Controller - Channel 0") return IMC_DCCL::EntityName::MOTOR_CONTROLLER_CHANNEL_0;
          if (imc_src == "Motor Controller - Channel 1") return IMC_DCCL::EntityName::MOTOR_CONTROLLER_CHANNEL_1;
          if (imc_src == "Multibeam") return IMC_DCCL::EntityName::MULTIBEAM;
          if (imc_src == "Path Control") return IMC_DCCL::EntityName::PATH_CONTROL;
          if (imc_src == "Path Control Leader") return IMC_DCCL::EntityName::PATH_CONTROL_LEADER;
          if (imc_src == "Pencil Beam") return IMC_DCCL::EntityName::PENCIL_BEAM;
          if (imc_src == "Photo Trigger") return IMC_DCCL::EntityName::PHOTO_TRIGGER;
          if (imc_src == "Ranger") return IMC_DCCL::EntityName::RANGER;
          if (imc_src == "Remote Control") return IMC_DCCL::EntityName::REMOTE_CONTROL;
          if (imc_src == "Remote Operation") return IMC_DCCL::EntityName::REMOTE_OPERATION;
          if (imc_src == "Sidescan") return IMC_DCCL::EntityName::SIDESCAN;
          if (imc_src == "Slave CPU") return IMC_DCCL::EntityName::SLAVE_CPU;
          if (imc_src == "UAVCamera") return IMC_DCCL::EntityName::UAVCAMERA;
      }

      // ------------------------------------------------------
      // Encode LoiterTypeEnum Enum
      // ------------------------------------------------------
      IMC_DCCL::Loiter::LoiterTypeEnum encodeLoiterTypeEnum(const uint8_t& imc_src)
      {
          if (imc_src == DUNE::IMC::Loiter::LoiterTypeEnum::LT_DEFAULT) return IMC_DCCL::Loiter::LT_DEFAULT;
          if (imc_src == DUNE::IMC::Loiter::LoiterTypeEnum::LT_CIRCULAR) return IMC_DCCL::Loiter::LT_CIRCULAR;
          if (imc_src == DUNE::IMC::Loiter::LoiterTypeEnum::LT_RACETRACK) return IMC_DCCL::Loiter::LT_RACETRACK;
          if (imc_src == DUNE::IMC::Loiter::LoiterTypeEnum::LT_EIGHT) return IMC_DCCL::Loiter::LT_EIGHT;
          if (imc_src == DUNE::IMC::Loiter::LoiterTypeEnum::LT_HOVER) return IMC_DCCL::Loiter::LT_HOVER;
          return IMC_DCCL::Loiter::LT_UNKNOWN;
      }

      // ------------------------------------------------------
      // Encode DirectionEnum Enum
      // ------------------------------------------------------
      IMC_DCCL::Loiter::DirectionEnum encodeDirectionEnum(const uint8_t& imc_src)
      {
          if (imc_src == DUNE::IMC::Loiter::DirectionEnum::LD_VDEP) return IMC_DCCL::Loiter::LD_VDEP;
          if (imc_src == DUNE::IMC::Loiter::DirectionEnum::LD_CLOCKW) return IMC_DCCL::Loiter::LD_CLOCKW;
          if (imc_src == DUNE::IMC::Loiter::DirectionEnum::LD_CCLOCKW) return IMC_DCCL::Loiter::LD_CCLOCKW;
          if (imc_src == DUNE::IMC::Loiter::DirectionEnum::LD_IWINDCURR) return IMC_DCCL::Loiter::LD_IWINDCURR;
          return IMC_DCCL::Loiter::LD_UNKNOWN;
      }

      // ------------------------------------------------------
      // Encode ParameterEnum Enum
      // ------------------------------------------------------
      IMC_DCCL::VerticalProfile::ParameterEnum encodeParameterEnum(const uint8_t& imc_src)
      {
          if (imc_src == DUNE::IMC::VerticalProfile::ParameterEnum::PROF_TEMPERATURE) return IMC_DCCL::VerticalProfile::PROF_TEMPERATURE;
          if (imc_src == DUNE::IMC::VerticalProfile::ParameterEnum::PROF_SALINITY) return IMC_DCCL::VerticalProfile::PROF_SALINITY;
          if (imc_src == DUNE::IMC::VerticalProfile::ParameterEnum::PROF_CONDUCTIVITY) return IMC_DCCL::VerticalProfile::PROF_CONDUCTIVITY;
          if (imc_src == DUNE::IMC::VerticalProfile::ParameterEnum::PROF_PH) return IMC_DCCL::VerticalProfile::PROF_PH;
          if (imc_src == DUNE::IMC::VerticalProfile::ParameterEnum::PROF_REDOX) return IMC_DCCL::VerticalProfile::PROF_REDOX;
          if (imc_src == DUNE::IMC::VerticalProfile::ParameterEnum::PROF_CHLOROPHYLL) return IMC_DCCL::VerticalProfile::PROF_CHLOROPHYLL;
          if (imc_src == DUNE::IMC::VerticalProfile::ParameterEnum::PROF_TURBIDITY) return IMC_DCCL::VerticalProfile::PROF_TURBIDITY;
      }

      // ------------------------------------------------------
      // Encode TypeEnum Enum
      // ------------------------------------------------------
      IMC_DCCL::PlanDB::TypeEnum encodeTypeEnum(const uint8_t& imc_src)
      {
          if (imc_src == DUNE::IMC::PlanDB::TypeEnum::DBT_REQUEST) return IMC_DCCL::PlanDB::DBT_REQUEST;
          if (imc_src == DUNE::IMC::PlanDB::TypeEnum::DBT_SUCCESS) return IMC_DCCL::PlanDB::DBT_SUCCESS;
          if (imc_src == DUNE::IMC::PlanDB::TypeEnum::DBT_FAILURE) return IMC_DCCL::PlanDB::DBT_FAILURE;
          if (imc_src == DUNE::IMC::PlanDB::TypeEnum::DBT_IN_PROGRESS) return IMC_DCCL::PlanDB::DBT_IN_PROGRESS;
      }

      // ------------------------------------------------------
      // Encode OperationEnum Enum
      // ------------------------------------------------------
      IMC_DCCL::PlanDB::OperationEnum encodeOperationEnum(const uint8_t& imc_src)
      {
          if (imc_src == DUNE::IMC::PlanDB::OperationEnum::DBOP_SET) return IMC_DCCL::PlanDB::DBOP_SET;
          if (imc_src == DUNE::IMC::PlanDB::OperationEnum::DBOP_DEL) return IMC_DCCL::PlanDB::DBOP_DEL;
          if (imc_src == DUNE::IMC::PlanDB::OperationEnum::DBOP_GET) return IMC_DCCL::PlanDB::DBOP_GET;
          if (imc_src == DUNE::IMC::PlanDB::OperationEnum::DBOP_GET_INFO) return IMC_DCCL::PlanDB::DBOP_GET_INFO;
          if (imc_src == DUNE::IMC::PlanDB::OperationEnum::DBOP_CLEAR) return IMC_DCCL::PlanDB::DBOP_CLEAR;
          if (imc_src == DUNE::IMC::PlanDB::OperationEnum::DBOP_GET_STATE) return IMC_DCCL::PlanDB::DBOP_GET_STATE;
          if (imc_src == DUNE::IMC::PlanDB::OperationEnum::DBOP_GET_DSTATE) return IMC_DCCL::PlanDB::DBOP_GET_DSTATE;
          if (imc_src == DUNE::IMC::PlanDB::OperationEnum::DBOP_BOOT) return IMC_DCCL::PlanDB::DBOP_BOOT;
      }
    } // namespace DCCL
  } // namespace Encoders
} // namespace DUNE
