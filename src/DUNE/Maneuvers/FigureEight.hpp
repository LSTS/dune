//***************************************************************************
// Copyright 2007-2014 Universidade do Porto - Faculdade de Engenharia      *
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
// https://www.lsts.pt/dune/licence.                                        *
//***************************************************************************
// Author: Pedro Calado                                                     *
//***************************************************************************

#ifndef DUNE_MANEUVERS_FIGURE_EIGHT_HPP_INCLUDED_
#define DUNE_MANEUVERS_FIGURE_EIGHT_HPP_INCLUDED_

// DUNE headers.
#include <DUNE/IMC.hpp>
#include <DUNE/Maneuvers/Maneuver.hpp>
#include <DUNE/Maneuvers/AbstractLoiter.hpp>

namespace DUNE
{
  namespace Maneuvers
  {
    // Export DLL Symbol.
    class DUNE_DLL_SYM FigureEight;

    //! Class to control figure eight loiter behavior around two centers.
    class FigureEight: public Maneuvers::AbstractLoiter
    {
    public:
      //! Properties for constructor
      struct Properties
      {
        //! Pointer to task object.
        Maneuvers::Maneuver* task;
        //! Latitude of maneuver.
        double lat;
        //! Longitude of maneuver.
        double lon;
        //! Radius circular radius.
        float radius;
        //! Zed reference.
        float z;
        //! Units of the zed reference.
        uint8_t z_units;
        //! Speed reference for maneuver.
        float speed;
        //! Speed units of the reference.
        uint8_t speed_units;
        //! Bearing angle made by the line connecting both centers.
        float bearing;
        //! Length distance between both centers.
        float length;
      };

      //! Default constructor.
      //! @param[in] maneuver pointer to loiter maneuver
      //! @param[in] task pointer to task object (debug and inf)
      //! @param[in] min_radius minimum radius to consider in maneuver
      FigureEight(const IMC::Loiter* maneuver, Maneuvers::Maneuver* task,
                  float min_radius);

      //! Default constructor.
      //! @param[in] prop pointer to required properties to perform behavior
      FigureEight(Properties* prop);

      //! Update behavior with path control state
      //! @param[in] pcs pointer to PathControlState message
      void
      onPathControlState(const IMC::PathControlState* pcs);

      //! Update behavior with EstimatedState
      //! @param[in] msg pointer to EstimatedState message
      void
      onEstimatedState(const IMC::EstimatedState* msg);
      //! Check if loitering
      //! @return true if loitering, false otherwise
      bool
      isLoitering(void) const;

    private:
      //! Left or right loop properties
      struct EightLoop
      {
        //! Center of the loop latitude
        double center_lat;
        //! Center of the loop longitude
        double center_lon;
        //! Exit point of the loop latitude
        double exit_lat;
        //! Exit point of the loop longitude
        double exit_lon;
        //! Direction, true if clockwise, false otherwise
        bool direction;
      };

      //! X and Y defined point for simplicity
      struct Point
      {
        //! X coordinate
        double x;
        //! Y coordinate
        double y;
      };

      //! State machine
      enum FigureEightState
      {
        //! Init
        FE_INIT,
        //! Circling
        FE_CIRCLING,
        //! Reaching exit point
        FE_EXITING,
        //! Switching to opposite loop
        FE_SWITCHING
      };

      //! Arc progress in loiter
      struct ArcProgress
      {
        //! True if valid, false otherwise
        bool valid;
        //! Last value of the arc in radians
        float last_value;
        //! Amount of arc travelled in radians
        float accum;

        ArcProgress(void):
          valid(false),
          accum(0.0)
        { };

        void
        invalidate(void)
        {
          valid = false;
        }

        void
        update(float value)
        {
          if (!valid)
          {
            valid = true;
            accum = 0.0f;
            last_value = value;
            return;
          }

          accum += value - last_value;
          last_value = value;
        }

        inline float
        get(void) const
        {
          return accum;
        }
      };

      //! Initialize figure eight behavior
      //! @param[in] prop pointer to required properties to perform behavior
      void
      init(Properties* prop);

      //! Compute loop centers
      void
      computeLoopCenters(void);

      //! Compute loop exit points
      void
      computeLoopExits(void);

      //! Displace a latitude and longitude point according to 2D bearing
      void
      displace(double& lat, double& lon, double angle, float range);

      //! Dispatch desired path to a loop
      void
      dispatchPath(const EightLoop* loop, bool set_start = false);

      //! Compute the angle between loiter center and the vehicle
      double
      computeRelativeBearing(const IMC::EstimatedState* msg);

      //! Compute the distance between the vehicle and the exit point
      float
      computeDistanceToExit(const IMC::EstimatedState* msg);

      //! Behavior properties
      Properties m_prop;
      //! Left loop
      EightLoop m_left;
      //! Right loop
      EightLoop m_right;
      //! Pointer to current loop
      EightLoop* m_loop;
      //! State of the behavior
      FigureEightState m_state;
      //! Arc progress
      ArcProgress m_arc;
    };
  }
}

#endif
