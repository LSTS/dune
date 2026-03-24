//AUTO-GENERATED CODEC IMC<-->DCCL ENUM

#include "EnumCodec.hpp"
#include <DUNE/DUNE.hpp>

// ================ EntityState.StateEnum Message ================
IMC_DCCL::EntityState::StateEnum encodeEntityStateStateEnum(const uint8_t& imc_src)
{
    switch (imc_src) {
        case DUNE::IMC::EntityState::StateEnum::ESTA_BOOT: return IMC_DCCL::EntityState::ESTA_BOOT;
        case DUNE::IMC::EntityState::StateEnum::ESTA_NORMAL: return IMC_DCCL::EntityState::ESTA_NORMAL;
        case DUNE::IMC::EntityState::StateEnum::ESTA_FAULT: return IMC_DCCL::EntityState::ESTA_FAULT;
        case DUNE::IMC::EntityState::StateEnum::ESTA_ERROR: return IMC_DCCL::EntityState::ESTA_ERROR;
        case DUNE::IMC::EntityState::StateEnum::ESTA_FAILURE: return IMC_DCCL::EntityState::ESTA_FAILURE;
        default: return IMC_DCCL::EntityState::ESTA_UNKNOWN;
    }
}


// ================ EntityState.StateEnum Message ================
DUNE::IMC::EntityState::StateEnum decodeEntityStateStateEnum(const uint8_t& dccl_src)
{
    switch (dccl_src) {
        case IMC_DCCL::EntityState::ESTA_BOOT: return DUNE::IMC::EntityState::StateEnum::ESTA_BOOT;
        case IMC_DCCL::EntityState::ESTA_NORMAL: return DUNE::IMC::EntityState::StateEnum::ESTA_NORMAL;
        case IMC_DCCL::EntityState::ESTA_FAULT: return DUNE::IMC::EntityState::StateEnum::ESTA_FAULT;
        case IMC_DCCL::EntityState::ESTA_ERROR: return DUNE::IMC::EntityState::StateEnum::ESTA_ERROR;
        case IMC_DCCL::EntityState::ESTA_FAILURE: return DUNE::IMC::EntityState::StateEnum::ESTA_FAILURE;
    }
}


// ================ Loiter.DirectionEnum Message ================
IMC_DCCL::Loiter::DirectionEnum encodeLoiterDirectionEnum(const uint8_t& imc_src)
{
    switch (imc_src) {
        case DUNE::IMC::Loiter::DirectionEnum::LD_VDEP: return IMC_DCCL::Loiter::LD_VDEP;
        case DUNE::IMC::Loiter::DirectionEnum::LD_CLOCKW: return IMC_DCCL::Loiter::LD_CLOCKW;
        case DUNE::IMC::Loiter::DirectionEnum::LD_CCLOCKW: return IMC_DCCL::Loiter::LD_CCLOCKW;
        case DUNE::IMC::Loiter::DirectionEnum::LD_IWINDCURR: return IMC_DCCL::Loiter::LD_IWINDCURR;
        default: return IMC_DCCL::Loiter::LD_UNKNOWN;
    }
}


// ================ Loiter.DirectionEnum Message ================
DUNE::IMC::Loiter::DirectionEnum decodeLoiterDirectionEnum(const uint8_t& dccl_src)
{
    switch (dccl_src) {
        case IMC_DCCL::Loiter::LD_VDEP: return DUNE::IMC::Loiter::DirectionEnum::LD_VDEP;
        case IMC_DCCL::Loiter::LD_CLOCKW: return DUNE::IMC::Loiter::DirectionEnum::LD_CLOCKW;
        case IMC_DCCL::Loiter::LD_CCLOCKW: return DUNE::IMC::Loiter::DirectionEnum::LD_CCLOCKW;
        case IMC_DCCL::Loiter::LD_IWINDCURR: return DUNE::IMC::Loiter::DirectionEnum::LD_IWINDCURR;
    }
}


// ================ Loiter.LoiterTypeEnum Message ================
IMC_DCCL::Loiter::LoiterTypeEnum encodeLoiterLoiterTypeEnum(const uint8_t& imc_src)
{
    switch (imc_src) {
        case DUNE::IMC::Loiter::LoiterTypeEnum::LT_DEFAULT: return IMC_DCCL::Loiter::LT_DEFAULT;
        case DUNE::IMC::Loiter::LoiterTypeEnum::LT_CIRCULAR: return IMC_DCCL::Loiter::LT_CIRCULAR;
        case DUNE::IMC::Loiter::LoiterTypeEnum::LT_RACETRACK: return IMC_DCCL::Loiter::LT_RACETRACK;
        case DUNE::IMC::Loiter::LoiterTypeEnum::LT_EIGHT: return IMC_DCCL::Loiter::LT_EIGHT;
        case DUNE::IMC::Loiter::LoiterTypeEnum::LT_HOVER: return IMC_DCCL::Loiter::LT_HOVER;
        default: return IMC_DCCL::Loiter::LT_UNKNOWN;
    }
}


// ================ Loiter.LoiterTypeEnum Message ================
DUNE::IMC::Loiter::LoiterTypeEnum decodeLoiterLoiterTypeEnum(const uint8_t& dccl_src)
{
    switch (dccl_src) {
        case IMC_DCCL::Loiter::LT_DEFAULT: return DUNE::IMC::Loiter::LoiterTypeEnum::LT_DEFAULT;
        case IMC_DCCL::Loiter::LT_CIRCULAR: return DUNE::IMC::Loiter::LoiterTypeEnum::LT_CIRCULAR;
        case IMC_DCCL::Loiter::LT_RACETRACK: return DUNE::IMC::Loiter::LoiterTypeEnum::LT_RACETRACK;
        case IMC_DCCL::Loiter::LT_EIGHT: return DUNE::IMC::Loiter::LoiterTypeEnum::LT_EIGHT;
        case IMC_DCCL::Loiter::LT_HOVER: return DUNE::IMC::Loiter::LoiterTypeEnum::LT_HOVER;
    }
}


