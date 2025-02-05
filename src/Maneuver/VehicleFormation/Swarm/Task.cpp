//***************************************************************************
// Copyright 2007-2023 Universidade do Porto - Faculdade de Engenharia      *
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
// Author: Pedro Calado                                                     *
//***************************************************************************

// ISO C++ 98 headers.
#include <cmath>

// DUNE headers.
#include <DUNE/DUNE.hpp>

// Local headers
#include "AcousticProtocol.hpp"

namespace Maneuver
{
  namespace VehicleFormation
  {
    namespace Swarm
    {
      using DUNE_NAMESPACES;

      const unsigned c_ls_max_retries = 5;

      //! Finite state machine states.
      enum StateMachineStates
      {
        //! Waiting for activation.
        SM_IDLE,
        //! Leader setup state.
        SM_LEADER_SETUP,
        //! Moving.
        SM_MOVING,
        //! Start setup state.
        SM_START_SETUP
      };

      //! Finite state machine states.
      enum LeaderSetupStates
      {
        //! Send code LEADER to participant.
        LS_SEND_LEADER,
        //! Wait acknowledgement from participant.
        LS_ACK
      };

      struct Arguments
      {
        double ack_timeout;
        double leader_setup_timeout;
        double start_setup_timeout;
        double send_ready_interval;
        double tdma_time_per_slot;
      };

      struct Task: public DUNE::Maneuvers::BasicSwarm
      {
        //! last state update
        IMC::EstimatedState m_estate;
        //! Number of current waypoint number
        uint8_t m_curr;
        //! Task arguments
        Arguments m_args;
        //! Acoustic protocol
        AcousticProtocol m_comms;
        //! Received ack from this id
        uint16_t m_ack_id_rcv;
        //! Waiting acknowledgement from this id
        uint16_t m_ack_id_expected;
        //! Acknowledgement timer
        Time::Counter<double> m_ack_timeout;
        //! Leader id
        unsigned int m_leader_id;
        //! Ready state of participants
        std::map<int, bool> m_ready_state;
        //! Current state machine state
        StateMachineStates m_state;
        //! Leader Setup variables
        //! Leader Setup state
        LeaderSetupStates m_ls_state;
        //! Participant index
        int m_ls_idx;
        //! Leader Setup retries
        size_t m_ls_retries;
        //! Leader Setup timer
        Time::Counter<double> m_ls_timeout;
        //! Start Setup variables
        //! Start Setup timeout
        Time::Counter<double> m_ss_timeout;
        //! Send ready interval
        Time::Counter<double> m_ss_send_ready;
        //! Start flag received from leader
        bool m_ss_start;


        Task(const std::string& name, DUNE::Tasks::Context& ctx):
          BasicSwarm(name, ctx),
          m_curr(0),
          m_comms(this),
          m_ack_id_rcv(IMC::AddressResolver::invalid()),
          m_ack_id_expected(IMC::AddressResolver::invalid()),
          m_leader_id(IMC::AddressResolver::invalid()),
          m_state(SM_IDLE),
          m_ls_state(LS_SEND_LEADER),
          m_ls_idx(0),
          m_ls_retries(c_ls_max_retries),
          m_ss_start(false)
        {
          param("Acknowledgement Timeout", m_args.ack_timeout)
          .units(Units::Second)
          .defaultValue("10.0")
          .description("Acknowledgement timeout");

          param("Leader Setup Timeout", m_args.leader_setup_timeout)
          .units(Units::Second)
          .defaultValue("40.0")
          .description("Leader setup timeout");

          param("Start Setup Timeout", m_args.start_setup_timeout)
          .units(Units::Second)
          .defaultValue("20.0")
          .description("Start setup timeout");

          param("Send Ready Interval", m_args.send_ready_interval)
          .units(Units::Second)
          .defaultValue("2.0")
          .description("Send code READY interval");

          param("TDMA Time Per Slot", m_args.tdma_time_per_slot)
          .units(Units::Second)
          .defaultValue("5.0")
          .description("Period while acoustic channel is reserved for each participant");

          bind<IMC::UamRxFrame>(this);
        }

        void
        onUpdateParameters(void)
        {
          BasicSwarm::onUpdateParameters();

          m_comms.setTimePerSlot(m_args.tdma_time_per_slot);
        }

        //! On resource initialization
        void
        onResourceInitialization(void)
        {
          Maneuver::onResourceInitialization();
        }

