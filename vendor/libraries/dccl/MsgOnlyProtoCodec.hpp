#ifndef MSGONLYPROTOCODEC_HPP
#define MSGONLYPROTOCODEC_HPP

#include "IMC_DCCL.pb.h"
#include <DUNE/DUNE.hpp>
#include "EnumCodec.hpp"
#include "MsgCodec.hpp"

void encodeEntityName(const std::string& imc, IMC_DCCL::EntityName& dccl);

void decodeEntityName(const IMC_DCCL::EntityName& dccl, std::string& imc);

void encodeFuelItemList(const std::string& imc, IMC_DCCL::FuelItemList& dccl);

void decodeFuelItemList(const IMC_DCCL::FuelItemList& dccl, std::string& imc);

void encodeFuelList(const std::string& imc, IMC_DCCL::FuelList& dccl);

void decodeFuelList(const IMC_DCCL::FuelList& dccl, std::string& imc);

void encodeHeader(const DUNE::IMC::Message& imc, IMC_DCCL::Header& dccl);

void decodeHeader(const IMC_DCCL::Header& dccl, DUNE::IMC::Message& imc);

void encodeItemList(const std::string& imc, IMC_DCCL::ItemList& dccl);

void decodeItemList(const IMC_DCCL::ItemList& dccl, std::string& imc);

void encodeListCombined(const std::string& imc, IMC_DCCL::ListCombined& dccl);

void decodeListCombined(const IMC_DCCL::ListCombined& dccl, std::string& imc);

void encodeManeuver(const DUNE::IMC::Maneuver& imc, IMC_DCCL::Maneuver& dccl);

std::unique_ptr<DUNE::IMC::Maneuver> decodeManeuver(const IMC_DCCL::Maneuver& dccl)	;

void encodeManeuverID(const std::string& imc, IMC_DCCL::ManeuverID& dccl);

void decodeManeuverID(const IMC_DCCL::ManeuverID& dccl, std::string& imc);

void encodeManeuverIDCombined(const std::string& imc, IMC_DCCL::ManeuverIDCombined& dccl);

void decodeManeuverIDCombined(const IMC_DCCL::ManeuverIDCombined& dccl, std::string& imc);

void encodeParameterName(const std::string& imc, IMC_DCCL::ParameterName& dccl);

void decodeParameterName(const IMC_DCCL::ParameterName& dccl, std::string& imc);

void encodeParameterValue(const std::string& imc, IMC_DCCL::ParameterValue& dccl);

void decodeParameterValue(const IMC_DCCL::ParameterValue& dccl, std::string& imc);

void encodePayload(const DUNE::IMC::Message& imc, IMC_DCCL::Payload& dccl);

std::unique_ptr<DUNE::IMC::Message> decodePayload(const IMC_DCCL::Payload& dccl);

void encodePlanControlArgUnion(const DUNE::IMC::Message& imc, IMC_DCCL::PlanControlArgUnion& dccl);

std::unique_ptr<DUNE::IMC::Message> decodePlanControlArgUnion(const IMC_DCCL::PlanControlArgUnion& dccl);

void encodePlanDBArgUnion(const DUNE::IMC::Message& imc, IMC_DCCL::PlanDBArgUnion& dccl);

std::unique_ptr<DUNE::IMC::Message> decodePlanDBArgUnion(const IMC_DCCL::PlanDBArgUnion& dccl);

void encodePlanManeuverStartActionsUnion(const DUNE::IMC::Message& imc, IMC_DCCL::PlanManeuverStartActionsUnion& dccl);

std::unique_ptr<DUNE::IMC::Message> decodePlanManeuverStartActionsUnion(const IMC_DCCL::PlanManeuverStartActionsUnion& dccl);

void encodePlanSpecificationEndActionsUnion(const DUNE::IMC::Message& imc, IMC_DCCL::PlanSpecificationEndActionsUnion& dccl);

std::unique_ptr<DUNE::IMC::Message> decodePlanSpecificationEndActionsUnion(const IMC_DCCL::PlanSpecificationEndActionsUnion& dccl);

void encodePlanSpecificationStartActionsUnion(const DUNE::IMC::Message& imc, IMC_DCCL::PlanSpecificationStartActionsUnion& dccl);

std::unique_ptr<DUNE::IMC::Message> decodePlanSpecificationStartActionsUnion(const IMC_DCCL::PlanSpecificationStartActionsUnion& dccl);

void encodeTransitionCondition(const std::string& imc, IMC_DCCL::TransitionCondition& dccl);

void decodeTransitionCondition(const IMC_DCCL::TransitionCondition& dccl, std::string& imc);

#endif // MSGONLYPROTOCODEC_HPP