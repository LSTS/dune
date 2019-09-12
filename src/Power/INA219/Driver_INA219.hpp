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
      /*===========================================================================
        DriverINA219 Enums and Structs
        =========================================================================*/
      public:
      
      /*---------------------------------------------------------------------------
        Register Addresses
      ---------------------------------------------------------------------------*/
      typedef enum
      {
        INA_REG_CONFIG          = 0x00,
        INA_REG_SHUNT           = 0x01,
        INA_REG_BUS             = 0x02,
        INA_REG_POWER           = 0x03,
        INA_REG_CURRENT         = 0x04,
        INA_REG_CALIBRATION     = 0x05
      } INA_REG_e;
      /*--------------------------------------------------------------------------*/

      /*---------------------------------------------------------------------------
        Function Return Status
      ---------------------------------------------------------------------------*/
      typedef enum
      {
        INA_STATUS_SUCCESS = 0,
        INA_STATUS_ERROR = 1
      } INA_STATUS_e;
      /*--------------------------------------------------------------------------*/

      /*---------------------------------------------------------------------------
        Config Register Settings
      ---------------------------------------------------------------------------*/

      // CONFIG: Voltage range in the Shunt resistance
      typedef enum INA_CONFIG_SHUNT_e
      {
          INA_CONFIG_SHUNT_40MV = 0,
          INA_CONFIG_SHUNT_80MV = 1,
          INA_CONFIG_SHUNT_160MV = 2,
          INA_CONFIG_SHUNT_320MV = 3
      } INA_CONFIG_SHUNT_e;

      // CONFIG: ADC reading/sampling mode
      typedef enum
      {
        INA_CONFIG_ADC_9BIT = 0,
        INA_CONFIG_ADC_10BIT = 1,
        INA_CONFIG_ADC_11BIT = 2,
        INA_CONFIG_ADC_12BIT = 3,
        INA_CONFIG_ADC_2SAMPLES = 9,
        INA_CONFIG_ADC_4SAMPLES = 10,
        INA_CONFIG_ADC_8SAMPLES = 11,
        INA_CONFIG_ADC_16SAMPLES = 12,
        INA_CONFIG_ADC_32SAMPLES = 13,
        INA_CONFIG_ADC_64SAMPLES = 14,
        INA_CONFIG_ADC_128SAMPLES = 15,
      } INA_CONFIG_ADC_e;

      // CONFIG: Operating mode
      typedef enum
      {
        INA_CONFIG_MODE_POWERDOWN = 0,
        INA_CONFIG_MODE_SHUNTVOLT_TRIG = 1,
        INA_CONFIG_MODE_BUSVOLT_TRIG = 2,
        INA_CONFIG_MODE_SHUNTBUSVOLT_TRIG = 3,
        INA_CONFIG_MODE_ADC_DISABLE = 4,
        INA_CONFIG_MODE_SHUNTVOLT_CONT = 5,
        INA_CONFIG_MODE_BUSVOLT_CONT = 6,
        INA_CONFIG_MODE_SHUNTBUSVOLT_CONT = 7
      } INA_CONFIG_MODE_e;
      /*--------------------------------------------------------------------------*/

      private:

      // Device information and settings.
      typedef struct
      {
        std::string elabel;
        uint8_t address;
        float shunt_resistance;
        float current_lsb;
        int max_current;
      } INA_DEVICE_t;

      /*===========================================================================
        DriverINA219 Functions
        =========================================================================*/
      public:
      DriverINA219(DUNE::Tasks::Periodic* task, DUNE::Hardware::I2C* i2c, const std::string elabel, const int address, const float shunt_resistance, const int max_current);

      INA_STATUS_e
      config(bool bus_32V, INA_CONFIG_SHUNT_e shunt_mode, INA_CONFIG_ADC_e badc_mode, INA_CONFIG_ADC_e sadc_mode, INA_CONFIG_MODE_e mode);

      INA_STATUS_e
      calibrate(unsigned max_current);

      INA_STATUS_e
      getBusVoltage(float& bus_voltage);

      INA_STATUS_e
      getCurrent(float& current);


      private:
      INA_STATUS_e
      write(INA_REG_e reg_addr, void* data);

      INA_STATUS_e
      read(INA_REG_e reg_addr, void* data);

      // Parent task.
      DUNE::Tasks::Periodic* m_task;
      // I2C Port Device
      DUNE::Hardware::I2C* m_i2c;
      // Device information
      INA_DEVICE_t m_device;

      // Constant value to calibrate the device
      static constexpr float c_cal_value = 0.04096f;
    };
  }
}

#endif /*POWER_DRIVER_INA219_HPP_INCLUDED_*/