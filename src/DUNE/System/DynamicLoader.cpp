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
#include <cerrno>

// DUNE headers.
#include <DUNE/Config.hpp>
#include <DUNE/Casts.hpp>
#include <DUNE/System/Error.hpp>
#include <DUNE/System/DynamicLoader.hpp>

// POSIX headers.
#if defined(DUNE_SYS_HAS_DLFCN_H)
#  include <dlfcn.h>
#  define GET_LAST_ERROR dlerror()

// Microsoft Windows headers.
#elif defined(DUNE_SYS_HAS_WINDOWS_H)
#  include <windows.h>
#  define GET_LAST_ERROR Error::getLastMessage()

// Not implemented.
#else
#  define GET_LAST_ERROR "not implemented"

#endif

namespace DUNE
{
  namespace System
  {
    DynamicLoader::DynamicLoader(void):
      m_handle(NULL)
    { }

    DynamicLoader::~DynamicLoader(void)
    {
      if (m_handle == NULL)
        return;

      // Don't throw here.
      try
      {
        unload();
      }
      catch (...)
      { }
    }

    void
    DynamicLoader::load(const char* name)
    {
      m_path = name;

#if defined(DUNE_SYS_HAS_LOAD_LIBRARY)
      m_handle = LoadLibrary(m_path.c_str());

#elif defined(DUNE_SYS_HAS_DLOPEN)
      m_handle = dlopen(m_path.c_str(), RTLD_NOW);

#endif

      if (m_handle == NULL)
        throw Error(GET_LAST_ERROR, "unable to load library", m_path);
    }

    void
    DynamicLoader::unload(void)
    {
      int rv = 0;

#if defined(DUNE_SYS_HAS_LOAD_LIBRARY)
      rv = FreeLibrary(m_handle);

#elif defined(DUNE_SYS_HAS_DLOPEN)
      rv = dlclose(m_handle);

#endif

      if (rv != 0)
        throw Error(GET_LAST_ERROR, "unable to unload library", m_path);

      m_handle = NULL;
    }

    void*
    DynamicLoader::getSymbol(const char* name)
    {
      void* symbol = NULL;

#if defined(DUNE_SYS_HAS_LOAD_LIBRARY)
      symbol = castUnsafe<void*, FARPROC>(GetProcAddress(m_handle, name));

#elif defined(DUNE_SYS_HAS_DLOPEN)
      symbol = dlsym(m_handle, name);

#endif

      if (symbol == NULL)
        throw Error(GET_LAST_ERROR, "unable to load symbol", name);

      return symbol;
    }
  }
}
