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
// Author: Bernardo Gabriel                                                 *
//***************************************************************************

#include <DUNE/Monitors/AISProximity.hpp>

namespace DUNE
{
  namespace Monitors
  {
    AISProximity::~AISProximity(void)
    { }

    void
    AISProximity::consume(const IMC::AisInfo* msg)
    {
      if (msg->getSource() != getSystemId())
        return;

      if ((msg->msg_type.compare("1") != 0) ||
          (msg->msg_type.compare("2") != 0) ||
          (msg->msg_type.compare("3") != 0))
        return;

      const auto ts = msg->getTimeStamp();
      float distance = 0;

      switch (m_method)
      {
      case DISTANCE_METHOD_LATLON:
        WGS84::distance(m_lat, m_lon, 0, msg->lat, msg->lon, 0);
        break;

      case DISTANCE_METHOD_AIS_DIST:
        distance = msg->dist;
        break;
      
      case DISTANCE_METHOD_BOTH:
        if (msg->dist <= 0.0f)
          distance = WGS84::distance(m_lat, m_lon, 0, msg->lat, msg->lon, 0);
        else
          distance = msg->dist;
        break;

      default:
        throw std::runtime_error("Unknown distance method in AISProximity.");
      }

      war("Received AIS message from %s (%s) at a distance of %f",
           msg->mmsi.c_str(), msg->name.c_str(), distance);

      std::map<std::string, DUNE::Monitors::AISTarget>::iterator target = m_ais_targets.find(msg->mmsi);
      if (target == m_ais_targets.end())
      {
        AISTarget new_target;
        new_target.last_update = ts;
        new_target.distance = distance;
        m_ais_targets[msg->mmsi] = new_target;
      }
      else if (ts > target->second.last_update)
      {
        target->second.last_update = ts;
        target->second.distance = distance;
      }

      updateAISTargets();
    }

    void
    AISProximity::consume(const IMC::EstimatedState* msg)
    {
      if (msg->getSource() != getSystemId())
        return;

      if (msg->getTimeStamp() <= m_last_estate)
        return;

      m_last_estate = msg->getTimeStamp();
      Coordinates::toWGS84(*msg, m_lat, m_lon);
    }

    void
    AISProximity::onTargetsInProximity(void)
    { }

    void
    AISProximity::onNoTargetsInProximity(void)
    { }

    void
    AISProximity::updateAISTargets(void)
    {
      const auto ais_in_proximity = !m_ais_in_proximity.empty();

      const auto now = Time::Clock::getSinceEpoch();
      for (const auto& target : m_ais_targets)
      {
        const bool in_proximity = (target.second.distance <= m_aisp_args.proximity_distance * 1000.0);
        if (target.second.last_update + m_aisp_args.discard_ais < now)
        {
          m_ais_targets.erase(target.first);
          m_ais_in_proximity.erase(target.first);
        }
        if (!in_proximity)
        {
          m_ais_in_proximity.erase(target.first);
        }
        else if (in_proximity)
        {
          const bool empty = m_ais_in_proximity.empty();
          m_ais_in_proximity.insert(target.first);
          if (empty)
            onTargetsInProximity();
        }
      }

      if (ais_in_proximity && m_ais_in_proximity.empty())
      {
        onNoTargetsInProximity();
      }
    }
  }
}
