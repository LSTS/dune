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
