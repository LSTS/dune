//***************************************************************************
// Copyright 2007-2025 Universidade do Porto - Faculdade de Engenharia      *
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
// Author: Joao Costa                                                       *
// Based on: vproweather 1.0 by Joe Jaworski                                *
//***************************************************************************

// ISO C++ 98 headers.
#include <cstring>
#include <stdio.h>
#include <string>

// DUNE headers.
#include <DUNE/DUNE.hpp>

// Local Headers.
#include "Parser.hpp"

namespace Sensors
{
  //! This task reads data from the Davis Instruments Vantage Pro2 Weather Station.
  //!
  //! Periodicaly is sent a LOOP command to the serial data logger. It returns the
  //! temperature, humidity, wind and rain values measured by the weather station.
  //! @author Joao Costa
  namespace VantagePro2
  {
    using DUNE_NAMESPACES;

    static const unsigned int c_max_csum = 2;
    static const unsigned int c_max_buffer = 128;

    enum StateMachineStates
    {
      //! Stopped State.
      SM_STOP,
      ///! Ask FW's version
      SM_ASK_VERSION,
      //! Get for FW's version state
      SM_GET_VERSION,
      //! Init done state
      SM_DONE,
      //! No response error state
      SM_ERROR
    };

    //! Task arguments.
    struct Arguments
    {
      //! Serial port device.
      std::string uart_dev;
      //! Serial port baud rate.
      unsigned uart_baud;
      //! Absolute wind statistics interval.
      double stats_interval;
      //! Dispatch vertical profile.
      double send_profile;
    };

    struct Task: public DUNE::Tasks::Task
    {
      //! Serial port handle.
      SerialPort* m_uart;
      //! Command to be sent via usart.
      char m_cmd[c_max_buffer];
      //! Serial input buffer.
      char m_buffer[c_max_buffer];
      //! I/O Multiplexer.
      Poll m_poll;
      //! Parser
      Parser* m_parse;
      //! Serial buffer in
      uint8_t m_bfr[c_max_buffer];
      //! Current state machine's state
      StateMachineStates m_sm_state;
      //! Timer used for resend the command to firmware
      Time::Counter<double> m_timer;
      //! LOOP cmd sent flag
      bool m_LOOP_sent;
      //!
      int m_num_bytes;
      //! Initiate station flag
      bool m_init_station;
      //! Ask for loop packages
      bool m_init_loop;
      //! Task arguments.
      Arguments m_args;
      //! Current estimated state.
      IMC::EstimatedState m_estate;
      //! Absolute wind statistics.
      //! Absolute wind statistics timer.
      Time::Counter<double> m_abs_wind_stats_timer;
      //! Absolute wind speed cumulative.
      double m_abs_wind_spd_cum;
      //! Absolute wind direction cumulative.
      Math::CircularMean<double> m_abs_wind_dir_avg;
      //! Absolute wind maximum speed.
      double m_abs_wind_max_spd;
      //! Absolute wind maximum speed direction.
      double m_abs_wind_max_spd_dir;
      //! Absolute Wind average entity id.
      unsigned int m_abs_wind_avg_eid;
      //! Absolute Wind max entity id.
      unsigned int m_abs_wind_max_eid;


      //! Constructor.
      //! @param [in] name task name.
      //! @param [in] ctx context.
      Task(const std::string& name, Tasks::Context& ctx):
        DUNE::Tasks::Task(name, ctx),
        m_uart(nullptr),
        m_parse(nullptr),
        m_LOOP_sent(false),
        m_init_station(true),
        m_init_loop(false),
        m_abs_wind_spd_cum(0.0),
        m_abs_wind_max_spd(0.0),
        m_abs_wind_max_spd_dir(0.0)
      {
        param("Serial Port - Device", m_args.uart_dev)
          .defaultValue("/dev/ttyUSB0")
          .description("Serial port used to communicate with the meteo station");

        param("Serial Port - Baud Rate", m_args.uart_baud)
          .defaultValue("19200")
          .description("Serial port baudrate");

        param("Absolute Wind Statistics Interval", m_args.stats_interval)
          .units(Units::Second)
          .defaultValue("900.0")
          .description("Interval to compute absolute wind statistics. Default is 15 min.");

        param("Dispatch Vertical Profile", m_args.send_profile)
          .defaultValue("true")
          .description("Dispatch vertical profile messages");

        bind<IMC::EstimatedState>(this);
      }

