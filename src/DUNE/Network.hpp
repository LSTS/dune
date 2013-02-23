//***************************************************************************
// Copyright (C) 2007-2013 Laboratório de Sistemas e Tecnologia Subaquática *
// Departamento de Engenharia Electrotécnica e de Computadores              *
// Rua Dr. Roberto Frias, 4200-465 Porto, Portugal                          *
//***************************************************************************
// Author: Ricardo Martins                                                  *
//***************************************************************************
// $Id:: Network.hpp 12667 2013-01-22 02:44:42Z rasm                      $:*
//***************************************************************************

#ifndef DUNE_NETWORK_HPP_INCLUDED_
#define DUNE_NETWORK_HPP_INCLUDED_

namespace DUNE
{
  //! Networking routines and classes.
  namespace Network
  { }
}

#include <DUNE/Network/Initializer.hpp>
#include <DUNE/Network/URL.hpp>
#include <DUNE/Network/Address.hpp>
#include <DUNE/Network/Exceptions.hpp>
#include <DUNE/Network/UDPSocket.hpp>
#include <DUNE/Network/TCPSocket.hpp>
#include <DUNE/Network/HTTPServer.hpp>
#include <DUNE/Network/HTTPRequestHandler.hpp>
#include <DUNE/Network/Interface.hpp>

#endif
