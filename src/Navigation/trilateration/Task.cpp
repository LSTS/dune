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

    struct Task: public DUNE::Tasks::Task
    {
      //! Task Arguments
      struct Arguments {};

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
      };

      struct Line
      {
        Point pt;
        Point vec;
      };

      //! Last 3 valid points
      std::array<Sphere, 3> m_data;
      //! Current size of m_data
      int m_data_size;
      //! Current point calculated
      Point m_res;

      //! Constructor.
      //! @param[in] name task name.
      //! @param[in] ctx context.
      Task(const std::string& name, Tasks::Context& ctx):
        DUNE::Tasks::Task(name, ctx), m_data_size(0)
      {
        bind<IMC::Distance>(this);
      }

      //! Update internal state with new parameter values.
      void
      onUpdateParameters(void)
      {
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
      getInterception(const Sphere& data_1, const Sphere& data_2, Circle& out)
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
        debug("Circle interception: ", out);
#endif
      }

      void 
      getInterception(const Circle& data_1, const Circle& data_2, Point& out1)
      {
        Point vec_prod = data_1.vector_n|data_2.vector_n;
        double dot_prod = (data_1.center-data_2.center)*data_1.vector_i;
        if (vec_prod == 0)
        {
          if (dot_prod)
            throw NoInterception("Circles planes are parallel");
          
          // Calculate circle interception in same plane
        }

        
      }

      void
      getInterception(const Sphere& data_1, const Sphere& data_2, Plane& ln)
      {
        Point vector_n = data_2.point - data_1.point;
        double dst = vector_n.normalize();

        if (data_1.distance+data_2.distance < dst)
          throw NoInterception("Centers too far apart");

        if (dst < abs(data_1.distance-data_2.distance))
          throw NoInterception("Sphere contains Sphere");

        double delta_x = dst/2.0f + (pow(data_1.distance,2) - pow(data_2.distance,2))/(2*dst);
        ln.pt = data_1.point + delta_x*vector_n;
        ln.vec = vector_n;
#ifdef DEBUG
        debug("Plane interception: ", ln);
#endif
      }

      void
      getInterception(const Plane& plane_1, const Plane& plane_2, Line& out)
      {
        out.vec = Point::getPerpendicular(plane_1.vec, plane_2.vec);
        double det = out.vec.norm();
        
        double d1 = plane_1.vec*plane_1.pt;
        double d2 = plane_2.vec*plane_2.pt;
        out.pt = ((out.vec|plane_2.vec)*d1 + (plane_1.vec|out.vec)*d2)/det ;

      }

      void
      getInterception(const Line& line, const Plane& plane, Point& out)
      {

      }

      //! Return the postion with the minimum value
      //! @param[in] init ptr to initial element of vector
      //! @param[in] end ptr to final element of vector
      int 
      min_pos(double* init, double* end)
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

      bool 
      isLine()
      {
        Point vec_A = m_data[0].point - m_data[1].point;
        Point vec_B = m_data[1].point - m_data[2].point;

        return vec_A.isParallel(vec_B);
      }

      void
      getArea()
      {
        Sphere data1(2, 0, 0, 2);
        Sphere data2(0, 2, 0, 2);
        Sphere data3(0, 0, 2, 2);
        m_data[0] = data1;
        m_data[1] = data2;
        m_data[2] = data3;

        Plane pl_1, pl_2, pl_3, centers;
        centers.vec = Point::getPerpendicular(m_data[0].point - m_data[1].point, m_data[0].point - m_data[2].point);

        getInterception(data1, data2, pl_1);
        getInterception(data2, data3, pl_2);
        getInterception(data1, data3, pl_3);

        Line line;
        getInterception(pl_1, pl_2, line);
        Point origin;
        getInterception(centers, line, origin);

      }

#ifdef DEBUG
      void 
      debug(const char* string, const Point& pt)
      {
        std::stringstream str;
        str << string << pt;
        inf(DTR("%s"),str.str().c_str());
      }

      void 
      debug(const char* string, const Circle& cl)
      {
        std::stringstream str;
        str << string ;
        str << "Center " << cl.center << " and radius " << cl.radius;
        str << " n^: " << cl.vector_n;
        inf(DTR("%s"), str.str().c_str());
      }

      void 
      debug(const char* string, const Sphere& pt)
      {
        std::stringstream str;
        str << string << pt.point << " and distance " << pt.distance;
        inf(DTR("%s"),str.str().c_str());
      }

      void 
      debug(const char* string, const Plane& pt)
      {
        std::stringstream str;
        str << string << pt.pt << " and normal vector " << pt.vec;
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
          m_data_size = 0;
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

      //! Main loop.
      void
      onMain(void)
      {
        getArea();
        exit(1);
        /* while (!stopping())
        {
          waitForMessages(3.0);
        } */
      }
    };
  }
}

DUNE_TASK
