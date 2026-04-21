//AUTO-GENERATED CODEC IMC<-->DCCL MESSAGES

#include "MsgOnlyProtoCodec.hpp"
#include <DUNE/DUNE.hpp>
#include "Helper.hpp"

// ================ EntityName Message ================
void encodeEntityName(const std::string& imc, IMC_DCCL::EntityName& dccl)
{
    
    auto enum_val = encodeEntityNameEnum(imc);
    if(enum_val != IMC_DCCL::EntityNameEnum::EN_UNKNOWN){
            dccl.set_name_enum(enum_val);
            return;
    }
    
    dccl.set_name_string(imc);
}


// ================ EntityName Message ================
void decodeEntityName(const IMC_DCCL::EntityName& dccl, std::string& imc)
{
    
    if(dccl.has_name_enum()) imc = decodeEntityNameEnum(dccl.name_enum());
    
    
    if(dccl.has_name_string()) imc = dccl.name_string();
}


// ================ Header Message ================
void encodeHeader(const DUNE::IMC::Message& imc, IMC_DCCL::Header& dccl)
{
    
    dccl.set_timestamp(imc.getTimeStamp());
    dccl.set_src(imc.getSource());
    dccl.set_src_ent(imc.getSourceEntity());
    dccl.set_dst(imc.getDestination());
    dccl.set_dst_ent(imc.getDestinationEntity());
                              
}


// ================ Header Message ================
void decodeHeader(const IMC_DCCL::Header& dccl, DUNE::IMC::Message& imc)
{
    
    imc.setTimeStamp(dccl.timestamp());
    imc.setSource(dccl.src());
    imc.setSourceEntity(dccl.src_ent());
    imc.setDestination(dccl.dst());
    imc.setDestinationEntity(dccl.dst_ent());
                              
}


// ================ ItemList Message ================
void encodeItemList(const std::string& imc, IMC_DCCL::ItemList& dccl)
{
    
    if (auto pos = imc.find('='); pos != std::string::npos)
    {
        std::string name_ = imc.substr(0, pos);
        int number_ = std::stoi(imc.substr(pos + 1));
    
        IMC_DCCL::EntityName* name = new IMC_DCCL::EntityName();
        encodeEntityName(name_, *name);
        dccl.set_allocated_name(name);
    
        if(!Helper::is_default_value(number_)) dccl.set_number(number_);
    
    }
                              
}


// ================ ItemList Message ================
void decodeItemList(const IMC_DCCL::ItemList& dccl, std::string& imc)
{
    
    std::string name_;
    decodeEntityName(dccl.name(), name_);
    
    int number_ = dccl.number();
    
    imc = name_ + '=' + std::to_string(number_);
}


// ================ ListCombined Message ================
void encodeListCombined(const std::string& imc, IMC_DCCL::ListCombined& dccl)
{
    
    std::stringstream ss(imc);
    for (std::string item; std::getline(ss, item, ';'); )
    {
        auto* elem_dccl = dccl.add_item();
        encodeItemList(item, *elem_dccl);
    }
                                                     
                              
}


// ================ ListCombined Message ================
void decodeListCombined(const IMC_DCCL::ListCombined& dccl, std::string& imc)
{
    
    for (int i=0; i < dccl.item_size(); i++) {
        std::string temp;
        decodeItemList(dccl.item(i), temp);	
        imc += temp + ';';
    }
}


