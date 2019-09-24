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

#include "DriverDMSv2.hpp"

namespace Sensors
{
  namespace DMSv2
  {
    using DUNE_NAMESPACES;

    /**
     * @brief This function allows to receive the current firmware version present
     * in the DMS microcontroller.
     * 
     * @param firmware_version 
     * @return  True if the communication and data are as expected. 
     */
    bool
    DriverDMSv2::getFirmwareVersion(float& firmware_version)
    {
      m_task->trace("DriverDMSv2::getFirmwareVersion executing.");

      uint8_t recv_data[2];
      bool frame_error;

      if(request(CMD_FIRMWARE_VERSION, NULL, 0, recv_data, 2, frame_error))
      {
        if(frame_error)
        {
          m_task->spew("[DriverDMSv2::getFirmwareVersion] Received an error frame type.");
          return false;
        }

        firmware_version = recv_data[0] + (recv_data[1]*0.01f);
        return true;
      }

      m_task->spew("[DriverDMSv2::getFirmwareVersion] Communication error.");
      return false;
    }
  }
}