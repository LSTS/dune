//***************************************************************************
// Copyright (C) 2007-2013 Laboratório de Sistemas e Tecnologia Subaquática *
// Departamento de Engenharia Electrotécnica e de Computadores              *
// Rua Dr. Roberto Frias, 4200-465 Porto, Portugal                          *
//***************************************************************************
// Author: Ricardo Martins                                                  *
//***************************************************************************
// $Id:: Initializer.cpp 12667 2013-01-22 02:44:42Z rasm                  $:*
//***************************************************************************

// DUNE headers.
#include <DUNE/Config.hpp>
#include <DUNE/Concurrency/Initializer.hpp>

// Windows headers.
#if defined(DUNE_SYS_HAS_PTHREAD_H)
#  include <pthread.h>
#endif

namespace DUNE
{
  namespace Concurrency
  {
    static int counter = 0;

    Initializer::Initializer(void)
    {
      if (counter++ == 0)
      {
#if defined(DUNE_OS_WINDOWS)
        pthread_win32_process_attach_np();
#endif
      }
    }

    Initializer::~Initializer(void)
    {
      if (--counter == 0)
      {
#if defined(DUNE_OS_WINDOWS)
        pthread_win32_process_detach_np();
#endif
      }
    }
  }
}
