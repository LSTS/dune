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

#ifndef SENSORS_AD5272_DRIVER_HPP_INCLUDED_
#define SENSORS_AD5272_DRIVER_HPP_INCLUDED_

// DUNE headers.
#include <DUNE/DUNE.hpp>

// Local headers.
#include "CommsDMSv2.hpp"

namespace Sensors
{
  //! Class to control the AD5272 peripheral.
  //!
  //! This class allows to send commands related to the AD5272.
  //! @author Miguel Lançós
  namespace DMSv2
  {
    using DUNE_NAMESPACES;

    class DriverAD5272: private CommsDMSv2
    {
      public:
      DriverAD5272(DUNE::Tasks::Task* task, DUNE::Hardware::SerialPort* uart):
      CommsDMSv2(task,uart)
      {
        m_task->trace("Initializing DriverAD5272.");
      }

      bool
      doReset(void);

      bool
      setShutdownMode(bool enable);

      private:
      typedef enum
      {
        CMD_AD5272_RESET = 0x02,
        CMD_AD5272_SHUTDOWN = 0x03,
        CMD_AD5272_READCTRL = 0x04,
        CMD_AD5272_WRITECTRL = 0x05,
        CMD_AD5272_READRDAC = 0x06,
        CMD_AD5272_WRITERDAC = 0x07,
        CMD_AD5272_READMEMADDR = 0x08,
        CMD_AD5272_READMEM = 0x09,
        CMD_AD5272_WRITEMEM = 0x0A,
        CMD_AD5272_CTRLSETTING = 0x0B
      } DriverAD5272_cmd;
    };
  }
}
#endif /*SENSORS_AD5272_DRIVER_HPP_INCLUDED_*/