// ================ Maneuver Message ================
void encodeManeuver(const DUNE::IMC::Maneuver& imc, IMC_DCCL::Maneuver& dccl)
{
    
    if (auto* imc_tmp = dynamic_cast<const DUNE::IMC::Goto*>(&imc))
    {
            IMC_DCCL::Goto* dccl_tmp = new IMC_DCCL::Goto();
            encodeGoto(*imc_tmp, *dccl_tmp);
            dccl.set_allocated_goto_maneuver(dccl_tmp);
            return;
    }
    
    if (auto* imc_tmp = dynamic_cast<const DUNE::IMC::FollowPath*>(&imc))
    {
            IMC_DCCL::FollowPath* dccl_tmp = new IMC_DCCL::FollowPath();
            encodeFollowPath(*imc_tmp, *dccl_tmp);
            dccl.set_allocated_followpath_maneuver(dccl_tmp);
            return;
    }
    
    if (auto* imc_tmp = dynamic_cast<const DUNE::IMC::Loiter*>(&imc))
    {
            IMC_DCCL::Loiter* dccl_tmp = new IMC_DCCL::Loiter();
            encodeLoiter(*imc_tmp, *dccl_tmp);
            dccl.set_allocated_loiter_maneuver(dccl_tmp);
            return;
    }
    
    if (auto* imc_tmp = dynamic_cast<const DUNE::IMC::StationKeeping*>(&imc))
    {
            IMC_DCCL::StationKeeping* dccl_tmp = new IMC_DCCL::StationKeeping();
            encodeStationKeeping(*imc_tmp, *dccl_tmp);
            dccl.set_allocated_stationkeeping_maneuver(dccl_tmp);
            return;
    }
    throw std::runtime_error("Invalid Maneuver");
}


// ================ Maneuver Message ================
DUNE::IMC::Maneuver* decodeManeuver(const IMC_DCCL::Maneuver& dccl)	
{
    
    if (dccl.has_goto_maneuver()){
            auto* tmp = new DUNE::IMC::Goto();
            decodeGoto(dccl.goto_maneuver(), *tmp);
            return tmp;
    }
    
    if (dccl.has_followpath_maneuver()){
            auto* tmp = new DUNE::IMC::FollowPath();
            decodeFollowPath(dccl.followpath_maneuver(), *tmp);
            return tmp;
    }
    
    if (dccl.has_loiter_maneuver()){
            auto* tmp = new DUNE::IMC::Loiter();
            decodeLoiter(dccl.loiter_maneuver(), *tmp);
            return tmp;
    }
    
    if (dccl.has_stationkeeping_maneuver()){
            auto* tmp = new DUNE::IMC::StationKeeping();
            decodeStationKeeping(dccl.stationkeeping_maneuver(), *tmp);
            return tmp;
    }
    throw std::runtime_error("Invalid Maneuver");
}


// ================ ManeuverID Message ================
void encodeManeuverID(const std::string& imc, IMC_DCCL::ManeuverID& dccl)
{
    
    IMC_DCCL::ManeuverIDCombined* id_combined = new IMC_DCCL::ManeuverIDCombined();
    encodeManeuverIDCombined(imc, *id_combined);
    if(id_combined->maneuver_type() != IMC_DCCL::ManeuverType::MT_UNKNOWN){
        dccl.set_allocated_id_combined(id_combined);
        return;}
    
    dccl.set_id_string(imc);
}


// ================ ManeuverID Message ================
void decodeManeuverID(const IMC_DCCL::ManeuverID& dccl, std::string& imc)
{
    
    if(dccl.has_id_combined()) decodeManeuverIDCombined(dccl.id_combined(), imc);
    
    
    if(dccl.has_id_string()) imc = dccl.id_string();
}


// ================ ManeuverIDCombined Message ================
void encodeManeuverIDCombined(const std::string& imc, IMC_DCCL::ManeuverIDCombined& dccl)
{
    
    std::string letters;
    std::string numbers;
    for(char c : imc){
        if (std::isalpha(c)){
            letters += c;
            } else if (std::isdigit(c)){
                numbers += c;
            }
    }
    dccl.set_maneuver_type(encodeManeuverType(letters));
    
    if (!numbers.empty()) dccl.set_maneuver_number(std::stoi(numbers));                         
                              
                              
}


// ================ ManeuverIDCombined Message ================
void decodeManeuverIDCombined(const IMC_DCCL::ManeuverIDCombined& dccl, std::string& imc)
{
    
    std::string str1 = decodeManeuverType(dccl.maneuver_type());
    std::string str2 = std::to_string(dccl.maneuver_number());
    imc = str1 + str2;
}


