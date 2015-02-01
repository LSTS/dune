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

// 64-bit macros.
#ifndef _FILE_OFFSET_BITS
#  define _FILE_OFFSET_BITS 64
#endif

#ifndef _LARGEFILE_SOURCE
#  define _LARGEFILE_SOURCE 1
#endif

#ifndef _LARGEFILE64_SOURCE
#  define _LARGEFILE64_SOURCE 1
#endif

#if defined(_DARWIN_FEATURE_64_BIT_INODE)
#  ifndef _DARWIN_FEATURE_64_BIT_INODE
#    define _DARWIN_FEATURE_64_BIT_INODE
#  endif
#endif

// ISO C++ 98 headers.
#include <cstring>
#include <cerrno>
#include <cstdio>
#include <cctype>
#include <climits>
#include <iostream>
#include <fstream>
#include <list>
#include <algorithm>

// DUNE headers.
#include <DUNE/Config.hpp>
#include <DUNE/Utils/String.hpp>
#include <DUNE/System/Error.hpp>
#include <DUNE/FileSystem/Directory.hpp>
#include <DUNE/FileSystem/Path.hpp>

// POSIX headers.
#if defined(DUNE_SYS_HAS_SYS_TYPES_H)
#  include <sys/types.h>
#endif

#if defined(DUNE_SYS_HAS_UNISTD_H)
#  include <unistd.h>
#endif

#if defined(DUNE_SYS_HAS_SYS_VFS_H)
#  include <sys/vfs.h>
#endif

#if defined(DUNE_SYS_HAS_SYS_STATVFS_H)
#  include <sys/statvfs.h>
#endif

#if defined(DUNE_SYS_HAS_SYS_MOUNT_H)
#  include <sys/mount.h>
#endif

#if defined(DUNE_SYS_HAS_SYS_PARAM_H)
#  include <sys/param.h>
#endif

// Microsoft Windows headers.
#if defined(DUNE_SYS_HAS_WINDOWS_H)
#  include <windows.h>
#endif

#if defined(DUNE_SYS_HAS_DIRECT_H)
#  include <direct.h>
#endif

// BSD headers.
#if defined(DUNE_SYS_HAS_SYS_SYSCTL_H)
#  include <sys/sysctl.h>
#endif

// Mac OS X headers.
#if defined(DUNE_SYS_HAS_MACH_O_DYLD_H)
#  include <mach-o/dyld.h>
#endif

// QNX v6.x headers.
#if defined(DUNE_SYS_PROCESS_H)
#  include <process.h>
#endif

#if defined(DUNE_SYS_HAS_SYS_STAT_H)
#  include <sys/stat.h>

// Microsoft Windows definitions.
#  if defined(_S_IFREG) && !defined(S_ISREG)
#    define S_ISREG(x) (x & _S_IFREG)
#  endif

#  if defined(_S_IFDIR) && !defined(S_ISDIR)
#    define S_ISDIR(x) (x & _S_IFDIR)
#  endif

#  if defined(_S_IFCHR) && !defined(S_ISCHR)
#    define S_ISCHR(x) (x & _S_IFCHR)
#  endif

#  if !defined(S_ISBLK)
#    define S_ISBLK(x) (0)
#  endif
#endif

// Define PATH_MAX to a more or less sane value on systems lacking
// this macro.
#if !defined(PATH_MAX)
#  define PATH_MAX 4096
#endif

namespace DUNE
{
  namespace FileSystem
  {
    const char*
    Path::separator(void)
    {
#if defined(DUNE_OS_POSIX) || defined(DUNE_OS_WINDOWS)
      return "/";

      // Lacking implementation.
#else
#  error Path::separator() is not yet implemented in this system.
#endif
    }

    unsigned int
    Path::separatorLength(void)
    {
#if defined(DUNE_OS_POSIX) || defined(DUNE_OS_WINDOWS)
      return 1;

      // Lacking implementation.
#else
#  error Path::separatorLength() is not yet implemented in this system.
#endif
    }

