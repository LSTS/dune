//***************************************************************************
// Copyright (C) 2007-2013 Laboratório de Sistemas e Tecnologia Subaquática *
// Departamento de Engenharia Electrotécnica e de Computadores              *
// Rua Dr. Roberto Frias, 4200-465 Porto, Portugal                          *
//***************************************************************************
// Author: Eduardo Marques                                                  *
//***************************************************************************

#ifndef DUNE_IMC_RATE_LIMITERS_HPP_INCLUDED_
#define DUNE_IMC_RATE_LIMITERS_HPP_INCLUDED_

// ISO C++ 98 headers.
#include <vector>
#include <map>

// DUNE headers.
#include <DUNE/IMC/Message.hpp>

namespace DUNE
{
  namespace Tasks
  {
    class RateLimiters
    {
    public:
      RateLimiters(void);

      ~RateLimiters(void);

      void
      setup(const std::vector<std::string>& spec);

      bool
      filter(const IMC::Message* msg);

    private:
      // Rate limiters.
      typedef std::map<uint32_t, double> RateMap;
      RateMap m_rates;

      // Send times.
      typedef std::pair<uint32_t, unsigned int> MsgKey;
      typedef std::map<MsgKey, double> STimesMap;
      STimesMap m_stimes;
    };
  }
}

#endif