// ================ ParameterName Message ================
void encodeParameterName(const std::string& imc, IMC_DCCL::ParameterName& dccl)
{
    
    auto enum_val = encodeParamName(imc);
    if(enum_val != IMC_DCCL::ParamName::PN_UNKNOWN){
            dccl.set_param_enum(enum_val);
            return;
    }
    
    dccl.set_param_string(imc);
}


// ================ ParameterName Message ================
void decodeParameterName(const IMC_DCCL::ParameterName& dccl, std::string& imc)
{
    
    if(dccl.has_param_enum()) imc = decodeParamName(dccl.param_enum());
    
    
    if(dccl.has_param_string()) imc = dccl.param_string();
}


// ================ ParameterValue Message ================
void encodeParameterValue(const std::string& imc, IMC_DCCL::ParameterValue& dccl)
{
    
    auto enum_val = encodeParamValue(imc);
    if(enum_val != IMC_DCCL::ParamValue::PV_UNKNOWN){
            dccl.set_param_enum(enum_val);
            return;
    }
    
    if(Helper::containsJustDigits(imc)){
            dccl.set_param_number(std::stof(imc));
            return;
    }
    
    dccl.set_param_string(imc);
}


// ================ ParameterValue Message ================
void decodeParameterValue(const IMC_DCCL::ParameterValue& dccl, std::string& imc)
{
    
    if(dccl.has_param_enum()) imc = decodeParamValue(dccl.param_enum());
    
    
    if(dccl.has_param_number()) imc = std::to_string(dccl.param_number());
    
    
    if(dccl.has_param_string()) imc = dccl.param_string();
}


