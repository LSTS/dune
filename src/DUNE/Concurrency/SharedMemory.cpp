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
#include <DUNE/System/Error.hpp>
#include <DUNE/Concurrency/SharedMemory.hpp>
#include <DUNE/Time/Clock.hpp>
#include <DUNE/Utils/String.hpp>
#include <DUNE/Math/Random.hpp>

#if defined(DUNE_SYS_HAS_UNISTD_H)
#  include <unistd.h>
#endif

#if defined(DUNE_SYS_HAS_SYS_MMAN_H)
#  include <sys/mman.h>
#endif

#if defined(DUNE_SYS_HAS_SYS_STAT_H)
#  include <sys/stat.h>
#endif

#if defined(DUNE_SYS_HAS_FCNTL_H)
#  include <fcntl.h>
#endif

#if defined(DUNE_SYS_HAS_SHM_OPEN) && defined(DUNE_SYS_HAS_SHM_UNLINK)
#  define DUNE_SYS_HAS_POSIX_IPC
#endif

namespace DUNE
{
  namespace Concurrency
  {
    SharedMemory::SharedMemory(const char* name, unsigned size):
      m_creator(false),
      m_size(size),
      m_ptr(0)
    {
      Utils::String::format(m_name, PATH_MAX, "/dune-%s", name);
    }

    SharedMemory::SharedMemory(unsigned size):
      m_creator(false),
      m_size(size),
      m_ptr(0)
    {
      generateName();
    }

    SharedMemory::~SharedMemory(void)
    {
#if defined(DUNE_SYS_HAS_POSIX_IPC)
      munmap(m_ptr, m_size);

      if (m_creator)
      {
        int rv = shm_unlink(m_name);
        if (rv == -1)
          std::cerr << "dtr failed: " << System::Error::getMessage(errno) << std::endl;
      }
#endif
    }

    void
    SharedMemory::create(void)
    {
      m_creator = true;

#if defined(DUNE_SYS_HAS_POSIX_IPC)
      shm_unlink(m_name);

      int fd = shm_open(m_name, O_RDWR | O_CREAT | O_EXCL, S_IRUSR | S_IWUSR);
      if (fd == -1)
      {
        throw System::Error(errno, "failed to create shared memory area");
      }

      if (ftruncate(fd, m_size) == -1)
      {
        ::close(fd);
        throw System::Error(errno, "failed to initialize shared memory area");
      }

      m_ptr = mmap(0, m_size, PROT_READ | PROT_WRITE, MAP_SHARED, fd, 0);
      if (m_ptr == MAP_FAILED)
      {
        ::close(fd);
        throw System::Error(errno, "failed to map shared memory area");
      }

      ::close(fd);
#endif
    }

    void
    SharedMemory::open(void)
    {
      m_creator = false;

#if defined(DUNE_SYS_HAS_POSIX_IPC)
      int fd = shm_open(m_name, O_RDWR, S_IRUSR | S_IWUSR);
      if (fd == -1)
        throw System::Error(errno, "failed to open shared memory area");

      if (ftruncate(fd, m_size) == -1)
      {
        ::close(fd);
        throw System::Error(errno, "failed to initialize shared memory area");
      }

      m_ptr = mmap(0, m_size, PROT_READ | PROT_WRITE, MAP_SHARED, fd, 0);
      if (m_ptr == MAP_FAILED)
      {
        ::close(fd);
        throw System::Error(errno, "failed to map shared memory area");
      }

      ::close(fd);
#endif
    }

    void
    SharedMemory::generateName(void)
    {
#if defined(DUNE_SYS_HAS_POSIX_IPC)
      Math::Random::Generator* gen =
        Math::Random::Factory::create(Math::Random::Factory::c_default);

      Utils::String::format(m_name, PATH_MAX, "/dune-unnamed-%f.%d",
                            Time::Clock::getSinceEpoch(),
                            gen->random());

      delete gen;
#endif
    }
  }
}
