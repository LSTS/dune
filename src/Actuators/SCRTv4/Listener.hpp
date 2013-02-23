//***************************************************************************
// Copyright (C) 2007-2013 Laboratório de Sistemas e Tecnologia Subaquática *
// Departamento de Engenharia Electrotécnica e de Computadores              *
// Rua Dr. Roberto Frias, 4200-465 Porto, Portugal                          *
//***************************************************************************
// Author: Ricardo Martins                                                  *
//***************************************************************************

// ISO C++ 98 headers.
#include <cmath>

// DUNE headers.
#include <DUNE/DUNE.hpp>

namespace Actuators
{
  namespace SCRTv4
  {
    using DUNE_NAMESPACES;

    class Listener: public Concurrency::Thread
    {
    public:
      Listener(SerialPort* uart):
        m_uart(uart)
      {
      }

      ~Listener(void)
      {
      }

      LUCL::Command*
      pop(void)
      {
        return m_queue.pop();
      }

      void
      run(void)
      {
        uint8_t bfr[128];
        LUCL::ProtocolParser parser;
        LUCL::Command cmd;

        while (!isStopping())
        {
          //          std::cerr << "waiting" << std::endl;
          if (m_uart->hasNewData(1.0) != IOMultiplexing::PRES_OK)
            continue;

          int rv = m_uart->read(bfr, sizeof(bfr));
          //          std::cerr << "got " << rv << std::endl;
          for (int i = 0; i < rv; ++i)
          {
            LUCL::CommandType type = parser.parse(cmd, bfr[i]);
            if (type == LUCL::CommandTypeNone)
              continue;

            m_queue.push(new LUCL::Command(cmd));
          }
        }
      }

    private:
      SerialPort* m_uart;
      TSQueue<LUCL::Command*> m_queue;
    };
  }
}
