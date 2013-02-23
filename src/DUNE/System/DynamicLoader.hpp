//***************************************************************************
// Copyright (C) 2007-2013 Laboratório de Sistemas e Tecnologia Subaquática *
// Departamento de Engenharia Electrotécnica e de Computadores              *
// Rua Dr. Roberto Frias, 4200-465 Porto, Portugal                          *
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
