//***************************************************************************
// Copyright (C) 2007-2013 Laboratório de Sistemas e Tecnologia Subaquática *
// Departamento de Engenharia Electrotécnica e de Computadores              *
// Rua Dr. Roberto Frias, 4200-465 Porto, Portugal                          *
//***************************************************************************
// Author: Ricardo Martins                                                  *
//***************************************************************************
// Automatically generated.                                                 *
//***************************************************************************

#ifndef DUNE_IMC_HEADER_HPP_INCLUDED_
#define DUNE_IMC_HEADER_HPP_INCLUDED_

// DUNE headers.
#include <DUNE/Config.hpp>

namespace DUNE
{
  namespace IMC
  {
    //! Header format.
    struct Header
    {
      //! Synchronization Number.
      uint16_t sync;
      //! Message Identification Number.
      uint16_t mgid;
      //! Message size.
      uint16_t size;
      //! Time stamp.
      fp64_t timestamp;
      //! Source Address.
      uint16_t src;
      //! Source Entity.
      uint8_t src_ent;
      //! Destination Address.
      uint16_t dst;
      //! Destination Entity.
      uint8_t dst_ent;
    };
  }
}

#endif
