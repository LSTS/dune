//AUTO-GENERATED CODEC IMC<-->DCCL MESSAGES

#include "MsgCodec.hpp"
#include <DUNE/DUNE.hpp>
#include "Helper.hpp"

// ================ SetEntityParameters Message ================
void encodeSetEntityParameters(const DUNE::IMC::SetEntityParameters& imc, IMC_DCCL::SetEntityParameters& dccl)
{
    encodeEntityName(imc.name, *dccl.mutable_name());

    
    for (const auto& elem_imc : imc.params) {						
    	if(!elem_imc) continue;
    	if(auto* elem_imc_typed = dynamic_cast<const DUNE::IMC::EntityParameter*>(elem_imc)){
    		auto* elem_dccl = dccl.add_params();
    		encodeEntityParameter(*elem_imc_typed, *elem_dccl);	
    	    }
        }

}


// ================ SetEntityParameters Message ================
void decodeSetEntityParameters(const IMC_DCCL::SetEntityParameters& dccl, DUNE::IMC::SetEntityParameters& imc)
{
    decodeEntityName(dccl.name(), imc.name);

    
    for (int i=0; i < dccl.params_size(); i++) {				
    	DUNE::IMC::EntityParameter tmp;
    	decodeEntityParameter(dccl.params(i), tmp);
    	imc.params.push_back(tmp);
    }

}


// ================ PlanDBState Message ================
void encodePlanDBState(const DUNE::IMC::PlanDBState& imc, IMC_DCCL::PlanDBState& dccl)
{
    if(!Helper::is_default_value(imc.plan_count)) dccl.set_plan_count(imc.plan_count);

    if(!Helper::is_default_value(imc.plan_size)) dccl.set_plan_size(imc.plan_size);

    if(!Helper::is_default_value(imc.change_time)) dccl.set_change_time(imc.change_time);

    if(!Helper::is_default_value(imc.change_sid)) dccl.set_change_sid(imc.change_sid);

    if(!Helper::is_default_value(imc.change_sname)) dccl.set_change_sname(imc.change_sname);

    dccl.set_md5(std::string(imc.md5.data(), imc.md5.size()));

    
    for (const auto& elem_imc : imc.plans_info) {						
    	if(!elem_imc) continue;
    	if(auto* elem_imc_typed = dynamic_cast<const DUNE::IMC::PlanDBInformation*>(elem_imc)){
    		auto* elem_dccl = dccl.add_plans_info();
    		encodePlanDBInformation(*elem_imc_typed, *elem_dccl);	
    	    }
        }

}


// ================ PlanDBState Message ================
void decodePlanDBState(const IMC_DCCL::PlanDBState& dccl, DUNE::IMC::PlanDBState& imc)
{
    imc.plan_count = dccl.plan_count();

    imc.plan_size = dccl.plan_size();

    imc.change_time = dccl.change_time();

    imc.change_sid = dccl.change_sid();

    imc.change_sname = dccl.change_sname();

    
    const std::string& bytes=dccl.md5();
    imc.md5.assign(bytes.begin(), bytes.end());

    
    for (int i=0; i < dccl.plans_info_size(); i++) {				
    	DUNE::IMC::PlanDBInformation tmp;
    	decodePlanDBInformation(dccl.plans_info(i), tmp);
    	imc.plans_info.push_back(tmp);
    }

}


// ================ PlanManeuver Message ================
void encodePlanManeuver(const DUNE::IMC::PlanManeuver& imc, IMC_DCCL::PlanManeuver& dccl)
{
    encodeManeuverID(imc.maneuver_id, *dccl.mutable_maneuver_id());

    if (!imc.data.isNull()) encodeManeuver(*imc.data.get(), *dccl.mutable_data());

    
    for (const auto& elem_imc : imc.start_actions) {						
    	if(!elem_imc) continue;
    	auto* elem_dccl = dccl.add_start_actions();
    	encodePlanManeuverStartActionsUnion(*elem_imc, *elem_dccl);
    	}

}


// ================ PlanManeuver Message ================
void decodePlanManeuver(const IMC_DCCL::PlanManeuver& dccl, DUNE::IMC::PlanManeuver& imc)
{
    decodeManeuverID(dccl.maneuver_id(), imc.maneuver_id);

    
    if(dccl.has_data()){
        auto tmp = decodeManeuver(dccl.data());
        imc.data.set(*tmp);
    }

    
    for (int i=0; i < dccl.start_actions_size(); i++) {				
    	if(auto tmp = decodePlanManeuverStartActionsUnion(dccl.start_actions(i))){
    		imc.start_actions.push_back(*tmp);
    	}
    }

}


