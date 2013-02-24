//***************************************************************************
// Copyright 2007-2013 Universidade do Porto - Faculdade de Engenharia      *
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
// https://www.lsts.pt/dune/licence.                                        *
//***************************************************************************
// Author: Ricardo Martins                                                  *
//***************************************************************************

// DUNE headers.
#include <DUNE/DUNE.hpp>

namespace Actuators
{
  namespace PMM
  {
    using DUNE_NAMESPACES;

    struct Arguments
    {
      // I/O Base Address
      uint32_t address;
    };

    struct Task: public Tasks::Task
    {
      // Relay channels data.
      uint8_t m_data[2];
      // Direct hardware I/O.
      IOPort* m_io;
      // Task arguments.
      Arguments m_args;

      Task(const std::string& name, Tasks::Context& ctx):
        Tasks::Task(name, ctx),
        m_io(NULL)
      {
        param("I/O Base Address", m_args.address)
        .defaultValue("")
        .description("Input/Output Base Address");

        // Register message handlers.
        bind<IMC::PowerChannelControl>(this);
      }

      void
      onUpdateParameters(void)
      {
        // Open hardware port, requesting 2 addresses,
        m_io = new IOPort(m_args.address, 2);

        // Reset device.
        reset();
      }

      ~Task(void)
      {
        Task::onResourceRelease();
      }

      void
      onResourceRelease(void)
      {
        if (m_io != NULL)
        {
          reset();
          delete m_io;
          m_io = NULL;
        }
      }

      void
      reset(void)
      {
        m_io->write(0, 0);
        m_data[0] = 0x00;
        m_io->write(0, 1);
        m_data[1] = 0x00;
      }

      void
      consume(const IMC::PowerChannelControl* msg)
      {
        uint8_t channel = msg->id / 8;
        uint8_t relay = msg->id % 8;

        switch (msg->op)
        {
          case IMC::PowerChannelControl::PCC_OP_TOGGLE:
            m_data[channel] ^= (1 << relay);
            break;
          case IMC::PowerChannelControl::PCC_OP_TURN_ON:
            m_data[channel] |= (1 << relay);
            break;
          case IMC::PowerChannelControl::PCC_OP_TURN_OFF:
            m_data[channel] &= ~(1 << relay);
            break;
        }

        inf(DTR("toggling relay %u channel %u"), relay, channel);
        m_io->write(m_data[channel], channel);
      }

      void
      onMain(void)
      {
        while (!stopping())
          waitForMessages(1.0);
      }
    };
  }
}

DUNE_TASK
