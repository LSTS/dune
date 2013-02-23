//***************************************************************************
// Copyright (C) 2007-2013 Laboratório de Sistemas e Tecnologia Subaquática *
// Departamento de Engenharia Electrotécnica e de Computadores              *
// Rua Dr. Roberto Frias, 4200-465 Porto, Portugal                          *
//***************************************************************************
// Author: Ricardo Martins                                                  *
//***************************************************************************
// $Id:: DynamicLoader.cpp 12667 2013-01-22 02:44:42Z rasm                $:*
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
