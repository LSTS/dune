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
#include "Error.hpp"

namespace Navigation
{
  //! Insert short task description here.
  //!
  //! Insert explanation on task behaviour here.
  //! @author João Bogas
  namespace trilateration
  {
    using DUNE_NAMESPACES;

    static double ZERO = 1e-9;

    struct Task: public DUNE::Tasks::Task
    {
      typedef void (Task::*Printable) (const char*, ...);

      //! Task Arguments
      struct Arguments 
      {
        bool active;
        bool setPoint;
        //! Name of acoustic system to ping
        std::string acos_name;
      };

      //! Task arguments
      Arguments m_args;
      //! Last 3 valid points
      std::array<Sphere, 3> m_data;
      //! Current size of m_data
      unsigned m_data_size;
      //! Solution
      Point m_sol;
      //! Estimated State
      IMC::EstimatedState* m_lastPoint;
      //! Distance associated with last Estimated State
      double m_lastDst;
      //! Results
      Point m_res1, m_res2;
      //! FE get current point as solution
      bool m_getSol;
      //! Watchdog
      Counter<double> m_wdog;
      //! Get new point
      bool m_newPoint;
      //! Get new distance
      bool m_newDistance;
      //! Filter iteration
      unsigned m_iter;

      //! Constructor.
      //! @param[in] name task name.
      //! @param[in] ctx context.
      Task(const std::string& name, Tasks::Context& ctx):
        DUNE::Tasks::Task(name, ctx), 
        m_data_size(0), 
        m_lastPoint(nullptr),
        m_lastDst(-1),
        m_getSol(false),
        m_iter(0)
      {
        m_res1.setNaN();
        m_res2.setNaN();

        paramActive(Tasks::Parameter::SCOPE_GLOBAL,
                    Tasks::Parameter::VISIBILITY_USER);

        param("Start", m_args.active)
        .defaultValue("false")
        .visibility(Tasks::Parameter::VISIBILITY_USER)
        //.scope(Tasks::Parameter::SCOPE_GLOBAL)
        .description("Task activation");

        param("Get solution", m_args.setPoint)
        .defaultValue("false")
        .visibility(Tasks::Parameter::VISIBILITY_USER)
        //.scope(Tasks::Parameter::SCOPE_GLOBAL)
        .description("Get current device position as solution");

        param("Acoustic name", m_args.acos_name)
        .description("Get acoustic name to ping");

        bind<IMC::EstimatedState>(this);
        bind<IMC::UamRxRange>(this);
      }

      //! Update internal state with new parameter values.
      void
      onUpdateParameters(void)
      {
        if (paramChanged(m_args.active))
        {
          war("Task set to %s", m_args.active ? "active" : "deactivate" );
          m_data_size = 0;
          m_res1.setNaN();
          m_res2.setNaN();
          m_wdog.reset();
        }
        if (paramChanged(m_args.setPoint))
        {
          war("SetPoint set to %s", m_args.setPoint ? "true" : "false" );
          if (m_args.setPoint)
            m_getSol = true;
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
        setEntityState(IMC::EntityState::ESTA_NORMAL, Status::Code::CODE_ACTIVATING);
      }

      //! Release resources.
      void
      onResourceRelease(void)
      {
        Memory::clear(m_lastPoint);
      }

      void
      getArea()
      {
        if (!m_args.active)
          return;

        if(m_data_size < 3)
          return;

        Plane pl_12, pl_23; // plane that contains a circle of interception between two spheres
        getIntersection(m_data[0], m_data[1], pl_12);
        getIntersection(m_data[1], m_data[2], pl_23);

        Line ln;
        getIntersection(pl_12, pl_23, ln);

        Plane centers = Plane(m_data[0].point, m_data[1].point, m_data[2].point);
        Point origin;
        getIntersection(ln, centers, origin);
        double delta = sqrt(pow(m_data[0].distance,2) - pow(Point::norm(origin,m_data[0].point),2));
        if (isnan(delta))
          throw NoInterception("Between Sphere and line-origin");

        Point sol1, sol2;
        sol1 = origin + delta*ln.vec;
        sol2 = origin - delta*ln.vec;

        // they should only be NaN before first filter
        if (m_res1.isNaN() && m_res2.isNaN())
        {
          m_res1 = sol1;
          m_res2 = sol2;
          m_iter++;
          inf("Iter %d", m_iter);
          return;
        }
        if (m_res1.norm(sol2) < m_res1.norm(sol1))
          sol1.exchange(sol2);

        if (m_res1.norm(sol1) < m_res2.norm(sol2)+2)
        {
          m_res1 = (m_res1*m_iter + sol1 )/ (m_iter+1);
          m_iter++;
          //debug("Result filtered ", m_res1, &Task::war);
          m_res2.setInf();
          return;
        }
        if (m_res2.norm(sol2) < m_res1.norm(sol1)+2)
        {
          m_res1.exchange(m_res2);
          m_res1 = (m_res1*m_iter + sol2 )/ (m_iter+1);
          m_iter++;
          //debug("Result filtered ", m_res1, &Task::war);
          m_res2.setInf();
          return;
        }

        m_res1 = (m_res1*m_iter + sol1 )/ (m_iter+1);
        m_res2 = (m_res2*m_iter + sol2 )/ (m_iter+1);
        m_iter++;
        debug_Point("Result 1 ", m_res1, Bind<Printable>(*this, &Task::war));
        debug_Point("Result 2 ", m_res2, Bind<Printable>(*this, &Task::war));
      }

      void
      updatePoints(double x_pos, double y_pos, double z_pos, double new_distance)
      {
        m_data[0] = m_data[1];
        m_data[1] = m_data[2];
        m_data[2].setPoint(x_pos, y_pos, z_pos);
        m_data[2].distance = new_distance;
        m_data_size++;

        m_lastPoint = nullptr;
        m_lastDst = -1;
        debug_Point("New Point: ", m_data[2].point, Bind<Printable>(*this, &Task::inf));
        inf("With distance %lf", new_distance);
      }

      void
      updatePoints(const EstimatedState* pt, double new_distance)
      {
        updatePoints(pt->x, pt->y, pt->z, new_distance);
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
          
          m_lastDst = msg->value;
          m_newDistance = false;
        }
      }

      void
      consume(const IMC::EstimatedState* msg)
      {
        if (m_newPoint)
        {
          m_lastPoint = msg->clone();
          m_newPoint = false;
        }
      }

      void
      ping()
      {
        IMC::UamTxFrame tx;
        tx.setDestination(getSystemId());
        tx.sys_dst = m_args.acos_name;
        tx.flags = IMC::UamTxFrame::UTF_ACK;
        tx.data.push_back(0);
        dispatch(tx);
      }

      //! Main loop.
      void
      onMain(void)
      {
        m_wdog.setTop(1);
        m_newPoint = false;
        m_newDistance = false;
        while (!stopping())
        {
          //? If timeout occurs and it still has msgs ?
          waitForMessages(0.1);
          if (m_wdog.overflow())
          {
            m_newPoint = true;
            m_newDistance = true;
            ping();
            m_wdog.reset();
          }
          if ((m_lastPoint != nullptr) && (m_lastDst != -1))
          {
            updatePoints(m_lastPoint, m_lastDst);
            try
            {
              getArea();
            }
            catch(const TwoSolutions& e)
            {
              war(DTR("%s"), e.what());
            }
            catch(const std::exception& e)
            {
              err(DTR("%s"), e.what());
            }
          }
        }
      }
    };
  }
}

DUNE_TASK
