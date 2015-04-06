//***************************************************************************
// Copyright 2007-2015 Universidade do Porto - Faculdade de Engenharia      *
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
// Author: Jose Pinto                                      *
//***************************************************************************

// ISO C++ 98 headers.
#include <stdexcept>

// DUNE headers.
#include <DUNE/DUNE.hpp>

namespace Autonomy
{
  //! %TREX is responsible to interact with MBARI's T-REX
  namespace TREX
  {
    using DUNE_NAMESPACES;

    //! %Task arguments
    struct Arguments
    {
      //! T-REX IMC identifier.
      unsigned trex_id;
      //! Time threshold after which communication with TREX is considered lost
      uint16_t connection_timeout;
      //! Threshold (meters) after which the vehicle is considered to have arrived
      //! at destination in the vertical plane.
      uint16_t altitude_interval;
      //! Name of TREX CPU power channel.
      std::string aux_pwr_channel;
    };

    struct Task : public DUNE::Tasks::Task
    {
      //! Announce cache.
      std::map<unsigned int, IMC::Announce> lastAnnounces;
      //! HeartBeat cache.
      std::map<unsigned int, double> lastHeartBeat;
      //! Mutex for accessing announces map.
      DUNE::Concurrency::Mutex m_mutex;
      //! Task arguments.
      Arguments m_args;
      //! Last HeartBeat.
      double m_last_heartbeat;
      //! Last vehicle state
      IMC::VehicleState m_last_vehicle_state;
      //! Last plan control state
      IMC::PlanControlState m_last_plan_state;
      //! Message to turn on/off TREX's CPU
      IMC::PowerChannelControl m_pwr_cpu;
      //! Stores state of attached TREX
      bool m_trex_connected;
      //! Stores if TREX is currently controlling the vehicle
      bool m_trex_control;

      Task(const std::string& name, Tasks::Context& ctx) :
        DUNE::Tasks::Task(name, ctx),
        m_last_heartbeat(Time::Clock::get()),
        m_trex_connected(false),
        m_trex_control(false)
      {
        // Define configuration parameters.
        paramActive(Tasks::Parameter::SCOPE_GLOBAL,
                    Tasks::Parameter::VISIBILITY_USER, false);

        param("TREX ID", m_args.trex_id)
        .defaultValue("65000")
        .minimumValue("0");

        param("TREX Connection Timeout", m_args.connection_timeout)
        .defaultValue("60")
        .minimumValue("0");

        param("FollowReference altitude interval", m_args.altitude_interval)
        .defaultValue("2")
        .minimumValue("0");

        param("CPU Power Channel", m_args.aux_pwr_channel)
        .defaultValue("None")
        .description("Name of the auxiliary CPU's power channel");

        // Register consumers.
        bind<IMC::Announce>(this);
        bind<IMC::Heartbeat>(this);
        bind<IMC::VehicleState>(this);
        bind<IMC::PlanControlState>(this);
        bind<IMC::TrexOperation>(this);
        bind<IMC::Abort>(this);
        bind<IMC::PlanControl>(this);
      }

      void
      onEntityReservation(void)
      {
        reserveEntity("TREX (External)");
      }

      void
      updateEntityState(void)
      {
        if (!isActive()) {
          setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_IDLE);
          return;
        }

        double latency = Time::Clock::get() - m_last_heartbeat;

        if (latency > 10)
        {
          std::stringstream sstm;
          sstm
          << String::str(DTR("TREX disconnected for more than %d seconds"),
                         (int)latency);
          setEntityState(IMC::EntityState::ESTA_ERROR, sstm.str());
          m_trex_connected = false;
          if(isActive())
            requestDeactivation();
        }
        else
        {
          setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_ACTIVE);
        }
      }

      void
      consume(const IMC::Heartbeat* msg)
      {
        if (msg->getSource() == m_args.trex_id)
        {
          m_last_heartbeat = Time::Clock::get();
          m_trex_connected = true;
        }

        if (lastAnnounces.count(msg->getSource()))
        {
          lastHeartBeat[msg->getSource()] = Time::Clock::get();
        }
      }

      void
      consume(const IMC::Announce* msg)
      {
        // new connection
        if (!lastAnnounces.count(msg->getSource()))
        {
          lastHeartBeat[msg->getSource()] = Time::Clock::get();
        }
        m_mutex.lock();
        lastAnnounces[msg->getSource()] = *msg;
        m_mutex.unlock();
      }

      void
      consume(const IMC::VehicleState * msg)
      {
        m_last_vehicle_state = *msg;

        // if the vehicle is in error mode, T-REX payload becomes inactive
        if (msg->op_mode == IMC::VehicleState::VS_ERROR)
          requestDeactivation();
      }

      void
      consume(const IMC::PlanControlState * msg)
      {
        m_last_plan_state = *msg;

        m_trex_control = msg->state == IMC::PlanControlState::PCS_EXECUTING
        && msg->plan_id == "trex_plan";
      }

      void
      consume(const IMC::Abort* msg)
      {
        if (msg->getDestination() != getSystemId())
          return;

        war(DTR("Abort detected. Disabling TREX control..."));
        requestDeactivation();
      }

      void
      consume(const IMC::PlanControl* msg)
      {
        if (msg->type == PlanControl::PC_REQUEST && msg->op == PlanControl::PC_STOP)
        {
          m_trex_control = m_last_plan_state.plan_id == "trex_plan"
          && m_last_plan_state.state == IMC::PlanControlState::PCS_EXECUTING;

          if (m_trex_control)
          {
            requestDeactivation();
            war(DTR("Stop TREX detected. Disabling TREX control..."));
          }
        }
      }