    Path
    Path::current(void)
    {
      char bfr[PATH_MAX] = {0};

      // Microsoft Windows implementation.
#if defined(DUNE_SYS_HAS__GETCWD)
      if (_getcwd(bfr, PATH_MAX) == 0)
        throw System::Error(errno, "retrieving current working directory");

      // POSIX implementation.
#elif defined(DUNE_SYS_HAS_GETCWD)
      if (getcwd(bfr, PATH_MAX) == 0)
        throw System::Error(errno, "retrieving current working directory");

      // Lacking implementation.
#else
#  error Path::current() is not yet implemented in this system.
#endif

      return bfr;
    }

    Path
    Path::applicationFile(void)
    {
      char bfr[PATH_MAX] = {0};

      // Microsoft Windows implementation.
#if defined(DUNE_SYS_HAS_GET_MODULE_FILE_NAME)
      if (GetModuleFileName(NULL, bfr, PATH_MAX - 1) == 0)
        return "";
      return bfr;

      // Linux implementation.
#elif defined(DUNE_OS_LINUX) || defined(DUNE_OS_ANDROID)
      if (readlink("/proc/self/exe", bfr, PATH_MAX) == -1)
        return "";

      // Solaris implementation.
#elif defined(DUNE_OS_SOLARIS)
      char fname[256];
      Utils::String::format(fname, PATH_MAX, "/proc/%d/path/a.out", getpid());
      readlink(fname, bfr, PATH_MAX);

      // *BSD implementation.
#elif defined(DUNE_OS_BSD)
#  if defined(KERN_PROC_PATHNAME)
      int mib[4] = {CTL_KERN, KERN_PROC, KERN_PROC_PATHNAME, -1};
      size_t cb = sizeof(bfr);
      sysctl(mib, 4, bfr, &cb, 0, 0);
#  else
      int size = readlink("/proc/curproc/file", bfr, sizeof(bfr) - 1);
      if (size > 0)
        bfr[size] = '\0';
#  endif

      // Mac OS X implementation.
#elif defined(DUNE_OS_DARWIN)
      uint32_t size = PATH_MAX;
      _NSGetExecutablePath(bfr, &size);

      // QNX v6.4.x implementation. QNX v6.3 is not supported as it
      // does not behave as documented.
#elif defined(DUNE_OS_QNX6)
      _cmdname(bfr);

      // RTEMS implementation.
#elif defined(DUNE_OS_RTEMS)
      throw std::runtime_error("not sure how to implement this");

      // Lacking implementation.
#else
#  error Path::applicationFile() is not yet implemented in this system.
#endif

      return bfr;
    }

    uint64_t
    Path::storageCapacity(const Path& path)
    {
      // Darwin with 64 bit inodes.
#if defined(_DARWIN_FEATURE_64_BIT_INODE) || defined(DUNE_OS_ANDROID)
      struct statfs bfr;
      if (statfs(path.c_str(), &bfr) == -1)
        throw System::Error(errno, "retrieving storage capacity", path.str());

      return bfr.f_blocks * bfr.f_bsize;

      // Linux / Darwin implementation.
#elif defined(DUNE_SYS_HAS_STATFS64_DARWIN_LINUX)
      struct statfs64 bfr;
      if (statfs64(path.c_str(), &bfr) == -1)
        throw System::Error(errno, "retrieving storage capacity", path.str());

      return bfr.f_blocks * bfr.f_bsize;

      // QNX v6.x implementation.
#elif defined(DUNE_OS_QNX6)
      struct statvfs64 bfr;
      if (statvfs64(path.c_str(), &bfr) == -1)
        throw System::Error(errno, "retrieving storage capacity", path.str());

      return bfr.f_blocks * bfr.f_bsize;

      // POSIX implementation
#elif defined(DUNE_OS_POSIX)
      struct statvfs bfr;
      if (statvfs(path.c_str(), &bfr) == -1)
        throw System::Error(errno, "retrieving storage capacity", path.str());

      return bfr.f_blocks * bfr.f_bsize;

      // Microsoft Windows implementation.
#elif defined(DUNE_OS_WINDOWS)
      Path npath(path);
      if (!path.isDirectory())
        npath = path.basename();

      ULARGE_INTEGER total_bytes;
      if (GetDiskFreeSpaceEx(npath.c_str(), 0, &total_bytes, 0) == 0)
        throw System::Error(GetLastError(), "retrieving storage capacity", npath.str());

      return total_bytes.QuadPart;

      // Lacking implementation.
#else
#  error Path::storageCapacity() is not yet implemented in this system.
#endif

      return 0;
    }

