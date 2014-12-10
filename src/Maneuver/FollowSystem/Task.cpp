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

// DUNE headers.
#include <DUNE/DUNE.hpp>

namespace Maneuver
{
  namespace FollowSystem
  {
    using DUNE_NAMESPACES;

    struct Arguments
    {
      double loiter_radius;
      double timeout;
      bool announce_active;
      bool remote_active;
      double min_displace;
      double heading_cooldown;
      double safe_distance;
    };

    struct Task: public DUNE::Maneuvers::Maneuver
    {
      //! Variable to save the maneuver's data
      IMC::FollowSystem m_maneuver;
      //! Vehicle's Estimated State
      IMC::EstimatedState m_estate;
      //! Desired path to be thrown
      IMC::DesiredPath m_path;
      //! Remote State computed heading's timestamp, for evaluating the best heading to be used
      Counter<double> m_heading_timestamp;
      //! this variable will hold the value of the heading computed when using the announce method instead of the remote state.
      double m_remote_heading;
      //! the start time of the maneuver measured at consume maneuver
      double m_start_time;
      //! the last Clock::get() when the neighbor system's position was updated
      Counter<double> m_last_update;
      //! variable to hold the last known bearing
      double m_last_known_bearing;
      //! variable that will hold the last known latittude
      double m_last_known_lat;
      //! variable that will hold the last known longitude
      double m_last_known_lon;
      //! is it the first time consume announce is being ran?
      bool m_first_announce;
      //! this boolean tells us if we have an estimated state already
      bool m_has_estimated_state;
      //! Task Arguments
      Arguments m_args;

      Task(const std::string& name, Tasks::Context& ctx):
        DUNE::Maneuvers::Maneuver(name, ctx),
        m_last_known_bearing(0.0),
        m_last_known_lat(0.0),
        m_last_known_lon(0.0),
        m_first_announce(true),
        m_has_estimated_state(false)
      {
        param("Loitering Radius", m_args.loiter_radius)
        .defaultValue("-1.0")
        .units(Units::Meter)
        .description("Radius of the loiter when waiting for new waypoint");

        param("Timeout", m_args.timeout)
        .defaultValue("60.0")
        .units(Units::Second)
        .description("Maneuver timeout");

        param("Using Announce", m_args.announce_active)
        .defaultValue("false")
        .description("Using announce to track system");

        param("Using RemoteState", m_args.remote_active)
        .defaultValue("false")
        .description("Using remote state for tracking system");

        param("Min Displace", m_args.min_displace)
        .defaultValue("2.0")
        .units(Units::Meter)
        .description("Minimum target displacement for computing new heading");

        param("Heading Cooldown", m_args.heading_cooldown)
        .defaultValue("15.0")
        .units(Units::Second)
        .description("");

        param("Minimum Safe Distance", m_args.safe_distance)
        .defaultValue("15.0")
        .units(Units::Meter)
        .description("Minimum safe distance to target system");

        bindToManeuver<Task, IMC::FollowSystem>();
        bind<IMC::RemoteState>(this);
        bind<IMC::EstimatedState>(this, true); // consume even if inactive
        bind<IMC::Announce>(this);
      }

      void
      onUpdateParameters(void)
      {
        if (paramChanged(m_args.timeout))
          m_last_update.setTop(m_args.timeout);

        if (paramChanged(m_args.heading_cooldown))
          m_heading_timestamp.setTop(m_args.heading_cooldown);
      }

      void
      onManeuverDeactivation(void)
      {
        m_first_announce = true;
        m_has_estimated_state = false;
      }

      void
      consume(const IMC::EstimatedState* msg)
      {
        if (msg->getSource() != getSystemId())
          return;

        // do not do a thing if the announce method is not active
        if (!m_args.announce_active)
          return;

        m_estate = *msg;
        m_has_estimated_state = true;
      }

      void
      consume(const IMC::FollowSystem* maneuver)
      {
        enableMovement(false);

        m_maneuver = *maneuver;
        m_heading_timestamp.reset();
        m_start_time = Clock::get();
        // Initialize the variable last update to the beggining of the maneuver
        m_last_update.reset();

        debug("loitering radius is %0.2f meters", m_args.loiter_radius);
        debug("offsets are %0.2f %0.2f %0.2f", m_maneuver.x, m_maneuver.y, m_maneuver.z);
        debug("speed is %0.2f units %d", m_maneuver.speed, (int)m_maneuver.speed_units);
      }

      void
      consume(const IMC::RemoteState* rs)
      {
        // Not the vehicle we are following or remote method is inactive
        if (rs->getSource() != m_maneuver.system || !m_args.remote_active)
          return;

        // update the variable last update
        m_last_update.reset();

        // update the variable last heading update
        m_heading_timestamp.reset();

        if (!checkSafety(rs->lat, rs->lon))
        {
          // leave this consume function but first update "last" variables
          m_last_known_lat = rs->lat;
          m_last_known_lon = rs->lon;
          m_remote_heading = rs->psi;
          enableMovement(false);
          return;
        }

        enableMovement(true);

        // change the variable m_path according to the offsets in m_maneuver
        computeNEDOffsets(rs->lat, rs->lon, rs->depth, rs->psi);

        m_path.lradius = m_args.loiter_radius;
        m_path.flags = IMC::DesiredPath::FL_DIRECT;

        m_path.speed = m_maneuver.speed;
        m_path.speed_units = m_maneuver.speed_units;

        dispatch(m_path);

        m_last_known_lat = rs->lat;
        m_last_known_lon = rs->lon;
        m_remote_heading = rs->psi;

        trace("system being pursued has heading: %0.2f", rs->psi);
        trace("this is %0.4f seconds past the maneuver's initial time", Clock::get() - m_start_time);
        trace("remote data: lat %0.5f, lon %0.5f, depth %d, timestamp %0.4f", rs->lat, rs->lon, rs->depth, rs->getTimeStamp());
        trace("thrown waypoint: lat %0.5f %0.5f %0.2f", m_path.end_lat, m_path.end_lon, m_path.end_z);
      }

