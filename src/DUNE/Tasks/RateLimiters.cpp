//***************************************************************************
// Copyright (C) 2007-2013 Laboratório de Sistemas e Tecnologia Subaquática *
// Departamento de Engenharia Electrotécnica e de Computadores              *
// Rua Dr. Roberto Frias, 4200-465 Porto, Portugal                          *
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
        throw std::runtime_error("invalid rate limiter: " + spec[i]);
      }
    }
  }
}
