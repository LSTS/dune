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
      }

      void
      consume(const IMC::RemoteSensorInfo* msg)
      {
        if (m_target == NULL)
          return;

        if (msg->id != m_target->target)
          return;

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

        if (isTooFar())
          goToTarget();
        else
          onTarget();

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

        if (r > m_args.radius)
          return true;

        return false;
      }

      //! Go to target.
      void
      goToTarget(void)
      {
        if (m_sm != SM_AWAY)
        {
          m_sm = SM_AWAY;
          inf("approach target");
        }

        if (!m_path_timer.overflow())
          return;

        setControl(IMC::CL_PATH);

        // go to point.
        IMC::DesiredPath path;
        path.flags = IMC::DesiredPath::FL_DIRECT;
        path.speed = m_target->max_speed;
        path.speed_units = m_target->speed_units;
        path.end_lat = m_status->lat;
        path.end_lon = m_status->lon;
        path.end_z = m_target->z;
        path.end_z_units = m_target->z_units;
        dispatch(path);
        m_path_timer.reset();
      }

      //! On target.
      void
      onTarget(void)
      {
        if (m_sm != SM_NEAR)
        {
          m_sm = SM_NEAR;
          inf("follow attitude");
        }

        setControl(IMC::CL_SPEED | IMC::CL_YAW);

        IMC::DesiredSpeed desired_speed;
        desired_speed.value = m_speed;
        desired_speed.speed_units = IMC::SUNITS_METERS_PS;
        dispatch(desired_speed);

        IMC::DesiredHeading desired_yaw;
        desired_yaw.value = m_status->heading;
        dispatch(desired_yaw);
      }
    };
  }
}

DUNE_TASK
