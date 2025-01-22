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
        //! Acknowledgement timer
        Time::Counter<double> m_ack_timer;
        //! Received ack id
        uint16_t m_rcv_ack_id;
        //! Leader id
        unsigned int m_leader_id;

        Task(const std::string& name, DUNE::Tasks::Context& ctx):
          BasicSwarm(name, ctx),
          m_queue(c_queue_size),
          m_comms(this),
          m_rcv_ack_id(IMC::AddressResolver::invalid()),
          m_leader_id(IMC::AddressResolver::invalid())
        {
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
          m_ack_timer.setTop(10);
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
            default:
              debug("Invalid acoustic code: %u", msg->data[1]);
              break;
          }
        }

        void
        recvAck(const IMC::UamRxFrame* msg)
        {
          m_rcv_ack_id = resolveSystemName(msg->sys_src);
        }

        void
        recvLeader(const IMC::UamRxFrame* msg)
        {
          m_leader_id = resolveSystemName(msg->sys_src);
          m_comms.sendAck(msg->sys_src);
        }

        //! This is blocking!
        bool
        waitAck(uint16_t sys_id)
        {
          m_rcv_ack_id = IMC::AddressResolver::invalid();
          m_ack_timer.reset();
          while (!m_ack_timer.overflow())
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
          (void)maneuver;

          m_prev = point(0, formation_index()); //Initiate m_prev as first waypoint
          m_prev_virtual = point(0);

          // Initiate waypoint counter at zero
          m_curr = 1;

          // Setup leader
          if (isLeader())
            sendLeader();
          else
            waitForLeader();

        }

        void
        sendLeader()
        {
          for(size_t i = 0; i < participants(); i++)
          {
            if ((int)i == formation_index())
              continue;

            const Participant& part = participant(i);

            int retries = 0;
            while (retries < 5)
            {
              m_comms.sendLeader(resolveSystemId(part.vid));
              if (waitAck(part.vid))
                break;
              else
                retries++;
            }
          }
        }

        void
        waitForLeader()
        {
          Time::Counter<double> wait;
          wait.setTop(40);
          while (!wait.overflow())
          {
            if (m_leader_id != IMC::AddressResolver::invalid())
              return;
          }

          signalError(DTR("Timedout waiting for leader id"));
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
          TPoint next;
          TPoint next_virtual;

          // If it is the first time the function on Path Completion is being called
          if (m_curr == 0)
          {
            m_prev.x = m_estate.x;
            m_prev.y = m_estate.y;
            m_prev.z = m_estate.depth;
            m_prev.t = 0.0;
          }

          // if the current waypoint is the last, then all is done
          if ((size_t)m_curr == trajectory_points())
          {
            signalCompletion(); // All done
            return; // All done
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
        } // End of function onPathCompletion

        //! Function for finding values of x and y through linear interpolation
        Matrix
        findXY(IMC::EstimatedState a, IMC::EstimatedState b, double t)
        {
          double xa_ts = linearInterpolation(LinIntParam<double>(a.x,
                                                                b.x,
                                                                a.getTimeStamp(),
                                                                b.getTimeStamp(),
                                                                t));
          double ya_ts = linearInterpolation(LinIntParam<double>(a.y,
                                                                b.y,
                                                                a.getTimeStamp(),
                                                                b.getTimeStamp(),
                                                                t));
          double pa_ts[2] = {xa_ts, ya_ts};

          return Matrix(pa_ts, 2, 1);
        }

        //! Function to convert meters per second to actuation using a linearized relation
        //! between the two
        double
        toActuation(double desired_mps, double max_mps, double max_act, double min_mps, double min_act)
        {
          return (desired_mps - min_mps) * (max_act - min_act) / (max_mps - min_mps) + min_act;
        }
      };
    }
  }
}

DUNE_TASK
