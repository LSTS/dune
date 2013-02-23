//***************************************************************************
// Copyright (C) 2007-2013 Laboratório de Sistemas e Tecnologia Subaquática *
// Departamento de Engenharia Electrotécnica e de Computadores              *
// Rua Dr. Roberto Frias, 4200-465 Porto, Portugal                          *
//***************************************************************************
// Author: Ricardo Martins                                                  *
//***************************************************************************

#ifndef DUNE_NETWORK_INITIALIZER_HPP_INCLUDED_
#define DUNE_NETWORK_INITIALIZER_HPP_INCLUDED_

// DUNE headers.
#include <DUNE/Config.hpp>

namespace DUNE
{
  namespace Network
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