// ================ PlanControl.OperationEnum Message ================
IMC_DCCL::PlanControl::OperationEnum encodePlanControlOperationEnum(const uint8_t& imc_src)
{
    switch (imc_src) {
        case DUNE::IMC::PlanControl::OperationEnum::PC_START: return IMC_DCCL::PlanControl::PC_START;
        case DUNE::IMC::PlanControl::OperationEnum::PC_STOP: return IMC_DCCL::PlanControl::PC_STOP;
        case DUNE::IMC::PlanControl::OperationEnum::PC_LOAD: return IMC_DCCL::PlanControl::PC_LOAD;
        case DUNE::IMC::PlanControl::OperationEnum::PC_GET: return IMC_DCCL::PlanControl::PC_GET;
        default: return IMC_DCCL::PlanControl::PCOE_UNKNOWN;
    }
}


// ================ PlanControl.OperationEnum Message ================
DUNE::IMC::PlanControl::OperationEnum decodePlanControlOperationEnum(const uint8_t& dccl_src)
{
    switch (dccl_src) {
        case IMC_DCCL::PlanControl::PC_START: return DUNE::IMC::PlanControl::OperationEnum::PC_START;
        case IMC_DCCL::PlanControl::PC_STOP: return DUNE::IMC::PlanControl::OperationEnum::PC_STOP;
        case IMC_DCCL::PlanControl::PC_LOAD: return DUNE::IMC::PlanControl::OperationEnum::PC_LOAD;
        case IMC_DCCL::PlanControl::PC_GET: return DUNE::IMC::PlanControl::OperationEnum::PC_GET;
    }
}


// ================ PlanControl.TypeEnum Message ================
IMC_DCCL::PlanControl::TypeEnum encodePlanControlTypeEnum(const uint8_t& imc_src)
{
    switch (imc_src) {
        case DUNE::IMC::PlanControl::TypeEnum::PC_REQUEST: return IMC_DCCL::PlanControl::PC_REQUEST;
        case DUNE::IMC::PlanControl::TypeEnum::PC_SUCCESS: return IMC_DCCL::PlanControl::PC_SUCCESS;
        case DUNE::IMC::PlanControl::TypeEnum::PC_FAILURE: return IMC_DCCL::PlanControl::PC_FAILURE;
        case DUNE::IMC::PlanControl::TypeEnum::PC_IN_PROGRESS: return IMC_DCCL::PlanControl::PC_IN_PROGRESS;
        default: return IMC_DCCL::PlanControl::PCTE_UNKNOWN;
    }
}


// ================ PlanControl.TypeEnum Message ================
DUNE::IMC::PlanControl::TypeEnum decodePlanControlTypeEnum(const uint8_t& dccl_src)
{
    switch (dccl_src) {
        case IMC_DCCL::PlanControl::PC_REQUEST: return DUNE::IMC::PlanControl::TypeEnum::PC_REQUEST;
        case IMC_DCCL::PlanControl::PC_SUCCESS: return DUNE::IMC::PlanControl::TypeEnum::PC_SUCCESS;
        case IMC_DCCL::PlanControl::PC_FAILURE: return DUNE::IMC::PlanControl::TypeEnum::PC_FAILURE;
        case IMC_DCCL::PlanControl::PC_IN_PROGRESS: return DUNE::IMC::PlanControl::TypeEnum::PC_IN_PROGRESS;
    }
}


// ================ PlanControlState.LastPlanOutcomeEnum Message ================
IMC_DCCL::PlanControlState::LastPlanOutcomeEnum encodePlanControlStateLastPlanOutcomeEnum(const uint8_t& imc_src)
{
    switch (imc_src) {
        case DUNE::IMC::PlanControlState::LastPlanOutcomeEnum::LPO_NONE: return IMC_DCCL::PlanControlState::LPO_NONE;
        case DUNE::IMC::PlanControlState::LastPlanOutcomeEnum::LPO_SUCCESS: return IMC_DCCL::PlanControlState::LPO_SUCCESS;
        case DUNE::IMC::PlanControlState::LastPlanOutcomeEnum::LPO_FAILURE: return IMC_DCCL::PlanControlState::LPO_FAILURE;
        default: return IMC_DCCL::PlanControlState::LPO_UNKNOWN;
    }
}


// ================ PlanControlState.LastPlanOutcomeEnum Message ================
DUNE::IMC::PlanControlState::LastPlanOutcomeEnum decodePlanControlStateLastPlanOutcomeEnum(const uint8_t& dccl_src)
{
    switch (dccl_src) {
        case IMC_DCCL::PlanControlState::LPO_NONE: return DUNE::IMC::PlanControlState::LastPlanOutcomeEnum::LPO_NONE;
        case IMC_DCCL::PlanControlState::LPO_SUCCESS: return DUNE::IMC::PlanControlState::LastPlanOutcomeEnum::LPO_SUCCESS;
        case IMC_DCCL::PlanControlState::LPO_FAILURE: return DUNE::IMC::PlanControlState::LastPlanOutcomeEnum::LPO_FAILURE;
    }
}


// ================ PlanControlState.StateEnum Message ================
IMC_DCCL::PlanControlState::StateEnum encodePlanControlStateStateEnum(const uint8_t& imc_src)
{
    switch (imc_src) {
        case DUNE::IMC::PlanControlState::StateEnum::PCS_BLOCKED: return IMC_DCCL::PlanControlState::PCS_BLOCKED;
        case DUNE::IMC::PlanControlState::StateEnum::PCS_READY: return IMC_DCCL::PlanControlState::PCS_READY;
        case DUNE::IMC::PlanControlState::StateEnum::PCS_INITIALIZING: return IMC_DCCL::PlanControlState::PCS_INITIALIZING;
        case DUNE::IMC::PlanControlState::StateEnum::PCS_EXECUTING: return IMC_DCCL::PlanControlState::PCS_EXECUTING;
        default: return IMC_DCCL::PlanControlState::PCS_UNKNOWN;
    }
}


