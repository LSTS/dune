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
// Author: Ricardo Martins                                                  *
//***************************************************************************

#ifndef USER_INTERFACES_LEDS_PARALLEL_PORT_HPP_INCLUDED_
#define USER_INTERFACES_LEDS_PARALLEL_PORT_HPP_INCLUDED_

// DUNE headers.
#include <DUNE/DUNE.hpp>

// Local headers.
#include "AbstractOutput.hpp"

namespace UserInterfaces
{
  namespace LEDs
  {
    using DUNE_NAMESPACES;

    class ParallelPort: public AbstractOutput
    {
    public:
      ParallelPort(unsigned addr, unsigned nr):
        m_nr(nr),
        m_port(0)
      {
        m_port = new IOPort(addr, 1);
      }

      ~ParallelPort(void)
      {
        if (m_port)
          delete m_port;
      }

      void
      setValue(bool value)
      {
        uint8_t data = m_port->read();

        if (value)
          data |= 1 << m_nr;
        else
          data &= ~(1 << m_nr);

        m_port->write(data);
      }

    private:
      unsigned m_nr;
      IOPort* m_port;
    };
  }
}

#endif
