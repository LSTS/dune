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
  namespace ROSInspector
  {
    using DUNE_NAMESPACES;

    //! %Task arguments.
    struct Arguments
    {
      //! Serial port device.
      std::string uart_dev;
      //! Serial port baud rate.
      unsigned uart_baud;
    };

    struct Task: public Tasks::Task
    {
      //! Serial port.
      SerialPort* m_uart;
      //! Last message.
      IMC::CameraZoom m_last_msg;
      //! Last stop.
      fp64_t m_last_stop;
      //! Task arguments.
      Arguments m_args;

      Task(const std::string& name, Tasks::Context& ctx):
        Tasks::Task(name, ctx),
        m_uart(NULL),
        m_last_stop(0.0)
      {
        param("Serial Port - Device", m_args.uart_dev)
        .defaultValue("")
        .description("Serial port used to connect to Bowtech ROSInspector video camera");

        param("Serial Port - Baud Rate", m_args.uart_baud)
        .defaultValue("9600")
        .description("Serial port baud rate");

        m_last_msg.action = IMC::CameraZoom::ACTION_ZOOM_STOP;

        bind<IMC::CameraZoom>(this);
      }

      void
      onResourceAcquisition(void)
      {
        m_uart = new SerialPort(m_args.uart_dev, m_args.uart_baud);
      }

      void
      consume(const IMC::CameraZoom* msg)
      {
        char cmd = 0;

        if (m_last_msg.action == msg->action)
          return;

        m_last_msg = *msg;

        switch (msg->action)
        {
          case IMC::CameraZoom::ACTION_ZOOM_RESET:
            inf(DTR("zoom reset"));
            cmd = 'W';
            m_uart->write(&cmd, 1);
            break;
          case IMC::CameraZoom::ACTION_ZOOM_STOP:
            inf(DTR("zoom stop"));
            cmd = 'Z';
            m_uart->write(&cmd, 1);
            break;
          case IMC::CameraZoom::ACTION_ZOOM_IN:
            inf(DTR("zoom in"));
            cmd = 'T';
            m_uart->write(&cmd, 1);
            break;
          case IMC::CameraZoom::ACTION_ZOOM_OUT:
            inf(DTR("zoom out"));
            cmd = 'W';
            m_uart->write(&cmd, 1);
            break;
          default:
            break;
        }

        setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_ACTIVE);
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