// ================ Payload Message ================
void encodePayload(const DUNE::IMC::Message& imc, IMC_DCCL::Payload& dccl)
{
    
    if (auto* imc_tmp = dynamic_cast<const DUNE::IMC::PlanSpecification*>(&imc))
    {
            IMC_DCCL::PlanSpecification* dccl_tmp = new IMC_DCCL::PlanSpecification();
            encodePlanSpecification(*imc_tmp, *dccl_tmp);
            dccl.set_allocated_plan_specification_payload(dccl_tmp);
            return;
    }
    
    if (auto* imc_tmp = dynamic_cast<const DUNE::IMC::EstimatedState*>(&imc))
    {
            IMC_DCCL::EstimatedState* dccl_tmp = new IMC_DCCL::EstimatedState();
            encodeEstimatedState(*imc_tmp, *dccl_tmp);
            dccl.set_allocated_estimated_state_payload(dccl_tmp);
            return;
    }
    
    if (auto* imc_tmp = dynamic_cast<const DUNE::IMC::PlanDB*>(&imc))
    {
            IMC_DCCL::PlanDB* dccl_tmp = new IMC_DCCL::PlanDB();
            encodePlanDB(*imc_tmp, *dccl_tmp);
            dccl.set_allocated_plan_db_payload(dccl_tmp);
            return;
    }
    
    if (auto* imc_tmp = dynamic_cast<const DUNE::IMC::PlanControl*>(&imc))
    {
            IMC_DCCL::PlanControl* dccl_tmp = new IMC_DCCL::PlanControl();
            encodePlanControl(*imc_tmp, *dccl_tmp);
            dccl.set_allocated_plan_control_payload(dccl_tmp);
            return;
    }
    
    if (auto* imc_tmp = dynamic_cast<const DUNE::IMC::SetEntityParameters*>(&imc))
    {
            IMC_DCCL::SetEntityParameters* dccl_tmp = new IMC_DCCL::SetEntityParameters();
            encodeSetEntityParameters(*imc_tmp, *dccl_tmp);
            dccl.set_allocated_set_entity_parameters_payload(dccl_tmp);
            return;
    }
    
    if (auto* imc_tmp = dynamic_cast<const DUNE::IMC::VehicleState*>(&imc))
    {
            IMC_DCCL::VehicleState* dccl_tmp = new IMC_DCCL::VehicleState();
            encodeVehicleState(*imc_tmp, *dccl_tmp);
            dccl.set_allocated_vehicle_state_payload(dccl_tmp);
            return;
    }
    
    if (auto* imc_tmp = dynamic_cast<const DUNE::IMC::EntityState*>(&imc))
    {
            IMC_DCCL::EntityState* dccl_tmp = new IMC_DCCL::EntityState();
            encodeEntityState(*imc_tmp, *dccl_tmp);
            dccl.set_allocated_entity_state_payload(dccl_tmp);
            return;
    }
    
    if (auto* imc_tmp = dynamic_cast<const DUNE::IMC::PlanControlState*>(&imc))
    {
            IMC_DCCL::PlanControlState* dccl_tmp = new IMC_DCCL::PlanControlState();
            encodePlanControlState(*imc_tmp, *dccl_tmp);
            dccl.set_allocated_plan_control_state_payload(dccl_tmp);
            return;
    }
    
    if (auto* imc_tmp = dynamic_cast<const DUNE::IMC::VerticalProfile*>(&imc))
    {
            IMC_DCCL::VerticalProfile* dccl_tmp = new IMC_DCCL::VerticalProfile();
            encodeVerticalProfile(*imc_tmp, *dccl_tmp);
            dccl.set_allocated_vertical_profile_payload(dccl_tmp);
            return;
    }
    
    if (auto* imc_tmp = dynamic_cast<const DUNE::IMC::Voltage*>(&imc))
    {
            IMC_DCCL::Voltage* dccl_tmp = new IMC_DCCL::Voltage();
            encodeVoltage(*imc_tmp, *dccl_tmp);
            dccl.set_allocated_voltage_payload(dccl_tmp);
            return;
    }
    
    if (auto* imc_tmp = dynamic_cast<const DUNE::IMC::FuelLevel*>(&imc))
    {
            IMC_DCCL::FuelLevel* dccl_tmp = new IMC_DCCL::FuelLevel();
            encodeFuelLevel(*imc_tmp, *dccl_tmp);
            dccl.set_allocated_fuel_level_payload(dccl_tmp);
            return;
    }
    
    if (auto* imc_tmp = dynamic_cast<const DUNE::IMC::Current*>(&imc))
    {
            IMC_DCCL::Current* dccl_tmp = new IMC_DCCL::Current();
            encodeCurrent(*imc_tmp, *dccl_tmp);
            dccl.set_allocated_current_payload(dccl_tmp);
            return;
    }
    
    if (auto* imc_tmp = dynamic_cast<const DUNE::IMC::WindSpeed*>(&imc))
    {
            IMC_DCCL::WindSpeed* dccl_tmp = new IMC_DCCL::WindSpeed();
            encodeWindSpeed(*imc_tmp, *dccl_tmp);
            dccl.set_allocated_wind_speed_payload(dccl_tmp);
            return;
    }
    
    if (auto* imc_tmp = dynamic_cast<const DUNE::IMC::EntityParameters*>(&imc))
    {
            IMC_DCCL::EntityParameters* dccl_tmp = new IMC_DCCL::EntityParameters();
            encodeEntityParameters(*imc_tmp, *dccl_tmp);
            dccl.set_allocated_entity_parameters_payload(dccl_tmp);
            return;
    }
    
    if (auto* imc_tmp = dynamic_cast<const DUNE::IMC::EntityList*>(&imc))
    {
            IMC_DCCL::EntityList* dccl_tmp = new IMC_DCCL::EntityList();
            encodeEntityList(*imc_tmp, *dccl_tmp);
            dccl.set_allocated_entity_list_payload(dccl_tmp);
            return;
    }
    throw std::runtime_error("Invalid Payload");
}


