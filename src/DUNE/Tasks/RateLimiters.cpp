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

// DUNE headers.
#include <DUNE/IMC/Factory.hpp>
#include <DUNE/Time/Clock.hpp>
#include <DUNE/Utils/String.hpp>
#include <DUNE/Tasks/RateLimiters.hpp>

namespace DUNE
{
  namespace Tasks
  {
    RateLimiters::RateLimiters(void)
    { }

    RateLimiters::~RateLimiters(void)
    { }

    bool
    RateLimiters::filter(const IMC::Message* msg)
    {
      uint32_t mid = msg->getId();
      RateMap::iterator rmitr = m_rates.find(mid);

      if (rmitr != m_rates.end())
      {
        double now = Time::Clock::get();
        double& stime = m_stimes[MsgKey(mid, msg->getSourceEntity())];

        if (stime + rmitr->second > now)
          return true;

        stime = now;
      }

      return false;
    }

    void
    RateLimiters::setup(const std::vector<std::string>& spec)
    {
      m_rates.clear();
      m_stimes.clear();

      for (unsigned int i = 0; i < spec.size(); ++i)
      {
        std::vector<std::string> parts;
        Utils::String::split(spec[i], ":", parts);

        if (parts.size() == 2)
        {
          uint32_t id = IMC::Factory::getIdFromAbbrev(parts[0]);
          double rate = 0;
          if (std::sscanf(parts[1].c_str(), "%lf", &rate) && rate > 0)
          {
            m_rates[id] = 1.0 / rate;
            continue;
          }
        }
        throw std::runtime_error(Utils::String::str(DTR("invalid rate limiter: %s"), spec[i].c_str()));
      }
    }
  }
}