// ================ WindSpeed Message ================
void encodeWindSpeed(const DUNE::IMC::WindSpeed& imc, IMC_DCCL::WindSpeed& dccl)
{
    if(!Helper::is_default_value(imc.direction)) dccl.set_direction(imc.direction);

    if(!Helper::is_default_value(imc.speed)) dccl.set_speed(imc.speed);

    if(!Helper::is_default_value(imc.turbulence)) dccl.set_turbulence(imc.turbulence);

}


// ================ WindSpeed Message ================
void decodeWindSpeed(const IMC_DCCL::WindSpeed& dccl, DUNE::IMC::WindSpeed& imc)
{
    imc.direction = dccl.direction();

    imc.speed = dccl.speed();

    imc.turbulence = dccl.turbulence();

}


// ================ FollowPath Message ================
void encodeFollowPath(const DUNE::IMC::FollowPath& imc, IMC_DCCL::FollowPath& dccl)
{
    if(!Helper::is_default_value(imc.timeout)) dccl.set_timeout(imc.timeout);

    if(!Helper::is_default_value(imc.lat)) dccl.set_lat(imc.lat);

    if(!Helper::is_default_value(imc.lon)) dccl.set_lon(imc.lon);

    if(!Helper::is_default_value(imc.z)) dccl.set_z(imc.z);

    dccl.set_z_units(encodeZUnits(imc.z_units));

    if(!Helper::is_default_value(imc.speed)) dccl.set_speed(imc.speed);

    dccl.set_speed_units(encodeSpeedUnits(imc.speed_units));

    
    for (const auto& elem_imc : imc.points) {						
    	if(!elem_imc) continue;
    	if(auto* elem_imc_typed = dynamic_cast<const DUNE::IMC::PathPoint*>(elem_imc)){
    		auto* elem_dccl = dccl.add_points();
    		encodePathPoint(*elem_imc_typed, *elem_dccl);	
    	    }
        }

    if(!Helper::is_default_value(imc.custom)) dccl.set_custom(imc.custom);

}


// ================ FollowPath Message ================
void decodeFollowPath(const IMC_DCCL::FollowPath& dccl, DUNE::IMC::FollowPath& imc)
{
    imc.timeout = dccl.timeout();

    imc.lat = dccl.lat();

    imc.lon = dccl.lon();

    imc.z = dccl.z();

    imc.z_units = decodeZUnits(dccl.z_units());

    imc.speed = dccl.speed();

    imc.speed_units = decodeSpeedUnits(dccl.speed_units());

    
    for (int i=0; i < dccl.points_size(); i++) {				
    	DUNE::IMC::PathPoint tmp;
    	decodePathPoint(dccl.points(i), tmp);
    	imc.points.push_back(tmp);
    }

    imc.custom = dccl.custom();

}


// ================ Goto Message ================
void encodeGoto(const DUNE::IMC::Goto& imc, IMC_DCCL::Goto& dccl)
{
    if(!Helper::is_default_value(imc.timeout)) dccl.set_timeout(imc.timeout);

    if(!Helper::is_default_value(imc.lat)) dccl.set_lat(imc.lat);

    if(!Helper::is_default_value(imc.lon)) dccl.set_lon(imc.lon);

    if(!Helper::is_default_value(imc.z)) dccl.set_z(imc.z);

    dccl.set_z_units(encodeZUnits(imc.z_units));

    if(!Helper::is_default_value(imc.speed)) dccl.set_speed(imc.speed);

    dccl.set_speed_units(encodeSpeedUnits(imc.speed_units));

    if(!Helper::is_default_value(imc.roll)) dccl.set_roll(imc.roll);

    if(!Helper::is_default_value(imc.pitch)) dccl.set_pitch(imc.pitch);

    if(!Helper::is_default_value(imc.yaw)) dccl.set_yaw(imc.yaw);

    if(!Helper::is_default_value(imc.custom)) dccl.set_custom(imc.custom);

}


// ================ Goto Message ================
void decodeGoto(const IMC_DCCL::Goto& dccl, DUNE::IMC::Goto& imc)
{
    imc.timeout = dccl.timeout();

    imc.lat = dccl.lat();

    imc.lon = dccl.lon();

    imc.z = dccl.z();

    imc.z_units = decodeZUnits(dccl.z_units());

    imc.speed = dccl.speed();

    imc.speed_units = decodeSpeedUnits(dccl.speed_units());

    imc.roll = dccl.roll();

    imc.pitch = dccl.pitch();

    imc.yaw = dccl.yaw();

    imc.custom = dccl.custom();

}