    uint64_t
    Path::storageAvailable(const Path& path)
    {
#if defined(_DARWIN_FEATURE_64_BIT_INODE) || defined(DUNE_OS_ANDROID)
      struct statfs bfr;
      if (statfs(path.c_str(), &bfr) == -1)
        throw System::Error(errno, "retrieving available storage", path.str());

      // Filesystem may have space reserved for the root user.
      if (getuid() == 0)
        return bfr.f_bfree * bfr.f_bsize;
      else
        return bfr.f_bavail * bfr.f_bsize;

      // Linux / Darwin implementation.
#elif defined(DUNE_SYS_HAS_STATFS64_DARWIN_LINUX)
      struct statfs64 bfr;
      if (statfs64(path.c_str(), &bfr) == -1)
        throw System::Error(errno, "retrieving available storage", path.str());

      // Filesystem may have space reserved for the root user.
      if (getuid() == 0)
        return bfr.f_bfree * bfr.f_bsize;
      else
        return bfr.f_bavail * bfr.f_bsize;

      // QNX v6.x implementation.
#elif defined(DUNE_OS_QNX6)
      struct statvfs64 bfr;
      if (statvfs64(path.c_str(), &bfr) == -1)
        throw System::Error(errno, "retrieving available storage", path.str());

      // Filesystem may have space reserved for the root user.
      if (getuid() == 0)
        return bfr.f_bfree * bfr.f_bsize;
      else
        return bfr.f_bavail * bfr.f_bsize;

      // POSIX implementation.
#elif defined(DUNE_OS_POSIX)
      struct statvfs bfr;
      if (statvfs(path.c_str(), &bfr) == -1)
        throw System::Error(errno, "retrieving available storage", path.str());

      // Filesystem may have space reserved for the root user.
      if (getuid() == 0)
        return bfr.f_bfree * bfr.f_bsize;
      else
        return bfr.f_bavail * bfr.f_bsize;

      // Microsoft Windows implementation.
#elif defined(DUNE_OS_WINDOWS)
      Path npath(path);
      if (!path.isDirectory())
        npath = path.basename();

      ULARGE_INTEGER free_bytes;
      if (GetDiskFreeSpaceEx(npath.c_str(), &free_bytes, 0, 0) == 0)
        throw System::Error(errno, "retrieving available storage", npath.str());

      return free_bytes.QuadPart;

      // Lacking implementation.
#else
#  error Path::storageAvailable() is not yet implemented in this system.
#endif

      return 0;
    }

    Path::Type
    Path::type(void) const
    {
      // POSIX implementation.
#if defined(DUNE_SYS_HAS_STRUCT_STAT)
      struct stat ss;

      // Microsoft Windows implementation.
#elif defined(DUNE_SYS_HAS_STRUCT__STAT32)
      struct _stat32 ss;
#endif

#if defined(DUNE_SYS_HAS_LSTAT)
      int rv = lstat(m_path.c_str(), &ss);

#elif defined(DUNE_SYS_HAS_STAT)
      int rv = stat(m_path.c_str(), &ss);

#elif defined(DUNE_SYS_HAS__STAT32)
      int rv = _stat(m_path.c_str(), &ss);
#endif

      if (rv != 0)
      {
        if (errno == ENOENT)
          return PT_INVALID;

        throw System::Error(errno, "retrieving file type", m_path);
      }

      if (S_ISDIR(ss.st_mode))
        return PT_DIRECTORY;

      if (S_ISREG(ss.st_mode))
        return PT_FILE;

      if (S_ISCHR(ss.st_mode) || S_ISBLK(ss.st_mode))
        return PT_DEVICE;

#if defined(S_ISLNK)
      if (S_ISLNK(ss.st_mode))
        return PT_LINK;
#endif

      return PT_INVALID;
    }

