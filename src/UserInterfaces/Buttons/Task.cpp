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
