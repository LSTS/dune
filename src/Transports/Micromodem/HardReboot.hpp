//***************************************************************************
// Copyright (C) 2007-2013 Laboratório de Sistemas e Tecnologia Subaquática *
// Departamento de Engenharia Electrotécnica e de Computadores              *
// Rua Dr. Roberto Frias, 4200-465 Porto, Portugal                          *
//***************************************************************************
// Author: Ricardo Martins                                                  *
//***************************************************************************
// $Id:: HardReboot.hpp 12667 2013-01-22 02:44:42Z rasm                   $:*
//***************************************************************************

#ifndef TRANSPORTS_MICROMODEM_HARD_REBOOT_HPP_INCLUDED_
#define TRANSPORTS_MICROMODEM_HARD_REBOOT_HPP_INCLUDED_

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
    class HardReboot: public Transaction
    {
    public:
      HardReboot(unsigned addr)
      {
        setTimeout(2.0);

        addOut(String::str("CCMSC,%u,%u,0", addr, addr));
        addIn("INIT");
        addIn("AUV");
      }

      bool
      matchFuzzy(const std::string& stn, const std::string& exp)
      {
        std::cerr << "fuzzy match " << stn << " | expected " << exp << std::endl;

        char version[16];
        char ident[8];

        if (std::sscanf(stn.c_str(), "CAREV,%*[^,],%[^,],%s", ident, version) == 2)
        {
          if (exp == "INIT" || exp == "AUV")
            return exp == ident;
        }

        return false;
      }
    };
  }
}

#endif
