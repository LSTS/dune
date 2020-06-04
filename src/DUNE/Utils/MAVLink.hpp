//***************************************************************************
// Copyright 2007-2020 Universidade do Porto - Faculdade de Engenharia      *
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
// Author: Keila                                                            *
//***************************************************************************


#ifndef SRC_DUNE_UTILS_MAVLINK_HPP_INCLUDED_
#define SRC_DUNE_UTILS_MAVLINK_HPP_INCLUDED_


// DUNE headers.
#include <DUNE/Math/General.hpp>

// MAVLink headers.
#include <mavlink/ardupilotmega/mavlink.h>

namespace DUNE
{
  namespace Utils
  {
    //! Utils to MAVLink Protocol - Originally from Control/UAV/ArduPilot Task
    namespace MAVLink
    {

    //! Radio Channel structure.
    struct RadioChannel
    {
      //! PWM range
      float pwm_min;
      float pwm_max;
      float pwm_neutral;
      //! Value range
      float val_max;
      float val_min;
      float val_neutral;
      //! Channel reverse
      bool reverse;
    };

    //! List of Submarine Modes.
       enum APM_submarineModes
       {
         SUB_MODE_STABILIZE = 0,                     // Hold level position
         SUB_MODE_ACRO = 1,                          // Manual angular rate, throttle
         SUB_MODE_DEPTH_HOLD = 2,                    // Hold level and depth position
         SUB_MODE_AUTO = 3,                          // AUTO control (Waypoint)
         SUB_MODE_GUIDED = 4,                        // AUTO control (Coordinate/Direction)
         SUB_MODE_CIRCLE = 7,                        // AUTO control (Circling)
         SUB_MODE_POS_HOLD = 16,                     // Hold position
         SUB_MODE_MANUAL   =19                       // Manual
       };

      //!  Pack MAVLink msg to buffer provided in the parameters
      //!  @param[in] cmd - Mavlink command msg to pack
      //!  @param[in] sysid - target system ID
      //!  @param[in/out] buf - @uint8_t buffer to allocate the packet
      //!  @param[in] arg1 - command argument #1
      //!  @param[in] arg2 - command argument #2
      //!  @param[in] arg3 - command argument #3
      //!  @param[in] arg4 - command argument #4
      //!  @param[in] arg5 - command argument #5
      //!  @param[in] arg6 - command argument #6
      //!  @param[in] arg7 - command argument #7
      //!  @return[out]
      static uint16_t
      packCmd2Buffer(uint16_t cmd, uint8_t sysid, uint8_t* buf, float arg1 = 0,
          float arg2 = 0, float arg3 = 0, float arg4 = 0, float arg5 = 0,
          float arg6 = 0, float arg7 = 0)
      {
        mavlink_message_t msg;

        mavlink_msg_command_long_pack(255, 0, &msg, sysid, 0, cmd, 0, arg1,
                                      arg2, arg3, arg4, arg5, arg6, arg7);

        uint16_t n = mavlink_msg_to_send_buffer(buf, &msg);
        return n;
      }


      static uint16_t
      packMsg2Buffer(uint16_t cmd, uint8_t sysid, uint8_t* buf, mavlink_message_t* msg, float arg1 = 0,
          float arg2 = 0, float arg3 = 0, float arg4 = 0, float arg5 = 0,
          float arg6 = 0, float arg7 = 0)
      {

        mavlink_msg_command_long_pack(255, 0, msg, sysid, 0, cmd, 0, arg1,
                                      arg2, arg3, arg4, arg5, arg6, arg7);

        uint16_t n = mavlink_msg_to_send_buffer(buf, msg);
        return n;
      }

      //! Converts value in range min_value:max_value to a value_pwm in range min_pwm:max_pwm
      static int
      map2PWM(int min_pwm, int max_pwm, float min_value, float max_value, float value, bool reverse)
        {
          int value_pwm;

          if (reverse)
            value_pwm = (int) max_pwm - ((max_pwm - min_pwm) * (value - min_value) / (max_value - min_value));
          else
            value_pwm = (int) ((max_pwm - min_pwm) * (value - min_value) / (max_value - min_value)) + min_pwm;

          return Math::trimValue(value_pwm, min_pwm, max_pwm);
        }

      static int
	  mapRC2PWM(RadioChannel* rc, float value)
      {
    	  return map2PWM(rc->pwm_min,rc->pwm_max,rc->val_min,rc->val_max,value,rc->reverse);
      }

    }
  }
}

#endif /* SRC_DUNE_UTILS_MAVLINK_H_ */
