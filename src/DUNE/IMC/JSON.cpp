//***************************************************************************
// Copyright (C) 2007-2013 Laboratório de Sistemas e Tecnologia Subaquática *
// Departamento de Engenharia Electrotécnica e de Computadores              *
// Rua Dr. Roberto Frias, 4200-465 Porto, Portugal                          *
//***************************************************************************
// Author: Ricardo Martins                                                  *
//***************************************************************************

// DUNE headers.
#include <DUNE/IMC/JSON.hpp>

namespace DUNE
{
  namespace IMC
  {
    // Indentation levels.
    static const char* c_levels[] =
    {
      "",
      " ",
      "  ",
      "   ",
      "    ",
      "     ",
      "      ",
      "       ",
      "        ",
      "         ",
      "          ",
      "           ",
      "            "
    };

    // Number of indentation levels.
    static const unsigned c_levels_count = sizeof(c_levels) / sizeof(const char*);

    const char*
    indentJSON(unsigned count)
    {
      if (count > c_levels_count)
        count = c_levels_count;

      return c_levels[count];
    }
  }
}
