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
        //! Circular Buffer fixed size
        static const int c_queue_size = 20;
        //! Number of current waypoint number
        int m_curr;
        //! Previously assigned participant waypoint
        TPoint m_prev;
        //! Previously assigned virtual waypoint
        TPoint m_prev_virtual;
        //! Circular buffer used to save last few estimated states every second
        Utils::CircularBuffer<IMC::EstimatedState> m_queue;
        //! Task arguments
        Arguments m_args;
        //! Acoustic protocol
        AcousticProtocol m_comms;
        //! Received ack id
        uint16_t m_rcv_ack_id;
        //! Leader id
        unsigned int m_leader_id;
        //! Ready state of participants
        std::map<int, bool> m_ready_state;
        //! Start flag
        bool m_start;
        //! Send next point
        bool m_send_next;

        Task(const std::string& name, DUNE::Tasks::Context& ctx):
          BasicSwarm(name, ctx),
          m_queue(c_queue_size),
          m_comms(this),
          m_rcv_ack_id(IMC::AddressResolver::invalid()),
          m_leader_id(IMC::AddressResolver::invalid()),
          m_start(false),
          m_send_next(false)
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
          m_rcv_ack_id = resolveSystemName(msg->sys_src);
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
          if (idx == 0xFFFF)
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
          m_start = true;
        }

        //! This is blocking!
        bool
        waitAck(uint16_t sys_id)
        {
          m_rcv_ack_id = IMC::AddressResolver::invalid();
          Time::Counter<double> ack_timer(m_args.ack_timeout);
          while (!ack_timer.overflow())
          {
            waitForMessages(1.0);

            if (sys_id == m_rcv_ack_id)
            {
               m_rcv_ack_id = IMC::AddressResolver::invalid();
               return true;
            }
          }

          m_rcv_ack_id = IMC::AddressResolver::invalid();
          return false;
        }

        //! Close matlab logged vectors
        void
        onReset(void)
        {
        }

        void
        onInit(const IMC::VehicleFormation* maneuver)
        {
          // Send next point
          m_send_next = false;

          //! Reset ready state (Leader)
          if (isLeader())
            resetReadyState();

          //! Reset start flag
          m_start = false;

          m_prev = point(0, formation_index()); //Initiate m_prev as first waypoint
          m_prev_virtual = point(0);

          // Setup leader
          debug("Starting leader setup...");
          if (isLeader())
            sendLeader();
          else
            waitForLeader();
          debug("Leader setup done. Leader is %s", resolveSystemId(m_leader_id));

          // Send to first point
          setControl(IMC::CL_PATH);

          TPoint start;
          start.x = m_estate.x;
          start.y = m_estate.y;
          // should prepare for altitude??
          start.z = m_estate.depth;

          desiredPath(start, m_prev, maneuver->speed, maneuver->speed_units);

          // Initiate waypoint counter at one
          m_curr = 1;
        }

        void
        sendLeader()
        {
          for(size_t i = 0; i < participants(); i++)
          {
            if ((int)i == formation_index())
              continue;

            const Participant& part = participant(i);

            int retries = 5;
            while (retries > 0)
            {
              std::string part_name = resolveSystemId(part.vid);
              trace("Sending code LEADER to %s...", part_name.c_str());
              m_comms.sendLeader(part_name);
              if (waitAck(part.vid))
                break;
              else
                retries--;
            }
          }
        }

        void
        waitForLeader()
        {
          Time::Counter<double> wait(m_args.leader_setup_timeout);
          while (!wait.overflow())
          {
            waitForMessages(1.0);

            if (m_leader_id != IMC::AddressResolver::invalid())
              return;
          }

          signalError(DTR("Timedout waiting for leader id"));
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
        resetReadyState()
        {
          m_ready_state.clear();
          for(size_t idx = 0; idx < participants(); idx++)
          {
            if ((int)idx == formation_index())
              continue;

            war("INDEX: %d", idx);
            m_ready_state[idx] = false;
          } 
        }

        void
        onUpdate(int f_index, const IMC::RemoteState& rstate)
        {
          
        }

        void
        step(const IMC::EstimatedState& estate)
        {
          // save Estimated States into queue everytime formation_control runs
          // ... queue is assumed to be a collection of Estimated States of the present vehicle with 1.0 sec step between timestamps

          if (!m_queue.getSize()) // also means that it is the first time this function was called
          {
            m_queue.add(estate);
          }
          // this statement compares the received estimated_state with the last one saved in the queue
          else if (estate.getTimeStamp() - m_queue(m_queue.getSize() - 1).getTimeStamp() >= 1.0)
          {
            m_queue.add(estate);
          }

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

          m_send_next = true;
        } // End of function onPathCompletion

        void
        onStateReport()
        {
          if (!m_send_next)
            return;

          TPoint next;
          TPoint next_virtual;

          // Synchronize on first point
          if (m_curr == 1)
          {
            debug("Setting up start...");
            setControl(IMC::CL_NONE);
            Time::Counter<double> timeout(m_args.start_setup_timeout);
            Time::Counter<double> send_ready(m_args.send_ready_interval);
            while(!(m_start || timeout.overflow()))
            {
              waitForMessages(1.0);
              
              if (!isLeader())
              {
                if (send_ready.overflow())
                {
                  trace("Sending code READY");
                  m_comms.sendReady(resolveSystemId(m_leader_id));
                  send_ready.reset();
                }
              }
              else
              {
                if (isFormationReady())
                {
                  trace("Sending code START");
                  m_start = true;
                  m_comms.sendStart("broadcast");
                  break;
                }
              }
            }
            setControl(IMC::CL_PATH);
            debug("Start setup done");
          }

          // the trajectory given to the present vehicle will always be the original one
          // offset by a certain amount m_delta, updated when a new message is received
          // next.x = point(m_curr,formation_index()).x + m_delta(0);
          // next.y = point(m_curr,formation_index()).y + m_delta(1);
          next = point(m_curr, formation_index());
          next_virtual = point(m_curr);

          double distance = getRange(m_prev, next);
          double distance_virtual = getRange(m_prev_virtual, next_virtual);
          double speed = (distance / distance_virtual) * getSpeed();

          // throw a leg of TPoints to be followed by the vehicle
          desiredPath(m_prev, next, speed, getSpeedUnits());

          ++m_curr;
          m_prev = next;
          m_send_next = false;
        }
      };
    }
  }
}

DUNE_TASK
