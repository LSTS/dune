#ifndef DUNE_ENCODERS_DCCL_ENUMCODEC_HPP_INCLUDED_
#define DUNE_ENCODERS_DCCL_ENUMCODEC_HPP_INCLUDED_

// AUTO-GENERATED ENUM CODEC (ENCODER + DECODER)

#include "IMC_DCCL.pb.h"
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
      DUNE::IMC::ZUnits decodeZUnits(const uint8_t& dccl_src);
      DUNE::IMC::SpeedUnits decodeSpeedUnits(const uint8_t& dccl_src);
      std::string decodeManeuverType(const uint8_t& dccl_src);
      std::string decodeParamValue(const uint8_t& dccl_src);
      std::string decodeTransitionConditionEnum(const uint8_t& dccl_src);
      std::string decodeParameterName(const uint8_t& dccl_src);
      std::string decodeEntityName(const uint8_t& dccl_src);
      DUNE::IMC::Loiter::LoiterTypeEnum decodeLoiterTypeEnum(const uint8_t& dccl_src);
      DUNE::IMC::Loiter::DirectionEnum decodeDirectionEnum(const uint8_t& dccl_src);
      DUNE::IMC::VerticalProfile::ParameterEnum decodeParameterEnum(const uint8_t& dccl_src);
      DUNE::IMC::PlanDB::TypeEnum decodeTypeEnum(const uint8_t& dccl_src);
      DUNE::IMC::PlanDB::OperationEnum decodeOperationEnum(const uint8_t& dccl_src);

      // =====================================
      //              ENCODERS
      // =====================================
      IMC_DCCL::ZUnits encodeZUnits(const uint8_t& imc_src);
      IMC_DCCL::SpeedUnits encodeSpeedUnits(const uint8_t& imc_src);
      IMC_DCCL::ManeuverType encodeManeuverType(const std::string& imc_src);
      IMC_DCCL::ParamValue encodeParamValue(const std::string& imc_src);
      IMC_DCCL::TransitionConditionEnum encodeTransitionConditionEnum(const std::string& imc_src);
      IMC_DCCL::ParameterName encodeParameterName(const std::string& imc_src);
      IMC_DCCL::EntityName encodeEntityName(const std::string& imc_src);
      IMC_DCCL::Loiter::LoiterTypeEnum encodeLoiterTypeEnum(const uint8_t& imc_src);
      IMC_DCCL::Loiter::DirectionEnum encodeDirectionEnum(const uint8_t& imc_src);
      IMC_DCCL::VerticalProfile::ParameterEnum encodeParameterEnum(const uint8_t& imc_src);
      IMC_DCCL::PlanDB::TypeEnum encodeTypeEnum(const uint8_t& imc_src);
      IMC_DCCL::PlanDB::OperationEnum encodeOperationEnum(const uint8_t& imc_src);
    }
  }
}

#endif // ENUMCODEC_HPP
