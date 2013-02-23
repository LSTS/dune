//***************************************************************************
// Copyright (C) 2007-2013 Laboratório de Sistemas e Tecnologia Subaquática *
// Departamento de Engenharia Electrotécnica e de Computadores              *
// Rua Dr. Roberto Frias, 4200-465 Porto, Portugal                          *
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
