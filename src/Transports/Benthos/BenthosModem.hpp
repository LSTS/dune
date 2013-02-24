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

#ifndef TRANSPORTS_UNDERWATER_BENTHOS_MODEM_HPP_INCLUDED_
#define TRANSPORTS_UNDERWATER_BENTHOS_MODEM_HPP_INCLUDED_

// ISO C++ 98 headers.
#include <string>
#include <vector>

// Local headers.
#include "AbstractDriver.hpp"

namespace Transports
{
  namespace Benthos
  {
    class BenthosModem: public DUNE::Hardware::Modem
    {
    public:
      //! Constructor.
      //! @param config configuration.
      BenthosModem(const Configuration& config);

      //! Set modem mode.
      //! Implements Modem::setMode().
      //! @param mode Mode to set.
      //! @param force Force flag.
      Modem::Result
      setMode(int mode, bool force = false);

      //! Get modem mode.
      //! Implements Modem::getMode().
      int
      getMode(void) const;

      //! Setup modem.
      //! Implements Modem::setup().
      Modem::Result
      setup(void);

      //! Modem registers.
      enum Register
      {
        c_reg_SOFTWARE_VERSION,               /* 0 */
        c_reg_DOPPLER_TRACKING,               /* 1 */
        c_reg_PACKET_RETRY,                   /* 2 */
        c_reg_SERIAL_BAUDRATE,                /* 3 */
        c_reg_ACOUSTIC_BAUDRATE,              /* 4 */
        c_reg_RESERVED_5,                     /* 5 */
        c_reg_TRANSMIT_POWER,                 /* 6 */
        c_reg_ACOUSTIC_RESPONSE_TIMEOUT,      /* 7 */
        c_reg_FORWARDING_DELAY,               /* 8 */
        c_reg_COPROCESSOR_BOARD,              /* 9 */
        c_reg_IDLE_TIME,                      /* 10 */
        c_reg_RS232_FLOW,                     /* 11 */
        c_reg_ATX_TEST_MSG_LENGTH,            /* 12 */
        c_reg_VERBOSE_LEVEL,                  /* 13 */
        c_reg_REMOTE_ADDRESS,                 /* 14 */
        c_reg_OPERATING_MODE,                 /* 15 */
        c_reg_ERROR_DISPLAY,                  /* 16 */
        c_reg_LOW_POWER_WAKEUP,               /* 17 */
        c_reg_MODEM_ADDRESS,                  /* 18 */
        c_reg_RESERVED_19,                    /* 19 */
        c_reg_RESERVED_20,                    /* 20 */
        c_reg_NUMBER                          /* Number of registers */
      };

      //! Get register value.
      Modem::Result
      get(Register r, uint8_t* value);

      //! Set register value.
      Modem::Result
      set(Register r, uint8_t value);

      //! Register configuration type.
      typedef std::pair<Register, uint8_t> RegisterValue;

      //! Register configuration vector type.
      typedef std::vector<RegisterValue> RegisterConfig;

      //! Get several registers at once, or all of them
      //! if input vector is empty.
      Modem::Result
      get(RegisterConfig& config);

      //! Range functionality.
      Modem::Result
      range(uint8_t address, float* range);

    private:
      int m_mode;  //!< Modem mode.
      RegisterConfig m_regconf; //!< Register configuration.
    };
  }
}

#endif
