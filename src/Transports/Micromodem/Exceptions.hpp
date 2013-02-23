//***************************************************************************
// Copyright (C) 2007-2013 Laboratório de Sistemas e Tecnologia Subaquática *
// Departamento de Engenharia Electrotécnica e de Computadores              *
// Rua Dr. Roberto Frias, 4200-465 Porto, Portugal                          *
//***************************************************************************
// Author: Ricardo Martins                                                  *
//***************************************************************************

#ifndef TRANSPORTS_MICROMODEM_EXCEPTIONS_HPP_INCLUDED_
#define TRANSPORTS_MICROMODEM_EXCEPTIONS_HPP_INCLUDED_

// ISO C++ 98 headers.
#include <queue>

// DUNE headers.
#include <DUNE/DUNE.hpp>

namespace Transports
{
  namespace Micromodem
  {
    class TransactionAborted: public std::runtime_error
    {
    public:
      TransactionAborted(void):
        std::runtime_error(DTR("transaction aborted"))
      { }
    };
  }
}

#endif
