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
#include <cstdio>

// DUNE headers.
#include <DUNE/DUNE.hpp>

namespace Sensors
{
  namespace SonTekArgonaut
  {
    using DUNE_NAMESPACES;

    //! Number of beams.
    static const unsigned c_beam_count = 3;
    //! Minimum measurable distance (m).
    static const double c_min_distance = 1.0;

    static const uint8_t c_gvel_valid_flag = IMC::GroundVelocity::VAL_VEL_X
    | IMC::GroundVelocity::VAL_VEL_Y
    | IMC::GroundVelocity::VAL_VEL_Z;

    static const uint8_t c_wvel_valid_flag = IMC::WaterVelocity::VAL_VEL_X
    | IMC::WaterVelocity::VAL_VEL_Y
    | IMC::WaterVelocity::VAL_VEL_Z;

    struct Arguments
    {
      //! Serial port device.
      std::string uart_dev;
      //! Serial port baud rate.
      unsigned uart_baud;
      //! Input timeout.
      double wdog_tout;
      //! DVL position.
      std::vector<float> position;
      //! DVL orientation.
      std::vector<float> orientation;
    };

    struct Task: public Tasks::Task
    {
      //! Serial port.
      SerialPort* m_uart;
      //! Internal buffer.
      char m_buffer[512];
      //! Temperature.
      IMC::Temperature m_temp;
      //! Ground velocity.
      IMC::GroundVelocity m_gvel;
      //! Water velocity.
      IMC::WaterVelocity m_wvel;
      //! Distance.
      IMC::Distance m_dist[c_beam_count];
      //! Input watchdog.
      Counter<double> m_wdog;
      //! Task arguments.
      Arguments m_args;

      Task(const std::string& name, Tasks::Context& ctx):
        Tasks::Task(name, ctx),
        m_uart(NULL)
      {
        param("Serial Port - Device", m_args.uart_dev)
        .defaultValue("")
        .description("Serial port device used to communicate with the sensor");

        param("Serial Port - Baud Rate", m_args.uart_baud)
        .defaultValue("57600")
        .description("Serial port baud rate");

        param("Watchdog Timeout", m_args.wdog_tout)
        .defaultValue("2.0")
        .minimumValue("1.0")
        .units(Units::Second)
        .description("Number of seconds without data before reporting an error");

        param("Device position", m_args.position)
        .defaultValue("0, 0, 0")
        .size(3)
        .description("Device position");

        param("Device orientation", m_args.orientation)
        .defaultValue("0, -90, 0")
        .size(3)
        .description("Device orientation");
      }

      ~Task(void)
      {
        onResourceRelease();
      }

      void
      onUpdateParameters(void)
      {
        if (paramChanged(m_args.wdog_tout))
          m_wdog.setTop(m_args.wdog_tout);

        IMC::BeamConfig bc;
        bc.beam_width = Math::Angles::radians(2.0);
        bc.beam_height = Math::Angles::radians(2.0);

        IMC::DeviceState ds;
        ds.x = m_args.position[0];
        ds.y = m_args.position[1];
        ds.z = m_args.position[2];
        ds.phi = Math::Angles::radians(m_args.orientation[0]);
        ds.theta = Math::Angles::radians(m_args.orientation[1]);
        ds.psi = Math::Angles::radians(m_args.orientation[2]);

        for (unsigned i = 0; i < c_beam_count; ++i)
        {
          m_dist[i].location.clear();
          m_dist[i].location.push_back(ds);
          m_dist[i].beam_config.clear();
          m_dist[i].beam_config.push_back(bc);
        }
      }

      void
      onEntityReservation(void)
      {
        for (unsigned i = 0; i < c_beam_count; ++i)
        {
          std::string ename = String::str("%s - Beam %u", getEntityLabel(), i);
          m_dist[i].setSourceEntity(reserveEntity(ename));
        }
      }

      void
      onResourceAcquisition(void)
      {
        m_uart = new SerialPort(m_args.uart_dev, m_args.uart_baud,
                                SerialPort::SP_PARITY_NONE,
                                SerialPort::SP_STOPBITS_2,
                                SerialPort::SP_DATABITS_8);
        m_uart->setCanonicalInput(true);
      }

      void
      onResourceRelease(void)
      {
        Memory::clear(m_uart);
      }

      bool
      read(const char* str, double timeout = 1.0)
      {
        Counter<double> timer(timeout);

        while (!timer.overflow())
        {
          if (Poll::poll(*m_uart, timer.getRemaining()))
          {
            char bfr[128];
            m_uart->readString(bfr, sizeof(bfr));
            if (std::strcmp(bfr, str) == 0)
              return true;
          }
        }

        return false;
      }