// ================ PlanControlState.StateEnum Message ================
DUNE::IMC::PlanControlState::StateEnum decodePlanControlStateStateEnum(const uint8_t& dccl_src)
{
    switch (dccl_src) {
        case IMC_DCCL::PlanControlState::PCS_BLOCKED: return DUNE::IMC::PlanControlState::StateEnum::PCS_BLOCKED;
        case IMC_DCCL::PlanControlState::PCS_READY: return DUNE::IMC::PlanControlState::StateEnum::PCS_READY;
        case IMC_DCCL::PlanControlState::PCS_INITIALIZING: return DUNE::IMC::PlanControlState::StateEnum::PCS_INITIALIZING;
        case IMC_DCCL::PlanControlState::PCS_EXECUTING: return DUNE::IMC::PlanControlState::StateEnum::PCS_EXECUTING;
    }
}


// ================ PlanDB.OperationEnum Message ================
IMC_DCCL::PlanDB::OperationEnum encodePlanDBOperationEnum(const uint8_t& imc_src)
{
    switch (imc_src) {
        case DUNE::IMC::PlanDB::OperationEnum::DBOP_SET: return IMC_DCCL::PlanDB::DBOP_SET;
        case DUNE::IMC::PlanDB::OperationEnum::DBOP_DEL: return IMC_DCCL::PlanDB::DBOP_DEL;
        case DUNE::IMC::PlanDB::OperationEnum::DBOP_GET: return IMC_DCCL::PlanDB::DBOP_GET;
        case DUNE::IMC::PlanDB::OperationEnum::DBOP_GET_INFO: return IMC_DCCL::PlanDB::DBOP_GET_INFO;
        case DUNE::IMC::PlanDB::OperationEnum::DBOP_CLEAR: return IMC_DCCL::PlanDB::DBOP_CLEAR;
        case DUNE::IMC::PlanDB::OperationEnum::DBOP_GET_STATE: return IMC_DCCL::PlanDB::DBOP_GET_STATE;
        case DUNE::IMC::PlanDB::OperationEnum::DBOP_GET_DSTATE: return IMC_DCCL::PlanDB::DBOP_GET_DSTATE;
        case DUNE::IMC::PlanDB::OperationEnum::DBOP_BOOT: return IMC_DCCL::PlanDB::DBOP_BOOT;
        default: return IMC_DCCL::PlanDB::DBOP_UNKNOWN;
    }
}


// ================ PlanDB.OperationEnum Message ================
DUNE::IMC::PlanDB::OperationEnum decodePlanDBOperationEnum(const uint8_t& dccl_src)
{
    switch (dccl_src) {
        case IMC_DCCL::PlanDB::DBOP_SET: return DUNE::IMC::PlanDB::OperationEnum::DBOP_SET;
        case IMC_DCCL::PlanDB::DBOP_DEL: return DUNE::IMC::PlanDB::OperationEnum::DBOP_DEL;
        case IMC_DCCL::PlanDB::DBOP_GET: return DUNE::IMC::PlanDB::OperationEnum::DBOP_GET;
        case IMC_DCCL::PlanDB::DBOP_GET_INFO: return DUNE::IMC::PlanDB::OperationEnum::DBOP_GET_INFO;
        case IMC_DCCL::PlanDB::DBOP_CLEAR: return DUNE::IMC::PlanDB::OperationEnum::DBOP_CLEAR;
        case IMC_DCCL::PlanDB::DBOP_GET_STATE: return DUNE::IMC::PlanDB::OperationEnum::DBOP_GET_STATE;
        case IMC_DCCL::PlanDB::DBOP_GET_DSTATE: return DUNE::IMC::PlanDB::OperationEnum::DBOP_GET_DSTATE;
        case IMC_DCCL::PlanDB::DBOP_BOOT: return DUNE::IMC::PlanDB::OperationEnum::DBOP_BOOT;
    }
}


// ================ PlanDB.TypeEnum Message ================
IMC_DCCL::PlanDB::TypeEnum encodePlanDBTypeEnum(const uint8_t& imc_src)
{
    switch (imc_src) {
        case DUNE::IMC::PlanDB::TypeEnum::DBT_REQUEST: return IMC_DCCL::PlanDB::DBT_REQUEST;
        case DUNE::IMC::PlanDB::TypeEnum::DBT_SUCCESS: return IMC_DCCL::PlanDB::DBT_SUCCESS;
        case DUNE::IMC::PlanDB::TypeEnum::DBT_FAILURE: return IMC_DCCL::PlanDB::DBT_FAILURE;
        case DUNE::IMC::PlanDB::TypeEnum::DBT_IN_PROGRESS: return IMC_DCCL::PlanDB::DBT_IN_PROGRESS;
        default: return IMC_DCCL::PlanDB::DBT_UNKNOWN;
    }
}


// ================ PlanDB.TypeEnum Message ================
DUNE::IMC::PlanDB::TypeEnum decodePlanDBTypeEnum(const uint8_t& dccl_src)
{
    switch (dccl_src) {
        case IMC_DCCL::PlanDB::DBT_REQUEST: return DUNE::IMC::PlanDB::TypeEnum::DBT_REQUEST;
        case IMC_DCCL::PlanDB::DBT_SUCCESS: return DUNE::IMC::PlanDB::TypeEnum::DBT_SUCCESS;
        case IMC_DCCL::PlanDB::DBT_FAILURE: return DUNE::IMC::PlanDB::TypeEnum::DBT_FAILURE;
        case IMC_DCCL::PlanDB::DBT_IN_PROGRESS: return DUNE::IMC::PlanDB::TypeEnum::DBT_IN_PROGRESS;
    }
}


