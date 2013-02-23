//***************************************************************************
// Copyright (C) 2007-2013 Laboratório de Sistemas e Tecnologia Subaquática *
// Departamento de Engenharia Electrotécnica e de Computadores              *
// Rua Dr. Roberto Frias, 4200-465 Porto, Portugal                          *
//***************************************************************************
// Author: Ricardo Martins                                                  *
//***************************************************************************
// $Id:: Buttons.cpp 12667 2013-01-22 02:44:42Z rasm                      $:*
//***************************************************************************

// ISO C++ 98 headers.
#include <iostream>

// DUNE headers.
#include <DUNE/Hardware/Buttons.hpp>
#include <DUNE/System/IOMultiplexing.hpp>

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

      System::IOMultiplexing iom;

      iom.add(&m_fd);

      m_changed = 0;

      if (iom.poll(timeout))
      {
        int rv = read(m_fd, ev, sizeof(ev));

        for (unsigned i = 0; i < rv / sizeof(struct input_event); ++i)
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
