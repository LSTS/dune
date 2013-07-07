//***************************************************************************
// Copyright 2007-2013 Universidade do Porto - Faculdade de Engenharia      *
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
// https://www.lsts.pt/dune/licence.                                        *
//***************************************************************************
// Author: Ricardo Martins                                                  *
//***************************************************************************

// DUNE headers.
#include <DUNE/Time/Utils.hpp>
#include <DUNE/System/Error.hpp>
#include <DUNE/Hardware/UCTK/Constants.hpp>
#include <DUNE/Hardware/UCTK/InterfaceESCC.hpp>

// Linux headers.
#if defined(DUNE_OS_LINUX)
#  include <sys/types.h>
#  include <sys/stat.h>
#  include <sys/select.h>
#  include <fcntl.h>
#  include <unistd.h>
#endif

namespace DUNE
{
  namespace Hardware
  {
    namespace UCTK
    {
      inline void
      throwLastError(const std::string& msg)
      {
        throw std::runtime_error(msg + System::Error::getLastMessage());
      }

      InterfaceESCC::InterfaceESCC(const std::string& dev):
        m_dev(dev),
        m_handle(-1)
      { }

      InterfaceESCC::~InterfaceESCC(void)
      {
#if defined(DUNE_OS_LINUX)
        if (m_handle != -1)
          ::close(m_handle);
#endif
      }

      void
      InterfaceESCC::doOpen(void)
      {
#if defined(DUNE_OS_LINUX)
        if (m_handle != -1)
          ::close(m_handle);

        m_handle = ::open(m_dev.c_str(), O_RDWR);
        if (m_handle == -1)
          throwLastError("failed to open ESCC device");
#else
        throw std::runtime_error("unsupported operation");
#endif
      }

      bool
      InterfaceESCC::doPoll(double timeout)
      {
#if defined(DUNE_OS_LINUX)
        fd_set rfd;
        FD_ZERO(&rfd);
        FD_SET(m_handle, &rfd);

        timeval tv = DUNE_TIMEVAL_INIT_SEC_FP(timeout);
        int rv = ::select(m_handle + 1, &rfd, 0, 0, &tv);

        return rv > 0;
#else
        (void)timeout;
        return false;
#endif
      }

      void
      InterfaceESCC::doWrite(const uint8_t* data, unsigned data_size)
      {
#if defined(DUNE_OS_LINUX)
        (void)::write(m_handle, data, data_size);
#else
        (void)data;
        (void)data_size;
#endif
      }

      unsigned
      InterfaceESCC::doRead(uint8_t* data, unsigned data_size)
      {
#if defined(DUNE_OS_LINUX)
        ssize_t rv = ::read(m_handle, data, data_size);
        if (rv <= 0)
          throwLastError("read failure");
        return (unsigned)rv;
#else
        (void)data;
        (void)data_size;
        return 0;
#endif
      }

      void
      InterfaceESCC::doFlush(void)
      {
#if defined(DUNE_OS_LINUX)
        fsync(m_handle);
#endif
      }
    }
  }
}
