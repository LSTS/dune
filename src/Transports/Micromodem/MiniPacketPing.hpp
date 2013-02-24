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

#ifndef TRANSPORTS_MICROMODEM_MINI_PACKET_PING_HPP_INCLUDED_
#define TRANSPORTS_MICROMODEM_MINI_PACKET_PING_HPP_INCLUDED_

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
    class MiniPacketPing: public Transaction
    {
    public:
      MiniPacketPing(unsigned src, unsigned dst):
        m_time(-1),
        m_src(src),
        m_dst(dst)
      {
        setTimeout(c_mini_packet_duration * 2 + 0.5);

        std::string cmd = String::str("CCMPC,%u,%u", src, dst);
        addOut(cmd);
        addIn(getStandardEcho(cmd));
        addIn("CATXP,0");
        addIn("CATXF,0");
        addIn("CAMPR");
      }

      double
      getTime(void) const
      {
        return m_time;
      }

      bool
      matchFuzzy(const std::string& stn, const std::string& exp)
      {
        //std::cerr << "fuzzy match CAMPR" << std::endl;

        if (exp != "CAMPR")
          return false;

        //std::cerr << "fuzzy match CAMPR IN" << std::endl;

        unsigned src = 0;
        unsigned dst = 0;
        double time = 0;

        if (std::sscanf(stn.c_str(), "CAMPR,%u,%u,%lf", &src, &dst, &time) != 3)
        {
          //std::cerr << "format mismatch" << std::endl;
          return false;
        }

        if (src != m_dst || dst != m_src)
        {
          //std::cerr << "address mismatch" << std::endl;
          return false;
        }

        printRemaining();

        std::cerr << "distance to " << m_dst << " is " << time << std::endl;

        m_time = time;
        return true;
      }

    private:
      double m_time;
      unsigned m_src;
      unsigned m_dst;
    };
  }
}

#endif