// ================ PlanControl Message ================
void encodePlanControl(const DUNE::IMC::PlanControl& imc, IMC_DCCL::PlanControl& dccl)
{
    dccl.set_type(encodePlanControlTypeEnum(imc.type));

    dccl.set_op(encodePlanControlOperationEnum(imc.op));

    if(!Helper::is_default_value(imc.request_id)) dccl.set_request_id(imc.request_id);

    if(!Helper::is_default_value(imc.plan_id)) dccl.set_plan_id(imc.plan_id);

    if(!Helper::is_default_value(imc.flags)) dccl.set_flags(imc.flags);

    if (!imc.arg.isNull()) encodePlanControlArgUnion(*imc.arg, *dccl.mutable_arg());

    if(!Helper::is_default_value(imc.info)) dccl.set_info(imc.info);

}


// ================ PlanControl Message ================
void decodePlanControl(const IMC_DCCL::PlanControl& dccl, DUNE::IMC::PlanControl& imc)
{
    imc.type = decodePlanControlTypeEnum(dccl.type());

    imc.op = decodePlanControlOperationEnum(dccl.op());

    imc.request_id = dccl.request_id();

    imc.plan_id = dccl.plan_id();

    imc.flags = dccl.flags();

    
    if(dccl.has_arg()){
        auto tmp = decodePlanControlArgUnion(dccl.arg());			
    	imc.arg.set(*tmp);
    }

    imc.info = dccl.info();

}


// ================ VerticalProfile Message ================
void encodeVerticalProfile(const DUNE::IMC::VerticalProfile& imc, IMC_DCCL::VerticalProfile& dccl)
{
    dccl.set_parameter(encodeVerticalProfileParameterEnum(imc.parameter));

    if(!Helper::is_default_value(imc.numsamples)) dccl.set_numsamples(imc.numsamples);

    
    for (const auto& elem_imc : imc.samples) {						
    	if(!elem_imc) continue;
    	if(auto* elem_imc_typed = dynamic_cast<const DUNE::IMC::ProfileSample*>(elem_imc)){
    		auto* elem_dccl = dccl.add_samples();
    		encodeProfileSample(*elem_imc_typed, *elem_dccl);	
    	    }
        }

    if(!Helper::is_default_value(imc.lat)) dccl.set_lat(imc.lat);

    if(!Helper::is_default_value(imc.lon)) dccl.set_lon(imc.lon);

}


// ================ VerticalProfile Message ================
void decodeVerticalProfile(const IMC_DCCL::VerticalProfile& dccl, DUNE::IMC::VerticalProfile& imc)
{
    imc.parameter = decodeVerticalProfileParameterEnum(dccl.parameter());

    imc.numsamples = dccl.numsamples();

    
    for (int i=0; i < dccl.samples_size(); i++) {				
    	DUNE::IMC::ProfileSample tmp;
    	decodeProfileSample(dccl.samples(i), tmp);
    	imc.samples.push_back(tmp);
    }

    imc.lat = dccl.lat();

    imc.lon = dccl.lon();

}


// ================ StationKeeping Message ================
void encodeStationKeeping(const DUNE::IMC::StationKeeping& imc, IMC_DCCL::StationKeeping& dccl)
{
    if(!Helper::is_default_value(imc.lat)) dccl.set_lat(imc.lat);

    if(!Helper::is_default_value(imc.lon)) dccl.set_lon(imc.lon);

    if(!Helper::is_default_value(imc.z)) dccl.set_z(imc.z);

    dccl.set_z_units(encodeZUnits(imc.z_units));

    if(!Helper::is_default_value(imc.radius)) dccl.set_radius(imc.radius);

    if(!Helper::is_default_value(imc.duration)) dccl.set_duration(imc.duration);

    if(!Helper::is_default_value(imc.speed)) dccl.set_speed(imc.speed);

    dccl.set_speed_units(encodeSpeedUnits(imc.speed_units));

    if(!Helper::is_default_value(imc.custom)) dccl.set_custom(imc.custom);

}


// ================ StationKeeping Message ================
void decodeStationKeeping(const IMC_DCCL::StationKeeping& dccl, DUNE::IMC::StationKeeping& imc)
{
    imc.lat = dccl.lat();

    imc.lon = dccl.lon();

    imc.z = dccl.z();

    imc.z_units = decodeZUnits(dccl.z_units());

    imc.radius = dccl.radius();

    imc.duration = dccl.duration();

    imc.speed = dccl.speed();

    imc.speed_units = decodeSpeedUnits(dccl.speed_units());

    imc.custom = dccl.custom();

}