// ================ PlanStatistics.TypeEnum Message ================
IMC_DCCL::PlanStatistics::TypeEnum encodePlanStatisticsTypeEnum(const uint8_t& imc_src)
{
    switch (imc_src) {
        case DUNE::IMC::PlanStatistics::TypeEnum::TP_PREPLAN: return IMC_DCCL::PlanStatistics::TP_PREPLAN;
        case DUNE::IMC::PlanStatistics::TypeEnum::TP_INPLAN: return IMC_DCCL::PlanStatistics::TP_INPLAN;
        case DUNE::IMC::PlanStatistics::TypeEnum::TP_POSTPLAN: return IMC_DCCL::PlanStatistics::TP_POSTPLAN;
        default: return IMC_DCCL::PlanStatistics::TP_UNKNOWN;
    }
}


// ================ PlanStatistics.TypeEnum Message ================
DUNE::IMC::PlanStatistics::TypeEnum decodePlanStatisticsTypeEnum(const uint8_t& dccl_src)
{
    switch (dccl_src) {
        case IMC_DCCL::PlanStatistics::TP_PREPLAN: return DUNE::IMC::PlanStatistics::TypeEnum::TP_PREPLAN;
        case IMC_DCCL::PlanStatistics::TP_INPLAN: return DUNE::IMC::PlanStatistics::TypeEnum::TP_INPLAN;
        case IMC_DCCL::PlanStatistics::TP_POSTPLAN: return DUNE::IMC::PlanStatistics::TypeEnum::TP_POSTPLAN;
    }
}


// ================ SpeedUnits Message ================
IMC_DCCL::SpeedUnits encodeSpeedUnits(const uint8_t& imc_src)
{
    switch (imc_src) {
        case DUNE::IMC::SpeedUnits::SUNITS_METERS_PS: return IMC_DCCL::SpeedUnits::SUNITS_METERS_PS;
        case DUNE::IMC::SpeedUnits::SUNITS_RPM: return IMC_DCCL::SpeedUnits::SUNITS_RPM;
        case DUNE::IMC::SpeedUnits::SUNITS_PERCENTAGE: return IMC_DCCL::SpeedUnits::SUNITS_PERCENTAGE;
        default: return IMC_DCCL::SpeedUnits::SUNITS_UNKNOWN;
    }
}


// ================ SpeedUnits Message ================
DUNE::IMC::SpeedUnits decodeSpeedUnits(const uint8_t& dccl_src)
{
    switch (dccl_src) {
        case IMC_DCCL::SpeedUnits::SUNITS_METERS_PS: return DUNE::IMC::SpeedUnits::SUNITS_METERS_PS;
        case IMC_DCCL::SpeedUnits::SUNITS_RPM: return DUNE::IMC::SpeedUnits::SUNITS_RPM;
        case IMC_DCCL::SpeedUnits::SUNITS_PERCENTAGE: return DUNE::IMC::SpeedUnits::SUNITS_PERCENTAGE;
    }
}


// ================ VehicleState.OperationModeEnum Message ================
IMC_DCCL::VehicleState::OperationModeEnum encodeVehicleStateOperationModeEnum(const uint8_t& imc_src)
{
    switch (imc_src) {
        case DUNE::IMC::VehicleState::OperationModeEnum::VS_SERVICE: return IMC_DCCL::VehicleState::VS_SERVICE;
        case DUNE::IMC::VehicleState::OperationModeEnum::VS_CALIBRATION: return IMC_DCCL::VehicleState::VS_CALIBRATION;
        case DUNE::IMC::VehicleState::OperationModeEnum::VS_ERROR: return IMC_DCCL::VehicleState::VS_ERROR;
        case DUNE::IMC::VehicleState::OperationModeEnum::VS_MANEUVER: return IMC_DCCL::VehicleState::VS_MANEUVER;
        case DUNE::IMC::VehicleState::OperationModeEnum::VS_EXTERNAL: return IMC_DCCL::VehicleState::VS_EXTERNAL;
        case DUNE::IMC::VehicleState::OperationModeEnum::VS_BOOT: return IMC_DCCL::VehicleState::VS_BOOT;
        default: return IMC_DCCL::VehicleState::VS_UNKNOWN;
    }
}


// ================ VehicleState.OperationModeEnum Message ================
DUNE::IMC::VehicleState::OperationModeEnum decodeVehicleStateOperationModeEnum(const uint8_t& dccl_src)
{
    switch (dccl_src) {
        case IMC_DCCL::VehicleState::VS_SERVICE: return DUNE::IMC::VehicleState::OperationModeEnum::VS_SERVICE;
        case IMC_DCCL::VehicleState::VS_CALIBRATION: return DUNE::IMC::VehicleState::OperationModeEnum::VS_CALIBRATION;
        case IMC_DCCL::VehicleState::VS_ERROR: return DUNE::IMC::VehicleState::OperationModeEnum::VS_ERROR;
        case IMC_DCCL::VehicleState::VS_MANEUVER: return DUNE::IMC::VehicleState::OperationModeEnum::VS_MANEUVER;
        case IMC_DCCL::VehicleState::VS_EXTERNAL: return DUNE::IMC::VehicleState::OperationModeEnum::VS_EXTERNAL;
        case IMC_DCCL::VehicleState::VS_BOOT: return DUNE::IMC::VehicleState::OperationModeEnum::VS_BOOT;
    }
}


