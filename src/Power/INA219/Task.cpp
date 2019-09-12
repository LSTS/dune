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

// Driver headers.
#include "Driver_INA219.hpp"


namespace Power
{
  //! Task to publish measurements of current and voltage provided by INA219 devices.
  //!
  //! After initial checks, the task will publish regularly the measurements provided
  //! by the INA219 devices indicated in the ini file. This task allows several INA219
  //! devices. This task averages 10 measuments, this means that the publish frequency 
  //! is 1/10th of the task execution frequency.
  //!
  //! For developers: The trace() is used in the beggining of every function to indicate
  //! the execution of it. The spew() is used in all error to indicate the reason of it.
  //! The debug() is used freely at your convenience.
  //!
  //! @author Miguel Lançós
  namespace INA219
  {
    using DUNE_NAMESPACES;

    static const int c_max_devices = 3;

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

    struct Task: public DUNE::Tasks::Periodic
    {
      // I2C handle.
      Hardware::I2C* m_i2c;
      // Task arguments.
      Arguments m_args;
      // Driver INA219.
      DriverINA219* m_ina219[c_max_devices];
      // IMC Bus Voltage message.
      IMC::Voltage m_bus_volt[c_max_devices];
      // IMC Current message.
      IMC::Current m_current[c_max_devices];

      //! Constructor.
      //! @param[in] name task name.
      //! @param[in] ctx context.
      Task(const std::string& name, Tasks::Context& ctx):
        DUNE::Tasks::Periodic(name, ctx),
        m_i2c(NULL)
      {
        trace("starting");
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
        trace("Updating Parameters");
        // Only relevant parameter is to add or remove ina219 devices?
      }

      //! Reserve entity identifiers.
      void
      onEntityReservation(void)
      {
        trace("Reserving Entities");
        try
        {
          for(int i = 0; i < m_args.i2c_number; i++)
            reserveEntity(m_args.i2c_elabels[i]);
        }
        catch(const std::exception& e)
        {
          debug("%s",e.what());
        }
      }

      //! Resolve entity names.
      void
      onEntityResolution(void)
      {
        trace("Resolving Entities");
        int temp;
        for(int i = 0; i < m_args.i2c_number; i++)
        {
          temp = resolveEntity(m_args.i2c_elabels[i]);
          m_bus_volt[i].setSourceEntity(temp);
          m_current[i].setSourceEntity(temp);
        }
      }

      //! Acquire resources.
      void
      onResourceAcquisition(void)
      {
        trace("Acquiring resources");
        setEntityState(IMC::EntityState::ESTA_BOOT, Status::CODE_INIT);
        try
        {
          m_i2c = new I2C(m_args.i2c_dev); // Initialize the I2C.

          // Initializes the driver for each I2C device connected.
          for(int i = 0; i < m_args.i2c_number; i++)
            m_ina219[i] = new DriverINA219(this, m_i2c, m_args.i2c_elabels[i], m_args.i2c_address[i], m_args.i2c_shunt_resistance[i]);
        }
        catch(const std::exception& e)
        {
          // In case of failure waits 10 seconds and restarts the task.
          throw RestartNeeded(e.what(), 10, true);
        }
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
        trace("Releasing Task Resources");
        Memory::clear(m_i2c);
        for(int i = 0; i < m_args.i2c_number; i++)
          Memory::clear(m_ina219[i]);
      }

      //! Main loop.
      void
      task(void)
      {
        trace("Executing periodic task");
      }
    };
  }
}

DUNE_TASK
