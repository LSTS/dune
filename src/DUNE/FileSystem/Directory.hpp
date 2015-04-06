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