// ================ VerticalProfile.ParameterEnum Message ================
IMC_DCCL::VerticalProfile::ParameterEnum encodeVerticalProfileParameterEnum(const uint8_t& imc_src)
{
    switch (imc_src) {
        case DUNE::IMC::VerticalProfile::ParameterEnum::PROF_TEMPERATURE: return IMC_DCCL::VerticalProfile::PROF_TEMPERATURE;
        case DUNE::IMC::VerticalProfile::ParameterEnum::PROF_SALINITY: return IMC_DCCL::VerticalProfile::PROF_SALINITY;
        case DUNE::IMC::VerticalProfile::ParameterEnum::PROF_CONDUCTIVITY: return IMC_DCCL::VerticalProfile::PROF_CONDUCTIVITY;
        case DUNE::IMC::VerticalProfile::ParameterEnum::PROF_PH: return IMC_DCCL::VerticalProfile::PROF_PH;
        case DUNE::IMC::VerticalProfile::ParameterEnum::PROF_REDOX: return IMC_DCCL::VerticalProfile::PROF_REDOX;
        case DUNE::IMC::VerticalProfile::ParameterEnum::PROF_CHLOROPHYLL: return IMC_DCCL::VerticalProfile::PROF_CHLOROPHYLL;
        case DUNE::IMC::VerticalProfile::ParameterEnum::PROF_TURBIDITY: return IMC_DCCL::VerticalProfile::PROF_TURBIDITY;
        case DUNE::IMC::VerticalProfile::ParameterEnum::PROF_CURRENT_VELOCITY_N: return IMC_DCCL::VerticalProfile::PROF_CURRENT_VELOCITY_N;
        case DUNE::IMC::VerticalProfile::ParameterEnum::PROF_CURRENT_VELOCITY_E: return IMC_DCCL::VerticalProfile::PROF_CURRENT_VELOCITY_E;
        case DUNE::IMC::VerticalProfile::ParameterEnum::PROF_ABSOLUTE_WIND_AVG: return IMC_DCCL::VerticalProfile::PROF_ABSOLUTE_WIND_AVG;
        case DUNE::IMC::VerticalProfile::ParameterEnum::PROF_ABSOLUTE_WIND_MAX: return IMC_DCCL::VerticalProfile::PROF_ABSOLUTE_WIND_MAX;
        case DUNE::IMC::VerticalProfile::ParameterEnum::PROF_DISS_ORGANIC_MATTER: return IMC_DCCL::VerticalProfile::PROF_DISS_ORGANIC_MATTER;
        case DUNE::IMC::VerticalProfile::ParameterEnum::PROF_DISS_OXYGEN: return IMC_DCCL::VerticalProfile::PROF_DISS_OXYGEN;
        default: return IMC_DCCL::VerticalProfile::PROF_UNKNOWN;
    }
}


// ================ VerticalProfile.ParameterEnum Message ================
DUNE::IMC::VerticalProfile::ParameterEnum decodeVerticalProfileParameterEnum(const uint8_t& dccl_src)
{
    switch (dccl_src) {
        case IMC_DCCL::VerticalProfile::PROF_TEMPERATURE: return DUNE::IMC::VerticalProfile::ParameterEnum::PROF_TEMPERATURE;
        case IMC_DCCL::VerticalProfile::PROF_SALINITY: return DUNE::IMC::VerticalProfile::ParameterEnum::PROF_SALINITY;
        case IMC_DCCL::VerticalProfile::PROF_CONDUCTIVITY: return DUNE::IMC::VerticalProfile::ParameterEnum::PROF_CONDUCTIVITY;
        case IMC_DCCL::VerticalProfile::PROF_PH: return DUNE::IMC::VerticalProfile::ParameterEnum::PROF_PH;
        case IMC_DCCL::VerticalProfile::PROF_REDOX: return DUNE::IMC::VerticalProfile::ParameterEnum::PROF_REDOX;
        case IMC_DCCL::VerticalProfile::PROF_CHLOROPHYLL: return DUNE::IMC::VerticalProfile::ParameterEnum::PROF_CHLOROPHYLL;
        case IMC_DCCL::VerticalProfile::PROF_TURBIDITY: return DUNE::IMC::VerticalProfile::ParameterEnum::PROF_TURBIDITY;
        case IMC_DCCL::VerticalProfile::PROF_CURRENT_VELOCITY_N: return DUNE::IMC::VerticalProfile::ParameterEnum::PROF_CURRENT_VELOCITY_N;
        case IMC_DCCL::VerticalProfile::PROF_CURRENT_VELOCITY_E: return DUNE::IMC::VerticalProfile::ParameterEnum::PROF_CURRENT_VELOCITY_E;
        case IMC_DCCL::VerticalProfile::PROF_ABSOLUTE_WIND_AVG: return DUNE::IMC::VerticalProfile::ParameterEnum::PROF_ABSOLUTE_WIND_AVG;
        case IMC_DCCL::VerticalProfile::PROF_ABSOLUTE_WIND_MAX: return DUNE::IMC::VerticalProfile::ParameterEnum::PROF_ABSOLUTE_WIND_MAX;
        case IMC_DCCL::VerticalProfile::PROF_DISS_ORGANIC_MATTER: return DUNE::IMC::VerticalProfile::ParameterEnum::PROF_DISS_ORGANIC_MATTER;
        case IMC_DCCL::VerticalProfile::PROF_DISS_OXYGEN: return DUNE::IMC::VerticalProfile::ParameterEnum::PROF_DISS_OXYGEN;
    }
}


// ================ ZUnits Message ================
IMC_DCCL::ZUnits encodeZUnits(const uint8_t& imc_src)
{
    switch (imc_src) {
        case DUNE::IMC::ZUnits::Z_NONE: return IMC_DCCL::ZUnits::Z_NONE;
        case DUNE::IMC::ZUnits::Z_DEPTH: return IMC_DCCL::ZUnits::Z_DEPTH;
        case DUNE::IMC::ZUnits::Z_ALTITUDE: return IMC_DCCL::ZUnits::Z_ALTITUDE;
        case DUNE::IMC::ZUnits::Z_HEIGHT: return IMC_DCCL::ZUnits::Z_HEIGHT;
        default: return IMC_DCCL::ZUnits::Z_UNKNOWN;
    }
}


