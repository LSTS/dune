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
// Author: Joel Cardoso                                                     *
//***************************************************************************

// ISO C++ 98 headers.
#include <cstring>
#include <cstddef>
#include <string>

// DUNE headers.
#include <DUNE/DUNE.hpp>

// Definition
#define BUFFER_MAX 256

namespace Actuators
{
  namespace FLIRPTU
  {
    using DUNE_NAMESPACES;

    // Pan and Tilt maximum and minimum values.
    struct Limits
    {
      // Maximum tilt.
      int tMax;
      // Minimum tilt.
      int tMin;
      // Maximum pan.
      int pMax;
      // Minimum pan.
      int pMin;
    };

    struct Arguments
    {
      // PTU model.
      std::string model;
      // Serial port device.
      std::string uart_dev;
      // Serial port baud rate.
      unsigned uart_baud;
      // PTU pan continuous.
      bool ptu_pc;
      // PTU tracking.
      bool ptu_track;
      // PTU pan speed.
      int  pan_speed;
      // PTU tilt speed.
      int tilt_speed;
      // PTU pan acceleration.
      int pan_accel;
      // PTU tilt acceleration.
      int tilt_accel;
      // Minimum tilt
      float tilt_min;
    };

    struct Task: public Tasks::Periodic
    {
      // Device protocol handler.
      SerialPort* m_uart;
      // Pan-Tilt Limits.
      Limits m_limits;
      // Task Arguments.
      Arguments m_args;
      // Serial Port buffer.
      uint8_t m_bfr[BUFFER_MAX];
      // Pan and tilt angles
      float m_pan, m_tilt;

      Task(const std::string& name, Tasks::Context& ctx):
        Tasks::Periodic(name, ctx),
        m_uart(NULL),
        m_pan(0),
        m_tilt(0)
      {
        param("PTU Model", m_args.model)
        .defaultValue("D48")
        .values("D48, D300")
        .description("Pan-Til Unit model name");

        param("Serial Port - Device", m_args.uart_dev)
        .defaultValue("/dev/ttyUSB0")
        .description("Serial port device (used to communicate with the actuator)");

        param("Serial Port - Baud Rate", m_args.uart_baud)
        .defaultValue("9600")
        .description("Serial port baud rate");

        param("PTU Pan Continuous", m_args.ptu_pc)
        .defaultValue("false")
        .description("PTU pan continuous enable");

        param("PTU Tracking", m_args.ptu_track)
        .defaultValue("true")
        .description("PTU tracking mode enable");

        param("PTU Pan Speed", m_args.pan_speed)
        .defaultValue("1000")
        .minimumValue("0")
        .description("PTU pan speed in positions/sec");

        param("PTU Tilt Speed", m_args.tilt_speed)
        .defaultValue("1000")
        .minimumValue("0")
        .description("PTU tilt speed in positions/sec");

        param("PTU Pan Acceleration", m_args.pan_accel)
        .defaultValue("2000")
        .minimumValue("0")
        .description("PTU pan acceleration in positions/sec/sec");

        param("PTU Tilt Acceleration", m_args.tilt_accel)
        .defaultValue("2000")
        .minimumValue("0")
        .description("PTU tilt acceleration in positions/sec/sec");

        param("PTU Minimum Tilt Angle", m_args.tilt_min)
        .defaultValue("10.0")
        .minimumValue("0")
        .description("PTU minimum tilt angle to avoid damaging cable");

        // Setup entity states.
        // @todo: set task entity states using new scheme.
        //
        // for reference:
        // m_estates[STA_COM_ERROR].state = IMC::EntityState::ESTA_ERROR;
        // m_estates[STA_COM_ERROR].description = DTR("no PTU data - serial port communication error");
        // m_estates[STA_DEV_ERROR].state = IMC::EntityState::ESTA_ERROR;
        // m_estates[STA_DEV_ERROR].description = DTR("PTU internal error");

        bind<IMC::SetControlSurfaceDeflection>(this);
      }

      void
      onResourceAcquisition(void)
      {
        m_uart = new SerialPort(m_args.uart_dev, m_args.uart_baud);
      }

