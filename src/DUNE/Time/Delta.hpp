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
// Author: Ricardo Martins                                                  *
//***************************************************************************

#ifndef DUNE_TIME_DELTA_HPP_INCLUDED_
#define DUNE_TIME_DELTA_HPP_INCLUDED_

// DUNE headers.
#include <DUNE/Time/Clock.hpp>

namespace DUNE
{
  namespace Time
  {
    class Delta
    {
    public:
      Delta(void):
        m_last(-1.0)
      { }

      inline void
      clear(void)
      {
        m_last = -1.0;
      }

      inline double
      getDelta(void)
      {
        if (m_last < 0.0)
        {
          m_last = Time::Clock::get();
          return -1.0;
        }

        double now = Time::Clock::get();
        double delta = now - m_last;
        m_last = now;

        return delta;
      }

      inline static bool
      isInvalid(double delta)
      {
        return (delta < 0.0);
      }

    private:
      double m_last;
    };
  }
}

#endif
