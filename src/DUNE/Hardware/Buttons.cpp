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
#include <iostream>

// DUNE headers.
#include <DUNE/IO/Poll.hpp>
#include <DUNE/Hardware/Buttons.hpp>

// Platform headers.
#if defined(DUNE_SYS_HAS_UNISTD_H)
#  include <unistd.h>
#endif

#if defined(DUNE_SYS_HAS_SYS_TYPES_H)
#  include <sys/types.h>
#endif

#if defined(DUNE_SYS_HAS_SYS_STAT_H)
#  include <sys/stat.h>
#endif

#if defined(DUNE_SYS_HAS_FCNTL_H)
#  include <fcntl.h>
#endif

#if defined(DUNE_SYS_HAS_LINUX_INPUT_H)
#  include <linux/input.h>
#endif

namespace DUNE
{
  namespace Hardware
  {
    Buttons::Buttons(const std::string& source_dev):
      m_changed(0),
      m_values(0)
    {
#if defined(DUNE_OS_LINUX)
      m_fd = open(source_dev.c_str(), O_RDONLY);
#else
      (void)source_dev;
#endif
    }

    void
    Buttons::poll(double timeout)
    {
#if defined(DUNE_SYS_HAS_LINUX_INPUT_H)
      input_event ev[16];

      m_changed = 0;

      if (IO::Poll::poll(m_fd, timeout))
      {
        size_t rv = read(m_fd, ev, sizeof(ev));

        for (size_t i = 0; i < rv / sizeof(struct input_event); ++i)
        {
          if ((ev[i].type == EV_KEY) && (ev[i].code >= BTN_0) && (ev[i].code <= BTN_7))
          {
            uint8_t bit = (1 << (ev[i].code - BTN_0));

            m_changed |= bit;
            if (ev[i].value == 0)
              m_values &= ~bit;
            else
              m_values |= bit;
          }
        }
      }
#else
      (void)timeout;
#endif
    }
  }
}
