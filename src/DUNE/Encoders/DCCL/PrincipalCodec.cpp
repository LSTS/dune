// AUTO-GENERATED DECODER FOR PRINCIPAL MESSAGES (FROM DCCL TO IMC)

#include "PrincipalCodec.hpp"
#include <DUNE/DUNE.hpp>

// =====================================
//              DECODERS
// =====================================
DUNE::IMC::Message* decodePlanDBArgUnion(const IMC_DCCL::PlanDBArgUnion& src_dccl)
{
   if (src_dccl.has_ps_arg())
   {
       auto* tmp = new DUNE::IMC::PlanSpecification();
       decodePlanSpecification(src_dccl.ps_arg(), *tmp);
       return tmp;
   }
}

DUNE::IMC::Message* decodePlanSpecificationStartActionsUnion(const IMC_DCCL::PlanSpecificationStartActionsUnion& src_dccl)
{
   if (src_dccl.has_ep())
   {
       auto* tmp = new DUNE::IMC::SetEntityParameters();
       decodeSetEntityParameters(src_dccl.ep(), *tmp);
       return tmp;
   }
}


// ------------------------------------------------------
// decodeVerticalProfile
// ------------------------------------------------------
void decodeVerticalProfile(const IMC_DCCL::VerticalProfile& src_dccl, DUNE::IMC::VerticalProfile& dst_imc)
{
    //Enum
    dst_imc.parameter = decodeParameterEnum(src_dccl.parameter());

    //BasicField
    dst_imc.numsamples = src_dccl.numsamples();

    //NestedMessages repeated
    for (unsigned int i = 0; i < src_dccl.samples_size(); i++) {
        DUNE::IMC::ProfileSample tmp;
        decodeProfileSample( src_dccl.samples(i), tmp );
        dst_imc.samples.push_back(tmp);
    }

    //BasicField
    dst_imc.lat = src_dccl.lat();

    //BasicField
    dst_imc.lon = src_dccl.lon();

}

// ------------------------------------------------------
// decodeEstimatedState
// ------------------------------------------------------
void decodeEstimatedState(const IMC_DCCL::EstimatedState& src_dccl, DUNE::IMC::EstimatedState& dst_imc)
{
    //BasicField
    dst_imc.lat = src_dccl.lat();

    //BasicField
    dst_imc.lon = src_dccl.lon();

    //BasicField
    dst_imc.height = src_dccl.height();

    //BasicField
    dst_imc.x = src_dccl.x();

    //BasicField
    dst_imc.y = src_dccl.y();

    //BasicField
    dst_imc.z = src_dccl.z();

    //BasicField
    dst_imc.phi = src_dccl.phi();

    //BasicField
    dst_imc.theta = src_dccl.theta();

    //BasicField
    dst_imc.psi = src_dccl.psi();

    //BasicField
    dst_imc.u = src_dccl.u();

    //BasicField
    dst_imc.v = src_dccl.v();

    //BasicField
    dst_imc.w = src_dccl.w();

    //BasicField
    dst_imc.vx = src_dccl.vx();

    //BasicField
    dst_imc.vy = src_dccl.vy();

    //BasicField
    dst_imc.vz = src_dccl.vz();

    //BasicField
    dst_imc.p = src_dccl.p();

    //BasicField
    dst_imc.q = src_dccl.q();

    //BasicField
    dst_imc.r = src_dccl.r();

    //BasicField
    dst_imc.depth = src_dccl.depth();

    //BasicField
    dst_imc.alt = src_dccl.alt();

}

