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
      //GPIO for signal of servo
      int GPIOPin;
      //Debug, number of loops of 0º to 180º for test
      int times;
      //Handle of servo pinout
      FILE *myOutputHandle = NULL;
      //Mode in/out of pinout
      char setValue[4];
      char GPIODirection[64];
      //Name of pin to use
      char GPIOString[4];
      //Value to put in pinout
      char GPIOValue[64];
      //state 
      bool isOpen;  
 
      //! Constructor.
      //! @param[in] name task name.
      //! @param[in] ctx context.
      Task(const std::string& name, Tasks::Context& ctx):
      DUNE::Tasks::Task(name, ctx)
      {
        param("PinOut", m_args.portio)
          .defaultValue("60")
          .description("Port to use in PWMBBB");

        bind<IMC::ServoPosition>(this);
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
      }
      
      //! Release resources.
      void
      onResourceRelease(void)
      {
      }
      
      void
      consume(const IMC::ServoPosition* msg)
      {
        setAngleServomotor(DUNE::Math::Angles::degrees(std::abs(msg->value)));
        war("VALUE in deg: %fº", DUNE::Math::Angles::degrees(std::abs(msg->value)));
      }

      //!Inic of config to pinout of servomotor
      void
      inicServo(void)
      {
        GPIOPin=m_args.portio[0]; /* GPIO1_28 or pin 12 on the P9 header */ 
        times=6;
        sprintf(GPIOString, "%d", GPIOPin);
        sprintf(GPIOValue, "/sys/class/gpio/gpio%d/value", GPIOPin);
        sprintf(GPIODirection, "/sys/class/gpio/gpio%d/direction", GPIOPin);
        // Export the pin
        if ((myOutputHandle = fopen("/sys/class/gpio/export", "ab")) == NULL)
          inf("Unable to export GPIO pin");
        strcpy(setValue, GPIOString);
        fwrite(&setValue, sizeof(char), 2, myOutputHandle);
        fclose(myOutputHandle);
        // Set direction of the pin to an output
        if ((myOutputHandle = fopen(GPIODirection, "rb+")) == NULL)
          inf("Unable to open direction handle");
        strcpy(setValue,"out");
        fwrite(&setValue, sizeof(char), 3, myOutputHandle);
        fclose(myOutputHandle);
      }

      //!Set 0º to servomotor
      void
      setAngleServomotor( int angle)
      {
        if(angle < 0)
          angle = 0;
        if(angle > 180)
          angle = 180;
        int valueUP = (10 * angle) + 600;
        if ((myOutputHandle = fopen(GPIOValue, "rb+")) == NULL)
          inf("Unable to open value handle");
        strcpy(setValue, "1"); // Set value high
        fwrite(&setValue, sizeof(char), 1, myOutputHandle);
        fclose(myOutputHandle);
        usleep (valueUP);
        // Set output to low
        if ((myOutputHandle = fopen(GPIOValue, "rb+")) == NULL)
          inf("Unable to open value handle");
        strcpy(setValue, "0"); // Set value low
        fwrite(&setValue, sizeof(char), 1, myOutputHandle);
        fclose(myOutputHandle);;
        usleep (20000 - valueUP);
      }

      //!Close PinOut config
      void
      closeConfigServo(void)
      {
        // Unexport the pin
        if ((myOutputHandle = fopen("/sys/class/gpio/unexport", "ab")) == NULL)
          inf("Unable to unexport GPIO pin");
        strcpy(setValue, GPIOString);
        fwrite(&setValue, sizeof(char), 2, myOutputHandle);
        fclose(myOutputHandle);
      }

      //! Main loop.
      void
      onMain(void)
      {    
        inicServo();    
        while (!stopping())
        {
          waitForMessages(0.1);
        }
        
        closeConfigServo();
      }
    };
  }
}
DUNE_TASK
