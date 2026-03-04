#ifndef MSGONLYPROTOCODEC_HPP
#define MSGONLYPROTOCODEC_HPP

#include "IMC_DCCL.pb.h"
#include <DUNE/DUNE.hpp>
#include "EnumCodec.hpp"
#include "MsgCodec.hpp"

void encodeManeuver(const DUNE::IMC::Maneuver& imc, IMC_DCCL::Maneuver& dccl);

DUNE::IMC::Maneuver* decodeManeuver(const IMC_DCCL::Maneuver& dccl)	;

void encodeManeuverID(const std::string& imc, IMC_DCCL::ManeuverID& dccl);

void decodeManeuverID(const IMC_DCCL::ManeuverID& dccl, std::string& imc);

void encodeManeuverIDCombined(const std::string& imc, IMC_DCCL::ManeuverIDCombined& dccl);

void decodeManeuverIDCombined(const IMC_DCCL::ManeuverIDCombined& dccl, std::string& imc);

void encodeParameterValue(const std::string& imc, IMC_DCCL::ParameterValue& dccl);

void decodeParameterValue(const IMC_DCCL::ParameterValue& dccl, std::string& imc);

void encodePlanControlArgUnion(const DUNE::IMC::Message& imc, IMC_DCCL::PlanControlArgUnion& dccl);

DUNE::IMC::Message* decodePlanControlArgUnion(const IMC_DCCL::PlanControlArgUnion& dccl);

void encodePlanDBArgUnion(const DUNE::IMC::Message& imc, IMC_DCCL::PlanDBArgUnion& dccl);

DUNE::IMC::Message* decodePlanDBArgUnion(const IMC_DCCL::PlanDBArgUnion& dccl);

void encodePlanManeuverStartActionsUnion(const DUNE::IMC::Message& imc, IMC_DCCL::PlanManeuverStartActionsUnion& dccl);

DUNE::IMC::Message* decodePlanManeuverStartActionsUnion(const IMC_DCCL::PlanManeuverStartActionsUnion& dccl);

void encodePlanSpecificationEndActionsUnion(const DUNE::IMC::Message& imc, IMC_DCCL::PlanSpecificationEndActionsUnion& dccl);

DUNE::IMC::Message* decodePlanSpecificationEndActionsUnion(const IMC_DCCL::PlanSpecificationEndActionsUnion& dccl);

void encodePlanSpecificationStartActionsUnion(const DUNE::IMC::Message& imc, IMC_DCCL::PlanSpecificationStartActionsUnion& dccl);

DUNE::IMC::Message* decodePlanSpecificationStartActionsUnion(const IMC_DCCL::PlanSpecificationStartActionsUnion& dccl);

void encodeTransitionCondition(const std::string& imc, IMC_DCCL::TransitionCondition& dccl);

void decodeTransitionCondition(const IMC_DCCL::TransitionCondition& dccl, std::string& imc);

#endif // MSGONLYPROTOCODEC_HPP