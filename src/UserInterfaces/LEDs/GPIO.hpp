//***************************************************************************
// Copyright (C) 2007-2013 Laboratório de Sistemas e Tecnologia Subaquática *
// Departamento de Engenharia Electrotécnica e de Computadores              *
// Rua Dr. Roberto Frias, 4200-465 Porto, Portugal                          *
//***************************************************************************
// Author: Ricardo Martins                                                  *
//***************************************************************************
// $Id:: GPIO.hpp 12667 2013-01-22 02:44:42Z rasm                         $:*
//***************************************************************************

#ifndef DUNE_USER_INTERFACES_LEDS_GPIO_HPP_INCLUDED_
#define DUNE_USER_INTERFACES_LEDS_GPIO_HPP_INCLUDED_

// DUNE headers.
#include <DUNE/DUNE.hpp>

// Local headers.
#include "AbstractOutput.hpp"

namespace UserInterfaces
{
  namespace LEDs
  {
    using DUNE_NAMESPACES;

    class GPIO: public AbstractOutput
    {
    public:
      GPIO(unsigned nr):
        m_gpio(0)
      {
        m_gpio = new Hardware::GPIO(nr);
        m_gpio->setDirection(Hardware::GPIO::GPIO_DIR_OUTPUT);
      }

      ~GPIO(void)
      {
        if (m_gpio)
          delete m_gpio;
      }

      void
      setValue(bool value)
      {
        m_gpio->setValue(value);
      }

    private:
      Hardware::GPIO* m_gpio;
    };
  }
}

#endif
