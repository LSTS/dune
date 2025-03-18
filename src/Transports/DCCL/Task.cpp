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

    dccl::Codec codec;      //DCCL codec 
    

    struct Task: public DUNE::Tasks::Task
    {
      //! Constructor.
      //! @param[in] name task name.
      //! @param[in] ctx context.
      Task(const std::string& name, Tasks::Context& ctx):
        DUNE::Tasks::Task(name, ctx)
      {
        bind<IMC::PlanSpecification>(this);
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

      void
      consume(const IMC::PlanSpecification* msg)
      {
        //Get PlanSpecification data
        int num = msg->getPayloadSerializationSize();
        std::string plan_id = msg->plan_id;
        std::string start_man_id = msg->start_man_id;


        

        inf("BYTE %d", num);

        inf("#################### ENCODE ####################");
        std::string encoded_bytes; 
        
        IMC_DCCL::PlanSpecification msg_planspec;

        //PLAN_ID
        msg_planspec.set_plan_id(plan_id);       

        //START_MAN_ID (Todo func find name and number)
        IMC_DCCL::ManeuverID msg_manid;
        msg_manid.set_maneuver_type(IMC_DCCL::GOTO);
        msg_manid.set_maneuver_number(1);

        *msg_planspec.mutable_start_man_id() = msg_manid;

        //MANEUVERS
        IMC_DCCL::PlanManeuver man_1;
        IMC_DCCL::ManeuverID man_1_ID;
        IMC_DCCL::Maneuver man_1_data;
        IMC_DCCL::Goto man_1_goto;
        IMC_DCCL::EntityParameters man_1_start_actions1;
        IMC_DCCL::EntityParameters man_1_start_actions2;
        IMC_DCCL::EntityParameters man_1_start_actions3;
        IMC_DCCL::EntityParameter man_1_start_actions1_param1;
        IMC_DCCL::EntityParameter man_1_start_actions2_param1;
        IMC_DCCL::EntityParameter man_1_start_actions3_param1;

        man_1_ID.set_maneuver_number(1);
        man_1_ID.set_maneuver_type(IMC_DCCL::GOTO);

        man_1_goto.set_timeout(10000);
        man_1_goto.set_lat(0.71880895);
        man_1_goto.set_lon(-0.15193547);
        man_1_goto.set_z(2.0);
        man_1_goto.set_z_units(IMC_DCCL::DEPTH);
        man_1_goto.set_speed(1200.0);
        man_1_goto.set_speed_units(IMC_DCCL::RPM);
        man_1_goto.set_roll(0.00000000);
        man_1_goto.set_pitch(0.00000000);
        man_1_goto.set_yaw(0.00000000);

        man_1_start_actions1.set_name(IMC_DCCL::PATH_CONTROL);
        man_1_start_actions1_param1.set_name(IMC_DCCL::BOTTOM_TRACK_MINIMUM_DEPTH);
        man_1_start_actions1_param1.set_allocated_value(0);
        *man_1_start_actions1.add_params() = man_1_start_actions1_param1;

        man_1_start_actions2.set_name(IMC_DCCL::RANGER);
        man_1_start_actions2_param1.set_name(IMC_DCCL::ACTIVE);
        man_1_start_actions2_param1.set_allocated_value(0);
        *man_1_start_actions2.add_params() = man_1_start_actions1_param1;

        man_1_start_actions3.set_name(IMC_DCCL::ACOUSTIC_MODEM);
        man_1_start_actions3_param1.set_name(IMC_DCCL::ACTIVE);
        man_1_start_actions3_param1.set_allocated_value(0);
        *man_1_start_actions3.add_params() = man_1_start_actions1_param1;
        
        
        man_1_data.set_allocated_goto_maneuver(&man_1_goto);

        man_1.set_allocated_maneuver_id(&man_1_ID);
        man_1.set_allocated_data(&man_1_data);
        *man_1.add_start_actions() = man_1_start_actions1;
        *man_1.add_start_actions() = man_1_start_actions2;
        *man_1.add_start_actions() = man_1_start_actions3;
      
        *msg_planspec.add_maneuvers()= man_1;   


        IMC_DCCL::PlanManeuver man_2;
        man_2.set_allocated_maneuver_id(&man_1_ID);
        man_2.set_allocated_data(&man_1_data);  
        *man_2.add_start_actions() = man_1_start_actions1;
        *man_2.add_start_actions() = man_1_start_actions2;
        *man_2.add_start_actions() = man_1_start_actions3;    
        *msg_planspec.add_maneuvers()= man_2;  

        IMC_DCCL::PlanManeuver man_3;
        man_3.set_allocated_maneuver_id(&man_1_ID);
        man_3.set_allocated_data(&man_1_data);   
        *man_3.add_start_actions() = man_1_start_actions1;
        *man_3.add_start_actions() = man_1_start_actions2;
        *man_3.add_start_actions() = man_1_start_actions3;   
        *msg_planspec.add_maneuvers()= man_3;   

        IMC_DCCL::PlanManeuver man_4;
        man_4.set_allocated_maneuver_id(&man_1_ID);
        man_4.set_allocated_data(&man_1_data);
        *man_4.add_start_actions() = man_1_start_actions1;
        *man_4.add_start_actions() = man_1_start_actions2;
        *man_4.add_start_actions() = man_1_start_actions3;      
        *msg_planspec.add_maneuvers()= man_4;

        IMC_DCCL::PlanManeuver man_5;
        man_5.set_allocated_maneuver_id(&man_1_ID);
        man_5.set_allocated_data(&man_1_data);   
        *man_5.add_start_actions() = man_1_start_actions1;
        *man_5.add_start_actions() = man_1_start_actions2;
        *man_5.add_start_actions() = man_1_start_actions3;   
        *msg_planspec.add_maneuvers()= man_5;

        IMC_DCCL::PlanManeuver man_6;
        man_6.set_allocated_maneuver_id(&man_1_ID);
        man_6.set_allocated_data(&man_1_data); 
        *man_6.add_start_actions() = man_1_start_actions1;
        *man_6.add_start_actions() = man_1_start_actions2;
        *man_6.add_start_actions() = man_1_start_actions3;     
        *msg_planspec.add_maneuvers()= man_6;

        IMC_DCCL::PlanManeuver man_7;
        man_7.set_allocated_maneuver_id(&man_1_ID);
        man_7.set_allocated_data(&man_1_data);    
        *man_7.add_start_actions() = man_1_start_actions1;
        *man_7.add_start_actions() = man_1_start_actions2;
        *man_7.add_start_actions() = man_1_start_actions3;  
        *msg_planspec.add_maneuvers()= man_7;

        //TRANSITIONS
        IMC_DCCL::PlanTransition trans1;
        IMC_DCCL::ManeuverID source_man;
        IMC_DCCL::ManeuverID dest_man;
        IMC_DCCL::PlanTransition trans2;
        IMC_DCCL::PlanTransition trans3;
        IMC_DCCL::PlanTransition trans4;
        IMC_DCCL::PlanTransition trans5;
        IMC_DCCL::PlanTransition trans6;

        source_man.set_maneuver_number(1);  //same for every transition just to test
        source_man.set_maneuver_type(IMC_DCCL::GOTO);        
        dest_man.set_maneuver_number(1);  //same for every transition just to test
        dest_man.set_maneuver_type(IMC_DCCL::GOTO);

        trans1.set_allocated_source_man(&source_man);
        trans1.set_allocated_dest_man(&dest_man);
        trans1.set_conditions(IMC_DCCL::MANEUVERISDONE);

        trans2.set_allocated_source_man(&source_man);
        trans2.set_allocated_dest_man(&dest_man);
        trans2.set_conditions(IMC_DCCL::MANEUVERISDONE);

        trans3.set_allocated_source_man(&source_man);
        trans3.set_allocated_dest_man(&dest_man);
        trans3.set_conditions(IMC_DCCL::MANEUVERISDONE);

        trans4.set_allocated_source_man(&source_man);
        trans4.set_allocated_dest_man(&dest_man);
        trans4.set_conditions(IMC_DCCL::MANEUVERISDONE);

        trans5.set_allocated_source_man(&source_man);
        trans5.set_allocated_dest_man(&dest_man);
        trans5.set_conditions(IMC_DCCL::MANEUVERISDONE);

        trans6.set_allocated_source_man(&source_man);
        trans6.set_allocated_dest_man(&dest_man);
        trans6.set_conditions(IMC_DCCL::MANEUVERISDONE);

        *msg_planspec.add_transitions() = trans1;
        *msg_planspec.add_transitions() = trans2;
        *msg_planspec.add_transitions() = trans3;
        *msg_planspec.add_transitions() = trans4;
        *msg_planspec.add_transitions() = trans5;
        *msg_planspec.add_transitions() = trans6;


        codec.load<IMC_DCCL::PlanSpecification>();
        codec.encode(&encoded_bytes, msg_planspec);
        size_t encoded_size = encoded_bytes.size();

        std::string hex_string = Utils::String::toHex(encoded_bytes);
        inf("HEX msg %s", hex_string.c_str());
        inf("SIZE HEX msg %zu", hex_string.size());
        std::vector<char> buffer(hex_string.begin(), hex_string.end());
        size_t buffer_size = buffer.size();


        inf("#################### DECODE ####################");

        std::string recv_msg(buffer.begin(), buffer.end());
        std::string msgNoHex = String::fromHex(recv_msg);

        IMC_DCCL::PlanSpecification msg_planspec_rec;
        codec.decode(msgNoHex, &msg_planspec_rec);

        
        inf("plan id: %s", msg_planspec_rec.plan_id().c_str());

        inf("start man id: type: %d", msg_planspec_rec.start_man_id().maneuver_type());
        inf("start man id: number: %d", msg_planspec_rec.start_man_id().maneuver_number());

        for (unsigned int i = 0; i < 6; i++)
        {
          inf("transition ---------------------------- %d", i);
          inf("transition cond: %d", msg_planspec_rec.transitions(i).conditions());
          inf("transition source type: %d", msg_planspec_rec.transitions(i).source_man().maneuver_type());
          inf("transition source number: %d", msg_planspec_rec.transitions(i).source_man().maneuver_number());
          inf("transition dest type: %d", msg_planspec_rec.transitions(i).dest_man().maneuver_type());
          inf("transition dest number: %d", msg_planspec_rec.transitions(i).dest_man().maneuver_number());
        }

        for (unsigned int i = 0; i < 7; i++)
        {
          inf("man ---------------------------- %d", i);
          inf("man id type: %d", msg_planspec_rec.maneuvers(i).maneuver_id().maneuver_type());
          inf("man id number: %d", msg_planspec_rec.maneuvers(i).maneuver_id().maneuver_number());
          inf("man goto timeout: %d", msg_planspec_rec.maneuvers(i).data().goto_maneuver().timeout());
          inf("man goto lat: %.3f", msg_planspec_rec.maneuvers(i).data().goto_maneuver().lat());
          inf("man goto lon: %.3f", msg_planspec_rec.maneuvers(i).data().goto_maneuver().lon());
          inf("man goto z: %.3f", msg_planspec_rec.maneuvers(i).data().goto_maneuver().z());
          inf("man goto zunit: %d", msg_planspec_rec.maneuvers(i).data().goto_maneuver().z_units());
          inf("man goto speed: %.3f", msg_planspec_rec.maneuvers(i).data().goto_maneuver().speed());
          inf("man goto speedunit: %d", msg_planspec_rec.maneuvers(i).data().goto_maneuver().speed_units());
          inf("man goto roll: %.3f", msg_planspec_rec.maneuvers(i).data().goto_maneuver().roll());
          inf("man goto pitch: %.3f", msg_planspec_rec.maneuvers(i).data().goto_maneuver().pitch());
          inf("man goto yaw: %.3f", msg_planspec_rec.maneuvers(i).data().goto_maneuver().yaw());
          inf("man start action name: %d", msg_planspec_rec.maneuvers(i).start_actions(0).name());
          inf("man start action params: %d", msg_planspec_rec.maneuvers(i).start_actions(0).params(0).name());
          inf("man start action params: %.1f", msg_planspec_rec.maneuvers(i).start_actions(0).params(0).value().value_number());
          inf("man start action name: %d", msg_planspec_rec.maneuvers(i).start_actions(1).name());
          inf("man start action params: %d", msg_planspec_rec.maneuvers(i).start_actions(1).params(0).name());
          inf("man start action params: %.1f", msg_planspec_rec.maneuvers(i).start_actions(1).params(0).value().value_number());
          inf("man start action name: %d", msg_planspec_rec.maneuvers(i).start_actions(2).name());
          inf("man start action params: %d", msg_planspec_rec.maneuvers(i).start_actions(2).params(0).name());
          inf("man start action params: %.1f", msg_planspec_rec.maneuvers(i).start_actions(2).params(0).value().value_number());
        }

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
