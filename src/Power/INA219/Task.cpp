//***************************************************************************
// Copyright 2007-2019 Universidade do Porto - Faculdade de Engenharia      *
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
// Author: Miguel Lançós                                                    *
//***************************************************************************

// DUNE headers.
#include <DUNE/DUNE.hpp>


namespace Power
{
  //! Insert short task description here.
  //!
  //! Insert explanation on task behaviour here.
  //! @author Miguel Lançós
  namespace INA219
  {
    using DUNE_NAMESPACES;

    static const uint8_t c_max_devices = 3;

    struct Arguments
    {
      // I2C Port device.
      std::string i2c_dev;
      // Number of devices.
      int i2c_number;
      // Entity labels for each device.
      std::string i2c_elabels[c_max_devices];
      // I2C address for each device.
      uint8_t i2c_address[c_max_devices];
      // Shunt Resistance value for each device.
      float i2c_shunt_resistance[c_max_devices];
    };

    struct Task: public DUNE::Tasks::Task
    {
      // I2C handle.
      Hardware::I2C* m_i2c;
      // Task arguments.
      Arguments m_args;

      //! Constructor.
      //! @param[in] name task name.
      //! @param[in] ctx context.
      Task(const std::string& name, Tasks::Context& ctx):
        DUNE::Tasks::Task(name, ctx),
        m_i2c(NULL)
      {
        param("I2C - Device", m_args.i2c_dev)
        .defaultValue("/dev/i2c-1")
        .description("I2C port device");

        param("Number of Devices", m_args.i2c_number)
        .defaultValue("1")
        .description("Number of INA219 devices present");

        for(int i=1; i <= c_max_devices; i++)
        {
          param(String::str("Device %u - Entity Label",i), m_args.i2c_elabels[i-1])
          .defaultValue("INA219 "+i)
          .description("Entity Label for the i2c device");

          param(String::str("Device %u - I2C Address",i), m_args.i2c_address[i-1])
          .defaultValue("64")
          .description("I2C address for the device");

          param(String::str("Device %u - Shunt Resistance",i), m_args.i2c_shunt_resistance[i-1])
          .defaultValue("0.04")
          .description("Shunt resistance value for the i2c device");
        }
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
      }

      //! Initialize resources.
      void
      onResourceInitialization(void)
      {
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
        inf("I2C - Device: %s", m_args.i2c_dev.c_str());
        inf("Number of Devices: %u", m_args.i2c_number);
        inf("Device 1 - Entity Label: %s", m_args.i2c_elabels[0].c_str());
        inf("Device 1 - I2C Address: %u", m_args.i2c_address[0]);
        inf("Device 1 - Shunt Resistance: %f", m_args.i2c_shunt_resistance[0]);
        inf("Device 2 - Entity Label: %s", m_args.i2c_elabels[1].c_str());
        inf("Device 2 - I2C Address: %u", m_args.i2c_address[1]);
        inf("Device 2 - Shunt Resistance: %f", m_args.i2c_shunt_resistance[1]);
        while (!stopping())
        {
          waitForMessages(1.0);
        }
      }
    };
  }
}

DUNE_TASK
