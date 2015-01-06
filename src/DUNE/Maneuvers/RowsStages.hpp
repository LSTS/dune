//***************************************************************************
// Copyright 2007-2015 Universidade do Porto - Faculdade de Engenharia      *
// Laboratório de Sistemas e Tecnologia Subaquática (LSTS)                  *
//***************************************************************************
// This file is part of DUNE: Unified Navigation Environment.               *
//                                                                          *
// Commercial Licence Usage                                                 *
// Licencees holding valid commercial DUNE licences may use this file in    *
// accordance with the commercial licence agreement provided with the       *
// Software or, alternatively, in accordance with the terms contained in a  *
// written agreement between you and Universidade do Porto. For licensing   *
// terms, conditions, and further information contact lsts@fe.up.pt.        *
//                                                                          *
// European Union Public Licence - EUPL v.1.1 Usage                         *
// Alternatively, this file may be used under the terms of the EUPL,        *
// Version 1.1 only (the "Licence"), appearing in the file LICENCE.md       *
// included in the packaging of this file. You may not use this work        *
// except in compliance with the Licence. Unless required by applicable     *
// law or agreed to in writing, software distributed under the Licence is   *
// distributed on an "AS IS" basis, WITHOUT WARRANTIES OR CONDITIONS OF     *
// ANY KIND, either express or implied. See the Licence for the specific    *
// language governing permissions and limitations at                        *
// http://ec.europa.eu/idabc/eupl.html.                                     *
//***************************************************************************
// Author: Eduardo Marques (original stage implementation)                  *
// Author: Pedro Calado                                                     *
//***************************************************************************

#ifndef DUNE_MANEUVERS_ROWS_STAGES_HPP_INCLUDED_
#define DUNE_MANEUVERS_ROWS_STAGES_HPP_INCLUDED_

// ISO C++ 98 headers.
#include <string>
#include <vector>

// DUNE headers.
#include <DUNE/IMC.hpp>
#include <DUNE/Tasks.hpp>
#include <DUNE/Coordinates.hpp>

namespace DUNE
{
  namespace Maneuvers
  {
    // Export DLL Symbol.
    class DUNE_DLL_SYM RowsStages;

    //! Class to parse a rows maneuver and to
    //! create and fire each stage
    class RowsStages
    {
    public:
      //! Default constructor.
      //! @param[in] maneuver pointer to rows maneuver
      //! @param[in] task pointer to task object (debug and inf)
      RowsStages(const IMC::Rows* maneuver, Tasks::Task* task);

      //! Get next point
      //! @param[out] lat latitude of current point
      //! @param[out] lon longitude of current point
      //! @return true if reached the end of the maneuver
      bool
      getNextPoint(double* lat, double* lon);

      //! Get first point
      //! @param[out] lat latitude of current point
      //! @param[out] lon longitude of current point
      //! @return true if reached the end of the maneuver
      bool
      getFirstPoint(double* lat, double* lon);

      //! Get total distance and last point coordinates
      //! @param[out] lat latitude of last point found
      //! @param[out] lon longitude of last point found
      //! @return total distance covered
      float
      getDistance(double* lat, double* lon);

      //! Get an iterator to all_distances begin()
      //! @return const iterator to m_all_distance.begin()
      std::vector<float>::const_iterator
      getDistancesBegin(void)
      {
        return m_all_distances.begin();
      };

      //! Get an iterator to all_distances begin()
      //! @return const iterator to m_all_distance.begin()
      std::vector<float>::const_iterator
      getDistancesEnd(void)
      {
        return m_all_distances.end();
      };

      //! Get current point index
      //! @return index
      unsigned
      getIndex(void)
      {
        return m_index;
      }

    private:
      //! Stage of a row
      struct Stage
      {
        Stage(void):
          label("undefined"), x(0), y(0)
        { }

        Stage(const char* label_, double x_, double y_):
          label(label_), x(x_), y(y_)
        { }

        //! Label for the stage
        const char* label;
        //! X coordinate
        double x;
        //! Y coordinate
        double y;
      };

      inline
      bool
      squareCurve(void) const
      {
        return (m_man.flags & IMC::Rows::FLG_SQUARE_CURVE) != 0;
      };

      inline
      bool
      curveRight(void) const
      {
        return (m_man.flags & IMC::Rows::FLG_CURVE_RIGHT) != 0;
      };

      inline
      bool
      curveLeft(void) const
      {
        return (m_man.flags & IMC::Rows::FLG_CURVE_RIGHT) == 0;
      };

      //! Get current point
      //! @param[out] lat latitude of current point
      //! @param[out] lon longitude of current point
      //! @return true if reached the end of the maneuver
      bool
      getPoint(double* lat, double* lon);

      //! Compute total distance
      //! @param[out] lat latitude of last point found
      //! @param[out] lon longitude of last point found
      //! @return total distance covered
      float
      computeDistance(double* lat, double* lon);

      //! Rows maneuver
      IMC::Rows m_man;
      //! Pointer to task
      Tasks::Task* m_task;
      //! Vector of stages
      std::vector<Stage> m_stages;
      //! Current state in absolute X,Y row coordinate system
      Stage m_sabs;
      //! Current stage
      unsigned m_curr;
      //! Current point index
      unsigned m_index;
      //! Number of curves in the rows maneuver
      int m_curves;
      //! Vector of acumulated distances
      std::vector<float> m_all_distances;
    };
  }
}

#endif