// ================ Loiter Message ================
void encodeLoiter(const DUNE::IMC::Loiter& imc, IMC_DCCL::Loiter& dccl)
{
    if(!Helper::is_default_value(imc.timeout)) dccl.set_timeout(imc.timeout);

    if(!Helper::is_default_value(imc.lat)) dccl.set_lat(imc.lat);

    if(!Helper::is_default_value(imc.lon)) dccl.set_lon(imc.lon);

    if(!Helper::is_default_value(imc.z)) dccl.set_z(imc.z);

    dccl.set_z_units(encodeZUnits(imc.z_units));

    if(!Helper::is_default_value(imc.duration)) dccl.set_duration(imc.duration);

    if(!Helper::is_default_value(imc.speed)) dccl.set_speed(imc.speed);

    dccl.set_speed_units(encodeSpeedUnits(imc.speed_units));

    dccl.set_type(encodeLoiterLoiterTypeEnum(imc.type));

    if(!Helper::is_default_value(imc.radius)) dccl.set_radius(imc.radius);

    if(!Helper::is_default_value(imc.length)) dccl.set_length(imc.length);

    if(!Helper::is_default_value(imc.bearing)) dccl.set_bearing(imc.bearing);

    dccl.set_direction(encodeLoiterDirectionEnum(imc.direction));

    if(!Helper::is_default_value(imc.custom)) dccl.set_custom(imc.custom);

}


// ================ Loiter Message ================
void decodeLoiter(const IMC_DCCL::Loiter& dccl, DUNE::IMC::Loiter& imc)
{
    imc.timeout = dccl.timeout();

    imc.lat = dccl.lat();

    imc.lon = dccl.lon();

    imc.z = dccl.z();

    imc.z_units = decodeZUnits(dccl.z_units());

    imc.duration = dccl.duration();

    imc.speed = dccl.speed();

    imc.speed_units = decodeSpeedUnits(dccl.speed_units());

    imc.type = decodeLoiterLoiterTypeEnum(dccl.type());

    imc.radius = dccl.radius();

    imc.length = dccl.length();

    imc.bearing = dccl.bearing();

    imc.direction = decodeLoiterDirectionEnum(dccl.direction());

    imc.custom = dccl.custom();

}


// ================ PlanDB Message ================
void encodePlanDB(const DUNE::IMC::PlanDB& imc, IMC_DCCL::PlanDB& dccl)
{
    dccl.set_type(encodePlanDBTypeEnum(imc.type));

    dccl.set_op(encodePlanDBOperationEnum(imc.op));

    if(!Helper::is_default_value(imc.request_id)) dccl.set_request_id(imc.request_id);

    if(!Helper::is_default_value(imc.plan_id)) dccl.set_plan_id(imc.plan_id);

    if (!imc.arg.isNull()) encodePlanDBArgUnion(*imc.arg, *dccl.mutable_arg());

    if(!Helper::is_default_value(imc.info)) dccl.set_info(imc.info);

}


// ================ PlanDB Message ================
void decodePlanDB(const IMC_DCCL::PlanDB& dccl, DUNE::IMC::PlanDB& imc)
{
    imc.type = decodePlanDBTypeEnum(dccl.type());

    imc.op = decodePlanDBOperationEnum(dccl.op());

    imc.request_id = dccl.request_id();

    imc.plan_id = dccl.plan_id();

    
    if(dccl.has_arg()){
        auto tmp = decodePlanDBArgUnion(dccl.arg());			
    	imc.arg.set(*tmp);
    }

    imc.info = dccl.info();

}


// ================ FuelLevel Message ================
void encodeFuelLevel(const DUNE::IMC::FuelLevel& imc, IMC_DCCL::FuelLevel& dccl)
{
    if(!Helper::is_default_value(imc.value)) dccl.set_value(imc.value);

    if(!Helper::is_default_value(imc.confidence)) dccl.set_confidence(imc.confidence);

    if(!Helper::is_default_value(imc.opmodes)) dccl.set_opmodes(imc.opmodes);

}


// ================ FuelLevel Message ================
void decodeFuelLevel(const IMC_DCCL::FuelLevel& dccl, DUNE::IMC::FuelLevel& imc)
{
    imc.value = dccl.value();

    imc.confidence = dccl.confidence();

    imc.opmodes = dccl.opmodes();

}


// ================ ProfileSample Message ================
void encodeProfileSample(const DUNE::IMC::ProfileSample& imc, IMC_DCCL::ProfileSample& dccl)
{
    if(!Helper::is_default_value(imc.depth)) dccl.set_depth(imc.depth);

    if(!Helper::is_default_value(imc.avg)) dccl.set_avg(imc.avg);

}


// ================ ProfileSample Message ================
void decodeProfileSample(const IMC_DCCL::ProfileSample& dccl, DUNE::IMC::ProfileSample& imc)
{
    imc.depth = dccl.depth();

    imc.avg = dccl.avg();

}


