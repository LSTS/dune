//***************************************************************************
// Copyright 2007-2013 Universidade do Porto - Faculdade de Engenharia      *
// Laboratório de Sistemas e Tecnologia Subaquática (LSTS)                  *
//***************************************************************************
// This file is part of DUNE: Unified Navigation Environment.               *
//                                                                          *
// Commercial Licence Usage                                                 *
// Licencees holding valid commercial DUNE licences may use this file in    *
// accordance with the commercial licence agreement provided with the       *
// Software or, alternatively, in accordance with the terms contained in a  *
// written agreement between you and Universidade do Porto. For licensing   *
// terms, conditions, and further information contact lsts@fe.up.pt.        *
//                                                                          *
// European Union Public Licence - EUPL v.1.1 Usage                         *
// Alternatively, this file may be used under the terms of the EUPL,        *
// Version 1.1 only (the "Licence"), appearing in the file LICENCE.md       *
// included in the packaging of this file. You may not use this work        *
// except in compliance with the Licence. Unless required by applicable     *
// law or agreed to in writing, software distributed under the Licence is   *
// distributed on an "AS IS" basis, WITHOUT WARRANTIES OR CONDITIONS OF     *
// ANY KIND, either express or implied. See the Licence for the specific    *
// language governing permissions and limitations at                        *
// https://www.lsts.pt/dune/licence.                                        *
//***************************************************************************
// Author: Ricardo Martins                                                  *
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
