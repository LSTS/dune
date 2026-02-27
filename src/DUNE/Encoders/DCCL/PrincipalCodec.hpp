#ifndef DUNE_ENCODERS_DCCL_PRINCIPALCODEC_HPP_INCLUDED_
#define DUNE_ENCODERS_DCCL_PRINCIPALCODEC_HPP_INCLUDED_

// AUTO-GENERATED NESTED MESSAGE DECODERS

#include "IMC_DCCL.pb.h"
#include "EnumCodec.hpp"
#include "NestedCodec.hpp"
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
      DUNE::IMC::Message* decodePlanSpecificationStartActionsUnion(const IMC_DCCL::PlanSpecificationStartActionsUnion& src_dccl);
      DUNE::IMC::Message* decodePlanDBArgUnion(const IMC_DCCL::PlanDBArgUnion& src_dccl);
      void decodeVerticalProfile(const IMC_DCCL::VerticalProfile& src_dccl, DUNE::IMC::VerticalProfile& dst_imc);
      void decodeEstimatedState(const IMC_DCCL::EstimatedState& src_dccl, DUNE::IMC::EstimatedState& dst_imc);
      void decodePlanSpecification(const IMC_DCCL::PlanSpecification& src_dccl, DUNE::IMC::PlanSpecification& dst_imc);
      void decodePlanDB(const IMC_DCCL::PlanDB& src_dccl, DUNE::IMC::PlanDB& dst_imc);

      // =====================================
      //              ENCODERS
      // =====================================
      void encodePlanSpecificationStartActionsUnion(const DUNE::IMC::Message& src_imc, IMC_DCCL::PlanSpecificationStartActionsUnion& dst_dccl);
      void encodePlanDBArgUnion(const DUNE::IMC::Message& src_imc, IMC_DCCL::PlanDBArgUnion& dst_dccl);
      void encodeVerticalProfile(const DUNE::IMC::VerticalProfile& src_imc, IMC_DCCL::VerticalProfile& dst_dccl);
      void encodeEstimatedState(const DUNE::IMC::EstimatedState& src_imc, IMC_DCCL::EstimatedState& dst_dccl);
      void encodePlanSpecification(const DUNE::IMC::PlanSpecification& src_imc, IMC_DCCL::PlanSpecification& dst_dccl);
      void encodePlanDB(const DUNE::IMC::PlanDB& src_imc, IMC_DCCL::PlanDB& dst_dccl);
    }
  }
}

#endif // PRINCIPALCODEC_HPP