      void
      consume(const IMC::Announce* msg)
      {
        // Not the vehicle we are following or the announce method is inactive
        if (msg->getSource() != m_maneuver.system || !m_args.announce_active)
          return;

        // update the variable last update
        m_last_update.reset();

        // if present location is unsafe, then
        if (!checkSafety(msg->lat, msg->lon))
        {
          // leave this consume function but first update "last" variables
          m_last_known_lat = msg->lat;
          m_last_known_lon = msg->lon;
          enableMovement(false);
          return;
        }

        enableMovement(true);

        // compute the bearing with the announced data using previous data
        double announced_bearing;
        double announced_displace = 0;

        if (!m_first_announce)
        {
          WGS84::getNEBearingAndRange(m_last_known_lat, m_last_known_lon, msg->lat, msg->lon, &announced_bearing, &announced_displace);

          // if the announcing system has not moved much, use the previously computed bearing
          if (announced_displace < m_args.min_displace)
            announced_bearing = m_last_known_bearing;

          // check if this bearing should be given more emphasis than the one computed using remote state
          if (!m_heading_timestamp.overflow())
            announced_bearing = m_remote_heading;

          // change the variable m_path according to the offsets in m_maneuver
          computeNEDOffsets(msg->lat, msg->lon, 0.0, announced_bearing);

          m_last_known_bearing = announced_bearing;
        }
        else // it is the first time announce is running
        {
          // compute lat and lon of the desired path
          computeNEDOffsets(msg->lat, msg->lon, 0.0, 0.0);
        }

        m_path.lradius = m_args.loiter_radius;
        m_path.flags = IMC::DesiredPath::FL_DIRECT;

        m_path.speed = m_maneuver.speed;
        m_path.speed_units = m_maneuver.speed_units;
        dispatch(m_path);

        // update "last" variables
        m_last_known_lat = msg->lat;
        m_last_known_lon = msg->lon;

        trace("system being pursued has heading: %0.2f and was displaced %0.2f", m_last_known_bearing, announced_displace);
        trace("this is %0.4f seconds past the maneuver's initial time", Clock::get() - m_start_time);
        trace("announce data: lat %0.5f, lon %0.5f, %0.2f, %0.4f", msg->lat, msg->lon, msg->height, msg->getTimeStamp());
        double offx, offy;
        WGS84::displacement(msg->lat, msg->lon, 0.0, m_path.end_lat, m_path.end_lon, 0.0, &offx, &offy);
        trace("offset: x %0.2f, %0.2f, %0.2f", offx, offy, m_estate.z);
      }

      //! Function to check if the vehicle is getting near to the next waypoint
      void
      onPathControlState(const IMC::PathControlState* pcs)
      {
        if (pcs->flags & IMC::PathControlState::FL_NEAR)
          enableMovement(false);
      }

      void
      onStateReport(void)
      {
        if (!m_maneuver.duration)
          return;

        // if the present location is unsafe then disable movement
        if (!checkSafety(m_last_known_lat, m_last_known_lon))
          enableMovement(false);

        if (m_last_update.overflow())
          signalError(DTR("timeout to receive new remote info was exceeded."));

        double delta = Clock::get() - m_start_time - m_maneuver.duration;
        if (delta >= 0)
          signalCompletion();
        else
          signalProgress((uint16_t)(Math::round(delta)));
      }

      //! Function to compute new point to send to vehicle considering offsets
      void
      computeNEDOffsets(double lat, double lon, double depth, double psi)
      {
        double offx, offy;

        m_path.end_lat = lat;
        m_path.end_lon = lon;
        m_path.end_z = depth + m_maneuver.z;
        m_path.end_z_units = m_maneuver.z_units;

        // compute the offsets in the NED frame
        offx = std::cos(psi) * m_maneuver.x
        + std::cos(Angles::normalizeRadian(psi - DUNE::Math::c_half_pi)) * m_maneuver.y;

        offy = std::sin(psi) * m_maneuver.x
        + std::sin(Angles::normalizeRadian(psi - DUNE::Math::c_half_pi)) * m_maneuver.y;

        WGS84::displace(offx, offy, &m_path.end_lat, &m_path.end_lon);
      }

      //! Routine for checking the safety of the vehicle's position
      //! this routine return true if the present location is safe
      //! and returns false otherwise
      bool
      checkSafety(double lat, double lon)
      {
        if (m_has_estimated_state)
        {
          double x, y, r;

          WGS84::displacement(m_estate.lat, m_estate.lon, 0.0, lat, lon, 0.0, &x, &y);

          r = Math::norm((x - m_estate.x), (y - m_estate.y));

          // if the distance between them is below the safe distance
          if (r < m_args.safe_distance)
          {
            return false;
          }
          else
          {
            return true;
          }
        }
        else
        {
          return true;
        }
      }

      //! Function for enabling and disabling the control loops
      void
      enableMovement(bool enable)
      {
        const uint32_t mask = IMC::CL_PATH;

        if (enable)
          setControl(mask);
        else
          setControl(0);
      }
    };
  }
}

DUNE_TASK
