//***************************************************************************
// Copyright (C) 2007-2013 Laboratório de Sistemas e Tecnologia Subaquática *
// Departamento de Engenharia Electrotécnica e de Computadores              *
// Rua Dr. Roberto Frias, 4200-465 Porto, Portugal                          *
//***************************************************************************
// Author: Ricardo Martins                                                  *
//***************************************************************************

// ISO C++ 98 headers.
#include <ostream>
#include <fstream>
#include <sstream>

// DUNE headers.
#include <DUNE/Streams/Terminal.hpp>
#include <DUNE/Concurrency/ScopedMutex.hpp>

namespace DUNE
{
  namespace Streams
  {
    Terminal dune_term;
    Terminal::Flusher dune_term_flush;

    void
    Terminal::open(const std::string& fname)
    {
      Concurrency::ScopedMutex l(m_mutex);
      std::ofstream* nos = new std::ofstream();
      nos->open(fname.c_str());

      if (m_out != NULL)
      {
        m_out->close();
        delete m_out;
      }

      m_out = nos;
    }

    void
    Terminal::close(void)
    {
      Concurrency::ScopedMutex l(m_mutex);
      if (m_out != NULL)
      {
        m_out->close();
        delete m_out;
        m_out = NULL;
      }
    }

    Terminal&
    Terminal::lock(const char* str)
    {
      m_mutex.lock();

#if defined(DUNE_OS_POSIX)
      std::cerr << str;
#else
      (void)str;
#endif

      return *this;
    }
  }
}
