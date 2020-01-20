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
// Author: Miguel Macedo                                                    *
//***************************************************************************

#include "DriverMCP9800.hpp"

using namespace Sensors::MCP9800;


/**
 * @brief Construct a new DriverMCP9800 object. Initializes the pointers and tests the connection
 * with the device, throws an exception in case there is no connection.
 *
 * @param task Pointer to parent task.
 * @param i2c Pointer to the I2C device.
 * @param elabel Entity label of the device.
 * @param address I2C address to the device.
 */
DriverMCP9800::DriverMCP9800(DUNE::Tasks::Periodic* task, DUNE::Hardware::I2C* i2c, const std::string elabel, const int address):
	m_task(task),
	m_i2c(i2c)
{
	m_task->trace("Initializing DriverMCP9800");
	m_device.elabel = elabel;
	m_device.address = address;
	
	uint8_t buffer_w[1] = {0}, bytes;
	
	//testing connection
    m_i2c->transfer(m_device.address, 0x01, buffer_w, 1, 0, 0, &bytes);
}


/** @brief This function allows to write a full register of the MCP9800.  
 *
 * @param reg_addr Register to write. 
 * @param data Data to write in the register.  
 *
 * @return MCP_STATUS_SUCCESS In case the writing is a success. 
 * @return MCP_STATUS_ERROR Otherwise.
 */
DriverMCP9800::MCP_STATUS_e
DriverMCP9800::write(MCP_REG_e reg_addr, uint8_t* data)
{
	m_task->trace("DriverMCP9800::write executing");
    uint8_t recv_data[2] = {0}, bytes;
    try
    {
	    if(m_i2c->transfer(m_device.address, reg_addr, data, 1, recv_data, 1, &bytes))
	    {
            m_task->spew("Driver:MCP9800::write] data transfer was not successful.");
            return MCP_STATUS_ERROR;
	    }
	    if(bytes != 1)
	    {
	        m_task->spew("Driver:MCP9800::write] length of data receive is an unexpected value.");
	        return MCP_STATUS_ERROR;
	    }
	    if(data[0] != recv_data[0])
	    {
	        m_task->spew("Driver:MCP9800::write] data received is not the same as the intended to be written.");
	        return MCP_STATUS_ERROR;
	    }
    }
    catch(const std::exception& e)
    {
        throw RestartNeeded(("[Driver:MCP9800::write] "+std::string(e.what())).c_str(), 10, true);
    }
    return MCP_STATUS_SUCCESS;
}


/** @brief This function allows to read data from a register of the MCP9800.  
 *
 * @param reg_addr Register to read. 
 * @param data Data to read from register.  
 *
 * @return MCP_STATUS_SUCCESS In case the reading is a success. 
 * @return MCP_STATUS_ERROR Otherwise.                             
 */
DriverMCP9800::MCP_STATUS_e
DriverMCP9800::read(MCP_REG_e reg_addr, uint8_t* data)
{
	m_task->trace("DriverMCP9800::read executing");
	uint8_t recv_data[2] = {0}, bytes = 0;
	try
	{	 
        if(m_i2c->transfer(m_device.address, reg_addr, 0, 0, recv_data, 2, &bytes))
        {
            m_task->spew("[DriverMCP9801::read] data transfer was not successful.");
            return MCP_STATUS_ERROR;
        }
	    if(bytes != 2)
	    {
            m_task->spew("[DriverMCP9800::read] length of data receive is an unexpected value.");
            return MCP_STATUS_ERROR;
	    }
	    data[0] = recv_data[0];
	    data[1] = recv_data[1];
    }
    catch(const std::exception& e)
    {
        throw RestartNeeded(("[DriverMCP9800::read] "+std::string(e.what())).c_str(), 10, true);
    } 
    return MCP_STATUS_SUCCESS;
}


/**
 * @brief Allows to write the desired configurations on the device.
 *
 * @param oneshot_mode Defines the mode in which device performs a single conversion while in shutdown.
 * @param adc_mode Defines the resolution mode of the adc.
 * @param queque Defines the number of fault queque bits.
 * @param polarity Defines the output polarity.
 * @param mode Defines the output mode comparator or interrupt.
 * @param shutdown If shutdown Defines in shutdown is enable or disable.
 *
 * @return MCP_STATUS_SUCCESS In case the reading is a success. 
 * @return MCP_STATUS_ERROR Otherwise.     
 */
DriverMCP9800::MCP_STATUS_e
DriverMCP9800::config(DriverMCP9800::MCP_CONFIG_ONESHOT_e oneshot_mode, DriverMCP9800::MCP_CONFIG_ADC_e adc_mode, DriverMCP9800::MCP_CONFIG_QUEQUE_e queque, DriverMCP9800::MCP_CONFIG_POLARITY_e polarity, DriverMCP9800::MCP_CONFIG_MODE_e mode, DriverMCP9800::MCP_CONFIG_SHUTDOWN_e shutdown)
{
    m_task->trace("DriverMCP9800::config executing");

	uint8_t value = ((oneshot_mode<<7) | (adc_mode<<5) | (queque<<3) | (polarity<<2) | (mode<<1) | shutdown);
	//Write on the config register.
	return write(MCP_REG_CONFIG, &value);
}




/**
 * @brief Reads and converts the value present in the ambient temperature bus. 
 *
 * @param bus_temperature value in degree Celsius of the ambient temperature bus.
 *
 * @return MCP_STATUS_SUCCESS In case the reading is a success. 
 * @return MCP_STATUS_ERROR Otherwise.     
 */
DriverMCP9800::MCP_STATUS_e
DriverMCP9800::getBusTemperature(float& bus_temperature)
{
	m_task->trace("DriverMCP9800::getBustemperature executing");

	uint8_t recv[2];

	//Get the value on the bus register.
	if(read(MCP_REG_TA, recv) == MCP_STATUS_ERROR)
	{
        m_task->spew("[DriverMCP9800::getBustemperature] error while reading the value.");
        return MCP_STATUS_ERROR;
	}

	//Convert the data to degree Celsius
	bus_temperature = (float)((recv[0] & 0x7F) + ((recv[1]>>4) * 0.0625));
	if(recv[0]>>7 & 1)
	{
	    bus_temperature *= -1;
	}
	return MCP_STATUS_SUCCESS;
}



