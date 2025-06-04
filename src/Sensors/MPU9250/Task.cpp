//***************************************************************************
// Copyright 2007-2025 Universidade do Porto - Faculdade de Engenharia      *
// Laboratório de Sistemas e Tecnologia Subaquática (LSTS)                  *
//***************************************************************************
// This file is part of DUNE: Unified Navigation Environment.               *
//                                                                          *
// Commercial Licence Usage                                                 *
// Licencees holding valid commercial DUNE licences may use this file in    *
// accordance with the commercial licence agreement provided with the       *
// Software or, alternatively, in accordance with the terms contained in a  *
// written agreement between you and Faculdade de Engenharia da             *
// Universidade do Porto. For licensing terms, conditions, and further      *
// information contact lsts@fe.up.pt.                                       *
//                                                                          *
// Modified European Union Public Licence - EUPL v.1.1 Usage                *
// Alternatively, this file may be used under the terms of the Modified     *
// EUPL, Version 1.1 only (the "Licence"), appearing in the file LICENCE.md *
// included in the packaging of this file. You may not use this work        *
// except in compliance with the Licence. Unless required by applicable     *
// law or agreed to in writing, software distributed under the Licence is   *
// distributed on an "AS IS" basis, WITHOUT WARRANTIES OR CONDITIONS OF     *
// ANY KIND, either express or implied. See the Licence for the specific    *
// language governing permissions and limitations at                        *
// https://github.com/LSTS/dune/blob/master/LICENCE.md and                  *
// http://ec.europa.eu/idabc/eupl.html.                                     *
//***************************************************************************
// Author: Bernardo Gabriel                                                 *
//***************************************************************************

// DUNE headers.
#include <DUNE/DUNE.hpp>

#include "Driver.hpp"

namespace Sensors
{
  //! Insert short task description here.
  //!
  //! Insert explanation on task behaviour here.
  //! @author Bernardo Gabriel
  namespace MPU9250
  {
    using DUNE_NAMESPACES;

    struct Arguments
    {
      //! IO device.
      std::string uri;
    };

    struct Task: public DUNE::Tasks::Task
    {
      //! Task arguments.
      Arguments m_args;
      //! Driver for the MPU9250 sensor.
      Driver* m_driver;
      //! Timer;
      DUNE::Time::Counter<float> m_timer;

      //! Constructor.
      //! @param[in] name task name.
      //! @param[in] ctx context.
      Task(const std::string& name, Tasks::Context& ctx):
        DUNE::Tasks::Task(name, ctx),
        m_driver(nullptr),
        m_timer(1.0f)
      {
        param("IO Port - Device", m_args.uri)
        .defaultValue("")
        .description("IO device URI in the form \"i2c://DEVICE\" or \"spi://DEVICE\"");
      }

      //! Update internal state with new parameter values.
      void
      onUpdateParameters(void)
      {
      }

      //! Reserve entity identifiers.
      void
      onEntityReservation(void)
      {
      }

      //! Resolve entity names.
      void
      onEntityResolution(void)
      {
      }

      //! Acquire resources.
      void
      onResourceAcquisition(void)
      {
        std::string uri = m_args.uri;
        std::string prefix;
        std::string resource;

        auto pos = uri.find("://");
        if (pos != std::string::npos)
        {
          prefix = uri.substr(0, pos);
          resource = uri.substr(pos + 3);
        }
        else
        {
          throw RestartNeeded("invalid URI for MPU9250: " + m_args.uri, 5);
        }

        if (prefix == "i2c")
          m_driver = new Driver(this, new DUNE::Hardware::I2C(resource));
        else if (prefix == "spi")
          m_driver = new Driver(this, new DUNE::Hardware::SPI(resource));
        else
          throw RestartNeeded("invalid URI for MPU9250: " + m_args.uri, 5);
      }

      //! Initialize resources.
      void
      onResourceInitialization(void)
      {
        if (!m_driver)
          throw RestartNeeded("MPU9250 driver not initialized", 5);

        if (!m_driver->setup())
          throw RestartNeeded("MPU9250 driver setup failed", 5);
      }

      //! Release resources.
      void
      onResourceRelease(void)
      {
      }

      //! Main loop.
      void
      onMain(void)
      {
        while (!stopping())
        {
          waitForMessages(0.01f);
          m_driver->update();
          if (m_timer.overflow())
          {
            war("%f", (float) m_driver->read_temperature_data() / 333.87 + 21.0);
            m_timer.reset();
          }
        }
      }
    };
  }
}

DUNE_TASK
