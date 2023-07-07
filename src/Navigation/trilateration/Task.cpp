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
      //! Task Arguments
      struct Arguments 
      {
        bool active;
        bool setPoint;
      };

      typedef Point3d Point;

      //! Sphere
      struct Sphere
      {
        Point point;
        double distance;

        Sphere(): point(), distance(0)
        {}

        Sphere(double _x, double _y, double _z, double _dst): point(_x, _y, _z), distance(_dst)
        {}

        void
        setPoint(double _x, double _y, double _z)
        {
          point.x = _x;
          point.y = _y;
          point.z = _z;
        }
      };

      struct Circle
      {
        Point center;
        double radius;
        Point vector_n; // vector normal to the circle plan
        Point vector_i; // vector perpendicular to normal
      };

      struct Plane
      {
        Point pt;
        Point vec; // normal to the plane

        Plane()
        {}

        Plane(const Point3d& p1, const Point3d& p2, const Point3d& p3)
        {
          vec = Point::getPerpendicular(p1-p2, p1-p3);
          pt = p1;
        }

        Plane(const Point& _pt, const Point& _vec)
          : pt(_pt),
            vec(_vec)
        {}
      };

      struct Line
      {
        Point pt;
        Point vec;
      };

      //! Task arguments
      Arguments m_args;
      //! Last 3 valid points
      std::array<Sphere, 3> m_data;
      //! Current size of m_data
      int m_data_size;
      //! Solution
      Point m_sol;
      //! RE get current point as solution
      bool m_getSol;

      //! Constructor.
      //! @param[in] name task name.
      //! @param[in] ctx context.
      Task(const std::string& name, Tasks::Context& ctx):
        DUNE::Tasks::Task(name, ctx), m_data_size(0), m_getSol(false)
      {
        param("Active", m_args.active)
        .defaultValue("false")
        .visibility(Tasks::Parameter::VISIBILITY_USER)
        .scope(Tasks::Parameter::SCOPE_MANEUVER)
        .description("Task activation");

        param("Get solution", m_args.setPoint)
        .defaultValue("false")
        .visibility(Tasks::Parameter::VISIBILITY_USER)
        .scope(Tasks::Parameter::SCOPE_MANEUVER)
        .description("Get current device position as solution");

        bind<IMC::EstimatedState>(this);
        bind<IMC::Distance>(this);
      }

      //! Update internal state with new parameter values.
      void
      onUpdateParameters(void)
      {
        if (paramChanged(m_args.active))
          m_data_size = 0;
        if (paramChanged(m_args.setPoint))
          m_getSol = true;
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
      }

      //! Release resources.
      void
      onResourceRelease(void)
      {
      }

      void
      getIntersection(const Sphere& data_1, const Sphere& data_2, Circle& out)
      {
        Point vector = data_2.point - data_1.point;
        double dst = vector.normalize();

        if (data_1.distance+data_2.distance < dst)
          throw NoInterception("Points too far apart");

        if (data_1.distance+data_2.distance == dst)
        {
          // Calculate single point interception and save in out_1
          throw SinglePoint();
        }

        if (dst < abs(data_1.distance-data_2.distance))
          throw NoInterception("Sphere contains Sphere");

        double delta_x = dst/2.0f + (pow(data_1.distance,2) - pow(data_2.distance,2))/(2*dst);
        out.center = data_1.point + delta_x*vector;
        out.radius = sqrt(pow(data_1.distance,2) - pow(delta_x,2));
        out.vector_n = vector;
#ifdef DEBUG
        debug("Sphere-Sphere: ", out);
#endif
      }

      void
      getIntersection(const Sphere& data_1, const Sphere& data_2, Plane& pln)
      {
        Point vector_n = data_2.point - data_1.point;
        double dst = vector_n.normalize();

        if (data_1.distance+data_2.distance < dst)
          throw NoInterception("Centers too far apart");

        if (dst < abs(data_1.distance-data_2.distance))
          throw NoInterception("Sphere contains Sphere");

        double delta_x = dst/2.0f + (pow(data_1.distance,2) - pow(data_2.distance,2))/(2*dst);
        pln.pt = data_1.point + delta_x*vector_n;
        pln.vec = vector_n;
#ifdef DEBUG
        debug("Sphere-Sphere: ", pln);
#endif
      }

      void
      getIntersection(const Plane& plane_1, const Plane& plane_2, Line& out)
      {
        out.vec = Point::getPerpendicular(plane_1.vec, plane_2.vec);
        double det = out.vec.normalize();

        double d1 = -1*(plane_1.vec*plane_1.pt);
        double d2 = -1*(plane_2.vec*plane_2.pt);
        out.pt = ((out.vec|plane_2.vec)*d1 + (plane_1.vec|out.vec)*d2)/det ;
#ifdef DEBUG
        debug("Plane-Plane: ", out);
#endif
      }

      void
      getIntersection(const Line& line, const Plane& plane, Point& out)
      {
        if (plane.vec*line.vec == 0)
          throw NoInterception("Line is parallel to plane");

        float delta_x = (plane.vec*plane.pt - plane.vec*line.pt)/(plane.vec*line.vec);
        out = line.pt + line.vec*delta_x;
#ifdef DEBUG
        debug("Line-Plane: ", out);
#endif
      }

      void
      getArea()
      {
        Plane pl_12, pl_23;
        getIntersection(m_data[0], m_data[1], pl_12);
        getIntersection(m_data[1], m_data[2], pl_23);

        Line ln;
        getIntersection(pl_12, pl_23, ln);

        Plane centers = Plane(m_data[0].point, m_data[1].point, m_data[2].point);
        Point origin;
        getIntersection(ln, centers, origin);
        double delta = sqrt(pow(m_data[0].distance,2) - pow(Point::norm(origin,m_data[0].point),2));

        Point sol1, sol2;
        sol1 = origin + delta*ln.vec;
        sol2 = origin - delta*ln.vec;        
#ifdef DEBUG
        if (sol1.z < 0)
          debug("Solution 1 ", sol1);
        if(sol2.z < 0)
          debug("Solution 2 ", sol2);
#endif
      }

