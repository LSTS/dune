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

#ifndef DUNE_TASKS_MESSAGE_FILTER_HPP_INCLUDED_
#define DUNE_TASKS_MESSAGE_FILTER_HPP_INCLUDED_

// ISO C++ 98 headers.
#include <vector>
#include <map>

// DUNE headers.
#include <DUNE/Tasks/Task.hpp>
#include <DUNE/IMC/Message.hpp>

namespace DUNE
{
  namespace Tasks
  {
    class MessageFilter
    {
    public:
      MessageFilter(void);

      ~MessageFilter(void);

      void
      setupRates(const std::vector<std::string>& spec);

      void
      setupEntities(const std::vector<std::string>& spec, Tasks::Task* task);

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

      // List of entities to be passed by given message
      typedef std::vector<uint32_t> Entities;
      std::map<uint32_t, Entities> m_filtered;
    };
  }
}

#endif