// ================ Payload Message ================
DUNE::IMC::Message* decodePayload(const IMC_DCCL::Payload& dccl)
{
    
    if (dccl.has_plan_specification_payload()){
            auto* tmp = new DUNE::IMC::PlanSpecification();
            decodePlanSpecification(dccl.plan_specification_payload(), *tmp);
            return tmp;
    }
    
    if (dccl.has_estimated_state_payload()){
            auto* tmp = new DUNE::IMC::EstimatedState();
            decodeEstimatedState(dccl.estimated_state_payload(), *tmp);
            return tmp;
    }
    
    if (dccl.has_plan_db_payload()){
            auto* tmp = new DUNE::IMC::PlanDB();
            decodePlanDB(dccl.plan_db_payload(), *tmp);
            return tmp;
    }
    
    if (dccl.has_plan_control_payload()){
            auto* tmp = new DUNE::IMC::PlanControl();
            decodePlanControl(dccl.plan_control_payload(), *tmp);
            return tmp;
    }
    
    if (dccl.has_set_entity_parameters_payload()){
            auto* tmp = new DUNE::IMC::SetEntityParameters();
            decodeSetEntityParameters(dccl.set_entity_parameters_payload(), *tmp);
            return tmp;
    }
    
    if (dccl.has_vehicle_state_payload()){
            auto* tmp = new DUNE::IMC::VehicleState();
            decodeVehicleState(dccl.vehicle_state_payload(), *tmp);
            return tmp;
    }
    
    if (dccl.has_entity_state_payload()){
            auto* tmp = new DUNE::IMC::EntityState();
            decodeEntityState(dccl.entity_state_payload(), *tmp);
            return tmp;
    }
    
    if (dccl.has_plan_control_state_payload()){
            auto* tmp = new DUNE::IMC::PlanControlState();
            decodePlanControlState(dccl.plan_control_state_payload(), *tmp);
            return tmp;
    }
    
    if (dccl.has_vertical_profile_payload()){
            auto* tmp = new DUNE::IMC::VerticalProfile();
            decodeVerticalProfile(dccl.vertical_profile_payload(), *tmp);
            return tmp;
    }
    
    if (dccl.has_voltage_payload()){
            auto* tmp = new DUNE::IMC::Voltage();
            decodeVoltage(dccl.voltage_payload(), *tmp);
            return tmp;
    }
    
    if (dccl.has_fuel_level_payload()){
            auto* tmp = new DUNE::IMC::FuelLevel();
            decodeFuelLevel(dccl.fuel_level_payload(), *tmp);
            return tmp;
    }
    
    if (dccl.has_current_payload()){
            auto* tmp = new DUNE::IMC::Current();
            decodeCurrent(dccl.current_payload(), *tmp);
            return tmp;
    }
    
    if (dccl.has_wind_speed_payload()){
            auto* tmp = new DUNE::IMC::WindSpeed();
            decodeWindSpeed(dccl.wind_speed_payload(), *tmp);
            return tmp;
    }
    
    if (dccl.has_entity_parameters_payload()){
            auto* tmp = new DUNE::IMC::EntityParameters();
            decodeEntityParameters(dccl.entity_parameters_payload(), *tmp);
            return tmp;
    }
    
    if (dccl.has_entity_list_payload()){
            auto* tmp = new DUNE::IMC::EntityList();
            decodeEntityList(dccl.entity_list_payload(), *tmp);
            return tmp;
    }
    throw std::runtime_error("Invalid Payload");
}


// ================ PlanControlArgUnion Message ================
void encodePlanControlArgUnion(const DUNE::IMC::Message& imc, IMC_DCCL::PlanControlArgUnion& dccl)
{
    
    if (auto* imc_tmp = dynamic_cast<const DUNE::IMC::PlanSpecification*>(&imc))
    {
            IMC_DCCL::PlanSpecification* dccl_tmp = new IMC_DCCL::PlanSpecification();
            encodePlanSpecification(*imc_tmp, *dccl_tmp);
            dccl.set_allocated_ps_arg(dccl_tmp);
            return;
    }
    
    if (auto* imc_tmp = dynamic_cast<const DUNE::IMC::Maneuver*>(&imc))
    {
            IMC_DCCL::Maneuver* dccl_tmp = new IMC_DCCL::Maneuver();
            encodeManeuver(*imc_tmp, *dccl_tmp);
            dccl.set_allocated_man_arg(dccl_tmp);
            return;
    }
    
    if (auto* imc_tmp = dynamic_cast<const DUNE::IMC::PlanStatistics*>(&imc))
    {
            IMC_DCCL::PlanStatistics* dccl_tmp = new IMC_DCCL::PlanStatistics();
            encodePlanStatistics(*imc_tmp, *dccl_tmp);
            dccl.set_allocated_stat_arg(dccl_tmp);
            return;
    }
    throw std::runtime_error("Invalid PlanControlArgUnion");
}


