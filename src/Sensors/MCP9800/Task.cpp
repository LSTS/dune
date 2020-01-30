//***************************************************************************
// Copyright 2007-2020 Universidade do Porto - Faculdade de Engenharia      *
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
// Author: Miguel Macedo                                                    *
//***************************************************************************

// DUNE headers.
#include <DUNE/DUNE.hpp>

//Driver headers.
#include "DriverMCP9800.hpp"

namespace Sensors
{
  //! Task to publish measurements of temperature provided by MCP9800 devices.
  //!
  //! After initial checks, the task will publish reguraly the measurements provided
  //! by the MCP9800 devices indicated in the ini file. 
  //!
  //! For developers: The trace() is used in the beggining of every function to indicate 
  //! the execution of it. The spew() is used in all error to indicate the reason of it.
  //! The debug() is used freely at your convenience. 
  //!
  //! @author Miguel Macedo
  namespace MCP9800
  {
    using DUNE_NAMESPACES;

    //Maximum of devices able to manage.
   
    struct Arguments
    {
      //I2C Port device.
      std::string i2c_dev;
      //Number of devices.
      int i2c_number;
      // Moving average window size.
      int moving_avg_size;
      // Entity labels for each device.
      std::string i2c_elabel;
      // I2C address for each device.
      uint8_t i2c_address;
    };

    struct Task: public DUNE::Tasks::Periodic
    {
      // I2C handle.
      Hardware::I2C* m_i2c;
      // Task arguments.
      Arguments m_args;	      
      // DriverMCP9800.
      DriverMCP9800* m_mcp9800;
      // IMC temperature message.
      IMC::Temperature m_temperature;
      // Timestamp for IMC messages.
      double time_stamp;
      // Auxiliary variable to get measurements.
      float value;




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
        .description("Number of MCP9800 devices present");
        
        param("Moving Average - Window Size", m_args.moving_avg_size)
        .defaultValue("10")
        .description("Number of measurements in the moving average");

        param(String::str("Device %u - Entity Label",1), m_args.i2c_elabel)
        .defaultValue("MCP9800-1")
        .description("Entity Label for the i2c device");

        param(String::str("Device %u - I2C Address",1), m_args.i2c_address)
        .defaultValue("0x48")
        .description("I2C address for the device");
      }

      //! Update internal state with new parameter values.
      void
      onUpdateParameters(void)
      {
        trace("Updating Parameters");
        // Only relevant parameter is to add or remove mcp9800 devices?	
      }

      //! Reserve entity identifiers.
      void
      onEntityReservation(void)
      {
        trace("Reserving Entities");
        try
        {
          reserveEntity(m_args.i2c_elabel);
        }
        catch(const std::exception& e)
        {
          debug("%s", e.what());
        }
      }

      //! Resolve entity names.
      void
      onEntityResolution(void)
      {
        trace("Resolving Entities");
        int temp = resolveEntity(m_args.i2c_elabel);
        m_temperature.setSourceEntity(temp);
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
          m_i2c->connect(m_args.i2c_address);
          // Initialize the driver for I2C device connected.
          m_mcp9800 = new DriverMCP9800(this, m_i2c, m_args.i2c_elabel, m_args.i2c_address);
       	  //m_avg_temp = new Math::MovingAverage<float>(m_args.moving_avg_size);
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
        trace("Initializing resources");
        setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_ACTIVE);

        // Configure the devices
        if(m_mcp9800->config(DriverMCP9800::MCP_CONFIG_ONESHOT_DISABLE, DriverMCP9800::MCP_CONFIG_ADC_12BIT, DriverMCP9800::MCP_CONFIG_QUEQUE_1BIT, DriverMCP9800::MCP_CONFIG_POLARITY_LOW, DriverMCP9800::MCP_CONFIG_MODE_COMP, DriverMCP9800::MCP_CONFIG_SHUTDOWN_DISABLE))
	      throw RestartNeeded(DTR("[MCP9800] Unable to write to device"), 10, true);
      }

      //! Release resources.
      void
      onResourceRelease(void)
      {
	    trace("Releasing Task Resources");
/*      Memory::clear(m_i2c);
	    Memory::clear(m_mcp9800); */
      }

      //! Main loop.
      void
      task(void)
      {
        trace("Executing periodic task");
       	// set timestamp for next dispatching messages.
       	time_stamp = Clock::getSinceEpoch();

       	if(m_mcp9800->getBusTemperature(value) == DriverMCP9800::MCP_STATUS_SUCCESS)
	      trace("Bus Temperature %f", value);
       	else
		  err("Temperature measurement error");
		 
        m_temperature.setTimeStamp(time_stamp);
        m_temperature.value = value;
        dispatch(m_temperature, DF_KEEP_TIME);

      }
    };
  }
}

DUNE_TASK
