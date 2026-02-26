#ifndef SRC_TRANSPORTS_DCCL_CODECDCCL_HPP_
#define SRC_TRANSPORTS_DCCL_CODECDCCL_HPP_


#include <string>
#include <stdexcept>
#include <DUNE/DUNE.hpp>

#include "dccl.h"
#include "EnumCodec.hpp"
#include "NestedCodec.hpp"
#include "PrincipalCodec.hpp"



//! This Class menages the DCCL encoding and decoding of corresponding IMC messages 

namespace DUNE
{
  namespace Encoders
  {
    namespace DCCL
    {
      class CodecDCCL
      {
        public:
        explicit CodecDCCL(dccl::Codec& codec)
          : m_codec(codec)
        {
        }

        ~CodecDCCL() = default;

        DUNE::IMC::Message*
        decodeDCCL(std::string& encoded_string)
        {
          return dispatchDecode(encoded_string);
        }

        std::string
        encodeDCCL(const DUNE::IMC::Message* imc_msg)
        {
          return dispatchEncode(imc_msg);
        }

        //dccl::Codec dccl_codec;      //DCCL codec , TODO: automatically generate this from the .proto

        enum MsgID {
            PLAN_SPECIFICATION = 551,
            ESTIMATED_STATE    = 350,
            PLAN_DB = 556,
        };

        private: 

        dccl::Codec& m_codec;

        MsgID
        getMsgID(std::string& encoded_string)
        {
            int id = m_codec.id(encoded_string);
            switch(id){
                case PLAN_SPECIFICATION: 
                case ESTIMATED_STATE:
                    return static_cast<MsgID>(id);
                default:
                    throw std::invalid_argument("DCCL:CodecDCCL: MsgID Not Recognized");
            }
        }

        
        
        DUNE::IMC::Message*
        dispatchDecode(std::string& encoded_string){

            MsgID id = getMsgID(encoded_string);
            switch(id){
                case PLAN_SPECIFICATION:
                {
                    std::cout << "DispatchDecode - PlanSpecification";
                    m_codec.load<IMC_DCCL::PlanSpecification>();
                    IMC_DCCL::PlanSpecification src_dccl;
                    m_codec.decode(encoded_string, &src_dccl);
                    DUNE::IMC::PlanSpecification* dst_imc = new DUNE::IMC::PlanSpecification();
                    decodePlanSpecification(src_dccl, *dst_imc);
                    return dst_imc;

                }

                case ESTIMATED_STATE:
                {
                    std::cout << "DispatchDecode - EstimatedState";
                    m_codec.load<IMC_DCCL::EstimatedState>();
                    IMC_DCCL::EstimatedState src_dccl;
                    m_codec.decode(encoded_string, &src_dccl);
                    DUNE::IMC::EstimatedState* dst_imc = new DUNE::IMC::EstimatedState();
                    decodeEstimatedState(src_dccl, *dst_imc);
                    return dst_imc;
                }

                case PLAN_DB:
                {
                    std::cout << "DispatchDecode - PlanDB";
                    m_codec.load<IMC_DCCL::PlanDB>();
                    IMC_DCCL::PlanDB src_dccl;
                    m_codec.decode(encoded_string, &src_dccl);
                    DUNE::IMC::PlanDB* dst_imc = new DUNE::IMC::PlanDB();
                    decodePlanDB(src_dccl, *dst_imc);
                    return dst_imc;
                }

                default:
                    throw std::runtime_error("DCCL:CodecDCCL: Decoding not available for this Msg");
            }
        }


        std::string
        dispatchEncode(const DUNE::IMC::Message* imc_msg){

            MsgID id = static_cast<MsgID>(imc_msg->getId());
            switch(id){
                case PLAN_SPECIFICATION:
                {
                    std::string test = "DispatchEncode - PlanSpecification msg !!!!!";
                    std::cout << test<< std::endl;
                    const DUNE::IMC::PlanSpecification* src_imc = dynamic_cast<const DUNE::IMC::PlanSpecification*>(imc_msg);
                    m_codec.load<IMC_DCCL::PlanSpecification>();
                    IMC_DCCL::PlanSpecification dst_dccl;
                    encodePlanSpecification(*src_imc, dst_dccl);
                    std::string encoded_bytes;
                    m_codec.encode(&encoded_bytes, dst_dccl);

                    return encoded_bytes;
                }

                case ESTIMATED_STATE:
                {
                    std::string test = "DispatchEncode - Estimated state msg !!!!!";
                    std::cout << test<< std::endl;
                    const DUNE::IMC::EstimatedState* src_imc = dynamic_cast<const DUNE::IMC::EstimatedState*>(imc_msg);

                    m_codec.load<IMC_DCCL::EstimatedState>();
                    IMC_DCCL::EstimatedState dst_dccl;
                    encodeEstimatedState(*src_imc, dst_dccl);

                    std::string encoded_bytes;
                    m_codec.encode(&encoded_bytes, dst_dccl);
                    
                    return encoded_bytes;
                }

                case PLAN_DB:
                {
                    std::string test = "DispatchEncode - PlanDB state msg !!!!!";
                    std::cout << test<< std::endl;
                    const DUNE::IMC::PlanDB* src_imc = dynamic_cast<const DUNE::IMC::PlanDB*>(imc_msg);

                    m_codec.load<IMC_DCCL::PlanDB>();
                    IMC_DCCL::PlanDB dst_dccl;
                    encodePlanDB(*src_imc, dst_dccl);

                    std::string encoded_bytes;
                    m_codec.encode(&encoded_bytes, dst_dccl);
                    
                    return encoded_bytes;
                }

                default:
                    throw std::runtime_error("DCCL:CodecDCCL: Encoding not available for this Msg");
            }
        }
      };
    }
  }
}
  



#endif /* SRC_TRANSPORTS_DCCL_CODECDCCL_HPP_ */