// ================ PlanControlArgUnion Message ================
DUNE::IMC::Message* decodePlanControlArgUnion(const IMC_DCCL::PlanControlArgUnion& dccl)
{
    
    if (dccl.has_ps_arg()){
            auto* tmp = new DUNE::IMC::PlanSpecification();
            decodePlanSpecification(dccl.ps_arg(), *tmp);
            return tmp;
    }
    
    if (dccl.has_man_arg()){
            return decodeManeuver(dccl.man_arg());
    }
    
    if (dccl.has_stat_arg()){
            auto* tmp = new DUNE::IMC::PlanStatistics();
            decodePlanStatistics(dccl.stat_arg(), *tmp);
            return tmp;
    }
    throw std::runtime_error("Invalid PlanControlArgUnion");
}


// ================ PlanDBArgUnion Message ================
void encodePlanDBArgUnion(const DUNE::IMC::Message& imc, IMC_DCCL::PlanDBArgUnion& dccl)
{
    
    if (auto* imc_tmp = dynamic_cast<const DUNE::IMC::PlanSpecification*>(&imc))
    {
            IMC_DCCL::PlanSpecification* dccl_tmp = new IMC_DCCL::PlanSpecification();
            encodePlanSpecification(*imc_tmp, *dccl_tmp);
            dccl.set_allocated_ps_arg(dccl_tmp);
            return;
    }
    
    if (auto* imc_tmp = dynamic_cast<const DUNE::IMC::PlanDBInformation*>(&imc))
    {
            IMC_DCCL::PlanDBInformation* dccl_tmp = new IMC_DCCL::PlanDBInformation();
            encodePlanDBInformation(*imc_tmp, *dccl_tmp);
            dccl.set_allocated_pi_arg(dccl_tmp);
            return;
    }
    
    if (auto* imc_tmp = dynamic_cast<const DUNE::IMC::PlanDBState*>(&imc))
    {
            IMC_DCCL::PlanDBState* dccl_tmp = new IMC_DCCL::PlanDBState();
            encodePlanDBState(*imc_tmp, *dccl_tmp);
            dccl.set_allocated_pc_arg(dccl_tmp);
            return;
    }
    throw std::runtime_error("Invalid PlanDBArgUnion");
}


// ================ PlanDBArgUnion Message ================
DUNE::IMC::Message* decodePlanDBArgUnion(const IMC_DCCL::PlanDBArgUnion& dccl)
{
    
    if (dccl.has_ps_arg()){
            auto* tmp = new DUNE::IMC::PlanSpecification();
            decodePlanSpecification(dccl.ps_arg(), *tmp);
            return tmp;
    }
    
    if (dccl.has_pi_arg()){
            auto* tmp = new DUNE::IMC::PlanDBInformation();
            decodePlanDBInformation(dccl.pi_arg(), *tmp);
            return tmp;
    }
    
    if (dccl.has_pc_arg()){
            auto* tmp = new DUNE::IMC::PlanDBState();
            decodePlanDBState(dccl.pc_arg(), *tmp);
            return tmp;
    }
    throw std::runtime_error("Invalid PlanDBArgUnion");
}


// ================ PlanManeuverStartActionsUnion Message ================
void encodePlanManeuverStartActionsUnion(const DUNE::IMC::Message& imc, IMC_DCCL::PlanManeuverStartActionsUnion& dccl)
{
    
    if (auto* imc_tmp = dynamic_cast<const DUNE::IMC::SetEntityParameters*>(&imc))
    {
            IMC_DCCL::SetEntityParameters* dccl_tmp = new IMC_DCCL::SetEntityParameters();
            encodeSetEntityParameters(*imc_tmp, *dccl_tmp);
            dccl.set_allocated_ep(dccl_tmp);
            return;
    }
    throw std::runtime_error("Invalid PlanManeuverStartActionsUnion");
}


