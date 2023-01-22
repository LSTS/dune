//***************************************************************************
// Copyright 2007-2022 Universidade do Porto - Faculdade de Engenharia      *
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
// Author: Pedro Calado                                                     *
//***************************************************************************

// DUNE headers.
#include <DUNE/Plans/Progress.hpp>

namespace DUNE
{
  namespace Plans
  {
    static const std::string c_waypoint_str = "waypoint";

    bool
    Progress::getPoint(const IMC::ManeuverControlState* mcs, unsigned& number)
    {
      std::vector<std::vector<std::string> > lstElems;
      Utils::String::splitMulti(mcs->info, ";", "=", lstElems);

      if (!lstElems.size())
        return false;

      std::vector<std::vector<std::string> >::iterator itr = lstElems.begin();
      for (; itr != lstElems.end(); ++itr)
      {
        if (!itr->size() || itr->size() < 2 || itr->front() == "" || itr->back() == "")
          continue;

        std::string name = itr->front().c_str();
        name = Utils::String::trim(name);
        Utils::String::toLowerCase(name);

        if (c_waypoint_str == name)
        {
          number = std::atoi(itr->back().c_str());
          return true;
        }
      }

      return false;
    }

    float
    Progress::compute(const IMC::ManeuverControlState* mcs, const std::vector<float>& durations,
                      float total_duration)
    {
      unsigned curr = 0;

      if (!getPoint(mcs, curr))
        return -1.0;

      if (curr > durations.size())
        return -1.0;

      return total_duration - durations[curr] + (float)mcs->eta;
    }

    float
    Progress::compute(const IMC::FollowPath* maneuver, const IMC::ManeuverControlState* mcs,
                      const std::vector<float>& durations, float total_duration)
    {
      (void)maneuver;

      return compute(mcs, durations, total_duration);
    }

    float
    Progress::compute(const IMC::Rows* maneuver, const IMC::ManeuverControlState* mcs,
                      const std::vector<float>& durations, float total_duration)
    {
      (void)maneuver;

      return compute(mcs, durations, total_duration);
    }

    float
    Progress::compute(const IMC::RowsCoverage* maneuver, const IMC::ManeuverControlState* mcs,
                      const std::vector<float>& durations, float total_duration)
    {
      (void)maneuver;

      return compute(mcs, durations, total_duration);
    }

    float
    Progress::compute(const IMC::Message* man, const IMC::ManeuverControlState* mcs,
                      const std::vector<float>& durations, float total_duration)
    {
      if (man == NULL)
        return -1.0;

      if (!durations.size() || mcs->eta == c_max_eta)
        return -1.0;

      float time_left = -1.0;

      switch (man->getId())
      {
        case DUNE_IMC_STATIONKEEPING:
        case DUNE_IMC_LOITER:
        case DUNE_IMC_ELEVATOR:
        case DUNE_IMC_YOYO:
        case DUNE_IMC_POPUP:
        case DUNE_IMC_COMPASSCALIBRATION:
        case DUNE_IMC_GOTO:
          time_left = total_duration - durations[0] + (float)mcs->eta;
          break;
        case DUNE_IMC_FOLLOWPATH:
          time_left = compute(static_cast<const IMC::FollowPath*>(man), mcs,
                              durations, total_duration);
          break;
        case DUNE_IMC_ROWS:
          time_left = compute(static_cast<const IMC::Rows*>(man), mcs,
                              durations, total_duration);
          break;
        case DUNE_IMC_ROWSCOVERAGE:
          time_left = compute(static_cast<const IMC::RowsCoverage*>(man), mcs,
                              durations, total_duration);
          break;
        default:
          return -1.0;
      }

      if (time_left < 0.0)
        return -1.0;

      time_left = Math::trimValue(time_left, 0.0f, total_duration);

      return 100.0f * Math::trimValue((1.0f - time_left / total_duration), 0.0f, 1.0f);
    }

  }
}
