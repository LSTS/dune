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


// ================ FuelItemList Message ================
void encodeFuelItemList(const std::string& imc, IMC_DCCL::FuelItemList& dccl)
{
    
    if (auto pos = imc.find('='); pos != std::string::npos)
    {
        std::string name_ = imc.substr(0, pos);
        dccl.set_name(encodeFuelParcelName(name_));
    
        auto number_ = std::stof(imc.substr(pos + 1));
        if(!Helper::is_default_value(number_)) dccl.set_number(number_);
    
    }
                              
}


// ================ FuelItemList Message ================
void decodeFuelItemList(const IMC_DCCL::FuelItemList& dccl, std::string& imc)
{
    
    std::string name_;
    name_ = decodeFuelParcelName(dccl.name());
    
    auto number_ = dccl.number();
    
    imc = name_ + '=' + std::to_string(number_);
}


// ================ FuelList Message ================
void encodeFuelList(const std::string& imc, IMC_DCCL::FuelList& dccl)
{
    
    auto items = Helper::getItems(imc);
    
    for (const auto& item : items){
        auto* elem_dccl = dccl.add_item();
        encodeFuelItemList(item, *elem_dccl);
    }                                                 
                              
}


// ================ FuelList Message ================
void decodeFuelList(const IMC_DCCL::FuelList& dccl, std::string& imc)
{
    
    for (int i=0; i < dccl.item_size(); i++) {
        std::string temp;
        decodeFuelItemList(dccl.item(i), temp);	
        imc += temp + ',';
    }
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
        encodeEntityName(name_, *dccl.mutable_name());
    
        auto number_ = std::stoi(imc.substr(pos + 1));
        if(!Helper::is_default_value(number_)) dccl.set_number(number_);
    
    }
                              
}


// ================ ItemList Message ================
void decodeItemList(const IMC_DCCL::ItemList& dccl, std::string& imc)
{
    
    std::string name_;
    decodeEntityName(dccl.name(), name_);
    
    auto number_ = dccl.number();
    
    imc = name_ + '=' + std::to_string(number_);
}


// ================ ListCombined Message ================
void encodeListCombined(const std::string& imc, IMC_DCCL::ListCombined& dccl)
{
    
    auto items = Helper::getItems(imc);
    
    for (const auto& item : items){
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
            encodeGoto(*imc_tmp, *dccl.mutable_goto_maneuver());
            return;
    }
    
    if (auto* imc_tmp = dynamic_cast<const DUNE::IMC::FollowPath*>(&imc))
    {
            encodeFollowPath(*imc_tmp, *dccl.mutable_followpath_maneuver());
            return;
    }
    
    if (auto* imc_tmp = dynamic_cast<const DUNE::IMC::Loiter*>(&imc))
    {
            encodeLoiter(*imc_tmp, *dccl.mutable_loiter_maneuver());
            return;
    }
    
    if (auto* imc_tmp = dynamic_cast<const DUNE::IMC::StationKeeping*>(&imc))
    {
            encodeStationKeeping(*imc_tmp, *dccl.mutable_stationkeeping_maneuver());
            return;
    }
    throw std::runtime_error("Invalid Maneuver");
}


// ================ Maneuver Message ================
std::unique_ptr<DUNE::IMC::Maneuver> decodeManeuver(const IMC_DCCL::Maneuver& dccl)	
{
    
    if (dccl.has_goto_maneuver()){
            auto tmp = std::make_unique<DUNE::IMC::Goto>();
            decodeGoto(dccl.goto_maneuver(), *tmp);
            return tmp;
    }
    
    if (dccl.has_followpath_maneuver()){
            auto tmp = std::make_unique<DUNE::IMC::FollowPath>();
            decodeFollowPath(dccl.followpath_maneuver(), *tmp);
            return tmp;
    }
    
    if (dccl.has_loiter_maneuver()){
            auto tmp = std::make_unique<DUNE::IMC::Loiter>();
            decodeLoiter(dccl.loiter_maneuver(), *tmp);
            return tmp;
    }
    
    if (dccl.has_stationkeeping_maneuver()){
            auto tmp = std::make_unique<DUNE::IMC::StationKeeping>();
            decodeStationKeeping(dccl.stationkeeping_maneuver(), *tmp);
            return tmp;
    }
    throw std::runtime_error("Invalid Maneuver");
}


