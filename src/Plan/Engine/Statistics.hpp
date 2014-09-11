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

#ifndef DUNE_PLAN_ENGINE_STATISTICS_HPP_INCLUDED_
#define DUNE_PLAN_ENGINE_STATISTICS_HPP_INCLUDED_

// ISO C++ 98 headers.
#include <map>
#include <cstring>
#include <sstream>

// DUNE headers
#include <DUNE/IMC.hpp>

// Local headers
#include "Timeline.hpp"
#include "FuelPrediction.hpp"
#include "ComponentActiveTime.hpp"

namespace Plan
{
  namespace Engine
  {
    using DUNE_NAMESPACES;

    //! value for not available or invalid
    static const std::string c_invalid = "N/A";

    class Statistics
    {
    public:
      //! Constructor
      //! @param[in] msg pointer to statistics message
      Statistics(IMC::PlanStatistics* msg):
        m_ps(msg)
      { }

      //! Fill in properties
      //! @param[in] prop properties of the plan
      void
      setProperties(unsigned prop)
      {
        m_ps->properties = prop & IMC::PlanStatistics::PRP_ALL;
      }

    protected:
      //! Add tuple with a floating point value
      //! @param[in] name the name of the tuple
      //! @param[in] value the value of the tuple
      //! @param[in] precision number of decimal places when printing
      void
      addTuple(std::string& str, const std::string& name, float value,
               unsigned precision = 1)
      {
        std::stringstream ss;
        ss << std::fixed << std::setprecision(precision) << value;
        addTuple(str, name, ss.str());
      }

      //! Add tuple with a string value
      //! @param[in] name the name of the tuple
      //! @param[in] value the value of the tuple
      void
      addTuple(std::string& str, const std::string& name, const std::string& value)
      {
        std::stringstream ss;

        if (!str.empty())
          ss << ",";

        ss << name << "=" << value;
        str.append(ss.str());
      }

      //! Pointer to message
      IMC::PlanStatistics* m_ps;
    };

    //! Class for handling pre-computed statistics
    class PreStatistics: public Statistics
    {
    public:
      //! Constructor
      //! @param[in] msg pointer to statistics message
      PreStatistics(IMC::PlanStatistics* msg):
        Statistics(msg)
      {
        m_ps->type = IMC::PlanStatistics::TP_PREPLAN;
      }

      //! Fill in durations
      //! @param[in] nodes vector of sequenced PlanManeuver nodes
      //! @param[in] tl Timeline of the plan
      void
      fill(const std::vector<IMC::PlanManeuver*>& nodes, const Timeline& tl)
      {
        if (tl.getPlanETA() < 0.0)
        {
          addTuple(m_ps->durations, DTR("Total"), c_invalid);
          return;
        }

        addTuple(m_ps->durations, DTR("Total"), tl.getPlanETA());
        addTuple(m_ps->durations, DTR("Execution"), tl.getExecutionDuration());
        addTuple(m_ps->durations, DTR("Calibration"),
                 tl.getPlanETA() - tl.getExecutionDuration());

        std::vector<IMC::PlanManeuver*>::const_iterator itr;
        itr = nodes.begin();

        for (; itr != nodes.end(); ++itr)
        {
          std::string id = (*itr)->maneuver_id;
          float start = tl.getManeuverStartETA(id);
          float end = tl.getManeuverEndETA(id);
          addTuple(m_ps->durations, DTR("Maneuver ") + id, start - end);
        }
      }

      //! Fill in actions
      //! @param[in] cat list of times that components are active
      void
      fill(const ComponentActiveTime& cat)
      {
        ComponentActiveTime::const_iterator itr;
        itr = cat.begin();

        for (; itr != cat.end(); ++itr)
          addTuple(m_ps->actions, itr->first, itr->second);
      }

      //! Fill in fuel predictions
      //! @param[in] fpred fuel prediction object
      void
      fill(const FuelPrediction& fpred)
      {
        if (fpred.getTotal() < 0.0)
        {
          addTuple(m_ps->fuel, DTR("Total"), c_invalid);
          return;
        }

        addTuple(m_ps->fuel, DTR("Total"), fpred.getTotal(true), 2);
        addTuple(m_ps->fuel, DTR("Hotel"), fpred.getHotel(true), 2);
        addTuple(m_ps->fuel, DTR("Payload"), fpred.getPayload(true), 2);
        addTuple(m_ps->fuel, DTR("Motion"), fpred.getMotion(true), 2);
        addTuple(m_ps->fuel, DTR("IMU"), fpred.getIMU(true), 2);
      }
    };

    //! Class for handling run time statistics
    class RunTimeStatistics: public Statistics
    {
    public:
      //! Constructor
      //! @param[in] msg pointer to statistics message
      RunTimeStatistics(IMC::PlanStatistics* msg):
        Statistics(msg)
      {
        m_ps->type = IMC::PlanStatistics::TP_POSTPLAN;
      }

      //! Fill in with fuel info
      //! @param[in] fpred fuel prediction object
      void
      fill(const FuelPrediction& fpred)
      {
        if (!fpred.isFuelValid())
          return;

        addTuple(m_ps->fuel, DTR("Prediction Error"), fpred.getPredictionError(), 2);
      }
    };
  }
}

#endif
