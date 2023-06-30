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
// Author: João Bogas                                                      *
//***************************************************************************

// DUNE headers.
#include <DUNE/DUNE.hpp>

#include <cmath>

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
      struct Arguments
      {
        /* data */
      };

      class ErrorInterception: public std::exception
      {
      public:
        ErrorInterception(const char* str): m_error("Interception impossible: " + String::str(str))
        {}

        ~ErrorInterception()
        {}

        const char* what() const noexcept override
        {
          return m_error.c_str();
        }

      private:
        std::string m_error;
      };

      class TwoSolutions: public std::exception
      {
      public:
        TwoSolutions()
        {}

        ~TwoSolutions()
        {}

        const char* what() const noexcept override
        {
          return "Two possible solutions";
        }
      };

      struct Point
      {
        double x;
        double y;

        Point(): x(0), y(0)
        {}

        Point(double _x, double _y): x(_x), y(_y)
        {}

        double norm(const Point& point)
        {
          return sqrt(pow(x-point.x, 2) + pow(y-point.y, 2));
        }

        double norm() const
        {
          return sqrt(pow(x, 2) + pow(y, 2));
        }

        static double norm(const Point& p1, const Point& p2)
        {
          return sqrt(pow(p1.x-p2.x, 2) + pow(p1.y-p2.y, 2));
        }

        double normalize()
        {
          double dst = norm();
          x /= dst;
          y /= dst;
          return dst;
        }

        double angle() const
        {
          double angle = atan2(y, x);
          return (angle < 0 ) ? angle+2*M_PI: angle;
        }

        bool isParallel(const Point& vec) const
        {
          if ((x == 0 && vec.x == 0) || (y == 0 && vec.y == 0))
            return true;
          
          return (vec.x/x == vec.y/y);
        }

        Point getPerpendicular() const
        {
          return Point(-y, x);
        }

        Point operator+(const Point& to_add) const
        {
          return Point(x+to_add.x, y+to_add.y);
        }

        Point operator-(const Point& to_add) const
        {
          return Point(x-to_add.x, y-to_add.y);
        }

        Point& operator+=(const Point& to_add)
        {
          x += to_add.x;
          y += to_add.y;
          return *this;
        }

        Point& operator-=(const Point& to_add)
        {
          x -= to_add.x;
          y -= to_add.y;
          return *this;
        }

        Point operator/(double ratio) const
        {
          return Point(x/ratio, y/ratio);
        }

        Point& operator/=(double ratio)
        {
          x /= ratio;
          y /= ratio;
          return *this;
        }

        Point operator*(double ratio) const
        {
          return Point(x*ratio, y*ratio);
        }

        friend Point operator*(double value, const Point& pt)
        {
          return Point(pt.x*value, pt.y*value);
        }

        Point& operator*=(double ratio)
        {
          x *= ratio;
          y *= ratio;
          return *this;
        }

        friend std::ostream& operator<<(std::ostream& os, const Point& to_print)
        {
          os << std::fixed << std::setprecision(5);
          os << "( " << to_print.x << " , " << to_print.y << " )";
          return os;
        }
      };

      struct Info
      {
        Point point;
        double distance;

        Info(): point(), distance(0)
        {}

        Info(double _x, double _y, double _dst): point(_x, _y), distance(_dst)
        {}

        void
        setPoint(double _x, double _y)
        {
          point.x = _x;
          point.y = _y;
        }
      };

      std::array<Info, 3> m_data;
      int m_data_size;
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
      getInterception(const Info& data_1, const Info& data_2, Point& out_1, Point& out_2)
      {
        Point vector_x = data_2.point - data_1.point;

        double length = vector_x.normalize();

        if (length > data_1.distance + data_2.distance)
          throw ErrorInterception("Points to far apart");
        if (length < abs(data_2.distance - data_1.distance))
          throw ErrorInterception("Circle contains circle");

        const double delta_x = length/2.0f + (pow(data_1.distance,2) - pow(data_2.distance,2) )/(2*length);
        const double delta_y = sqrt(pow(data_1.distance,2) - pow(delta_x,2));
        const Point vector_y = vector_x.getPerpendicular();

        out_1 = data_1.point + vector_x*delta_x + vector_y*delta_y;
        out_2 = data_1.point + vector_x*delta_x - vector_y*delta_y;
#ifdef DEBUG
        debugPoint("Interception: 1", out_1);
        debugPoint("Interception: 2", out_2);
#endif
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

      bool isLine()
      {
        Point vec_A = m_data[0].point - m_data[1].point;
        Point vec_B = m_data[1].point - m_data[2].point;

        return vec_A.isParallel(vec_B);
      }

      void
      getArea()
      {
        if(isLine())
          throw TwoSolutions();

        Point a1, a2, b1, b2, c1, c2;
        getInterception(m_data[0], m_data[1], a1, a2);
        getInterception(m_data[0], m_data[2], b1, b2);
        getInterception(m_data[1], m_data[2], c1, c2);

        double distances[4];
        distances[0] = Point::norm(a1, b1);
        distances[1] = Point::norm(a1, b2);

        distances[2] = Point::norm(a2, b1);
        distances[3] = Point::norm(a2, b2);

        Point triangle[3];
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

        if (Point::norm(triangle[0], c1) < Point::norm(triangle[0], c2))
          triangle[2] = c1;
        else
          triangle[2] = c2;
#ifdef DEBUG
        debugPoint("triangle: ", triangle[0]);
        debugPoint("triangle: ", triangle[1]);
        debugPoint("triangle: ", triangle[2]);
#endif
      }

#ifdef DEBUG
      void debugPoint(const char* string, const Point& pt)
      {
        std::stringstream str;
        str << string << pt;
        inf(DTR("%s"),str.str().c_str());
      }
#endif

      void
      updatePoints(double x_pos, double y_pos, double new_distance)
      {
        m_data[0] = m_data[1];
        m_data[1] = m_data[2];
        m_data[2].setPoint(x_pos, y_pos);
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
        updatePoints((*var)->x, (*var)->y, msg->value);
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
        m_data[0].point = Point(0,0);
        m_data[0].distance = 10;

        m_data[1].point = Point(10,0);
        m_data[1].distance = 10;

        m_data[2].point = Point(3,0);
        m_data[2].distance = 10;

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
