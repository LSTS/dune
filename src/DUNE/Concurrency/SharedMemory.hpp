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

#ifndef DUNE_CONCURRENCY_SHARED_MEMORY_HPP_INCLUDED_
#define DUNE_CONCURRENCY_SHARED_MEMORY_HPP_INCLUDED_

// ISO C++ 98 headers.
#include <string>
#include <climits>

// DUNE headers.
#include <DUNE/Config.hpp>

#if !defined(PATH_MAX)
#  define PATH_MAX 1024
#endif

namespace DUNE
{
  namespace Concurrency
  {
    // Export DLL Symbol.
    class DUNE_DLL_SYM SharedMemory;

    class SharedMemory
    {
    public:
      SharedMemory(const char* name, unsigned size);

      SharedMemory(unsigned size);

      ~SharedMemory(void);

      void
      create(void);

      void
      open(void);

      //! Get name of memory area.
      //! @return memory area's name.
      const char*
      getName(void)
      {
        return m_name;
      }

      //! Get pointer to shared memory area.
      //! @return pointer to shared memory area.
      void*
      operator*(void)
      {
        return m_ptr;
      }

    private:
      //! True if this instance created the memory area.
      bool m_creator;
      //! Size of shared memory area.
      unsigned m_size;
      //! Pointer to shared memory area.
      void* m_ptr;
      //! Memory area name.
      char m_name[PATH_MAX];

      //! Generate an unique name.
      void
      generateName(void);

      //! Non-copyable.
      SharedMemory(const SharedMemory&);

      //! Non - assignable
      SharedMemory&
      operator=(const SharedMemory&);
    };
  }
}

#endif
