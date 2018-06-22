//***************************************************************************
// Copyright 2017 OceanScan - Marine Systems & Technology, Lda.             *
//***************************************************************************
// This file is part of DUNE: Unified Navigation Environment.               *
//                                                                          *
// Commercial Licence Usage                                                 *
// Licencees holding valid commercial DUNE licences may use this file in    *
// accordance with the commercial licence agreement provided with the       *
// Software or, alternatively, in accordance with the terms contained in a  *
// written agreement between you and Faculdade de Engenharia da             *
// Universidade do Porto. For licensing terms, conditions, and further      *
// information contact info@oceanscan-mst.com                               *
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
// Author: Ricardo Martins                                                  *
//***************************************************************************

#ifndef BRIDGES_PMC_BME280_DRIVER_HPP
#define BRIDGES_PMC_BME280_DRIVER_HPP

// DUNE headers.
#include <DUNE/DUNE.hpp>

// Local headers.
#include "bme280-calibration.hpp"

enum Register
{
  REG_CALIB00    = 0x88,
  REG_ID         = 0xD0,
  REG_CALIB26    = 0xE1,
  REG_CTRL_HUM   = 0xF2,
  REG_STATUS     = 0xF3,
  REG_CTRL_MEAS  = 0xF4,
  REG_CONFIG     = 0xF5,
  REG_PRESS_MSB  = 0xF7,
  REG_TEMP_MSB   = 0xFA,
  REG_HUM_MSB    = 0xFD
};

enum Mode
{
  MODE_SLEEP      = 0x00,
  MODE_FORCED     = 0x01,
  MODE_NORMAL     = 0x03
};

enum Filter
{
  FILTER_OFF      = 0,
  FILTER_2        = 2,
  FILTER_4        = 4,
  FILTER_8        = 8,
  FILTER_16       = 16
};

enum Oversampling
{
  OVERSAMPLING_1  = 1,
  OVERSAMPLING_2  = 2,
  OVERSAMPLING_4  = 4,
  OVERSAMPLING_8  = 8,
  OVERSAMPLING_16 = 16
};

class BME280Driver
{
public:
  BME280Driver(const std::string& bus, uint8_t addr):
    m_bus(NULL),
    m_addr(addr)
  {
    m_bus = new DUNE::Hardware::I2C(bus);
    uint8_t id = readId();
    if (id != 0x60)
      throw std::runtime_error("invalid chip identification number");

    readCalibrationData();
  }

  ~BME280Driver(void)
  {
    DUNE::Memory::clear(m_bus);
  }

  uint8_t
  readId(void)
  {
    uint8_t id = 0;
    uint8_t bytes_read = 0;
    if (m_bus->transfer(m_addr, REG_ID, NULL, 0, &id, 1, &bytes_read) != 0)
      throw std::runtime_error("failed to read chip identification number");

    return id;
  }

  void
  readCalibrationData(void)
  {
    uint8_t data[42] = {0};
    uint8_t bytes_read = 0;

    if (m_bus->transfer(m_addr, REG_CALIB00, NULL, 0, data, 26, &bytes_read) != 0)
      throw std::runtime_error("failed to read first calibration data block");

    if (m_bus->transfer(m_addr, REG_CALIB26, NULL, 0, data + 26, 16, &bytes_read) != 0)
      throw std::runtime_error("failed to read second calibration data block");

    m_cal.load(data);
  }

  void
  configure(void)
  {
    uint8_t bytes_read = 0;

    uint8_t config = FILTER_2 << 2;
    if (m_bus->transfer(m_addr, REG_CONFIG, &config, 1, NULL, 0, &bytes_read) != 0)
      throw std::runtime_error("failed to configure filter");

    uint8_t ctrl_hum = OVERSAMPLING_1;
    if (m_bus->transfer(m_addr, REG_CTRL_HUM, &ctrl_hum, 1, NULL, 0, &bytes_read) != 0)
      throw std::runtime_error("failed to configure humidity");

    uint8_t ctrl_meas = MODE_FORCED | OVERSAMPLING_1 << 2 | OVERSAMPLING_1 << 5;
    if (m_bus->transfer(m_addr, REG_CTRL_MEAS, &ctrl_meas, 1, NULL, 0, &bytes_read) != 0)
      throw std::runtime_error("failed to configure temperature and humidity");
  }

  void
  readRaw(float& temp, double& pres, float& humidity)
  {
    uint8_t value[8] = {0};
    uint8_t bytes_read = 0;
    if (m_bus->transfer(m_addr, REG_PRESS_MSB, NULL, 0, value, sizeof(value), &bytes_read) != 0)
      throw std::runtime_error("failed to read measurements");

    double fine_temperature = 0;
    double temperature_raw = value[3] << 12 | value[4] << 4 | value[5] >> 4;
    temp = (float)m_cal.compensateTemperature(temperature_raw, &fine_temperature);

    double pressure_raw = value[0] << 12 | value[1] << 4 | value[2] >> 4;
    pres = m_cal.compensatePressure(pressure_raw, fine_temperature);

    double humidity_raw = value[6] << 8 | value[7];
    humidity = (float)m_cal.compensateHumidity(humidity_raw, fine_temperature);
  }

private:
  //! I2C bus handle.
  DUNE::Hardware::I2C* m_bus;
  //! I2C address.
  uint8_t m_addr;
  //! Calibration.
  BME280Calibration m_cal;
};

#endif
