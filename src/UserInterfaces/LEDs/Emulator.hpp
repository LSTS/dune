//***************************************************************************
// Copyright (C) 2007-2013 Laboratório de Sistemas e Tecnologia Subaquática *
// Departamento de Engenharia Electrotécnica e de Computadores              *
// Rua Dr. Roberto Frias, 4200-465 Porto, Portugal                          *
//***************************************************************************
// Author: Ricardo Martins                                                  *
//***************************************************************************

#ifndef DUNE_USER_INTERFACES_LEDS_EMULATOR_HPP_INCLUDED_
#define DUNE_USER_INTERFACES_LEDS_EMULATOR_HPP_INCLUDED_

// ISO C++ 98 headers.
#include <cstdio>

// DUNE headers.
#include <DUNE/DUNE.hpp>

// Local headers.
#include "AbstractOutput.hpp"

namespace UserInterfaces
{
  namespace LEDs
  {
    using DUNE_NAMESPACES;

    class Emulator: public AbstractOutput
    {
    public:
      Emulator(unsigned nr):
        m_nr(nr)
      { }

      void
      setValue(bool value)
      {
        char cmd[6];
        std::sprintf(cmd, "%d %d", m_nr, value ? 1 : 0);

        UDPSocket sock;
        sock.write(cmd, 3, Address::Any, 6969);
      }

    private:
      unsigned m_nr;
    };
  }
}

#endif