// ================ PlanManeuverStartActionsUnion Message ================
DUNE::IMC::Message* decodePlanManeuverStartActionsUnion(const IMC_DCCL::PlanManeuverStartActionsUnion& dccl)
{
    
    if (dccl.has_ep()){
            auto* tmp = new DUNE::IMC::SetEntityParameters();
            decodeSetEntityParameters(dccl.ep(), *tmp);
            return tmp;
    }
    throw std::runtime_error("Invalid PlanManeuverStartActionsUnion");
}


// ================ PlanSpecificationEndActionsUnion Message ================
void encodePlanSpecificationEndActionsUnion(const DUNE::IMC::Message& imc, IMC_DCCL::PlanSpecificationEndActionsUnion& dccl)
{
    
    if (auto* imc_tmp = dynamic_cast<const DUNE::IMC::SetEntityParameters*>(&imc))
    {
            IMC_DCCL::SetEntityParameters* dccl_tmp = new IMC_DCCL::SetEntityParameters();
            encodeSetEntityParameters(*imc_tmp, *dccl_tmp);
            dccl.set_allocated_ep(dccl_tmp);
            return;
    }
    throw std::runtime_error("Invalid PlanSpecificationEndActionsUnion");
}


// ================ PlanSpecificationEndActionsUnion Message ================
DUNE::IMC::Message* decodePlanSpecificationEndActionsUnion(const IMC_DCCL::PlanSpecificationEndActionsUnion& dccl)
{
    
    if (dccl.has_ep()){
            auto* tmp = new DUNE::IMC::SetEntityParameters();
            decodeSetEntityParameters(dccl.ep(), *tmp);
            return tmp;
    }
    throw std::runtime_error("Invalid PlanSpecificationEndActionsUnion");
}


// ================ PlanSpecificationStartActionsUnion Message ================
void encodePlanSpecificationStartActionsUnion(const DUNE::IMC::Message& imc, IMC_DCCL::PlanSpecificationStartActionsUnion& dccl)
{
    
    if (auto* imc_tmp = dynamic_cast<const DUNE::IMC::SetEntityParameters*>(&imc))
    {
            IMC_DCCL::SetEntityParameters* dccl_tmp = new IMC_DCCL::SetEntityParameters();
            encodeSetEntityParameters(*imc_tmp, *dccl_tmp);
            dccl.set_allocated_ep(dccl_tmp);
            return;
    }
    throw std::runtime_error("Invalid PlanSpecificationStartActionsUnion");
}


// ================ PlanSpecificationStartActionsUnion Message ================
DUNE::IMC::Message* decodePlanSpecificationStartActionsUnion(const IMC_DCCL::PlanSpecificationStartActionsUnion& dccl)
{
    
    if (dccl.has_ep()){
            auto* tmp = new DUNE::IMC::SetEntityParameters();
            decodeSetEntityParameters(dccl.ep(), *tmp);
            return tmp;
    }
    throw std::runtime_error("Invalid PlanSpecificationStartActionsUnion");
}


// ================ TransitionCondition Message ================
void encodeTransitionCondition(const std::string& imc, IMC_DCCL::TransitionCondition& dccl)
{
    
    auto enum_val = encodeTransitionConditionEnum(imc);
    if(enum_val != IMC_DCCL::TransitionConditionEnum::TC_UNKNOWN){
            dccl.set_condition_enum(enum_val);
            return;
    }
    
    dccl.set_condition_string(imc);
}


// ================ TransitionCondition Message ================
void decodeTransitionCondition(const IMC_DCCL::TransitionCondition& dccl, std::string& imc)
{
    
    if(dccl.has_condition_enum()) imc = decodeTransitionConditionEnum(dccl.condition_enum());
    
    
    if(dccl.has_condition_string()) imc = dccl.condition_string();
}


