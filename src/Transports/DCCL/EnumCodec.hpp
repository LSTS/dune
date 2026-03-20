#ifndef ENUMCODEC_HPP
#define ENUMCODEC_HPP

#include "IMC_DCCL.pb.h"
#include <DUNE/DUNE.hpp>

IMC_DCCL::Loiter::DirectionEnum encodeLoiterDirectionEnum(const uint8_t& imc_src);

DUNE::IMC::Loiter::DirectionEnum decodeLoiterDirectionEnum(const uint8_t& dccl_src);

IMC_DCCL::Loiter::LoiterTypeEnum encodeLoiterLoiterTypeEnum(const uint8_t& imc_src);

DUNE::IMC::Loiter::LoiterTypeEnum decodeLoiterLoiterTypeEnum(const uint8_t& dccl_src);

IMC_DCCL::PlanControl::OperationEnum encodePlanControlOperationEnum(const uint8_t& imc_src);

DUNE::IMC::PlanControl::OperationEnum decodePlanControlOperationEnum(const uint8_t& dccl_src);

IMC_DCCL::PlanControl::TypeEnum encodePlanControlTypeEnum(const uint8_t& imc_src);

DUNE::IMC::PlanControl::TypeEnum decodePlanControlTypeEnum(const uint8_t& dccl_src);

IMC_DCCL::PlanDB::OperationEnum encodePlanDBOperationEnum(const uint8_t& imc_src);

DUNE::IMC::PlanDB::OperationEnum decodePlanDBOperationEnum(const uint8_t& dccl_src);

IMC_DCCL::PlanDB::TypeEnum encodePlanDBTypeEnum(const uint8_t& imc_src);

DUNE::IMC::PlanDB::TypeEnum decodePlanDBTypeEnum(const uint8_t& dccl_src);

IMC_DCCL::PlanStatistics::TypeEnum encodePlanStatisticsTypeEnum(const uint8_t& imc_src);

DUNE::IMC::PlanStatistics::TypeEnum decodePlanStatisticsTypeEnum(const uint8_t& dccl_src);

IMC_DCCL::SpeedUnits encodeSpeedUnits(const uint8_t& imc_src);

DUNE::IMC::SpeedUnits decodeSpeedUnits(const uint8_t& dccl_src);

IMC_DCCL::VerticalProfile::ParameterEnum encodeVerticalProfileParameterEnum(const uint8_t& imc_src);

DUNE::IMC::VerticalProfile::ParameterEnum decodeVerticalProfileParameterEnum(const uint8_t& dccl_src);

IMC_DCCL::ZUnits encodeZUnits(const uint8_t& imc_src);

DUNE::IMC::ZUnits decodeZUnits(const uint8_t& dccl_src);

IMC_DCCL::EntityName encodeEntityName(const std::string& imc_src);

std::string decodeEntityName(const uint8_t& dccl_src);

IMC_DCCL::ManeuverType encodeManeuverType(const std::string& imc_src);

std::string decodeManeuverType(const uint8_t& dccl_src);

IMC_DCCL::ParamName encodeParamName(const std::string& imc_src);

std::string decodeParamName(const uint8_t& dccl_src);

IMC_DCCL::ParamValue encodeParamValue(const std::string& imc_src);

std::string decodeParamValue(const uint8_t& dccl_src);

IMC_DCCL::TransitionConditionEnum encodeTransitionConditionEnum(const std::string& imc_src);

std::string decodeTransitionConditionEnum(const uint8_t& dccl_src);

#endif // ENUMCODEC_HPP