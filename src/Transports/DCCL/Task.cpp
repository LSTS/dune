//***************************************************************************
// Copyright 2007-2024 Universidade do Porto - Faculdade de Engenharia      *
// Laboratório de Sistemas e Tecnologia Subaquática (LSTS)                  *
//***************************************************************************
// This file is part of DUNE: Unified Navigation Environment.               *
//                                                                          *
// Commercial Licence Usage                                                 *
// Licencees holding valid commercial DUNE licences may use this file in    *
// accordance with the commercial licence agreement provided with the       *
// Software or, alternatively, in accordance with the terms contained in a  *
// written agreement between you and Faculdade de Engenharia da             *
// Universidade do Porto. For licensing terms, conditions, and further      *
// information contact lsts@fe.up.pt.                                       *
//                                                                          *
// Modified European Union Public Licence - EUPL v.1.1 Usage                *
// Alternatively, this file may be used under the terms of the Modified     *
// EUPL, Version 1.1 only (the "Licence"), appearing in the file LICENCE.md *
// included in the packaging of this file. You may not use this work        *
// except in compliance with the Licence. Unless required by applicable     *
// law or agreed to in writing, software distributed under the Licence is   *
// distributed on an "AS IS" basis, WITHOUT WARRANTIES OR CONDITIONS OF     *
// ANY KIND, either express or implied. See the Licence for the specific    *
// language governing permissions and limitations at                        *
// https://github.com/LSTS/dune/blob/master/LICENCE.md and                  *
// http://ec.europa.eu/idabc/eupl.html.                                     *
//***************************************************************************
// Author: Lucrezia Bernacchi                                                 *
//***************************************************************************

// DUNE headers.
#include <DUNE/DUNE.hpp>

// Dccl headers.
#include "dccl.h"
//#include "dcclMsg.pb.h"
#include "IMC_DCCL.pb.cc"

namespace Transports
{
  //! IMC-DCCL parser task - for testing encoding and decoding capabilities
  //! @author Lucrezia Bernacchi
  namespace DCCL
  {
    using DUNE_NAMESPACES;
    
    static const uint8_t c_sync = 0xA1; // Synchronization byte for A1 protocol

    dccl::Codec codec;      //DCCL codec 
    struct Arguments
    {
      //! trigger activation/deactivation dccl
      bool trigger_dccl;
    };    

    struct Task: public DUNE::Tasks::Task
    {
      //! Task arguments.
      Arguments m_args;
      uint16_t m_reqid;
   
      //! Constructor.
      //! @param[in] name task name.
      //! @param[in] ctx context.
      Task(const std::string& name, Tasks::Context& ctx):
        DUNE::Tasks::Task(name, ctx),
        m_reqid(0)
      {
        param("DCCL Encoding", m_args.trigger_dccl)
        .defaultValue("false")
        .description("Enable encoding and decoding of Plan Specification message with dccl");

        bind<IMC::PlanSpecification>(this);
        bind<IMC::UamRxFrame>(this);
      }

      //! Update internal state with new parameter values.
      void
      onUpdateParameters(void)
      {          
      }

      //! Reserve entity identifiers.
      void
      onEntityReservation(void)
      {
      }

      //! Resolve entity names.
      void
      onEntityResolution(void)
      {
      }

      //! Acquire resources.
      void
      onResourceAcquisition(void)
      {
      }

      //! Initialize resources.
      void
      onResourceInitialization(void)
      {
      }

      //! Release resources.
      void
      onResourceRelease(void)
      {
      }

