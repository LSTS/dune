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

#ifndef POWER_DRIVER_INA219_HPP_INCLUDED_
#define POWER_DRIVER_INA219_HPP_INCLUDED_

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

    class DriverINA219
    {
      private:
      typedef struct
      {
        std::string elabel;
        uint8_t address;
        float shunt_resistance;
      } INA_DEVICE_t;


      // Parent task.
      DUNE::Tasks::Periodic* m_task;
      // I2C Port Device
      DUNE::Hardware::I2C* m_i2c;
      // Device information
      INA_DEVICE_t m_device;

      // Constant value to calibrate the device
      static constexpr float c_cal_value = 0.04096f ;

      public:

      typedef enum
      {
        INA_REG_CONFIG          = 0x00,
        INA_REG_SHUNT           = 0x01,
        INA_REG_BUS             = 0x02,
        INA_REG_POWER           = 0x03,
        INA_REG_CURRENT         = 0x04,
        INA_REG_CALIBRATION     = 0x05
      } INA_REG_e;

      typedef enum
      {
        INA_STATUS_SUCCESS = 0,
        INA_STATUS_ERROR = 1
      } INA_STATUS_e;

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
      DriverINA219(DUNE::Tasks::Periodic* task, DUNE::Hardware::I2C* i2c, const std::string elabel, const int address, const float shunt_resistance):
        m_task(task),
        m_i2c(i2c)
      {
        trace("Initializing DriverINA219");
        m_device.elabel = elabel;
        m_device.address = address;
        m_device.shunt_resistance = shunt_resistance;

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
      INA_STATUS_e
      write(INA_REG_e reg_addr, std::uint16_t data)
      {
        trace("DriverINA219::write executing");
        std::uint8_t write_data[2] = {(std::uint8_t)(data>>8), (std::uint8_t)data}, recv_data[2], bytes;
        try
        {
          if(m_i2c->transfer(m_device.address, reg_addr, write_data, 2, recv_data, 2, &bytes))
            return INA_STATUS_ERROR; //If the transfer is not successfull.

          if(bytes != 2)
            return INA_STATUS_ERROR; // If the data received doesn't have the expected length.

          if((write_data[0] != recv_data[0]) || (write_data[1] != recv_data[1]))
            return INA_STATUS_ERROR; // If the read data is not equal to data intended to write.
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
      INA_STATUS_e
      read(INA_REG_e reg_addr, int* data)
      {
        trace("DriverINA219::read executing");
        std::uint8_t recv_data[2], bytes;
        try
        {
          if(m_i2c->transfer(m_device.address, reg_addr, NULL, 0, recv_data, 2, &bytes))
            return INA_STATUS_ERROR; // If the transfer is not successfull.

          if(bytes != 2)
            return INA_STATUS_ERROR; // If the received bytes doesn have the expected length.

          *data = (int)(recv_data[0]<<8) | recv_data[1];
        }
        catch(const std::exception& e)
        {
          throw RestartNeeded(("[DriverINA219::read] "+std::string(e.what())).c_str(), 10, true);
        } 
        return INA_STATUS_SUCCESS;
      }
    };
  }
}

#endif /*POWER_DRIVER_INA219_HPP_INCLUDED_*/