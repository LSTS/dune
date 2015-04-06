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
      int m_fd;
      uint8_t m_changed;
      uint8_t m_values;
    };
  }
}

#endif
