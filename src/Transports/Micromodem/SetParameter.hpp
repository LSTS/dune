//***************************************************************************
// Copyright (C) 2007-2013 Laboratório de Sistemas e Tecnologia Subaquática *
// Departamento de Engenharia Electrotécnica e de Computadores              *
// Rua Dr. Roberto Frias, 4200-465 Porto, Portugal                          *
//***************************************************************************
// Author: Ricardo Martins                                                  *
//***************************************************************************
// $Id:: SetParameter.hpp 12667 2013-01-22 02:44:42Z rasm                 $:*
//***************************************************************************

#ifndef TRANSPORTS_MICROMODEM_SET_PARAMETER_HPP_INCLUDED_
#define TRANSPORTS_MICROMODEM_SET_PARAMETER_HPP_INCLUDED_

// ISO C++ 98 headers.
#include <queue>

// DUNE headers.
#include <DUNE/DUNE.hpp>

// Local headers.
#include "Transaction.hpp"

namespace Transports
{
  namespace Micromodem
  {
    class SetParameter: public Transaction
    {
    public:
      SetParameter(const std::string& param, unsigned value)
      {
        std::string cmd = String::str("CCCFG,%s,%u", param.c_str(), value);
        addOut(cmd);
        addIn(getStandardEcho(cmd));
      }
    };
  }
}

#endif
