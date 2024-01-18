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
// Author: João Bogas                                                       *
//***************************************************************************

// DUNE headers.
#include <DUNE/DUNE.hpp>

// ISO C++ headers.
#include <cmath>
#include <functional>

// local headers
#include "Point.hpp"
#include "Approx.hpp"

namespace Navigation
{
  //! Insert short task description here.
  //!
  //! Insert explanation on task behaviour here.
  //! @author João Bogas
  namespace Trilateration
  {
    using DUNE_NAMESPACES;

    struct Task: public DUNE::Tasks::Task
    {
      //! Task Arguments.
      struct Arguments 
      {
        //! Name of acoustic system to ping.
        std::string acos_name;
        //! Start acostic pings.
        bool active;
        //! Ping interval.
        double interval;
      };

      //! Task arguments.
      Arguments m_args;
      //! Watchdog.
      Counter<double> m_wdog;
      //! Last Estimated State.
      IMC::EstimatedState* m_lastPoint;
      //! Distance associated with last Estimated State.
      double m_lastDst;
      //! Gradient Descent algorithm.
      Approx* m_approx;
      //! Flag to get new point.
      bool m_newPoint;
      //! Flag to get new distance.
      bool m_newDistance;

      //! Constructor.
      //! @param[in] name task name.
      //! @param[in] ctx context.
      Task(const std::string& name, Tasks::Context& ctx):
        DUNE::Tasks::Task(name, ctx),  
        m_lastPoint(nullptr),
        m_lastDst(-1),
        m_approx(nullptr),
        m_newPoint(false),
        m_newDistance(false)
      {
        paramActive(Tasks::Parameter::SCOPE_GLOBAL,
                    Tasks::Parameter::VISIBILITY_USER);

        param("Acoustic name", m_args.acos_name)
        .description("Get acoustic name to ping");

        param("Start", m_args.active)
        .defaultValue("false")
        .visibility(Tasks::Parameter::VISIBILITY_USER)
        .scope(Tasks::Parameter::SCOPE_GLOBAL)
        .description("Start acoustic ping");

        param("Ping interval", m_args.interval)
        .description("Acoustic ping interval");

        bind<IMC::EstimatedState>(this);
        bind<IMC::UamRxRange>(this);
      }

      //! Update internal state with new parameter values.
      void
      onUpdateParameters(void)
      {
        if (paramChanged(m_args.active))
        {
          if (m_args.active)
            setEntityState(IMC::EntityState::ESTA_NORMAL, Status::Code::CODE_ACTIVE);
          else
            setEntityState(IMC::EntityState::ESTA_NORMAL, Status::Code::CODE_IDLE);

          if (m_approx)
            m_approx->clear();

          reset_ping();
          m_wdog.reset();
        }

        if (paramChanged(m_args.acos_name))
        {
          if (m_approx)
            m_approx->clear();

          reset_ping();
          m_wdog.reset();
        }
      }

      //! Reserve entity identifiers.
      void
      onEntityReservation(void)
      {
      }

      //! Resolve entity names.
      void
      onEntityResolution(void)
      {
      }

      //! Acquire resources.
      void
      onResourceAcquisition(void)
      {
      }

      //! Initialize resources.
      void
      onResourceInitialization(void)
      {
        m_approx = new Approx(7);
        m_wdog.setTop(m_args.interval);
        setEntityState(IMC::EntityState::ESTA_NORMAL, Status::Code::CODE_ACTIVATING);
      }

      //! Release resources.
      void
      onResourceRelease(void)
      {
        reset_ping();
        Memory::clear(m_approx);
      }

      void
      consume(const IMC::UamRxRange* msg)
      {
        if (m_newDistance)
        {
          if (msg->value < 0)
          {
            err("Invalid UamRxRange");
            return;
          }
          inf("Received new distance %lf", msg->value);
          m_lastDst = msg->value;
          m_newDistance = false;
        }
      }

      void
      consume(const IMC::EstimatedState* msg)
      {
        if (m_newPoint && !m_newDistance)
        {
          inf("Pinging %s", m_args.acos_name.c_str());
          ping();
          m_newDistance = true;
          m_lastPoint = msg->clone();
          m_newPoint = false;
        }
      }

      //! Insert points in approximation.
      bool
      updatePoints(const EstimatedState* pt, double new_distance)
      {
        m_approx->emplace(pt->x, pt->y, pt->z, new_distance);
        war("Insert new: %s", Sphere::print(pt->x, pt->y, pt->z, new_distance));
        reset_ping();
        return (m_approx->size() >= 5);
      }

      //! Ping system.
      void
      ping(void)
      {
        IMC::UamTxFrame tx;
        tx.setDestination(getSystemId());
        tx.sys_dst = m_args.acos_name;
        tx.flags = IMC::UamTxFrame::UTF_ACK;
        tx.data.push_back(0);
        dispatch(tx);
      }

      //! Reset ping data.
      void
      reset_ping(void)
      {
        Memory::clear(m_lastPoint);
        m_lastDst = -1;
      }

      //! Main loop.
      void
      onMain(void)
      {
        while (!stopping())
        {
          waitForMessages(0.1);
          if (m_wdog.overflow() && m_args.active)
          {
            m_newPoint = true;
            m_newDistance = false;
            reset_ping();
            m_wdog.reset();
          }

          if ((m_lastPoint != nullptr) && (m_lastDst != -1))
          {
            if(!updatePoints(m_lastPoint, m_lastDst))
              continue;

            Point3d sol = m_approx->run(20);
            war("Gradient descent %s", sol.print());
          }
        }
      }
    };
  }
}

DUNE_TASK
