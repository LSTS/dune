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
#include <cstring>
#include <vector>
#include <iostream>

// DUNE headers.
#include <DUNE/Config.hpp>
#include <DUNE/Utils/String.hpp>
#include <DUNE/System/Error.hpp>
#include <DUNE/FileSystem/Path.hpp>
#include <DUNE/FileSystem/Directory.hpp>

// POSIX headers.
#if defined(DUNE_SYS_HAS_SYS_STAT_H)
#  include <sys/stat.h>
#endif

#if defined(DUNE_SYS_HAS_UNISTD_H)
#  include <unistd.h>
#endif

// Microsoft Windows headers.
#if defined(DUNE_SYS_HAS_WINDOWS_H)
#  include <windows.h>
#endif

namespace DUNE
{
  namespace FileSystem
  {
    Directory::Directory(const Path& path)
    {
      // POSIX Implementation.
#if defined(DUNE_SYS_HAS_DIRENT_H)
      m_handle = 0;

      // Microsoft Windows Implementation.
#elif defined(DUNE_SYS_HAS_WINDOWS_H)
      m_handle = INVALID_HANDLE_VALUE;
#endif

      open(path);
    }

    Directory::~Directory(void)
    {
      try
      {
        close();
      }
      catch (...)
      {
        // Don't throw.
      }
    }

    bool
    Directory::open(const Path& path)
    {
      m_path = path;

      // POSIX Implementation.
#if defined(DUNE_SYS_HAS_DIRENT_H)
      m_handle = opendir(m_path.c_str());

      if (m_handle == 0)
        throw System::Error(errno, "opening directory", m_path.str());

      return true;

      // Microsoft Windows Implementation.
#elif defined(DUNE_SYS_HAS_WINDOWS_H)
      std::string tmp = m_path.str() + "\\*";
      m_handle = FindFirstFile(tmp.c_str(), &m_fdata);

      if (m_handle == INVALID_HANDLE_VALUE)
        throw System::Error(GetLastError(), "opening directory", m_path.str());

#endif
      return false;
    }

    bool
    Directory::isOpen(void)
    {
      // POSIX Implementation.
#if defined(DUNE_SYS_HAS_DIRENT_H)
      return m_handle != 0;

      // Microsoft Windows Implementation.
#elif defined(DUNE_SYS_HAS_WINDOWS_H)
      return m_handle != INVALID_HANDLE_VALUE;
#endif
      return false;
    }

    bool
    Directory::close(void)
    {
#if defined(DUNE_SYS_HAS_DIRENT_H)
      if (closedir(m_handle) != 0)
        throw System::Error(errno, "closing directory", m_path.str());

      return true;

#elif defined(DUNE_SYS_HAS_WINDOWS_H)
      FindClose(m_handle);
      return true;

#endif
      return false;
    }

    const char*
    Directory::readEntry(ReadOptions opt)
    {
      // POSIX Implementation.
#if defined(DUNE_SYS_HAS_DIRENT_H)
      if (m_handle == 0)
        return 0;

      struct dirent* de = 0;

      // Discard . and ..
      while (1)
      {
        de = readdir(m_handle);

        if (de == 0)
          return 0;

        if ((std::strcmp(de->d_name, ".") != 0) && (std::strcmp(de->d_name, "..") != 0))
          break;
      }

      if (opt == RD_FILE_NAME)
        return de->d_name;

      if (opt == RD_FULL_NAME)
      {
        m_file_name = m_path / de->d_name;
        return m_file_name.c_str();
      }

      // Microsoft Windows Implementation.
#elif defined(DUNE_SYS_HAS_WINDOWS_H)
      while (1)
      {
        if (FindNextFile(m_handle, &m_fdata) == 0)
        {
          if (GetLastError() != ERROR_NO_MORE_FILES)
            return 0;
          // FIXME: say something here.
          return 0;
        }

        if ((std::strcmp(m_fdata.cFileName, ".") != 0) && (std::strcmp(m_fdata.cFileName, "..") != 0))
          break;
      }

      if (opt == RD_FILE_NAME)
        return m_fdata.cFileName;

      if (opt == RD_FULL_NAME)
      {
        m_file_name = m_path / m_fdata.cFileName;
        return m_file_name.c_str();
      }

#endif

      return 0;
    }
  }
}