      bool
      sendCommand(const char* str, const char* reply, double timeout = 2.0)
      {
        m_uart->writeString(str);
        return read(reply, timeout);
      }

      void
      onResourceInitialization(void)
      {
        m_uart->flushInput();
        m_uart->sendBreak(0);

        if (!read("Wake up initialization. Please wait...\r\n", 2.0))
          throw RestartNeeded("failed to enter configuration mode", 1);

        Delay::wait(1.0);

        if (!sendCommand("OF METRIC\r\n", "OK\r\n"))
          throw RestartNeeded("unable to setup output system", 1);

        if (!sendCommand("OM AUTO\r\n", "OK\r\n"))
          throw RestartNeeded("unable to setup data output mode", 1);

        if (!sendCommand("AI 0\r\n", "OK\r\n"))
          throw RestartNeeded("unable to setup averaging interval", 1);

        if (!sendCommand("SI 0\r\n", "OK\r\n"))
          throw RestartNeeded("unable to setup time between samples", 1);

        if (!sendCommand("CY XYZ\r\n", "OK\r\n"))
          throw RestartNeeded("unable to setup coordinate system", 1);

        if (!sendCommand("ORIENTATION SET DOWN\r\n", "OK\r\n"))
          throw RestartNeeded("unable to setup orientation", 1);

        if (!sendCommand("START\r\n", "OK\r\n"))
          throw RestartNeeded("failed to start output", 1);

        setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_ACTIVE);
      }

      void
      readSample(void)
      {
        if (!Poll::poll(*m_uart, 1.0))
          return;

        m_uart->readString(m_buffer, sizeof(m_buffer));

        double distance[2];
        int wvval = 0;
        int gvval = 0;

        double tstamp = Clock::getSinceEpoch();

        int rv = std::sscanf(m_buffer,
                        "%*d %*d %*d %*d %*d %*d" // Date
                        " %lf %lf %lf %d"         // Water Velocity
                        " %lf %lf %lf %d"         // Bottom Velocity
                        " %f %f %f"               // Range to bottom
                        " %*d %*d %*d"            // Amplitude Beam
                        " %*d"                    // Percent good pings
                        " %*f %*f %*f"            // Euler Angles
                        " %f"                     // Mean Temperature
                        " %*f"                    // Mean Pressure
                        " %*f"                    // Input power cell
                        " %*f"                    // Cell Begin
                        " %*f"                    // Cell End
                        " %lf %lf",               // Distance Travel X, Y
                        &m_wvel.x, &m_wvel.y, &m_wvel.z, &wvval,
                        &m_gvel.x, &m_gvel.y, &m_gvel.z, &gvval,
                        &m_dist[0].value, &m_dist[1].value, &m_dist[2].value,
                        &m_temp.value,
                        &distance[0], &distance[1]);

        if (rv != 14)
          return;

        m_wdog.reset();

        // Water velocity.
        if (wvval == 1)
        {
          m_wvel.validity = c_wvel_valid_flag;
          m_wvel.x *= 0.01;
          m_wvel.y *= 0.01;
          m_wvel.z *= 0.01;
        }
        else
        {
          m_wvel.clear();
        }

        m_wvel.setTimeStamp(tstamp);
        dispatch(m_wvel, DF_KEEP_TIME);

        // Ground velocity.
        if (gvval == 1)
        {
          setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_ACTIVE);
          m_gvel.validity = gvval ? c_gvel_valid_flag : 0;
          m_gvel.x *= 0.01;
          m_gvel.y *= 0.01;
          m_gvel.z *= 0.01;
        }
        else
        {
          setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_NO_BOTTOM_LOCK);
          m_gvel.clear();
        }

        m_gvel.setTimeStamp(tstamp);
        dispatch(m_gvel, DF_KEEP_TIME);

        // Beam distances.
        for (unsigned i = 0; i < c_beam_count; ++i)
        {
          if (m_dist[i].value < c_min_distance)
            m_dist[i].validity = IMC::Distance::DV_INVALID;
          else
            m_dist[i].validity = IMC::Distance::DV_VALID;

          m_dist[i].setTimeStamp(tstamp);
          dispatch(m_dist[i], DF_KEEP_TIME);
        }

        m_temp.setTimeStamp(tstamp);
        dispatch(m_temp, DF_KEEP_TIME);
      }

      void
      onMain(void)
      {
        while (!stopping())
        {
          consumeMessages();
          readSample();
          if (m_wdog.overflow())
            setEntityState(IMC::EntityState::ESTA_ERROR, Status::CODE_COM_ERROR);
        }
      }
    };
  }
}

DUNE_TASK
