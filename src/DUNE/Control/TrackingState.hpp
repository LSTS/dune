//***************************************************************************
// Copyright 2007-2026 Universidade do Porto - Faculdade de Engenharia      *
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
// Author: Eduardo Marques                                                  *
//***************************************************************************

#ifndef DUNE_CONTROL_TRACKING_STATE_HPP_INCLUDED_
#define DUNE_CONTROL_TRACKING_STATE_HPP_INCLUDED_

// ISO C++ 98 headers.
#include <string>

// DUNE headers.
#include <DUNE/Math/Matrix.hpp>

namespace DUNE
{
  namespace Control
  {
    using namespace DUNE::Math;

    //! All data regarding the vehicle's state while tracking the path
    struct TrackingState
    {
      //! current time (wall clock).
      double now;
      //! time since last control step invocation.
      double delta;
      //! start time (wall clock).
      double start_time;
      //! end time (wall clock).
      double end_time;
      //! eta estimate.
      double eta;

      //! start, end waypoints.
      struct Coord
      {
        double x;
        double y;
        double z;
        uint8_t z_units;
      } start, end;

      //! bearing from start to end.
      double track_bearing;
      //! distance from start to end.
      double track_length;
      //! range from current position to end.
      double range;
      //! angle from current position to end (line-of-sight angle).
      double los_angle;
      //! current ground course if course control enabled, yaw otherwise.
      double course;
      //! current ground speed if course control enabled,
      //! body-fixed frame u speed otherwise.
      double speed;
      //! Vertical speed.
      double vertical_speed;
      //! course error in relation to track bearing.
      double course_error;
      //! Start lat.
      double lat_st;
      //! Start lon.
      double lon_st;
      //! End lat.
      double lat_en;
      //! End lon.
      double lon_en;
      //! Plan Waypoints.
      Math::Matrix waypoints;

      //! Track position & velocity.
      struct TrackCoord
      {
        //! Along track.
        double x;
        //! Cross track.
        double y;
        //! Vertical track.
        double z;
      } track_pos, track_vel;

      //! Loiter data.
      struct LoiterData
      {
        //! Center coordinates.
        Coord center;
        //! Loiter radius.
        double radius;
        //! Direction.
        bool clockwise;
      } loiter;

      //! Set if altitude control is defined.
      bool z_control : 1;
      //! Set if loitering.
      bool loitering : 1;
      //! Set if near endpoint
      bool nearby : 1;
      //! Set if course control is enabled.
      bool cc : 1;
    };
  }
}

#endif