      void
      consume(const IMC::TrexOperation * msg)
      {
        switch (msg->op)
        {
          case IMC::TrexOperation::OP_POST_TOKEN:

            if (!msg->token.isNull())
            {
              IMC::TrexToken token(*msg->token.get());
              dispatch(token);
            }
            break;
          case IMC::TrexOperation::OP_REQUEST_PLAN:
            {
              war(DTR("Restarting auxiliary CPU..."));
              resetAuxCpu();
              break;
            }
          case IMC::TrexOperation::OP_REPORT_PLAN:
            {
              int i = system("services trex stop 1,2 > /dev/null &");
              if (i == 0)
                inf(DTR("T-REX has been stopped."));
              else
                war(DTR("Could not stop T-REX: %d."), i);

              break;
            }
          default:
            break;
        }
      }

      void
      onUpdateParameters(void)
      {
        m_pwr_cpu.name = m_args.aux_pwr_channel;
      }

      void
      onActivation(void)
      {
        inf("%s", DTR(Status::getString(Status::CODE_ACTIVE)));
        setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_ACTIVE);

        if (m_args.aux_pwr_channel != "None")
        {
          m_pwr_cpu.op = PowerChannelControl::PCC_OP_TURN_ON;
          dispatch(m_pwr_cpu);
        }
      }

      void
      onDeactivation(void)
      {
        inf("%s", DTR(Status::getString(Status::CODE_IDLE)));
        setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_IDLE);
      }

      // Start a FollowReference maneuver that is controlled by TREX
      void
      startExecution(void)
      {
        inf("Starting TREX plan...");
        IMC::PlanControl startPlan;
        startPlan.type = IMC::PlanControl::PC_REQUEST;
        startPlan.op = IMC::PlanControl::PC_START;
        startPlan.plan_id = "trex_plan";
        IMC::FollowReference man;
        man.control_ent = 255;
        man.control_src = m_args.trex_id;
        man.altitude_interval = m_args.altitude_interval;
        man.timeout = m_args.connection_timeout + 10;

        IMC::PlanSpecification spec;

        spec.plan_id = "trex_plan";
        spec.start_man_id = "follow_trex";

        IMC::PlanManeuver pm;
        pm.data.set(man);
        pm.maneuver_id = "follow_trex";
        spec.maneuvers.push_back(pm);
        startPlan.arg.set(spec);
        startPlan.request_id = 0;
        startPlan.flags = 0;

        dispatch(startPlan);
      }

      // Stop ongoing FollowReference maneuver
      void
      stopExecution(void)
      {
        inf("Stopping TREX plan...");
        IMC::PlanControl stopPlan;
        stopPlan.type = IMC::PlanControl::PC_REQUEST;
        stopPlan.op = IMC::PlanControl::PC_STOP;
        stopPlan.plan_id = "trex_plan";
        dispatch(stopPlan);
      }

      void
      checkState(void)
      {
        m_trex_control = m_last_plan_state.plan_id == "trex_plan"
        && m_last_plan_state.state == IMC::PlanControlState::PCS_EXECUTING;

        if (m_trex_control && !isActive())
        {
          stopExecution();
        }
        else if (isActive() && m_trex_connected
                 && m_last_vehicle_state.op_mode == IMC::VehicleState::VS_SERVICE)
        {
          startExecution();
        }
        else if (isActive() && !m_trex_connected && m_args.aux_pwr_channel != "None")
        {
          m_pwr_cpu.op = PowerChannelControl::PCC_OP_TURN_ON;
          m_pwr_cpu.name = m_args.aux_pwr_channel;
          dispatch(m_pwr_cpu);
        }
      }

      void
      resetAuxCpu(void)
      {
        if (m_args.aux_pwr_channel == "None")
        {
          return;
        }
        // Send turn off signal
        m_pwr_cpu.op = PowerChannelControl::PCC_OP_TURN_OFF;
        dispatch(m_pwr_cpu);

        // Schedule turn on signal for current time + 2 seconds
        m_pwr_cpu.op = PowerChannelControl::PCC_OP_SCHED_ON;
        m_pwr_cpu.sched_time = Clock::getSinceEpoch() + 2;
        dispatch(m_pwr_cpu);
      }

      void
      onMain(void)
      {
        std::map<unsigned int, double>::iterator it;
        std::map<unsigned int, double> oldMap;
        double lastTest = Time::Clock::get();
        while (!stopping())
        {
          consumeMessages();
          updateEntityState();
          oldMap.clear();
          oldMap.insert(lastHeartBeat.begin(), lastHeartBeat.end());
          double now = Clock::get();

          if (now - lastTest > m_args.connection_timeout)
          {
            for (it = oldMap.begin(); it != oldMap.end(); it++)
            {
              // disconnected
              if (now - it->second > 20.0)
              {
                lastHeartBeat.erase(it->first);
                lastAnnounces.erase(it->first);
              }
            }
          }

          IMC::VehicleLinks links;
          links.localname = getSystemName();

          if (lastAnnounces.size())
          {
            m_mutex.lock();
            std::map<unsigned int, IMC::Announce>::iterator i;
            for (i = lastAnnounces.begin(); i != lastAnnounces.end(); i++)
              links.links.push_back(&i->second);
            m_mutex.unlock();
          }

          dispatch(links);
          checkState();
          Delay::wait(1.0);
        }
      }
    };
  }
}

DUNE_TASK
