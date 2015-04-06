//***************************************************************************
// Copyright 2007-2015 Universidade do Porto - Faculdade de Engenharia      *
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
// http://ec.europa.eu/idabc/eupl.html.                                     *
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
