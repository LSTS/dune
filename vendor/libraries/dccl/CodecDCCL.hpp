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
            try{
                return decodeProtoMessage(encoded_string);
            }
            catch(std::runtime_error& e){
                return nullptr;
            }
            catch(...){
                return nullptr;
            }
            
#else
            (void)encoded_string;
            return nullptr;
#endif
        }

        std::string 
        encodeDCCL(const DUNE::IMC::Message* imc_msg)
        {
#ifdef DUNE_USING_DCCL
            try{
                return encodeProtoMessage(imc_msg); 
            }
            catch(std::runtime_error& e){
                return std::string();
            }
            catch(...){
                return std::string();
            }
            
#else
            (void)imc_msg;
            return std::string();
#endif
        }


#ifdef DUNE_USING_DCCL
        private:
        dccl::Codec m_codec;

        DUNE::IMC::Message*
        decodeProtoMessage(const std::string& encoded_string)
        {
            m_codec.load<IMC_DCCL::ProtoMessage>();
            IMC_DCCL::ProtoMessage src_dccl;
            m_codec.decode(encoded_string, &src_dccl);

            //Payload
            DUNE::IMC::Message* imc_msg = decodePayload(src_dccl.msg_payload());
            if (!imc_msg) return nullptr;

            //Header
            decodeHeader(src_dccl.msg_header(), *imc_msg);

            return imc_msg;
        }


        std::string
        encodeProtoMessage(const DUNE::IMC::Message* imc_msg){

            m_codec.load<IMC_DCCL::ProtoMessage>();
            IMC_DCCL::ProtoMessage dst_dccl;

            //Header
            IMC_DCCL::Header* header = new IMC_DCCL::Header();
            encodeHeader(*imc_msg, *header);
            dst_dccl.set_allocated_msg_header(header);

            //Payload
            IMC_DCCL::Payload* payload = new IMC_DCCL::Payload();
            encodePayload(*imc_msg, *payload);
            dst_dccl.set_allocated_msg_payload(payload);
            
            std::string encoded_bytes;
            m_codec.encode(&encoded_bytes, dst_dccl);

            return encoded_bytes;            
            
        }
#endif
    };
}
  



#endif /* SRC_TRANSPORTS_DCCL_CODECDCCL_HPP_ */