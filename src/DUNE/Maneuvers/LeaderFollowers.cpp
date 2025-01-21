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
// Author: Eduardo Marques                                                  *
//***************************************************************************

#include <DUNE/Math/Angles.hpp>
#include <DUNE/Coordinates.hpp>
#include <DUNE/Maneuvers/LeaderFollowers.hpp>

namespace DUNE
{
  namespace Maneuvers
  {
    using namespace DUNE::IMC;

    LeaderFollowers::LeaderFollowers(const std::string& name, Tasks::Context& ctx):
      Maneuver(name, ctx)
    {
      // Control step period is ignored if negative
      param("Leader", m_leader)
      .defaultValue("false")
      .description("True if this vehicle is the formation leader");

      bindToManeuver<LeaderFollowers, IMC::VehicleFormation>();
      bind<IMC::EstimatedState>(this, true);
      bind<IMC::RemoteState>(this);
    }

    LeaderFollowers::~LeaderFollowers(void)
    { }

    void
    LeaderFollowers::onUpdateParameters(void)
    {
    }

    bool
    LeaderFollowers::initParticipants(const IMC::VehicleFormation* maneuver)
    {
      int idx = 0;
      int local_addr = getSystemId();
      m_fidx = -1;

      inf(DTR("parsing vehicle participants"));

      const IMC::MessageList<IMC::VehicleFormationParticipant>* list = &maneuver->participants;

      IMC::MessageList<IMC::VehicleFormationParticipant>::const_iterator itr;
      for(itr = list->begin(); itr != list->end(); itr++)
      {
        try
        {
          inf("%s", resolveSystemId((*itr)->vid));
        }
        catch (...)
        {
          signalError(DTR("invalid formation participant"));
          return false;
        }

        Participant p;
        p.vid = (*itr)->vid;
        p.x = (*itr)->off_x;
        p.y = (*itr)->off_y;
        p.z = (*itr)->off_z;

        m_participants.push_back(p);

        if (m_addr2idx.find(p.vid) != m_addr2idx.end())
        {
          signalError(DTR("repeated vehicles in participant list"));
          return false;
        }

        m_addr2idx[p.vid] = idx;

        if (p.vid == local_addr)
          m_fidx = idx;

        ++idx;
      }

      if (m_participants.size() < 2)
      {
        signalError(DTR("not enough vehicles in formation (at least 2 are required)"));
        return false;
      }

      if (m_fidx == -1)
      {
        signalError(DTR("local vehicle is not part of formation"));
        return false;
      }
      return true;
    }

    bool
    LeaderFollowers::initTrajectory(const IMC::VehicleFormation* maneuver)
    {
      TPoint begin;

      toLocalCoordinates(maneuver->lat, maneuver->lon, &begin.x, &begin.y);
      begin.z = maneuver->z;
      begin.t = 0;

      const IMC::MessageList<IMC::TrajectoryPoint>* list = &maneuver->points;

      IMC::MessageList<IMC::TrajectoryPoint>::const_iterator itr;

      for(itr = list->begin(); itr != list->end(); itr++)
      {
        TPoint p;
        p.x = (*itr)->x + begin.x;
        p.y = (*itr)->y + begin.y;
        p.z = maneuver->z + (*itr)->z;
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
    LeaderFollowers::consume(const IMC::VehicleFormation* msg)
    {
      if (!initParticipants(msg) || !initTrajectory(msg))
        return;

      setControl(IMC::CL_PATH);

      const Participant& part = self();
      m_path.end_lat = msg->lat;
      m_path.end_lon = msg->lon;

      double b1, r1, b2, r2;
      Coordinates::toPolar(part, &b1, &r1);
      Coordinates::toPolar(m_traj[0], &b2, &r2);
      TPoint start_p;
      start_p.x = 0;
      start_p.y = 0;
      Coordinates::displace(start_p, b1 + b2, r1);
      Coordinates::WGS84::displace(start_p.x, start_p.y, &m_path.end_lat, &m_path.end_lon);

      m_path.end_z_units = msg->z_units;
      m_path.end_z = msg->z + part.z;

      m_path.speed = msg->speed;
      m_path.speed_units = msg->speed_units;

      m_speed = msg->speed;
      m_speed_units = msg->speed_units;

      dispatch(m_path);

      m_approach = true; // signal approach stage

      onInit(msg);
    }

    void
    LeaderFollowers::onPathControlState(const IMC::PathControlState* pcs)
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
    LeaderFollowers::consume(const IMC::EstimatedState* msg)
    {
      if (m_approach)
        return;

      step(*msg);
      m_cstep_time = now;
      m_rlat = msg->lat;
      m_rlon = msg->lon;
    }

    void
    LeaderFollowers::consume(const IMC::RemoteState* msg)
    {
      std::map<int, int>::iterator itr = m_addr2idx.find(msg->getSource());

      if (itr != m_addr2idx.end())
        onUpdate(itr->second, *msg);
    }

    void
    LeaderFollowers::toLocalCoordinates(double lat, double lon, double* x, double* y)
    {
      Coordinates::WGS84::displacement(m_rlat, m_rlon, 0, lat, lon, 0, x, y);
    }

    void
    LeaderFollowers::onManeuverDeactivation(void)
    {
      onReset();

      m_approach = false;
      m_traj.clear();
      m_participants.clear();
      m_addr2idx.clear();
    }

    void
    LeaderFollowers::desiredPath(const TPoint& s, const TPoint& e, double speed, uint8_t speed_units, double radius)
    {
      m_path.start_lat = m_rlat;
      m_path.start_lon = m_rlon;
      Coordinates::WGS84::displace(s.x, s.y, &m_path.start_lat, &m_path.start_lon);
      m_path.start_z = s.z;

      m_path.end_lat = m_rlat;
      m_path.end_lon = m_rlon;
      Coordinates::WGS84::displace(e.x, e.y, &m_path.end_lat, &m_path.end_lon);
      m_path.end_z = e.z;

      m_path.lradius = radius;
      m_path.flags = 0; // IMC::DesiredPath::FL_START;

      m_path.speed = speed;
      m_path.speed_units = speed_units;

      dispatch(m_path);
    }

    void
    LeaderFollowers::desiredSpeed(double value, uint8_t units)
    {
      m_path.speed = value;
      m_path.speed_units = units;

      IMC::DesiredSpeed speed;
      speed.value = value;
      speed.speed_units = units;
      dispatch(speed);
    }

    LeaderFollowers::TPoint
    LeaderFollowers::point(int t_index, int f_index)
    {
      TPoint p = m_traj[t_index];

      if (f_index >= 0)
      {
        const Participant& v = participant(f_index);
        double bearing;
        double range;
        Coordinates::toPolar(v, &bearing, &range);

        double offset = 0;

        if (t_index == 0)
        {
          offset = Coordinates::getBearing(p, m_traj[t_index + 1]);
        }
        else if ((size_t)t_index == trajectory_points() - 1)
        {
          offset = Coordinates::getBearing(m_traj[t_index - 1], p);
        }
        else
        {
          double leg_1_bearing = normalizeRadian(Coordinates::getBearing(m_traj[t_index - 1], p));
          double leg_2_bearing = normalizeRadian(Coordinates::getBearing(p, m_traj[t_index + 1]));
          offset = leg_1_bearing + (leg_2_bearing - leg_1_bearing) / 2;
        }

        offset = Math::Angles::normalizeRadian(offset);
        bearing = Math::Angles::normalizeRadian(bearing + offset);
        Coordinates::displace(p, bearing, range);
        p.z += v.z;
      }

      return p;
    }
  }
}
