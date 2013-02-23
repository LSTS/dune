//***************************************************************************
// Copyright (C) 2007-2013 Laboratório de Sistemas e Tecnologia Subaquática *
// Departamento de Engenharia Electrotécnica e de Computadores              *
// Rua Dr. Roberto Frias, 4200-465 Porto, Portugal                          *
//***************************************************************************
// Author: Ricardo Martins                                                  *
//***************************************************************************
// $Id:: Units.hpp 12667 2013-01-22 02:44:42Z rasm                        $:*
//***************************************************************************

#ifndef DUNE_UNITS_HPP_INCLUDED_
#define DUNE_UNITS_HPP_INCLUDED_

namespace DUNE
{
  class Units
  {
  public:
    enum Types
    {
#define UNIT(t, a) t,
#include <DUNE/Units.def>
      TypeMax
    };

    static const char*
    getAbbrev(Types);
  };
}

#endif
