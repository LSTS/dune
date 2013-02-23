//***************************************************************************
// Copyright (C) 2007-2013 Laboratório de Sistemas e Tecnologia Subaquática *
// Departamento de Engenharia Electrotécnica e de Computadores              *
// Rua Dr. Roberto Frias, 4200-465 Porto, Portugal                          *
//***************************************************************************
// Author: Ricardo Martins                                                  *
//***************************************************************************
// $Id:: IMC.hpp 12667 2013-01-22 02:44:42Z rasm                          $:*
//***************************************************************************

#ifndef DUNE_IMC_HPP_INCLUDED_
#define DUNE_IMC_HPP_INCLUDED_

namespace DUNE
{
  //! %IMC messages.
  namespace IMC
  { }
}

#include <DUNE/IMC/Bus.hpp>
#include <DUNE/IMC/Serialization.hpp>
#include <DUNE/IMC/InlineMessage.hpp>
#include <DUNE/IMC/MessageList.hpp>
#include <DUNE/IMC/Message.hpp>
#include <DUNE/IMC/Factory.hpp>
#include <DUNE/IMC/Packet.hpp>
#include <DUNE/IMC/Macros.hpp>
#include <DUNE/IMC/AddressResolver.hpp>
#include <DUNE/IMC/Parser.hpp>
#include <DUNE/IMC/Exceptions.hpp>
#include <DUNE/IMC/Definitions.hpp>

#endif