      // If DCCL active: Encode the PlanSpecification with DCCL lib and dispatch an Acoustic resquest transmission to send it over acoustic
      void
      consume(const IMC::PlanSpecification* msg)
      {
        if(m_args.trigger_dccl){
          //Get PlanSpecification data
          int num = msg->getPayloadSerializationSize();
          std::string plan_id = msg->plan_id;
          std::string start_man_id = msg->start_man_id;

          inf("Encoding Plan Specification msg with DCCL Lib");
          std::string encoded_bytes; 
          
          IMC_DCCL::PlanSpecification msg_planspec;

          //HEADER
          IMC_DCCL::Header msg_header;
          msg_header.set_src(msg->getSource());
          msg_header.set_src_ent(msg->getSourceEntity());
          msg_header.set_dst(msg->getDestination());
          msg_header.set_dst_ent(msg->getDestinationEntity());
          *msg_planspec.mutable_head() = msg_header;

          //PLAN_ID
          msg_planspec.set_plan_id(plan_id);       

          //START_MAN_ID   
          IMC_DCCL::ManeuverType man_type;
          std::int16_t man_num;
          SplitManeuverNumber(start_man_id, man_type, man_num);

          IMC_DCCL::ManeuverID msg_manid;
          msg_manid.set_maneuver_type(man_type);
          msg_manid.set_maneuver_number(man_num);
          *msg_planspec.mutable_start_man_id() = msg_manid;


          //MANEUVERS
          IMC::MessageList<IMC::PlanManeuver>::const_iterator manitr;
          manitr = msg->maneuvers.begin();

          for (; manitr != msg->maneuvers.end(); ++manitr)
          {
            if (*manitr == NULL)
              continue;
            
            IMC_DCCL::PlanManeuver * msg_man = msg_planspec.add_maneuvers(); 
            //maneuver_id
            IMC_DCCL::ManeuverID* maneuver_id = msg_man->mutable_maneuver_id();
            std::string man_id = (*manitr)->maneuver_id;  

            IMC_DCCL::ManeuverType id_man_type;
            std::int16_t id_man_num;
            SplitManeuverNumber(man_id, id_man_type, id_man_num);
            
            maneuver_id->set_maneuver_type(id_man_type);
            maneuver_id->set_maneuver_number(id_man_num);

            //data - TODO: check different maneuvers
            IMC_DCCL::Maneuver* data = msg_man->mutable_data();
            IMC_DCCL::Goto* goto_maneuver = data->mutable_goto_maneuver();

            const IMC::Message* maneuver = (*manitr)->data.get(); //Todo: automatically recognize the IMC msg
            const IMC::Goto* maneuver_goto =  static_cast<const IMC::Goto*>(maneuver);

            goto_maneuver->set_timeout(maneuver_goto->timeout);
            goto_maneuver->set_lat(maneuver_goto->lat);
            goto_maneuver->set_lon(maneuver_goto->lon);
            goto_maneuver->set_z(maneuver_goto->z);
            goto_maneuver->set_z_units(ToDCCL_ZUnits(maneuver_goto->z_units));
            goto_maneuver->set_speed(maneuver_goto->speed);
            goto_maneuver->set_speed_units(ToDCCL_SpeedUnits(maneuver_goto->speed_units));
            goto_maneuver->set_roll(maneuver_goto->roll);
            goto_maneuver->set_pitch(maneuver_goto->pitch);
            goto_maneuver->set_yaw(maneuver_goto->yaw);      

            //start actions
            IMC::MessageList<IMC::Message>::const_iterator actitr;
            actitr = (*manitr)->start_actions.begin();

            for (; actitr != (*manitr)->start_actions.end(); ++actitr)
            {
              if (*actitr == NULL)
                continue;

              //create dccl msgs
              IMC_DCCL::EntityParameters * start_ac = msg_man->add_start_actions();
              
              IMC::SetEntityParameters* sep;
              sep = static_cast<IMC::SetEntityParameters*>(*actitr);
              

              //entity Name
              start_ac->set_name(ToDCCL_EntityName(sep->name));
              //params
              IMC::MessageList<IMC::EntityParameter>::const_iterator paritr;
              paritr = sep->params.begin();
              for (; paritr != sep->params.end(); ++paritr)
              {
                if (*paritr == NULL)
                  continue;

                //create dccl msgs
                IMC_DCCL::EntityParameter * param = start_ac->add_params();
                IMC_DCCL::ParameterValue* param_val = param->mutable_value();
                //set param name
                param->set_name(ToDCCL_ParameterName((*paritr)->name.c_str()));

                //set param value
                if(containsDigit((*paritr)->value)) param_val->set_value_number(std::stof((*paritr)->value));
                else{ param_val->set_value_string(ToDCCL_ParameterValue((*paritr)->value.c_str()));}
                        
              }


            }

          }

          //TRANSITIONS
          IMC::MessageList<IMC::PlanTransition>::const_iterator tritr;
          tritr = msg->transitions.begin();

          for (; tritr != msg->transitions.end(); ++tritr)
          {
            if (*tritr == NULL)
              continue;

            IMC_DCCL::PlanTransition * msg_trans = msg_planspec.add_transitions(); 
            IMC_DCCL::ManeuverID* source_man = msg_trans->mutable_source_man();
            IMC_DCCL::ManeuverID* dest_man = msg_trans->mutable_dest_man();

            std::string source = (*tritr)->source_man;  
            std::string dest = (*tritr)->dest_man;
            std::string tran_cond = (*tritr)->conditions;

            IMC_DCCL::ManeuverType source_man_type, dest_man_type;
            std::int16_t source_man_num, dest_man_num;
            SplitManeuverNumber(source, source_man_type, source_man_num);
            SplitManeuverNumber(dest, dest_man_type, dest_man_num);

            
            source_man->set_maneuver_type(source_man_type);
            source_man->set_maneuver_number(source_man_num);  
              
            dest_man->set_maneuver_type(dest_man_type);
            dest_man->set_maneuver_number(dest_man_num);

            msg_trans->set_conditions(ToDCCL_TransitionCondition(tran_cond.c_str()));
              
          }
        
          codec.load<IMC_DCCL::PlanSpecification>();
          codec.encode(&encoded_bytes, msg_planspec);
          size_t encoded_size = encoded_bytes.size();

          //std::string hex_string = Utils::String::toHex(encoded_bytes);
          //inf("ENCODED HEX: %s", hex_string.c_str());
          //inf("HEX msg characters %zu", hex_string.size());
          //std::vector<char> buffer(hex_string.begin(), hex_string.end());
          //size_t buffer_size = buffer.size();

          sendTransmissionRequest("", encoded_bytes);

        }
      }