        void
        consume(const IMC::UamRxFrame * msg)
        {
          if (!m_comms.validate(msg))
            return;

          switch (msg->data[1])
          {
            case CODE_ACK:
              recvAck(msg);
              break;
            case CODE_LEADER:
              recvLeader(msg);
              break;
            case CODE_READY:
              recvReady(msg);
              break;
            case CODE_START:
              recvStart(msg);
              break;
            default:
              debug("Invalid acoustic code: %u", msg->data[1]);
              break;
          }
        }

        void
        recvAck(const IMC::UamRxFrame* msg)
        {
          trace("Received code ACK from: %s", msg->sys_src.c_str());
          m_ack_id_rcv = resolveSystemName(msg->sys_src);
        }

        void
        recvLeader(const IMC::UamRxFrame* msg)
        {
          trace("Received code LEADER from: %s", msg->sys_src.c_str());
          m_leader_id = resolveSystemName(msg->sys_src);
          m_comms.sendAck(msg->sys_src);
        }

        void
        recvReady(const IMC::UamRxFrame* msg)
        {
          if (!isLeader())
            return;

          int id = resolveSystemName(msg->sys_src);
          std::map<int, bool>::iterator itr = m_ready_state.find(id);
          if (itr == m_ready_state.end())
          {
            war("Received code READY from non-participant: %s", msg->sys_src.c_str());
            return;
          }

          trace("Received code READY from: %s", msg->sys_src.c_str());
          itr->second = true;
        }

        void
        recvStart(const IMC::UamRxFrame* msg)
        {
          if (m_leader_id != resolveSystemName(msg->sys_src))
            return;

          double sync_time;
          std::memcpy(&sync_time, &msg->data[2], sizeof(double));
          trace("Received code START from: %s. Sync time: %f", msg->sys_src.c_str(), sync_time);

          m_comms.setSyncTime(sync_time);
          m_ss_start = true;
        }

        //! This is blocking!
        void
        expectAck(uint16_t sys_id)
        {
          m_ack_id_expected = sys_id;
          m_ack_id_rcv = IMC::AddressResolver::invalid();
          m_ack_timeout.setTop(m_args.ack_timeout);
        }

        bool
        gotAck(void)
        {
          if (m_ack_id_expected == IMC::AddressResolver::invalid())
            return false;

          if (m_ack_id_rcv == IMC::AddressResolver::invalid())
            return false;

          return m_ack_id_rcv == m_ack_id_expected;
        }

        //! Close matlab logged vectors
        void
        onReset(void)
        {
          m_state = SM_IDLE;
          m_comms.resetSyncTime();
          m_comms.resetMaxSlots();
          m_comms.resetSlot();
          m_curr = 0;
        }

        void
        onInit(const IMC::VehicleFormation* maneuver)
        {
          (void) maneuver;

          // Set time slot configuration
          m_comms.setMaxSlots(participants());
          m_comms.setSlot(formation_index());

          // Change state to LeaderSetup
          debug("Starting leader setup...");
          setLeaderSetup();
        }

        void
        setLeaderSetup(void)
        {
          setControl(IMC::CL_NONE);
          m_ls_state = LS_SEND_LEADER;
          m_ls_idx = 0;
          m_ls_retries = c_ls_max_retries;
          m_ls_timeout.setTop(m_args.leader_setup_timeout);
          m_state = SM_LEADER_SETUP;

          if (isLeader())
            m_leader_id = getSystemId();
          else
            m_leader_id = IMC::AddressResolver::invalid();

          debug("Changing state to LEADER_SETUP");
        }

        void
        leaderSetup()
        {
          if (isLeader())
            sendLeader();
          else
            waitForLeader();
        }

        void
        sendLeader(void)
        {
          switch (m_ls_state)
          {
            case LS_SEND_LEADER:
            {
              if (m_ls_retries == 0)
              {
                signalError(String::str("Timedout setting up leader with %s", resolveSystemId(participant(m_ls_idx).vid)));
                return;
              }

              if (m_ls_idx == formation_index())
                m_ls_idx++;

              const Participant& part = participant(m_ls_idx);
              std::string part_name = resolveSystemId(part.vid);
              trace("Sending code LEADER to %s...", part_name.c_str());
              m_comms.sendLeader(part_name);

              expectAck(part.vid);
              m_ls_state = LS_ACK;
            }
            break;
            
            case LS_ACK:
            {
              if (m_ack_timeout.overflow())
              {
                m_ls_retries--;
                m_ls_state = LS_SEND_LEADER;
                return;
              }

              if (gotAck())
              {
                m_ls_idx++;
                if ((size_t)m_ls_idx >= participants())
                {
                  debug("Leader setup done. Leader is %s", resolveSystemId(m_leader_id));
                  sendToFirstPoint();
                  return;
                }

                m_ls_retries = c_ls_max_retries;
                m_ls_state = LS_SEND_LEADER;
              }
            }
            break;
            
            default:
              break;
          }
        }