// ================ ZUnits Message ================
DUNE::IMC::ZUnits decodeZUnits(const uint8_t& dccl_src)
{
    switch (dccl_src) {
        case IMC_DCCL::ZUnits::Z_NONE: return DUNE::IMC::ZUnits::Z_NONE;
        case IMC_DCCL::ZUnits::Z_DEPTH: return DUNE::IMC::ZUnits::Z_DEPTH;
        case IMC_DCCL::ZUnits::Z_ALTITUDE: return DUNE::IMC::ZUnits::Z_ALTITUDE;
        case IMC_DCCL::ZUnits::Z_HEIGHT: return DUNE::IMC::ZUnits::Z_HEIGHT;
    }
}


// ================ EntityNameEnum Message ================
IMC_DCCL::EntityNameEnum encodeEntityNameEnum(const std::string& imc_src)
{
        if (imc_src == "Acoustic Modem") return IMC_DCCL::EntityNameEnum::ACOUSTIC_MODEM;
        if (imc_src == "ADCP") return IMC_DCCL::EntityNameEnum::ADCP;
        if (imc_src == "Autopilot") return IMC_DCCL::EntityNameEnum::AUTOPILOT;
        if (imc_src == "Camera") return IMC_DCCL::EntityNameEnum::CAMERA;
        if (imc_src == "CTD") return IMC_DCCL::EntityNameEnum::CTD;
        if (imc_src == "Dissolved Oxygen") return IMC_DCCL::EntityNameEnum::DISSOLVED_OXYGEN;
        if (imc_src == "Fluorometers") return IMC_DCCL::EntityNameEnum::FLUOROMETERS;
        if (imc_src == "Formation Coordinator") return IMC_DCCL::EntityNameEnum::FORMATION_COORDINATOR;
        if (imc_src == "Heading Controller") return IMC_DCCL::EntityNameEnum::HEADING_CONTROLLER;
        if (imc_src == "Height Control") return IMC_DCCL::EntityNameEnum::HEIGHT_CONTROL;
        if (imc_src == "LBL") return IMC_DCCL::EntityNameEnum::LBL;
        if (imc_src == "Motor Controller - Channel 0") return IMC_DCCL::EntityNameEnum::MOTOR_CONTROLLER_CHANNEL_0;
        if (imc_src == "Motor Controller - Channel 1") return IMC_DCCL::EntityNameEnum::MOTOR_CONTROLLER_CHANNEL_1;
        if (imc_src == "Multibeam") return IMC_DCCL::EntityNameEnum::MULTIBEAM;
        if (imc_src == "Path Control") return IMC_DCCL::EntityNameEnum::PATH_CONTROL;
        if (imc_src == "Path Control Leader") return IMC_DCCL::EntityNameEnum::PATH_CONTROL_LEADER;
        if (imc_src == "Pencil Beam") return IMC_DCCL::EntityNameEnum::PENCIL_BEAM;
        if (imc_src == "Photo Trigger") return IMC_DCCL::EntityNameEnum::PHOTO_TRIGGER;
        if (imc_src == "Ranger") return IMC_DCCL::EntityNameEnum::RANGER;
        if (imc_src == "Remote Control") return IMC_DCCL::EntityNameEnum::REMOTE_CONTROL;
        if (imc_src == "Remote Operation") return IMC_DCCL::EntityNameEnum::REMOTE_OPERATION;
        if (imc_src == "Sidescan") return IMC_DCCL::EntityNameEnum::SIDESCAN;
        if (imc_src == "Slave CPU") return IMC_DCCL::EntityNameEnum::SLAVE_CPU;
        if (imc_src == "UAVCamera") return IMC_DCCL::EntityNameEnum::UAVCAMERA;
        return IMC_DCCL::EntityNameEnum::EN_UNKNOWN;
}


// ================ EntityNameEnum Message ================
std::string decodeEntityNameEnum(const uint8_t& dccl_src)
{
        if (dccl_src == IMC_DCCL::EntityNameEnum::ACOUSTIC_MODEM) return "Acoustic Modem";
        if (dccl_src == IMC_DCCL::EntityNameEnum::ADCP) return "ADCP";
        if (dccl_src == IMC_DCCL::EntityNameEnum::AUTOPILOT) return "Autopilot";
        if (dccl_src == IMC_DCCL::EntityNameEnum::CAMERA) return "Camera";
        if (dccl_src == IMC_DCCL::EntityNameEnum::CTD) return "CTD";
        if (dccl_src == IMC_DCCL::EntityNameEnum::DISSOLVED_OXYGEN) return "Dissolved Oxygen";
        if (dccl_src == IMC_DCCL::EntityNameEnum::FLUOROMETERS) return "Fluorometers";
        if (dccl_src == IMC_DCCL::EntityNameEnum::FORMATION_COORDINATOR) return "Formation Coordinator";
        if (dccl_src == IMC_DCCL::EntityNameEnum::HEADING_CONTROLLER) return "Heading Controller";
        if (dccl_src == IMC_DCCL::EntityNameEnum::HEIGHT_CONTROL) return "Height Control";
        if (dccl_src == IMC_DCCL::EntityNameEnum::LBL) return "LBL";
        if (dccl_src == IMC_DCCL::EntityNameEnum::MOTOR_CONTROLLER_CHANNEL_0) return "Motor Controller - Channel 0";
        if (dccl_src == IMC_DCCL::EntityNameEnum::MOTOR_CONTROLLER_CHANNEL_1) return "Motor Controller - Channel 1";
        if (dccl_src == IMC_DCCL::EntityNameEnum::MULTIBEAM) return "Multibeam";
        if (dccl_src == IMC_DCCL::EntityNameEnum::PATH_CONTROL) return "Path Control";
        if (dccl_src == IMC_DCCL::EntityNameEnum::PATH_CONTROL_LEADER) return "Path Control Leader";
        if (dccl_src == IMC_DCCL::EntityNameEnum::PENCIL_BEAM) return "Pencil Beam";
        if (dccl_src == IMC_DCCL::EntityNameEnum::PHOTO_TRIGGER) return "Photo Trigger";
        if (dccl_src == IMC_DCCL::EntityNameEnum::RANGER) return "Ranger";
        if (dccl_src == IMC_DCCL::EntityNameEnum::REMOTE_CONTROL) return "Remote Control";
        if (dccl_src == IMC_DCCL::EntityNameEnum::REMOTE_OPERATION) return "Remote Operation";
        if (dccl_src == IMC_DCCL::EntityNameEnum::SIDESCAN) return "Sidescan";
        if (dccl_src == IMC_DCCL::EntityNameEnum::SLAVE_CPU) return "Slave CPU";
        if (dccl_src == IMC_DCCL::EntityNameEnum::UAVCAMERA) return "UAVCamera";
}