// ================ PlanControlState Message ================
void encodePlanControlState(const DUNE::IMC::PlanControlState& imc, IMC_DCCL::PlanControlState& dccl)
{
    dccl.set_state(encodePlanControlStateStateEnum(imc.state));

    if(!Helper::is_default_value(imc.plan_id)) dccl.set_plan_id(imc.plan_id);

    if(!Helper::is_default_value(imc.plan_eta)) dccl.set_plan_eta(imc.plan_eta);

    if(!Helper::is_default_value(imc.plan_progress)) dccl.set_plan_progress(imc.plan_progress);

    encodeManeuverID(imc.man_id, *dccl.mutable_man_id());

    if(!Helper::is_default_value(imc.man_type)) dccl.set_man_type(imc.man_type);

    if(!Helper::is_default_value(imc.man_eta)) dccl.set_man_eta(imc.man_eta);

    dccl.set_last_outcome(encodePlanControlStateLastPlanOutcomeEnum(imc.last_outcome));

}


// ================ PlanControlState Message ================
void decodePlanControlState(const IMC_DCCL::PlanControlState& dccl, DUNE::IMC::PlanControlState& imc)
{
    imc.state = decodePlanControlStateStateEnum(dccl.state());

    imc.plan_id = dccl.plan_id();

    imc.plan_eta = dccl.plan_eta();

    imc.plan_progress = dccl.plan_progress();

    decodeManeuverID(dccl.man_id(), imc.man_id);

    imc.man_type = dccl.man_type();

    imc.man_eta = dccl.man_eta();

    imc.last_outcome = decodePlanControlStateLastPlanOutcomeEnum(dccl.last_outcome());

}


// ================ PlanTransition Message ================
void encodePlanTransition(const DUNE::IMC::PlanTransition& imc, IMC_DCCL::PlanTransition& dccl)
{
    encodeManeuverID(imc.source_man, *dccl.mutable_source_man());

    encodeManeuverID(imc.dest_man, *dccl.mutable_dest_man());

    encodeTransitionCondition(imc.conditions, *dccl.mutable_conditions());

}


// ================ PlanTransition Message ================
void decodePlanTransition(const IMC_DCCL::PlanTransition& dccl, DUNE::IMC::PlanTransition& imc)
{
    decodeManeuverID(dccl.source_man(), imc.source_man);

    decodeManeuverID(dccl.dest_man(), imc.dest_man);

    decodeTransitionCondition(dccl.conditions(), imc.conditions);

}


// ================ PathPoint Message ================
void encodePathPoint(const DUNE::IMC::PathPoint& imc, IMC_DCCL::PathPoint& dccl)
{
    if(!Helper::is_default_value(imc.x)) dccl.set_x(imc.x);

    if(!Helper::is_default_value(imc.y)) dccl.set_y(imc.y);

    if(!Helper::is_default_value(imc.z)) dccl.set_z(imc.z);

}


// ================ PathPoint Message ================
void decodePathPoint(const IMC_DCCL::PathPoint& dccl, DUNE::IMC::PathPoint& imc)
{
    imc.x = dccl.x();

    imc.y = dccl.y();

    imc.z = dccl.z();

}


// ================ EntityParameters Message ================
void encodeEntityParameters(const DUNE::IMC::EntityParameters& imc, IMC_DCCL::EntityParameters& dccl)
{
    encodeEntityName(imc.name, *dccl.mutable_name());

    
    for (const auto& elem_imc : imc.params) {						
    	if(!elem_imc) continue;
    	if(auto* elem_imc_typed = dynamic_cast<const DUNE::IMC::EntityParameter*>(elem_imc)){
    		auto* elem_dccl = dccl.add_params();
    		encodeEntityParameter(*elem_imc_typed, *elem_dccl);	
    	    }
        }

}


// ================ EntityParameters Message ================
void decodeEntityParameters(const IMC_DCCL::EntityParameters& dccl, DUNE::IMC::EntityParameters& imc)
{
    decodeEntityName(dccl.name(), imc.name);

    
    for (int i=0; i < dccl.params_size(); i++) {				
    	DUNE::IMC::EntityParameter tmp;
    	decodeEntityParameter(dccl.params(i), tmp);
    	imc.params.push_back(tmp);
    }

}


// ================ EntityList Message ================
void encodeEntityList(const DUNE::IMC::EntityList& imc, IMC_DCCL::EntityList& dccl)
{
    dccl.set_op(encodeEntityListoperationEnum(imc.op));

    encodeListCombined(imc.list, *dccl.mutable_list());

}


// ================ EntityList Message ================
void decodeEntityList(const IMC_DCCL::EntityList& dccl, DUNE::IMC::EntityList& imc)
{
    imc.op = decodeEntityListoperationEnum(dccl.op());

    decodeListCombined(dccl.list(), imc.list);

}


// ================ EntityParameter Message ================
void encodeEntityParameter(const DUNE::IMC::EntityParameter& imc, IMC_DCCL::EntityParameter& dccl)
{
    encodeParameterName(imc.name, *dccl.mutable_name());

    encodeParameterValue(imc.value, *dccl.mutable_value());

}