      void
      onResourceInitialization(void)
      {
        debug("initializing");
        // Send execute immediatly command.
        sendCommand("i ");
        // Send reset.
        sendCommand("r ");
        debug("resetting PTU");
        // Wait for reset.
        sendCommand("a ");
        // Send position control command.
        sendCommand("ci ");
        // Wait.
        sendCommand("a ");
        // Send pan continuous mode.
        if (m_args.ptu_pc)
          sendCommand("pce ");
        else
          sendCommand("pcd ");
        // Wait.
        sendCommand("a ");
        // Disable factory limits (Attention to not overload the tilt limits).
        sendCommand("ld ");
        // Wait.
        sendCommand("a ");
        // Set pan and tilt speeds.
        createCommand("ps", m_args.pan_speed);
        createCommand("ts", m_args.tilt_speed);
        // Set pan and tilt accelerations.
        createCommand("pa", m_args.pan_accel);
        createCommand("ta", m_args.tilt_accel);
      }

      void
      onUpdateParameters(void)
      {
        if (m_args.model == "D48")
        {
          m_limits.tMax = 2333;
          m_limits.tMin = -6999;
          m_limits.pMax  = 6999;
          m_limits.pMin  = -6999;
        }
        if (m_args.model == "D300")
        {
          m_limits.tMax = 0;
          m_limits.tMin = -3499;
          m_limits.pMax  = 7000;
          m_limits.pMin  = -6999;
        }
      }

      void
      onResourceRelease(void)
      {
        Memory::clear(m_uart);
      }

      void
      sendCommand(const std::string& cmd)
      {
        m_uart->write(cmd.c_str(), cmd.size());
        trace("OUT | %s | %u", sanitize(cmd).c_str(), (unsigned)cmd.size());
        // Check for command success.
        /*if(m_uart->hasNewData(1.0) == IOMultiplexing::PRES_OK)
          {
          int retval = m_uart->read(m_bfr, sizeof(bfr));
          debug("%i", retval);
          }
          else
          {
          debug("no response!");
          }*/
      }

      void
      createCommand(const std::string& cmd_type, int& val)
      {
        std::stringstream cmd;
        cmd << cmd_type << val << " ";
        sendCommand(cmd.str());
      }

      void
      consume(const IMC::SetControlSurfaceDeflection* csd)
      {
        if (csd->id == 'p')
        {
          m_pan = csd->angle;
        }

        if (csd->id == 't')
        {
          m_tilt = csd->angle;
        }
      }

      int
      rad2pos(float min_angle, float max_angle, int min_pos, int max_pos, float angle)
      {
        int pos = (int) ((max_pos - min_pos) * (angle - min_angle) / (max_angle - min_angle)) + min_pos;

        return trimValue(pos, min_pos, max_pos);
      }

      void
      task(void)
      {
        // PAN
        float pan_rad = Angles::normalizeRadian(m_pan);
        int pan_pos = rad2pos(-Math::c_pi, Math::c_pi, m_limits.pMin, m_limits.pMax, pan_rad);

        debug("Pan: %f rad", pan_rad);
        debug("Pan: %d", pan_pos);

        // Send pan command.
        createCommand("pp", pan_pos);

        debug("Pan bounded: %d", pan_pos);

        // TILT
        float tilt_rad = Angles::normalizeRadian(m_tilt);
        tilt_rad = trimValue(m_tilt, 0, Math::c_half_pi);
        int tilt_pos = rad2pos(0, Math::c_half_pi, m_limits.tMin, m_limits.tMax, tilt_rad);

        debug("Tilt: %f rad", m_tilt);
        debug("Tilt: %d", tilt_pos);

        // Send tilt command.
        createCommand("tp", tilt_pos);

        debug("Tilt bounded: %d", tilt_pos);

        //float pan_rate_rad =  tuples.get("PanRate", 0.0f);
        //int pan_rate_pos = radToPos(pan_rate_rad);

        //float tilt_rate_rad =  tuples.get("TiltRate", 0.0f);
        //int tilt_rate_pos = radToPos(tilt_rate_rad);

        //debug("%f", pan_rate_rad);
        //debug("%f", pan_rate_pos);
        //debug("%f", tilt_rate_rad);
        //debug("%f", tilt_rate_pos);

        // Send pan rate command.
        //createCommand("ps", pan_rate_pos);

        // Send tilt rate command.
        //createCommand("ts", tilt_rate_pos);

        // Send halt command.
        //if (tuples.get("Halt", 0)) sendCommand("h ");
      }
    };
  }
}

DUNE_TASK
