//***************************************************************************
// Copyright (C) 2007-2013 Laboratório de Sistemas e Tecnologia Subaquática *
// Departamento de Engenharia Electrotécnica e de Computadores              *
// Rua Dr. Roberto Frias, 4200-465 Porto, Portugal                          *
//***************************************************************************
// Author: Eduardo Marques                                                  *
//***************************************************************************
// $Id:: Configuration.hpp 12667 2013-01-22 02:44:42Z rasm                $:*
//***************************************************************************

#ifndef TRANSPORTS_UNDERWATER_CONFIGURATION_HPP_INCLUDED_
#define TRANSPORTS_UNDERWATER_CONFIGURATION_HPP_INCLUDED_

// ISO C++ 98 headers.
#include <string>

// DUNE headers.
#include <DUNE/Config.hpp>

namespace Transports
{
  namespace Benthos
  {
    //! Default acoustic baud rate.
    static const uint16_t c_default_abrate = 800;

    //! Default modem address.
    static const uint8_t c_default_modem_address = 0;

    //! Default transmit power.
    static const uint8_t c_default_transmit_power = 4;

    //! Default forwarding delay, set to minimum (50 ms).
    static const uint16_t c_default_forwarding_delay = 50;

    //! Modem configuration.
    struct Configuration
    {
      std::string uart_device;        //!< Serial port (for hardware driver)
      uint16_t uart_brate;            //!< Serial port baud rate (for hardware driver).
      uint16_t acoustic_baud_rate;    //!< Acoustic baud rate.
      uint16_t forwarding_delay;      //!< Forwarding delay (milliseconds).
      uint8_t address;                //!< Modem address.
      uint8_t transmit_power;         //!< Transmit power.
    };
  }
}

#endif
