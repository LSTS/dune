//***************************************************************************
// Copyright (C) 2007-2013 Laboratório de Sistemas e Tecnologia Subaquática *
// Departamento de Engenharia Electrotécnica e de Computadores              *
// Rua Dr. Roberto Frias, 4200-465 Porto, Portugal                          *
//***************************************************************************
// Author: Eduardo Marques                                                  *
//***************************************************************************

// Local headers.
#include "HardwareDriver.hpp"

namespace Transports
{
  namespace Benthos
  {
    using namespace DUNE;
    using namespace DUNE::Time;
    using namespace DUNE::Hardware;

    HardwareDriver::HardwareDriver(const Configuration& conf):
      AbstractDriver(conf)
    {
      m_modem = new BenthosModem(conf);
    }

    HardwareDriver::~HardwareDriver(void)
    {
      delete m_modem;
    }

    bool
    HardwareDriver::receive(char* data, uint16_t* len, double timeout)
    {
      return m_modem->receive(data, len, timeout) == Modem::MR_OK && *len > 0;
    }

    bool
    HardwareDriver::send(const char* data, uint16_t length)
    {
      Modem::Result r = m_modem->send(data, length);

      if (r != Modem::MR_OK)
        return false;

      double delay = AbstractDriver::txOverhead(length);

      // Wait for data to flow onto the water
      DUNE_DBG("Benthos", "Send delay: " << delay << " seconds ...");

      Delay::wait(delay);

      DUNE_DBG("Benthos", "Send delay over");
      return true;
    }

    bool
    HardwareDriver::range(uint8_t address, float* value)
    {
      (void)address;
      (void)value;
      return false;
    }
  }
}
