//***************************************************************************
// Copyright (C) 2007-2013 Laboratório de Sistemas e Tecnologia Subaquática *
// Departamento de Engenharia Electrotécnica e de Computadores              *
// Rua Dr. Roberto Frias, 4200-465 Porto, Portugal                          *
//***************************************************************************
// Author: Ricardo Martins                                                  *
//***************************************************************************

// ISO C++ 98 headers.
#include <cstddef>

// DUNE headers.
#include <DUNE/DUNE.hpp>

namespace UserInterfaces
{
  namespace Buttons
  {
    using DUNE_NAMESPACES;

    struct Arguments
    {
      // Event device.
      std::string event_dev;
      // Button numbers.
      std::vector<unsigned> button_numbers;
    };

    struct Task: public Tasks::Task
    {
      // Buttons.
      Hardware::Buttons* m_buttons;
      // Button event.
      IMC::ButtonEvent m_button_event;
      // Task Arguments.
      Arguments m_args;

      Task(const std::string& name, Tasks::Context& ctx):
        Tasks::Task(name, ctx),
        m_buttons(NULL)
      {
        param("Event Device", m_args.event_dev)
        .defaultValue("")
        .description("Event device");

        param("Button Numbers", m_args.button_numbers)
        .defaultValue("")
        .description("List of button numbers");
      }

      ~Task(void)
      {
        Task::onResourceRelease();
      }

      void
      onResourceAcquisition(void)
      {
        m_buttons = new Hardware::Buttons(m_args.event_dev);
      }

      void
      onResourceRelease(void)
      {
        Memory::clear(m_buttons);
      }

      void
      onMain(void)
      {
        while (!stopping())
        {
          m_buttons->poll(1.0);

          for (unsigned i = 0; i < m_args.button_numbers.size(); ++i)
          {
            if (m_buttons->changed(m_args.button_numbers[i]))
            {
              m_button_event.button = m_args.button_numbers[i];
              m_button_event.value = m_buttons->value(m_args.button_numbers[i]);
              dispatch(m_button_event);
            }
          }
        }
      }
    };
  }
}

DUNE_TASK