// ================ ManeuverType Message ================
IMC_DCCL::ManeuverType encodeManeuverType(const std::string& imc_src)
{
        if (imc_src == "Goto") return IMC_DCCL::ManeuverType::GOTO;
        if (imc_src == "Loiter") return IMC_DCCL::ManeuverType::LOITER;
        if (imc_src == "FollowPath") return IMC_DCCL::ManeuverType::FOLLOWPATH;
        if (imc_src == "StationKeeping") return IMC_DCCL::ManeuverType::STATIONKEEPING;
        return IMC_DCCL::ManeuverType::MT_UNKNOWN;
}


// ================ ManeuverType Message ================
std::string decodeManeuverType(const uint8_t& dccl_src)
{
        if (dccl_src == IMC_DCCL::ManeuverType::GOTO) return "Goto";
        if (dccl_src == IMC_DCCL::ManeuverType::LOITER) return "Loiter";
        if (dccl_src == IMC_DCCL::ManeuverType::FOLLOWPATH) return "FollowPath";
        if (dccl_src == IMC_DCCL::ManeuverType::STATIONKEEPING) return "StationKeeping";
}


// ================ ParamName Message ================
IMC_DCCL::ParamName encodeParamName(const std::string& imc_src)
{
        if (imc_src == "Active") return IMC_DCCL::ParamName::ACTIVE;
        if (imc_src == "Ardupilot Tracker") return IMC_DCCL::ParamName::ARDUPILOT_TRACKER;
        if (imc_src == "Bathymetry Channel Available") return IMC_DCCL::ParamName::BATHYMETRY_CHANNEL_AVAILABLE;
        if (imc_src == "Bottom Track -- Minimum Depth") return IMC_DCCL::ParamName::BOTTOM_TRACK_MINIMUM_DEPTH;
        if (imc_src == "Data Bits") return IMC_DCCL::ParamName::DATA_BITS;
        if (imc_src == "FLIR Duo R") return IMC_DCCL::ParamName::FLIR_DUO_R;
        if (imc_src == "Formation Flight") return IMC_DCCL::ParamName::FORMATION_FLIGHT;
        if (imc_src == "Formation Positions") return IMC_DCCL::ParamName::FORMATION_POSITIONS;
        if (imc_src == "Formation Reference Frame") return IMC_DCCL::ParamName::FORMATION_REFERENCE_FRAME;
        if (imc_src == "Frequency") return IMC_DCCL::ParamName::FREQUENCY;
        if (imc_src == "High-Frequency Channel") return IMC_DCCL::ParamName::HIGH_FREQUENCY_CHANNEL;
        if (imc_src == "High-Frequency Channels") return IMC_DCCL::ParamName::HIGH_FREQUENCY_CHANNELS;
        if (imc_src == "High-Frequency Range") return IMC_DCCL::ParamName::HIGH_FREQUENCY_RANGE;
        if (imc_src == "Low-Frequency Bathymetry Channel") return IMC_DCCL::ParamName::LOW_FREQUENCY_BATHYMETRY_CHANNEL;
        if (imc_src == "Low-Frequency Channel") return IMC_DCCL::ParamName::LOW_FREQUENCY_CHANNEL;
        if (imc_src == "Low-Frequency Channels") return IMC_DCCL::ParamName::LOW_FREQUENCY_CHANNELS;
        if (imc_src == "Low-Frequency Range") return IMC_DCCL::ParamName::LOW_FREQUENCY_RANGE;
        if (imc_src == "Onboard Camera") return IMC_DCCL::ParamName::ONBOARD_CAMERA;
        if (imc_src == "Optimize for this Speed") return IMC_DCCL::ParamName::OPTIMIZE_FOR_THIS_SPEED;
        if (imc_src == "Periodicity of Data Sampling") return IMC_DCCL::ParamName::PERIODICITY_OF_DATA_SAMPLING;
        if (imc_src == "Profile Mode") return IMC_DCCL::ParamName::PROFILE_MODE;
        if (imc_src == "Range") return IMC_DCCL::ParamName::RANGE;
        if (imc_src == "Range Multiplier") return IMC_DCCL::ParamName::RANGE_MULTIPLIER;
        if (imc_src == "Sample Time Duration") return IMC_DCCL::ParamName::SAMPLE_TIME_DURATION;
        if (imc_src == "Scale Factor") return IMC_DCCL::ParamName::SCALE_FACTOR;
        if (imc_src == "Sector Width") return IMC_DCCL::ParamName::SECTOR_WIDTH;
        if (imc_src == "Shutter Value (ms)") return IMC_DCCL::ParamName::SHUTTER_VALUE_MS;
        if (imc_src == "Step Size") return IMC_DCCL::ParamName::STEP_SIZE;
        if (imc_src == "Strobe Delay (us)") return IMC_DCCL::ParamName::STROBE_DELAY_US;
        if (imc_src == "Thruster Always On") return IMC_DCCL::ParamName::THRUSTER_ALWAYS_ON;
        if (imc_src == "Transition to FW") return IMC_DCCL::ParamName::TRANSITION_TO_FW;
        if (imc_src == "Transition to MC") return IMC_DCCL::ParamName::TRANSITION_TO_MC;
        if (imc_src == "Use controller") return IMC_DCCL::ParamName::USE_CONTROLLER;
        if (imc_src == "Vehicle List") return IMC_DCCL::ParamName::VEHICLE_LIST;
        return IMC_DCCL::ParamName::PN_UNKNOWN;
}


