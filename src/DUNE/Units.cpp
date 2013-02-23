//***************************************************************************
// Copyright (C) 2007-2013 Laboratório de Sistemas e Tecnologia Subaquática *
// Departamento de Engenharia Electrotécnica e de Computadores              *
// Rua Dr. Roberto Frias, 4200-465 Porto, Portugal                          *
//***************************************************************************
// Author: Ricardo Martins                                                  *
//***************************************************************************

// ISO C++ 98 headers.
#include <cstddef>

// DUNE headers.
#include <DUNE/Units.hpp>

namespace DUNE
{
  static const char* c_abbrevs[] =
  {
#define UNIT(t, a) a,
#include <DUNE/Units.def>
    NULL
  };

  const char*
  Units::getAbbrev(Types type)
  {
    return c_abbrevs[type];
  }
}
