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
      //! Maximum time to wait for high current levels on the thruster.
      int maximum_current_timeout;
      //! Timeout for a periodic check while in error
      int periodic_check_error;
      //! Current value threshold to trigger a warning.
      float current_threshold;
      //! Label of the thruster current channel.
      std::string thruster_current_channel_label;
      //! Label of the thruster power channel.
      std::string thruster_power_channel_label;
      //! Send updates over sattelite.
      bool send_satellite;
      //! Only monitor thruster when submerged.
      bool submerged_only;
      //! Auto restart thruster.
      bool auto_restart;
      //! Force restart thruster.
      bool force_restart;
    };

    struct Task: public DUNE::Tasks::Task
    {
      //! Task arguments.
      Arguments m_args;
      //! Time counter to control current level variations.
      Time::Counter<float> m_current_check;
      //! Thrust entity id.
      unsigned m_thrust_eid;
      //! Thruster is being actuated or not.
      bool m_actuated;
      //! Error state.
      bool m_error;
      //! Timestamp of last actuation.
      double m_last_actuation;
      //! Deactivation was promoted by medium change.
      bool m_medium_deactivation;

      //! Constructor.
      //! @param[in] name task name.
      //! @param[in] ctx context.
      Task(const std::string& name, Tasks::Context& ctx):
        DUNE::Tasks::Task(name, ctx),
        m_thrust_eid(AddressResolver::invalid()),
        m_actuated(false),
        m_error(false),
        m_last_actuation(0.0f),
        m_medium_deactivation(false)
      {
        paramActive(Tasks::Parameter::SCOPE_GLOBAL,
                    Tasks::Parameter::VISIBILITY_USER);

        param("Thruster ID", m_args.thruster_id)
        .description("ID of the thruster to monitor.");

        param("Timeout for Expected Actuation", m_args.maximum_current_timeout)
        .defaultValue("30")
        .minimumValue("5")
        .units(Units::Second)
        .visibility(Tasks::Parameter::VISIBILITY_USER)
        .description("Maximum time to wait for high current levels on the thruster.");

        param("Timeout for Periodic Check in Error", m_args.periodic_check_error)
        .defaultValue("30")
        .minimumValue("5")
        .units(Units::Minute)
        .visibility(Tasks::Parameter::VISIBILITY_USER)
        .description("Timeout to do a periodic check when the thruster is in error.");

        param("Current Threshold in Amperes", m_args.current_threshold)
        .defaultValue("1.0")
        .minimumValue("0.1")
        .units(Units::Ampere)
        .visibility(Tasks::Parameter::VISIBILITY_USER)
        .description("Current value threshold to trigger a warning (in Amperes).");

        param("Thruster Current Channel Label", m_args.thruster_current_channel_label)
        .defaultValue("")
        .visibility(Tasks::Parameter::VISIBILITY_USER)
        .description("Label of the thruster current channel to monitor.");

        param("Thruster Power Channel Label", m_args.thruster_power_channel_label)
        .defaultValue("")
        .description("Label of the thruster power channel.");

        param("Send Satellite Updates", m_args.send_satellite)
        .defaultValue("false")
        .description("Send updates over satellite.");

        param("Monitor only when submerged", m_args.submerged_only)
        .description("Only monitor thruster when submerged.");

        param("Auto Restart", m_args.auto_restart)
        .description("Try to restart thruster automatically.");

        param("Restart Thruster", m_args.force_restart)
        .defaultValue("false")
        .visibility(Tasks::Parameter::VISIBILITY_USER)
        .description("Try to restart thruster.");

        bind<IMC::Current>(this);
        bind<IMC::SetThrusterActuation>(this);
        bind<IMC::VehicleMedium>(this);
      }

      void
      onActivation(void) override
      {
        DUNE::Tasks::Task::onActivation();
        m_medium_deactivation = false;
      }

      void
      onDeactivation(void) override
      {
        DUNE::Tasks::Task::onDeactivation();
        m_medium_deactivation = false;
      }

      void
      onUpdateParameters(void)
      {
        trace("onUpdateParameters");
        if(paramChanged(m_args.maximum_current_timeout))
        {
          spew("Interval for thruster current warning: %d minutes", m_args.maximum_current_timeout);
          const auto old_top = m_current_check.getTop();
          auto new_top = m_args.maximum_current_timeout * 60.0f;
          if (old_top != 0.0f)
          {
            const auto elapsed = m_current_check.getElapsed();
            if (elapsed >= new_top)
              m_current_check.setTop(0.0f);
            else if (m_current_check.getRemaining() > new_top)
              m_current_check.setTop(new_top - elapsed);
          }
          else
            m_current_check.setTop(new_top);
        }

        if(paramChanged(m_args.current_threshold))
        {
          spew("Current threshold set to: %.2f Amperes", m_args.current_threshold);
        }

        if(paramChanged(m_args.thruster_current_channel_label))
        {
          spew("Monitoring thruster current channel: %s", m_args.thruster_current_channel_label.c_str());
        }

        if (paramChanged(m_args.force_restart))
        {
          if (m_args.force_restart)
          {
            tryRestartThruster();
            applyEntityParameter(m_args.force_restart, false);
          }
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
        m_current_check.reset();
        setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_ACTIVE);
        inf("Interval for thruster current warning: %d minutes, "
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
          err("Failed to resolve entity '%s'. Ensure the entity label is correct and the entity is available.",
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
          setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_ACTIVE);
          if (m_error)
          {
            m_error = false;
            std::string text = "THRUSTER " + std::to_string(m_args.thruster_id) + " RECOVERED";
            inf("%s", text.c_str());
            sendMessageOverSattelite(text);
          }
        }
      }

      void
      consume(const IMC::SetThrusterActuation* msg)
      {
        if (msg->getSource() != getSystemId())
          return;

        if (msg->id != m_args.thruster_id)
          return;

        const bool actuated = (msg->value != 0.0f);
        if (actuated && !m_actuated)
          m_current_check.reset();

        m_actuated = actuated;
        if (m_actuated)
          m_last_actuation = Time::Clock::getSinceEpoch();
      }

      void
      consume(const IMC::VehicleMedium* msg)
      {
        if (msg->getSource() != getSystemId())
          return;

        const bool submerged = (msg->medium == IMC::VehicleMedium::VM_WATER) ||
                               (msg->medium == IMC::VehicleMedium::VM_UNDERWATER);

        if (m_args.submerged_only)
        {
          if (submerged)
          {
            if (m_medium_deactivation)
              requestActivation();
          }
          else
          {
            if (isActive())
            {
              requestDeactivation();
              m_medium_deactivation = true;
            }  
          }
        }
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

      void
      tryRestartThruster(void)
      {
        std::string msg = "Trying to restart thruster " + std::to_string(m_args.thruster_id);
        inf("%s", msg.c_str());
        sendMessageOverSattelite(msg);
        IMC::PowerChannelControl pcc;
        pcc.name = m_args.thruster_power_channel_label;
        pcc.op = IMC::PowerChannelControl::PCC_OP_TURN_OFF;
        dispatch(pcc, DF_LOOP_BACK);
        Time::Delay::wait(10.0);
        pcc.op = IMC::PowerChannelControl::PCC_OP_TURN_ON;
        dispatch(pcc, DF_LOOP_BACK);
      }

      //! Main loop.
      void
      onMain(void)
      {
        if (!AddressResolver::isValid(m_thrust_eid) && isActive())
          requestDeactivation();

        while (!stopping())
        {
          waitForMessages(0.01);

          if (!isActive())
            continue;

          if (m_last_actuation <= 0.0f)
            continue;

          const double now = Time::Clock::getSinceEpoch();
          const double actuation_diff = now - m_last_actuation;
          const float elapsed = m_current_check.getElapsed();
          const bool no_recent_current = (elapsed < actuation_diff);

          if (!no_recent_current && !m_current_check.overflow())
            continue;

          const bool elapsed_exceeded = elapsed >= m_args.periodic_check_error * 60.0f;

          if (!m_error || (m_error && elapsed_exceeded))
          {
            m_error = true;
            setEntityState(IMC::EntityState::ESTA_ERROR, "Thruster Not Responding");

            std::ostringstream ss;
            ss << "THRUST WRN;"
               << "T:" << m_args.maximum_current_timeout
               << "|A:" << m_args.current_threshold
               << "|L:" << m_args.thruster_current_channel_label;

            const std::string& msg = ss.str();
            inf("Current Window Overflow: %s", msg.c_str());
            sendMessageOverSattelite(msg);

            if (m_args.auto_restart && !m_args.thruster_power_channel_label.empty())
              tryRestartThruster();

            m_current_check.reset();
          }
        }
      }
    };
  }
}

DUNE_TASK