// ------------------------------------------------------
// decodePlanSpecification
// ------------------------------------------------------
void decodePlanSpecification(const IMC_DCCL::PlanSpecification& src_dccl, DUNE::IMC::PlanSpecification& dst_imc)
{
    //BasicField
    dst_imc.plan_id = src_dccl.plan_id();

    //BasicField
    dst_imc.description = src_dccl.description();

    //BasicField
    dst_imc.vnamespace = src_dccl.vnamespace();

    //NestedMessages
    decodeManeuverID(src_dccl.start_man_id(), dst_imc.start_man_id);

    //NestedMessages repeated
    for (unsigned int i = 0; i < src_dccl.maneuvers_size(); i++) {
        DUNE::IMC::PlanManeuver tmp;
        decodePlanManeuver( src_dccl.maneuvers(i), tmp );
        dst_imc.maneuvers.push_back(tmp);
    }

    //NestedMessages repeated
    for (unsigned int i = 0; i < src_dccl.transitions_size(); i++) {
        DUNE::IMC::PlanTransition tmp;
        decodePlanTransition( src_dccl.transitions(i), tmp );
        dst_imc.transitions.push_back(tmp);
    }

    //NestedMessages repeated
    for (unsigned int i = 0; i < src_dccl.start_actions_size(); i++) {
        if(auto* tmp = decodePlanSpecificationStartActionsUnion(src_dccl.start_actions(i))) {
            dst_imc.start_actions.push_back(tmp);
            delete tmp;
        }
    }

}


// ------------------------------------------------------
// decodePlanDB
// ------------------------------------------------------
void decodePlanDB(const IMC_DCCL::PlanDB& src_dccl, DUNE::IMC::PlanDB& dst_imc)
{
    //Enum
    dst_imc.type = decodeTypeEnum(src_dccl.type());

    //Enum
    dst_imc.op = decodeOperationEnum(src_dccl.op());

    //BasicField
    dst_imc.request_id = src_dccl.request_id();

    //BasicField
    dst_imc.plan_id = src_dccl.plan_id();

    if(auto* tmp = decodePlanDBArgUnion(src_dccl.arg())) {
        dst_imc.arg.set(*tmp);
        delete tmp;
    }

    //BasicField
    dst_imc.info = src_dccl.info();

}


// =====================================
//              ENCODERS
// =====================================
void encodePlanDBArgUnion(const DUNE::IMC::Message& src_imc, IMC_DCCL::PlanDBArgUnion& dst_dccl)
{
   if (auto* imc_planspecification = dynamic_cast<const DUNE::IMC::PlanSpecification*>(&src_imc)) 
   {
       IMC_DCCL::PlanSpecification* dccl_planspecification = new IMC_DCCL::PlanSpecification();
       encodePlanSpecification(*imc_planspecification, *dccl_planspecification);
       dst_dccl.set_allocated_ps_arg(dccl_planspecification);
       return;
   }
}

void encodePlanSpecificationStartActionsUnion(const DUNE::IMC::Message& src_imc, IMC_DCCL::PlanSpecificationStartActionsUnion& dst_dccl)
{

   if (auto* imc_entityparams = dynamic_cast<const DUNE::IMC::SetEntityParameters*>(&src_imc)) 
   {
       IMC_DCCL::SetEntityParameters* dccl_entityparams = new IMC_DCCL::SetEntityParameters();
       encodeSetEntityParameters(*imc_entityparams, *dccl_entityparams);
       dst_dccl.set_allocated_ep(dccl_entityparams);
       return;
   }
}
// ------------------------------------------------------
// encodeVerticalProfile
// ------------------------------------------------------
void encodeVerticalProfile(const DUNE::IMC::VerticalProfile& src_imc, IMC_DCCL::VerticalProfile& dst_dccl)
{
    //Enum
   dst_dccl.set_parameter(encodeParameterEnum(src_imc.parameter));

    //BasicField
   dst_dccl.set_numsamples(src_imc.numsamples);

    //NestedMessage repeated
    for (const auto& elem_imc : src_imc.samples) {
        if (!elem_imc) continue;
        if(auto* elem_imc_typed = dynamic_cast<const DUNE::IMC::ProfileSample*>(elem_imc)) {
           auto* elem_dccl = dst_dccl.add_samples();
           encodeProfileSample(*elem_imc_typed, *elem_dccl);
        }
    }

    //BasicField
   dst_dccl.set_lat(src_imc.lat);

    //BasicField
   dst_dccl.set_lon(src_imc.lon);

}

