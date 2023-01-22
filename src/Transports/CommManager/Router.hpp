//***************************************************************************
// Copyright 2007-2022 Universidade do Porto - Faculdade de Engenharia      *
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

    struct TCPAnnounce
    {
      char address[50];
      double timestamp;
    };

    class Router
    {

    public:
      Router(Task* task)
      {
        m_parent = task;
        m_medium = 4;
        m_gsm_entity_id = -1;
        m_iridium_entity_id = -1;
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
        m_rssi_msg_map[msg->getSourceEntity()] = msg->value;
      }

      void
      process(IMC::Announce* msg)
      {
        std::vector<std::string> list;
        String::split(msg->services, ";", list);

        char addr[50];
        char number[20];

        for (uint16_t i = 0; i < list.size(); i++)
        {
          int result_tcp = std::sscanf(list[i].c_str(), "imc+tcp://%[^/]", addr);
          if (result_tcp == 1)
          {
            TCPAnnounce ann;
            ann.timestamp = msg->getTimeStamp();
            strcpy(ann.address, addr);
            m_wifi_map[msg->sys_name] = ann;
          }
          int result_gsm = std::sscanf(list[i].c_str(), "imc+gsm://%[^/]",
                                       number);
          if (result_gsm == 1)
          {
            m_gsm_announce_map[msg->sys_name] = std::string(number);
          }
        }
      }

      void
      answer(const IMC::AcousticOperation* req, int status, std::string system, fp32_t range = 0.0)
      {
        IMC::AcousticOperation msg;
        msg.op = status;
        msg.system = system;
        msg.range = range;
        msg.setDestination(req->getSource());
        msg.setDestinationEntity(req->getSourceEntity());
        m_parent->dispatch(msg);
      }

      void
      answerTCPStatus(const IMC::TransmissionRequest* req, std::string info, int status)
      {
        IMC::TCPStatus msg;
        msg.info = info;
        msg.req_id = req->req_id;
        msg.status = status;
        msg.setDestination(req->getSource());
        msg.setDestinationEntity(req->getSourceEntity());
        m_parent->dispatch(msg, DF_LOOP_BACK);
      }

      void
      answer(const IMC::TransmissionRequest* req, std::string info, int status, fp32_t range = 0.0)
      {
        IMC::TransmissionStatus msg;
        msg.info = info;
        msg.req_id = req->req_id;
        msg.status = status;
        msg.range = range;
        msg.setDestination(req->getSource());
        msg.setDestinationEntity(req->getSourceEntity());
        m_parent->dispatch(msg);

        m_parent->inf("Status of transmission message (%d) changed to: %s",
                      req->req_id, info.c_str());
      }

      void
      answerCommNotAvailable(const IMC::TransmissionRequest* msg)
      {
        answer(msg, "No communication mode available for this message type",
               IMC::TransmissionStatus::TSTAT_TEMPORARY_FAILURE);
      }

      void
      answerDestinationNotVisible(const IMC::TransmissionRequest* msg)
      {
        answer(msg, "No communication mode available for this destination",
               IMC::TransmissionStatus::TSTAT_TEMPORARY_FAILURE);
      }

      uint16_t
      createInternalId()
      {
        if (m_reqid == 0xFFFF)
        {
          m_reqid = 0;
        }
        else
        {
          m_reqid++;
        }
        return m_reqid;
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
           m_parent->inf("Transmission Request %d is expired by %f seconds", it->second->req_id, it->second->deadline - time);
            answer(it->second, "Transmission timed out.",
                   IMC::TransmissionStatus::TSTAT_TEMPORARY_FAILURE);
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
        m_parent->inf("Request to send data over Acoustic to %s (%d)",
                      msg->destination.c_str(), msg->req_id);

        AcousticRequest tx;

        if (msg->destination == "")
          tx.destination = "broadcast";
        else
          tx.destination = msg->destination.c_str();

        tx.setDestination(m_parent->getSystemId());
        tx.setDestinationEntity(m_parent->getEntityId());

        tx.range = msg->range;

        switch (msg->data_mode)
        {
          case IMC::TransmissionRequest::DMODE_INLINEMSG:
            {
              tx.type = IMC::AcousticRequest::TYPE_MSG;
              tx.msg.set(msg->msg_data.get()->clone());

              break;
            }

          case IMC::TransmissionRequest::DMODE_ABORT:
            {
              tx.type = IMC::AcousticRequest::TYPE_ABORT;

              break;
            }
          case IMC::TransmissionRequest::DMODE_RANGE:
            {
              tx.type = IMC::AcousticRequest::TYPE_RANGE;

              break;
            }
          case IMC::TransmissionRequest::DMODE_REVERSE_RANGE:
            {
              tx.type = IMC::AcousticRequest::TYPE_REVERSE_RANGE;

              break;
            }
          case IMC::TransmissionRequest::DMODE_RAW:
            {
              tx.type = IMC::AcousticRequest::TYPE_RAW;
              IMC::DevDataBinary ddb;
              ddb.value = msg->raw_data;
              tx.msg.set(ddb);
              break;
            }
          default:
            {
              answer(
                  msg,
                  "Communication mode not implemented for communication mean Acoustic",
                  IMC::TransmissionStatus::TSTAT_PERMANENT_FAILURE);
              return;

              break;
            }
        }

        uint16_t newId = createInternalId();
        tx.req_id = newId;
        m_transmission_requests[newId] = msg->clone();

        tx.timeout = msg->deadline - Time::Clock::getSinceEpoch();
        if (tx.timeout < 0)
          tx.timeout = 0;

        m_parent->dispatch(tx);
      }

      void
      sendViaSatellite(const IMC::TransmissionRequest* msg, bool plain_text)
      {
        m_parent->inf("Request to send data over satellite (%d)", msg->req_id);

        IridiumMsgTx tx;

        tx.destination = msg->destination;
        tx.ttl = msg->deadline - Time::Clock::getSinceEpoch();
        tx.setDestination(msg->getDestination());
        tx.setDestinationEntity(msg->getDestinationEntity());

        switch (msg->data_mode)
        {
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
              if(plain_text)
              {
                const char* txt = msg->txt_data.c_str();
                tx.data.assign(txt, txt + msg->txt_data.length());
              }
              else
              {
                IMC::IridiumCommand m;
                m.destination = 0xFFFF;
                m.source = m_parent->getSystemId();
                m.command = msg->txt_data;
                uint8_t buffer[65535];
                int len = m.serialize(buffer);
                tx.data.assign(buffer, buffer + len);
              }

              break;
            }
          default:
            answer(
                msg,
                "Communication mode not implemented for communication mean Satellite",
                IMC::TransmissionStatus::TSTAT_PERMANENT_FAILURE);
            return;

            break;
        }

        uint16_t newId = createInternalId();
        tx.req_id = newId;
        m_transmission_requests[newId] = msg->clone();
        m_parent->dispatch(tx);
      }

      void
      sendViaAny(const IMC::TransmissionRequest* msg, bool plain_text)
      {
        //restriction by medium
        if (m_medium == IMC::VehicleMedium::VM_UNDERWATER)
        {
          if (msg->data_mode != IMC::TransmissionRequest::DMODE_TEXT)
          {
            if (visibleOverAcoustic(msg->destination))
            {
              sendViaAcoustic(msg);
              return;
            }
            else
            {
              answerDestinationNotVisible(msg);
              return;
            }
          }
          else
          {
            answerCommNotAvailable(msg);
            return;
          }
        }
        //end

        //restriction by transmission mode
        std::string dest;
        switch (msg->data_mode)
        {
          //unique for uan modems
          case IMC::TransmissionRequest::DMODE_ABORT:
          case IMC::TransmissionRequest::DMODE_RANGE:
          case IMC::TransmissionRequest::DMODE_REVERSE_RANGE:
            if (m_medium == IMC::VehicleMedium::VM_WATER)
            {
              if (visibleOverAcoustic(msg->destination))
              {
                sendViaAcoustic(msg);
                return;
              }
              answerDestinationNotVisible(msg);
              return;
            }
            answerCommNotAvailable(msg);
            return;

            break;

            //unique for satellite modem
          case IMC::TransmissionRequest::DMODE_RAW:
            if (checkRSSISignal(IRIDIUM))
            {
              sendViaSatellite(msg, plain_text);
              return;
            }
            answerCommNotAvailable(msg);
            return;

            break;

            //only for satellite modem or gsm
          case IMC::TransmissionRequest::DMODE_TEXT:

            if (visibleOverGSM(msg->destination, dest)
                && checkGSMMessageSize(msg))
            {
              sendViaGSM(msg);
              return;
            }

            if (checkRSSISignal(IRIDIUM))
            {
              sendViaSatellite(msg, plain_text);
              return;
            }
            answerCommNotAvailable(msg);
            return;

            break;

          case IMC::TransmissionRequest::DMODE_INLINEMSG:
            if (visibleOverWifi(msg->destination))
            {
              sendViaWifi(msg);
              return;
            }
            if (visibleOverGSM(msg->destination, dest)
                && checkGSMMessageSize(msg))
            {
              sendViaGSM(msg);
              return;
            }
            if (m_medium != IMC::VehicleMedium::VM_WATER)
            {
              if (checkRSSISignal(IRIDIUM))
              {
                sendViaSatellite(msg, plain_text);
                return;
              }
              answerCommNotAvailable(msg);
              return;
            }
            else
            {
              if (visibleOverAcoustic(msg->destination))
              {
                sendViaAcoustic(msg);
                return;
              }
              if (checkRSSISignal(IRIDIUM))
              {
                sendViaSatellite(msg, plain_text);
                return;
              }
              answerCommNotAvailable(msg);
              return;
            }

            break;

          default:
            answerCommNotAvailable(msg);
            return;
            break;
        }
        //end

        return;

      }

      void
      sendViaGSM(const IMC::TransmissionRequest* msg)
      {
        m_parent->inf("Request to send data over SMS to %s (%d)",
                      msg->destination.c_str(), msg->req_id);

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
          std::string dest;
          if (visibleOverGSM(msg->destination, dest))
          {
            sms.destination = dest;
          }
          else
          {
            sms.destination = msg->destination;
          }
        }
        sms.timeout =
            (msg->deadline < Time::Clock::getSinceEpoch()) ? 0 :
                msg->deadline - Time::Clock::getSinceEpoch();

        switch (msg->data_mode)
        {
          case IMC::TransmissionRequest::DMODE_TEXT:
            {
              if (msg->txt_data == "")
              {
                answer(msg, "GSM message cannot be empty",
                       IMC::TransmissionStatus::TSTAT_INPUT_FAILURE);
                return;
              }
              sms.sms_text = msg->txt_data;

              break;
            }
          case IMC::TransmissionRequest::DMODE_INLINEMSG:
            {
              Utils::ByteBuffer bfr;
              IMC::Packet::serialize(msg->msg_data.get(), bfr);
              std::string encoded = Algorithms::Base64::encode(bfr.getBuffer(),
                                                               bfr.getSize());
              sms.sms_text.assign(encoded);

              break;
            }
          default:
            {
              answer(
                  msg,
                  "Communication mode not implemented for communication mean GSM",
                  IMC::TransmissionStatus::TSTAT_PERMANENT_FAILURE);
              return;

              break;
            }
        }

        if (sms.sms_text.length() > 160)
        { //160 characters -> 120 bytes for the inline message
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
          if (visibleOverWifi(msg->destination))
          {
            send.destination = std::string(
                m_wifi_map[msg->destination].address);
          }
          else
          {
            uint16_t newId = createInternalId();
            m_transmission_requests[newId] = msg->clone();
            IMC::TransmissionRequest* msg2 = msg->clone();
            msg2->req_id = newId;
            answerTCPStatus(msg2, "Didn't find TCP server on destination host",
                            IMC::TCPStatus::TCPSTAT_HOST_UNKNOWN);
            return;
          }
        }

        send.timeout = (msg->deadline < 0) ? 0 : msg->deadline;

        switch (msg->data_mode)
        {
          case IMC::TransmissionRequest::DMODE_INLINEMSG:
            {
              send.msg_data.set(msg->msg_data.get()->clone());
              break;
            }
          default:
            {
              answer(
                  msg,
                  "Communication mode not implemented for communication mean GSM",
                  IMC::TransmissionStatus::TSTAT_PERMANENT_FAILURE);
              return;

              break;
            }
        }

        uint16_t newId = createInternalId();
        send.req_id = newId;
        m_transmission_requests[newId] = msg->clone();
        m_parent->dispatch(send);

      }

      void
      sendViaAll(const IMC::TransmissionRequest* msg, bool plain_text)
      {

        //restriction by medium
        if (m_medium == IMC::VehicleMedium::VM_UNDERWATER)
        {
          if (msg->data_mode != IMC::TransmissionRequest::DMODE_TEXT)
          {
            if (visibleOverAcoustic(msg->destination))
            {
              sendViaAcoustic(msg);
              return;
            }
          }
          answerCommNotAvailable(msg);
          return;
        }
        //end

        //restriction by transmission mode
        std::string dest;
        bool flag = false;
        switch (msg->data_mode)
        {
          //unique for uan modems
          case IMC::TransmissionRequest::DMODE_ABORT:
          case IMC::TransmissionRequest::DMODE_RANGE:
          case IMC::TransmissionRequest::DMODE_REVERSE_RANGE:
            if (m_medium == IMC::VehicleMedium::VM_WATER)
            {
              if (visibleOverAcoustic(msg->destination))
              {
                sendViaAcoustic(msg);
                return;
              }
            }
            answerCommNotAvailable(msg);
            return;
            break;

            //unique for satellite modem
          case IMC::TransmissionRequest::DMODE_RAW:
            if (checkRSSISignal(IRIDIUM))
            {
              sendViaSatellite(msg, plain_text);
              return;
            }
            answerCommNotAvailable(msg);
            return;
            break;

            //only for satellite modem or gsm
          case IMC::TransmissionRequest::DMODE_TEXT:
            if (visibleOverGSM(msg->destination, dest)
                && checkGSMMessageSize(msg))
            {
              sendViaGSM(msg);
              flag = true;
            }
            if (checkRSSISignal(IRIDIUM))
            {
              sendViaSatellite(msg, plain_text);
              flag = true;
            }
            if (!flag)
              answerCommNotAvailable(msg);

            return;
            break;

          case IMC::TransmissionRequest::DMODE_INLINEMSG:
            if (visibleOverWifi(msg->destination))
            {
              sendViaWifi(msg);
              flag = true;
            }
            if (visibleOverGSM(msg->destination, dest)
                && checkGSMMessageSize(msg))
            {
              sendViaGSM(msg);
              flag = true;
            }
            if (visibleOverAcoustic(msg->destination))
            {
              sendViaAcoustic(msg);
              flag = true;
            }
            if (checkRSSISignal(IRIDIUM))
            {
              sendViaSatellite(msg, plain_text);
              flag = true;
            }
            if (!flag)
              answerCommNotAvailable(msg);

            return;
            break;

          default:
            answerCommNotAvailable(msg);
            return;
            break;
        }
        //end

        return;
      }

      void
      setGSMMap(std::map<std::string, std::string> map)
      {
        m_gsm_config_map = map;
      }

      void
      setAcousticMap(std::vector<std::string> map)
      {
        m_acoustic_map = map;
      }

      void
      setGsmLabel(int id)
      {
        m_gsm_entity_id = id;
      }

      void
      setIridiumLabel(int id)
      {
        m_iridium_entity_id = id;
      }

      std::map<uint16_t, IMC::TransmissionRequest*>*
      getList()
      {
        return &m_transmission_requests;
      }

      ~Router()
      {
      }

    private:
      Task* m_parent;
      uint8_t m_medium;

      int m_gsm_entity_id;
      int m_iridium_entity_id;
      std::map<uint8_t, fp32_t> m_rssi_msg_map;
      uint16_t m_reqid;

      typedef std::map<uint16_t, IMC::TransmissionRequest*> MessagesQueued;
      MessagesQueued m_transmission_requests;

      typedef std::map<std::string, TCPAnnounce> WifiMap;
      WifiMap m_wifi_map;

      typedef std::map<std::string, std::string> GsmAnnounceMap;
      GsmAnnounceMap m_gsm_announce_map;

      typedef std::map<std::string, std::string> GsmConfigMap;
      GsmConfigMap m_gsm_config_map;

      typedef std::vector<std::string> AcousticMap;
      AcousticMap m_acoustic_map;

      uint16_t c_wifi_timeout;

      enum RSSIType
      {
        GSM, IRIDIUM
      };

      bool
      visibleOverAcoustic(std::string system)
      {
        if (system.empty())
          return false;

        for (unsigned i = 0; i < m_acoustic_map.size(); i++)
        {
          if (m_acoustic_map[i] == system)
            return true;
        }

        return false;
      }

      bool
      visibleOverWifi(std::string system)
      {
        if (system.empty())
          return false;

        std::map<std::string, TCPAnnounce>::iterator it;

        it = m_wifi_map.find(system);
        if (it == m_wifi_map.end())
          return false;

        double curTime = Clock::getSinceEpoch();
        if (curTime - it->second.timestamp > c_wifi_timeout)
          return false;

        return true;
      }

      bool
      visibleOverGSM(std::string system, std::string& std)
      {
        if (system.empty())
          return false;

        std::map<std::string, std::string>::iterator it;
        it = m_gsm_announce_map.find(system);
        if (it != m_gsm_announce_map.end())
        {
          std = it->second;
          return checkRSSISignal(GSM);
        }

        it = m_gsm_config_map.find(system);
        if (it != m_gsm_config_map.end())
        {
          std = it->second;
          return checkRSSISignal(GSM);
        }

        return false;
      }

      bool
      checkRSSISignal(RSSIType type)
      {
        switch (type)
        {
          case GSM:
            {
              if (m_gsm_entity_id == -1)
                return false;
              std::map<uint8_t, fp32_t>::iterator it;
              it = m_rssi_msg_map.find(m_gsm_entity_id);
              if (it == m_rssi_msg_map.end())
                return false;
              if (it->second > 0)
                return true;
              return false;

              break;
            }
          case IRIDIUM:
            {
              if (m_iridium_entity_id == -1)
                return false;
              std::map<uint8_t, fp32_t>::iterator it;
              it = m_rssi_msg_map.find(m_iridium_entity_id);
              if (it == m_rssi_msg_map.end())
                return false;
              if (it->second >= 20)
                return true;
              return false;

              break;
            }
          default:
            {
              return false;
              break;
            }
        }
      }

      bool
      checkGSMMessageSize(const IMC::TransmissionRequest* msg)
      {
        switch (msg->data_mode)
        {
          case IMC::TransmissionRequest::DMODE_TEXT:
            {
              return msg->txt_data.length() <= 160;
              break;
            }
          case IMC::TransmissionRequest::DMODE_INLINEMSG:
            {
              Utils::ByteBuffer bfr;
              IMC::Packet::serialize(msg->msg_data.get(), bfr);
              std::string encoded = Algorithms::Base64::encode(bfr.getBuffer(),
                                                               bfr.getSize());
              return encoded.length() <= 160;
              break;
            }
          default:
            {
              return false;
              break;
            }
        }
      }

    };
  }
}

#endif /* SRC_TRANSPORTS_COMMMANAGER_ROUTER_HPP_ */