    bool
    Path::isAbsolute(void) const
    {
      // POSIX implementation.
#if defined(DUNE_OS_POSIX)
      if (m_path.compare(0, separatorLength(), separator(), separatorLength()) == 0)
        return true;

      // Microsoft Windows implementation.
#elif defined(DUNE_OS_WINDOWS)
      if (m_path.size() >= 3)
      {
        if (isalpha(m_path[0]) && m_path[1] == ':' && m_path.compare(2, separatorLength(), separator(), separatorLength()) == 0)
          return true;
      }

      // Lacking implementation.
#else
#  error Path::root() is not yet implemented in this system.
#endif

      return false;
    }

    void
    Path::remove(Mode mode) const
    {
      if (isDirectory())
      {
        if (mode == MODE_RECURSIVE)
        {
          Directory dir(m_path.c_str());
          const char* entry = 0;
          while ((entry = dir.readEntry(Directory::RD_FULL_NAME)))
            Path(entry).remove(mode);
        }

        // POSIX implementation.
#if defined(DUNE_OS_POSIX)
        if (rmdir(m_path.c_str()) != 0)
          throw System::Error(errno, "removing path", m_path);

        // Microsoft Windows implementation.
#elif defined(DUNE_OS_WINDOWS)
        if (RemoveDirectory(m_path.c_str()) == 0)
          throw System::Error(GetLastError(), "removing path", m_path);

        // Lacking implementation.
#else
#  error Path::remove() is not yet implemented in this system.
#endif
      }
      else
      {
        if (std::remove(m_path.c_str()) != 0)
          throw System::Error(errno, "removing path", m_path);
      }
    }

    void
    Path::create(Mode mode) const
    {
      if (mode == MODE_RECURSIVE)
      {
        std::vector<std::string> dirs;
        std::string stack;
        Utils::String::split(m_path, Path::separator(), dirs);

        if (dirs.size() == 0)
          return;

        if (!isAbsolute())
        {
          // Not root.
          if (dirs[0] != "")
          {
            stack += ".";
            stack += separator();
          }
        }

        for (unsigned int i = 0; i < dirs.size(); ++i)
        {
          stack += dirs[i] + separator();
          Path(stack).create(MODE_NORMAL);
        }

        Path(stack).create(MODE_NORMAL);
        return;
      }

      if (*this == root())
        return;

      // POSIX implementation
#if defined(DUNE_SYS_HAS_POSIX_MKDIR)
      if (::mkdir(m_path.c_str(), 0700) == 0)
        return;

      if (errno == EEXIST)
        return;

      if (isDirectory())
        return;

      throw System::Error(errno, "creating path", str());

      // Microsoft Windows implementation.
#elif defined(DUNE_SYS_HAS_CREATE_DIRECTORY)
      if (CreateDirectory(m_path.c_str(), 0))
        return;

      if (GetLastError() == ERROR_ALREADY_EXISTS)
        return;

      throw System::Error(GetLastError(), "creating path", str());

      // Lacking implementation.
#else
#  error Path::create() is not yet implemented in this system.
#endif
    }

    void
    Path::copy(const Path& destination) const
    {
      char bfr[c_copy_buffer_size];

      std::FILE* ifd = std::fopen(c_str(), "rb");
      if (ifd == 0)
        throw System::Error(errno, "opening source file", str());

      std::FILE* ofd = std::fopen(destination.c_str(), "wb");
      if (ofd == 0)
      {
        std::fclose(ifd);
        throw System::Error(errno, "opening destination file", destination.str());
      }

      // FIXME: this needs proper checking.
      size_t rv = 0;
      while (!std::feof(ifd))
      {
        rv = std::fread(bfr, 1, c_copy_buffer_size, ifd);
        std::fwrite(bfr, 1, rv, ofd);
      }

      std::fflush(ifd);
      std::fclose(ifd);
      std::fflush(ofd);
      std::fclose(ofd);
    }