// ------------------------------------------------------
// encodeEstimatedState
// ------------------------------------------------------
void encodeEstimatedState(const DUNE::IMC::EstimatedState& src_imc, IMC_DCCL::EstimatedState& dst_dccl)
{
    //BasicField
   dst_dccl.set_lat(src_imc.lat);

    //BasicField
   dst_dccl.set_lon(src_imc.lon);

    //BasicField
   dst_dccl.set_height(src_imc.height);

    //BasicField
   dst_dccl.set_x(src_imc.x);

    //BasicField
   dst_dccl.set_y(src_imc.y);

    //BasicField
   dst_dccl.set_z(src_imc.z);

    //BasicField
   dst_dccl.set_phi(src_imc.phi);

    //BasicField
   dst_dccl.set_theta(src_imc.theta);

    //BasicField
   dst_dccl.set_psi(src_imc.psi);

    //BasicField
   dst_dccl.set_u(src_imc.u);

    //BasicField
   dst_dccl.set_v(src_imc.v);

    //BasicField
   dst_dccl.set_w(src_imc.w);

    //BasicField
   dst_dccl.set_vx(src_imc.vx);

    //BasicField
   dst_dccl.set_vy(src_imc.vy);

    //BasicField
   dst_dccl.set_vz(src_imc.vz);

    //BasicField
   dst_dccl.set_p(src_imc.p);

    //BasicField
   dst_dccl.set_q(src_imc.q);

    //BasicField
   dst_dccl.set_r(src_imc.r);

    //BasicField
   dst_dccl.set_depth(src_imc.depth);

    //BasicField
   dst_dccl.set_alt(src_imc.alt);

}

// ------------------------------------------------------
// encodePlanSpecification
// ------------------------------------------------------
void encodePlanSpecification(const DUNE::IMC::PlanSpecification& src_imc, IMC_DCCL::PlanSpecification& dst_dccl)
{
    //BasicField
   dst_dccl.set_plan_id(src_imc.plan_id);

    //BasicField
   dst_dccl.set_description(src_imc.description);

    //BasicField
   dst_dccl.set_vnamespace(src_imc.vnamespace);

    //NestedMessage
    IMC_DCCL::ManeuverID* start_man_id = new IMC_DCCL::ManeuverID();
    encodeManeuverID(src_imc.start_man_id, *start_man_id);
    dst_dccl.set_allocated_start_man_id(start_man_id);

    //NestedMessage repeated
    for (const auto& elem_imc : src_imc.maneuvers) {
        if (!elem_imc) continue;
        if(auto* elem_imc_typed = dynamic_cast<const DUNE::IMC::PlanManeuver*>(elem_imc)) {
           auto* elem_dccl = dst_dccl.add_maneuvers();
           encodePlanManeuver(*elem_imc_typed, *elem_dccl);
        }
    }

    //NestedMessage repeated
    for (const auto& elem_imc : src_imc.transitions) {
        if (!elem_imc) continue;
        if(auto* elem_imc_typed = dynamic_cast<const DUNE::IMC::PlanTransition*>(elem_imc)) {
           auto* elem_dccl = dst_dccl.add_transitions();
           encodePlanTransition(*elem_imc_typed, *elem_dccl);
        }
    }

    for (const auto& elem_imc : src_imc.start_actions) {
        if (!elem_imc) continue;
        auto* elem_dccl = dst_dccl.add_start_actions();
        encodePlanSpecificationStartActionsUnion(*elem_imc, *elem_dccl);
    }


}


// ------------------------------------------------------
// encodePlanDB
// ------------------------------------------------------
void encodePlanDB(const DUNE::IMC::PlanDB& src_imc, IMC_DCCL::PlanDB& dst_dccl)
{
    //Enum
   dst_dccl.set_type(encodeTypeEnum(src_imc.type));

    //Enum
   dst_dccl.set_op(encodeOperationEnum(src_imc.op));

    //BasicField
   dst_dccl.set_request_id(src_imc.request_id);

    //BasicField
   dst_dccl.set_plan_id(src_imc.plan_id);

    //NestedMessage
    IMC_DCCL::PlanDBArgUnion* data = new IMC_DCCL::PlanDBArgUnion();
    encodePlanDBArgUnion(*src_imc.arg, *data);
    dst_dccl.set_allocated_arg(data);

    //BasicField
   dst_dccl.set_info(src_imc.info);

}

