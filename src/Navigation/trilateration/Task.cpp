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
      std::vector<Sphere> m_data;
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
          m_data.clear();
          reset_data();
          m_res1.setNaN();
          m_res2.setNaN();
          m_wdog.reset();
        }
        /* if (paramChanged(m_args.setPoint))
        {
          war("SetPoint set to %s", m_args.setPoint ? "true" : "false" );
          if (m_args.setPoint)
            m_getSol = true;
        } */
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
        reset_data();
        m_data.clear();
      }

      void
      getArea()
      {
        if (!m_args.active)
          return;

        if(m_data.size() < 3)
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
          throw Retry();

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
      method_2()
      {
        //! Move referential so that 
        //! p0 is at (0,0,0)
        //! p1 is at (d,0,0)
        //! p2 is at (x,y,0)
        Point p0(0, 0, 0);

        double d = Point::norm(m_data[1].point, m_data[0].point);
        Point p1(d, 0, 0);

        Point x_vec = m_data[1].point - m_data[0].point;
        x_vec.normalize();

        Point p2_a = m_data[2].point - m_data[0].point;
        double x = p2_a*x_vec;
        double dst_p3 = Point::norm(m_data[0].point, m_data[2].point);
        double y = sqrt(dst_p3*dst_p3 - x*x);
        Point p2_b(x,y,0);
      }

      bool
      updatePoints(double x_pos, double y_pos, double z_pos, double new_distance)
      {
        Sphere n_data(x_pos, y_pos, z_pos, new_distance);
        if (!checkIntersection(n_data, m_data[0]) || !checkIntersection(n_data, m_data[1]))
        {
          inf("Not adding point");
          return false;
        }
        m_data.pop_back();
        m_data.insert(m_data.begin(), n_data);

        debug_Point("Insert new: ", n_data, Bind<Printable>(*this, &Task::war));
        return true;
      }

      bool
      updatePoints(const EstimatedState* pt, double new_distance)
      {
        if (m_data.size() >= 3)
        {
          reset_data();
          return updatePoints(pt->x, pt->y, pt->z, new_distance);
        }
        else if (m_data.empty())
        {
          m_data.emplace_back(pt->x, pt->y, pt->z, new_distance);
          debug_Point("Insert new: ", m_data[0], Bind<Printable>(*this, &Task::war));
        }
        else
        {
          Sphere n_data(pt->x, pt->y, pt->z, new_distance);
          for (size_t i = 0; i < m_data.size(); i++)
          {
            if(!checkIntersection(n_data, m_data[i]))
            {
              reset_data();
              return false;
            }
          }

          m_data.insert(m_data.begin(), n_data);
          debug_Point("Insert new: ", n_data, Bind<Printable>(*this, &Task::war));
        }

        reset_data();
        return true;
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

      void
      reset_data()
      {
        Memory::clear(m_lastPoint);
        m_lastDst = -1;
      }

      //! Main loop.
      void
      onMain(void)
      {
        m_wdog.setTop(4);
        m_newPoint = false;
        m_newDistance = false;
        while (!stopping())
        {
          //? If timeout occurs and it still has msgs ?
          waitForMessages(0.1);
          if (m_wdog.overflow() && m_args.active)
          {
            m_newPoint = true;
            m_newDistance = false;
            reset_data();
            m_wdog.reset();
          }

          if ((m_lastPoint != nullptr) && (m_lastDst != -1))
          {
            if(!updatePoints(m_lastPoint, m_lastDst))
              continue;

            try
            {
              getArea();
            }
            catch(const Retry& e)
            {
              war("%s", e.what());
              //method_2();
            }
            catch(const TwoSolutions& e)
            {
              war("%s", e.what());
            }
            catch(const std::exception& e)
            {
              err("%s", e.what());
            }
          }
        }
      }
    };
  }
}

DUNE_TASK
