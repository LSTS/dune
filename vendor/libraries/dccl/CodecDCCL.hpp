#ifndef SRC_TRANSPORTS_DCCL_CODECDCCL_HPP_
#define SRC_TRANSPORTS_DCCL_CODECDCCL_HPP_


#include <string>
#include <stdexcept>
#include <DUNE/DUNE.hpp>

#ifdef DUNE_USING_DCCL
#include "dccl.h"
#include "EnumCodec.hpp"
#include "MsgOnlyProtoCodec.hpp"
#include "MsgCodec.hpp"
#endif



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

        bool
        isAvailable()
        {
#ifdef DUNE_USING_DCCL
            return true;
#else
            return false;
#endif
        }

        DUNE::IMC::Message* 
        decodeDCCL(std::string& encoded_string)
        {
#ifdef DUNE_USING_DCCL
            return dispatchDecode(encoded_string);
#else
            (void)encoded_string;
            return nullptr;
#endif
        }

        std::string 
        encodeDCCL(const DUNE::IMC::Message* imc_msg)
        {
#ifdef DUNE_USING_DCCL
            return dispatchEncode(imc_msg); 
#else
            (void)imc_msg;
            return std::string();
#endif
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
            VERTICAL_PROFILE = 111,
            VOLTAGE = 251, 
            FUEL_LEVEL = 279, 
            CURRENT = 252,
            WIND_SPEED = 271,
            ENTITY_PARAMETERS = 802,
            ENTITY_LIST = 5,
        };

