//***************************************************************************
// Copyright (C) 2007-2013 Laboratório de Sistemas e Tecnologia Subaquática *
// Departamento de Engenharia Electrotécnica e de Computadores              *
// Rua Dr. Roberto Frias, 4200-465 Porto, Portugal                          *
//***************************************************************************
// Author: Ricardo Martins                                                  *
//***************************************************************************

// DUNE headers.
#include <DUNE/Config.hpp>
#include <DUNE/Network/Initializer.hpp>

// Windows headers.
#if defined(DUNE_SYS_HAS_WINSOCK2_H)
#  include <winsock2.h>
#endif

namespace DUNE
{
  namespace Network
  {
    static int counter = 0;

    Initializer::Initializer(void)
    {
      if (counter++ == 0)
      {
#if defined(DUNE_SYS_HAS_WSA_STARTUP)
        WSADATA wsaData;
        WSAStartup(MAKEWORD(2, 2), &wsaData);
#endif
      }
    }

    Initializer::~Initializer(void)
    {
      if (--counter == 0)
      {
#if defined(DUNE_SYS_HAS_WSA_CLEANUP)
        WSACleanup();
#endif
      }
    }
  }
}
