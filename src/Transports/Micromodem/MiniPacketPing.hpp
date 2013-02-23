//***************************************************************************
// Copyright (C) 2007-2013 Laboratório de Sistemas e Tecnologia Subaquática *
// Departamento de Engenharia Electrotécnica e de Computadores              *
// Rua Dr. Roberto Frias, 4200-465 Porto, Portugal                          *
//***************************************************************************
// Author: Ricardo Martins                                                  *
//***************************************************************************
// $Id:: MiniPacketPing.hpp 12667 2013-01-22 02:44:42Z rasm               $:*
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