#ifdef DEBUG
      void 
      debug(const char* string, const Point& pt)
      {
        std::stringstream str;
        str << string << "Point " << pt;
        inf(DTR("%s"),str.str().c_str());
      }

      void 
      debug(const char* string, const Circle& cl)
      {
        std::stringstream str;
        str << string ;
        str << "Circle with center " << cl.center << " and radius " << cl.radius;
        str << " and n^: " << cl.vector_n;
        inf(DTR("%s"), str.str().c_str());
      }

      void 
      debug(const char* string, const Sphere& pt)
      {
        std::stringstream str;
        str << string << "Sphere with center " << pt.point << " and distance " << pt.distance;
        inf(DTR("%s"),str.str().c_str());
      }

      void 
      debug(const char* string, const Plane& pt)
      {
        std::stringstream str;
        str << string << "Plane with point " << pt.pt << " and normal vector " << pt.vec;
        inf(DTR("%s"),str.str().c_str());
      }

      void 
      debug(const char* string, const Line& ln)
      {
        std::stringstream str;
        str << string << "Line with point " << ln.pt << " and normal vector " << ln.vec;
        inf(DTR("%s"),str.str().c_str());
      }
#endif

      void
      updatePoints(double x_pos, double y_pos, double z_pos, double new_distance)
      {
        m_data[0] = m_data[1];
        m_data[1] = m_data[2];
        m_data[2].setPoint(x_pos, y_pos, z_pos);
        m_data[2].distance = new_distance;
        m_data_size++;
      }

      void
      consume(const IMC::Distance* msg)
      {
        if (!m_args.active)
          return;

        if (msg->validity == IMC::Distance::DV_INVALID)
          return;

        auto var = msg->location.end();
        var--;
        updatePoints((*var)->x, (*var)->y, (*var)->z, msg->value);
        if (m_data_size < 3)
          return;

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

      void
      consume(const IMC::EstimatedState* msg)
      {
        if (m_args.active)
        {
          IMC::DeviceState state;
          state.x = msg->x;
          state.y = msg->y;
          state.z = msg->z;

          IMC::Distance data;
          data.validity = true;
          data.value = m_sol.norm();
          data.location.push_back(state);

          dispatch(data, DF_LOOP_BACK);
        }
        else if(m_getSol)
        {
          m_sol.set(msg->x, msg->y, msg->z);
          m_getSol = false;
        }
      }

      //! Main loop.
      void
      onMain(void)
      {
        // in x time send <IMC::distance> com loopback
        while (!stopping())
        {
          waitForMessages(3.0);
        }
      }
    };
  }
}

DUNE_TASK
