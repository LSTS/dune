// AUTO-GENERATED DECODER FOR NESTED MESSAGES (FROM DCCL TO IMC)

#include "NestedCodec.hpp"
#include <DUNE/DUNE.hpp>
#include "Helper.hpp"

// =====================================
//              DECODERS
// =====================================

DUNE::IMC::Message* decodePlanManeuverStartActionsUnion(const IMC_DCCL::PlanManeuverStartActionsUnion& src_dccl)
{
   if (src_dccl.has_ep())
   {
       auto* tmp = new DUNE::IMC::SetEntityParameters();
       decodeSetEntityParameters(src_dccl.ep(), *tmp);
       return tmp;
   }
}

// ------------------------------------------------------
// decodeNestedProfileSample
// ------------------------------------------------------
void decodeProfileSample(const IMC_DCCL::ProfileSample& src_dccl, DUNE::IMC::ProfileSample& dst_imc)
{
    //BasicField
    dst_imc.depth = src_dccl.depth();

    //BasicField
    dst_imc.avg = src_dccl.avg();

}

// ------------------------------------------------------
// decodeNestedStationKeeping
// ------------------------------------------------------
void decodeStationKeeping(const IMC_DCCL::StationKeeping& src_dccl, DUNE::IMC::StationKeeping& dst_imc)
{
    //BasicField
    dst_imc.lat = src_dccl.lat();

    //BasicField
    dst_imc.lon = src_dccl.lon();

    //BasicField
    dst_imc.z = src_dccl.z();

    //Enum
    dst_imc.z_units = decodeZUnits(src_dccl.z_units());
    //BasicField
    dst_imc.radius = src_dccl.radius();

    //BasicField
    dst_imc.duration = src_dccl.duration();

    //BasicField
    dst_imc.speed = src_dccl.speed();

    //Enum
    dst_imc.speed_units = decodeSpeedUnits(src_dccl.speed_units());
}

// ------------------------------------------------------
// decodeNestedFollowPath
// ------------------------------------------------------
void decodeFollowPath(const IMC_DCCL::FollowPath& src_dccl, DUNE::IMC::FollowPath& dst_imc)
{
    //BasicField
    dst_imc.timeout = src_dccl.timeout();

    //BasicField
    dst_imc.lat = src_dccl.lat();

    //BasicField
    dst_imc.lon = src_dccl.lon();

    //BasicField
    dst_imc.z = src_dccl.z();

    //Enum
    dst_imc.z_units = decodeZUnits(src_dccl.z_units());
    //BasicField
    dst_imc.speed = src_dccl.speed();

    //Enum
    dst_imc.speed_units = decodeSpeedUnits(src_dccl.speed_units());
    //NestedMessage repeated
    for (unsigned int i = 0; i < src_dccl.points_size(); i++) {
        DUNE::IMC::PathPoint tmp;
        decodePathPoint( src_dccl.points(i), tmp );
        dst_imc.points.push_back(tmp);
    }

}

// ------------------------------------------------------
// decodeNestedGoto
// ------------------------------------------------------
void decodeGoto(const IMC_DCCL::Goto& src_dccl, DUNE::IMC::Goto& dst_imc)
{
    //BasicField
    dst_imc.timeout = src_dccl.timeout();

    //BasicField
    dst_imc.lat = src_dccl.lat();

    //BasicField
    dst_imc.lon = src_dccl.lon();

    //BasicField
    dst_imc.z = src_dccl.z();

    //Enum
    dst_imc.z_units = decodeZUnits(src_dccl.z_units());
    //BasicField
    dst_imc.speed = src_dccl.speed();

    //Enum
    dst_imc.speed_units = decodeSpeedUnits(src_dccl.speed_units());
    //BasicField
    dst_imc.roll = src_dccl.roll();

    //BasicField
    dst_imc.pitch = src_dccl.pitch();

    //BasicField
    dst_imc.yaw = src_dccl.yaw();

}