     //!Decode the PlanSpecification with DCCL lib 
     void
     consume(const IMC::UamRxFrame* msg)
     {
       //Check source

       uint16_t imc_addr_src = 0;
       try
       {
         imc_addr_src = resolveSystemName(msg->sys_src);
       }
       catch (...)
       {
         debug("unknown system name: %s", msg->sys_src.c_str());
         return;
       }

       //Check dest
       uint16_t imc_addr_dst = 0;
       try
       {
         imc_addr_dst = resolveSystemName(msg->sys_dst);
       }
       catch (...)
       {
         debug("unknown system name: %s", msg->sys_dst.c_str());
         return;
       }

       //Check to be sure it's not A1
       if ((uint8_t)msg->data[0] != c_sync)
       {             
          //Check if msg is DCCL encoded
          std::string encoded_bytes(msg->data.begin(), msg->data.end());
          inf("Received hex string %s", encoded_bytes.c_str());

          std::string msgNoHex = String::fromHex(encoded_bytes);

          inf("Decoding Acoustic Msg with DCCL");

          codec.load<IMC_DCCL::PlanSpecification>();
          IMC_DCCL::PlanSpecification msg_planspec_rec;
          codec.decode(msgNoHex, &msg_planspec_rec);
          
          IMC::PlanSpecification msg_pl;

          //HEADER
          msg_pl.setSource(msg_planspec_rec.head().src());
          msg_pl.setSourceEntity(msg_planspec_rec.head().src_ent());
          msg_pl.setDestination(msg_planspec_rec.head().dst());
          msg_pl.setDestinationEntity(msg_planspec_rec.head().dst_ent());

          //PLAN_ID & START_MAN_ID
          msg_pl.plan_id = msg_planspec_rec.plan_id()+"DCCL";
          msg_pl.start_man_id = MergeManeuverNumber(msg_planspec_rec.start_man_id().maneuver_type(), msg_planspec_rec.start_man_id().maneuver_number());

          //MANEUVERS
          IMC::MessageList<IMC::PlanManeuver> msg_pm_list;

          for (unsigned int i = 0; i < msg_planspec_rec.maneuvers_size(); i++)
          {
            IMC::PlanManeuver msg_pm;
            //maneuver_id
            msg_pm.maneuver_id = MergeManeuverNumber(msg_planspec_rec.maneuvers(i).maneuver_id().maneuver_type(), msg_planspec_rec.maneuvers(i).maneuver_id().maneuver_number());
            //data
            //Todo: Check different maneuvers
            //Todo: Insert right precision
            IMC::Goto msg_goto;
            msg_goto.timeout = msg_planspec_rec.maneuvers(i).data().goto_maneuver().timeout();
            msg_goto.lat = msg_planspec_rec.maneuvers(i).data().goto_maneuver().lat();
            msg_goto.lon = msg_planspec_rec.maneuvers(i).data().goto_maneuver().lon();
            msg_goto.z = msg_planspec_rec.maneuvers(i).data().goto_maneuver().z();
            msg_goto.z_units = ToIMC_ZUnits(msg_planspec_rec.maneuvers(i).data().goto_maneuver().z_units());
            msg_goto.speed = msg_planspec_rec.maneuvers(i).data().goto_maneuver().speed();
            msg_goto.speed_units = ToIMC_SpeedUnits(msg_planspec_rec.maneuvers(i).data().goto_maneuver().speed_units());
            msg_goto.roll = msg_planspec_rec.maneuvers(i).data().goto_maneuver().roll();
            msg_goto.pitch = msg_planspec_rec.maneuvers(i).data().goto_maneuver().pitch();
            msg_goto.yaw = msg_planspec_rec.maneuvers(i).data().goto_maneuver().yaw();
          
            msg_pm.data.set(msg_goto);

            
            //start_actions
            IMC::MessageList<IMC::Message> msg_sa_list;
            
            for (unsigned int j = 0; j <  msg_planspec_rec.maneuvers(i).start_actions_size(); j++){

              IMC::SetEntityParameters sep;
              sep.name = ToIMC_EntityName(msg_planspec_rec.maneuvers(i).start_actions(j).name());
              
              for (unsigned int k = 0; k <  msg_planspec_rec.maneuvers(i).start_actions(j).params_size(); k++){
                IMC::EntityParameter ent_par;
                ent_par.name = ToIMC_ParameterName(msg_planspec_rec.maneuvers(i).start_actions(j).params(k).name());

                if(msg_planspec_rec.maneuvers(i).start_actions(j).params(k).value().ParameterValueUnion_case() == 1) ent_par.value = std::to_string(msg_planspec_rec.maneuvers(i).start_actions(j).params(k).value().value_number());
                else{ent_par.value = ToIMC_ParameterValue(msg_planspec_rec.maneuvers(i).start_actions(j).params(k).value().value_string());}

                
                sep.params.push_back(ent_par);

              }
              msg_pm.start_actions.push_back(sep);

            }

            //Insert maneuver in the maneuvers list
            msg_pm_list.push_back(msg_pm);
          }

          //add the maneuver list to the plan spec msg
          msg_pl.maneuvers = msg_pm_list;

          //TRANSITION
          IMC::MessageList<IMC::PlanTransition> msg_pt_list;
          for (unsigned int i = 0; i < msg_planspec_rec.transitions_size(); i++){
            IMC::PlanTransition msg_pt;
            msg_pt.source_man = MergeManeuverNumber(msg_planspec_rec.transitions(i).source_man().maneuver_type(), msg_planspec_rec.transitions(i).source_man().maneuver_number());
            msg_pt.dest_man = MergeManeuverNumber(msg_planspec_rec.transitions(i).dest_man().maneuver_type(), msg_planspec_rec.transitions(i).dest_man().maneuver_number());
            msg_pt.conditions = ToIMC_TransitionCondition(msg_planspec_rec.transitions(i).conditions());

            //Insert transcond in the transcond list
            msg_pt_list.push_back(msg_pt);
          }

          //add the transition cond list to the plan spec msg
          msg_pl.transitions = msg_pt_list;

          //dispatch(msg_pl);

          IMC::PlanControl load_plan_dccl;
          load_plan_dccl.type = IMC::PlanControl::PC_REQUEST;
          load_plan_dccl.op = IMC::PlanControl::PC_LOAD;


          load_plan_dccl.plan_id = msg_pl.plan_id;
          load_plan_dccl.arg.set(msg_pl);
          load_plan_dccl.request_id = 0;
          load_plan_dccl.flags = 0;
          dispatch(load_plan_dccl);

          //dispatch PlanSpecification 
          dispatch(msg_pl);
       }
      
      }



