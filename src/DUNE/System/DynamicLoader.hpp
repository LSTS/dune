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

#ifndef DUNE_SYSTEM_DYNAMIC_LOADER_HPP_INCLUDED_
#define DUNE_SYSTEM_DYNAMIC_LOADER_HPP_INCLUDED_

// ISO C++ 98 headers.
#include <cstddef>
#include <string>

// DUNE headers.
#include <DUNE/Config.hpp>

#if defined(DUNE_SYS_HAS_WINDOWS_H)
#  include <windows.h>
#endif

namespace DUNE
{
  namespace System
  {
    // Export DLL symbol.
    class DUNE_DLL_SYM DynamicLoader;

    class DynamicLoader
    {
    public:
      //! Constructor.
      DynamicLoader(void);

      //! Destructor.
      ~DynamicLoader(void);

      //! Load dynamic library from file.
      //! @param[in] path file path.
      void
      load(const char* path);

      //! Unload dynamic library.
      void
      unload(void);

      //! Get symbol pointer from name
      //! @param[in] name symbol name
      //! @return symbol void pointer
      void*
      getSymbol(const char* name);

    private:
      //! Library path.
      std::string m_path;
      //! System specific handle.
#if defined(DUNE_OS_WINDOWS)
      HMODULE m_handle;
#else
      void* m_handle;
#endif
    };
  }
}

#endif