// ------------------------------------------------------
// decodeNestedParameterValue
// ------------------------------------------------------
void decodeParameterValue(const IMC_DCCL::ParameterValue& src_dccl, std::string& out)
{
    //BasicField
    if (src_dccl.has_param_number()) out = std::to_string(src_dccl.param_number());

    //Enum
    if (src_dccl.has_param_enum()) out = decodeParamValue(src_dccl.param_enum());

    //BasicField
    if (src_dccl.has_param_string()) out = src_dccl.param_string();

}

// ------------------------------------------------------
// decodeNestedPathPoint
// ------------------------------------------------------
void decodePathPoint(const IMC_DCCL::PathPoint& src_dccl, DUNE::IMC::PathPoint& dst_imc)
{
    //BasicField
    dst_imc.x = src_dccl.x();

    //BasicField
    dst_imc.y = src_dccl.y();

    //BasicField
    dst_imc.z = src_dccl.z();

}

// ------------------------------------------------------
// decodeNestedManeuver
// ------------------------------------------------------
DUNE::IMC::Maneuver* decodeManeuver(const IMC_DCCL::Maneuver& src_dccl)
{
   if (src_dccl.has_goto_maneuver())
   {
       auto* man = new DUNE::IMC::Goto();
       decodeGoto(src_dccl.goto_maneuver(), *man);
       return man;
   }
   if (src_dccl.has_followpath_maneuver())
   {
       auto* man = new DUNE::IMC::FollowPath();
       decodeFollowPath(src_dccl.followpath_maneuver(), *man);
       return man;
   }
   if (src_dccl.has_loiter_maneuver())
   {
       auto* man = new DUNE::IMC::Loiter();
       decodeLoiter(src_dccl.loiter_maneuver(), *man);
       return man;
   }
   if (src_dccl.has_stationkeeping_maneuver())
   {
       auto* man = new DUNE::IMC::StationKeeping();
       decodeStationKeeping(src_dccl.stationkeeping_maneuver(), *man);
       return man;
   }
}

// ------------------------------------------------------
// decodeNestedEntityParameter
// ------------------------------------------------------
void decodeEntityParameter(const IMC_DCCL::EntityParameter& src_dccl, DUNE::IMC::EntityParameter& dst_imc)
{
    //Enum
    dst_imc.name = decodeParameterName(src_dccl.name());
    //NestedMessage
    decodeParameterValue(src_dccl.value(), dst_imc.value);

}

// ------------------------------------------------------
// decodeNestedSetEntityParameters
// ------------------------------------------------------
void decodeSetEntityParameters(const IMC_DCCL::SetEntityParameters& src_dccl, DUNE::IMC::SetEntityParameters& dst_imc)
{
    //Enum
    dst_imc.name = decodeEntityName(src_dccl.name());
    //NestedMessage repeated
    for (unsigned int i = 0; i < src_dccl.params_size(); i++) {
        DUNE::IMC::EntityParameter tmp;
        decodeEntityParameter( src_dccl.params(i), tmp );
        dst_imc.params.push_back(tmp);
    }

}

// ------------------------------------------------------
// decodeNestedManeuverIDCombined
// ------------------------------------------------------
void decodeManeuverIDCombined(const IMC_DCCL::ManeuverIDCombined& src_dccl, std::string& out)
{
    //Enum
    std::string str1 = decodeManeuverType(src_dccl.maneuver_type());
    //BasicField
    std::string str2 = std::to_string(src_dccl.maneuver_number());
    out = str1 + str2;

}

// ------------------------------------------------------
// decodeNestedManeuverID
// ------------------------------------------------------
void decodeManeuverID(const IMC_DCCL::ManeuverID& src_dccl, std::string& out)
{
    //NestedMessage
    if (src_dccl.has_id_combined()) decodeManeuverIDCombined(src_dccl.id_combined(), out);

    //BasicField
    if (src_dccl.has_id_string()) out = src_dccl.id_string();

}

