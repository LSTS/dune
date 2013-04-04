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
// Author: Ricardo Martins                                                  *
//***************************************************************************

#ifndef DUNE_HARDWARE_UCTK_INTERFACE_UART_HPP_INCLUDED_
#define DUNE_HARDWARE_UCTK_INTERFACE_UART_HPP_INCLUDED_

// DUNE headers.
#include <DUNE/Hardware/SerialPort.hpp>
#include <DUNE/Hardware/UCTK/Interface.hpp>

namespace DUNE
{
  namespace Hardware
  {
    namespace UCTK
    {
      class InterfaceUART: public Interface
      {
      public:
        InterfaceUART(const std::string& dev, unsigned baud_rate = 0);

        ~InterfaceUART(void);

      private:
        //! Device name.
        std::string m_dev;
        //! Serial port handle.
        SerialPort* m_handle;
        //! Baud rate.
        unsigned m_baud_rate;
        //! Baud rate in use.
        unsigned m_baud_rate_used;

        void
        doOpen(void);

        bool
        doPoll(double timeout);

        void
        doWrite(const uint8_t* data, unsigned data_size);

        unsigned
        doRead(uint8_t* data, unsigned data_size);

        void
        doFlush(void);

        static unsigned
        probeBaudRate(const std::string& dev);

        static bool
        testBaudRate(const std::string& dev, unsigned baud_rate);
      };
    }
  }
}

#endif
