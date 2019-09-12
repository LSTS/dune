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

#include "Driver_INA219.hpp"

using namespace Power::INA219;

/**
 * @brief Construct a new DriverINA219 object. Initializes the pointers and tests the connection
 * with the device, throws an exception in case there is no connection.
 * 
 * @param task Pointer to parent task.
 * @param i2c Pointer to the I2C device.
 * @param elabel Entity label of the device.
 * @param address I2C address to the device.
 * @param shunt_resistance Value of the shunt resistance of the device.
 */
DriverINA219::DriverINA219(DUNE::Tasks::Periodic* task, DUNE::Hardware::I2C* i2c, const std::string elabel, const int address, const float shunt_resistance, const int max_current):
  m_task(task),
  m_i2c(i2c)
{
  m_task->trace("Initializing DriverINA219");
  m_device.elabel = elabel;
  m_device.address = address;
  m_device.shunt_resistance = shunt_resistance;
  m_device.current_lsb = 0.0;
  m_device.max_current = max_current;

  // testing connection
  std::uint8_t buffer[2] = {0};
  m_i2c->read(m_device.address, buffer, 2);
}

/**
 * @brief This function allows to write a full register of the ina219.
 * 
 * @param reg_addr Register to write.
 * @param data Data to write in the register.
 * 
 * @return INA_STATUS_SUCCESS In case the writing is a success.
 * @return INA_STATUS_ERROR Otherwise.
 */
DriverINA219::INA_STATUS_e
DriverINA219::write(INA_REG_e reg_addr, void* data)
{
  m_task->trace("DriverINA219::write executing");
  std::uint8_t write_data[2] = {(std::uint8_t)(*(int*)data>>8), (std::uint8_t)*(int*)data}, recv_data[2], bytes;
  try
  {
    if(m_i2c->transfer(m_device.address, reg_addr, write_data, 2, recv_data, 2, &bytes))
    {
      m_task->spew("[DriverINA219::write] data transfer was not successful.");
      return INA_STATUS_ERROR;
    }

    if(bytes != 2)
    {
      m_task->spew("[DriverINA219::write] length of data receive is an unexpected value.");
      return INA_STATUS_ERROR;
    }

    if((write_data[0] != recv_data[0]) || (write_data[1] != recv_data[1]))
    {
      m_task->spew("[DriverINA219::write] data received is not the same as the intended to be written.");
      return INA_STATUS_ERROR;
    }
  }
  catch(const std::exception& e)
  {
    throw RestartNeeded(("[DriverINA219::write] "+std::string(e.what())).c_str(), 10, true);
  } 
  return INA_STATUS_SUCCESS;
}

/**
 * @brief This function allows to read data from a register of the ina219.
 * 
 * @param reg_addr Register to read.
 * @param data data read from the register.
 *
 * @return INA_STATUS_SUCCESS In case the writing is a success.
 * @return INA_STATUS_ERROR Otherwise.
 */
DriverINA219::INA_STATUS_e
DriverINA219::read(INA_REG_e reg_addr, void* data)
{
  m_task->trace("DriverINA219::read executing");
  std::uint8_t recv_data[2], bytes;
  try
  {
    if(m_i2c->transfer(m_device.address, reg_addr, NULL, 0, recv_data, 2, &bytes))
    {
      m_task->spew("[DriverINA219::read] data transfer was not successful.");
      return INA_STATUS_ERROR;
    }

    if(bytes != 2)
    {
      m_task->spew("[DriverINA219::read] length of data receive is an unexpected value.");
      return INA_STATUS_ERROR;
    }

    *(int*)data = (unsigned)(recv_data[0]<<8) | recv_data[1];
  }
  catch(const std::exception& e)
  {
    throw RestartNeeded(("[DriverINA219::read] "+std::string(e.what())).c_str(), 10, true);
  } 
  return INA_STATUS_SUCCESS;
}

/**
 * @brief Allows to write the desired configurations on the device.
 * 
 * @param bus_32V   If the max range of the bus is 32V(true) or 16V(false).
 * @param shunt_mode Defines the max range of the measured voltage in the shunt resistance.
 * @param badc_mode  Defines the mode in which the bus adc works.
 * @param sadc_mode  Defines the mode in which the shunt adc works.
 * @param mode  Defines the mode in which the device works.
 *
 * @return INA_STATUS_SUCCESS In case the writing is a success.
 * @return INA_STATUS_ERROR Otherwise.
 */