// ------------------------------------------------------
// decodeNestedTransitionCondition
// ------------------------------------------------------
void decodeTransitionCondition(const IMC_DCCL::TransitionCondition& src_dccl, std::string& out)
{
    //Enum
    if (src_dccl.has_condition_enum()) out = decodeTransitionConditionEnum(src_dccl.condition_enum());

    //BasicField
    if (src_dccl.has_condition_string()) out = src_dccl.condition_string();

}

// ------------------------------------------------------
// decodeNestedLoiter
// ------------------------------------------------------
void decodeLoiter(const IMC_DCCL::Loiter& src_dccl, DUNE::IMC::Loiter& dst_imc)
{
    //BasicField
    dst_imc.timeout = src_dccl.timeout();

    //BasicField
    dst_imc.lat = src_dccl.lat();

    //BasicField
    dst_imc.lon = src_dccl.lon();

    //BasicField
    dst_imc.z = src_dccl.z();

    //Enum
    dst_imc.z_units = decodeZUnits(src_dccl.z_units());
    //BasicField
    dst_imc.duration = src_dccl.duration();

    //BasicField
    dst_imc.speed = src_dccl.speed();

    //Enum
    dst_imc.speed_units = decodeSpeedUnits(src_dccl.speed_units());
    //Enum
    dst_imc.type = decodeLoiterTypeEnum(src_dccl.type());
    //BasicField
    dst_imc.radius = src_dccl.radius();

    //BasicField
    dst_imc.length = src_dccl.length();

    //BasicField
    dst_imc.bearing = src_dccl.bearing();

    //Enum
    dst_imc.direction = decodeDirectionEnum(src_dccl.direction());
}

// ------------------------------------------------------
// decodeNestedPlanManeuver
// ------------------------------------------------------
void decodePlanManeuver(const IMC_DCCL::PlanManeuver& src_dccl, DUNE::IMC::PlanManeuver& dst_imc)
{
    //NestedMessage
    decodeManeuverID(src_dccl.maneuver_id(), dst_imc.maneuver_id);

    //NestedMessage
   if(auto* man = decodeManeuver(src_dccl.data())) {
       dst_imc.data.set(*man);
       delete man;
   }

    //NestedMessages repeated
    for (unsigned int i = 0; i < src_dccl.start_actions_size(); i++) {
        if(auto* tmp = decodePlanManeuverStartActionsUnion(src_dccl.start_actions(i))) {
            dst_imc.start_actions.push_back(tmp);
            delete tmp;
        }
    }
}

// ------------------------------------------------------
// decodeNestedPlanTransition
// ------------------------------------------------------
void decodePlanTransition(const IMC_DCCL::PlanTransition& src_dccl, DUNE::IMC::PlanTransition& dst_imc)
{
    //NestedMessage
    decodeManeuverID(src_dccl.source_man(), dst_imc.source_man);

    //NestedMessage
    decodeManeuverID(src_dccl.dest_man(), dst_imc.dest_man);

    //NestedMessage
    decodeTransitionCondition(src_dccl.conditions(), dst_imc.conditions);

}

// =====================================
//              ENCODERS
// =====================================

void encodePlanManeuverStartActionsUnion(const DUNE::IMC::Message& src_imc, IMC_DCCL::PlanManeuverStartActionsUnion& dst_dccl)
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
// encodeNestedProfileSample
// ------------------------------------------------------
void encodeProfileSample(const DUNE::IMC::ProfileSample& src_imc, IMC_DCCL::ProfileSample& dst_dccl)
{
    //BasicField
    dst_dccl.set_depth(src_imc.depth);

    //BasicField
    dst_dccl.set_avg(src_imc.avg);

}

// ------------------------------------------------------
// encodeNestedStationKeeping
// ------------------------------------------------------
void encodeStationKeeping(const DUNE::IMC::StationKeeping& src_imc, IMC_DCCL::StationKeeping& dst_dccl)
{
    //BasicField
    dst_dccl.set_lat(src_imc.lat);

    //BasicField
    dst_dccl.set_lon(src_imc.lon);

    //BasicField
    dst_dccl.set_z(src_imc.z);

    //Enum
    dst_dccl.set_z_units(encodeZUnits(src_imc.z_units));

    //BasicField
    dst_dccl.set_radius(src_imc.radius);

    //BasicField
    dst_dccl.set_duration(src_imc.duration);

    //BasicField
    dst_dccl.set_speed(src_imc.speed);

    //Enum
    dst_dccl.set_speed_units(encodeSpeedUnits(src_imc.speed_units));

}

