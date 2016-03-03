//***************************************************************************
// Copyright 2007-2015 Universidade do Porto - Faculdade de Engenharia      *
// Laboratório de Sistemas e Tecnologia Subaquática (LSTS)                  *
//***************************************************************************
// This file is part of DUNE: Unified Navigation Environment.               *
//                                                                          *
// Commercial Licence Usage                                                 *
// Licencees holding valid commercial DUNE licences may use this file in    *
// accordance with the commercial licence agreement provided with the       *
// Software or, alternatively, in accordance with the terms contained in a  *
// written agreement between you and Universidade do Porto. For licensing   *
// terms, conditions, and further information contact lsts@fe.up.pt.        *
//                                                                          *
// European Union Public Licence - EUPL v.1.1 Usage                         *
// Alternatively, this file may be used under the terms of the EUPL,        *
// Version 1.1 only (the "Licence"), appearing in the file LICENCE.md       *
// included in the packaging of this file. You may not use this work        *
// except in compliance with the Licence. Unless required by applicable     *
// law or agreed to in writing, software distributed under the Licence is   *
// distributed on an "AS IS" basis, WITHOUT WARRANTIES OR CONDITIONS OF     *
// ANY KIND, either express or implied. See the Licence for the specific    *
// language governing permissions and limitations at                        *
// http://ec.europa.eu/idabc/eupl.html.                                     *
//***************************************************************************
// Author: Pedro Gonçalves                                                  *
//***************************************************************************

// ISO C++ 98 headers.
#include <iostream>
#include <pthread.h>

// DUNE headers.
#include <DUNE/DUNE.hpp>

//Local headers
#include "ServoPWM.hpp"

namespace Actuators
{
  namespace PWMBBB
  {
    using DUNE_NAMESPACES;
    struct Task: public DUNE::Tasks::Task
    {
      //!Variables
      struct Arguments
      {
        // - PinOut
        std::vector<int> portio;
      };

      Arguments m_args;
      //Servo 1
      ServoPwm* m_servo1;
      //GPIO for signal of servo
      int GPIOPin;
      //state of update msg servo position
      bool updateMsg;
      //Value of servo position in deg
      double valuePos;
 
      //! Constructor.
      //! @param[in] name task name.
      //! @param[in] ctx context.
      Task(const std::string& name, Tasks::Context& ctx):
      DUNE::Tasks::Task(name, ctx),
      m_servo1(NULL)
      {
        param("PinOut", m_args.portio)
          .defaultValue("60")
          .description("Port to use in PWMBBB");

        bind<IMC::SetServoPosition>(this);
      }
      
      //! Update internal state with new parameter values.
      void
      onUpdateParameters(void)
      {
      }
      
      //! Reserve entity identifiers.
      void
      onEntityReservation(void)
      {
      }
      
      //! Resolve entity names.
      void
      onEntityResolution(void)
      {
        
      }
      
      //! Acquire resources.
      void
      onResourceAcquisition(void)
      {
      }
      
      //! Initialize resources.
      void
      onResourceInitialization(void)
      {
        GPIOPin = m_args.portio[0];
        m_servo1 = new ServoPwm(this, GPIOPin, 40);
        m_servo1->start();
      }
      
      //! Release resources.
      void
      onResourceRelease(void)
      {
        if (m_servo1 != NULL)
        {
          m_servo1->stopAndJoin();
          delete m_servo1;
          m_servo1 = NULL;
        }
      }
      
      void
      consume(const IMC::SetServoPosition* msg)
      {
        valuePos = msg->value;
        m_servo1->SetPwmValue(valuePos);
        updateMsg = true;
      }

      //! Main loop.
      void
      onMain(void)
      {
        IMC::ServoPosition msgServoPos;
        
        while(!m_servo1->CheckGPIOSate() && !stopping())
        {
          setEntityState(IMC::EntityState::ESTA_ERROR, Utils::String::str(DTR("GPIO_SET")));
          sleep(1);
        }

        while (!stopping())
        {
          if(updateMsg)
          {
            msgServoPos.value = valuePos;
            dispatch(msgServoPos);
            updateMsg = false;
          }

          if(m_servo1->CheckGPIOSate())
            setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_ACTIVE);
          else
            setEntityState(IMC::EntityState::ESTA_ERROR, Utils::String::str(DTR("GPIO_SET")));

          waitForMessages(1.0);

        }
        
      }
    };
  }
}
DUNE_TASK