    void
    Path::normalize(void)
    {
#if defined(DUNE_OS_WINDOWS)
      std::replace(m_path.begin(), m_path.end(), '\\', '/');
#endif

      m_path = Utils::String::filterDuplicates(separator()[0], m_path);

      // Don't try to normalize relative paths.
      if (!isAbsolute())
        return;

      if (m_path == "..")
        return;

      std::vector<std::string> parts;
      std::list<std::string> result;

      Utils::String::split(m_path, separator(), parts);

      for (unsigned int i = 1; i < parts.size(); ++i)
      {
        if (parts[i] == "..")
        {
          if (!result.empty())
            result.pop_back();
        }
        else if (parts[i] == "")
        {
          if (result.empty())
            result.push_back(parts[i]);
        }
        else if (parts[i] != ".")
        {
          result.push_back(parts[i]);
        }
      }

      m_path = parts[0] + separator() + Utils::String::join(result.begin(), result.end(), separator());
    }

    int64_t
    Path::size(void) const
    {
      // POSIX implementation.
#if defined(DUNE_OS_POSIX)
      struct stat bfr;

      if (stat(c_str(), &bfr) != 0)
        return -1;

      if (!S_ISREG(bfr.st_mode))
        return -1;

      return bfr.st_size;

      // Microsoft Windows implementation.
#elif defined(DUNE_OS_WINDOWS)
      struct _stat bfr;
      if (_stat(c_str(), &bfr) != 0 || !(bfr.st_mode & _S_IFREG))
        return -1;

      return bfr.st_size;

      // Lacking implementation.
#else
#  error Path::size() is not yet implemented in this system.
#endif

      return -1;
    }

    time_t
    Path::getLastModifiedTime(void) const
    {
      // POSIX implementation.
#if defined(DUNE_OS_POSIX)
      struct stat bfr;

      if (stat(c_str(), &bfr) == 0)
        return bfr.st_mtime;

      // Microsoft Windows implementation.
#elif defined(DUNE_OS_WINDOWS)
      struct _stat bfr;
      if (_stat(c_str(), &bfr) == 0)
        return bfr.st_mtime;

      // Lacking implementation.
#else
#  error Path::size() is not yet implemented in this system.
#endif

      return 0;
    }

    Path
    Path::root(void) const
    {
      if (!isAbsolute())
        return Path();

      // POSIX implementation.
#if defined(DUNE_OS_POSIX)
      return separator();

      // Microsoft Windows implementation.
#elif defined(DUNE_OS_WINDOWS)
      return Path(m_path.substr(0, 2 + separatorLength()));

      // Lacking implementation.
#else
#  error Path::root() is not yet implemented in this system.
#endif

      return Path();
    }

    Path
    Path::dirname(bool include_last_sep) const
    {
      std::string::size_type idx = m_path.find_last_of(separator());
      return m_path.substr(0, idx + (include_last_sep ? 1 : 0));
    }

    Path
    Path::basename(void) const
    {
      std::string::size_type idx = m_path.find_last_of(separator()) + 1;
      return m_path.substr(idx, m_path.size() - idx);
    }

    std::string
    Path::extension(void) const
    {
      std::string::size_type idx = m_path.find_last_of('.');

      if (idx == std::string::npos)
        return std::string();

      return m_path.substr(idx + 1);
    }

    std::string
    Path::suffix(const Path& path, bool keep_first_sep) const
    {
      std::string::size_type pre_idx = path.m_path.find(m_path, 0);

      if (pre_idx == std::string::npos)
        return path.m_path;

      std::string::size_type rem_idx = pre_idx + m_path.size();

      if (!keep_first_sep)
      {
        if (path.m_path.compare(rem_idx, separatorLength(), separator(), separatorLength()) == 0)
          rem_idx += separatorLength();
      }

      return path.m_path.substr(rem_idx);
    }

    void
    Path::contents(std::vector<Path>& dirs, int min_depth, int max_depth, int depth) const
    {
      const char* name = 0;
      Directory dir(m_path);

      while ((name = dir.readEntry(Directory::RD_FULL_NAME)))
      {
        Path path(name);

        if (depth >= min_depth)
          dirs.push_back(path);

        if (path.isDirectory() && depth < max_depth)
          path.contents(dirs, min_depth, max_depth, depth + 1);
      }
    }

    void
    Path::clear(void)
    {
      return m_path.clear();
    }

    bool
    Path::empty(void) const
    {
      return m_path.empty();
    }
  }
}