// ------------------------------------------------------
// encodeNestedFollowPath
// ------------------------------------------------------
void encodeFollowPath(const DUNE::IMC::FollowPath& src_imc, IMC_DCCL::FollowPath& dst_dccl)
{
    //BasicField
    dst_dccl.set_timeout(src_imc.timeout);

    //BasicField
    dst_dccl.set_lat(src_imc.lat);

    //BasicField
    dst_dccl.set_lon(src_imc.lon);

    //BasicField
    dst_dccl.set_z(src_imc.z);

    //Enum
    dst_dccl.set_z_units(encodeZUnits(src_imc.z_units));

    //BasicField
    dst_dccl.set_speed(src_imc.speed);

    //Enum
    dst_dccl.set_speed_units(encodeSpeedUnits(src_imc.speed_units));

    //NestedMessage repeated
    for (const auto& elem_imc : src_imc.points) {
        if (!elem_imc) continue;
        if(auto* elem_imc_typed = dynamic_cast<const DUNE::IMC::PathPoint*>(elem_imc)) {
            auto* elem_dccl = dst_dccl.add_points();
            encodePathPoint(*elem_imc_typed, *elem_dccl);
        }
    }

}

// ------------------------------------------------------
// encodeNestedGoto
// ------------------------------------------------------
void encodeGoto(const DUNE::IMC::Goto& src_imc, IMC_DCCL::Goto& dst_dccl)
{
    //BasicField
    dst_dccl.set_timeout(src_imc.timeout);

    //BasicField
    dst_dccl.set_lat(src_imc.lat);

    //BasicField
    dst_dccl.set_lon(src_imc.lon);

    //BasicField
    dst_dccl.set_z(src_imc.z);

    //Enum
    dst_dccl.set_z_units(encodeZUnits(src_imc.z_units));

    //BasicField
    dst_dccl.set_speed(src_imc.speed);

    //Enum
    dst_dccl.set_speed_units(encodeSpeedUnits(src_imc.speed_units));

    //BasicField
    dst_dccl.set_roll(src_imc.roll);

    //BasicField
    dst_dccl.set_pitch(src_imc.pitch);

    //BasicField
    dst_dccl.set_yaw(src_imc.yaw);

}

// ------------------------------------------------------
// encodeNestedParameterValue
// ------------------------------------------------------
void encodeParameterValue(const std::string& src_imc, IMC_DCCL::ParameterValue& dst_dccl)
{
    auto enum_val = encodeParamValue(src_imc);
    if(enum_val != IMC_DCCL::ParamValue::PV_UNKNOWN) {
        dst_dccl.set_param_enum(enum_val);
        return;
    }
    if(Helper::containsJustDigits(src_imc)) {
        dst_dccl.set_param_number(std::stof(src_imc));
        return;
    }
    dst_dccl.set_param_string(src_imc);
}

// ------------------------------------------------------
// encodeNestedPathPoint
// ------------------------------------------------------
void encodePathPoint(const DUNE::IMC::PathPoint& src_imc, IMC_DCCL::PathPoint& dst_dccl)
{
    //BasicField
    dst_dccl.set_x(src_imc.x);

    //BasicField
    dst_dccl.set_y(src_imc.y);

    //BasicField
    dst_dccl.set_z(src_imc.z);

}