      //! Create and send transmission request msg (broadcast, acoustic, raw)
      void
      sendTransmissionRequest(const std::string& sys, std::string& encoded_msg){

        IMC::TransmissionRequest msg;
        msg.setDestination(getSystemId());
        msg.destination     = sys; //broadcast
        msg.deadline        = Time::Clock::getSinceEpoch() + 60;
        msg.req_id          = createInternalId();
        msg.comm_mean       = IMC::TransmissionRequest::CMEAN_ACOUSTIC;
        msg.data_mode       = IMC::TransmissionRequest::DMODE_RAW;
        
        //new
        std::string hex_str = Utils::String::toHex(encoded_msg);
        inf("Encoded hex msg: %s", hex_str.c_str());
        std::vector<char> buffer(hex_str.begin(), hex_str.end());
        
        msg.raw_data  = buffer;               
        dispatch(&msg); 
      }

      uint16_t
      createInternalId(){
        if(m_reqid==0xFFFF){
          m_reqid=0;
        }
        else{
          m_reqid++;
        }
        return m_reqid;
      }



      //! Splits the text into name maneuver and number
      //  param[in] text to be split
      //  param[out] maneuver 
      //  param[out] num 
      void
      SplitManeuverNumber(const std::string& text, IMC_DCCL::ManeuverType& man, std::int16_t& num)
      {
        std::string str;
        str = sanitize(text); 

        std::string man_goto = "Goto";
        std::string man_loiter = "Loiter";

        size_t start_idx = str.find(man_goto);

        if (start_idx != std::string::npos)
        {
            man = IMC_DCCL::GOTO; //Maneuver type
            num = std::stoi(str.substr(start_idx + man_goto.length()));   //Maneuver number                       
          } else {

            inf("Mission name still not encoded with DCCL");   
          }
        }   