// ================ ManeuverID Message ================
void encodeManeuverID(const std::string& imc, IMC_DCCL::ManeuverID& dccl)
{
    
    IMC_DCCL::ManeuverIDCombined id_combined;
    encodeManeuverIDCombined(imc, id_combined);
    if(id_combined.maneuver_type() != IMC_DCCL::ManeuverType::MT_UNKNOWN){
        *dccl.mutable_id_combined() = id_combined;
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
            encodePlanSpecification(*imc_tmp, *dccl.mutable_plan_specification_payload());
            return;
    }
    
    if (auto* imc_tmp = dynamic_cast<const DUNE::IMC::EstimatedState*>(&imc))
    {
            encodeEstimatedState(*imc_tmp, *dccl.mutable_estimated_state_payload());
            return;
    }
    
    if (auto* imc_tmp = dynamic_cast<const DUNE::IMC::PlanDB*>(&imc))
    {
            encodePlanDB(*imc_tmp, *dccl.mutable_plan_db_payload());
            return;
    }
    
    if (auto* imc_tmp = dynamic_cast<const DUNE::IMC::PlanControl*>(&imc))
    {
            encodePlanControl(*imc_tmp, *dccl.mutable_plan_control_payload());
            return;
    }
    
    if (auto* imc_tmp = dynamic_cast<const DUNE::IMC::SetEntityParameters*>(&imc))
    {
            encodeSetEntityParameters(*imc_tmp, *dccl.mutable_set_entity_parameters_payload());
            return;
    }
    
    if (auto* imc_tmp = dynamic_cast<const DUNE::IMC::VehicleState*>(&imc))
    {
            encodeVehicleState(*imc_tmp, *dccl.mutable_vehicle_state_payload());
            return;
    }
    
    if (auto* imc_tmp = dynamic_cast<const DUNE::IMC::EntityState*>(&imc))
    {
            encodeEntityState(*imc_tmp, *dccl.mutable_entity_state_payload());
            return;
    }
    
    if (auto* imc_tmp = dynamic_cast<const DUNE::IMC::PlanControlState*>(&imc))
    {
            encodePlanControlState(*imc_tmp, *dccl.mutable_plan_control_state_payload());
            return;
    }
    
    if (auto* imc_tmp = dynamic_cast<const DUNE::IMC::VerticalProfile*>(&imc))
    {
            encodeVerticalProfile(*imc_tmp, *dccl.mutable_vertical_profile_payload());
            return;
    }
    
    if (auto* imc_tmp = dynamic_cast<const DUNE::IMC::Voltage*>(&imc))
    {
            encodeVoltage(*imc_tmp, *dccl.mutable_voltage_payload());
            return;
    }
    
    if (auto* imc_tmp = dynamic_cast<const DUNE::IMC::FuelLevel*>(&imc))
    {
            encodeFuelLevel(*imc_tmp, *dccl.mutable_fuel_level_payload());
            return;
    }
    
    if (auto* imc_tmp = dynamic_cast<const DUNE::IMC::Current*>(&imc))
    {
            encodeCurrent(*imc_tmp, *dccl.mutable_current_payload());
            return;
    }
    
    if (auto* imc_tmp = dynamic_cast<const DUNE::IMC::WindSpeed*>(&imc))
    {
            encodeWindSpeed(*imc_tmp, *dccl.mutable_wind_speed_payload());
            return;
    }
    
    if (auto* imc_tmp = dynamic_cast<const DUNE::IMC::EntityParameters*>(&imc))
    {
            encodeEntityParameters(*imc_tmp, *dccl.mutable_entity_parameters_payload());
            return;
    }
    
    if (auto* imc_tmp = dynamic_cast<const DUNE::IMC::EntityList*>(&imc))
    {
            encodeEntityList(*imc_tmp, *dccl.mutable_entity_list_payload());
            return;
    }
    throw std::runtime_error("Invalid Payload");
}


