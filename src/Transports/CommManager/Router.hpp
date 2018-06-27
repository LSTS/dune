//***************************************************************************
// Copyright 2007-2016 Universidade do Porto - Faculdade de Engenharia      *
// Laboratório de Sistemas e Tecnologia Subaquática (LSTS)                  *
//***************************************************************************
// This file is part of DUNE: Unified Navigation Environment.               *
//                                                                          *
// Commercial Licence Usage                                                 *
// Licencees holding valid commercial DUNE licences may use this file in    *
// accordance with the commercial licence agreement provided with the       *
// Software or, alternatively, in accordance with the terms contained in a  *
// written agreement between you and Universidade do Porto. For licensing   *
// terms, conditions, and further information contact lsts@fe.up.pt.        *
//                                                                          *
// European Union Public Licence - EUPL v.1.1 Usage                         *
// Alternatively, this file may be used under the terms of the EUPL,        *
// Version 1.1 only (the "Licence"), appearing in the file LICENCE.md       *
// included in the packaging of this file. You may not use this work        *
// except in compliance with the Licence. Unless required by applicable     *
// law or agreed to in writing, software distributed under the Licence is   *
// distributed on an "AS IS" basis, WITHOUT WARRANTIES OR CONDITIONS OF     *
// ANY KIND, either express or implied. See the Licence for the specific    *
// language governing permissions and limitations at                        *
// http://ec.europa.eu/idabc/eupl.html.                                     *
//***************************************************************************
// Author: Pedro Seruca                                                    *
//***************************************************************************

#ifndef SRC_TRANSPORTS_COMMMANAGER_ROUTER_HPP_
#define SRC_TRANSPORTS_COMMMANAGER_ROUTER_HPP_

// ISO C++ 98 headers.
#include <string>

// DUNE headers.
#include <DUNE/DUNE.hpp>

namespace Transports
{
  namespace CommManager
  {

    using DUNE_NAMESPACES;

    struct TCPannounce{
      char address[50];
      double timestamp;
    };

    class Router
    {

    public:
      Router(Task* task){
        m_parent = task;
        m_medium = 4;
        m_rssi_msg = NULL;
        m_reqid = 0;
        c_wifi_timeout = 15;
      }

      void
      process(IMC::VehicleMedium* msg)
      {
        m_medium = msg->medium;
      }

      void
      process(IMC::RSSI* msg)
      {
        m_rssi_msg = msg;
      }