// ================ ParamName Message ================
std::string decodeParamName(const uint8_t& dccl_src)
{
        if (dccl_src == IMC_DCCL::ParamName::ACTIVE) return "Active";
        if (dccl_src == IMC_DCCL::ParamName::ARDUPILOT_TRACKER) return "Ardupilot Tracker";
        if (dccl_src == IMC_DCCL::ParamName::BATHYMETRY_CHANNEL_AVAILABLE) return "Bathymetry Channel Available";
        if (dccl_src == IMC_DCCL::ParamName::BOTTOM_TRACK_MINIMUM_DEPTH) return "Bottom Track -- Minimum Depth";
        if (dccl_src == IMC_DCCL::ParamName::DATA_BITS) return "Data Bits";
        if (dccl_src == IMC_DCCL::ParamName::FLIR_DUO_R) return "FLIR Duo R";
        if (dccl_src == IMC_DCCL::ParamName::FORMATION_FLIGHT) return "Formation Flight";
        if (dccl_src == IMC_DCCL::ParamName::FORMATION_POSITIONS) return "Formation Positions";
        if (dccl_src == IMC_DCCL::ParamName::FORMATION_REFERENCE_FRAME) return "Formation Reference Frame";
        if (dccl_src == IMC_DCCL::ParamName::FREQUENCY) return "Frequency";
        if (dccl_src == IMC_DCCL::ParamName::HIGH_FREQUENCY_CHANNEL) return "High-Frequency Channel";
        if (dccl_src == IMC_DCCL::ParamName::HIGH_FREQUENCY_CHANNELS) return "High-Frequency Channels";
        if (dccl_src == IMC_DCCL::ParamName::HIGH_FREQUENCY_RANGE) return "High-Frequency Range";
        if (dccl_src == IMC_DCCL::ParamName::LOW_FREQUENCY_BATHYMETRY_CHANNEL) return "Low-Frequency Bathymetry Channel";
        if (dccl_src == IMC_DCCL::ParamName::LOW_FREQUENCY_CHANNEL) return "Low-Frequency Channel";
        if (dccl_src == IMC_DCCL::ParamName::LOW_FREQUENCY_CHANNELS) return "Low-Frequency Channels";
        if (dccl_src == IMC_DCCL::ParamName::LOW_FREQUENCY_RANGE) return "Low-Frequency Range";
        if (dccl_src == IMC_DCCL::ParamName::ONBOARD_CAMERA) return "Onboard Camera";
        if (dccl_src == IMC_DCCL::ParamName::OPTIMIZE_FOR_THIS_SPEED) return "Optimize for this Speed";
        if (dccl_src == IMC_DCCL::ParamName::PERIODICITY_OF_DATA_SAMPLING) return "Periodicity of Data Sampling";
        if (dccl_src == IMC_DCCL::ParamName::PROFILE_MODE) return "Profile Mode";
        if (dccl_src == IMC_DCCL::ParamName::RANGE) return "Range";
        if (dccl_src == IMC_DCCL::ParamName::RANGE_MULTIPLIER) return "Range Multiplier";
        if (dccl_src == IMC_DCCL::ParamName::SAMPLE_TIME_DURATION) return "Sample Time Duration";
        if (dccl_src == IMC_DCCL::ParamName::SCALE_FACTOR) return "Scale Factor";
        if (dccl_src == IMC_DCCL::ParamName::SECTOR_WIDTH) return "Sector Width";
        if (dccl_src == IMC_DCCL::ParamName::SHUTTER_VALUE_MS) return "Shutter Value (ms)";
        if (dccl_src == IMC_DCCL::ParamName::STEP_SIZE) return "Step Size";
        if (dccl_src == IMC_DCCL::ParamName::STROBE_DELAY_US) return "Strobe Delay (us)";
        if (dccl_src == IMC_DCCL::ParamName::THRUSTER_ALWAYS_ON) return "Thruster Always On";
        if (dccl_src == IMC_DCCL::ParamName::TRANSITION_TO_FW) return "Transition to FW";
        if (dccl_src == IMC_DCCL::ParamName::TRANSITION_TO_MC) return "Transition to MC";
        if (dccl_src == IMC_DCCL::ParamName::USE_CONTROLLER) return "Use controller";
        if (dccl_src == IMC_DCCL::ParamName::VEHICLE_LIST) return "Vehicle List";
}


// ================ ParamValue Message ================
IMC_DCCL::ParamValue encodeParamValue(const std::string& imc_src)
{
        if (imc_src == "true") return IMC_DCCL::ParamValue::TRUE;
        if (imc_src == "false") return IMC_DCCL::ParamValue::FALSE;
        if (imc_src == "both") return IMC_DCCL::ParamValue::BOTH;
        return IMC_DCCL::ParamValue::PV_UNKNOWN;
}


// ================ ParamValue Message ================
std::string decodeParamValue(const uint8_t& dccl_src)
{
        if (dccl_src == IMC_DCCL::ParamValue::TRUE) return "true";
        if (dccl_src == IMC_DCCL::ParamValue::FALSE) return "false";
        if (dccl_src == IMC_DCCL::ParamValue::BOTH) return "both";
}


// ================ TransitionConditionEnum Message ================
IMC_DCCL::TransitionConditionEnum encodeTransitionConditionEnum(const std::string& imc_src)
{
        if (imc_src == "maneuverisdone") return IMC_DCCL::TransitionConditionEnum::MANEUVERISDONE;
        return IMC_DCCL::TransitionConditionEnum::TC_UNKNOWN;
}


// ================ TransitionConditionEnum Message ================
std::string decodeTransitionConditionEnum(const uint8_t& dccl_src)
{
        if (dccl_src == IMC_DCCL::TransitionConditionEnum::MANEUVERISDONE) return "maneuverisdone";
}


