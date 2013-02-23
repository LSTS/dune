//***************************************************************************
// Copyright (C) 2007-2013 Laboratório de Sistemas e Tecnologia Subaquática *
// Departamento de Engenharia Electrotécnica e de Computadores              *
// Rua Dr. Roberto Frias, 4200-465 Porto, Portugal                          *
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
