//***************************************************************************
///***************************************************************************
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
#include <dccl/CodecDCCL.hpp>

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
      IMCDCCL::CodecDCCL m_codecdccl; //DCCL LIB
     
      //! Message Filter
      MessageFilter m_filter;

      //! Constructor.
      //! @param[in] name task name.
      //! @param[in] ctx context.
      Task(const std::string& name, Tasks::Context& ctx):
        DUNE::Tasks::Task(name, ctx),
        m_reqid(0),
        m_codecdccl(this) //DCCL LIB
      {
        param("DCCL Encoding", m_args.trigger_dccl)
        .defaultValue("false")
        .description("Enable encoding and decoding of Plan Specification message with dccl");

        param("Rate Limiters", m_args.rate_lims)
        .description("List of <Message>:<Frequency>");

        param("Filtered Entities", m_args.entities_flt)
        .description("List of <Message>:<Entity>+<Entity> that define the source entities allowed to pass message of a specific message type.");

        
        bind<IMC::UamRxFrame>(this);

        bind<IMC::PlanSpecification>(this);
        //bind<IMC::VerticalProfile>(this);
        //bind<IMC::Current>(this);
        //bind<IMC::FuelLevel>(this);
        //bind<IMC::Voltage>(this);
        //bind<IMC::WindSpeed>(this);
        //bind<IMC::EntityParameters>(this);
        //bind<IMC::EntityList>(this);
        //bind<IMC::PlanControlState>(this);
        //bind<IMC::PlanControl>(this);
        //bind<IMC::SetEntityParameters>(this);
        //bind<IMC::VehicleState>(this);
        //bind<IMC::EntityState>(this);
        //bind<IMC::PlanDB>(this);
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

          msg->toJSON(std::cout);

          
          war("[ENCODING] PlanSpecification with size %u received.", msg->getPayloadSerializationSize());

          ////////////////////////////////////////////////////////////// DCCL LIB
          std::string encoded_string = m_codecdccl.encodeDCCL(msg);
          ////////////////////////////////////////////////////////////// DCCL LIB

          if (!encoded_string.empty()) {
            war("[ENCODING] Compressed with size %zu", encoded_string.size());
            std::cout << "Transmission request via Acoustic"<< std::endl;
            sendTransmissionRequestViaAcoustic("", encoded_string);
          }

        }
      }

      void
      consume(const IMC::PlanDB* msg)
      {
        

        if(m_args.trigger_dccl){

          if (m_filter.filter(msg))
            return;
          
          msg->toJSON(std::cout);

          war("[ENCODING] PlanDB with size %u received.", msg->getPayloadSerializationSize());
          ////////////////////////////////////////////////////////////// DCCL LIB
          std::string encoded_string = m_codecdccl.encodeDCCL(msg);
          ////////////////////////////////////////////////////////////// DCCL LIB

          if (!encoded_string.empty()) {
            war("[ENCODING] Compressed with size %zu .", encoded_string.size());
            std::cout << "Transmission request via Acoustic"<< std::endl;
            sendTransmissionRequestViaAcoustic("", encoded_string);
          }

        }
      }

      void
      consume(const IMC::PlanControlState* msg)
      {
        

        if(m_args.trigger_dccl){

          if (m_filter.filter(msg))
            return;
          
          msg->toJSON(std::cout);

          war("[ENCODING] PlanControlState with size %u received.", msg->getPayloadSerializationSize());
          ////////////////////////////////////////////////////////////// DCCL LIB
          std::string encoded_string = m_codecdccl.encodeDCCL(msg);
          ////////////////////////////////////////////////////////////// DCCL LIB

          if (!encoded_string.empty()) {
            war("[ENCODING] Compressed with size %zu .", encoded_string.size());
            std::cout << "Transmission request via Acoustic"<< std::endl;
            sendTransmissionRequestViaAcoustic("", encoded_string);
          }

        }
      }
      
      void
      consume(const IMC::EstimatedState* msg)
      {
       if(m_args.trigger_dccl){

          if (m_filter.filter(msg))
            return;
            
          msg->toJSON(std::cout);

          war("[ENCODING] EstimatedState with size %u received.", msg->getPayloadSerializationSize());
          ////////////////////////////////////////////////////////////// DCCL LIB
          std::string encoded_string = m_codecdccl.encodeDCCL(msg);
          ////////////////////////////////////////////////////////////// DCCL LIB

          if (!encoded_string.empty()) {
            war("[ENCODING] Compressed with size %zu .", encoded_string.size());
            std::cout << "Transmission request via Acoustic"<< std::endl;
            sendTransmissionRequestViaAcoustic("", encoded_string);
          }
          
      }
    }

      void
      consume(const IMC::VehicleState* msg)
      {
       if(m_args.trigger_dccl){

          if (m_filter.filter(msg))
            return;
          
          msg->toJSON(std::cout);
          war("[ENCODING] VehicleState with size %u received.", msg->getPayloadSerializationSize());  
          ////////////////////////////////////////////////////////////// DCCL LIB
          std::string encoded_string = m_codecdccl.encodeDCCL(msg);
          ////////////////////////////////////////////////////////////// DCCL LIB

          if (!encoded_string.empty()) {
            war("[ENCODING] Compressed with size %zu .", encoded_string.size());
            std::cout << "Transmission request via Acoustic"<< std::endl;
            sendTransmissionRequestViaAcoustic("", encoded_string);
          }
          
      }
    }

      void
      consume(const IMC::EntityState* msg)
      {
       if(m_args.trigger_dccl){

          if (m_filter.filter(msg))
            return;
          
          msg->toJSON(std::cout);
          war("[ENCODING] EntityState with size %u received.", msg->getPayloadSerializationSize());
          ////////////////////////////////////////////////////////////// DCCL LIB
          std::string encoded_string = m_codecdccl.encodeDCCL(msg);
          ////////////////////////////////////////////////////////////// DCCL LIB

          if (!encoded_string.empty()) {
            war("[ENCODING] Compressed with size %zu .", encoded_string.size());
            std::cout << "Transmission request via Acoustic"<< std::endl;
            sendTransmissionRequestViaAcoustic("", encoded_string);
          }
          
          
      }
    }

      void
      consume(const IMC::EntityList* msg)
      {
       if(m_args.trigger_dccl){

          if (m_filter.filter(msg))
            return;
          
          msg->toJSON(std::cout);
          
          war("[ENCODING] EntityList with size %u received.", msg->getPayloadSerializationSize());
          ////////////////////////////////////////////////////////////// DCCL LIB
          std::string encoded_string = m_codecdccl.encodeDCCL(msg);
          ////////////////////////////////////////////////////////////// DCCL LIB

          if (!encoded_string.empty()) {
            war("[ENCODING] Compressed with size %zu .", encoded_string.size());
            std::cout << "Transmission request via Acoustic"<< std::endl;
            sendTransmissionRequestViaAcoustic("", encoded_string);
          }
          
          
      }
    }

      void
      consume(const IMC::VerticalProfile* msg)
      {
       if(m_args.trigger_dccl){
          
          msg->toJSON(std::cout);
          
          war("[ENCODING] VerticalProfile with size %u received.", msg->getPayloadSerializationSize());
          ////////////////////////////////////////////////////////////// DCCL LIB
          std::string encoded_string = m_codecdccl.encodeDCCL(msg);
          ////////////////////////////////////////////////////////////// DCCL LIB

          if (!encoded_string.empty()) {
            war("[ENCODING] Compressed with size %zu .", encoded_string.size());
            std::cout << "Transmission request via Acoustic"<< std::endl;
            sendTransmissionRequestViaAcoustic("", encoded_string);
          } 
      }
    }

      void
      consume(const IMC::Current* msg)
      {
       if(m_args.trigger_dccl){
          
          msg->toJSON(std::cout);
          
          war("[ENCODING] Current with size %u received.", msg->getPayloadSerializationSize());
          ////////////////////////////////////////////////////////////// DCCL LIB
          std::string encoded_string = m_codecdccl.encodeDCCL(msg);
          ////////////////////////////////////////////////////////////// DCCL LIB

          if (!encoded_string.empty()) {
            war("[ENCODING] Compressed with size %zu .", encoded_string.size());
            std::cout << "Transmission request via Acoustic"<< std::endl;
            sendTransmissionRequestViaAcoustic("", encoded_string);
          }   
      }
    }

      void
      consume(const IMC::Voltage* msg)
      {
       if(m_args.trigger_dccl){
          
          msg->toJSON(std::cout);
          
          war("[ENCODING] Voltage with size %u received.", msg->getPayloadSerializationSize());
          ////////////////////////////////////////////////////////////// DCCL LIB
          std::string encoded_string = m_codecdccl.encodeDCCL(msg);
          ////////////////////////////////////////////////////////////// DCCL LIB

          if (!encoded_string.empty()) {
            war("[ENCODING] Compressed with size %zu .", encoded_string.size());
            std::cout << "Transmission request via Acoustic"<< std::endl;
            sendTransmissionRequestViaAcoustic("", encoded_string);
          } 
      }
    }

      void
      consume(const IMC::FuelLevel* msg)
      {
       if(m_args.trigger_dccl){
          
          msg->toJSON(std::cout);
          
          war("[ENCODING] FuelLevel with size %u received.", msg->getPayloadSerializationSize());
          ////////////////////////////////////////////////////////////// DCCL LIB
          std::string encoded_string = m_codecdccl.encodeDCCL(msg);
          ////////////////////////////////////////////////////////////// DCCL LIB

          if (!encoded_string.empty()) {
            war("[ENCODING] Compressed with size %zu .", encoded_string.size());
            std::cout << "Transmission request via Acoustic"<< std::endl;
            sendTransmissionRequestViaAcoustic("", encoded_string);
          }   
      }
    }

      void
      consume(const IMC::WindSpeed* msg)
      {
       if(m_args.trigger_dccl){
          
          msg->toJSON(std::cout);
          
          war("[ENCODING] WindSpeed with size %u received.", msg->getPayloadSerializationSize());
          ////////////////////////////////////////////////////////////// DCCL LIB
          std::string encoded_string = m_codecdccl.encodeDCCL(msg);
          ////////////////////////////////////////////////////////////// DCCL LIB

          if (!encoded_string.empty()) {
            war("[ENCODING] Compressed with size %zu .", encoded_string.size());
            std::cout << "Transmission request via Acoustic"<< std::endl;
            sendTransmissionRequestViaAcoustic("", encoded_string);
          } 
      }
    }

      void
      consume(const IMC::PlanControl* msg)
      {
       if(m_args.trigger_dccl){

          msg->toJSON(std::cout);

          war("[ENCODING] PlanControl with size %u received.", msg->getPayloadSerializationSize());

          ////////////////////////////////////////////////////////////// DCCL LIB
          std::string encoded_string = m_codecdccl.encodeDCCL(msg);
          ////////////////////////////////////////////////////////////// DCCL LIB

          if (!encoded_string.empty()) {
            war("[ENCODING] Compressed with size %zu .", encoded_string.size());
            std::cout << "Transmission request via Acoustic"<< std::endl;
            sendTransmissionRequestViaAcoustic("", encoded_string);
          }
          
      }
    }

      void
      consume(const IMC::SetEntityParameters* msg)
      {
       if(m_args.trigger_dccl){

          msg->toJSON(std::cout);
          war("[ENCODING] SetEntityParameters with size %u received.", msg->getPayloadSerializationSize());
          ////////////////////////////////////////////////////////////// DCCL LIB
          std::string encoded_string = m_codecdccl.encodeDCCL(msg);          
          ////////////////////////////////////////////////////////////// DCCL LIB

          if (!encoded_string.empty()) {
            war("[ENCODING] Compressed with size %zu .", encoded_string.size());
            std::cout << "Transmission request via Acoustic"<< std::endl;
            sendTransmissionRequestViaAcoustic("", encoded_string);
          }   
          
      }
    }
        

      void
      consume(const IMC::EntityParameters* msg)
      {
       if(m_args.trigger_dccl){

          msg->toJSON(std::cout);
          war("[ENCODING] EntityParameters with size %u received.", msg->getPayloadSerializationSize());
          ////////////////////////////////////////////////////////////// DCCL LIB
          std::string encoded_string = m_codecdccl.encodeDCCL(msg);          
          ////////////////////////////////////////////////////////////// DCCL LIB

          if (!encoded_string.empty()) {
            war("[ENCODING] Compressed with size %zu .", encoded_string.size());
            std::cout << "Transmission request via Acoustic"<< std::endl;
            sendTransmissionRequestViaAcoustic("", encoded_string);
          }
          
      }
    }

     //!Decode the Msg with DCCL lib 
     void
     consume(const IMC::UamRxFrame* msg)
     {
       //Check source
       if(!m_args.trigger_dccl){
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

              std::string encoded_bytes(msg->data.begin(), msg->data.end());
              war("[DECODING] Received dccl msg with size %zu ", encoded_bytes.size());
 
              ////////////////////////////////////////////////////////////// DCCL LIB
              auto decode_msg = m_codecdccl.decodeDCCL(encoded_bytes);
              ////////////////////////////////////////////////////////////// DCCL LIB

              if (decode_msg != nullptr) { 
                war("[DECODING] Original msg with size %u decompressed.", decode_msg->getPayloadSerializationSize());
                decode_msg->toJSON(std::cout); }

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
        
        msg.raw_data.assign(encoded_msg.begin(), encoded_msg.end());
        
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
