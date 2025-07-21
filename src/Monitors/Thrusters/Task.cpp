//***************************************************************************
// Copyright 2007-2025 Universidade do Porto - Faculdade de Engenharia      *
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
// Author: Pedro Gonçalves                                                  *
//***************************************************************************

// ISO C++ 98 headers.
#include <array>
#include <cstdio>
#include <iostream>

// DUNE headers.
#include <DUNE/DUNE.hpp>

namespace Monitors
{
  namespace Thrusters
  {
    using DUNE_NAMESPACES;

    //! Timeout for general monitor restart message.
    constexpr double c_timeout_tx_request = 120.0;

    //! Task arguments.
    struct Arguments
    {
      //! Thruster ID.
      uint8_t thruster_id;
      //! Maximum time to wait for high current levels on the thruster (in minutes).
      int maximum_current_timeout;
      //! Current value threshold to trigger a warning.
      float current_threshold;
      //! Label of the thruster current channel.
      std::string thruster_current_channel_label;
      //! Send updates over sattelite.
      bool send_satellite;
    };

    struct Task: public DUNE::Tasks::Task
    {
      //! Task arguments.
      Arguments m_args;
      //! Time counter to control current level variations.
      Time::Counter<float> m_current_check;
      //! Thrust entity id.
      unsigned m_thrust_eid;
      //! Last thruster actuation timestamp.
      double m_last_thruster_actuation;

      //! Constructor.
      //! @param[in] name task name.
      //! @param[in] ctx context.
      Task(const std::string& name, Tasks::Context& ctx):
        DUNE::Tasks::Task(name, ctx),
        m_thrust_eid(AddressResolver::invalid()),
        m_last_thruster_actuation(-1.0f)
      {
        paramActive(Tasks::Parameter::SCOPE_GLOBAL,
                    Tasks::Parameter::VISIBILITY_USER);

        param("Thruster ID", m_args.thruster_id)
        .description("ID of the thruster to monitor.");

        param("Interval Time Window in Minutes", m_args.maximum_current_timeout)
        .defaultValue("30")
        .minimumValue("5")
        .units(Units::Minute)
        .visibility(Tasks::Parameter::VISIBILITY_USER)
        .description("Maximum time to wait for high current levels on the thruster.");

        param("Current Threshold in Amperes", m_args.current_threshold)
        .defaultValue("1.0")
        .minimumValue("0.1")
        .units(Units::Ampere)
        .visibility(Tasks::Parameter::VISIBILITY_USER)
        .description("Current value threshold to trigger a warning (in Amperes).");

        param("Thruster Current Channel Label", m_args.thruster_current_channel_label)
        .defaultValue("THRUST_D")
        .visibility(Tasks::Parameter::VISIBILITY_USER)
        .description("Label of the thruster current channel to monitor.");

        param("Send Satellite Updates", m_args.send_satellite)
        .defaultValue("false")
        .description("Send updates over satellite.");

        bind<IMC::Current>(this);
        bind<IMC::SetThrusterActuation>(this);
      }

      void
      onUpdateParameters(void)
      {
        trace("onUpdateParameters");
        if(paramChanged(m_args.maximum_current_timeout))
        {
          m_current_check.setTop(m_args.maximum_current_timeout * 60.0f); // Convert minutes to seconds.
          m_current_check.reset();
          spew("Interval for thrusted current warning: %d minutes", m_args.maximum_current_timeout);
        }

        if(paramChanged(m_args.current_threshold))
        {
          spew("Current threshold set to: %.2f Amperes", m_args.current_threshold);
        }

        if(paramChanged(m_args.thruster_current_channel_label))
        {
          spew("Monitoring thruster current channel: %s", m_args.thruster_current_channel_label.c_str());
        }
      }

      //! Acquire resources.
      void
      onResourceAcquisition(void)
      {
        setEntityState(IMC::EntityState::ESTA_BOOT, Status::CODE_INIT);
      }

      //! Initialize resources.
      void
      onResourceInitialization(void)
      {
        setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_ACTIVATING);
        m_current_check.setTop(m_args.maximum_current_timeout * 60.0f); // Convert minutes to seconds.
        setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_ACTIVE);
        inf("Interval for thrusted current warning: %d minutes, "
            "Current threshold set to: %.2f Amperes, "
            "Monitoring thruster current channel: %s",
            m_args.maximum_current_timeout,
            m_args.current_threshold,
            m_args.thruster_current_channel_label.c_str());
      }

      //! Release resources.
      void
      onResourceRelease(void)
      { }

      void
      onEntityResolution(void)
      {
        try
        {
          m_thrust_eid = resolveEntity(m_args.thruster_current_channel_label);
          inf("Resolved entity '%s' with ID: %u", m_args.thruster_current_channel_label.c_str(), m_thrust_eid);
        }
        catch (...)
        {
          war("Failed to resolve entity '%s'. Ensure the entity label is correct and the entity is available.",
              m_args.thruster_current_channel_label.c_str());

          m_thrust_eid = AddressResolver::invalid();
        }
      }

      void
      consume(const IMC::Current* msg)
      {
        if (msg->getSource() != getSystemId())
          return;

        if (msg->getSourceEntity() != m_thrust_eid)
          return;

        if(msg->value >= m_args.current_threshold)
        {
          m_current_check.reset(); // Reset the current check timer.
        }
      }

      void
      consume(const IMC::SetThrusterActuation* msg)
      {
        if (msg->getSource() != getSystemId())
          return;

        if (msg->id != m_args.thruster_id)
          return;

        m_last_thruster_actuation = (msg->value > 0.0f) ? msg->getTimeStamp() : -1.0f;
      }

      void
      sendMessageOverSattelite(const std::string& message)
      {
        if (!m_args.send_satellite)
          return;

        IMC::TransmissionRequest tr;
        tr.setDestination(getSystemId());
        tr.setSourceEntity(getEntityId());
        tr.destination = "broadcast";
        tr.deadline = Time::Clock::getSinceEpoch() + c_timeout_tx_request;  // seconds
        tr.req_id = std::rand() % 0xFFFF;
        tr.comm_mean = IMC::TransmissionRequest::CMEAN_SATELLITE;
        tr.data_mode = IMC::TransmissionRequest::DMODE_TEXT;
        std::string msg = std::string(getName()) + " - " + message;
        tr.txt_data = msg;
        dispatch(tr);
      }

      //! Main loop.
      void
      onMain(void)
      {
        while (!stopping())
        {
          waitForMessages(0.01);
          if (m_current_check.overflow())
          {
            m_current_check.reset();
            std::string string_message = "THRUST WRN;T:" + std::to_string(m_args.maximum_current_timeout) +
              "|A:" + std::to_string(m_args.current_threshold) +
              "|L:" + m_args.thruster_current_channel_label;
            inf("Current Window Overflow: %s", string_message.c_str());
            sendMessageOverSattelite(string_message);
          }
        }
      }
    };
  }
}

DUNE_TASK