// ================ Payload Message ================
std::unique_ptr<DUNE::IMC::Message> decodePayload(const IMC_DCCL::Payload& dccl)
{
    
    if (dccl.has_plan_specification_payload()){
            auto tmp = std::make_unique<DUNE::IMC::PlanSpecification>();
            decodePlanSpecification(dccl.plan_specification_payload(), *tmp);
            return tmp;
    }
    
    if (dccl.has_estimated_state_payload()){
            auto tmp = std::make_unique<DUNE::IMC::EstimatedState>();
            decodeEstimatedState(dccl.estimated_state_payload(), *tmp);
            return tmp;
    }
    
    if (dccl.has_plan_db_payload()){
            auto tmp = std::make_unique<DUNE::IMC::PlanDB>();
            decodePlanDB(dccl.plan_db_payload(), *tmp);
            return tmp;
    }
    
    if (dccl.has_plan_control_payload()){
            auto tmp = std::make_unique<DUNE::IMC::PlanControl>();
            decodePlanControl(dccl.plan_control_payload(), *tmp);
            return tmp;
    }
    
    if (dccl.has_set_entity_parameters_payload()){
            auto tmp = std::make_unique<DUNE::IMC::SetEntityParameters>();
            decodeSetEntityParameters(dccl.set_entity_parameters_payload(), *tmp);
            return tmp;
    }
    
    if (dccl.has_vehicle_state_payload()){
            auto tmp = std::make_unique<DUNE::IMC::VehicleState>();
            decodeVehicleState(dccl.vehicle_state_payload(), *tmp);
            return tmp;
    }
    
    if (dccl.has_entity_state_payload()){
            auto tmp = std::make_unique<DUNE::IMC::EntityState>();
            decodeEntityState(dccl.entity_state_payload(), *tmp);
            return tmp;
    }
    
    if (dccl.has_plan_control_state_payload()){
            auto tmp = std::make_unique<DUNE::IMC::PlanControlState>();
            decodePlanControlState(dccl.plan_control_state_payload(), *tmp);
            return tmp;
    }
    
    if (dccl.has_vertical_profile_payload()){
            auto tmp = std::make_unique<DUNE::IMC::VerticalProfile>();
            decodeVerticalProfile(dccl.vertical_profile_payload(), *tmp);
            return tmp;
    }
    
    if (dccl.has_voltage_payload()){
            auto tmp = std::make_unique<DUNE::IMC::Voltage>();
            decodeVoltage(dccl.voltage_payload(), *tmp);
            return tmp;
    }
    
    if (dccl.has_fuel_level_payload()){
            auto tmp = std::make_unique<DUNE::IMC::FuelLevel>();
            decodeFuelLevel(dccl.fuel_level_payload(), *tmp);
            return tmp;
    }
    
    if (dccl.has_current_payload()){
            auto tmp = std::make_unique<DUNE::IMC::Current>();
            decodeCurrent(dccl.current_payload(), *tmp);
            return tmp;
    }
    
    if (dccl.has_wind_speed_payload()){
            auto tmp = std::make_unique<DUNE::IMC::WindSpeed>();
            decodeWindSpeed(dccl.wind_speed_payload(), *tmp);
            return tmp;
    }
    
    if (dccl.has_entity_parameters_payload()){
            auto tmp = std::make_unique<DUNE::IMC::EntityParameters>();
            decodeEntityParameters(dccl.entity_parameters_payload(), *tmp);
            return tmp;
    }
    
    if (dccl.has_entity_list_payload()){
            auto tmp = std::make_unique<DUNE::IMC::EntityList>();
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
            encodePlanSpecification(*imc_tmp, *dccl.mutable_ps_arg());
            return;
    }
    
    if (auto* imc_tmp = dynamic_cast<const DUNE::IMC::Maneuver*>(&imc))
    {
            encodeManeuver(*imc_tmp, *dccl.mutable_man_arg());
            return;
    }
    
    if (auto* imc_tmp = dynamic_cast<const DUNE::IMC::PlanStatistics*>(&imc))
    {
            encodePlanStatistics(*imc_tmp, *dccl.mutable_stat_arg());
            return;
    }
    throw std::runtime_error("Invalid PlanControlArgUnion");
}


