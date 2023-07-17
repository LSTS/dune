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


    static void* mosq_user_data = NULL;
    static std::string mosq_pw = "";
    class MosquittoClient: public Concurrency::Thread
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
        //! Broker ping period (in seconds).
        //! Broker pings if no other messages were exchanged in this interval
        int keepalive;
        //! Message retain flag
        bool retain;
        //! Select authentication mode
        bool auth_mode;
        //! User. For user + password authetication
        std::string usr;
        //! Password. For user + password authetication
        std::string pw;
        //! Certificate authority path
        std::string ca_path;
        //! Certificate path
        std::string cert_path;
        //! Private key path
        std::string key_path;
      };

      //! Constructor.
      //! @param[in] task parent task.
      MosquittoClient(Tasks::Task* task, const Arguments* args):
      m_task(task),
      m_args(args)
      {
        // Clear errors
        m_err_str.clear();

        //required by mosquitto_lib_init()
        mosquitto_threaded_set(m_mosq, true);

        // Initialize library
	      mosquitto_lib_init();
        try
        {
          m_mosq = mosquitto_new(m_args->client_id.c_str(), true, this);
        }
        catch(const std::exception& e)
        {
          throw std::runtime_error(String::str("Client error: %s", e.what()).c_str());
        }

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
        checkRC(mosquitto_subscribe(m_mosq, NULL, topic.c_str(), 0));
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
        checkRC(mosquitto_publish(m_mosq, NULL, topic.c_str(), 
                                  payload_length, payload, 0, m_args->retain));
        m_task->spew("sent: %s: %s", topic.c_str(), sanitize(std::string((char*)payload, payload_length).c_str()).c_str());
      }

      void
      publish(std::string topic, std::string payload)
      {
        publish(topic, (uint8_t*)payload.c_str(), payload.size());
      }

      //! Main loop
      void
      run(void)
      {
        while (!isStopping())
        {
          checkRC(mosquitto_loop(m_mosq, -1, 1));
        }
      }

      bool
      hasError(std::string& err_msg)
      {
        if (!m_err_str.empty())
        {
          err_msg = m_err_str;
          m_err_str.clear();
          return true;
        }

        return false;
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
      //! Error string. Since the client runs on a separate thread 
      //! the string is used as a flag to poll for client error.
      std::string m_err_str;

      void
      setAuthentication()
      {
        if(!m_args->auth_mode)// TODO: Certificate authentication, as default
        {  
          // User + password login
          const char* user = m_args->usr.empty() ? NULL : m_args->usr.c_str();
          const char* password = m_args->pw.empty() ? NULL : m_args->pw.c_str();
          checkRC(mosquitto_username_pw_set(m_mosq, user, password));
          return;
        }
        FileSystem::Path cert_auth(m_args->ca_path), cert(m_args->cert_path), key(m_args->key_path);

        const char* cafile = cert_auth.isFile() ? cert_auth.c_str() : NULL;
        const char* capath = cert_auth.exists() ? cert_auth.c_str() : NULL;
        if (cafile == NULL && capath == NULL)
          std::runtime_error("[task param] - Certificate authority path invalid");

        const char* certfile = cert.isFile() ? cert.c_str() : NULL;
        const char* keyfile = key.isFile() ? key.c_str() : NULL;
        if ((certfile == NULL) ^ (keyfile == NULL))
          std::runtime_error("[task param] - Certificate authority path invalid");

        mosq_user_data = mosquitto_userdata(m_mosq);
        m_task->inf(DTR("%s"), cafile);
        m_task->inf(DTR("%s"), certfile);
        m_task->inf(DTR("%s"), keyfile);
        checkRC(mosquitto_tls_set(m_mosq, cafile, capath, certfile, keyfile, NULL));
        checkRC(mosquitto_tls_opts_set(m_mosq, 0, NULL, NULL));
      }

      void
      connect()
      {
        checkRC(mosquitto_connect(m_mosq, m_args->address.str().c_str(), 
                                          m_args->port, 
                                          m_args->keepalive));
      }

      void
      setCallbacks()
      {
        mosquitto_connect_callback_set(m_mosq, on_connect);
        mosquitto_disconnect_callback_set(m_mosq, on_disconnect);
        mosquitto_message_callback_set(m_mosq, on_message);
        mosquitto_publish_callback_set(m_mosq, on_publish);
        mosquitto_subscribe_callback_set(m_mosq, on_subscribe);
        mosquitto_unsubscribe_callback_set(m_mosq, on_unsubscribe);
      }

      // CALLBACKS
      //! Connect callback function
      static void 
      on_connect(struct mosquitto *mosq, void *obj, int rc)
      {
        (void) mosq;
        MosquittoClient* self = (MosquittoClient*) obj;

        self->m_task->inf("Connected to broker");
        self->checkRC(rc);
      }
      
      //! Disconnect callback function
      static void
      on_disconnect(struct mosquitto *mosq, void *obj, int rc)
      {
        (void) mosq;
        MosquittoClient* self = (MosquittoClient*)obj;
        
        self->m_task->inf("Disconnected from broker");
        self->checkRC(rc);
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
      on_publish(struct mosquitto *mosq, void *obj, int msg_id)
      {
        (void) mosq;
        MosquittoClient* self = (MosquittoClient*)obj;

        self->m_task->spew("Published msg id: %d", msg_id);
      }

      //! Subscribe callback function
      static void 
      on_subscribe(struct mosquitto *mosq, void *obj, int msg_id, int sub_count, const int * granted_qos)
      {
        (void) mosq;
        MosquittoClient* self = (MosquittoClient*)obj;

        (void) msg_id;
        self->m_task->inf("Granted subscriptions: %d", sub_count);
        (void) granted_qos;
      }
      
      //! Subscribe callback function
      static void 
      on_unsubscribe(struct mosquitto *mosq, void *obj, int msg_id)
      {
        (void) mosq;
        MosquittoClient* self = (MosquittoClient*)obj;

        (void) msg_id;
        self->m_task->inf("Unsubscribed from topic");
      }

      //? Requires password
      //! TLS callback for key files decryption
      //! Must write the password into *buf with size bytes long
      //! Must return password length
      static int
      on_tls(char* buf, int size, int rwflag, void* userdata)
      {
        buf   = mosq_pw.empty() ? NULL : const_cast<char*>(mosq_pw.c_str());
        size  = (buf == NULL) ? 0    : mosq_pw.size();
        //? if (mosq_user_data == NULL); // Do something if NULL ?
        //? userdata = mosq_user_data;
        (void)buf;
        (void)size;
        (void)rwflag;
        (void)userdata;
        return size;
      }

      void
      checkRC(unsigned rc)
      {
        if (rc && m_err_str.empty())
        {
          m_err_str = String::str("Client Error: %s", mosquitto_strerror(rc));
        }
      }
    };
  }
}

#endif