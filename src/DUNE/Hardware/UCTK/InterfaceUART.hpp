//***************************************************************************
// Copyright (C) 2007-2013 Laboratório de Sistemas e Tecnologia Subaquática *
// Departamento de Engenharia Electrotécnica e de Computadores              *
// Rua Dr. Roberto Frias, 4200-465 Porto, Portugal                          *
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
        InterfaceUART(const std::string& dev);

        ~InterfaceUART(void);

      private:
        std::string m_dev;
        SerialPort* m_handle;

        void
        doOpen(void);

        bool
        hasNewData(double timeout);

        void
        write(const uint8_t* data, unsigned data_size);

        unsigned
        read(uint8_t* data, unsigned data_size);

        static unsigned
        probeBaudRate(const std::string& dev);

        static bool
        testBaudRate(const std::string& dev, unsigned baud_rate);
      };
    }
  }
}

#endif
