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
// Author: Luis Venancio                                                    *
//***************************************************************************

#ifndef TRANSPORTS_MQTT_MOSQUITTO_CLIENT_HPP_INCLUDED_
#define TRANSPORTS_MQTT_MOSQUITTO_CLIENT_HPP_INCLUDED_

// DUNE headers.
#include <DUNE/DUNE.hpp>
#include <mosquitto.h>
// #ifdef DUNE_USING_MOSQUITTO
// #include <mosquitto.h>
// #endif

// TODO: Response codes
namespace Transports
{
  //! Insert short task description here.
  //!
  //! Insert explanation on task behaviour here.
  //! @author Luis Venancio
  namespace MQTT
  {
    using DUNE_NAMESPACES;

    //! Maximum topic length (in bytes)
    const uint32_t c_max_topic = 65536;
    //! Maximum payload length (in bytes)
    // TODO: This is too much!!
    // const uint32_t c_max_payload = 268435455; // 255 MB
    const uint32_t c_max_payload = 1048576; // 1 MB

    class MosquittoClient
    {
    public:
      //! Arguments
      struct
      Arguments
      {
        //! Client id
        std::string client_id;
        //! Broker address
        Address address;
        //! Broker port
        int port;
        int keepalive;

        //! User. For user + password authetication
        std::string usr;
        //! Password. For user + password authetication
        std::string pw;

        //! List of topics to subscribe
        std::vector<std::string> topics;
      };

      //! Constructor.
      //! @param[in] task parent task.
      MosquittoClient(Tasks::Task* task, const Arguments* args): 
      m_task(task),
      m_args(args)
      {
        // Initialize library
	      mosquitto_lib_init();
        m_mosq = mosquitto_new(m_args->client_id.c_str(), true, this);

        if (!m_mosq)
          throw std::runtime_error("Unable to initialize mosquitto instance");

        // Authetication
        setAuthentication();

        // Callbacks
        setCallbacks();

        // Connect to broker
        connect();
      }

      //! Destructor.
      ~MosquittoClient(void)
      {
        // libmosquitto cleanup
		    mosquitto_destroy(m_mosq);
        mosquitto_lib_cleanup();
      }

      void
      subscribe(std::string topic)
      {
        checkResult(mosquitto_subscribe(m_mosq, NULL, topic.c_str(), 0));
      }

      void
      subscribe(std::vector<std::string> topics)
      {
        for(unsigned i = 0; i < topics.size(); i++)
          subscribe(topics[i]);
      }

      bool
      poll(std::string& topic, std::string& payload)
      {
        mosquitto_message msg;

        if (!m_queue.pop(msg))
          return false;

        // TODO: Sanitize string
        topic = std::string(msg.topic);
        payload = std::string((char*)msg.payload, msg.payloadlen);
        
        return true;
      }

      bool
      poll(char* topic, uint8_t* payload, uint32_t* payload_length)
      {
        mosquitto_message msg;

        if (!m_queue.pop(msg))
          return false;

        std::strcpy(topic, msg.topic);
        std::memcpy(payload, (uint8_t*)msg.payload, msg.payloadlen);
        *payload_length = msg.payloadlen;
        
        return true;
      }

      void
      publish(std::string topic, uint8_t* payload, uint32_t payload_length)
      {
        checkResult(mosquitto_publish(m_mosq, NULL, topic.c_str(), payload_length, payload, 0, false));
        m_task->spew("sent: %s: %s", topic.c_str(), sanitize(std::string((char*)payload, payload_length).c_str()).c_str());
      }

      void
      publish(std::string topic, std::string payload)
      {
        publish(topic, (uint8_t*)payload.c_str(), payload.size());
      }

      //! Main loop
      bool
      loop()
      {
        return !mosquitto_loop(m_mosq, -1, 1);
      }

    private:
      //! Task
      Tasks::Task* m_task;
      //! Arguments
      const Arguments* m_args;
      //! Mosquitto instance
	    mosquitto *m_mosq;
      //! Message queue
      TSQueue<mosquitto_message> m_queue;

      void
      setAuthentication()
      {
        // TODO: Certificate authentication, as default
        // User + password login
        checkResult(mosquitto_username_pw_set(m_mosq, m_args->usr.empty() ? NULL : m_args->usr.c_str(),
                                                      m_args->pw.empty() ? NULL : m_args->pw.c_str()));
      }

      void
      connect()
      {
        checkResult(mosquitto_connect(m_mosq, m_args->address.str().c_str(), 
                                              m_args->port, 
                                              m_args->keepalive));
      }

      void
      setCallbacks()
      {
        // mosquitto_connect_callback_set(m_mosq, on_connect);
        mosquitto_disconnect_callback_set(m_mosq, on_disconnect);
        mosquitto_message_callback_set(m_mosq, on_message);
        // mosquitto_publish_callback_set(m_mosq, on_publish);
        // mosquitto_subscribe_callback_set(m_mosq, on_subscribe);
        // mosquitto_unsubscribe_callback_set(m_mosq, on_unsubscribe);
      }

      // CALLBACKS
      //! Connect callback function
      static void 
      on_connect(struct mosquitto *mosq, void *obj, int rc);
      
      //! Disconnect callback function
      static void
      on_disconnect(struct mosquitto *mosq, void *obj, int rc)
      {
        (void) mosq;
        MosquittoClient* self = (MosquittoClient*)obj;
        self->m_task->inf("Disconnected from broker: result code: %d", rc);
      }
      
      //! Message callback function
      static void
      on_message(struct mosquitto *mosq, void *obj, const struct mosquitto_message *msg)
      {
        (void) mosq;
        MosquittoClient* self = (MosquittoClient*)obj;

        mosquitto_message bfr;
        mosquitto_message_copy(&bfr, msg);

        self->m_queue.push(bfr);
        self->m_task->spew("recv: %s: %s", msg->topic, sanitize(std::string((char*)msg->payload, msg->payloadlen).c_str()).c_str());
      }

      //! Publish callback function
      static void
      on_publish(struct mosquitto *mosq, void *obj, int msg_id);

      //! Subscribe callback function
      static void 
      on_subscribe(struct mosquitto *mosq, void *obj, int msg_id, int sub_count, const int * granted_qos);
      
      //! Subscribe callback function
      static void 
      on_unsubscribe(struct mosquitto *mosq, void *obj, int msg_id);

      void
      checkResult(unsigned rc)
      {
        if (rc)
          throw std::runtime_error(String::str("Error: %u", rc));
      }
    };
  }
}

#endif
