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

      class Error: public std::exception
      {
      public:
        Error(const char* str): m_error(str)
        {}

        ~Error()
        {}

        const char* what() const noexcept override
        {
          return m_error.c_str();
        }

      private:
        std::string m_error;
      };

      struct Point
      {
        double x;
        double y;

        Point(): x(0), y(0)
        {}

        Point(double _x, double _y): x(_x), y(_y)
        {}

        Point(const Point& val): x(val.x), y(val.y)
        {}

        double norm(const Point& point)
        {
          return sqrt(pow(x-point.x, 2) + pow(y-point.y, 2));
        }

        double norm()
        {
          return sqrt(pow(x, 2) + pow(y, 2));
        }

        double normalize()
        {
          double dst = norm();
          x /= dst;
          y /= dst;
          return dst;
        }

        Point getPerpendicular()
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

        Point& operator*=(double ratio)
        {
          x *= ratio;
          y *= ratio;
          return *this;
        }

        friend std::ostream& operator<<(std::ostream& os, const Point& to_print)
        {
          os << '(' << to_print.x << ',' << to_print.y << ')';
          return os;
        }
      };

      struct Info
      {
        Point point;
        double distance;
      };

      std::queue<Info> m_points;
      //! Constructor.
      //! @param[in] name task name.
      //! @param[in] ctx context.
      Task(const std::string& name, Tasks::Context& ctx):
        DUNE::Tasks::Task(name, ctx)
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
      getInterception(const Info& data_1, const Info& data_2)
      {
        Point vector_x = data_1.point - data_2.point;
        double length = vector_x.normalize()/2;

        if (length > data_1.distance + data_2.distance)
          throw Error("Interception impossible");

        double delta_x = length + (data_1.distance-data_2.distance)/2;
        double delta_y = sqrt(pow(data_1.distance,2) - pow(delta_x,2));

        Point vector_y = vector_x.getPerpendicular();
        Point result_1 = data_1.point+vector_x*delta_x + vector_y*delta_y;
        Point result_2 = data_1.point+vector_x*delta_x - vector_y*delta_y;

#ifdef DEBUG
        {
          std::stringstream str;
          str << "Interception 1: " << result_1;
          inf(str.str().c_str());
        }
        std::stringstream str;
        str << "Interception 2: " << result_2;
        inf(str.str().c_str());
#endif
      }

      void
      consume(const IMC::Distance* msg)
      {
        if (msg->validity == IMC::Distance::DV_INVALID)
          return;

        if (m_points.size() == 3)
          m_points.pop();

        auto iter = msg->location.end();
        m_points.emplace((*iter)->x, (*iter)->y, msg->value);
      }

      //! Main loop.
      void
      onMain(void)
      {
        while (!stopping())
        {
          waitForMessages(3.0);
        }
      }
    };
  }
}

DUNE_TASK