// ================ EntityParameter Message ================
void decodeEntityParameter(const IMC_DCCL::EntityParameter& dccl, DUNE::IMC::EntityParameter& imc)
{
    decodeParameterName(dccl.name(), imc.name);

    decodeParameterValue(dccl.value(), imc.value);

}


// ================ EntityState Message ================
void encodeEntityState(const DUNE::IMC::EntityState& imc, IMC_DCCL::EntityState& dccl)
{
    dccl.set_state(encodeEntityStateStateEnum(imc.state));

    if(!Helper::is_default_value(imc.flags)) dccl.set_flags(imc.flags);

    if(!Helper::is_default_value(imc.description)) dccl.set_description(imc.description);

}


// ================ EntityState Message ================
void decodeEntityState(const IMC_DCCL::EntityState& dccl, DUNE::IMC::EntityState& imc)
{
    imc.state = decodeEntityStateStateEnum(dccl.state());

    imc.flags = dccl.flags();

    imc.description = dccl.description();

}


// ================ Current Message ================
void encodeCurrent(const DUNE::IMC::Current& imc, IMC_DCCL::Current& dccl)
{
    if(!Helper::is_default_value(imc.value)) dccl.set_value(imc.value);

}


// ================ Current Message ================
void decodeCurrent(const IMC_DCCL::Current& dccl, DUNE::IMC::Current& imc)
{
    imc.value = dccl.value();

}


// ================ EstimatedState Message ================
void encodeEstimatedState(const DUNE::IMC::EstimatedState& imc, IMC_DCCL::EstimatedState& dccl)
{
    if(!Helper::is_default_value(imc.lat)) dccl.set_lat(imc.lat);

    if(!Helper::is_default_value(imc.lon)) dccl.set_lon(imc.lon);

    if(!Helper::is_default_value(imc.height)) dccl.set_height(imc.height);

    if(!Helper::is_default_value(imc.x)) dccl.set_x(imc.x);

    if(!Helper::is_default_value(imc.y)) dccl.set_y(imc.y);

    if(!Helper::is_default_value(imc.z)) dccl.set_z(imc.z);

    if(!Helper::is_default_value(imc.phi)) dccl.set_phi(imc.phi);

    if(!Helper::is_default_value(imc.theta)) dccl.set_theta(imc.theta);

    if(!Helper::is_default_value(imc.psi)) dccl.set_psi(imc.psi);

    if(!Helper::is_default_value(imc.u)) dccl.set_u(imc.u);

    if(!Helper::is_default_value(imc.v)) dccl.set_v(imc.v);

    if(!Helper::is_default_value(imc.w)) dccl.set_w(imc.w);

    if(!Helper::is_default_value(imc.vx)) dccl.set_vx(imc.vx);

    if(!Helper::is_default_value(imc.vy)) dccl.set_vy(imc.vy);

    if(!Helper::is_default_value(imc.vz)) dccl.set_vz(imc.vz);

    if(!Helper::is_default_value(imc.p)) dccl.set_p(imc.p);

    if(!Helper::is_default_value(imc.q)) dccl.set_q(imc.q);

    if(!Helper::is_default_value(imc.r)) dccl.set_r(imc.r);

    if(!Helper::is_default_value(imc.depth)) dccl.set_depth(imc.depth);

    if(!Helper::is_default_value(imc.alt)) dccl.set_alt(imc.alt);

}


// ================ EstimatedState Message ================
void decodeEstimatedState(const IMC_DCCL::EstimatedState& dccl, DUNE::IMC::EstimatedState& imc)
{
    imc.lat = dccl.lat();

    imc.lon = dccl.lon();

    imc.height = dccl.height();

    imc.x = dccl.x();

    imc.y = dccl.y();

    imc.z = dccl.z();

    imc.phi = dccl.phi();

    imc.theta = dccl.theta();

    imc.psi = dccl.psi();

    imc.u = dccl.u();

    imc.v = dccl.v();

    imc.w = dccl.w();

    imc.vx = dccl.vx();

    imc.vy = dccl.vy();

    imc.vz = dccl.vz();

    imc.p = dccl.p();

    imc.q = dccl.q();

    imc.r = dccl.r();

    imc.depth = dccl.depth();

    imc.alt = dccl.alt();

}


// ================ PlanVariable Message ================
void encodePlanVariable(const DUNE::IMC::PlanVariable& imc, IMC_DCCL::PlanVariable& dccl)
{
    if(!Helper::is_default_value(imc.name)) dccl.set_name(imc.name);

    if(!Helper::is_default_value(imc.value)) dccl.set_value(imc.value);

    dccl.set_type(encodePlanVariableTypeEnum(imc.type));

    dccl.set_access(encodePlanVariableAccessTypeEnum(imc.access));

}


