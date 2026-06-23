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
        CodecDCCL(DUNE::Tasks::Task* task = nullptr)
          : m_task(task)
        {
            #ifdef DUNE_USING_DCCL
                m_codec.load<IMC_DCCL::ProtoMessage>();
            #endif
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

        std::unique_ptr<DUNE::IMC::Message> 
        decodeDCCL(std::string& encoded_string)
        {
#ifdef DUNE_USING_DCCL
            try{
                return decodeProtoMessage(encoded_string);
            }
            catch(std::runtime_error& e){
                m_task->trace("Unable to decode message with DCCL: %s", e.what());
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
                m_task->trace("Unable to encode message with DCCL: %s", e.what());
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



        private:

        DUNE::Tasks::Task* m_task;

#ifdef DUNE_USING_DCCL
        dccl::Codec m_codec;

        std::unique_ptr<DUNE::IMC::Message>
        decodeProtoMessage(const std::string& encoded_string)
        {   
            IMC_DCCL::ProtoMessage src_dccl;
            
            m_codec.decode(encoded_string, &src_dccl);

            //Payload
            auto imc_msg = decodePayload(src_dccl.msg_payload());

            //Header
            decodeHeader(src_dccl.msg_header(), *imc_msg);

            m_task->trace("DCCL message successfully decoded as type %s", imc_msg->getName());
            return imc_msg;
        }


        std::string
        encodeProtoMessage(const DUNE::IMC::Message* imc_msg){
            
            IMC_DCCL::ProtoMessage dst_dccl;
            
            //Header
            encodeHeader(*imc_msg, *dst_dccl.mutable_msg_header());

            //Payload
            encodePayload(*imc_msg, *dst_dccl.mutable_msg_payload());    

            //validate Msg range 
            validateProtoMessageRange(dst_dccl);

            //Encode
            std::string encoded_bytes;
            m_codec.encode(&encoded_bytes, dst_dccl); 

            m_task->trace("DCCL message successfully encoded as type %s", imc_msg->getName());
            return encoded_bytes;                              
        }


        void validateProtoMessageRange(
            const google::protobuf::Message& msg)
        {
            const auto* desc = msg.GetDescriptor();
            const auto* refl = msg.GetReflection();

            for(int i = 0; i < desc->field_count(); ++i)
            {
                const auto* field = desc->field(i);

                //No field
                if(field->is_optional() && !refl->HasField(msg, field)) continue;

                //Nested msg
                if(field->cpp_type() == google::protobuf::FieldDescriptor::CPPTYPE_MESSAGE)
                {
                    if(field->is_repeated())
                    {
                        int n = refl->FieldSize(msg, field);

                        for(int j=0; j<n; ++j)
                        {
                            validateProtoMessageRange(refl->GetRepeatedMessage(msg, field, j));
                        }
                    }
                    else
                    {
                        validateProtoMessageRange(refl->GetMessage(msg, field));
                    }

                    continue;
                }

                if(!field->options().HasExtension(dccl::field))
                    continue;

                const auto& opts = field->options().GetExtension(dccl::field);

                double min = opts.min();
                double max = opts.max();
                int max_length = opts.max_length();
                double value = 0.0;
                double length = 0.0;
                
                switch(field->cpp_type())
                {
                    case google::protobuf::FieldDescriptor::CPPTYPE_INT32:
                        value = refl->GetInt32(msg, field);
                        break;

                    case google::protobuf::FieldDescriptor::CPPTYPE_INT64:
                        value = refl->GetInt64(msg, field);
                        break;

                    case google::protobuf::FieldDescriptor::CPPTYPE_UINT32:
                        value = refl->GetUInt32(msg, field);
                        break;

                    case google::protobuf::FieldDescriptor::CPPTYPE_UINT64:
                        value = refl->GetUInt64(msg, field);
                        break;

                    case google::protobuf::FieldDescriptor::CPPTYPE_FLOAT:
                        value = refl->GetFloat(msg, field);
                        break;

                    case google::protobuf::FieldDescriptor::CPPTYPE_DOUBLE:
                        value = refl->GetDouble(msg, field);
                        break;

                    case google::protobuf::FieldDescriptor::CPPTYPE_STRING:
                    {
                        const std::string& str = refl->GetString(msg, field);
                        length = static_cast<double>(str.size());
                        //String check
                        if(length > max_length)
                        {
                            throw std::runtime_error(desc->name() + "." + field->name() + " = " + std::to_string(length) + " outside DCCL range [" + std::to_string(max_length) + "]");
                        }
                        continue;
                    }

                    default:
                        continue;
                }

                //Numeric check
                if(value < min || value > max)  
                {
                    throw std::runtime_error(desc->name() + "." + field->name() + " = " + std::to_string(value) + " outside DCCL range [" + std::to_string(min) + "," + std::to_string(max) + "]");
                }
            }
        }
#endif
    };
}
  



#endif /* SRC_TRANSPORTS_DCCL_CODECDCCL_HPP_ */