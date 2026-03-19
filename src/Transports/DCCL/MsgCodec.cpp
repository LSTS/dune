//AUTO-GENERATED CODEC IMC<-->DCCL MESSAGES

#include "MsgCodec.hpp"
#include <DUNE/DUNE.hpp>
#include "Helper.hpp"

// ================ PlanStatistics Message ================
void encodePlanStatistics(const DUNE::IMC::PlanStatistics& imc, IMC_DCCL::PlanStatistics& dccl)
{
    if(!Helper::is_default_value(imc.plan_id)) dccl.set_plan_id(imc.plan_id);

    dccl.set_type(encodePlanStatisticsTypeEnum(imc.type));

    if(!Helper::is_default_value(imc.properties)) dccl.set_properties(imc.properties);

    if(!Helper::is_default_value(imc.durations)) dccl.set_durations(imc.durations);

    if(!Helper::is_default_value(imc.distances)) dccl.set_distances(imc.distances);

    if(!Helper::is_default_value(imc.actions)) dccl.set_actions(imc.actions);

    if(!Helper::is_default_value(imc.fuel)) dccl.set_fuel(imc.fuel);

}


// ================ PlanStatistics Message ================
void decodePlanStatistics(const IMC_DCCL::PlanStatistics& dccl, DUNE::IMC::PlanStatistics& imc)
{
    imc.plan_id = dccl.plan_id();

    imc.type = decodePlanStatisticsTypeEnum(dccl.type());

    imc.properties = dccl.properties();

    imc.durations = dccl.durations();

    imc.distances = dccl.distances();

    imc.actions = dccl.actions();

    imc.fuel = dccl.fuel();

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


// ================ SetEntityParameters Message ================
void encodeSetEntityParameters(const DUNE::IMC::SetEntityParameters& imc, IMC_DCCL::SetEntityParameters& dccl)
{
    dccl.set_name(encodeEntityName(imc.name));

    
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
    imc.name = decodeEntityName(dccl.name());

    
    for (unsigned int i=0; i < dccl.params_size(); i++) {				
    	DUNE::IMC::EntityParameter tmp;
    	decodeEntityParameter(dccl.params(i), tmp);
    	imc.params.push_back(tmp);
    }

}


// ================ PlanTransition Message ================
void encodePlanTransition(const DUNE::IMC::PlanTransition& imc, IMC_DCCL::PlanTransition& dccl)
{
    
    IMC_DCCL::ManeuverID* source_man = new IMC_DCCL::ManeuverID();
    encodeManeuverID(imc.source_man, *source_man);
    dccl.set_allocated_source_man(source_man);	

    
    IMC_DCCL::ManeuverID* dest_man = new IMC_DCCL::ManeuverID();
    encodeManeuverID(imc.dest_man, *dest_man);
    dccl.set_allocated_dest_man(dest_man);	

    
    IMC_DCCL::TransitionCondition* conditions = new IMC_DCCL::TransitionCondition();
    encodeTransitionCondition(imc.conditions, *conditions);
    dccl.set_allocated_conditions(conditions);	

}


// ================ PlanTransition Message ================
void decodePlanTransition(const IMC_DCCL::PlanTransition& dccl, DUNE::IMC::PlanTransition& imc)
{
    decodeManeuverID(dccl.source_man(), imc.source_man);

    decodeManeuverID(dccl.dest_man(), imc.dest_man);

    decodeTransitionCondition(dccl.conditions(), imc.conditions);

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


// ================ PlanControl Message ================
void encodePlanControl(const DUNE::IMC::PlanControl& imc, IMC_DCCL::PlanControl& dccl)
{
    dccl.set_type(encodePlanControlTypeEnum(imc.type));

    dccl.set_op(encodePlanControlOperationEnum(imc.op));

    if(!Helper::is_default_value(imc.request_id)) dccl.set_request_id(imc.request_id);

    if(!Helper::is_default_value(imc.plan_id)) dccl.set_plan_id(imc.plan_id);

    if(!Helper::is_default_value(imc.flags)) dccl.set_flags(imc.flags);

    
    IMC_DCCL::PlanControlArgUnion* tmp = new IMC_DCCL::PlanControlArgUnion();			
    encodePlanControlArgUnion(*imc.arg, *tmp);
    dccl.set_allocated_arg(tmp);

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

    
    if(auto* tmp = decodePlanControlArgUnion(dccl.arg())){				
    	imc.arg.set(*tmp);
    	delete tmp;
    }

    imc.info = dccl.info();

}


// ================ PlanDB Message ================
void encodePlanDB(const DUNE::IMC::PlanDB& imc, IMC_DCCL::PlanDB& dccl)
{
    dccl.set_type(encodePlanDBTypeEnum(imc.type));

    dccl.set_op(encodePlanDBOperationEnum(imc.op));

    if(!Helper::is_default_value(imc.request_id)) dccl.set_request_id(imc.request_id);

    if(!Helper::is_default_value(imc.plan_id)) dccl.set_plan_id(imc.plan_id);

    
    IMC_DCCL::PlanDBArgUnion* tmp = new IMC_DCCL::PlanDBArgUnion();			
    encodePlanDBArgUnion(*imc.arg, *tmp);
    dccl.set_allocated_arg(tmp);

    if(!Helper::is_default_value(imc.info)) dccl.set_info(imc.info);

}


// ================ PlanDB Message ================
void decodePlanDB(const IMC_DCCL::PlanDB& dccl, DUNE::IMC::PlanDB& imc)
{
    imc.type = decodePlanDBTypeEnum(dccl.type());

    imc.op = decodePlanDBOperationEnum(dccl.op());

    imc.request_id = dccl.request_id();

    imc.plan_id = dccl.plan_id();

    
    if(auto* tmp = decodePlanDBArgUnion(dccl.arg())){				
    	imc.arg.set(*tmp);
    	delete tmp;
    }

    imc.info = dccl.info();

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

    
    for (unsigned int i=0; i < dccl.plans_info_size(); i++) {				
    	DUNE::IMC::PlanDBInformation tmp;
    	decodePlanDBInformation(dccl.plans_info(i), tmp);
    	imc.plans_info.push_back(tmp);
    }

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

    
    for (unsigned int i=0; i < dccl.samples_size(); i++) {				
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

}


// ================ PlanSpecification Message ================
void encodePlanSpecification(const DUNE::IMC::PlanSpecification& imc, IMC_DCCL::PlanSpecification& dccl)
{
    if(!Helper::is_default_value(imc.plan_id)) dccl.set_plan_id(imc.plan_id);

    if(!Helper::is_default_value(imc.description)) dccl.set_description(imc.description);

    if(!Helper::is_default_value(imc.vnamespace)) dccl.set_vnamespace(imc.vnamespace);

    
    IMC_DCCL::ManeuverID* start_man_id = new IMC_DCCL::ManeuverID();
    encodeManeuverID(imc.start_man_id, *start_man_id);
    dccl.set_allocated_start_man_id(start_man_id);	

    
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

    decodeManeuverID(dccl.start_man_id(), imc.start_man_id);

    
    for (unsigned int i=0; i < dccl.maneuvers_size(); i++) {				
    	DUNE::IMC::PlanManeuver tmp;
    	decodePlanManeuver(dccl.maneuvers(i), tmp);
    	imc.maneuvers.push_back(tmp);
    }

    
    for (unsigned int i=0; i < dccl.transitions_size(); i++) {				
    	DUNE::IMC::PlanTransition tmp;
    	decodePlanTransition(dccl.transitions(i), tmp);
    	imc.transitions.push_back(tmp);
    }

    
    for (unsigned int i=0; i < dccl.start_actions_size(); i++) {				
    	if(auto* tmp = decodePlanSpecificationStartActionsUnion(dccl.start_actions(i))){
    		imc.start_actions.push_back(tmp);
    		delete tmp;
    	}
    }

    
    for (unsigned int i=0; i < dccl.end_actions_size(); i++) {				
    	if(auto* tmp = decodePlanSpecificationEndActionsUnion(dccl.end_actions(i))){
    		imc.end_actions.push_back(tmp);
    		delete tmp;
    	}
    }

}


// ================ EntityParameter Message ================
void encodeEntityParameter(const DUNE::IMC::EntityParameter& imc, IMC_DCCL::EntityParameter& dccl)
{
    dccl.set_name(encodeParameterName(imc.name));

    
    IMC_DCCL::ParameterValue* value = new IMC_DCCL::ParameterValue();
    encodeParameterValue(imc.value, *value);
    dccl.set_allocated_value(value);	

}


// ================ EntityParameter Message ================
void decodeEntityParameter(const IMC_DCCL::EntityParameter& dccl, DUNE::IMC::EntityParameter& imc)
{
    imc.name = decodeParameterName(dccl.name());

    decodeParameterValue(dccl.value(), imc.value);

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

    
    for (unsigned int i=0; i < dccl.points_size(); i++) {				
    	DUNE::IMC::PathPoint tmp;
    	decodePathPoint(dccl.points(i), tmp);
    	imc.points.push_back(tmp);
    }

}


// ================ PlanManeuver Message ================
void encodePlanManeuver(const DUNE::IMC::PlanManeuver& imc, IMC_DCCL::PlanManeuver& dccl)
{
    
    IMC_DCCL::ManeuverID* maneuver_id = new IMC_DCCL::ManeuverID();
    encodeManeuverID(imc.maneuver_id, *maneuver_id);
    dccl.set_allocated_maneuver_id(maneuver_id);	

    
    IMC_DCCL::Maneuver* tmp = new IMC_DCCL::Maneuver();
    encodeManeuver(*imc.data.get(), *tmp);
    dccl.set_allocated_data(tmp);

    
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

    
    if(auto* tmp = decodeManeuver(dccl.data())){	
        imc.data.set(*tmp);
        delete tmp;
    }

    
    for (unsigned int i=0; i < dccl.start_actions_size(); i++) {				
    	if(auto* tmp = decodePlanManeuverStartActionsUnion(dccl.start_actions(i))){
    		imc.start_actions.push_back(tmp);
    		delete tmp;
    	}
    }

}


