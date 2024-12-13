//***************************************************************************
// Copyright 2007-2024 Universidade do Porto - Faculdade de Engenharia      *
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

#ifndef ACTUATORS_BROOMV2_UTILS_HPP_INCLUDED_
#define ACTUATORS_BROOMV2_UTILS_HPP_INCLUDED_

// DUNE headers.
#include <DUNE/DUNE.hpp>

namespace Actuators
{
  namespace Broomv2
  {
    using DUNE_NAMESPACES;

    //! Read buffer size.
    constexpr size_t c_read_buffer_size = 1024;
    //! Line initial character.
    constexpr char c_line_init = '$';
    //! Line termination character.
    constexpr char c_line_term = '\n';
    //! Line data termination character.
    constexpr char c_data_term = '*';

    //! Command code for acknowledge.
    constexpr char c_code_ack = 'A';
    //! Command code for actuation.
    constexpr char c_code_actuation = 'a';
    //! Command code for connect.
    constexpr char c_code_connect = 'C';
    //! Command code for disconnect.
    constexpr char c_code_disconnect = 'D';
    //! Command code for no acknowledge.
    constexpr char c_code_nack = 'N';

    //! Command identifier for actuation start.
    constexpr char c_code_actuation_start = 'H';
    //! Command identifier for actuation stop.
    constexpr char c_code_actuation_stop = 'L';
    //! Command identifier for servo.
    constexpr char c_id_servo = 's';
    //! Command identifier for thruster.
    constexpr char c_id_thruster = 't';

    enum CMD_STATE
    {
      CMD_WAITING = 0,
      CMD_NACK,
      CMD_ACK,
      CMD_IDLE,
      CMD_ERROR
    };

    uint8_t
    calcCRC8(const std::string data)
    {
      uint8_t csum = 0x00;
      size_t total = data.size();
      for (unsigned i = 0; i < total - 1; i++)
      {
        char c = data[i];
        if (c == c_data_term)
          break;
        csum ^= c;
      }
      return (csum | 0x80);
    }
  }
}

#endif /* ACTUATORS_BROOMV2_UTILS_HPP_INCLUDED_ */
