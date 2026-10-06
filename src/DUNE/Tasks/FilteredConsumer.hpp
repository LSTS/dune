//***************************************************************************
// Copyright 2007-2025 Universidade do Porto - Faculdade de Engenharia      *
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
// Author: Luis Venâncio (from Consumer)                                    *
//***************************************************************************

#ifndef DUNE_TASKS_FILTERED_CONSUMER_HPP_INCLUDED_
#define DUNE_TASKS_FILTERED_CONSUMER_HPP_INCLUDED_

// DUNE headers.
#include <DUNE/Tasks/Consumer.hpp>

namespace DUNE
{
  namespace Tasks
  {
    template <typename T, typename M>
    class FilteredConsumer: public Consumer<T, M>
    {
    public:
      typedef typename Consumer<T, M>::Routine Routine;
      typedef bool (*Filter)(const M*);

      //! Constructor.
      FilteredConsumer(T& o, Routine f, Filter filter):
        Consumer<T, M>(o, f),
        m_filter(filter)
      { }

      void
      consume(const IMC::Message* msg) override
      {
        const M* m = static_cast<const M*>(msg);
        if (!m_filter(m))
          return;

        Consumer<T, M>::consume(msg);
      }

      ~FilteredConsumer(void)
      { }

    private:
      Filter m_filter;
    };
  }
}

#endif
