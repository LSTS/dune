//***************************************************************************
// Copyright (C) 2007-2013 Laboratório de Sistemas e Tecnologia Subaquática *
// Departamento de Engenharia Electrotécnica e de Computadores              *
// Rua Dr. Roberto Frias, 4200-465 Porto, Portugal                          *
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