      //! Merge the maneuver type and maneuver number into a text
      //  param[in] maneuver type and maneuver number
      //  param[out] text with maneuver type and number es: Goto1 
      std::string
      MergeManeuverNumber(const IMC_DCCL::ManeuverType& man_type, const std::int16_t& man_num)
      {
        std::string str_man_type;
        std::string str_man_num;

        if(man_type == IMC_DCCL::GOTO) str_man_type = "Goto";
        else if (man_type == IMC_DCCL::FOLLOWPATH) str_man_type = "FollowPath";
        else if (man_type == IMC_DCCL::LOITER) str_man_type = "Loiter";
      
        str_man_num = std::to_string(man_num);
        std::string merged = str_man_type + str_man_num;
        return merged; 
        
        }   

      
      //! Convert IMC Zunits in IMC_DCCL Zunits
      //  param[in] IMC ZUnits
      //  param[out] IMC_DCCL ZUnits      
      IMC_DCCL::ZUnits ToDCCL_ZUnits(const u_int8_t& imc_zunit){
        if (imc_zunit == IMC::ZUnits::Z_DEPTH) return IMC_DCCL::DEPTH;
        else if (imc_zunit == IMC::ZUnits::Z_ALTITUDE) return IMC_DCCL::ALTITUDE;
        else if (imc_zunit == IMC::ZUnits::Z_HEIGHT) return IMC_DCCL::HEIGHT;
        else {return IMC_DCCL::NONE_ZU;}
      }

      //! Convert IMC_DCCL Zunits in IMC Zunits
      //  param[in] IMC_DCCL ZUnits 
      //  param[out]  IMC ZUnits
      IMC::ZUnits ToIMC_ZUnits(const u_int8_t& imc_dccl_zunit){
        if (imc_dccl_zunit == IMC_DCCL::ZUnits::DEPTH) return IMC::ZUnits::Z_DEPTH;
        else if (imc_dccl_zunit == IMC_DCCL::ZUnits::ALTITUDE) return IMC::ZUnits::Z_ALTITUDE;
        else if (imc_dccl_zunit == IMC_DCCL::ZUnits::HEIGHT) return IMC::ZUnits::Z_HEIGHT;
        else {return IMC::ZUnits::Z_NONE;}
      }

      //! Convert IMC SpeedUnita in IMC_DCCL SpeedUnits
      //  param[in] IMC SpeedUnits
      //  param[out] IMC_DCCL SpeedUnits      
      IMC_DCCL::SpeedUnits ToDCCL_SpeedUnits(const u_int8_t& imc_speedunit){
        if (imc_speedunit == IMC::SpeedUnits::SUNITS_METERS_PS) return IMC_DCCL::METERS_PS;
        else if (imc_speedunit == IMC::SpeedUnits::SUNITS_RPM) return IMC_DCCL::RPM;
        else {return IMC_DCCL::PERCENTAGE;}
      }