#ifdef DUNE_USING_DCCL
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
                case VERTICAL_PROFILE:
                case VOLTAGE:
                case FUEL_LEVEL:
                case CURRENT:
                case WIND_SPEED:
                case ENTITY_PARAMETERS:
                case ENTITY_LIST:
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

                case VERTICAL_PROFILE:
                {
                    m_codec.load<IMC_DCCL::VerticalProfile>();
                    IMC_DCCL::VerticalProfile src_dccl;
                    m_codec.decode(encoded_string, &src_dccl);
                    DUNE::IMC::VerticalProfile* dst_imc = new DUNE::IMC::VerticalProfile();
                    decodeVerticalProfile(src_dccl, *dst_imc);
                    return dst_imc;
                }

                case VOLTAGE:
                {
                    m_codec.load<IMC_DCCL::Voltage>();
                    IMC_DCCL::Voltage src_dccl;
                    m_codec.decode(encoded_string, &src_dccl);
                    DUNE::IMC::Voltage* dst_imc = new DUNE::IMC::Voltage();
                    decodeVoltage(src_dccl, *dst_imc);
                    return dst_imc;
                }

                case FUEL_LEVEL:
                {
                    m_codec.load<IMC_DCCL::FuelLevel>();
                    IMC_DCCL::FuelLevel src_dccl;
                    m_codec.decode(encoded_string, &src_dccl);
                    DUNE::IMC::FuelLevel* dst_imc = new DUNE::IMC::FuelLevel();
                    decodeFuelLevel(src_dccl, *dst_imc);
                    return dst_imc;
                }

                case CURRENT:
                {
                    m_codec.load<IMC_DCCL::Current>();
                    IMC_DCCL::Current src_dccl;
                    m_codec.decode(encoded_string, &src_dccl);
                    DUNE::IMC::Current* dst_imc = new DUNE::IMC::Current();
                    decodeCurrent(src_dccl, *dst_imc);
                    return dst_imc;
                }

                case WIND_SPEED:
                {
                    m_codec.load<IMC_DCCL::WindSpeed>();
                    IMC_DCCL::WindSpeed src_dccl;
                    m_codec.decode(encoded_string, &src_dccl);
                    DUNE::IMC::WindSpeed* dst_imc = new DUNE::IMC::WindSpeed();
                    decodeWindSpeed(src_dccl, *dst_imc);
                    return dst_imc;
                }

                case ENTITY_PARAMETERS:
                {
                    m_codec.load<IMC_DCCL::EntityParameters>();
                    IMC_DCCL::EntityParameters src_dccl;
                    m_codec.decode(encoded_string, &src_dccl);
                    DUNE::IMC::EntityParameters* dst_imc = new DUNE::IMC::EntityParameters();
                    decodeEntityParameters(src_dccl, *dst_imc);
                    return dst_imc;
                }
        
                case ENTITY_LIST:
                {
                    m_codec.load<IMC_DCCL::EntityList>();
                    IMC_DCCL::EntityList src_dccl;
                    m_codec.decode(encoded_string, &src_dccl);
                    DUNE::IMC::EntityList* dst_imc = new DUNE::IMC::EntityList();
                    decodeEntityList(src_dccl, *dst_imc);
                    return dst_imc;
                }

                default:
                    throw std::runtime_error("DCCL:CodecDCCL: Decoding not available for this Msg"); //nullptr check
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

                case VERTICAL_PROFILE:
                {
                    const DUNE::IMC::VerticalProfile* src_imc = dynamic_cast<const DUNE::IMC::VerticalProfile*>(imc_msg);

                    m_codec.load<IMC_DCCL::VerticalProfile>();
                    IMC_DCCL::VerticalProfile dst_dccl;
                    encodeVerticalProfile(*src_imc, dst_dccl);

                    std::string encoded_bytes;
                    m_codec.encode(&encoded_bytes, dst_dccl);
                    
                    return encoded_bytes;
                }

                case VOLTAGE:
                {
                    const DUNE::IMC::Voltage* src_imc = dynamic_cast<const DUNE::IMC::Voltage*>(imc_msg);

                    m_codec.load<IMC_DCCL::Voltage>();
                    IMC_DCCL::Voltage dst_dccl;
                    encodeVoltage(*src_imc, dst_dccl);

                    std::string encoded_bytes;
                    m_codec.encode(&encoded_bytes, dst_dccl);
                    
                    return encoded_bytes;
                }

                case FUEL_LEVEL:
                {
                    const DUNE::IMC::FuelLevel* src_imc = dynamic_cast<const DUNE::IMC::FuelLevel*>(imc_msg);

                    m_codec.load<IMC_DCCL::FuelLevel>();
                    IMC_DCCL::FuelLevel dst_dccl;
                    encodeFuelLevel(*src_imc, dst_dccl);

                    std::string encoded_bytes;
                    m_codec.encode(&encoded_bytes, dst_dccl);
                    
                    return encoded_bytes;
                }

                case CURRENT:
                {
                    const DUNE::IMC::Current* src_imc = dynamic_cast<const DUNE::IMC::Current*>(imc_msg);

                    m_codec.load<IMC_DCCL::Current>();
                    IMC_DCCL::Current dst_dccl;
                    encodeCurrent(*src_imc, dst_dccl);

                    std::string encoded_bytes;
                    m_codec.encode(&encoded_bytes, dst_dccl);
                    
                    return encoded_bytes;
                }

                case WIND_SPEED:
                {
                    const DUNE::IMC::WindSpeed* src_imc = dynamic_cast<const DUNE::IMC::WindSpeed*>(imc_msg);

                    m_codec.load<IMC_DCCL::WindSpeed>();
                    IMC_DCCL::WindSpeed dst_dccl;
                    encodeWindSpeed(*src_imc, dst_dccl);

                    std::string encoded_bytes;
                    m_codec.encode(&encoded_bytes, dst_dccl);
                    
                    return encoded_bytes;
                }

                case ENTITY_PARAMETERS:
                {
                    const DUNE::IMC::EntityParameters* src_imc = dynamic_cast<const DUNE::IMC::EntityParameters*>(imc_msg);

                    m_codec.load<IMC_DCCL::EntityParameters>();
                    IMC_DCCL::EntityParameters dst_dccl;
                    encodeEntityParameters(*src_imc, dst_dccl);

                    std::string encoded_bytes;
                    m_codec.encode(&encoded_bytes, dst_dccl);
                    
                    return encoded_bytes;
                }

                case ENTITY_LIST:
                {
                    const DUNE::IMC::EntityList* src_imc = dynamic_cast<const DUNE::IMC::EntityList*>(imc_msg);

                    m_codec.load<IMC_DCCL::EntityList>();
                    IMC_DCCL::EntityList dst_dccl;
                    encodeEntityList(*src_imc, dst_dccl);

                    std::string encoded_bytes;
                    m_codec.encode(&encoded_bytes, dst_dccl);
                    
                    return encoded_bytes;
                }

                default:
                    throw std::runtime_error("DCCL:CodecDCCL: Encoding not available for this Msg");
            }
        }
#endif
    };
}
  



#endif /* SRC_TRANSPORTS_DCCL_CODECDCCL_HPP_ */