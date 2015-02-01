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

#ifndef SENSORS_LIMU_ERROR_HANDLING_HPP_INCLUDED_
#define SENSORS_LIMU_ERROR_HANDLING_HPP_INCLUDED_

// ISO C++ 98 headers.
#include <map>

namespace Sensors
{
  namespace LIMU
  {
    //! IMU error flags.
    enum ErrorFlags
    {
      //! Watchdog timeout.
      ERR_FLAG_WDOG_TOUT = (1 << 15),
      //! Processing overrun.
      ERR_FLAG_PROC_OVR = (1 << 7),
      //! Sensor overrange.
      ERR_FLAG_SENS_OVR = (1 << 4),
      //! SPI communication error.
      ERR_FLAG_SPI_ERR = (1 << 3)
    };

    //! Error counts.
    class ErrorCounts
    {
    public:
      void
      clear(void)
      {
        std::map<ErrorFlags, unsigned>::iterator itr = m_counts.begin();
        for (; itr != m_counts.end(); ++itr)
          itr->second = 0;
      }

      void
      increment(ErrorFlags flag)
      {
        std::map<ErrorFlags, unsigned>::iterator itr = m_counts.find(flag);
        if (itr == m_counts.end())
          m_counts[flag] = 0;
        else
          ++m_counts[flag];
      }

      unsigned
      getTotal(void)
      {
        unsigned total = 0;
        std::map<ErrorFlags, unsigned>::const_iterator itr = m_counts.begin();
        for (; itr != m_counts.end(); ++itr)
          total += itr->second;
        return total;
      }

    private:
      std::map<ErrorFlags, unsigned> m_counts;
    };
  }
}

#endif
