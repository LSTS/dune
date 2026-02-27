#ifndef DUNE_ENCODERS_DCCL_NESTEDCODEC_HPP_INCLUDED_
#define DUNE_ENCODERS_DCCL_NESTEDCODEC_HPP_INCLUDED_

// AUTO-GENERATED NESTED MESSAGE DECODERS

#include "IMC_DCCL.pb.h"
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
      DUNE::IMC::Message* decodePlanManeuverStartActionsUnion(const IMC_DCCL::PlanManeuverStartActionsUnion& src_dccl);
      void decodeProfileSample(const IMC_DCCL::ProfileSample& src_dccl, DUNE::IMC::ProfileSample& dst_imc);
      void decodeStationKeeping(const IMC_DCCL::StationKeeping& src_dccl, DUNE::IMC::StationKeeping& dst_imc);
      void decodeFollowPath(const IMC_DCCL::FollowPath& src_dccl, DUNE::IMC::FollowPath& dst_imc);
      void decodeGoto(const IMC_DCCL::Goto& src_dccl, DUNE::IMC::Goto& dst_imc);
      void decodeParameterValue(const IMC_DCCL::ParameterValue& src_dccl, std::string& out);
      void decodePathPoint(const IMC_DCCL::PathPoint& src_dccl, DUNE::IMC::PathPoint& dst_imc);
      DUNE::IMC::Maneuver* decodeManeuver(const IMC_DCCL::Maneuver& src_dccl);
      void decodeEntityParameter(const IMC_DCCL::EntityParameter& src_dccl, DUNE::IMC::EntityParameter& dst_imc);
      void decodeSetEntityParameters(const IMC_DCCL::SetEntityParameters& src_dccl, DUNE::IMC::SetEntityParameters& dst_imc);
      void decodeManeuverIDCombined(const IMC_DCCL::ManeuverIDCombined& src_dccl, std::string& out);
      void decodeManeuverID(const IMC_DCCL::ManeuverID& src_dccl, std::string& out);
      void decodeTransitionCondition(const IMC_DCCL::TransitionCondition& src_dccl, std::string& out);
      void decodeLoiter(const IMC_DCCL::Loiter& src_dccl, DUNE::IMC::Loiter& dst_imc);
      void decodePlanManeuver(const IMC_DCCL::PlanManeuver& src_dccl, DUNE::IMC::PlanManeuver& dst_imc);
      void decodePlanTransition(const IMC_DCCL::PlanTransition& src_dccl, DUNE::IMC::PlanTransition& dst_imc);

      // =====================================
      //              ENCODERS
      // =====================================
      void encodePlanManeuverStartActionsUnion(const DUNE::IMC::Message& src_imc, IMC_DCCL::PlanManeuverStartActionsUnion& dst_dccl);
      void encodeProfileSample(const DUNE::IMC::ProfileSample& src_imc, IMC_DCCL::ProfileSample& dst_dccl);
      void encodeStationKeeping(const DUNE::IMC::StationKeeping& src_imc, IMC_DCCL::StationKeeping& dst_dccl);
      void encodeFollowPath(const DUNE::IMC::FollowPath& src_imc, IMC_DCCL::FollowPath& dst_dccl);
      void encodeGoto(const DUNE::IMC::Goto& src_imc, IMC_DCCL::Goto& dst_dccl);
      void encodeParameterValue(const std::string& src_imc, IMC_DCCL::ParameterValue& dst_dccl);
      void encodePathPoint(const DUNE::IMC::PathPoint& src_imc, IMC_DCCL::PathPoint& dst_dccl);
      void encodeManeuver(const DUNE::IMC::Maneuver& src_imc, IMC_DCCL::Maneuver& dst_dccl);
      void encodeEntityParameter(const DUNE::IMC::EntityParameter& src_imc, IMC_DCCL::EntityParameter& dst_dccl);
      void encodeSetEntityParameters(const DUNE::IMC::SetEntityParameters& src_imc, IMC_DCCL::SetEntityParameters& dst_dccl);
      void encodeManeuverIDCombined(const std::string& src_imc, IMC_DCCL::ManeuverIDCombined& dst_dccl);
      void encodeManeuverID(const std::string& src_imc, IMC_DCCL::ManeuverID& dst_dccl);
      void encodeTransitionCondition(const std::string& src_imc, IMC_DCCL::TransitionCondition& dst_dccl);
      void encodeLoiter(const DUNE::IMC::Loiter& src_imc, IMC_DCCL::Loiter& dst_dccl);
      void encodePlanManeuver(const DUNE::IMC::PlanManeuver& src_imc, IMC_DCCL::PlanManeuver& dst_dccl);
      void encodePlanTransition(const DUNE::IMC::PlanTransition& src_imc, IMC_DCCL::PlanTransition& dst_dccl);
    }
  }
}

#endif // NESTEDCODEC_HPP