// ================ PlanControlArgUnion Message ================
std::unique_ptr<DUNE::IMC::Message> decodePlanControlArgUnion(const IMC_DCCL::PlanControlArgUnion& dccl)
{
    
    if (dccl.has_ps_arg()){
            auto tmp = std::make_unique<DUNE::IMC::PlanSpecification>();
            decodePlanSpecification(dccl.ps_arg(), *tmp);
            return tmp;
    }
    
    if (dccl.has_man_arg()){
            return decodeManeuver(dccl.man_arg());
    }
    
    if (dccl.has_stat_arg()){
            auto tmp = std::make_unique<DUNE::IMC::PlanStatistics>();
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
            encodePlanSpecification(*imc_tmp, *dccl.mutable_ps_arg());
            return;
    }
    
    if (auto* imc_tmp = dynamic_cast<const DUNE::IMC::PlanDBInformation*>(&imc))
    {
            encodePlanDBInformation(*imc_tmp, *dccl.mutable_pi_arg());
            return;
    }
    
    if (auto* imc_tmp = dynamic_cast<const DUNE::IMC::PlanDBState*>(&imc))
    {
            encodePlanDBState(*imc_tmp, *dccl.mutable_pc_arg());
            return;
    }
    throw std::runtime_error("Invalid PlanDBArgUnion");
}


// ================ PlanDBArgUnion Message ================
std::unique_ptr<DUNE::IMC::Message> decodePlanDBArgUnion(const IMC_DCCL::PlanDBArgUnion& dccl)
{
    
    if (dccl.has_ps_arg()){
            auto tmp = std::make_unique<DUNE::IMC::PlanSpecification>();
            decodePlanSpecification(dccl.ps_arg(), *tmp);
            return tmp;
    }
    
    if (dccl.has_pi_arg()){
            auto tmp = std::make_unique<DUNE::IMC::PlanDBInformation>();
            decodePlanDBInformation(dccl.pi_arg(), *tmp);
            return tmp;
    }
    
    if (dccl.has_pc_arg()){
            auto tmp = std::make_unique<DUNE::IMC::PlanDBState>();
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
            encodeSetEntityParameters(*imc_tmp, *dccl.mutable_ep());
            return;
    }
    throw std::runtime_error("Invalid PlanManeuverStartActionsUnion");
}


// ================ PlanManeuverStartActionsUnion Message ================
std::unique_ptr<DUNE::IMC::Message> decodePlanManeuverStartActionsUnion(const IMC_DCCL::PlanManeuverStartActionsUnion& dccl)
{
    
    if (dccl.has_ep()){
            auto tmp = std::make_unique<DUNE::IMC::SetEntityParameters>();
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
            encodeSetEntityParameters(*imc_tmp, *dccl.mutable_ep());
            return;
    }
    throw std::runtime_error("Invalid PlanSpecificationEndActionsUnion");
}


// ================ PlanSpecificationEndActionsUnion Message ================
std::unique_ptr<DUNE::IMC::Message> decodePlanSpecificationEndActionsUnion(const IMC_DCCL::PlanSpecificationEndActionsUnion& dccl)
{
    
    if (dccl.has_ep()){
            auto tmp = std::make_unique<DUNE::IMC::SetEntityParameters>();
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
            encodeSetEntityParameters(*imc_tmp, *dccl.mutable_ep());
            return;
    }
    throw std::runtime_error("Invalid PlanSpecificationStartActionsUnion");
}


// ================ PlanSpecificationStartActionsUnion Message ================
std::unique_ptr<DUNE::IMC::Message> decodePlanSpecificationStartActionsUnion(const IMC_DCCL::PlanSpecificationStartActionsUnion& dccl)
{
    
    if (dccl.has_ep()){
            auto tmp = std::make_unique<DUNE::IMC::SetEntityParameters>();
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


