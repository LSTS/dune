#ifndef MSGCODEC_HPP
#define MSGCODEC_HPP

#include "IMC_DCCL.pb.h"
#include <DUNE/DUNE.hpp>
#include "EnumCodec.hpp"
#include "MsgOnlyProtoCodec.hpp"

void encodeGoto(const DUNE::IMC::Goto& imc, IMC_DCCL::Goto& dccl);

void decodeGoto(const IMC_DCCL::Goto& dccl, DUNE::IMC::Goto& imc);

void encodePlanDB(const DUNE::IMC::PlanDB& imc, IMC_DCCL::PlanDB& dccl);

void decodePlanDB(const IMC_DCCL::PlanDB& dccl, DUNE::IMC::PlanDB& imc);

void encodeLoiter(const DUNE::IMC::Loiter& imc, IMC_DCCL::Loiter& dccl);

void decodeLoiter(const IMC_DCCL::Loiter& dccl, DUNE::IMC::Loiter& imc);

void encodeVerticalProfile(const DUNE::IMC::VerticalProfile& imc, IMC_DCCL::VerticalProfile& dccl);

void decodeVerticalProfile(const IMC_DCCL::VerticalProfile& dccl, DUNE::IMC::VerticalProfile& imc);

void encodeEntityState(const DUNE::IMC::EntityState& imc, IMC_DCCL::EntityState& dccl);

void decodeEntityState(const IMC_DCCL::EntityState& dccl, DUNE::IMC::EntityState& imc);

void encodeProfileSample(const DUNE::IMC::ProfileSample& imc, IMC_DCCL::ProfileSample& dccl);

void decodeProfileSample(const IMC_DCCL::ProfileSample& dccl, DUNE::IMC::ProfileSample& imc);

void encodePlanDBInformation(const DUNE::IMC::PlanDBInformation& imc, IMC_DCCL::PlanDBInformation& dccl);

void decodePlanDBInformation(const IMC_DCCL::PlanDBInformation& dccl, DUNE::IMC::PlanDBInformation& imc);

void encodeVehicleState(const DUNE::IMC::VehicleState& imc, IMC_DCCL::VehicleState& dccl);

void decodeVehicleState(const IMC_DCCL::VehicleState& dccl, DUNE::IMC::VehicleState& imc);

void encodePlanSpecification(const DUNE::IMC::PlanSpecification& imc, IMC_DCCL::PlanSpecification& dccl);

void decodePlanSpecification(const IMC_DCCL::PlanSpecification& dccl, DUNE::IMC::PlanSpecification& imc);

void encodeEstimatedState(const DUNE::IMC::EstimatedState& imc, IMC_DCCL::EstimatedState& dccl);

void decodeEstimatedState(const IMC_DCCL::EstimatedState& dccl, DUNE::IMC::EstimatedState& imc);

void encodePlanStatistics(const DUNE::IMC::PlanStatistics& imc, IMC_DCCL::PlanStatistics& dccl);

void decodePlanStatistics(const IMC_DCCL::PlanStatistics& dccl, DUNE::IMC::PlanStatistics& imc);

void encodePlanTransition(const DUNE::IMC::PlanTransition& imc, IMC_DCCL::PlanTransition& dccl);

void decodePlanTransition(const IMC_DCCL::PlanTransition& dccl, DUNE::IMC::PlanTransition& imc);

void encodePathPoint(const DUNE::IMC::PathPoint& imc, IMC_DCCL::PathPoint& dccl);

void decodePathPoint(const IMC_DCCL::PathPoint& dccl, DUNE::IMC::PathPoint& imc);

void encodeSetEntityParameters(const DUNE::IMC::SetEntityParameters& imc, IMC_DCCL::SetEntityParameters& dccl);

void decodeSetEntityParameters(const IMC_DCCL::SetEntityParameters& dccl, DUNE::IMC::SetEntityParameters& imc);

void encodePlanDBState(const DUNE::IMC::PlanDBState& imc, IMC_DCCL::PlanDBState& dccl);

void decodePlanDBState(const IMC_DCCL::PlanDBState& dccl, DUNE::IMC::PlanDBState& imc);

void encodeEntityParameter(const DUNE::IMC::EntityParameter& imc, IMC_DCCL::EntityParameter& dccl);

void decodeEntityParameter(const IMC_DCCL::EntityParameter& dccl, DUNE::IMC::EntityParameter& imc);

void encodeFollowPath(const DUNE::IMC::FollowPath& imc, IMC_DCCL::FollowPath& dccl);

void decodeFollowPath(const IMC_DCCL::FollowPath& dccl, DUNE::IMC::FollowPath& imc);

void encodeStationKeeping(const DUNE::IMC::StationKeeping& imc, IMC_DCCL::StationKeeping& dccl);

void decodeStationKeeping(const IMC_DCCL::StationKeeping& dccl, DUNE::IMC::StationKeeping& imc);

void encodePlanControl(const DUNE::IMC::PlanControl& imc, IMC_DCCL::PlanControl& dccl);

void decodePlanControl(const IMC_DCCL::PlanControl& dccl, DUNE::IMC::PlanControl& imc);

void encodePlanManeuver(const DUNE::IMC::PlanManeuver& imc, IMC_DCCL::PlanManeuver& dccl);

void decodePlanManeuver(const IMC_DCCL::PlanManeuver& dccl, DUNE::IMC::PlanManeuver& imc);

#endif // MSGCODEC_HPP