      //! Update internal state with new parameter values.
      void
      onUpdateParameters(void)
      { }

      //! Reserve entity identifiers.
      void
      onEntityReservation(void)
      {
        std::string label = getEntityLabel();
        m_abs_wind_avg_eid = reserveEntity(label + " - Average");
        m_abs_wind_max_eid = reserveEntity(label + " - Maximum");
      }

      //! Resolve entity names.
      void
      onEntityResolution(void)
      { }

      //! Acquire resources.
      void
      onResourceAcquisition(void)
      {
        try
        {
          m_uart = new SerialPort(m_args.uart_dev, m_args.uart_baud);
          m_uart->setCanonicalInput(false);
          m_uart->flush();

          m_poll.add(*m_uart);
        }
        catch (std::runtime_error& e)
        {
          throw RestartNeeded(e.what(), 10);
        }
      }

      //! Initialize resources.
      void
      onResourceInitialization(void)
      {
        m_uart->flushInput();
        m_uart->flush();

        m_parse = new Parser(this);

        m_timer.setTop(2);

        // Wake up console
        // m_uart->writeString("\n\r");

        m_abs_wind_stats_timer.setTop(m_args.stats_interval);
      }

      //! Release resources.
      void
      onResourceRelease(void)
      {
        if (m_uart != NULL)
        {
          m_poll.remove(*m_uart);
          Memory::clear(m_uart);
        }
      }

      void
      consume(const IMC::EstimatedState* msg)
      {
        m_estate = *msg;
      }

      //! Read data sent by Doris Sampler.
      bool
      hasNewData(void)
      {
        if (m_poll.wasTriggered(*m_uart))
        {
          std::memset(&m_bfr, '\0', sizeof(m_bfr));
          m_num_bytes = 0;
          try
          {
            m_num_bytes = m_uart->read(m_bfr, sizeof(m_bfr));
          }
          catch (std::exception& e)
          {
            err(DTR("read error: %s"), e.what());
            return false;
          }
          if (m_num_bytes <= 0)
          {
            err(DTR("unknown read error"));
            return false;
          }
          else
          {
            for (uint8_t i = 0; i < m_num_bytes; ++i)
            {
              if (m_LOOP_sent)
              {
                if (!m_parse->parseLOOP(m_bfr[i]))
                  continue;
              }
              else
              {
                if (!m_parse->parseOK(m_bfr[i]))
                  continue;
              }
              return true;
            }
          }
        }
        return false;
      }

      //! Send new data to bus
      void
      dispatchData(void)
      {
        IMC::Temperature temp;
        temp.value = ((float)m_parse->m_LOOPData.OutsideTemp / 10 - 32) * 5 / 9;
        debug("temperature = %.2f", temp.value);

        IMC::WindSpeed wind_speed;
        wind_speed.speed = m_parse->m_LOOPData.WindSpeed;
        wind_speed.direction = Angles::radians(m_parse->m_LOOPData.WindDir);
        debug("wind speed = %.2f", wind_speed.speed);
        debug("wind direction = %.2f", wind_speed.direction);

        IMC::AbsoluteWind abs_wind;
        toAbsoluteWind(wind_speed, abs_wind);
        debug("absolute wind direction = %.2f", abs_wind.direction);
        debug("absolute wind speed = %.2f", abs_wind.speed);

        IMC::RelativeHumidity humidity;
        humidity.value = m_parse->m_LOOPData.OutsideHum;
        debug("outside humidity = %.2f", humidity.value);

        Delay::wait(0.2);

        dispatch(temp);
        dispatch(wind_speed);
        dispatch(abs_wind);
        dispatch(humidity);

        // Absolute wind statistics
        m_abs_wind_spd_cum += abs_wind.speed;
        m_abs_wind_dir_avg.update(abs_wind.direction);
        if (abs_wind.speed > m_abs_wind_max_spd)
        {
          m_abs_wind_max_spd = abs_wind.speed;
          m_abs_wind_max_spd_dir = abs_wind.direction;
        }

        if (m_abs_wind_stats_timer.overflow())
        {
          // Average and Maximum messages
          IMC::AbsoluteWind aw_avg;
          aw_avg.setSourceEntity(m_abs_wind_avg_eid);
          aw_avg.speed = m_abs_wind_spd_cum / m_abs_wind_dir_avg.sampleSize();
          aw_avg.direction = m_abs_wind_dir_avg.mean();
          IMC::AbsoluteWind aw_max;
          aw_max.setSourceEntity(m_abs_wind_max_eid);
          aw_max.speed = m_abs_wind_max_spd;
          aw_max.direction = m_abs_wind_max_spd_dir;

          dispatch(aw_avg, DF_KEEP_SRC_EID);
          dispatch(aw_max, DF_KEEP_SRC_EID);

          // Generate Vertical Profiles
          if (m_args.send_profile)
          {
            IMC::VerticalProfile vprofile;
            IMC::ProfileSample ps;
            
            double lat, lon;
            toWGS84(m_estate, lat, lon);
            vprofile.lat = Angles::degrees(lat);
            vprofile.lon = Angles::degrees(lon);
            vprofile.numsamples = m_abs_wind_dir_avg.sampleSize();
            vprofile.parameter = IMC::VerticalProfile::PROF_ABSOLUTE_WIND;
  
            ps.depth = aw_avg.direction;
            ps.avg = aw_avg.speed;
            vprofile.samples.push_back(ps);
            dispatch(vprofile);
          }

          // Reset statistics
          m_abs_wind_spd_cum = 0.0;
          m_abs_wind_dir_avg.clear();
          m_abs_wind_stats_timer.setTop(m_args.stats_interval);
        }

      }

