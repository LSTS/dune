//***************************************************************************
// Copyright 2007-2021 Universidade do Porto - Faculdade de Engenharia      *
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
// Author: Nikolai Lauvås                                                   *
//***************************************************************************

// DUNE headers.
#include <DUNE/DUNE.hpp>
#include <DUNE/Hardware/GPIO.hpp>

namespace Supervisors
{
  //! This task is used with the watchdog feature of the StratoPi CAN expansion board for the Raspberry Pi.
  //!
  //! The task activates the watchdog when it's activated. 
  //! The task is periodic, and toggles the heartbeat pin once for every time it executes. 
  //! @author Nikolai Lauvås
  namespace StratoPIWatchdog
  {
    using DUNE_NAMESPACES;

    struct Arguments
    {
      //! Toggle
      float toggled_time;
    };

    struct Task: public DUNE::Tasks::Periodic
    {
      Hardware::GPIO* m_gpio_activation_pin;
      Hardware::GPIO* m_gpio_heartbeat_pin;
      Hardware::GPIO* m_gpio_watchdog_timeout_pin;
      Hardware::GPIO* m_gpio_watchdog_timeout_answer_pin;
      Arguments m_args;
      //! Constructor.
      //! @param[in] name task name.
      //! @param[in] ctx context.
      Task(const std::string& name, Tasks::Context& ctx):
        DUNE::Tasks::Periodic(name, ctx),
        m_gpio_activation_pin(NULL),
        m_gpio_heartbeat_pin(NULL),
        m_gpio_watchdog_timeout_pin(NULL),
        m_gpio_watchdog_timeout_answer_pin(NULL)
      {

        param("TimeToggled", m_args.toggled_time)
        .units(Units::Second)
        .description("How long GPIO5 stays toggled")
        .defaultValue("1.00");
        
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
        m_gpio_heartbeat_pin = new Hardware::GPIO(5);
        m_gpio_activation_pin = new Hardware::GPIO(6);
        m_gpio_watchdog_timeout_pin = new Hardware::GPIO(12);
        m_gpio_watchdog_timeout_answer_pin = new Hardware::GPIO(16);
        setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_ACTIVE);
      }

      //! Initialize resources.
      void
      onResourceInitialization(void)
      {
        m_gpio_heartbeat_pin->setDirection(Hardware::GPIO::GPIO_DIR_OUTPUT);
        m_gpio_activation_pin->setDirection(Hardware::GPIO::GPIO_DIR_OUTPUT);
        m_gpio_watchdog_timeout_pin->setDirection(Hardware::GPIO::GPIO_DIR_INPUT);
        m_gpio_watchdog_timeout_answer_pin->setDirection(Hardware::GPIO::GPIO_DIR_OUTPUT);

        m_gpio_heartbeat_pin->setValue(0);
        m_gpio_activation_pin->setValue(1);
        m_gpio_watchdog_timeout_answer_pin->setValue(0);
      }

      //! Release resources.
      void
      onResourceRelease(void)
      {
        Memory::clear(m_gpio_heartbeat_pin);
        Memory::clear(m_gpio_activation_pin);
        Memory::clear(m_gpio_watchdog_timeout_pin);
        Memory::clear(m_gpio_watchdog_timeout_answer_pin);
      }

      //! Main loop.
      void
      task(void)
      {
        if(m_gpio_watchdog_timeout_pin->getValue()) {
          err(DTR("StratoPIWatchdog timeout"));
          setEntityState(IMC::EntityState::ESTA_FAILURE, "StratoPIWatchdog timeout");
        }

        debug(DTR("Toggled heartbeat gpio"));
        m_gpio_heartbeat_pin->setValue(1);
        Delay::wait(m_args.toggled_time);
        m_gpio_heartbeat_pin->setValue(0);
      }
    };
  }
}

DUNE_TASK
