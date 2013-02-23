//***************************************************************************
// Copyright (C) 2007-2013 Laboratório de Sistemas e Tecnologia Subaquática *
// Departamento de Engenharia Electrotécnica e de Computadores              *
// Rua Dr. Roberto Frias, 4200-465 Porto, Portugal                          *
//***************************************************************************
// Author: Eduardo Marques                                                  *
//***************************************************************************
// $Id:: HardwareDriver.hpp 12667 2013-01-22 02:44:42Z rasm               $:*
//***************************************************************************

#ifndef TRANSPORTS_UNDERWATER_BENTHOS_HARDWARE_DRIVER_HPP_INCLUDED_
#define TRANSPORTS_UNDERWATER_BENTHOS_HARDWARE_DRIVER_HPP_INCLUDED_

// ISO C++ 98 headers.
#include <string>
#include <vector>

// Local headers.
#include "AbstractDriver.hpp"
#include "BenthosModem.hpp"

namespace Transports
{
  namespace Benthos
  {
    using namespace DUNE;

    class HardwareDriver: public AbstractDriver
    {
    public:
      HardwareDriver(const Configuration& cfg);

      ~HardwareDriver();

      bool
      send(const char* data, uint16_t length);

      bool
      receive(char* data, uint16_t* length, double timeout);

      bool
      range(uint8_t address, float* value);

    private:
      std::string m_device; //!< Serial port path.
      BenthosModem* m_modem; //!< modem handle
    };
  }
}

#endif
