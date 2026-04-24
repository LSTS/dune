#ifndef ENUMCODEC_HPP
#define ENUMCODEC_HPP

#include "IMC_DCCL.pb.h"
#include <DUNE/DUNE.hpp>

IMC_DCCL::EntityList::operationEnum encodeEntityListoperationEnum(const uint16_t& imc_src);

DUNE::IMC::EntityList::operationEnum decodeEntityListoperationEnum(const uint16_t& dccl_src);

IMC_DCCL::EntityState::StateEnum encodeEntityStateStateEnum(const uint16_t& imc_src);

DUNE::IMC::EntityState::StateEnum decodeEntityStateStateEnum(const uint16_t& dccl_src);

IMC_DCCL::Loiter::DirectionEnum encodeLoiterDirectionEnum(const uint16_t& imc_src);

DUNE::IMC::Loiter::DirectionEnum decodeLoiterDirectionEnum(const uint16_t& dccl_src);

IMC_DCCL::Loiter::LoiterTypeEnum encodeLoiterLoiterTypeEnum(const uint16_t& imc_src);

DUNE::IMC::Loiter::LoiterTypeEnum decodeLoiterLoiterTypeEnum(const uint16_t& dccl_src);

IMC_DCCL::PlanControl::OperationEnum encodePlanControlOperationEnum(const uint16_t& imc_src);

DUNE::IMC::PlanControl::OperationEnum decodePlanControlOperationEnum(const uint16_t& dccl_src);

IMC_DCCL::PlanControl::TypeEnum encodePlanControlTypeEnum(const uint16_t& imc_src);

DUNE::IMC::PlanControl::TypeEnum decodePlanControlTypeEnum(const uint16_t& dccl_src);

IMC_DCCL::PlanControlState::LastPlanOutcomeEnum encodePlanControlStateLastPlanOutcomeEnum(const uint16_t& imc_src);

DUNE::IMC::PlanControlState::LastPlanOutcomeEnum decodePlanControlStateLastPlanOutcomeEnum(const uint16_t& dccl_src);

IMC_DCCL::PlanControlState::StateEnum encodePlanControlStateStateEnum(const uint16_t& imc_src);

DUNE::IMC::PlanControlState::StateEnum decodePlanControlStateStateEnum(const uint16_t& dccl_src);

IMC_DCCL::PlanDB::OperationEnum encodePlanDBOperationEnum(const uint16_t& imc_src);

DUNE::IMC::PlanDB::OperationEnum decodePlanDBOperationEnum(const uint16_t& dccl_src);

IMC_DCCL::PlanDB::TypeEnum encodePlanDBTypeEnum(const uint16_t& imc_src);

DUNE::IMC::PlanDB::TypeEnum decodePlanDBTypeEnum(const uint16_t& dccl_src);

IMC_DCCL::PlanStatistics::TypeEnum encodePlanStatisticsTypeEnum(const uint16_t& imc_src);

DUNE::IMC::PlanStatistics::TypeEnum decodePlanStatisticsTypeEnum(const uint16_t& dccl_src);

IMC_DCCL::PlanVariable::AccessTypeEnum encodePlanVariableAccessTypeEnum(const uint16_t& imc_src);

DUNE::IMC::PlanVariable::AccessTypeEnum decodePlanVariableAccessTypeEnum(const uint16_t& dccl_src);

IMC_DCCL::PlanVariable::TypeEnum encodePlanVariableTypeEnum(const uint16_t& imc_src);

DUNE::IMC::PlanVariable::TypeEnum decodePlanVariableTypeEnum(const uint16_t& dccl_src);

IMC_DCCL::SpeedUnits encodeSpeedUnits(const uint16_t& imc_src);

DUNE::IMC::SpeedUnits decodeSpeedUnits(const uint16_t& dccl_src);

IMC_DCCL::VehicleState::OperationModeEnum encodeVehicleStateOperationModeEnum(const uint16_t& imc_src);

DUNE::IMC::VehicleState::OperationModeEnum decodeVehicleStateOperationModeEnum(const uint16_t& dccl_src);

IMC_DCCL::VerticalProfile::ParameterEnum encodeVerticalProfileParameterEnum(const uint16_t& imc_src);

DUNE::IMC::VerticalProfile::ParameterEnum decodeVerticalProfileParameterEnum(const uint16_t& dccl_src);

IMC_DCCL::ZUnits encodeZUnits(const uint16_t& imc_src);

DUNE::IMC::ZUnits decodeZUnits(const uint16_t& dccl_src);

IMC_DCCL::EntityNameEnum encodeEntityNameEnum(const std::string& imc_src);

std::string decodeEntityNameEnum(const uint16_t& dccl_src);

IMC_DCCL::ManeuverType encodeManeuverType(const std::string& imc_src);

std::string decodeManeuverType(const uint16_t& dccl_src);

IMC_DCCL::ParamName encodeParamName(const std::string& imc_src);

std::string decodeParamName(const uint16_t& dccl_src);

IMC_DCCL::ParamValue encodeParamValue(const std::string& imc_src);

std::string decodeParamValue(const uint16_t& dccl_src);

IMC_DCCL::TransitionConditionEnum encodeTransitionConditionEnum(const std::string& imc_src);

std::string decodeTransitionConditionEnum(const uint16_t& dccl_src);

#endif // ENUMCODEC_HPP