// ------------------------------------------------------
// encodeNestedManeuver
// ------------------------------------------------------
void encodeManeuver(const DUNE::IMC::Maneuver& src_imc, IMC_DCCL::Maneuver& dst_dccl)
{
   if (auto* imc_goto_maneuver = dynamic_cast<const DUNE::IMC::Goto*>(&src_imc)) 
   {
       IMC_DCCL::Goto* dccl_goto_maneuver = new IMC_DCCL::Goto();
       encodeGoto(*imc_goto_maneuver, *dccl_goto_maneuver);
       dst_dccl.set_allocated_goto_maneuver(dccl_goto_maneuver);
       return;
   }
   if (auto* imc_followpath_maneuver = dynamic_cast<const DUNE::IMC::FollowPath*>(&src_imc)) 
   {
       IMC_DCCL::FollowPath* dccl_followpath_maneuver = new IMC_DCCL::FollowPath();
       encodeFollowPath(*imc_followpath_maneuver, *dccl_followpath_maneuver);
       dst_dccl.set_allocated_followpath_maneuver(dccl_followpath_maneuver);
       return;
   }
   if (auto* imc_loiter_maneuver = dynamic_cast<const DUNE::IMC::Loiter*>(&src_imc)) 
   {
       IMC_DCCL::Loiter* dccl_loiter_maneuver = new IMC_DCCL::Loiter();
       encodeLoiter(*imc_loiter_maneuver, *dccl_loiter_maneuver);
       dst_dccl.set_allocated_loiter_maneuver(dccl_loiter_maneuver);
       return;
   }
   if (auto* imc_stationkeeping_maneuver = dynamic_cast<const DUNE::IMC::StationKeeping*>(&src_imc)) 
   {
       IMC_DCCL::StationKeeping* dccl_stationkeeping_maneuver = new IMC_DCCL::StationKeeping();
       encodeStationKeeping(*imc_stationkeeping_maneuver, *dccl_stationkeeping_maneuver);
       dst_dccl.set_allocated_stationkeeping_maneuver(dccl_stationkeeping_maneuver);
       return;
   }
}

// ------------------------------------------------------
// encodeNestedEntityParameter
// ------------------------------------------------------
void encodeEntityParameter(const DUNE::IMC::EntityParameter& src_imc, IMC_DCCL::EntityParameter& dst_dccl)
{
    //Enum
    dst_dccl.set_name(encodeParameterName(src_imc.name));

    //NestedMessage
    IMC_DCCL::ParameterValue* value = new IMC_DCCL::ParameterValue();
    encodeParameterValue(src_imc.value, *value);
    dst_dccl.set_allocated_value(value);

}

// ------------------------------------------------------
// encodeNestedSetEntityParameters
// ------------------------------------------------------
void encodeSetEntityParameters(const DUNE::IMC::SetEntityParameters& src_imc, IMC_DCCL::SetEntityParameters& dst_dccl)
{
    //Enum
    dst_dccl.set_name(encodeEntityName(src_imc.name));

    //NestedMessage repeated
    for (const auto& elem_imc : src_imc.params) {
        if (!elem_imc) continue;
        if(auto* elem_imc_typed = dynamic_cast<const DUNE::IMC::EntityParameter*>(elem_imc)) {
            auto* elem_dccl = dst_dccl.add_params();
            encodeEntityParameter(*elem_imc_typed, *elem_dccl);
        }
    }

}