      //! Convert IMC_DCCL SpeedUnits in IMC Speedunits
      //  param[in] IMC_DCCL SpeedUnits 
      //  param[out]  IMC SpeedUnits
      IMC::SpeedUnits ToIMC_SpeedUnits(const u_int8_t& imc_dccl_speed_unit){
        if (imc_dccl_speed_unit == IMC_DCCL::SpeedUnits::METERS_PS) return IMC::SpeedUnits::SUNITS_METERS_PS;
        else if (imc_dccl_speed_unit == IMC_DCCL::SpeedUnits::RPM) return IMC::SpeedUnits::SUNITS_RPM;
        else {return IMC::SpeedUnits::SUNITS_PERCENTAGE;}
      }


      //! Convert Entity name in IMC_DCCL EntityName enum
      //  param[in] IMC Entity name
      //  param[out] IMC_DCCL EntityMame      
      IMC_DCCL::EntityName ToDCCL_EntityName(const std::string& entity_name){
        if (entity_name == "Path Control") return IMC_DCCL::EntityName::PATH_CONTROL;
        else if (entity_name == "Ranger") return IMC_DCCL::EntityName::RANGER;
        else if (entity_name == "Acoustic Modem") return IMC_DCCL::EntityName::ACOUSTIC_MODEM;
        else if (entity_name == "Sidescan") return IMC_DCCL::EntityName::SIDESCAN;
        else if (entity_name == "Camera") return IMC_DCCL::EntityName::CAMERA;
        else if (entity_name == "Multibeam") return IMC_DCCL::EntityName::MULTIBEAM;
        else {return IMC_DCCL::NONE_EN;}
      }

      //! Convert IMC_DCCL EntityName enum in IMC entity name
      //  param[in] IMC_DCCL EntityName
      //  param[out] IMC EntityMame string     
      std::string ToIMC_EntityName(const u_int8_t& imc_dccl_entity_name){
        std::string name;
        if (imc_dccl_entity_name == IMC_DCCL::EntityName::PATH_CONTROL) name = "Path Control";
        else if (imc_dccl_entity_name == IMC_DCCL::EntityName::RANGER) name = "Ranger";
        else if (imc_dccl_entity_name == IMC_DCCL::EntityName::ACOUSTIC_MODEM) name = "Acoustic Modem";
        else if (imc_dccl_entity_name == IMC_DCCL::EntityName::SIDESCAN) name = "Sidescan";
        else if (imc_dccl_entity_name == IMC_DCCL::EntityName::CAMERA) name = "Camera";
        else if (imc_dccl_entity_name == IMC_DCCL::EntityName::MULTIBEAM) name = "Multibeam";
        else {name = "Unknown DCCL";}

        return name;
      }

      //! Convert entity parameter name in IMC_DCCL EntityName enum
      //  param[in] IMC param name string   
      //  param[out] IMC_DCCL ParameterName enum      
      IMC_DCCL::ParameterName ToDCCL_ParameterName(const std::string& param_name){
        if (param_name == "Active") return IMC_DCCL::ACTIVE;
        else if (param_name == "Bottom Track -- Minimum Depth") return IMC_DCCL::ParameterName::BOTTOM_TRACK_MINIMUM_DEPTH;
        else if (param_name == "High-Frequency Channels") return IMC_DCCL::ParameterName::HIGH_FREQ_CHANNELS;
        else if (param_name == "High-Frequency Range") return IMC_DCCL::ParameterName::HIGH_FREQ_RANGE;
        else if (param_name == "Low-Frequency Channels") return IMC_DCCL::ParameterName::LOW_FREQ_CHANNELS;
        else if (param_name == "Low-Frequency Range") return IMC_DCCL::ParameterName::LOW_FREQ_RANGE;
        else if (param_name == "Range Multiplier") return IMC_DCCL::ParameterName::RANGE_MULTIPLIER;
        else if (param_name == "Strobe Delay (us)") return IMC_DCCL::ParameterName::STROBE_DELAY;
        else if (param_name == "Shutter Value (ms)") return IMC_DCCL::ParameterName::SHUTTER_VALUE;
        else if (param_name == "Range") return IMC_DCCL::ParameterName::RANGE;
        else if (param_name == "Frequency") return IMC_DCCL::ParameterName::FREQUENCY;
        else {return IMC_DCCL::NONE_PN;}
      }

