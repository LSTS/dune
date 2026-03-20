#ifndef SRC_TRANSPORTS_DCCL_CODECDCCL_HPP_
#define SRC_TRANSPORTS_DCCL_CODECDCCL_HPP_


#include <string>
#include <stdexcept>
#include <DUNE/DUNE.hpp>

#include "dccl.h"
#include "EnumCodec.hpp"
#include "MsgOnlyProtoCodec.hpp"
#include "MsgCodec.hpp"



//! This Class menages the DCCL encoding and decoding of corresponding IMC messages 

namespace IMCDCCL
{

    class CodecDCCL
    {
        public:
            CodecDCCL()
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

        enum  MsgID {
            PLAN_SPECIFICATION = 551,
            ESTIMATED_STATE    = 350,
            PLAN_DB = 556,
            PLAN_CONTROL = 559, 
            SET_ENTITY_PARAMETERS = 804,
            VEHICLE_STATE = 500,
            ENTITY_STATE = 1,
            PLAN_CONTROL_STATE = 560,
        };

        private: 

        dccl::Codec m_codec;

        MsgID
        getMsgID(std::string& encoded_string)
        {
            int id = m_codec.id(encoded_string);

            switch(id){
                case PLAN_SPECIFICATION: 
                case PLAN_DB: 
                case ESTIMATED_STATE:
                case PLAN_CONTROL:
                case SET_ENTITY_PARAMETERS:
                case VEHICLE_STATE:
                case ENTITY_STATE:
                case PLAN_CONTROL_STATE:
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
                    m_codec.load<IMC_DCCL::PlanSpecification>();
                    IMC_DCCL::PlanSpecification src_dccl;
                    m_codec.decode(encoded_string, &src_dccl);
                    DUNE::IMC::PlanSpecification* dst_imc = new DUNE::IMC::PlanSpecification();
                    decodePlanSpecification(src_dccl, *dst_imc);
                    return dst_imc;

                }

                case ESTIMATED_STATE:
                {
                    m_codec.load<IMC_DCCL::EstimatedState>();
                    IMC_DCCL::EstimatedState src_dccl;
                    m_codec.decode(encoded_string, &src_dccl);
                    DUNE::IMC::EstimatedState* dst_imc = new DUNE::IMC::EstimatedState();
                    decodeEstimatedState(src_dccl, *dst_imc);
                    return dst_imc;
                }

                case PLAN_DB:
                {
                    m_codec.load<IMC_DCCL::PlanDB>();
                    IMC_DCCL::PlanDB src_dccl;
                    m_codec.decode(encoded_string, &src_dccl);
                    DUNE::IMC::PlanDB* dst_imc = new DUNE::IMC::PlanDB();
                    decodePlanDB(src_dccl, *dst_imc);
                    return dst_imc;
                }

                case PLAN_CONTROL:
                {
                    m_codec.load<IMC_DCCL::PlanControl>();
                    IMC_DCCL::PlanControl src_dccl;
                    m_codec.decode(encoded_string, &src_dccl);
                    DUNE::IMC::PlanControl* dst_imc = new DUNE::IMC::PlanControl();
                    decodePlanControl(src_dccl, *dst_imc);
                    return dst_imc;
                }

                case SET_ENTITY_PARAMETERS:
                {
                    m_codec.load<IMC_DCCL::SetEntityParameters>();
                    IMC_DCCL::SetEntityParameters src_dccl;
                    m_codec.decode(encoded_string, &src_dccl);
                    DUNE::IMC::SetEntityParameters* dst_imc = new DUNE::IMC::SetEntityParameters();
                    decodeSetEntityParameters(src_dccl, *dst_imc);
                    return dst_imc;
                }

                case VEHICLE_STATE:
                {
                    m_codec.load<IMC_DCCL::VehicleState>();
                    IMC_DCCL::VehicleState src_dccl;
                    m_codec.decode(encoded_string, &src_dccl);
                    DUNE::IMC::VehicleState* dst_imc = new DUNE::IMC::VehicleState();
                    decodeVehicleState(src_dccl, *dst_imc);
                    return dst_imc;
                }

                case ENTITY_STATE:
                {
                    m_codec.load<IMC_DCCL::EntityState>();
                    IMC_DCCL::EntityState src_dccl;
                    m_codec.decode(encoded_string, &src_dccl);
                    DUNE::IMC::EntityState* dst_imc = new DUNE::IMC::EntityState();
                    decodeEntityState(src_dccl, *dst_imc);
                    return dst_imc;
                }

                case PLAN_CONTROL_STATE:
                {
                    m_codec.load<IMC_DCCL::PlanControlState>();
                    IMC_DCCL::PlanControlState src_dccl;
                    m_codec.decode(encoded_string, &src_dccl);
                    DUNE::IMC::PlanControlState* dst_imc = new DUNE::IMC::PlanControlState();
                    decodePlanControlState(src_dccl, *dst_imc);
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
                    const DUNE::IMC::PlanDB* src_imc = dynamic_cast<const DUNE::IMC::PlanDB*>(imc_msg);

                    m_codec.load<IMC_DCCL::PlanDB>();
                    IMC_DCCL::PlanDB dst_dccl;
                    encodePlanDB(*src_imc, dst_dccl);

                    std::string encoded_bytes;
                    m_codec.encode(&encoded_bytes, dst_dccl);
                    
                    return encoded_bytes;
                }

                case PLAN_CONTROL:
                {
                    const DUNE::IMC::PlanControl* src_imc = dynamic_cast<const DUNE::IMC::PlanControl*>(imc_msg);

                    m_codec.load<IMC_DCCL::PlanControl>();
                    IMC_DCCL::PlanControl dst_dccl;
                    encodePlanControl(*src_imc, dst_dccl);

                    std::string encoded_bytes;
                    m_codec.encode(&encoded_bytes, dst_dccl);
                    
                    return encoded_bytes;
                }

                case SET_ENTITY_PARAMETERS:
                {
                    const DUNE::IMC::SetEntityParameters* src_imc = dynamic_cast<const DUNE::IMC::SetEntityParameters*>(imc_msg);

                    m_codec.load<IMC_DCCL::SetEntityParameters>();
                    IMC_DCCL::SetEntityParameters dst_dccl;
                    encodeSetEntityParameters(*src_imc, dst_dccl);

                    std::string encoded_bytes;
                    m_codec.encode(&encoded_bytes, dst_dccl);
                    
                    return encoded_bytes;
                }

                case VEHICLE_STATE:
                {
                    const DUNE::IMC::VehicleState* src_imc = dynamic_cast<const DUNE::IMC::VehicleState*>(imc_msg);

                    m_codec.load<IMC_DCCL::VehicleState>();
                    IMC_DCCL::VehicleState dst_dccl;
                    encodeVehicleState(*src_imc, dst_dccl);

                    std::string encoded_bytes;
                    m_codec.encode(&encoded_bytes, dst_dccl);
                    
                    return encoded_bytes;
                }

                case ENTITY_STATE:
                {
                    const DUNE::IMC::EntityState* src_imc = dynamic_cast<const DUNE::IMC::EntityState*>(imc_msg);

                    m_codec.load<IMC_DCCL::EntityState>();
                    IMC_DCCL::EntityState dst_dccl;
                    encodeEntityState(*src_imc, dst_dccl);

                    std::string encoded_bytes;
                    m_codec.encode(&encoded_bytes, dst_dccl);
                    
                    return encoded_bytes;
                }

                case PLAN_CONTROL_STATE:
                {
                    const DUNE::IMC::PlanControlState* src_imc = dynamic_cast<const DUNE::IMC::PlanControlState*>(imc_msg);

                    m_codec.load<IMC_DCCL::PlanControlState>();
                    IMC_DCCL::PlanControlState dst_dccl;
                    encodePlanControlState(*src_imc, dst_dccl);

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
  



#endif /* SRC_TRANSPORTS_DCCL_CODECDCCL_HPP_ */