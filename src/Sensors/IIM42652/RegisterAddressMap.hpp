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

#ifndef SENSORS_IIM42652_REGISTER_ADDRESS_MAP_HPP_INCLUDED_
#define SENSORS_IIM42652_REGISTER_ADDRESS_MAP_HPP_INCLUDED_

#include <stdint.h>

namespace Sensors
{
  namespace IIM42652
  {
    enum REGISTER_MAP_0 : uint8_t
    {
      DEVICE_CONFIG       = 0x11,
      DRIVE_CONFIG        = 0x13,
      TEMP_DATA1          = 0x1d,
      TEMP_DATA0          = 0x1e,
      ACCEL_DATA_X1       = 0x1f,
      ACCEL_DATA_X0       = 0x20,
      ACCEL_DATA_Y1       = 0x21,
      ACCEL_DATA_Y0       = 0x22,
      ACCEL_DATA_Z1       = 0x23,
      ACCEL_DATA_Z0       = 0x24,
      GYRO_DATA_X1        = 0x25,
      GYRO_DATA_X0        = 0x26,
      GYRO_DATA_Y1        = 0x27,
      GYRO_DATA_Y0        = 0x28,
      GYRO_DATA_Z1        = 0x29,
      GYRO_DATA_Z0        = 0x2a,
      PWR_MGMT_0          = 0x4e,
      GYRO_CONFIG_0       = 0x4f,
      ACCEL_CONFIG_0      = 0x50,
      GYRO_CONFIG_1       = 0x51,
      GYRO_ACCEL_CONFIG_0 = 0x52,
      ACCEL_CONFIG_1      = 0x53,
      TMST_CONFIG         = 0x54,
      WHO_AM_I            = 0x75,
      BANK_SEL            = 0x76
    };
  }
}

#endif
