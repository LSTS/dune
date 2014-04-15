//***************************************************************************
// Copyright 2007-2014 Universidade do Porto - Faculdade de Engenharia      *
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
// Author: José Pinto                                                       *
// Author: José Braga                                                       *
//***************************************************************************

// ISO C++ 98 headers.
#include <cstring>
#include <algorithm>
#include <cstddef>
#include <sstream>
#include <string>

// DUNE headers.
#include <DUNE/DUNE.hpp>

// LibAIS headers.
#include <ais/ais.h>

namespace Sensors
{
  //! Device driver for AIS receivers.
  namespace AIS
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

    struct Task: public DUNE::Tasks::Task
    {
      //! Serial port handle.
      IO::Handle* m_handle;
      //! Task arguments.
      Arguments m_args;

      Task(const std::string& name, Tasks::Context& ctx):
        DUNE::Tasks::Task(name, ctx),
        m_handle(NULL)
      {
        // Define configuration parameters.
        param("Serial Port - Device", m_args.uart_dev)
        .defaultValue("")
        .description("Serial port device used to communicate with the sensor");

        param("Serial Port - Baud Rate", m_args.uart_baud)
        .defaultValue("38400")
        .description("Serial port baud rate");
      }

      void
      onResourceAcquisition(void)
      {
        try
        {
          m_handle = new SerialPort(m_args.uart_dev, m_args.uart_baud);
        }
        catch (...)
        {
          throw RestartNeeded(DTR(Status::getString(CODE_COM_ERROR)), 5);
        }
      }

      void
      onResourceRelease(void)
      {
        Memory::clear(m_handle);
      }

      //! Process AIS NMEA message.
      void
      process(const char* nmea_msg)
      {
        std::string nmea_payload = GetBody(nmea_msg);

        if ((nmea_payload[0] == '1') ||
            (nmea_payload[0] == '2') ||
            (nmea_payload[0] == '3'))
        {
          Ais1_2_3 msg(nmea_payload.c_str(), GetPad(nmea_msg));
          spew("mmsi: %d", msg.mmsi);
          spew("lat: %f", msg.y);
          spew("lon: %f", msg.x);
          spew("cog: %f", msg.cog);

          IMC::RemoteSensorInfo rsi;
          rsi.id = static_cast<std::ostringstream*>(&(std::ostringstream() << msg.mmsi))->str();
          // unable to fill sensor_class
          rsi.lat = Angles::radians(msg.y);
          rsi.lon = Angles::radians(msg.x);
          rsi.alt = 0;
          rsi.heading = Angles::radians(msg.cog);
          rsi.data = "nothing to report";
          return;
        }
      }

      void
      testing(void)
      {
        const char* nmea_message = "!AIVDM,1,1,,A,13HOI:0P0000VOHLCnHQKwvL05Ip,0*23";
        process(nmea_message);
      }

      void
      onMain(void)
      {
        char bfr[82];

        while (!stopping())
        {
          consumeMessages();

          if (!Poll::poll(*m_handle, 1.0))
            continue;

          size_t rv = m_handle->readString(bfr, sizeof(bfr));
          if (rv == 0)
          {
            setEntityState(IMC::EntityState::ESTA_ERROR, Status::CODE_COM_ERROR);
            throw RestartNeeded(DTR("I/O error"), 5);
          }

          process((const char*)bfr);
          setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_ACTIVE);
        }
      }
    };
  }
}

DUNE_TASK
