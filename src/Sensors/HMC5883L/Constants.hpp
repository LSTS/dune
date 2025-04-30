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

#include <cstdint>
#include <string>
#include <unordered_map>

namespace Sensors
{
  namespace HMC5883L
  {
    static constexpr uint8_t c_register_config_a                   = 0x00;
    static constexpr uint8_t c_register_config_b                   = 0x01;
    static constexpr uint8_t c_register_mode                       = 0x02;
    static constexpr uint8_t c_register_data                       = 0x03;
    static constexpr uint8_t c_register_Xaxis                      = 0x03;
    static constexpr uint8_t c_register_Yaxis                      = 0x05;
    static constexpr uint8_t c_register_Zaxis                      = 0x07;
    static constexpr uint8_t c_register_status                     = 0x09;
    static constexpr uint8_t c_register_identification_a           = 0x0A;
    static constexpr uint8_t c_register_identification_b           = 0x0B;
    static constexpr uint8_t c_register_identification_c           = 0x0C;
    
    static constexpr uint8_t c_register_identification_a_value     = 0x48;
    static constexpr uint8_t c_register_identification_b_value     = 0x34;
    static constexpr uint8_t c_register_identification_c_value     = 0x33;

    static const std::unordered_map<uint8_t, uint8_t> c_samples    = {{1, 0x0},
                                                                      {2, 0x1},
                                                                      {4, 0x2},
                                                                      {8, 0x3}};

    static const std::unordered_map<float, uint8_t> c_rate         = {{0.75f, 0x0},
                                                                      {1.50f, 0x1},
                                                                      {3.00f, 0x2},
                                                                      {7.50f, 0x3},
                                                                      {15.0f, 0x4},
                                                                      {30.0f, 0x5},
                                                                      {75.0f, 0x6}};

    static const std::unordered_map<std::string, uint8_t> c_config = {{"Normal", 0x0},
                                                                      {"Positive Bias", 0x1},
                                                                      {"Negative Bias", 0x2}};

    static const std::unordered_map<float, uint8_t> c_gain         = {{0.88f, 0x0},
                                                                      {1.30f, 0x1},
                                                                      {1.90f, 0x2},
                                                                      {2.50f, 0x3},
                                                                      {4.00f, 0x4},
                                                                      {4.70f, 0x5},
                                                                      {5.60f, 0x6},
                                                                      {8.10f, 0x7}};

    static const std::unordered_map<std::string, uint8_t> c_mode   = {{"Continuous", 0x0},
                                                                      {"Single", 0x1},
                                                                      {"Idle", 0x2}};

    static const std::unordered_map<float, float> c_scale          = {{0.88f, 0.73f},
                                                                      {1.30f, 0.92f},
                                                                      {1.90f, 1.22f},
                                                                      {2.50f, 2.27f},
                                                                      {4.00f, 1.92f},
                                                                      {4.70f, 2.27f},
                                                                      {5.60f, 2.56f},
                                                                      {8.10f, 3.03f}};
  }
}
