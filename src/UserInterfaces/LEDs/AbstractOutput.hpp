//***************************************************************************
// Copyright (C) 2007-2013 Laboratório de Sistemas e Tecnologia Subaquática *
// Departamento de Engenharia Electrotécnica e de Computadores              *
// Rua Dr. Roberto Frias, 4200-465 Porto, Portugal                          *
//***************************************************************************
// Author: Ricardo Martins                                                  *
//***************************************************************************
// $Id:: AbstractOutput.hpp 12667 2013-01-22 02:44:42Z rasm               $:*
//***************************************************************************

#ifndef USER_INTERFACES_LEDS_ABSTRACT_OUTPUT_HPP_INCLUDED_
#define USER_INTERFACES_LEDS_ABSTRACT_OUTPUT_HPP_INCLUDED_

// DUNE headers.
#include <DUNE/DUNE.hpp>

namespace UserInterfaces
{
  namespace LEDs
  {
    class AbstractOutput
    {
    public:
      virtual
      ~AbstractOutput(void)
      { }

      virtual void
      setValue(bool value) = 0;
    };
  }
}

#endif