// ------------------------------------------------------
// encodeNestedManeuverIDCombined
// ------------------------------------------------------
void encodeManeuverIDCombined(const std::string& src_imc, IMC_DCCL::ManeuverIDCombined& dst_dccl)
{
   std::string letters;
   std::string numbers;
   for (char c : src_imc) {
       if (std::isalpha(c)) {
           letters += c;
       } else if (std::isdigit(c)) {
           numbers += c;
       }
   }

   dst_dccl.set_maneuver_type(encodeManeuverType(letters));

   dst_dccl.set_maneuver_number(std::stoi(numbers));

}
// ------------------------------------------------------
// encodeNestedManeuverID
// ------------------------------------------------------
void encodeManeuverID(const std::string& src_imc, IMC_DCCL::ManeuverID& dst_dccl)
{
    IMC_DCCL::ManeuverIDCombined* id_combined = new IMC_DCCL::ManeuverIDCombined();
    encodeManeuverIDCombined(src_imc, *id_combined);
    if(id_combined->maneuver_type() != IMC_DCCL::ManeuverType::MT_UNKNOWN){
        dst_dccl.set_allocated_id_combined(id_combined);
        return;}
    dst_dccl.set_id_string(src_imc);

}
// ------------------------------------------------------
// encodeNestedTransitionCondition
// ------------------------------------------------------
void encodeTransitionCondition(const std::string& src_imc, IMC_DCCL::TransitionCondition& dst_dccl)
{
    auto enum_val = encodeTransitionConditionEnum(src_imc);
    if(enum_val != IMC_DCCL::TransitionConditionEnum::TC_UNKNOWN) {
        dst_dccl.set_condition_enum(enum_val);
        return;
    }
    dst_dccl.set_condition_string(src_imc);
}
// ------------------------------------------------------
// encodeNestedLoiter
// ------------------------------------------------------
void encodeLoiter(const DUNE::IMC::Loiter& src_imc, IMC_DCCL::Loiter& dst_dccl)
{
    //BasicField
    dst_dccl.set_timeout(src_imc.timeout);

    //BasicField
    dst_dccl.set_lat(src_imc.lat);

    //BasicField
    dst_dccl.set_lon(src_imc.lon);

    //BasicField
    dst_dccl.set_z(src_imc.z);

    //Enum
    dst_dccl.set_z_units(encodeZUnits(src_imc.z_units));

    //BasicField
    dst_dccl.set_duration(src_imc.duration);

    //BasicField
    dst_dccl.set_speed(src_imc.speed);

    //Enum
    dst_dccl.set_speed_units(encodeSpeedUnits(src_imc.speed_units));

    //Enum
    dst_dccl.set_type(encodeLoiterTypeEnum(src_imc.type));

    //BasicField
    dst_dccl.set_radius(src_imc.radius);

    //BasicField
    dst_dccl.set_length(src_imc.length);

    //BasicField
    dst_dccl.set_bearing(src_imc.bearing);

    //Enum
    dst_dccl.set_direction(encodeDirectionEnum(src_imc.direction));

}

// ------------------------------------------------------
// encodeNestedPlanManeuver
// ------------------------------------------------------
void encodePlanManeuver(const DUNE::IMC::PlanManeuver& src_imc, IMC_DCCL::PlanManeuver& dst_dccl)
{
    //NestedMessage
    IMC_DCCL::ManeuverID* maneuver_id = new IMC_DCCL::ManeuverID();
    encodeManeuverID(src_imc.maneuver_id, *maneuver_id);
    dst_dccl.set_allocated_maneuver_id(maneuver_id);

    //NestedMessage
    IMC_DCCL::Maneuver* data = new IMC_DCCL::Maneuver();
    encodeManeuver(*src_imc.data.get(), *data);
    dst_dccl.set_allocated_data(data);

    for (const auto& elem_imc : src_imc.start_actions) {
        if (!elem_imc) continue;
        auto* elem_dccl = dst_dccl.add_start_actions();
        encodePlanManeuverStartActionsUnion(*elem_imc, *elem_dccl);
    }

}

// ------------------------------------------------------
// encodeNestedPlanTransition
// ------------------------------------------------------
void encodePlanTransition(const DUNE::IMC::PlanTransition& src_imc, IMC_DCCL::PlanTransition& dst_dccl)
{
    //NestedMessage
    IMC_DCCL::ManeuverID* source_man = new IMC_DCCL::ManeuverID();
    encodeManeuverID(src_imc.source_man, *source_man);
    dst_dccl.set_allocated_source_man(source_man);

    //NestedMessage
    IMC_DCCL::ManeuverID* dest_man = new IMC_DCCL::ManeuverID();
    encodeManeuverID(src_imc.dest_man, *dest_man);
    dst_dccl.set_allocated_dest_man(dest_man);

    //NestedMessage
    IMC_DCCL::TransitionCondition* conditions = new IMC_DCCL::TransitionCondition();
    encodeTransitionCondition(src_imc.conditions, *conditions);
    dst_dccl.set_allocated_conditions(conditions);

}

