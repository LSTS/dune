//***************************************************************************
// Copyright (C) 2007-2013 Laboratório de Sistemas e Tecnologia Subaquática *
// Departamento de Engenharia Electrotécnica e de Computadores              *
// Rua Dr. Roberto Frias, 4200-465 Porto, Portugal                          *
//***************************************************************************
// Author: Ricardo Martins                                                  *
//***************************************************************************

#ifndef DUNE_MEMORY_HPP_INCLUDED_
#define DUNE_MEMORY_HPP_INCLUDED_

// ISO C++ 98 headers.
#include <cstddef>

namespace DUNE
{
  class Memory
  {
  public:
    template <typename T>
    static inline void
    clear(T& var)
    {
      if (var != NULL)
      {
        delete var;
        var = NULL;
      }
    }

    template <typename T>
    static inline void
    replace(T& var, T rep)
    {
      if (var != NULL)
        delete var;

      var = rep;
    }
  };
}

#endif
