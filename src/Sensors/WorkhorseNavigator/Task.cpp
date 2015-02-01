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
#include <string>

// DUNE headers.
#include <DUNE/DUNE.hpp>

namespace Sensors
{
  namespace WorkhorseNavigator
  {
    using DUNE_NAMESPACES;

    //! Setup commands in order with corresponding error message if the
    //! command fails.
    static const char* c_setup_cmds[] =
    {
      "PD4", DTR("failed to set output format"),
      "CF11110", DTR("failed to set flow control"),
      "CL0", DTR("failed to disable power saving"),
      "CX0", DTR("failed to disable low latency trigger"),
      "BX0450", DTR("unexpected response"),
      "EX01011", DTR("unexpected response"),
      "TP00:00:00", DTR("unexpected response"),
      "WP00001", DTR("unexpected response"),
      "WN030", DTR("unexpected response"),
      "WS0005", DTR("unexpected response"),
      "BK1", DTR("unexpected response")
    };

    struct Arguments
    {
      // Serial port device.
      std::string uart_dev;
      // Serial port baud rate.
      unsigned uart_baud;
      // Sensor rotation.
      double rotation;
      //! DVL position.
      std::vector<float> position;
      //! DVL orientation.
      std::vector<float> orientation;
    };

    //! Device beam width
    static const float c_beam_width = 1.2;

    //! %Task.
    struct Task: public DUNE::Tasks::Task
    {
      // Serial port handle.
      SerialPort* m_uart;
      // Ground velocity message.
      IMC::GroundVelocity m_gvel;
      // Water velocity message.
      IMC::WaterVelocity m_wvel;
      // Bottom ranges.
      IMC::Distance m_brange[4];
      // Sample count.
      unsigned m_samples;
      // Task arguments.
      Arguments m_args;

      Task(const std::string& name, Tasks::Context& ctx):
        Tasks::Task(name, ctx),
        m_uart(NULL),
        m_samples(0)
      {
        paramActive(Tasks::Parameter::SCOPE_MANEUVER,
                    Tasks::Parameter::VISIBILITY_USER);

        param("Serial Port - Device", m_args.uart_dev)
        .defaultValue("")
        .description("Serial port used to connect to the Workhorse Navigator.");

        param("Serial Port - Baud Rate", m_args.uart_baud)
        .defaultValue("115200")
        .description("Serial port baud rate");

        param("Rotation", m_args.rotation)
        .units(Units::Degree)
        .defaultValue("0.0")
        .description("Sensor rotation.");

        param("Device position", m_args.position)
        .defaultValue("0, 0, 0")
        .size(3)
        .description("Device position");

        param("Device orientation", m_args.orientation)
        .defaultValue("0, -90, 0")
        .size(3)
        .description("Device orientation");
      }

      void
      onUpdateParameters(void)
      {
        if (paramChanged(m_args.rotation))
          m_args.rotation = Angles::radians(m_args.rotation);

        if (paramChanged(m_args.position) || paramChanged(m_args.orientation))
        {
          IMC::BeamConfig bc;
          bc.beam_width = Math::Angles::radians(c_beam_width);
          bc.beam_height = Math::Angles::radians(c_beam_width);

          IMC::DeviceState ds;
          ds.x = m_args.position[0];
          ds.y = m_args.position[1];
          ds.z = m_args.position[2];
          ds.phi = Math::Angles::radians(m_args.orientation[0]);
          ds.theta = Math::Angles::radians(m_args.orientation[1]);
          ds.psi = Math::Angles::radians(m_args.orientation[2]);

          for (unsigned i = 0; i < 5; i++)
          {
            m_brange[i].location.clear();
            m_brange[i].location.push_back(ds);
            m_brange[i].beam_config.clear();
            m_brange[i].beam_config.push_back(bc);
          }
        }
      }

      void
      onResourceRelease(void)
      {
        if (m_uart != NULL)
        {
          onResourceDeactivation();
          delete m_uart;
          m_uart = NULL;
        }
      }

      void
      onActivation(void)
      {
        startSampling();
      }

      void
      onDeactivation(void)
      {
        stopSampling();
      }

      void
      onEntityReservation(void)
      {
        m_brange[0].setSourceEntity(reserveEntity("DVL Beam0"));
        m_brange[1].setSourceEntity(reserveEntity("DVL Beam1"));
        m_brange[2].setSourceEntity(reserveEntity("DVL Beam2"));
        m_brange[3].setSourceEntity(reserveEntity("DVL Beam3"));
      }

      void
      onResourceAcquisition(void)
      {
        m_uart = new SerialPort(m_args.uart_dev, m_args.uart_baud);
      }

