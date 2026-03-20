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
    return nullptr;
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
    return nullptr;
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
    return nullptr;
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
}


// ================ PlanManeuverStartActionsUnion Message ================
DUNE::IMC::Message* decodePlanManeuverStartActionsUnion(const IMC_DCCL::PlanManeuverStartActionsUnion& dccl)
{
    
    if (dccl.has_ep()){
            auto* tmp = new DUNE::IMC::SetEntityParameters();
            decodeSetEntityParameters(dccl.ep(), *tmp);
            return tmp;
    }
    return nullptr;
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
}


// ================ PlanSpecificationEndActionsUnion Message ================
DUNE::IMC::Message* decodePlanSpecificationEndActionsUnion(const IMC_DCCL::PlanSpecificationEndActionsUnion& dccl)
{
    
    if (dccl.has_ep()){
            auto* tmp = new DUNE::IMC::SetEntityParameters();
            decodeSetEntityParameters(dccl.ep(), *tmp);
            return tmp;
    }
    return nullptr;
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
}


// ================ PlanSpecificationStartActionsUnion Message ================
DUNE::IMC::Message* decodePlanSpecificationStartActionsUnion(const IMC_DCCL::PlanSpecificationStartActionsUnion& dccl)
{
    
    if (dccl.has_ep()){
            auto* tmp = new DUNE::IMC::SetEntityParameters();
            decodeSetEntityParameters(dccl.ep(), *tmp);
            return tmp;
    }
    return nullptr;
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


