//***************************************************************************
// Copyright (C) 2007-2013 Laboratório de Sistemas e Tecnologia Subaquática *
// Departamento de Engenharia Electrotécnica e de Computadores              *
// Rua Dr. Roberto Frias, 4200-465 Porto, Portugal                          *
//***************************************************************************
// Author: Ricardo Martins                                                  *
//***************************************************************************

#ifndef DUNE_USER_INTERFACES_LEDS_PARALLEL_PORT_HPP_INCLUDED_
#define DUNE_USER_INTERFACES_LEDS_PARALLEL_PORT_HPP_INCLUDED_

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
