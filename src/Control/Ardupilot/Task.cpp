//***************************************************************************
// Copyright 2007-2024 Universidade do Porto - Faculdade de Engenharia      *
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
// Author: João Bogas                                                       *
//***************************************************************************

// DUNE headers.
#include <DUNE/DUNE.hpp>

// Local headers.
#include "Parser.hpp"

#define MAV_(X) MAVLINK_MSG_ID_##X

namespace Control
{
  //! Ardupilot interface using MAVLink v2.
  //!
  //! Insert explanation on task behaviour here.
  //! @author João Bogas
  namespace Ardupilot
  {
    using DUNE_NAMESPACES;

    struct Arguments
    {
      //! TCP Port
      uint16_t port;
      //! TCP Address
      Address addr;
      //! Use External Navigation Data
      bool nav_external;
      //! Telemetry Rates
      std::vector<uint8_t> rates;
      //! Loiter tolerance
      float ltol;
    };

    struct Task: public DUNE::Tasks::Task
    {
      //! Mavlink parser.
      MavParser<Task>* m_parser;
      //! Estimated state.
      IMC::EstimatedState m_estate;
      //! GpsFix message.
      IMC::GpsFix m_fix;
      //! DesiredPath message.
      IMC::DesiredPath m_dpath;
      //! PathControlState message.
      IMC::PathControlState m_pcs;
      //! Task arguments.
      Arguments m_args;

      //! Constructor.
      //! @param[in] name task name.
      //! @param[in] ctx context.
      Task(const std::string& name, Tasks::Context& ctx):
        DUNE::Tasks::Task(name, ctx),
        m_parser(nullptr)
      {
        param("TCP - Port", m_args.port)
          .defaultValue("5760")
          .description("Port for connection to Ardupilot");

        param("TCP - Address", m_args.addr)
          .defaultValue("127.0.0.1")
          .description("Address for connection to Ardupilot");

        param("Use External Nav Data", m_args.nav_external)
          .defaultValue("false")
          .description("Dispatch ExternalNavData instead of EstimatedState");

        param("Telemetry Rate", m_args.rates)
          .units(Units::Hertz)
          .description("Telemetry output rate from Ardupilot");

        param("Loiter Tolerance", m_args.ltol)
          .defaultValue("10")
          .units(Units::Meter)
          .description("Distance to consider loitering (radius + tolerance)");

      }

      //! Update internal state with new parameter values.
      void
      onUpdateParameters(void)
      { }

      //! Reserve entity identifiers.
      void
      onEntityReservation(void)
      { }

      //! Resolve entity names.
      void
      onEntityResolution(void)
      { }

      //! Acquire resources.
      void
      onResourceAcquisition(void)
      {
        try
        {
          m_parser = new MavParser<Task>(*this, m_args.addr, m_args.port);
          spew("Ardupiloit interface initialized");
        }
        catch (const std::exception& e)
        {
          setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_COM_ERROR);
          err("Ardupilot interface initialization failed");
          throw RestartNeeded(e.what(), 30);
        }
      }

      //! Initialize resources.
      void
      onResourceInitialization(void)
      {
        m_parser->bind(MAV_(TIMESYNC), &Task::onTimeSync);
        // Add message handlers
        addHandler(MAVLINK_MSG_ID_TIMESYNC, &Task::onTimeSync);

        // Enable all data streams
        m_parser->setStreamData(MAV_DATA_STREAM_ALL, 4, true);
        war("Resource initialization complete");
      }

      //! Release resources.
      void
      onResourceRelease(void)
      {
        Memory::clear(m_parser);
      }

      //! @brief Add a message handler to the parser.
      //! @param msg_id Message ID to handle.
      //! @param fp Task member function pointer to handle the message.
      void
      addHandler(uint8_t msg_id, void (Task::*fp)(const mavlink_message_t&))
      {
        m_parser->registerHandler(msg_id, std::bind(fp, this, std::placeholders::_1));
      }

      void
      onTimeSync(const mavlink_message_t& msg)
      {
        mavlink_timesync_t ts;
        mavlink_msg_timesync_decode(&msg, &ts);

        spew("Received sync message");
        spew("tc1: %ld", ts.tc1);
        spew("ts1: %ld", ts.ts1);
        spew("sys - component: %d - %d", ts.target_system, ts.target_component);

        // Reply
      }

      //! Main loop.
      void
      onMain(void)
      {
        while (!stopping())
        {
          consumeMessages();
          m_parser->poll(1.0);
        }
      }
    };
  }
}

DUNE_TASK
