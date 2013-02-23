//***************************************************************************
// Copyright (C) 2007-2013 Laboratório de Sistemas e Tecnologia Subaquática *
// Departamento de Engenharia Electrotécnica e de Computadores              *
// Rua Dr. Roberto Frias, 4200-465 Porto, Portugal                          *
//***************************************************************************
// Author: Ricardo Martins                                                  *
//***************************************************************************
// $Id:: FileLock.hpp 12667 2013-01-22 02:44:42Z rasm                     $:*
//***************************************************************************

#ifndef DUNE_FILE_SYSTEM_FILE_LOCK_HPP_INCLUDED_
#define DUNE_FILE_SYSTEM_FILE_LOCK_HPP_INCLUDED_

// ISO C++ 98 headers.
#include <stdexcept>

// DUNE headers.
#include <DUNE/Config.hpp>
#include <DUNE/System/Error.hpp>

// POSIX headers.
#if defined(DUNE_SYS_HAS_UNISTD_H)
#  include <unistd.h>
#endif

#if defined(DUNE_SYS_HAS_SYS_TYPES_H)
#  include <sys/types.h>
#endif

#if defined(DUNE_SYS_HAS_SYS_STAT_H)
#  include <sys/stat.h>
#endif

#if defined(DUNE_SYS_HAS_SYS_FILE_H)
#  include <sys/file.h>
#endif

#if defined(DUNE_SYS_HAS_FCNTL_H)
#  include <fcntl.h>
#endif

namespace DUNE
{
  namespace FileSystem
  {
    class FileLock
    {
    public:
      FileLock(const char* file)
      {
#if defined(DUNE_SYS_HAS_STRUCT_FLOCK)
        m_fd = open(file, O_RDWR | O_CREAT, S_IWUSR | S_IRUSR);

        if (m_fd == -1)
          throw std::runtime_error(System::Error::getLastMessage());
#else
        (void)file;
#endif
      }

      ~FileLock(void)
      {
#if defined(DUNE_SYS_HAS_STRUCT_FLOCK)
        close(m_fd);
#endif
      }

      bool
      lock(void)
      {
#if defined(DUNE_SYS_HAS_STRUCT_FLOCK)
        struct flock fl;
        fl.l_type = F_WRLCK;
        fl.l_whence = SEEK_SET;
        fl.l_start = 0;
        fl.l_len = 0;

        return fcntl(m_fd, F_SETLK, &fl) != -1;
#endif
        return false;
      }

      bool
      tryLock(void)
      {
#if defined(DUNE_SYS_HAS_STRUCT_FLOCK)
        struct flock fl;
        fl.l_type = F_WRLCK;
        fl.l_whence = SEEK_SET;
        fl.l_start = 0;
        fl.l_len = 0;

        fcntl(m_fd, F_GETLK, &fl);
        return (fl.l_type == F_UNLCK);
#endif
        return false;
      }

    private:
      int m_fd;
    };
  }
}

#endif
