//***************************************************************************
// Copyright 2007-2021 Universidade do Porto - Faculdade de Engenharia      *
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
// Author: Luís Venâncio                                                    *
//***************************************************************************

// DUNE headers.
#include <DUNE/DUNE.hpp>

using DUNE_NAMESPACES;

namespace Control
{
  namespace Path
  {
    namespace Profiler
    {
      struct Arguments
      {
      };

      struct Task: public DUNE::Control::PathController
      {

        Task(const std::string& name, Tasks::Context& ctx):
          DUNE::Control::PathController(name, ctx)
        {
        }

        void
        onUpdateParameters(void)
        {
          PathController::onUpdateParameters();
        }

        void
        onEntityReservation(void)
        {
          PathController::onEntityReservation();
        }

        void
        onPathActivation(void)
        {
          // Activate heading cotroller.
          // enableControlLoops(IMC::CL_YAW);
        }

        //! Overload of getEta for Profiler control, ETA is calculated using  
        //! track position z.
        //! @param ts the current tracking state
        //! @return the calculated estimated time of arrival
        double
        getEta(const TrackingState& ts)
        {
          const float errz = std::abs(ts.track_length - ts.track_pos.z);
          const float time_factor = getTimeFactor();
          const float speed = getSpeed();

          const double eta = errz / speed;

          return std::min(65535.0, eta - time_factor);
        }

        //! Overload of getTrackPosition for Profiler control, X and Y are 
        //! calculated as cross-track positions.
        //! @param[in] coord current Estimated State
        //! @param[out] x x coordinate relatively to path
        //! @param[out] y y coordinate relatively to path
        void
        getTrackPosition(const TrackingState& ts, const IMC::EstimatedState& coord, double* x, double* y = 0)
        {
          *x = coord.x - ts.start.x;
          if(y)
            *y = coord.y - ts.start.y;
        }

        //! Overload of getBearingAndRange for Profiler control, since the 
        //! vehicle only moves on z axis bearing is set to 0 and range is 
        //! the difference in Z.
        //! @param[in] origin Origin
        //! @param[in] point point for which offset is to be obtained
        //! @param[out] bearing pointer to output bearing data
        //! @param[out] range pointer to output range data
        void
        getBearingAndRange(const TrackingState::Coord& origin, const TrackingState::Coord& point, double* bearing, double* range)
        {
          *range = point.z - origin.z;
          *bearing = 0;
        }

        //! Overload of computeCourse for Profiler control, since the vehicle 
        //! only moves on z axis bearing is set to 0.
        //! @param[in] es current Estimated State
        //! @return Course (in rad)
        double
        computeCourse(const IMC::EstimatedState& es)
        {
          (void) es;
          return 0;
        }

        //! Overload of computeSpeed for Profiler control, vehicle speed is 
        //! set to z axis.
        //! @param[in] es current Estimated State
        //! @return Z axis speed (in m/s)
        virtual double
        computeSpeed(const IMC::EstimatedState& es)
        {
          return es.w;
        }

        //! Execute a path control step
        //! From base class PathController
        void
        step(const IMC::EstimatedState& state, const TrackingState& ts)
        {
          (void) state;
          (void) ts;
        }
      };
    }
  }
}

DUNE_TASK
