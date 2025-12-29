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

#ifndef SENSORS_LIS2MDL_REGISTER_ADDRESS_MAP_HPP_INCLUDED_
#define SENSORS_LIS2MDL_REGISTER_ADDRESS_MAP_HPP_INCLUDED_

#include <stdint.h>

namespace Sensors
{
  namespace LIS2MDL
  {
    enum REGISTER_MAP : uint8_t
    {
      OFFSET_X_REG_L = 0x45,
      OFFSET_X_REG_H = 0x46,
      OFFSET_Y_REG_L = 0x47,
      OFFSET_Y_REG_H = 0x48,
      OFFSET_Z_REG_L = 0x49,
      OFFSET_Z_REG_H = 0x4A,
      WHO_AM_I       = 0x4F,
      CFG_REG_A      = 0x60,
      CFG_REG_B      = 0x61,
      CFG_REG_C      = 0x62,
      INT_CRTL_REG   = 0x63,
      INT_SOURCE_REG = 0x64,
      INT_THS_L_REG  = 0x65,
      INT_THS_H_REG  = 0x66,
      STATUS_REG     = 0x67,
      OUTX_L_REG     = 0x68,
      OUTX_H_REG     = 0x69,
      OUTY_L_REG     = 0x6A,
      OUTY_H_REG     = 0x6B,
      OUTZ_L_REG     = 0x6C,
      OUTZ_H_REG     = 0x6D,
      TEMP_OUT_L_REG = 0x6E,
      TEMP_OUT_H_REG = 0x6F
    };
  }
}

#endif
