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
      };

      struct Task: public DUNE::Maneuvers::BasicSwarm
      {
        //! last state update
        IMC::EstimatedState m_estate;
        //! Number of current waypoint number
        int m_curr;
        //! Previously assigned participant waypoint
        TPoint m_prev;
        //! Previously assigned virtual waypoint
        TPoint m_prev_virtual;
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
        //! Send next point
        bool m_send_next;
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
          m_comms(this),
          m_ack_id_rcv(IMC::AddressResolver::invalid()),
          m_ack_id_expected(IMC::AddressResolver::invalid()),
          m_leader_id(IMC::AddressResolver::invalid()),
          m_send_next(false),
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

          bind<IMC::UamRxFrame>(this, true);
        }

        void
        onUpdateParameters(void)
        {
          BasicSwarm::onUpdateParameters();

          if (isLeader())
            m_leader_id = getSystemId();
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

          int idx = formation_index(resolveSystemName(msg->sys_src));
          if ((unsigned)idx == IMC::AddressResolver::invalid())
          {
            war("Received code READY from non-participant: %s", msg->sys_src.c_str());
            return;
          }

          std::map<int, bool>::iterator itr = m_ready_state.find(idx);
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

          trace("Received code START from: %s", msg->sys_src.c_str());
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
        gotAck()
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
        }

        void
        onInit(const IMC::VehicleFormation* maneuver)
        {
          (void) maneuver;

          // Change state to LeaderSetup
          debug("Starting leader setup...");
          setLeaderSetup();
        }

        void
        setLeaderSetup()
        {
          setControl(IMC::CL_NONE);
          m_ls_state = LS_SEND_LEADER;
          m_ls_idx = 0;
          m_ls_retries = c_ls_max_retries;
          m_ls_timeout.setTop(m_args.leader_setup_timeout);
          m_state = SM_LEADER_SETUP;
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
        sendLeader()
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
        waitForLeader()
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
        sendToFirstPoint()
        {
          // Send to first point
          setControl(IMC::CL_PATH);

          TPoint start;
          start.x = m_estate.x;
          start.y = m_estate.y;
          start.z = m_estate.depth;

          // Initiate m_prev as first waypoint
          m_prev = point(0, formation_index());
          m_prev_virtual = point(0);

          desiredPath(start, m_prev, getSpeed(), getSpeedUnits());

          // Initiate waypoint counter at one
          m_curr = 1;

          // Change state to moving
          m_state = SM_MOVING;
          debug("Changing state to MOVING");
        }

        void
        setStartSetup()
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

            m_ready_state[idx] = false;
          }

          m_state = SM_START_SETUP;
          debug("Changing state to START_SETUP");
        }

        void
        startSetup()
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
              m_comms.sendStart("broadcast");
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
        isFormationReady()
        {
          std::map<int, bool>::iterator itr;
          for (itr = m_ready_state.begin(); itr != m_ready_state.end(); itr++)
          {
            if (itr->second == false)
              return false;
          }

          return true;
        }

        void
        sendToNextPoint()
        {
          TPoint next;
          TPoint next_virtual;

          next = point(m_curr, formation_index());
          next_virtual = point(m_curr);

          double distance = getRange(m_prev, next);
          double distance_virtual = getRange(m_prev_virtual, next_virtual);
          double speed = (distance / distance_virtual) * getSpeed();

          // throw a leg of TPoints to be followed by the vehicle
          desiredPath(m_prev, next, speed, getSpeedUnits());

          ++m_curr;
          m_prev = next;
          m_prev_virtual = next_virtual;

          m_state = SM_MOVING;
          debug("Changing state to MOVING");
        }

        void
        onUpdate(int f_index, const IMC::RemoteState& rstate)
        {
          
        }

        void
        step(const IMC::EstimatedState& estate)
        {
          m_estate = estate;
        }

        void
        onPathCompletion(void)
        {
          // if the current waypoint is the last, then all is done
          if ((size_t)m_curr == trajectory_points())
          {
            signalCompletion(); // All done
            return; // All done
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
        }
      };
    }
  }
}

DUNE_TASK
