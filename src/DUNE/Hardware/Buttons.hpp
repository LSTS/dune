//***************************************************************************
// Copyright (C) 2007-2013 Laboratório de Sistemas e Tecnologia Subaquática *
// Departamento de Engenharia Electrotécnica e de Computadores              *
// Rua Dr. Roberto Frias, 4200-465 Porto, Portugal                          *
//***************************************************************************
// Author: Ricardo Martins                                                  *
//***************************************************************************
// $Id:: Buttons.hpp 12667 2013-01-22 02:44:42Z rasm                      $:*
//***************************************************************************

#ifndef DUNE_HARDWARE_BUTTONS_HPP_INCLUDED_
#define DUNE_HARDWARE_BUTTONS_HPP_INCLUDED_

// ISO C++ 98 headers.
#include <string>

// DUNE headers.
#include <DUNE/Config.hpp>

namespace DUNE
{
  namespace Hardware
  {
    // Export DLL Symbol.
    class DUNE_DLL_SYM Buttons;

    class Buttons
    {
    public:
      //! Constructor.
      //! @param[in] source_dev path for the input event device file
      //! (for example /dev/input/event0)
      Buttons(const std::string& source_dev);

      //! Wait for new input.
      //! @param[in] timeout timeout in seconds, negative for no timeout.
      void
      poll(double timeout);

      //! Check if a button changed state.
      //! @param[in] btn button number.
      //! @return true if changed state, false otherwise.
      bool
      changed(unsigned btn)
      {
        return (m_changed & (1 << btn)) != 0;
      }

      //! Get the button state.
      //! @param[in] btn button number.
      //! @return true if pressed, false otherwise.
      bool
      value(unsigned btn)
      {
        return ((1 << btn) & m_values) == (1u << btn);
      }

    private:
#if defined(DUNE_OS_LINUX)
      int m_fd;
#endif

      uint8_t m_changed;
      uint8_t m_values;
    };
  }
}

#endif
