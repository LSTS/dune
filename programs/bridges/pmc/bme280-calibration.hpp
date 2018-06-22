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

#ifndef BRIDGES_PMC_BME280_CALIBRATION_HPP
#define BRIDGES_PMC_BME280_CALIBRATION_HPP

// DUNE headers.
#include <DUNE/DUNE.hpp>

class BME280Calibration
{
public:
  //! Load calibration/trimming values.
  //!
  //! @param[in] data calibration data.
  void
  load(const uint8_t* data)
  {
    // Temperature.
    m_t1 = readSigned16<uint16_t>(data[1], data[0]);
    m_t2 = readSigned16<int16_t>(data[3], data[2]);
    m_t3 = readSigned16<int16_t>(data[5], data[4]);

    // Pressure.
    m_p1 = readSigned16<uint16_t>(data[7], data[6]);
    m_p2 = readSigned16<int16_t>(data[9], data[8]);
    m_p3 = readSigned16<int16_t>(data[11], data[10]);
    m_p4 = readSigned16<int16_t>(data[13], data[12]);
    m_p5 = readSigned16<int16_t>(data[15], data[14]);
    m_p6 = readSigned16<int16_t>(data[17], data[16]);
    m_p7 = readSigned16<int16_t>(data[19], data[18]);
    m_p8 = readSigned16<int16_t>(data[21], data[20]);
    m_p9 = readSigned16<int16_t>(data[23], data[22]);

    // Humidity
    m_h1 = (int8_t)data[25];
    m_h2 = readSigned16<int16_t>(data[27], data[26]);
    m_h3 = data[27];
    m_h4 = DUNE::Utils::signExtend<signed int, 12>(data[29] << 4 | (data[30] & 0x0f));
    m_h5 = DUNE::Utils::signExtend<signed int, 12>((data[30] & 0xf0) << 4 | data[31]);
    m_h6 = (int8_t)data[32];
  }

  //! Converts and compensates raw temperature readings.
  //!
  //! @param[in] adc Raw measurement.
  //! @param[in,out] fine_temperature pointer to store the fine
  //! temperature value used to compensate other measurements.
  //!
  //! @return pressure in °C.
  double
  compensateTemperature(double adc, double* fine_temperature = NULL)
  {
    double var1 = (adc / 16384.0 - m_t1 / 1024.0) * m_t2;
    double var2 = ((adc / 131072.0 - m_t1 / 8192.0) * (adc / 131072.0 - m_t1 / 8192.0)) * m_t3;

    if (fine_temperature != NULL)
      *fine_temperature = var1 + var2;

    return (var1 + var2) / 5120.0;
  }

  //! Converts and compensates raw pressure readings.
  //!
  //! @param[in] adc Raw measurement.
  //! @param[in] fine_temperature Fine temperature value.
  //!
  //! @return pressure in Pa.
  double
  compensatePressure(double adc, double fine_temperature)
  {
    double var1 = (fine_temperature / 2.0) - 64000.0;
    double var2 = var1 * var1 * m_p6 / 32768.0;
    var2 = var2 + var1 * m_p5 * 2.0;
    var2 = (var2 / 4.0) + (m_p4 * 65536.0);
    var1 = (m_p3 * var1 * var1 / 524288.0 + m_p2 * var1) / 524288.0;
    var1 = (1.0 + var1 / 32768.0) * m_p1;
    if (var1 == 0.0)
      return 0;

    double p = 1048576.0 - adc;
    p = (p - (var2 / 4096.0)) * 6250.0 / var1;
    var1 = m_p9 * p * p / 2147483648.0;
    var2 = p * m_p8 / 32768.0;

    return p + (var1 + var2 + m_p7) / 16.0;
  }

  //! Converts and compensates raw relative humidity readings.
  //!
  //! @param[in] adc_H Raw measurement.
  //! @param[in] fine_temperature Fine temperature value.
  //!
  //! @return humidity in %rH.
  double
  compensateHumidity(double adc_H, double fine_temperature)
  {
    double var_H = fine_temperature - 76800.0;
    var_H = (adc_H - (m_h4 * 64.0 + m_h5 / 16384.0 * var_H))
    * (m_h2 / 65536.0 * (1.0 + m_h6 / 67108864.0 * var_H
                         * (1.0 + m_h3 / 67108864.0 * var_H)));
    var_H = var_H * (1.0 - m_h1 * var_H / 524288.0);

    if (var_H > 100.0)
      return 100.0;

    if (var_H < 0.0)
      return 0;

    return var_H;
  }

private:
  double m_t1;
  double m_t2;
  double m_t3;
  double m_p1;
  double m_p2;
  double m_p3;
  double m_p4;
  double m_p5;
  double m_p6;
  double m_p7;
  double m_p8;
  double m_p9;
  double m_h1;
  double m_h2;
  double m_h3;
  double m_h4;
  double m_h5;
  double m_h6;

  //! Read signed 16-bit number.
  //!
  //! @param[in] msb most significant byte.
  //! @param[in] lsb least significant byte.
  //!
  //! @return converted value.
  template <typename T> static inline double
  readSigned16(uint8_t msb, uint8_t lsb)
  {
    union
    {
      uint8_t bytes[2];
      T value;
    } u;

#if defined(DUNE_CPU_LITTLE_ENDIAN)
    u.bytes[0] = lsb;
    u.bytes[1] = msb;
#else
    u.bytes[0] = msb;
    u.bytes[1] = lsb;
#endif

    return (double)u.value;
  }
};

#endif
