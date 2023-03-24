//***************************************************************************
// Copyright 2007-2023 Universidade do Porto - Faculdade de Engenharia      *
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
// Author: João Bogas                                                       *
//***************************************************************************

// C++ headers
#include <unordered_map>

// DUNE headers.
#include <DUNE/DUNE.hpp>

// local headers
#include "PWMsignal.hpp"


// TODO: change read param Servo 0-.. Pin


namespace Actuators
{
  //! Insert short task description here.
  //!
  //! Insert explanation on task behaviour here.
  //! @author João Bogas
  namespace PWMv2
  {
    using DUNE_NAMESPACES;

    struct Task: public DUNE::Tasks::Task
    {
      static const unsigned int c_max_port = 26;

      struct Arguments
      {
        //! IO ports information
        std::string port_inf[c_max_port];
      };

      struct IO
      {
        int m_port;
        PWMsignal* m_signal;

        IO(): m_port(-1), m_signal(nullptr)
        {};

        ~IO()
        {
          delete m_signal;
        }
      };

      enum ID
      {
        ID_SERVO  = 0,
        ID_PWM    = 1,
        ID_GPIO   = 2
      };

      std::unordered_map<std::string,IO> m_data;
      //! Task arguments
      Arguments m_args;
      //! PWM signals
      std::vector<PWMsignal*> m_pwm;
      //! id port
      int id_port;

      //! Constructor.
      //! @param[in] name task name.
      //! @param[in] ctx context.
      Task(const std::string& name, Tasks::Context& ctx):
        DUNE::Tasks::Task(name, ctx)
      {
        for (unsigned int i = 0; i < 6; ++i)
        {
          std::string option = String::str("PinOut %u", i);
          param(option, m_args.port_inf[i])
          .defaultValue("")
          .description("Port");

        }
        
        bind<IMC::SetServoPosition>(this);
        //bind<IMC::GpioStateSet>(this);
        bind<IMC::SetPWM>(this);

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
        for (size_t pin = 0; pin < c_max_port; pin++)        
        {
          /*
          size_t pos = m_args.port_inf[pin].find("Servo");
          if ( pos != std::string::npos)
          {
            std::string id = m_args.port_inf[pin].substr(pos+6, std::string::npos);

            std::vector<IO>& vec = m_data[ID_SERVO];
            vec.emplace_back(this, pin, std::stoi(id));
          }
          */

          if (m_args.port_inf[pin] != "")
          {
            inf(m_args.port_inf[pin].c_str());
            auto& dat = m_data[m_args.port_inf[pin]];

            dat.m_port = pin;
            dat.m_signal = new PWMsignal(this, 18);
            dat.m_signal->start();
          }
        }
        
        for (auto &&id : m_data)
        {
          auto& vec = id.second;
          inf("Key: %s", id.first.c_str());
          inf("Port is %d", vec.m_port);
        }
      }

      //! Release resources.
      void
      onResourceRelease(void)
      {
        for (size_t pin = 0; pin < c_max_port; pin++)        
        {

          if (m_args.port_inf[pin] != "")
          {
            inf("Release");
            auto& dat = m_data[m_args.port_inf[pin]];
            if (dat.m_signal != nullptr)
            {
              dat.m_signal->stopAndJoin();
              delete dat.m_signal;
              dat.m_signal = nullptr;
            }
              
          }
        }
      }

      void
      consume(const IMC::SetServoPosition* msg)
      {
        std::string key = String::str("Servo %u", msg->id);
        IO& dat = m_data[key];
        if (dat.m_port == -1)
        {
          err("Received msg with incorrect Servo ID %u", msg->id);
          return;
        }
        // convert msg->value to dutycycle

      }

      void
      consume(const IMC::SetPWM* msg)
      {
        (void)msg;
      }

      //! Main loop.
      void
      onMain(void)
      {
        std::string key = String::str("Servo 1");
        IO& dat = m_data[key];

        while (!stopping())
        {
          dat.m_signal->setDutyCycle(1); // period = 20 ms
          Delay::wait(2);
          dat.m_signal->setDutyCycle(2);
          Delay::wait(2);
        }
      }
    };
  }
}

DUNE_TASK
