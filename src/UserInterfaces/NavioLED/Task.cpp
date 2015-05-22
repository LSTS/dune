//***************************************************************************
// Copyright 2013-2015 Norwegian University of Science and Technology (NTNU)*
// Centre for Autonomous Marine Operations and Systems (AMOS)               *
// Department of Engineering Cybernetics (ITK)                              *
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
// Author: João Fortuna                                                     *
//***************************************************************************

// ISO C++ 98 headers.
#include <stdexcept>

// DUNE headers.
#include <DUNE/DUNE.hpp>

// Vendor headers.
#include <navio/gpio.h>
#include <navio/PCA9685.h>


namespace UserInterfaces
{
  //! Device driver for the Navio+ RGB LED
  namespace NavioLED
  {
    using DUNE_NAMESPACES;

    //! %Task arguments.
    struct Arguments
    {
      int smoothness;
      float max_bright;
    };

    struct Task: public DUNE::Tasks::Task
    {
      //! Task arguments.
      Arguments m_args;
      //! LED pin
      Navio::Pin* m_pin;
      PCA9685 m_pwm;
      float m_R, m_G, m_B;
      int m_speed;

      Task(const std::string& name, Tasks::Context& ctx):
        DUNE::Tasks::Task(name, ctx),
        m_pin(NULL),
        m_R(0),
        m_G(0),
        m_B(0),
        m_speed(10)
      {
        param("Smoothness", m_args.smoothness)
              .defaultValue("50")
              .minimumValue("1")
              .maximumValue("100")
              .units(Units::Percentage)
              .description("LED intensity jumps");

        param("Brightness", m_args.max_bright)
              .defaultValue("50")
              .minimumValue("10")
              .maximumValue("100")
              .units(Units::Percentage)
              .description("LED maximum intensity percentage");

        // Register listeners.
        bind<IMC::VehicleState>(this);
      }

      //! Acquire resources.
      void
      onResourceAcquisition(void)
      {
        m_pin = new Navio::Pin(RPI_GPIO_27);
      }

      //! Initialize resources.
      void
      onResourceInitialization(void)
      {

        if (m_pin->init()) {
          m_pin->setMode(Navio::Pin::GpioModeOutput);
          m_pin->write(0); /* drive Output Enable low */
        } else {
          err("Output Enable not set. No GPIO permission.");
        }
        m_pwm.initialize();

        setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_ACTIVE);
      }

      //! Set LED color and pulsing speed according to vehicle state
      void
      consume(const IMC::VehicleState* msg)
      {
        switch (msg->op_mode)
        {
          case IMC::VehicleState::VS_CALIBRATION:
            m_R = 0;
            m_G = 0;
            m_B = 1;
            m_speed = 25;
            debug("Blue");
            break;
          case IMC::VehicleState::VS_SERVICE:
            m_R = 0;
            m_G = 1;
            m_B = 0;
            m_speed = 25;
            debug("Green");
            break;
          case IMC::VehicleState::VS_ERROR:
            m_R = 1;
            m_G = 0;
            m_B = 0;
            m_speed = 25;
            debug("Red");
            break;
          case IMC::VehicleState::VS_MANEUVER:
            m_R = 0.5;
            m_G = 0.5;
            m_B = 0;
            m_speed = 25;
            debug("Yellow");
            break;
          case IMC::VehicleState::VS_BOOT:
            m_R = 0.5;
            m_G = 0;
            m_B = 0.5;
            m_speed = 50;
            debug("Purple");
            break;
          default:
            m_R = 0.33;
            m_G = 0.33;
            m_B = 0.33;
            m_speed = 25;
            debug("White");
        }
      }

      //! Get PWM corresponding to desired brightness
      //! @param[in] maxBright maximum fraction of LED brightness to use
      //! @param[in] currBright fraction of maxBright to use now
      //! @return PWM value
      uint16_t
      getPWM(float maxBright, float currBright)
      {
        return (uint16_t) trimValue(4095*(1 - maxBright*currBright), 0, 4095);
      }

      void
      onMain(void)
      {
        int counter = 0;
        uint16_t r,b,g;

        while (!stopping())
        {
          counter++;
          float bright = 0.5 *(1 + std::cos(0.5*counter*(101 - m_args.smoothness)*0.01));

          r = getPWM(m_args.max_bright*0.01, bright*m_R);
          g = getPWM(m_args.max_bright*0.01, bright*m_G);
          b = getPWM(m_args.max_bright*0.01, bright*m_B);

          m_pwm.setPWM(2, r);
          m_pwm.setPWM(1, g);
          m_pwm.setPWM(0, b);

          waitForMessages((double)1.0/m_speed);
        }

        // Turn off LED
        r = getPWM(m_args.max_bright*0.01, 0);
        g = getPWM(m_args.max_bright*0.01, 0);
        b = getPWM(m_args.max_bright*0.01, 0);

        m_pwm.setPWM(2, r);
        m_pwm.setPWM(1, g);
        m_pwm.setPWM(0, b);
      }
    };
  }
}
DUNE_TASK