      void
      process(IMC::Announce* msg)
      {
        std::vector<std::string> list;
        String::split(msg->services, ";", list);

        char addr[50];
        char number[20];

        for(uint16_t i=0; i<list.size();i++){
          int result_tcp = std::sscanf(list[i].c_str(), "imc+tcp://%[^/]", addr);
          if(result_tcp == 1){
            TCPannounce ann;
            ann.timestamp = msg->getTimeStamp();
            strcpy(ann.address,addr);
            m_wifi_map[msg->sys_name]=ann;
          }
          int result_gsm = std::sscanf(list[i].c_str(), "imc+gsm://%[^/]", number);
          if(result_gsm == 1){
            m_gsm_map[msg->sys_name]=std::string(number);
          }

        }

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

      void
      answer(const IMC::AcousticOperation* req, int status, fp32_t range = 0.0)
      {
        IMC::AcousticOperation msg(*req);
        msg.op = status;
        msg.range = range;
        m_parent->dispatch(msg);

      }

      void
      answer(const IMC::TransmissionRequest* req, std::string info, int status, fp32_t range = 0.0)
      {
        IMC::TransmissionStatus msg;
        msg.info      = info;
        msg.req_id    = req->req_id;
        msg.status    = status;
        msg.range     = range;
        msg.setDestination(req->getSource());
        msg.setDestinationEntity(req->getSourceEntity());
        m_parent->dispatch(msg);

        m_parent->inf("Status of transmission message(%d) changed to: %s", req->req_id, info.c_str());
      }

      void
      clearTimeouts()
      {
        std::map<uint16_t, IMC::TransmissionRequest*>::iterator it;
        double time = Time::Clock::getSinceEpoch();
        it = m_transmission_requests.begin();

        while (it != m_transmission_requests.end())
        {
          if (it->second->deadline <= time)
          {
            answer(it->second, "Transmission timed out.", IMC::TransmissionStatus::TSTAT_TEMPORARY_FAILURE);
            Memory::clear(it->second);
            m_transmission_requests.erase(it++);
          }
          else
            ++it;
        }
      }

      void
      sendViaAcoustic(const IMC::TransmissionRequest* msg)
      {
        m_parent->inf("Request to send data over Acoustic to %s (%d)", msg->destination.c_str(), msg->req_id);

        AcousticRequest tx;

        tx.timeout = msg->deadline - Time::Clock::getSinceEpoch();
        if(tx.timeout < 0)
          tx.timeout = 0;

        if (msg->destination == "")
          tx.destination ="broadcast";
        else
          tx.destination  = msg->destination.c_str();

        //FIXME not sure
        tx.setDestination(msg->getDestination());

        tx.range=msg->range;

        switch(msg->data_mode){
          case IMC::TransmissionRequest::DMODE_INLINEMSG:
          {
            tx.type=IMC::AcousticRequest::TYPE_MSG;
            tx.msg.set(msg->msg_data.get()->clone());

            break;
          }

          case IMC::TransmissionRequest::DMODE_ABORT:
          {
            tx.type=IMC::AcousticRequest::TYPE_ABORT;

            break;
          }
          case IMC::TransmissionRequest::DMODE_RANGE:
          {
            tx.type=IMC::AcousticRequest::TYPE_RANGE;

            break;
          }
          case IMC::TransmissionRequest::DMODE_REVERSE_RANGE:
          {
            tx.type=IMC::AcousticRequest::TYPE_REVERSE_RANGE;

            break;
          }
          default:{
            answer(msg, "Communication mode not implemented for communication mean Acoustic", IMC::TransmissionStatus::TSTAT_PERMANENT_FAILURE);
            return;

            break;
          }
        }

        uint16_t newId = createInternalId();
        tx.req_id = newId;
        m_transmission_requests[newId] = msg->clone();
        m_parent->dispatch(tx);

      }

      void
      sendViaSatellite(const IMC::TransmissionRequest* msg)
      {
        m_parent->inf("Request to send data over satellite (%d)", msg->req_id);

        IridiumMsgTx tx;

        tx.destination = msg->destination;
        tx.ttl = msg->deadline - Time::Clock::getSinceEpoch();
        tx.setDestination(msg->getDestination());
        tx.setDestinationEntity(msg->getDestinationEntity());

        switch(msg->data_mode){
          case IMC::TransmissionRequest::DMODE_RAW:
          {
            tx.data.assign(msg->raw_data.begin(), msg->raw_data.end());

            break;
          }
          case IMC::TransmissionRequest::DMODE_INLINEMSG:
          {
            IMC::ImcIridiumMessage m;
            const IMC::Message * inlinemsg = msg->msg_data.get();
            m.destination = 0xFFFF;
            m.source = m_parent->getSystemId();
            m.msg = inlinemsg->clone();
            uint8_t buffer[65535];
            int len = m.serialize(buffer);
            tx.data.assign(buffer, buffer + len);
            Memory::clear(m.msg);

            break;
          }
          case IMC::TransmissionRequest::DMODE_TEXT:
          {
            IMC::IridiumCommand m;
            m.destination = 0xFFFF;
            m.source = m_parent->getSystemId();
            m.command = msg->txt_data;
            uint8_t buffer[65535];
            int len = m.serialize(buffer);
            tx.data.assign(buffer, buffer + len);

            break;
          }
          default:
            answer(msg, "Communication mode not implemented for communication mean Satellite", IMC::TransmissionStatus::TSTAT_PERMANENT_FAILURE);
            return;

            break;
        }

        uint16_t newId = createInternalId();
        tx.req_id = newId;
        m_transmission_requests[newId] = msg->clone();
        m_parent->dispatch(tx);
      }

      void
      sendViaAny(const IMC::TransmissionRequest* msg)
      {
        //restriction by medium
        if(m_medium == IMC::VehicleMedium::VM_UNDERWATER)
        {
          if(msg->data_mode != IMC::TransmissionRequest::DMODE_RAW
              && msg->data_mode != IMC::TransmissionRequest::DMODE_TEXT){
            sendViaAcoustic(msg);
            return;
          }
          else{
            answer(msg, "No communication mode available for this message type and medium", IMC::TransmissionStatus::TSTAT_TEMPORARY_FAILURE);
            return;
          }
        }
        //end

        //restriction by transmission mode
        switch(msg->data_mode){
          //unique for uan modems
          case IMC::TransmissionRequest::DMODE_ABORT:
          case IMC::TransmissionRequest::DMODE_RANGE:
          case IMC::TransmissionRequest::DMODE_REVERSE_RANGE:
            if(m_medium == IMC::VehicleMedium::VM_WATER){
              sendViaAcoustic(msg);
              return;
            }

            answer(msg, "No communication mode available for this message type", IMC::TransmissionStatus::TSTAT_TEMPORARY_FAILURE);
            return;

            break;

          //unique for satellite modem
          case IMC::TransmissionRequest::DMODE_RAW:
            sendViaSatellite(msg);
            return;

            break;

          //only for satellite modem or gsm
          case IMC::TransmissionRequest::DMODE_TEXT:
            if (visibleOverGSM(msg->destination))
            {
              sendViaGSM(msg);
              return;
            }

            sendViaSatellite(msg);
            return;

            break;

          case IMC::TransmissionRequest::DMODE_INLINEMSG:
            ///add rssi variables?
            if (visibleOverWifi(msg->destination))
            {
              sendViaWifi(msg);
              return;
            }
            if (visibleOverGSM(msg->destination))
            {
              sendViaGSM(msg);
              return;
            }

            sendViaSatellite(msg);
            return;

            break;

          default:break;
        }
        //end

        return;

      }

      void
      sendViaGSM(const IMC::TransmissionRequest* msg)
      {
        m_parent->inf("Request to send data over SMS to %s (%d)", msg->destination.c_str(), msg->req_id);

        SmsRequest sms;

        /*
        if (msg->destination == "broadcast" || msg->destination == "")
          m_parent->m_ctx.config.get(c_sms_section, c_sms_field, "", sms.destination);
        else*/
        if (msg->destination.empty())
        {
          answer(msg, "Destination of message can not be empty.",
                 IMC::TransmissionStatus::TSTAT_INPUT_FAILURE);
          return;
        }
        else
        {
          if(visibleOverGSM(msg->destination)){
            sms.destination = m_gsm_map[msg->destination];
          }else{
            sms.destination = msg->destination;
          }
        }

        sms.timeout = (sms.timeout < 0)? 0 : msg->deadline - Time::Clock::getSinceEpoch();

        switch(msg->data_mode){
          case IMC::TransmissionRequest::DMODE_TEXT:
          {
            if(msg->txt_data == "") {
              answer(msg, "GSM message cannot be empty", IMC::TransmissionStatus::TSTAT_INPUT_FAILURE);
              return;
            }
            sms.sms_text = msg->txt_data;

            break;
          }
          case IMC::TransmissionRequest::DMODE_INLINEMSG:
          {
            Utils::ByteBuffer bfr;
            IMC::Packet::serialize(msg->msg_data.get(), bfr);
            std::string encoded = Algorithms::Base64::encode(bfr.getBuffer(),bfr.getSize());
            sms.sms_text.assign(encoded);

            break;
          }
          default:
          {
            answer(msg, "Communication mode not implemented for communication mean GSM", IMC::TransmissionStatus::TSTAT_PERMANENT_FAILURE);
            return;

            break;
          }
        }

        if(sms.sms_text.length() > 160){ //160 characters -> 120 bytes for the inline message
          answer(msg, "Can only send 160 characters over SMS.",
                 IMC::TransmissionStatus::TSTAT_INPUT_FAILURE);
          return;
        }
        uint16_t newId = createInternalId();
        sms.req_id = newId;
        m_transmission_requests[newId] = msg->clone();
        m_parent->dispatch(sms);
      }

      void
      sendViaWifi(const IMC::TransmissionRequest* msg)
      {
        m_parent->inf("Request to send data over TCP to %s (%d)",
            msg->destination.c_str(), msg->req_id);

        TCPRequest send;

        if (msg->destination.empty())
        {
          answer(msg, "Destination of message can not be empty.",
                 IMC::TransmissionStatus::TSTAT_INPUT_FAILURE);
          return;
        }
        else
        {
          if(visibleOverWifi(msg->destination)){
            send.destination = std::string(m_wifi_map[msg->destination].address);
          }else{
            answer(msg,"Didn't find TCP server on destination host",IMC::TransmissionStatus::TSTAT_INPUT_FAILURE);
          }
        }

        send.timeout = (msg->deadline < 0)? 0 : msg->deadline ;

        switch(msg->data_mode){
          case IMC::TransmissionRequest::DMODE_INLINEMSG:
          {
            send.msg_data.set(msg->msg_data.get()->clone());
            break;
          }
          default:
          {
            answer(msg, "Communication mode not implemented for communication mean GSM", IMC::TransmissionStatus::TSTAT_PERMANENT_FAILURE);
            return;

            break;
          }
        }


        uint16_t newId = createInternalId();
        send.req_id = newId;
        m_transmission_requests[newId] = msg->clone();
        m_parent->dispatch(send);

      }

      bool
      visibleOverWifi(std::string system)
      {
        if(system.empty()) return false;

        std::map<std::string, TCPannounce>::iterator it;

        it = m_wifi_map.find(system);
        if(it == m_wifi_map.end()) return false;

        double curTime = Clock::getSinceEpoch();
        if( curTime - it->second.timestamp > c_wifi_timeout) return false;

        return true;

      }

      bool
      visibleOverGSM(std::string system)
      {
        if(system.empty()) return false;

        std::map<std::string, std::string>::iterator it;

        it = m_gsm_map.find(system);
        if(it == m_gsm_map.end()) return false;

        return true;
      }

      std::map<uint16_t, IMC::TransmissionRequest*>*
      GetList(){
        return &m_transmission_requests;
      }

      ~Router()
      {
      }
    private:
      Task* m_parent;
      uint8_t m_medium;
      IMC::RSSI* m_rssi_msg;
      uint16_t m_reqid;
      std::map<uint16_t, IMC::TransmissionRequest*> m_transmission_requests;
      std::map<std::string, TCPannounce> m_wifi_map;
      std::map<std::string, std::string> m_gsm_map;
      uint16_t c_wifi_timeout;

    };
  }
}

#endif /* SRC_TRANSPORTS_COMMMANAGER_ROUTER_HPP_ */
