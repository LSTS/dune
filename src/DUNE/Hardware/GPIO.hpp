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

#ifndef DUNE_HARDWARE_GPIO_HPP_INCLUDED_
#define DUNE_HARDWARE_GPIO_HPP_INCLUDED_

// ISO C++ 98 headers.
#include <string>

// DUNE headers.
#include <DUNE/Config.hpp>

namespace DUNE
{
  namespace Hardware
  {
    // Export symbol.
    class DUNE_DLL_SYM GPIO;

    class GPIO
    {
    public:
      enum Direction
      {
        //! GPIO is used as input.
        GPIO_DIR_INPUT,
        //! GPIO is used as output.
        GPIO_DIR_OUTPUT
      };

      //! Initialize GPIO.
      //! @param[in] number GPIO number.
      GPIO(unsigned int number);

      //! Default destructor.
      ~GPIO(void);

      //! Set GPIO direction.
      //! @param[in] direction GPIO direction.
      void
      setDirection(Direction direction);

      //! Set GPIO direction.
      //! @param[in] direction "input" or "output".
      void
      setDirection(const std::string& direction);

      //! Set GPIO value.
      //! @param[in] value pin value (false = off, true = on).
      void
      setValue(bool value);

      //! Get GPIO value.
      //! @return pin value (false = off, true = on).
      bool
      getValue(void);

    private:
      //! GPIO number.
      unsigned int m_number;
      //! GPIO direction.
      Direction m_direction;

#if defined(DUNE_OS_LINUX)
      //! Path to GPIO direction file.
      std::string m_file_dir;
      //! Path to GPIO value file.
      std::string m_file_val;

      static void
      writeToFile(const std::string& file, int value);

      static void
      writeToFile(const std::string& file, const std::string& value);
#endif
    };
  }
}

#endif
