//***************************************************************************
// Copyright (C) 2007-2013 Laboratório de Sistemas e Tecnologia Subaquática *
// Departamento de Engenharia Electrotécnica e de Computadores              *
// Rua Dr. Roberto Frias, 4200-465 Porto, Portugal                          *
//***************************************************************************
// Author: Eduardo Marques                                                  *
//***************************************************************************

#include <DUNE/Coordinates.hpp>
#include <DUNE/Maneuvers/FollowTrajectory.hpp>

namespace DUNE
{
  namespace Maneuvers
  {
    using namespace DUNE::IMC;

    FollowTrajectory::FollowTrajectory(const std::string& name, Tasks::Context& ctx):
      Maneuver(name, ctx)
    {
      param("Control Step Period", m_cstep_period)
      .units(Units::Hertz)
      .defaultValue("1.0");

      bindToManeuver<FollowTrajectory, IMC::FollowTrajectory>();
      bind<IMC::EstimatedState>(this);
      bind<IMC::PathControlState>(this);
    }

    FollowTrajectory::~FollowTrajectory(void)
    { }

    void
    FollowTrajectory::onUpdateParameters(void)
    {
      m_cstep_period = 1.0 / m_cstep_period;
    }

    bool
    FollowTrajectory::initTrajectory(const IMC::FollowTrajectory* maneuver)
    {
      TPoint begin;

      Coordinates::WGS84::displacement(m_rlat, m_rlon, 0, maneuver->lat, maneuver->lon, 0, &begin.x, &begin.y);
      begin.z = maneuver->z;
      begin.z_units = maneuver->z_units;
      begin.t = 0;
      m_traj.push_back(begin);

      const IMC::MessageList<IMC::TrajectoryPoint>* list = &maneuver->points;

      IMC::MessageList<IMC::TrajectoryPoint>::const_iterator itr;

      for (itr = list->begin(); itr != list->end(); itr++)
      {
        TPoint p;
        p.x = (*itr)->x + begin.x;
        p.y = (*itr)->y + begin.y;
        p.z = maneuver->z + (*itr)->z;
        p.z_units = maneuver->z_units;
        p.t = (*itr)->t;

        m_traj.push_back(p);
      }

      if (m_traj.size() < 2)
      {
        signalError(DTR("too few trajectory points"));
        return false;
      }

      return true;
    }

    void
    FollowTrajectory::consume(const IMC::FollowTrajectory* msg)
    {
      if (!initTrajectory(msg))
        return;

      setControl(IMC::CL_PATH);

      m_path.end_lat = msg->lat;
      m_path.end_lon = msg->lon;
      m_path.end_z = msg->z;
      m_path.end_z_units = msg->z_units;

      m_path.speed = msg->speed;
      m_path.speed_units = msg->speed_units;

      dispatch(m_path);

      m_approach = true; // signal approach stage

      onInit(msg);
    }

    void
    FollowTrajectory::consume(const IMC::PathControlState* msg)
    {
      if (msg->flags & IMC::PathControlState::FL_NEAR)
      {
        if (m_approach)
        {
          m_approach = false;
          m_cstep_time = 0;
        }
        onPathCompletion();
      }
    }

    void
    FollowTrajectory::consume(const IMC::EstimatedState* msg)
    {
      if (m_approach)
        return;

      double now = msg->getTimeStamp();

      if (m_cstep_period > 0 && now - m_cstep_time < m_cstep_period)
        return;

      step(*msg);
      m_cstep_time = now;
      m_rlat = msg->lat;
      m_rlon = msg->lon;
    }

    void
    FollowTrajectory::onManeuverDeactivation(void)
    {
      onReset();

      m_approach = false;
      m_traj.clear();
    }

    void
    FollowTrajectory::desiredPath(const TPoint& s, const TPoint& e)
    {
      m_path.start_lat = m_rlat;
      m_path.start_lon = m_rlon;
      Coordinates::WGS84::displace(s.x, s.y, &m_path.start_lat, &m_path.start_lon);
      m_path.start_z = s.z;
      m_path.start_z_units = s.z_units;

      m_path.end_lat = m_rlat;
      m_path.end_lon = m_rlon;
      Coordinates::WGS84::displace(e.x, e.y, &m_path.end_lat, &m_path.end_lon);
      m_path.end_z = e.z;
      m_path.end_z_units = e.z_units;

      m_path.lradius = -1;

      m_path.flags = IMC::DesiredPath::FL_START;

      dispatch(m_path);
    }

    void
    FollowTrajectory::desiredSpeed(double value, uint8_t units)
    {
      m_path.speed = value;
      m_path.speed_units = units;

      IMC::DesiredSpeed speed;
      speed.value = value;
      speed.speed_units = units;

      dispatch(speed);
    }
  }
}