      void
      toAbsoluteWind(const IMC::WindSpeed& ws, IMC::AbsoluteWind& aw)
      {
        struct
        {
          double x;
          double y;
        } relative_components = { 0.0, 0.0 }, absolute_components = { 0.0, 0.0 };
        double dummy = 0.0;

        // Remove vehicle velocity and convert to inertial frame
        Coordinates::displace(relative_components, ws.direction, ws.speed);
        relative_components.x -= m_estate.u;
        relative_components.y -= m_estate.v;
        Coordinates::BodyFixedFrame::toInertialFrame(m_estate.phi, m_estate.theta, m_estate.psi,
                                                     relative_components.x, relative_components.y, 0.0,
                                                     &absolute_components.x, &absolute_components.y, &dummy);

        
        aw.direction = std::atan2(absolute_components.y, absolute_components.x);
        aw.speed = Math::norm(absolute_components.x, absolute_components.y);
      }

      //! Creates a Log Book Entry with the VP2's firmware version
      //! @return Returns 1 if got version successfully
      /*void
      getVersion(void)
      {
        // clear channel and delay
        strcpy(m_cmd, "NVER\n"); // make Davis cmd string
        m_uart->writeString(m_cmd);
        war("NVER\n");
      }*/

      //! Main loop.
      void
      onMain(void)
      {
        while (!stopping())
        {
          // clear channel and delay
          if (m_timer.overflow())
          {
            if (m_init_station)
            {
              m_LOOP_sent = false;
              strcpy(m_cmd, "NVER\n");  // make Davis cmd string
            }
            else
            {
              m_LOOP_sent = true;
              strcpy(m_cmd, "LOOP 1\n");  // make Davis cmd string
            }

            m_uart->writeString(m_cmd);
            m_timer.reset();
            // war("NVER");
          }

          if (m_poll.poll(0.01))
          {
            if (hasNewData())
            {
              if (m_parse->translate(m_LOOP_sent))
              {
                if (m_LOOP_sent)
                {
                  dispatchData();
                }
                else
                {
                  m_init_station = false;

                  // Logs the version of the Vantage Pro2 firmware
                  IMC::LogBookEntry m_version;
                  m_version.type = IMC::LogBookEntry::LBET_INFO;
                  m_version.htime = Time::Clock::getSinceEpoch();
                  m_version.context = "Vantage Pro2 Firmware Version";
                  m_version.text = m_parse->m_console_version;
                  Delay::wait(0.2);
                  dispatch(m_version, DF_LOOP_BACK);
                }
              }
            }
          }
        }
        waitForMessages(1.0);
      }
    };
  }
}
DUNE_TASK