//***************************************************************************
// Copyright 2007-2016 Universidade do Porto - Faculdade de Engenharia      *
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
// Author: José Braga                                                       *
//***************************************************************************

// DUNE headers.
#include <DUNE/DUNE.hpp>

namespace Maneuver
{
  namespace FollowPoint
  {
    using DUNE_NAMESPACES;

    //! Distance multiplier target range.
    static const float c_hyst = 2.0f;
    //! Heading difference to add some little extra speed.
    static const float c_yaw_diff = 10.0f;

    enum StateMachine
    {
      SM_IDLE,
      SM_AWAY,
      SM_NEAR
    };

    //! %Task arguments.
    struct Arguments
    {
      //! Timeout to wait for new reference.
      float timeout;
      //! Distance to target to just meet it.
      float radius;
      //! Time interval between path updates.
      float period;
    };

    struct Task: public DUNE::Maneuvers::Maneuver
    {
      //! Vehicle's Estimated State
      IMC::EstimatedState* m_estate;
      //! Vehicle's Follow Point.
      IMC::FollowPoint* m_target;
      //! Vehicle's Target Status.
      IMC::RemoteSensorInfo* m_status;
      //! Desired Path message.
      IMC::DesiredPath m_path;
      //! Target speed.
      double m_speed;
      //! Maneuver watchdog
      Counter<float> m_wdog;
      //! Path update period.
      Counter<float> m_path_timer;
      //! Internal state.
      StateMachine m_sm;
      //! Task Arguments
      Arguments m_args;

      Task(const std::string& name, Tasks::Context& ctx):
        DUNE::Maneuvers::Maneuver(name, ctx),
        m_estate(NULL),
        m_target(NULL),
        m_status(NULL),
        m_speed(0.0),
        m_sm(SM_IDLE)
      {
        param("Reference Timeout", m_args.timeout)
        .defaultValue("10.0")
        .units(Units::Second)
        .description("Maneuver reference timeout");

        param("Target Radius", m_args.radius)
        .defaultValue("5.0")
        .units(Units::Meter)
        .description("Distance to meet target");

        param("Path Update Period", m_args.period)
        .defaultValue("1.0")
        .units(Units::Second)
        .description("Period between path updates");

        m_path.flags = IMC::DesiredPath::FL_DIRECT;

        bindToManeuver<Task, IMC::FollowPoint>();
        bind<IMC::EstimatedState>(this, true);
        bind<IMC::RemoteSensorInfo>(this);
      }

      void
      onResourceRelease(void)
      {
        Memory::clear(m_estate);
        Memory::clear(m_target);
        Memory::clear(m_status);
      }

      void
      onUpdateParameters(void)
      {
        if (paramChanged(m_args.timeout))
          m_wdog.setTop(m_args.timeout);

        if (paramChanged(m_args.period))
          m_path_timer.setTop(m_args.period);
      }

      void
      onManeuverDeactivation(void)
      {
        m_sm = SM_IDLE;
        m_speed = 0.0;
        Memory::clear(m_target);
        Memory::clear(m_status);
      }

      void
      consume(const IMC::EstimatedState* msg)
      {
        if (msg->getSource() != getSystemId())
          return;

        Memory::clear(m_estate);
        m_estate = new IMC::EstimatedState(*msg);
      }

      void
      consume(const IMC::FollowPoint* msg)
      {
        Memory::clear(m_status);
        Memory::clear(m_target);
        m_target = new IMC::FollowPoint(*msg);
        m_wdog.reset();

        debug("now following %s", m_target->target.c_str());

        setControl(IMC::CL_PATH);
      }

      void
      consume(const IMC::RemoteSensorInfo* msg)
      {
        if (m_target == NULL)
          return;

        if (msg->id != m_target->target)
          return;

        setControl(IMC::CL_PATH);

        debug("updated info for %s", msg->id.c_str());

        Memory::clear(m_status);
        m_status = new IMC::RemoteSensorInfo(*msg);

        // get speed.
        TupleList tlist(msg->data, "=", ";", true);
        m_speed = tlist.get("speed", 1.0);

        // check if maneuver has ended.
        if (tlist.get("finished") == "true")
        {
          signalCompletion();
          return;
        }

        update();
      }

      void
      onStateReport(void)
      {
        if (m_wdog.overflow())
          signalError(DTR("timeout while waiting for new reference"));

        update();
      }

      //! Update maneuver state.
      void
      update(void)
      {
        if (m_estate == NULL || m_target == NULL || m_status == NULL)
          return;

        update(isTooFar());

        m_wdog.reset();
      }

      //! Check distance to target.
      //! @return true if away from radius, false otherwise.
      bool
      isTooFar(void)
      {
        double lat, lon;
        Coordinates::toWGS84(*m_estate, lat, lon);
        double r = WGS84::distance(lat, lon, 0.0, m_status->lat, m_status->lon, 0.0);

        // inside range.
        if (m_sm == SM_NEAR)
        {
          if (r > m_args.radius * c_hyst)
            return true;

          return false;
        }

        if (r > m_args.radius)
          return true;

        return false;
      }

      //! Update path following conditions.
      void
      update(bool away)
      {
        if (!m_path_timer.overflow())
          return;

        if (away)
        {
          if (m_sm != SM_AWAY)
          {
            m_sm = SM_AWAY;
            inf("approach target");
          }

          m_path.speed = m_target->max_speed;
          m_path.speed_units = m_target->speed_units;
          m_path.end_lat = m_status->lat;
          m_path.end_lon = m_status->lon;
        }
        else
        {
          if (m_sm != SM_NEAR)
          {
            m_sm = SM_NEAR;
            inf("follow attitude");
          }

          float extra = 0.0;
          double lat, lon, bearing, range;
          Coordinates::toWGS84(*m_estate, lat, lon);
          WGS84::getNEBearingAndRange(lat, lon, m_status->lat, m_status->lon,
                                      &bearing, &range);

           // compute bearing offset between desired heading and bearing to target.
          double boffs = Angles::minSignedAngle(m_status->heading, bearing);

          // only add extra speed if properly pointed towards target (in pursuit).
          if (std::fabs(boffs) < Angles::radians(c_yaw_diff))
          extra = range / m_args.radius / 2.0;

          m_path.speed = std::min(m_speed + extra, (double)m_target->max_speed);
          m_path.speed_units = IMC::SUNITS_METERS_PS;

          // add point *beyond* target with desired heading.
          double n = m_args.radius * std::cos(m_status->heading);
          double e = m_args.radius * std::sin(m_status->heading);

          double latf = m_status->lat;
          double lonf = m_status->lon;
          double hae = 0.0;
          WGS84::displace(n, e, 0.0, &latf, &lonf, &hae);

          m_path.end_lat = latf;
          m_path.end_lon = lonf;
        }

        m_path.end_z = m_target->z;
        m_path.end_z_units = m_target->z_units;

        dispatch(m_path);
        m_path_timer.reset();
      }
    };
  }
}

DUNE_TASK
