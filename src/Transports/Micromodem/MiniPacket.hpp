//***************************************************************************
// Copyright (C) 2007-2013 Laboratório de Sistemas e Tecnologia Subaquática *
// Departamento de Engenharia Electrotécnica e de Computadores              *
// Rua Dr. Roberto Frias, 4200-465 Porto, Portugal                          *
//***************************************************************************
// Author: Ricardo Martins                                                  *
//***************************************************************************
// $Id:: MiniPacket.hpp 12667 2013-01-22 02:44:42Z rasm                   $:*
//***************************************************************************

#ifndef TRANSPORTS_MICROMODEM_MINI_PACKET_HPP_INCLUDED_
#define TRANSPORTS_MICROMODEM_MINI_PACKET_HPP_INCLUDED_

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
    class MiniPacket: public Transaction
    {
    public:
      MiniPacket(unsigned src, unsigned dst, uint16_t data)
      {
        setTimeout(c_mini_packet_duration);

        std::string cmd = String::str("CCMUC,%u,%u,%04x", src, dst, data & 0x1FFF);
        addOut(cmd);
        addIn(getStandardEcho(cmd));
        addIn("CATXP,0");
        addIn("CATXF,0");
      }
    };
  }
}

#endif
