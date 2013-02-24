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

#ifndef TRANSPORTS_MICROMODEM_PACKET_HPP_INCLUDED_
#define TRANSPORTS_MICROMODEM_PACKET_HPP_INCLUDED_

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
    //! Minimum duration of a packet transmission (s).
    static const double c_packet_duration = 6.0;

    class Packet: public Transaction
    {
    public:
      Packet(unsigned src, unsigned dst, const std::vector<char>& data, bool ack = false)
      {
        setTimeout(c_packet_duration);

        std::string cmd = String::str("CCTXD,%u,%u,%u,%s", src, dst,
                                      ack ? 1 : 0,
                                      String::toHex(data).c_str());
        addOut(cmd);

        cmd = String::str("CCCYC,0,%u,%u,0,0,1", src, dst);
        addOut(cmd);
        addIn(getStandardEcho(cmd));

        cmd = String::str("CATXD,%u,%u,%u,%u", src, dst,
                          ack ? 1 : 0,
                          data.size());
        addIn(cmd);

        addIn("CATXP,0");
        addIn("CATXF,0");

        addIn(String::str("CATXP,%u", data.size()));
        addIn(String::str("CATXF,%u", data.size()));
      }

      bool
      matchFuzzy(const std::string& stn, const std::string& exp)
      {
        if (String::startsWith(stn, exp))
          return true;

        return false;
      }
    };
  }
}

#endif