// ================ PlanVariable Message ================
void decodePlanVariable(const IMC_DCCL::PlanVariable& dccl, DUNE::IMC::PlanVariable& imc)
{
    imc.name = dccl.name();

    imc.value = dccl.value();

    imc.type = decodePlanVariableTypeEnum(dccl.type());

    imc.access = decodePlanVariableAccessTypeEnum(dccl.access());

}


// ================ Voltage Message ================
void encodeVoltage(const DUNE::IMC::Voltage& imc, IMC_DCCL::Voltage& dccl)
{
    if(!Helper::is_default_value(imc.value)) dccl.set_value(imc.value);

}


// ================ Voltage Message ================
void decodeVoltage(const IMC_DCCL::Voltage& dccl, DUNE::IMC::Voltage& imc)
{
    imc.value = dccl.value();

}


// ================ PlanSpecification Message ================
void encodePlanSpecification(const DUNE::IMC::PlanSpecification& imc, IMC_DCCL::PlanSpecification& dccl)
{
    if(!Helper::is_default_value(imc.plan_id)) dccl.set_plan_id(imc.plan_id);

    if(!Helper::is_default_value(imc.description)) dccl.set_description(imc.description);

    if(!Helper::is_default_value(imc.vnamespace)) dccl.set_vnamespace(imc.vnamespace);

    
    for (const auto& elem_imc : imc.variables) {						
    	if(!elem_imc) continue;
    	if(auto* elem_imc_typed = dynamic_cast<const DUNE::IMC::PlanVariable*>(elem_imc)){
    		auto* elem_dccl = dccl.add_variables();
    		encodePlanVariable(*elem_imc_typed, *elem_dccl);	
    	    }
        }

    encodeManeuverID(imc.start_man_id, *dccl.mutable_start_man_id());

    
    for (const auto& elem_imc : imc.maneuvers) {						
    	if(!elem_imc) continue;
    	if(auto* elem_imc_typed = dynamic_cast<const DUNE::IMC::PlanManeuver*>(elem_imc)){
    		auto* elem_dccl = dccl.add_maneuvers();
    		encodePlanManeuver(*elem_imc_typed, *elem_dccl);	
    	    }
        }

    
    for (const auto& elem_imc : imc.transitions) {						
    	if(!elem_imc) continue;
    	if(auto* elem_imc_typed = dynamic_cast<const DUNE::IMC::PlanTransition*>(elem_imc)){
    		auto* elem_dccl = dccl.add_transitions();
    		encodePlanTransition(*elem_imc_typed, *elem_dccl);	
    	    }
        }

    
    for (const auto& elem_imc : imc.start_actions) {						
    	if(!elem_imc) continue;
    	auto* elem_dccl = dccl.add_start_actions();
    	encodePlanSpecificationStartActionsUnion(*elem_imc, *elem_dccl);
    	}

    
    for (const auto& elem_imc : imc.end_actions) {						
    	if(!elem_imc) continue;
    	auto* elem_dccl = dccl.add_end_actions();
    	encodePlanSpecificationEndActionsUnion(*elem_imc, *elem_dccl);
    	}

}


// ================ PlanSpecification Message ================
void decodePlanSpecification(const IMC_DCCL::PlanSpecification& dccl, DUNE::IMC::PlanSpecification& imc)
{
    imc.plan_id = dccl.plan_id();

    imc.description = dccl.description();

    imc.vnamespace = dccl.vnamespace();

    
    for (int i=0; i < dccl.variables_size(); i++) {				
    	DUNE::IMC::PlanVariable tmp;
    	decodePlanVariable(dccl.variables(i), tmp);
    	imc.variables.push_back(tmp);
    }

    decodeManeuverID(dccl.start_man_id(), imc.start_man_id);

    
    for (int i=0; i < dccl.maneuvers_size(); i++) {				
    	DUNE::IMC::PlanManeuver tmp;
    	decodePlanManeuver(dccl.maneuvers(i), tmp);
    	imc.maneuvers.push_back(tmp);
    }

    
    for (int i=0; i < dccl.transitions_size(); i++) {				
    	DUNE::IMC::PlanTransition tmp;
    	decodePlanTransition(dccl.transitions(i), tmp);
    	imc.transitions.push_back(tmp);
    }

    
    for (int i=0; i < dccl.start_actions_size(); i++) {				
    	if(auto tmp = decodePlanSpecificationStartActionsUnion(dccl.start_actions(i))){
    		imc.start_actions.push_back(*tmp);
    	}
    }

    
    for (int i=0; i < dccl.end_actions_size(); i++) {				
    	if(auto tmp = decodePlanSpecificationEndActionsUnion(dccl.end_actions(i))){
    		imc.end_actions.push_back(*tmp);
    	}
    }

}


