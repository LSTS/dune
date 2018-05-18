//***************************************************************************
// Copyright 2007-2017 Universidade do Porto - Faculdade de Engenharia      *
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
// Author: Pedro Seruca                                                     *
//***************************************************************************

// DUNE headers.
#include <DUNE/DUNE.hpp>

namespace Transports
{
  namespace TCPOnDemand
  {
    using DUNE_NAMESPACES;

    const int c_max_size_wifi = 32 * 1024;
    const int c_wifi_timeout = 15;

    struct Arguments
        {
          //! Maximum number of tries for one requested message
          uint8_t max_number_tries;
          //! Time between tries for one requested message
          double time_between_tries;
        };

    struct Connection
    {
      Address address; // Server address.
      uint16_t port; // Server port.
    };


    struct Task : public DUNE::Tasks::Task
    {

      // Task arguments.
      Arguments m_args;

      //! Map of reachable systems.
      std::map<std::string, IMC::Announce> m_wifiVisibility;
      //! Map of states of other systems.
      std::map<std::string, IMC::EstimatedState> m_states;
      //! Map of messages to send.
      std::map<uint16_t, IMC::TCPRequest*> m_transmission_requests;
      //! Last RSSI value.
      fp32_t m_value_RSSI;
      //! Flag for dispatch messages.
      bool m_can_send;
      //! Sequence number of sending request.
      uint16_t m_reqid;
      //! Number of tries to establish a connection
      uint8_t m_number_tries;
      //! Timer for sending preceding message
      Counter<double> m_msg_send_timer;

      //! Constructor.
      //! @param[in] name task name.
      //! @param[in] ctx context.
      Task(const std::string& name, Tasks::Context& ctx) :
          DUNE::Tasks::Task(name, ctx),
          m_value_RSSI(0),
          m_can_send(true),
          m_reqid(0),
          m_number_tries(m_args.max_number_tries)
      {
        param("Maximum Number of Tries", m_args.max_number_tries)
                .description("Maximum number of tries for one requested message before throwing error.")
                .defaultValue("3");

        param("Time Between Tries", m_args.time_between_tries)
                .description("Time between tries for one requested message.")
                .defaultValue("5");

        bind<IMC::Announce>(this);
        bind<IMC::EstimatedState>(this);
        bind<IMC::TCPRequest>(this);

        m_msg_send_timer.setTop(1);

      }

      //! Update internal state with new parameter values.
      void
      onUpdateParameters(void)
      {
      }

      void
      consume(const IMC::Announce* msg)
      {
        m_wifiVisibility[msg->sys_name] = *msg;
      }

      void
      consume(const IMC::EstimatedState* msg)
      {
        std::string name = String::str(resolveSystemId(msg->getSource()));
        m_states[name] = *msg;
      }

      void
      consume(const IMC::TCPRequest* msg)
      {
        if(msg->getSource() != getSystemId()){
          return;
        }
        //! Add message to the end of queue
        m_transmission_requests[createInternalId()]=msg->clone();
      }

      void
      updateEntityState(unsigned client_count)
      {
        if (client_count > 0)
        {
          setEntityState(
              IMC::EntityState::ESTA_NORMAL,
              String::str(DTR("connected to %u clients"), client_count));
        }
        else
        {
          setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_IDLE);
        }
      }

      bool
      visibleOverWiFi(std::string system)
      {
        if(system.empty()) return false;

        std::map<std::string, IMC::Announce>::iterator it;

        it = m_wifiVisibility.find(system);
        if(it == m_wifiVisibility.end()) return false;

        double curTime = Clock::getSinceEpoch();
        if(curTime - it->second.getTimeStamp() > c_wifi_timeout) return false;

        std::string services = it->second.services;
        if(services.find("imc+tcp://") == std::string::npos) return false;

        return true;

      }

