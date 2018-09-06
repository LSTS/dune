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
// Author: Tiago Marques                                                    *
//***************************************************************************

// DUNE headers.
#include <DUNE/DUNE.hpp>

namespace Transports
{
  namespace Acomms
  {
    using DUNE_NAMESPACES;

    struct Arguments
    {
      std::string role;
    };

    struct Task: public DUNE::Tasks::Task
    {
      //! Task arguments
      Arguments m_args;
      //! This node's name
      std::string m_node_name;
      //! Sequencial message id
      int m_msg_id;
      //! Heartbeat timer
      Time::Counter<float> m_hbeat_timer;
      //! Constructor.
      //! @param[in] name task name.
      //! @param[in] ctx context.
      Task(const std::string& name, Tasks::Context& ctx):
        DUNE::Tasks::Task(name, ctx),
        m_msg_id(0)
      {
        param("Role", m_args.role)
        .defaultValue("").
        description("This node's role in the communication (Source or Sink)");

        m_node_name = getSystemName();

        bind<IMC::GpsFix>(this);
        bind<IMC::DevDataText>(this);
      }

      //! Update internal state with new parameter values.
      void
      onUpdateParameters(void)
      {
      }

      void
      onResourceInitialization(void)
      {
        m_hbeat_timer.setTop(10);
        setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_IDLE);
      }

      int
      messageId(void)
      {
        return m_msg_id++;
      }

      void
      consume(const IMC::GpsFix* msg)
      {
        if (m_args.role == "Sink")
          return;

        // send message to Sink
        Parsers::NMEAWriter sntc("$ACOMS_G");
        sntc << m_msg_id
             << m_node_name
             << msg->validity
             << msg->type
             << msg->satellites
             << msg->height
             << msg->cog
             << msg->sog
             << msg->lat
             << msg->lon;

        IMC::DevDataText acomms_msg;
        acomms_msg.value = sntc.sentence();

        dispatchAcoustically(acomms_msg);
      }

      void
      consume(const IMC::DevDataText* msg)
      {
        try {
          Parsers::NMEAReader nmea(msg->value);

          // sink only cares about configuration DevDataText messages
          if (m_args.role == "Sink" && std::strcmp(nmea.code(), "ACOMMS_SET") != 0)
            return;

          if (std::strcmp(nmea.code(), "ACOMMS_ECHO") == 0)
          {
            inf("Got echo: %s", msg->value.c_str());
            return;
          }

          if (std::strcmp(nmea.code(), "ACOMMS_SET") == 0)
          {
            nmea >> m_args.role;

            if (m_args.role != "Sink" && m_args.role != "Source")
            {
              war(DTR("Unrecognized role: \'%s\'"), m_args.role.c_str());
              setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_IDLE);
              return;
            }

            inf("Changing role to %s", m_args.role.c_str());
            setEntityState(IMC::EntityState::ESTA_NORMAL, m_args.role);
            return;
          }

          echo(nmea);
        }
        catch (...) // InvalidSentence, ChecksumMismatch
        {
          war("Failed to parse NMEA message: %s", msg->value.c_str());
        }
      }

      void
      echo(Parsers::NMEAReader& nmea)
      {
        IMC::DevDataText msg;
        Parsers::NMEAWriter echo_str("$ACOMS_ECHO");

        echo_str << nmea.code();

        while(!nmea.eos())
        {
          std::string tmp;
          nmea >> tmp;
          echo_str << tmp;
        }

        msg.value = echo_str.sentence();
        dispatchAcoustically(msg);
      }

      void
      dispatchHeartbeat(void)
      {
        IMC::DevDataText heartbeat;
        Parsers::NMEAWriter sntc("$ACOMMS_H");

        sntc << m_msg_id
             << m_node_name
             << m_args.role;

        heartbeat.value = sntc.sentence();

        dispatchAcoustically(heartbeat);
      }

      void
      dispatchAcoustically(const IMC::DevDataText& msg)
      {
        // TODO
        IMC::AcousticOperation ac_msg;
        ac_msg.op = IMC::AcousticOperation::AOP_MSG;
        ac_msg.msg.set(msg);
        debug("%s", msg.value.c_str());
      }

      //! Main loop.
      void
      onMain(void)
      {
        while (!stopping())
        {
          waitForMessages(1.0);

          if (m_hbeat_timer.overflow())
          {
            dispatchHeartbeat();
            m_hbeat_timer.reset();
          }
        }
      }
    };
  }
}

DUNE_TASK
