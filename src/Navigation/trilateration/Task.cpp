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

      struct Point
      {
        int x;
        int y;
      };
      
      
      //! Constructor.
      //! @param[in] name task name.
      //! @param[in] ctx context.
      Task(const std::string& name, Tasks::Context& ctx):
        DUNE::Tasks::Task(name, ctx)
      {
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
      getInterception(const Point& p1, double distance1, const Point& p2, double distance2)
      {
        Point solution = {};

        solution.x = std::sqrt(std::pow(distance1, 2) - std::pow(solution.y - p1.x, 2)) - p1.x;
        /*
        ||S-p1|| = 4 -> s.x-p1.x ^2 + s.y-p1.y ^2 = 4^2  s.x = sqrt( d1^2 - s.y-p1.y ^2) - p1.x
        ||S-p2|| = 5 -> s.x-p2.x ^2 + s.y-p2.y ^2 = 5^2  

        (sqrt(d1^2 - s.y-p1.y ^2) - p1.x - p2.x) ^2 + s.y-p2.y ^2 = 5^2
        d1^2 - (s.y-p1.y)^2 - 2(sqrt(d1^2 - s.y-p1.y ^2))(p1.x+p2.x) + (p1.x+p2.x)^2 + s.y^2 + 2(s.y)(p2.y) + p2.y^2 = d2^2
        - (s.y-p1.y)^2 - 2(sqrt(d1^2 - s.y-p1.y ^2))(p1.x+p2.x) + s.y^2 + 2(s.y)(p2.y) = d2^2 - d1^2 - (p1.x+p2.x)^2 - p2.y^2
        -s.y ^2 + 2(s.y)(p1.y) - 2(sqrt(d1^2 - s.y-p1.y ^2))(p1.x+p2.x) + s.y^2 + 2(s.y)(p2.y) = d2^2 - d1^2 - (p1.x+p2.x)^2 - p2.y^2 + p1.y^2
        
        */
      }

      //! Main loop.
      void
      onMain(void)
      {
        Point referential = {};
        while (!stopping())
        {
          waitForMessages(1.0);

          Point p1 = {}, p2 = {};
          p2.x = 4;
          double distance1 = 4;
          double distance2 = 5;
        }
      }
    };
  }
}

DUNE_TASK
