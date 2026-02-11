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
#include "CodecDCCL.hpp"

namespace Transports
{
  //! IMC-DCCL parser task - for testing encoding and decoding capabilities
  //! @author Lucrezia Bernacchi
  namespace DCCL
  {
    using DUNE_NAMESPACES;
    
    static const uint8_t c_sync = 0xA1; // Synchronization byte for A1 protocol

    //dccl::Codec codec;      //DCCL codec 
    struct Arguments
    {
      //! trigger activation/deactivation dccl
      bool trigger_dccl;
      // Rate limits.
      std::vector<std::string> rate_lims;
      // Filtered entities.
      std::vector<std::string> entities_flt;
    };    

    struct Task: public DUNE::Tasks::Task
    {
      //! Task arguments.
      Arguments m_args;
      uint16_t m_reqid;
      dccl::Codec m_dccl;     //DCCL CODEC
      IMCDCCL::CodecDCCL m_codecdcll; //DCCL LIB
      //! Message Filter
      MessageFilter m_filter;
   
      //! Constructor.
      //! @param[in] name task name.
      //! @param[in] ctx context.
      Task(const std::string& name, Tasks::Context& ctx):
        DUNE::Tasks::Task(name, ctx),
        m_codecdcll(m_dccl),
        m_reqid(0)
      {
        param("DCCL Encoding", m_args.trigger_dccl)
        .defaultValue("false")
        .description("Enable encoding and decoding of Plan Specification message with dccl");

        param("Rate Limiters", m_args.rate_lims)
        .description("List of <Message>:<Frequency>");

        param("Filtered Entities", m_args.entities_flt)
        .description("List of <Message>:<Entity>+<Entity> that define the source entities allowed to pass message of a specific message type.");

        bind<IMC::PlanSpecification>(this);
        bind<IMC::UamRxFrame>(this);
        //bind<IMC::EstimatedState>(this);
      }

      //! Update internal state with new parameter values.
      void
      onUpdateParameters(void)
      { 
        // Process rate limiters.
        m_filter.setupRates(m_args.rate_lims);
        // Process filtered entities.
        m_filter.setupEntities(m_args.entities_flt, this);         
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

      // If DCCL active: Encode the Msg with DCCL lib and dispatch an Acoustic resquest transmission to send it over acoustic
      void
      consume(const IMC::PlanSpecification* msg)
      {
        if(m_args.trigger_dccl){

          ////////////////////////////////////////////////////////////// DCCL LIB
          std::string encoded_string = m_codecdcll.encodeDCCL(msg);
          ////////////////////////////////////////////////////////////// DCCL LIB

          std::cout << "Sent via Acoustic"<< std::endl;
          sendTransmissionRequestViaAcoustic("", encoded_string);

        }
      }

      
      // If DCCL active: Encode the Msg with DCCL lib and dispatch an Acoustic resquest transmission to send it over acoustic
      void
      consume(const IMC::EstimatedState* msg)
      {
       if(m_args.trigger_dccl){

          if (m_filter.filter(msg))
            return;
          

            inf("ESTIMATEDSTATE To be ENCODED");
            
            std::cout<< "lat: " << msg->lat<< std::endl; 
            std::cout<< "lon: " << msg->lon<< std::endl; 
            std::cout<< "height: " << msg->height<< std::endl; 

            std::cout<< "x: " << msg->x<< std::endl; 
            std::cout<< "y: " << msg->y<< std::endl; 
            std::cout<< "z: " << msg->z<< std::endl; 

            std::cout<< "phi: " << msg->phi<< std::endl; 
            std::cout<< "theta: " << msg->theta<< std::endl; 
            std::cout<< "psi: " << msg->psi<< std::endl; 

            std::cout<< "u: " << msg->u<< std::endl; 
            std::cout<< "v: " << msg->v<< std::endl; 
            std::cout<< "w: " << msg->w<< std::endl; 

            std::cout<< "vx: " << msg->vx<< std::endl; 
            std::cout<< "vy: " << msg->vy<< std::endl; 
            std::cout<< "vz: " << msg->vz<< std::endl; 

            std::cout<< "p: " << msg->p<< std::endl; 
            std::cout<< "q: " << msg->q<< std::endl; 
            std::cout<< "r: " << msg->r<< std::endl; 

            std::cout<< "depth: " << msg->depth<< std::endl; 
            std::cout<< "alt: " << msg->alt<< std::endl; 
          ////////////////////////////////////////////////////////////// DCCL LIB
          std::string encoded_string = m_codecdcll.encodeDCCL(msg);
          ////////////////////////////////////////////////////////////// DCCL LIB

          std::cout << "Sent via Acoustic"<< std::endl;
          sendTransmissionRequestViaAcoustic("", encoded_string);
          
      }
    }
        

     //!Decode the Msg with DCCL lib 
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

          ////////////////////////////////////////////////////////////// DCCL LIB
          auto decode_msg = m_codecdcll.decodeDCCL(msgNoHex);
          ////////////////////////////////////////////////////////////// DCCL LIB
          //in here > dispatch the msg on the right topic
          
          //Just for debug 
          if (auto planSpec = dynamic_cast<DUNE::IMC::PlanSpecification*>(decode_msg))
          {
              inf("PLANSPECIFICAITION decoded");
              IMC::PlanControl load_plan_dccl;
              load_plan_dccl.type = IMC::PlanControl::PC_REQUEST;
              load_plan_dccl.op = IMC::PlanControl::PC_LOAD;


              load_plan_dccl.plan_id = planSpec->plan_id;
              load_plan_dccl.arg.set(planSpec);
              load_plan_dccl.request_id = 0;
              load_plan_dccl.flags = 0;
              dispatch(load_plan_dccl);

              //dispatch PlanSpecification 
              dispatch(planSpec);
          }
          else if (auto estState = dynamic_cast<DUNE::IMC::EstimatedState*>(decode_msg))
          {
              inf("ESTIMATEDSTATE decoded");
              
              std::cout<< "lat: " << estState->lat<< std::endl; 
              std::cout<< "lon: " << estState->lon<< std::endl; 
              std::cout<< "height: " << estState->height<< std::endl; 

              std::cout<< "x: " << estState->x<< std::endl; 
              std::cout<< "y: " << estState->y<< std::endl; 
              std::cout<< "z: " << estState->z<< std::endl; 

              std::cout<< "phi: " << estState->phi<< std::endl; 
              std::cout<< "theta: " << estState->theta<< std::endl; 
              std::cout<< "psi: " << estState->psi<< std::endl; 

              std::cout<< "u: " << estState->u<< std::endl; 
              std::cout<< "v: " << estState->v<< std::endl; 
              std::cout<< "w: " << estState->w<< std::endl; 

              std::cout<< "vx: " << estState->vx<< std::endl; 
              std::cout<< "vy: " << estState->vy<< std::endl; 
              std::cout<< "vz: " << estState->vz<< std::endl; 

              std::cout<< "p: " << estState->p<< std::endl; 
              std::cout<< "q: " << estState->q<< std::endl; 
              std::cout<< "r: " << estState->r<< std::endl; 

              std::cout<< "depth: " << estState->depth<< std::endl; 
              std::cout<< "alt: " << estState->alt<< std::endl; 

          }
          else
          {
              std::cout << "UNKOWN MSG decoded\n";
          }     


       }
      
      }



      //! Create and send transmission request msg (broadcast, acoustic, raw)
      void
      sendTransmissionRequestViaAcoustic(const std::string& sys, std::string& encoded_msg){

        IMC::TransmissionRequest msg;
        msg.setDestination(getSystemId());
        msg.destination     = "broadcast";
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