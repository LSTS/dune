//***************************************************************************
// Copyright 2007-2024 Universidade do Porto - Faculdade de Engenharia      *
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
// Author: José Braga                                                       *
//***************************************************************************

// ISO C++ 98 headers.
#include <cstring>
#include <algorithm>
#include <cstddef>
#include <sstream>
#include <string>
#include <vector>

// DUNE headers.
#include <DUNE/DUNE.hpp>

// LibAIS headers.
#include <ais/ais.h>

// Local headers.
#include "ShipTypeCode.hpp"

namespace Sensors
{
  //! Device driver for AIS receivers.
  namespace AIS
  {
    using DUNE_NAMESPACES;

    //! Read buffer size.
    static const size_t c_read_buffer_size = 82;
    //! NMEA 5 body index.
    static const size_t c_nmea5_body_index = 15;
    //! NMEA 5 trailing chunk in first fragment.
    static const size_t c_nmea5_trail = 5;
    //! Line termination character.
    static const char c_line_term = '\n';

    //! %Task arguments.
    struct Arguments
    {
      //! IO device (URI).
      std::string io_dev;
    };

    struct Task: public Hardware::BasicDeviceDriver
    {
      //! Serial port handle.
      IO::Handle* m_handle;
      //! Task arguments.
      Arguments m_args;
      //! Current line.
      std::string m_line;
      //! Saved first part of NMEA 5 class message.
      std::string m_nmea5_fg;
      //! Waiting fragment.
      bool m_nmea5_wait_fg;
      //! Vehicle Type.
      std::map<int, std::string> m_systems;
      //! Buffer
      std::vector<char> m_bfr;

      Task(const std::string& name, Tasks::Context& ctx):
        Hardware::BasicDeviceDriver(name, ctx),
        m_handle(NULL)
      {
        // Define configuration parameters.
        paramActive(Tasks::Parameter::SCOPE_GLOBAL,
                    Tasks::Parameter::VISIBILITY_DEVELOPER, 
                    true);

        param("IO Port - Device", m_args.io_dev)
        .defaultValue("")
        .description("IO device URI in the form \"tcp://ADDRESS:PORT\" "
                     "or \"uart://DEVICE:BAUD\"");

        m_bfr.resize(c_read_buffer_size);
        m_nmea5_wait_fg = false;
      }

      //! Try to connect to the device.
      //! @return true if connection was established, false otherwise.
      bool
      onConnect() override
      {
        try
        {
          m_handle = openDeviceHandle(m_args.io_dev);
          return true;
        }
        catch (...)
        {
          throw RestartNeeded(DTR(Status::getString(CODE_COM_ERROR)), 5);
        }

        return false;
      }

      //! No initialization process.
      void
      onInitializeDevice() override
      { }

      //! Disconnect from device.
      void
      onDisconnect() override
      {
        Memory::clear(m_handle);
      }

      //! Process AIS NMEA message.
      void
      process(std::string nmea_msg)
      {
        // Remove carriage return.
        nmea_msg.erase(std::remove(nmea_msg.begin(), nmea_msg.end(), '\r'), nmea_msg.end());

        // Log NMEA msg.
        IMC::DevDataText text;
        text.value = nmea_msg;
        dispatch(text);

        // Get body of NMEA message.
        std::string nmea_payload = GetBody(nmea_msg.c_str());

        // Static and Voyage Related Data, first fragment.
        if (nmea_payload[0] == '5' && !m_nmea5_wait_fg)
        {
          nmea_msg.erase(nmea_msg.size() - c_nmea5_trail - 1, c_nmea5_trail);
          m_nmea5_fg = nmea_msg;
          m_nmea5_wait_fg = true;
          return;
        }

        // Static and Voyage Related Data, second fragment.
        if (m_nmea5_wait_fg)
        {
          nmea_msg.erase(0, c_nmea5_body_index);
          nmea_msg = m_nmea5_fg.append(nmea_msg);
          nmea_payload = GetBody(nmea_msg.c_str());
        }

        // Static and Voyage Related Data, second fragment.
        if (m_nmea5_wait_fg)
        {
          m_nmea5_wait_fg = false;
          Ais5 msg(nmea_payload.c_str(), GetPad(nmea_msg));

          // Add system MMSI and Type if not existent.
          std::map<int, std::string>::iterator itr = m_systems.find(msg.mmsi);
          if (itr != m_systems.end())
            return;

          m_systems[msg.mmsi] = ShipTypeCode::translate(msg.type_and_cargo);
          return;
        }

        // Position Report Class A.
        if ((nmea_payload[0] == '1') ||
            (nmea_payload[0] == '2') ||
            (nmea_payload[0] == '3'))
        {
          Ais1_2_3 msg(nmea_payload.c_str(), GetPad(nmea_msg));

          // We are able to send a message with ship information.
          IMC::RemoteSensorInfo rsi;
          std::ostringstream oss; 
          oss << msg.mmsi;
          
          rsi.id = static_cast<std::ostringstream*>(&oss)->str();

          // Find ship type.
          std::map<int, std::string>::iterator itr = m_systems.find(msg.mmsi);
          if (itr != m_systems.end())
            rsi.sensor_class = itr->second;

          rsi.lat = Angles::radians(msg.y);
          rsi.lon = Angles::radians(msg.x);
          rsi.heading = Angles::radians(msg.cog);
          dispatch(rsi);

          return;
        }
      }

      //! Get data from device.
      //! @return true if data was received, false otherwise.
      bool
      onReadData() override
      {
        if (!Poll::poll(*m_handle, 1.0))
          return false;

        size_t rv = m_handle->read(&m_bfr[0], m_bfr.size());
        if (rv == 0)
        {
          setEntityState(IMC::EntityState::ESTA_ERROR, Status::CODE_COM_ERROR);
          throw RestartNeeded(DTR("I/O error"), 5);
        }

        for (size_t i = 0; i < rv; ++i)
        {
          // Detected line termination.
          if (m_bfr[i] == c_line_term)
          {
            process(m_line);
            setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_ACTIVE);
            m_line.clear();
          }
          else
          {
            m_line.push_back(m_bfr[i]);
          }
        }

        return true;
      }
    };
  }
}

DUNE_TASK