// ================ PlanDBInformation Message ================
void encodePlanDBInformation(const DUNE::IMC::PlanDBInformation& imc, IMC_DCCL::PlanDBInformation& dccl)
{
    if(!Helper::is_default_value(imc.plan_id)) dccl.set_plan_id(imc.plan_id);

    if(!Helper::is_default_value(imc.plan_size)) dccl.set_plan_size(imc.plan_size);

    if(!Helper::is_default_value(imc.change_time)) dccl.set_change_time(imc.change_time);

    if(!Helper::is_default_value(imc.change_sid)) dccl.set_change_sid(imc.change_sid);

    if(!Helper::is_default_value(imc.change_sname)) dccl.set_change_sname(imc.change_sname);

    dccl.set_md5(std::string(imc.md5.data(), imc.md5.size()));

}


// ================ PlanDBInformation Message ================
void decodePlanDBInformation(const IMC_DCCL::PlanDBInformation& dccl, DUNE::IMC::PlanDBInformation& imc)
{
    imc.plan_id = dccl.plan_id();

    imc.plan_size = dccl.plan_size();

    imc.change_time = dccl.change_time();

    imc.change_sid = dccl.change_sid();

    imc.change_sname = dccl.change_sname();

    
    const std::string& bytes=dccl.md5();
    imc.md5.assign(bytes.begin(), bytes.end());

}


// ================ PlanStatistics Message ================
void encodePlanStatistics(const DUNE::IMC::PlanStatistics& imc, IMC_DCCL::PlanStatistics& dccl)
{
    if(!Helper::is_default_value(imc.plan_id)) dccl.set_plan_id(imc.plan_id);

    dccl.set_type(encodePlanStatisticsTypeEnum(imc.type));

    if(!Helper::is_default_value(imc.properties)) dccl.set_properties(imc.properties);

    encodeDurationList(imc.durations, *dccl.mutable_durations());

    if(!Helper::is_default_value(imc.distances)) dccl.set_distances(imc.distances);

    if(!Helper::is_default_value(imc.actions)) dccl.set_actions(imc.actions);

    encodeFuelList(imc.fuel, *dccl.mutable_fuel());

}


// ================ PlanStatistics Message ================
void decodePlanStatistics(const IMC_DCCL::PlanStatistics& dccl, DUNE::IMC::PlanStatistics& imc)
{
    imc.plan_id = dccl.plan_id();

    imc.type = decodePlanStatisticsTypeEnum(dccl.type());

    imc.properties = dccl.properties();

    decodeDurationList(dccl.durations(), imc.durations);

    imc.distances = dccl.distances();

    imc.actions = dccl.actions();

    decodeFuelList(dccl.fuel(), imc.fuel);

}


// ================ VehicleState Message ================
void encodeVehicleState(const DUNE::IMC::VehicleState& imc, IMC_DCCL::VehicleState& dccl)
{
    dccl.set_op_mode(encodeVehicleStateOperationModeEnum(imc.op_mode));

    if(!Helper::is_default_value(imc.error_count)) dccl.set_error_count(imc.error_count);

    if(!Helper::is_default_value(imc.error_ents)) dccl.set_error_ents(imc.error_ents);

    if(!Helper::is_default_value(imc.maneuver_type)) dccl.set_maneuver_type(imc.maneuver_type);

    if(!Helper::is_default_value(imc.maneuver_stime)) dccl.set_maneuver_stime(imc.maneuver_stime);

    if(!Helper::is_default_value(imc.maneuver_eta)) dccl.set_maneuver_eta(imc.maneuver_eta);

    if(!Helper::is_default_value(imc.control_loops)) dccl.set_control_loops(imc.control_loops);

    if(!Helper::is_default_value(imc.flags)) dccl.set_flags(imc.flags);

    if(!Helper::is_default_value(imc.last_error)) dccl.set_last_error(imc.last_error);

    if(!Helper::is_default_value(imc.last_error_time)) dccl.set_last_error_time(imc.last_error_time);

}


// ================ VehicleState Message ================
void decodeVehicleState(const IMC_DCCL::VehicleState& dccl, DUNE::IMC::VehicleState& imc)
{
    imc.op_mode = decodeVehicleStateOperationModeEnum(dccl.op_mode());

    imc.error_count = dccl.error_count();

    imc.error_ents = dccl.error_ents();

    imc.maneuver_type = dccl.maneuver_type();

    imc.maneuver_stime = dccl.maneuver_stime();

    imc.maneuver_eta = dccl.maneuver_eta();

    imc.control_loops = dccl.control_loops();

    imc.flags = dccl.flags();

    imc.last_error = dccl.last_error();

    imc.last_error_time = dccl.last_error_time();

}


