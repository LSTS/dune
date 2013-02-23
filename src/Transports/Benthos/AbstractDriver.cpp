//***************************************************************************
// Copyright (C) 2007-2013 Laboratório de Sistemas e Tecnologia Subaquática *
// Departamento de Engenharia Electrotécnica e de Computadores              *
// Rua Dr. Roberto Frias, 4200-465 Porto, Portugal                          *
//***************************************************************************
// Author: Eduardo Marques                                                  *
//***************************************************************************

// Local headers.
#include "AbstractDriver.hpp"

namespace Transports
{
  namespace Benthos
  {
    using namespace DUNE::Time;

    // Sound speed constant.
    const double AbstractDriver::c_sound_speed = 1500.0;

    // Modem setup time before send (1750 ms).
    const double AbstractDriver::c_modem_setup_time = 1.750;

    double
    AbstractDriver::totalOverhead(double d, uint16_t bytes) const
    {
      return tripOverhead(d) + txOverhead(bytes);
    }

    double
    AbstractDriver::constantOverhead(void) const
    {
      return c_modem_setup_time
      + 0.001 * (m_conf.forwarding_delay / 50);
    }

    double
    AbstractDriver::tripOverhead(double d) const
    {
      return d / c_sound_speed;
    }

    double
    AbstractDriver::dataOverhead(uint16_t bytes) const
    {
      return 8.0 * bytes / (double)m_conf.acoustic_baud_rate;
    }

    double
    AbstractDriver::txOverhead(uint16_t bytes) const
    {
      return constantOverhead() + dataOverhead(bytes);
    }
  }
}
