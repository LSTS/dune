//***************************************************************************
// Copyright (C) 2007-2013 Laboratório de Sistemas e Tecnologia Subaquática *
// Departamento de Engenharia Electrotécnica e de Computadores              *
// Rua Dr. Roberto Frias, 4200-465 Porto, Portugal                          *
//***************************************************************************
// Author: Ricardo Martins                                                  *
//***************************************************************************
// $Id:: Initializer.hpp 12667 2013-01-22 02:44:42Z rasm                  $:*
//***************************************************************************

#ifndef DUNE_CONCURRENCY_INITIALIZER_HPP_INCLUDED_
#define DUNE_CONCURRENCY_INITIALIZER_HPP_INCLUDED_

// DUNE headers.
#include <DUNE/Config.hpp>

namespace DUNE
{
  namespace Concurrency
  {
    // Export DLL Symbol.
    class DUNE_DLL_SYM Initializer;

    class Initializer
    {
    public:
      //! Default constructor.
      Initializer(void);

      //! Default destructor.
      ~Initializer(void);
    };

    static Initializer initializer;
  }
}

#endif
