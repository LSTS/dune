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
