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
#include <DUNE/Maneuvers/VehicleFormation.hpp>

namespace DUNE
{
  namespace Maneuvers
  {
    using namespace DUNE::IMC;

    VehicleFormation::VehicleFormation(const std::string& name, Tasks::Context& ctx):
      Maneuver(name, ctx)
    {
      // Control step period is ignored if negative
      param("Control Step Frequency", m_cstep_period)
      .units(Units::Hertz)
      .defaultValue("-1.0")
      .description("Ignored on negative values");

      bindToManeuver<VehicleFormation, IMC::VehicleFormation>();
      bind<IMC::EstimatedState>(this);
      bind<IMC::RemoteState>(this);
    }

    VehicleFormation::~VehicleFormation(void)
    { }

    void
    VehicleFormation::onUpdateParameters(void)
    {
      m_cstep_period = 1.0 / m_cstep_period;
    }

    bool
    VehicleFormation::initParticipants(const IMC::VehicleFormation* maneuver)
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
    VehicleFormation::initTrajectory(const IMC::VehicleFormation* maneuver)
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
    VehicleFormation::consume(const IMC::VehicleFormation* msg)
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

      m_path.end_z = msg->z + part.z;

      m_path.speed = msg->speed;
      m_path.speed_units = msg->speed_units;

      dispatch(m_path);

      m_approach = true; // signal approach stage

      onInit(msg);
    }

    void
    VehicleFormation::onPathControlState(const IMC::PathControlState* pcs)
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
    VehicleFormation::consume(const IMC::EstimatedState* msg)
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
    VehicleFormation::consume(const IMC::RemoteState* msg)
    {
      std::map<int, int>::iterator itr = m_addr2idx.find(msg->getSource());

      if (itr != m_addr2idx.end())
        onUpdate(itr->second, *msg);
    }

    void
    VehicleFormation::toLocalCoordinates(double lat, double lon, double* x, double* y)
    {
      Coordinates::WGS84::displacement(m_rlat, m_rlon, 0, lat, lon, 0, x, y);
    }

    void
    VehicleFormation::onManeuverDeactivation(void)
    {
      onReset();

      m_approach = false;
      m_traj.clear();
      m_participants.clear();
      m_addr2idx.clear();
    }

    void
    VehicleFormation::desiredPath(const TPoint& s, const TPoint& e, double radius)
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

      dispatch(m_path);
    }

    void
    VehicleFormation::desiredSpeed(double value, uint8_t units)
    {
      m_path.speed = value;
      m_path.speed_units = units;

      IMC::DesiredSpeed speed;
      speed.value = value;
      speed.speed_units = units;
      dispatch(speed);
    }

    VehicleFormation::TPoint
    VehicleFormation::point(int t_index, int f_index) const
    {
      TPoint p = m_traj[t_index];

      if (f_index >= 0)
      {
        const Participant& v = participant(f_index);

        double bearing;
        double range;

        Coordinates::toPolar(v, &bearing, &range);

        if ((size_t)t_index < trajectory_points() - 1)
          bearing += Coordinates::getBearing(p, m_traj[t_index + 1]);
        else
          bearing += Coordinates::getBearing(m_traj[t_index - 2], p);

        Coordinates::displace(p, bearing, range);
        p.z += v.z;
      }

      return p;
    }
  }
}