      //! Convert entity parameter name from IMC_DCCL EntitnyName enum in IMC available string
      //  param[in] IMC_DCCL ParameterName enum   
      //  param[out] IMC param name string      
      std::string ToIMC_ParameterName(const u_int8_t& imc_dccl_param_name){
        std::string name;
        if (imc_dccl_param_name == IMC_DCCL::ParameterName::ACTIVE) name = "Active";
        else if (imc_dccl_param_name == IMC_DCCL::ParameterName::BOTTOM_TRACK_MINIMUM_DEPTH) name = "Bottom Track -- Minimum Depth";
        else if (imc_dccl_param_name == IMC_DCCL::ParameterName::HIGH_FREQ_CHANNELS) name = "High-Frequency Channels";
        else if (imc_dccl_param_name == IMC_DCCL::ParameterName::HIGH_FREQ_RANGE) name = "High-Frequency Range";
        else if (imc_dccl_param_name == IMC_DCCL::ParameterName::LOW_FREQ_CHANNELS) name = "Low-Frequency Channels";
        else if (imc_dccl_param_name == IMC_DCCL::ParameterName::LOW_FREQ_RANGE) name = "Low-Frequency Range";
        else if (imc_dccl_param_name == IMC_DCCL::ParameterName::RANGE_MULTIPLIER) name = "Range Multiplier";
        else if (imc_dccl_param_name == IMC_DCCL::ParameterName::STROBE_DELAY) name = "Strobe Delay (us)";
        else if (imc_dccl_param_name == IMC_DCCL::ParameterName::SHUTTER_VALUE) name = "Shutter Value (ms)";
        else if (imc_dccl_param_name == IMC_DCCL::ParameterName::RANGE) name = "Range";
        else if (imc_dccl_param_name == IMC_DCCL::ParameterName::FREQUENCY) name = "Frequency";
        else {name = "Unknow DCCL";}

        return name;
      }

      //! Convert entity parameter value in IMC_DCCL Parameter value enum
      //  param[in] IMC entity parameter value
      //  param[out] IMC_DCCL ParamValue      
      IMC_DCCL::ParamValue ToDCCL_ParameterValue(const std::string& param_value){

        if (param_value == "true") return IMC_DCCL::ParamValue::TRUE;
        else if (param_value == "false") return IMC_DCCL::ParamValue::FALSE;
        else if (param_value == "Both") return IMC_DCCL::ParamValue::BOTH;
        else if (param_value == "None") return IMC_DCCL::ParamValue::NONE_PV;
        else {return IMC_DCCL::ParamValue::NONE_PV;}
      }

      //! Convert entity parameter value from IMC_DCCL Parameter value enum to IMC string
      //  param[in] IMC_DCCL ParamValue enum
      //  param[out] IMC params string      
      std::string ToIMC_ParameterValue(const u_int8_t& imc_dccl_param_value){
        std::string param_value;

        if (imc_dccl_param_value == IMC_DCCL::ParamValue::TRUE) param_value = "true";
        else if (imc_dccl_param_value == IMC_DCCL::ParamValue::FALSE) param_value = "false";        
        else if (imc_dccl_param_value == IMC_DCCL::ParamValue::BOTH) param_value = "Both";
        else if (imc_dccl_param_value == IMC_DCCL::ParamValue::NONE_PV) param_value = "None";
        else {param_value = "Unknown DCCL";}

        return param_value;
      }

      //! Convert transition condition value in IMC_DCCL TransitionCondition enum
      //  param[in] IMC transition condition string
      //  param[out] IMC_DCCL Transition condition enum      
      IMC_DCCL::TransitionCondition ToDCCL_TransitionCondition(const std::string& param_value){

        if (param_value == "ManeuverIsDone") return IMC_DCCL::TransitionCondition::MANEUVERISDONE;
        else {return IMC_DCCL::TransitionCondition::NONE_TC;}
      }

      //! Convert transition condition value from IMC_DCCL TransitionCondition enum to IMC string
      //  param[in] IMC_DCCL TransitionCondition enum
      //  param[out] IMC transition condition string      
      std::string ToIMC_TransitionCondition(const u_int8_t& imc_dccl_tran_cond){
        std::string tran_cond;

        if (imc_dccl_tran_cond == IMC_DCCL::TransitionCondition::MANEUVERISDONE) tran_cond = "ManeuverIsDone";
        else {tran_cond = "Unknown DCCL";}

        return tran_cond;
      }
    

      bool containsDigit(const std::string& str) {
        for (char c : str) {
          if (std::isdigit(c)){return true;}
        }
        return false;
      }

      //! Main loop.
      void
      onMain(void)
      {
        while (!stopping())
        {
          waitForMessages(1.0);
        }
      }
    };
  }
}

DUNE_TASK