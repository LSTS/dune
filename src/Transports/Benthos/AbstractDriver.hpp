//***************************************************************************
// Copyright (C) 2007-2013 Laboratório de Sistemas e Tecnologia Subaquática *
// Departamento de Engenharia Electrotécnica e de Computadores              *
// Rua Dr. Roberto Frias, 4200-465 Porto, Portugal                          *
//***************************************************************************
// Author: Eduardo Marques                                                  *
//***************************************************************************

#ifndef TRANSPORTS_UNDERWATER_BENTHOS_ABSTRACT_DRIVER_HPP_INCLUDED_
#define TRANSPORTS_UNDERWATER_BENTHOS_ABSTRACT_DRIVER_HPP_INCLUDED_

// DUNE headers.
#include <DUNE/DUNE.hpp>

// Task headers
#include "Configuration.hpp"

namespace Transports
{
  namespace Benthos
  {
    class AbstractDriver
    {
    public:
      //! Sound speed m/s (assumed to be constant).
      static const double c_sound_speed;

      //! Modem setup time.
      static const double c_modem_setup_time;

      //! Constructor.
      //! @param conf configuration.
      AbstractDriver(const Configuration& conf):
        m_conf(conf)
      { }

      //! Destructor.
      virtual
      ~AbstractDriver(void)
      { }

      //! Get configuration in use.
      inline const Configuration&
      config() const
      {
        return m_conf;
      }

      virtual bool
      send(const char* data, uint16_t length) = 0;

      virtual bool
      receive(char* data, uint16_t* length, double timeout) = 0;

      virtual bool
      range(uint8_t address, float* value) = 0;

      double
      totalOverhead(double distance, uint16_t bytes) const;

      double
      tripOverhead(double distance) const;

      double
      txOverhead(uint16_t bytes) const;

      double
      constantOverhead() const;

      double
      dataOverhead(uint16_t bytes) const;

      // Override for simulation.
      virtual void
      onNotification(const DUNE::IMC::UASimulation* msg)
      {
        (void)msg;
        throw std::runtime_error("no simulation environment");
      }

    protected:
      Configuration m_conf; //!< Configuration in use.
    };
  }
}

#endif
