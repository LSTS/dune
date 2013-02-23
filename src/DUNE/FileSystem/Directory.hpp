//***************************************************************************
// Copyright (C) 2007-2013 Laboratório de Sistemas e Tecnologia Subaquática *
// Departamento de Engenharia Electrotécnica e de Computadores              *
// Rua Dr. Roberto Frias, 4200-465 Porto, Portugal                          *
//***************************************************************************
// Author: Ricardo Martins                                                  *
//***************************************************************************

#ifndef DUNE_FILE_SYSTEM_DIRECTORY_HPP_INCLUDED_
#define DUNE_FILE_SYSTEM_DIRECTORY_HPP_INCLUDED_

// ISO C++ 98 headers.
#include <string>
#include <vector>

// DUNE headers.
#include <DUNE/Config.hpp>
#include <DUNE/FileSystem/Path.hpp>

// POSIX headers.
#if defined(DUNE_SYS_HAS_SYS_TYPES_H)
#  include <sys/types.h>
#endif

#if defined(DUNE_SYS_HAS_DIRENT_H)
#  include <dirent.h>
#endif

// Microsoft Windows headers.
#if defined(DUNE_SYS_WINDOWS_H)
#  include <windows.h>
#endif

namespace DUNE
{
  namespace FileSystem
  {
    // Export DLL Symbol.
    class DUNE_DLL_SYM Directory;

    class Directory
    {
    public:
      enum ReadOptions
      {
        RD_FULL_NAME,
        RD_FILE_NAME
      };

      Directory(void)
      { }

      Directory(const Path& path);

      //! Destructor.
      ~Directory(void);

      bool
      open(const Path& path);

      bool
      isOpen(void);

      bool
      close(void);

      const char*
      readEntry(ReadOptions options = RD_FILE_NAME);

    private:
      //! Path to directory.
      Path m_path;
      //! File name buffer.
      Path m_file_name;

      // POSIX implementation.
#if defined(DUNE_SYS_HAS_DIRENT_H)
      DIR* m_handle;

      // Microsoft Windows implementation.
#elif defined(DUNE_SYS_HAS_WINDOWS_H)
      HANDLE m_handle;
      WIN32_FIND_DATA m_fdata;
#endif
    };
  }
}

#endif
