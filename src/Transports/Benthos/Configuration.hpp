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
// Author: Eduardo Marques                                                  *
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