      Connection*
      getAddressPort(std::string system)
      {
        if(m_wifiVisibility.find(system)== m_wifiVisibility.end())
          return NULL;
        std::string services = m_wifiVisibility[system].services;

        std::vector<std::string> list;
        String::split(services, ";", list);

        char addr[128];
        uint16_t port;

        for(uint16_t i=0; i<list.size();i++){
          int result=std::sscanf(list[i].c_str(), "imc+tcp://%[^:]:%hu", addr,&port);
          if (result == 0)
          {
            continue;
          }
          else
          if(result == 2){
            Connection* conn = new Connection;
            conn->address = Address(addr);
            conn->port = port;

            return conn;
          }
          else
          {
            throw std::runtime_error(String::str(DTR("invalid address: '%s'"), services.c_str()));
            return NULL;
          }
        }
        return NULL;
      }

      TCPSocket*
      createTCPSocket(std::string system){

        Connection* conn = getAddressPort(system);
        if(conn == NULL) return NULL;

        TCPSocket* socket = new TCPSocket;
        socket->setKeepAlive(true);
        //set timeout
        socket->connect(conn->address, conn->port);
        Memory::clear(conn);

        return socket;
      }

      void
      answer(const IMC::TCPRequest* req, std::string info, int status)
      {
        IMC::TCPStatus msg;
        msg.info      = info;
        msg.req_id    = req->req_id;
        msg.status    = status;
        msg.setDestination(req->getSource());
        msg.setDestinationEntity(req->getSourceEntity());
        dispatch(msg);
      }

      void
      clearTimeouts()
      {
        std::map<uint16_t, IMC::TCPRequest*>::iterator it;
        it = m_transmission_requests.begin();

        double time = Time::Clock::getSinceEpoch();

        while (it != m_transmission_requests.end())
        {
          if (it->second->timeout <= time)
          {
            answer(it->second, "Transmission timed out.", IMC::TCPStatus::TCPSTAT_INPUT_FAILURE);
            Memory::clear(it->second);
            m_transmission_requests.erase(it++);
          }
          else
            ++it;
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

      //! Remove message from the queue. Resets timer. And unlocks the queue
      void
      removeFromQueue(uint16_t index){
        if(m_transmission_requests.find(index) != m_transmission_requests.end()){
          Memory::clear(m_transmission_requests.find(index)->second);
          m_transmission_requests.erase(index);
        }
        m_number_tries = m_args.max_number_tries;
        m_can_send=true;
      }

      void
      processQueue()
      {

        const IMC::TCPRequest * req = m_transmission_requests.begin()->second;
        uint16_t index = m_transmission_requests.begin()->first;

        if(visibleOverWiFi(req->destination)){

          try{
            TCPSocket* socket = createTCPSocket(req->destination);

            Utils::ByteBuffer data;
            IMC::Packet::serialize(req->msg_data.get(), data);
            socket->write(data.getBuffer(), data.getSize());

            Memory::clear(socket);

            answer(req,"Message sent over TCP",IMC::TCPStatus::TCPSTAT_SENT);
            removeFromQueue(index);

          }
          catch (std::exception& e)
          {
            m_number_tries--;
            if (m_number_tries <= 0)
            {
              removeFromQueue(m_transmission_requests.begin()->first);
              answer(req, "Couldn't connect with destination host",
                     IMC::TCPStatus::TCPSTAT_CANT_CONNECT);
              m_msg_send_timer.setTop(1);
            }
            else
            {
              m_can_send = true;
              m_msg_send_timer.setTop(m_args.time_between_tries);
            }
          }

        }else{
          removeFromQueue(index);
          answer(req,"Didn't find TCP server on destination host",IMC::TCPStatus::TCPSTAT_HOST_UNKNOWN);
          m_msg_send_timer.reset();
        }


      }

      //! Main loop.
      void
      onMain(void)
      {
        while (!stopping())
        {
          waitForMessages(1.0);
          if (m_msg_send_timer.overflow())
          {
            clearTimeouts();
            if (m_can_send && !m_transmission_requests.empty())
            {
              m_can_send = false;
              processQueue();
            }
            else
            {
              m_msg_send_timer.reset();
            }

          }


        }
      }
    };
  }
}

DUNE_TASK
