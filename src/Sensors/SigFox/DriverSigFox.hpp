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

// DUNE headers.
#include <DUNE/DUNE.hpp>

#ifndef SENSORS_DRIVER_SIGFOX_HPP_INCLUDED_
#define SENSORS_DRIVER_SIGFOX_HPP_INCLUDED_

namespace Sensors
{
  namespace SigFox
  {
    using DUNE_NAMESPACES;

    //! Timeout to wait for the response.
    static const unsigned int c_response_timeout = 1.0f;
    //! Max receive buffer size.
    static const unsigned int c_buffer_size = 20;

    class DriverSigFox
    {
      public:
      DriverSigFox(DUNE::Tasks::Task* task, DUNE::Hardware::SerialPort* uart):
      m_task(task),
      m_uart(uart)
      {
        m_task->trace("Initializing DriverSigFox");
      }

      bool
      receive(uint8_t* buffer, int& length);

      private:
      //! Parent task.
      DUNE::Tasks::Task* m_task;
      //! Serial port handle.
      SerialPort* m_uart;
    };
  }
}

#endif /*SENSORS_DRIVER_SIGFOX_HPP_INCLUDED_*/