      void
      onResourceInitialization(void)
      {
        setEntityState(IMC::EntityState::ESTA_BOOT, Status::CODE_INIT);
        stopSampling();

        m_uart->setCanonicalInput(true);

        // Send setup commands.
        unsigned cmd_count = sizeof(c_setup_cmds) / sizeof(char*);

        for (unsigned i = 0; i < cmd_count; i += 2)
        {
          if (!sendCommand(c_setup_cmds[i]))
            throw std::runtime_error(c_setup_cmds[i + 1]);
        }

        m_uart->setCanonicalInput(false);

        startSampling();
      }

      void
      onResourceDeactivation(void)
      {
        m_uart->sendBreak(0);
      }

      bool
      sendCommand(const char* cmd)
      {
        char command[16];
        String::format(command, 16, "%s\n", cmd);

        char response[16];
        String::format(response, 16, ">%s\r\n", cmd);

        m_uart->writeString(command);

        char bfr[128];
        readCommand(bfr, sizeof(bfr));

        return (std::strcmp(bfr, response) == 0) || (std::strcmp(bfr, response + 1) == 0);
      }

      void
      readCommand(char* bfr, unsigned bfr_len, double timeout = 1.0)
      {
        bfr[0] = 0;

        if (Poll::poll(*m_uart, timeout))
          m_uart->readString(bfr, bfr_len);
      }

      void
      stopSampling(void)
      {
        m_uart->setCanonicalInput(true);
        m_uart->flush();

        // Send break and wait for device to wake-up.
        m_uart->sendBreak(0);

        char bfr[128];

        // Skip first blank line.
        readCommand(bfr, 128);

        // Read break ack.
        readCommand(bfr, 128);
        if (std::strcmp(bfr, "[BREAK Wakeup A]\r\n") != 0)
          throw std::runtime_error(DTR("failed to wake device"));

        // Write new-line so we can later read the prompt.
        m_uart->writeString("\n");

        bool prompt = false;
        while (!prompt)
        {
          readCommand(bfr, 128);
          if (std::strcmp(bfr, ">\r\n") == 0)
            prompt = true;
        }

        m_uart->writeString("\n");
        readCommand(bfr, 128);
        if (std::strcmp(bfr, ">\r\n") != 0)
          throw std::runtime_error(DTR("unable to read prompt"));

        m_uart->setCanonicalInput(false);
      }

      void
      startSampling(void)
      {
        setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_INIT);

        m_uart->setCanonicalInput(true);
        m_uart->flush();

        if (!sendCommand("CS"))
          throw RestartNeeded(DTR("failed to start data sampling"), 5);

        setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_ACTIVE);
        m_uart->setCanonicalInput(false);
      }

      void
      onMain(void)
      {
        Parsers::PD4 parser;
        uint8_t bfr[128];

        while (!stopping())
        {
          if (isActive())
          {
            consumeMessages();
          }
          else
          {
            setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_IDLE);
            waitForMessages(1.0);
            continue;
          }

          if (!Poll::poll(*m_uart, 1.0))
            continue;

          size_t rv = m_uart->read(bfr, sizeof(bfr));
          for (size_t i = 0; i < rv; ++i)
          {
            if (parser.parse(bfr[i]))
            {
              const PD4::Data* data = parser.data();
              m_gvel.validity = data->vel_btm_validity;
              m_gvel.x = data->x_vel_btm * std::cos(m_args.rotation) + data->y_vel_btm * std::sin(m_args.rotation);
              m_gvel.y = data->x_vel_btm * std::sin(m_args.rotation) - data->y_vel_btm * std::cos(m_args.rotation);
              m_gvel.z = -data->z_vel_btm;
              dispatch(m_gvel);

              m_wvel.validity = data->vel_wtr_validity;
              m_wvel.x = data->x_vel_wtr * std::cos(m_args.rotation) + data->y_vel_wtr * std::sin(m_args.rotation);
              m_wvel.y = data->x_vel_wtr * std::sin(m_args.rotation) - data->y_vel_wtr * std::cos(m_args.rotation);
              m_wvel.z = -data->z_vel_wtr;
              dispatch(m_wvel);

              m_brange[0].value = data->bm1_rng_btm;
              m_brange[1].value = data->bm2_rng_btm;
              m_brange[2].value = data->bm3_rng_btm;
              m_brange[3].value = data->bm4_rng_btm;
              dispatch(m_brange[0]);
              dispatch(m_brange[1]);
              dispatch(m_brange[2]);
              dispatch(m_brange[3]);
              ++m_samples;
              setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_ACTIVE);
            }
          }
        }
      }
    };
  }
}

DUNE_TASK