DriverINA219::INA_STATUS_e
DriverINA219::config(bool bus_32V, INA_CONFIG_SHUNT_e shunt_mode, INA_CONFIG_ADC_e badc_mode, INA_CONFIG_ADC_e sadc_mode, INA_CONFIG_MODE_e mode)
{
  m_task->trace("DriverINA219::config executing");
  
  std::uint16_t value = ((bus_32V<<13) | (shunt_mode<<11) | (badc_mode<<7) | (sadc_mode<<3) | mode);
  // Write on the config register.
  return write(INA_REG_CONFIG, &value);
}

/**
 * @brief Calculates and writes the calibration value for the device to
 * read correctly the current in the shunt resistance.
 * 
 * @param max_current maximum current expected to be read.
 *
 * @return INA_STATUS_SUCCESS In case the writing is a success.
 * @return INA_STATUS_ERROR Otherwise.
 */
DriverINA219::INA_STATUS_e
DriverINA219::calibrate(unsigned max_current)
{
  m_task->trace("DriverINA219::calibrate executing");

  // Calibration value calculation.
  float current_lsb = (float)(max_current) / 32768;
  unsigned cal = c_cal_value / (current_lsb * m_device.shunt_resistance);

  // Write the calibration value.
  if(write(INA_REG_CALIBRATION, &cal) == INA_STATUS_ERROR)
  {
    m_task->spew("[DriverINA219::calibrate] error while writing the value.");
    return INA_STATUS_ERROR;
  }

  // Change m_device current settings.
  m_device.current_lsb = current_lsb;
  m_task->debug("Current lsb is: %f", current_lsb);

  return INA_STATUS_SUCCESS;
}

/**
 * @brief Reads and converts the value present in the bus voltage register.
 * 
 * @param bus_voltage Value in Volts of the bus voltage.
 *
 * @return INA_STATUS_SUCCESS In case the writing is a success.
 * @return INA_STATUS_ERROR Otherwise.
 */
DriverINA219::INA_STATUS_e
DriverINA219::getBusVoltage(float& bus_voltage)
{
  m_task->trace("DriverINA219::getBusVoltage executing");

  unsigned recv;

  // Get the value on the bus register.
  if(read(INA_REG_BUS, &recv) == INA_STATUS_ERROR)
  {
    m_task->spew("[DriverINA219::getBusVoltage] error while reading the value.");
    return INA_STATUS_ERROR;
  }

  // Check is the measurement is ready.
  if(!(recv & 0x02))
  {
    m_task->spew("DriverINA219::getBusVoltage the conversion is not available");
    return INA_STATUS_ERROR; //The conversion is not available.
  }

  // Convert the data to volts.
  bus_voltage = (float)(recv>>3) * 0.004;

  return INA_STATUS_SUCCESS;
}

/**
 * @brief Reads and converts the value read in current register.
 * This function can only be used after calibration.
 * 
 * @param current  Value in Amps of the current.
 *
 * @return INA_STATUS_SUCCESS In case the writing is a success.
 * @return INA_STATUS_ERROR Otherwise.
 */
DriverINA219::INA_STATUS_e
DriverINA219::getCurrent(float& current)
{
  m_task->trace("DriverINA219::getCurrent executing");

  std::int16_t recv;

  // Get the value on the bus register.
  if(read(INA_REG_BUS, &recv) == INA_STATUS_ERROR)
  {
    m_task->spew("[DriverINA219::getCurrent] reading of bus register error.");
    return INA_STATUS_ERROR;
  }

  // Check if overflow is detected.
  if(recv & 0x01)
  {
    m_task->spew("[DriverINA219::getCurrent] overflow detected");
    return INA_STATUS_ERROR;
  }

  // Get the value on the current register.
  if(read(INA_REG_CURRENT, &recv) == INA_STATUS_ERROR)
  {
    m_task->spew("[DriverINA219::getCurrent] reading of current register error.");
    return INA_STATUS_ERROR;
  }

  m_task->debug("Current read value: %d", recv);
  // Check if calibration is done
  if(m_device.current_lsb == 0)
  {
    m_task->spew("[DriverINA219::getCurrent] calibration value error.");
    return INA_STATUS_ERROR;
  }

  current = recv*m_device.current_lsb;

  return INA_STATUS_SUCCESS;
}