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
// Author: Luis Venâncio                                                    *
//***************************************************************************

#ifndef TRANSPORTS_EVOLOGICS_TIME_RESOLUTION_SCALE_HPP_INCLUDED_
#define TRANSPORTS_EVOLOGICS_TIME_RESOLUTION_SCALE_HPP_INCLUDED_

// ISO C++ 98 headers.
#include <vector>

// DUNE headers.
#include <DUNE/DUNE.hpp>

namespace Transports
{
  namespace Evologics
  {
    using DUNE_NAMESPACES;
    
    class TimeResolutionScale 
    {
    public:
      TimeResolutionScale()
      {
        computeTRSVTable();
        computeTRPTTable();
      }

      // Convert index of reserve time to milliseconds.
      //! @param[in] i index.
      //! @return time in milliseconds.
      double trsvIndexToMs(const uint8_t i) const
      {
        if (i > c_max_index)
          return m_trsv_table[c_max_index];
        return m_trsv_table[i];
      }

      // Convert index of repeat interval to milliseconds.
      //! @param[in] i index.
      //! @return time in seconds.
      double trptIndexToMs(const uint8_t i) const
      {
        if (i > c_max_index)
          return m_trpt_table[c_max_index];
        return m_trpt_table[i];
      }
      
    private:
      const uint8_t c_max_index = 127;
      const double c_trsv_rate = 1.1;
      const double c_trpt_rate = 1.176769793407883;
  
      std::vector<double> m_trsv_table;
      std::vector<double> m_trpt_table;
      void 
      computeTRSVTable()
      {
        m_trsv_table.resize(c_max_index + 1);
        m_trsv_table[0] = 0.0033211;
    
        for (int i = 1; i <= c_max_index; ++i) 
        {
          switch (i) 
          {
            case 60: m_trsv_table[i] = 1; break;
            case 84: m_trsv_table[i] = 10; break;
            case 103: m_trsv_table[i] = 60; break;
            case 127: m_trsv_table[i] = 600; break;
            default:
              m_trsv_table[i] = m_trsv_table[i - 1] * c_trsv_rate;
          }
        }
      }

      void 
      computeTRPTTable()
      {
        m_trpt_table.resize(c_max_index + 1);
        m_trpt_table[0] = 0.0033211;
    
        for (int i = 1; i <= c_max_index; ++i) 
        {
          switch (i) 
          {
            case 21: m_trpt_table[i] = 1; break;
            case 35: m_trpt_table[i] = 10; break;
            case 46: m_trpt_table[i] = 60; break;
            case 71: m_trpt_table[i] = 3600; break;
            case 91: m_trpt_table[i] = 86400; break;
            case 127: m_trpt_table[i] = 31557600; break;
            default:
              m_trpt_table[i] = m_trpt_table[i - 1] * c_trpt_rate;
          }
        }
      }
    };
  }
}

#endif
