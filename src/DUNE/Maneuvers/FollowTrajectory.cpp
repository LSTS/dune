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
      param("Control Step Frequency", m_cstep_period)
      .units(Units::Hertz)
      .defaultValue("1.0");

      bindToManeuver<FollowTrajectory, IMC::FollowTrajectory>();
      bind<IMC::EstimatedState>(this);
    }

    FollowTrajectory::~FollowTrajectory(void)
    { }

    void
    FollowTrajectory::onUpdateParameters(void)
    {
      if (paramChanged(m_cstep_period))
        m_cstep_period = 1.0 / m_cstep_period;
    }

    bool
    FollowTrajectory::initTrajectory(const IMC::FollowTrajectory* maneuver)
    {
      const IMC::MessageList<IMC::TrajectoryPoint>* list = &maneuver->points;

      IMC::MessageList<IMC::TrajectoryPoint>::const_iterator itr;

      for (itr = list->begin(); itr != list->end(); itr++)
      {
        TPoint p;
        p.x = (*itr)->x;
        p.y = (*itr)->y;
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

      if (!canInit(msg))
        return;

      setControl(IMC::CL_PATH);

      m_path.end_lat = msg->lat;
      m_path.end_lon = msg->lon;
      m_path.end_z = msg->z;
      m_path.end_z_units = msg->z_units;

      m_path.speed = msg->speed;
      m_path.speed_units = msg->speed_units;

      m_rlat = msg->lat;
      m_rlon = msg->lon;

      dispatch(m_path);

      m_approach = true; // signal approach stage
    }

    void
    FollowTrajectory::onPathControlState(const IMC::PathControlState* pcs)
    {
      if (pcs->flags & IMC::PathControlState::FL_NEAR)
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

      if ((m_cstep_period > 0) && (now - m_cstep_time < m_cstep_period))
        return;

      step(*msg);
      m_cstep_time = now;
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