        void
        waitForLeader(void)
        {
          if (m_ls_timeout.overflow())
          {
            signalError(DTR("Timedout waiting for leader id"));
            return;
          }

          if (m_leader_id != IMC::AddressResolver::invalid())
          {
            debug("Leader setup done. Leader is %s", resolveSystemId(m_leader_id));
            sendToFirstPoint();
            return;
          }
        }

        void
        sendToFirstPoint(void)
        {
          // Send to first point
          setControl(IMC::CL_PATH);

          TPoint start;
          start.x = m_estate.x;
          start.y = m_estate.y;
          start.z = m_estate.depth;

          TPoint first = point(0, formation_index());
          desiredPath(start, first, getSpeed(), getSpeedUnits());

          // Change state to moving
          m_state = SM_MOVING;
          debug("Changing state to MOVING");
        }

        void
        setStartSetup(void)
        {
          setControl(IMC::CL_NONE);
          m_ss_timeout.setTop(m_args.start_setup_timeout);
          m_ss_send_ready.setTop(m_args.send_ready_interval);
          m_ss_start = false;
          
          m_ready_state.clear();
          for(size_t idx = 0; idx < participants(); idx++)
          {
            if ((int)idx == formation_index())
              continue;

            m_ready_state[participant(idx).vid] = false;
          }

          m_state = SM_START_SETUP;
          debug("Changing state to START_SETUP");
        }

        void
        startSetup(void)
        {
          if (m_ss_timeout.overflow())
          {
            signalError("Timedout waiting for start");
            return;
          }

          if (isLeader())
          {
            // Leader waits to receive code READY from all participants
            if (isFormationReady())
            {
              trace("Sending code START in broadcast");
              m_comms.sendStart("broadcast", Time::Clock::getSinceEpoch());
              setControl(IMC::CL_PATH);
              sendToNextPoint();
              debug("Start setup done");
              return;
            }
          }
          else
          {
            // Followers send code READY to leader
            if (m_ss_send_ready.overflow())
            {
              std::string leader_name = resolveSystemId(m_leader_id);
              trace("Sending code READY to %s", leader_name.c_str());
              m_comms.sendReady(leader_name);
              m_ss_send_ready.reset();
            }

            // Followers wait for code START from leader
            if (m_ss_start)
            {
              setControl(IMC::CL_PATH);
              sendToNextPoint();
              debug("Start setup done");
              return;
            }
          }
        }

        bool
        isFormationReady(void)
        {
          for (const auto& entry : m_ready_state)
          {
            if (!entry.second)
              return false;
          }

          return true;
        }

        void
        sendToNextPoint(void)
        {
          if (m_curr < 1)
            return;
          
          TPoint prev = point(m_curr - 1, formation_index());
          TPoint prev_virtual = point(m_curr - 1);
          TPoint next = point(m_curr, formation_index());
          TPoint next_virtual = point(m_curr);

          double distance = norm(prev, next);
          double distance_virtual = norm(prev_virtual, next_virtual);
          setSpeedReference(distance / distance_virtual);

          // throw a leg of TPoints to be followed by the vehicle
          desiredPath(prev, next, m_speed_ref, getSpeedUnits());

          m_state = SM_MOVING;
          debug("Changing state to MOVING");
        }

        void
        onUpdate(int f_index, const IMC::RemoteState& rstate)
        {
          (void) f_index;
          (void) rstate;
        }

        void
        step(const IMC::EstimatedState& estate)
        {
          m_estate = estate;
        }

        void
        onPathCompletion(void)
        {
          ++m_curr;

          // if the current waypoint is the last, then all is done
          if ((size_t)m_curr == trajectory_points())
          {
            signalCompletion();
            return;
          }

          if (m_curr == 1)
          {
            debug("Setting up start...");
            setStartSetup();
            return;
          }
          
          sendToNextPoint();
        } // End of function onPathCompletion

        void
        onStateReport()
        {
          switch (m_state)
          {
            case SM_IDLE:
              break;
            case SM_LEADER_SETUP:
              leaderSetup();
              break;
            case SM_START_SETUP:
              startSetup();
              break;
            case SM_MOVING:
              break;
            default:
              break;
          }

          m_comms.run();
        }
      };
    }
  }
}

DUNE_TASK
