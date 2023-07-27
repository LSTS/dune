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

    //static double ZERO = 1e-9;

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
          debug_Point("Result 1 ", m_res1, Bind<Printable>(*this, &Task::war));
          debug_Point("Result 2 ", m_res2, Bind<Printable>(*this, &Task::war));
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

      int min_pos(double* init, double* end)
      {
        int pos = -1, curr_pos = 0;
        double min = DBL_MAX;

        while (init <= end)
        {
          if (*init < min)
          {
            min = *init;
            pos = curr_pos;
          }
          init++;
          curr_pos++;
        }
        return pos;
      }

      void
      method_2()
      {
        //! Move referential so that 
        //! p0 is at (0,0,0)
        //! p1 is at (d,0,0)
        //! p2 is at (x,y,0)

        double d = Point::norm(m_data[1].point, m_data[0].point);

        // x unit vector of new referential
        Point vec_x = m_data[1].point - m_data[0].point;
        vec_x.normalize();

        Point p2_a = m_data[2].point - m_data[0].point;
        double x_2 = p2_a*vec_x;
        double dst_p3 = Point::norm(m_data[0].point, m_data[2].point);
        double y_2 = sqrt(sqr(dst_p3) - sqr(x_2)); //? is y positive or negative

        // y unit vector of new referential
        // c3 = c1 + vec_x * x_2 + vec_y * y_2
        Point vec_y = ((m_data[2].point - m_data[0].point) - vec_x*x_2)/y_2;

        const Circle2d center_0(0, 0, m_data[0].distance);
        const Circle2d center_1(d, 0, m_data[1].distance);
        const Circle2d center_2(x_2, y_2, m_data[2].distance);

        Point2d a1, a2, b1, b2, c1, c2;
        getIntersection(center_0, center_1, a1, a2);
        getIntersection(center_0, center_2, b1, b2);
        getIntersection(center_1, center_2, c1, c2);

        double distances[4];
        distances[0] = Point2d::norm(a1, b1);
        distances[1] = Point2d::norm(a1, b2);

        distances[2] = Point2d::norm(a2, b1);
        distances[3] = Point2d::norm(a2, b2);

        Point2d triangle[3];
        switch (min_pos(&distances[0], &distances[3]))
        {
        case 0:
          triangle[0] = a1;
          triangle[1] = b1;
          break;
        
        case 1:
          triangle[0] = a1;
          triangle[1] = b2;
          break;
        
        case 2:
          triangle[0] = a2;
          triangle[1] = b1;
          break;
        
        case 3:
          triangle[0] = a2;
          triangle[1] = b2;
          break;
        
        default:
          throw std::runtime_error("Invalid min_pos() return value");
        }

        if (Point2d::norm(triangle[0], c1) < Point2d::norm(triangle[0], c2))
          triangle[2] = c1;
        else
          triangle[2] = c2;

        Point3d vert[3];
        vert[0] = transform(triangle[0], vec_x, vec_y, m_data[0].point);
        vert[1] = transform(triangle[1], vec_x, vec_y, m_data[0].point);
        vert[2] = transform(triangle[2], vec_x, vec_y, m_data[0].point);

        debug_Point("triangle: ", vert[0], Bind<Printable>(*this, &Task::war)); // Intersection circle 0 and 1
        debug_Point("triangle: ", vert[1], Bind<Printable>(*this, &Task::war)); // Intersection circle 0 and 2
        debug_Point("triangle: ", vert[2], Bind<Printable>(*this, &Task::war)); // Intersection circle 1 and 2

        // debug_Point("triangle: ", triangle[0], Bind<Printable>(*this, &Task::war)); // Intersection circle 0 and 1
        // debug_Point("triangle: ", triangle[1], Bind<Printable>(*this, &Task::war)); // Intersection circle 0 and 2
        // debug_Point("triangle: ", triangle[2], Bind<Printable>(*this, &Task::war)); // Intersection circle 1 and 2

        Point2d avg = (triangle[0]+triangle[1]+triangle[2])/3;
        double dst[3];
        dst[0] = avg.norm(triangle[0]);
        dst[1] = avg.norm(triangle[1]);
        dst[2] = avg.norm(triangle[2]);
        double max = MAX(MAX(dst[0], dst[1]), dst[2]);

        Point3d center = transform(avg, vec_x, vec_y, m_data[0].point);
        Sphere sol;
        sol.point = center;
        sol.distance = max;
        debug_Point("Approximated ", sol, Bind<Printable>(*this, &Task::war));
      }

      Point3d
      transform(const Point2d& pt, const Point3d& x_vector, const Point3d& y_vector, const Point3d& offset)
      {
        return pt.x*x_vector + pt.y*y_vector + offset;
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
        /* m_wdog.setTop(4);
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
              method_2();
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
        }*/
        Sphere s1 = Sphere( 1,  2,  0,  2.22);
        Sphere s2 = Sphere(-3,  1,  0,  3.13);
        Sphere s3 = Sphere(-2, -2,  0,  2.8);
        m_data.push_back(s1);
        m_data.push_back(s2);
        m_data.push_back(s3);
        method_2();
        exit(1);
        /*
        Sol:
          1-2 -> (0.83, 3.26, 0)
          1-2 -> (0.02, 0.03, 0)
        */
      }
    };
  }
}

DUNE_TASK
