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

    struct TCPRequest{

      IMC::TCPRequest* msg;

      bool
      operator<(const TCPRequest& other) const
      {
        return msg->timeout > other.msg->timeout;
      }

      TCPRequest(IMC::TCPRequest* other){
        msg = other;
      }

    };

    struct Task : public DUNE::Tasks::Task
    {

      // Task arguments.
      Arguments m_args;

      //! Map of reachable systems.
      std::map<std::string, IMC::Announce> m_wifiVisibility;
      //! Map of states of other systems.
      std::map<std::string, IMC::EstimatedState> m_states;
      //! Queue of messages to send.
      std::priority_queue<TCPRequest> m_queue;
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

      double m_connection_timeout;

      //! Constructor.
      //! @param[in] name task name.
      //! @param[in] ctx context.
      Task(const std::string& name, Tasks::Context& ctx) :
          DUNE::Tasks::Task(name, ctx),
          m_value_RSSI(0),
          m_can_send(true),
          m_reqid(0),
          m_number_tries(m_args.max_number_tries),
          m_connection_timeout(2)
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
      onResourceInitialization(void)
      {
        setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_IDLE);
      }

      void
      consume(const IMC::Announce* msg)
      {
        if(msg->services.find("imc+tcp://") == std::string::npos) return;
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

        if(msg->timeout == 0)
        {
          answer(msg,"TCPRequest timeout cannot be zero", IMC::TCPStatus::TCPSTAT_INPUT_FAILURE);
          inf("%s", DTR("TCPRequest timeout cannot be zero"));
          return;
        }
        if(msg->timeout < Time::Clock::getSinceEpoch())
        {
          answer(msg, "TCPRequest timeout cannot be less than current time", IMC::TCPStatus::TCPSTAT_INPUT_FAILURE);
          inf("%s", DTR("TCPRequest timeout cannot be less than current time"));
          return;

        }

        //! Add message to the end of queue
        m_queue.push(TCPRequest(msg->clone()));
        answer(msg, "TCPRequest sent to queue", IMC::TCPStatus::TCPSTAT_QUEUED);
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
        if( curTime - it->second.getTimeStamp() > c_wifi_timeout) return false;

        return true;

      }

      void
      getAddressPort(std::string system, Address& conn, uint16_t& port)
      {
        if(m_wifiVisibility.find(system)== m_wifiVisibility.end())
          return;
        std::string services = m_wifiVisibility[system].services;

        std::vector<std::string> list;
        String::split(services, ";", list);

        char addr[128];
        uint16_t pt;

        for(uint16_t i=0; i<list.size();i++){
          int result=std::sscanf(list[i].c_str(), "imc+tcp://%[^:]:%hu", addr,&pt);
          if (result == 0)
          {
            continue;
          }
          else
          if(result == 2){
            conn = addr;
            port = pt;
            return;
          }
          else
          {
            throw std::runtime_error(String::str(DTR("invalid address: '%s'"), services.c_str()));
            return;
          }
        }

      }

      void
      createTCPSocket(std::string system, TCPSocket& socket){

        Address addr;
        uint16_t port = 0;

        getAddressPort(system, addr, port);
        if(!addr.resolve() || port == 0) return;

        socket.setKeepAlive(true);
        socket.setSendTimeout(m_connection_timeout);
        socket.setReceiveTimeout(m_connection_timeout);
        socket.connect(addr, port);
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
        double time = Time::Clock::getSinceEpoch();
        while (!m_queue.empty() && m_queue.top().msg->timeout < time)
        {
          answer(m_queue.top().msg, "Transmission timed out.", IMC::TCPStatus::TCPSTAT_INPUT_FAILURE);
          removeFromQueue();
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
      removeFromQueue(){
        if(!m_queue.empty())
        {
          m_queue.pop();
        }
        m_number_tries = m_args.max_number_tries;
        m_can_send=true;
      }

      void
      processQueue()
      {
        const IMC::TCPRequest * req = m_queue.top().msg;

        if(visibleOverWiFi(req->destination)){

          try{
            TCPSocket socket;
            createTCPSocket(req->destination, socket);

            Utils::ByteBuffer data;
            IMC::Packet::serialize(req->msg_data.get(), data);
            socket.write(data.getBuffer(), data.getSize());

            answer(req,"Message sent over TCP",IMC::TCPStatus::TCPSTAT_SENT);
            removeFromQueue();

          }
          catch (std::exception& e)
          {
            m_number_tries--;
            if (m_number_tries <= 0)
            {
              removeFromQueue();
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
          removeFromQueue();
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
            if (m_can_send && !m_queue.empty())
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
