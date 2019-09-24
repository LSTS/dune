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

// Local headers
#include "DriverAD5272.hpp"

namespace Sensors
{
  namespace DMSv2
  {
    using DUNE_NAMESPACES;

    /**
     * @brief This function allows to reset the AD5272 RDAC register to the Memory set 
     * value and the CTRL register to zero.
     * 
     * @return True if the response and communication is as expected.
     */
    bool
    DriverAD5272::doReset(void)
    {
      m_task->trace("DriverAD5272::doReset executing.");

      uint8_t recv_data;
      bool frame_error;

      if(request(CMD_AD5272_RESET, NULL, 0, &recv_data, 1, frame_error))
      {
        if(frame_error)
        {
          m_task->spew("[DriverAD5272::doReset] Received an error frame type.");
          return false;
        }

        if(recv_data == 1)
          return true;
      }

      m_task->spew("[DriverAD5272::doReset] Communication error.");
      return false;
    }

    /**
     * @brief This function allows to enable or disable the shutdown mode of the AD5272.
     * 
     * @param enable True to enable the Shutdown mode.
     * @return True if communication and response is as expected.
     */
    bool
    DriverAD5272::setShutdownMode(bool enable)
    {
      m_task->trace("DriverAD5272::setShutdownMode executing.");

      uint8_t recv_data;
      bool frame_error;

      if(request(CMD_AD5272_SHUTDOWN, (uint8_t*)&enable, 1, &recv_data, 1, frame_error))
      {
        if(frame_error)
        {
          m_task->spew("[DriverAD5272::setShutdownMode] Received an error frame type.");
          return false;
        }

        if(recv_data == 1)
          return true;
      }

      m_task->spew("[DriverAD5272::setShutdownMode] Communication error.");
      return false;
    }
  }
}