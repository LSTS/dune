//***************************************************************************
// Copyright 2007-2020 Universidade do Porto - Faculdade de Engenharia      *
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
// Author: Maria Costa                                                      *
//***************************************************************************

// DUNE headers.
#include <DUNE/DUNE.hpp>

// JSON headers.
#include "nlohmann-json/json.hpp"

namespace Sensors
{
  //! Device driver for the Water Linked DVL-A50.
  //!
  //! TODO: Insert explanation on task behaviour here.
  //! @author Maria Costa
  namespace WaterLinkedDVL
  {
    using DUNE_NAMESPACES;
    using json = nlohmann::json;

    //! Number of DVL beams.
    static const unsigned c_beams = 4;
    //! Transducer beam offset (the distance between the center of transducers and the device center).
    static const float c_xdcr_offset = 0.02;

    //! %Task arguments.
    struct Arguments
    {
      //! IO device.
      std::string io_dev;
      //! Serial port baud rate.
      unsigned uart_baud;
      //! DVL position.
      std::vector<float> position;
      //! DVL orientation.
      std::vector<float> orientation;
      //! Beam angle.
      double beam_angle;
      //! Beam width.
      double beam_width;
    };

    struct Task: public DUNE::Tasks::Task
    {
      //! Water velocity message.
      IMC::WaterVelocity m_wvel;
      //! DVL altitude estimate.
      IMC::Distance m_alt_dvl;
      //! Filtered Altitude.
      IMC::Distance m_alt_flt;
      //! Beam Filter.
      Navigation::BeamFilter* m_filter;
      //! True if using serial link.
      bool m_serial;
      //! Ethernet or Serial port handle.
      IO::Handle* m_handle;
      //! Timestamp of received data.
      double m_timestamp;
      //! List of entities.
      std::vector<unsigned> m_entities;
      //! Task arguments.
      Arguments m_args;

      //! Constructor.
      //! @param[in] name task name.
      //! @param[in] ctx context.
      Task(const std::string& name, Tasks::Context& ctx):
        DUNE::Tasks::Task(name, ctx),
        m_filter(NULL),
        m_serial(false),
        m_handle(NULL),
        m_timestamp(-1)
      {
        // Define configuration parameters.
        paramActive(Tasks::Parameter::SCOPE_IDLE,
                  Tasks::Parameter::VISIBILITY_USER);

        param("IO Port - Device", m_args.io_dev)
        .defaultValue("tcp://10.0.10.255:16171")
        .description("IO port device used to communicate with the sensor."
                     "For TCP connection usage as 'tcp://IP:PORT'.");

        param("Serial Port - Baud Rate", m_args.uart_baud)
        .defaultValue("115200")
        .description("Serial port baud rate.");

        param("Device Position", m_args.position)
        .defaultValue("0.0, 0.0, 0.0")
        .units(Units::Meter)
        .size(3)
        .description("Device position relative to navigation estimation (relative to GPS sensor).");

        param("Device Orientation", m_args.orientation)
        .defaultValue("0, 0, 0")
        .units(Units::Degree)
        .size(3)
        .description("Device orientation.");

        param("Beam Angle", m_args.beam_angle)
        .defaultValue("22.5")
        .units(Units::Degree)
        .description("The angle between a transducer beam's main axis and the vertical axis of the device.");

        param("Beam Width", m_args.beam_width)
        .defaultValue("4.4")
        .units(Units::Degree)
        .description("The nominal transducer beam width.");
      }

      //! Update internal state with new parameter values.
      void
      onUpdateParameters(void)
      {
        if (!(paramChanged(m_args.beam_width)
              || paramChanged(m_args.orientation)
              || paramChanged(m_args.position)))
          return;

        // Filtered altitude.
        IMC::BeamConfig bc;
        bc.beam_width = Angles::radians(m_args.beam_width);
        bc.beam_height = bc.beam_width;

        IMC::DeviceState ds;
        ds.x = m_args.position[0];
        ds.y = m_args.position[1];
        ds.z = m_args.position[2];
        ds.phi = Angles::radians(m_args.orientation[0]);
        ds.theta = Angles::radians(m_args.orientation[1]);
        ds.psi = Angles::radians(m_args.orientation[2]);

        m_alt_dvl.location.clear();
        m_alt_dvl.location.push_back(ds);
        m_alt_dvl.beam_config.clear();
        m_alt_dvl.beam_config.push_back(bc);

        m_alt_flt.location.clear();
        m_alt_flt.location.push_back(ds);
        m_alt_flt.beam_config.clear();
        m_alt_flt.beam_config.push_back(bc);
      }

      //! Reserve entity identifiers.
      void
      onEntityReservation(void)
      {
        m_entities.clear();
        for (unsigned i = 0; i < c_beams; i++)
          m_entities.push_back(reserveEntity(String::str("%s - Beam %u", getEntityLabel(), i)));

        m_alt_flt.setSourceEntity(reserveEntity("DVL Filtered"));
      }

      //! Acquire resources.
      void
      onResourceAcquisition(void)
      {
        m_filter = new BeamFilter(this, c_beams, m_args.beam_width, c_xdcr_offset,
                                    m_args.beam_angle, m_args.position, m_args.orientation,
                                    BeamFilter::STANDARD);

        m_filter->setSourceEntities(m_entities);

        try
        {
          // Establishes TCP or Serial connection
          if (!openSocket())
          {
            m_handle = new SerialPort(m_args.io_dev, m_args.uart_baud);
            m_handle->flush();
            m_serial = true;
          }
        }
        catch (...)
        {
          throw RestartNeeded(DTR(Status::getString(CODE_COM_ERROR)), 5);
        }
      }

      //! Check if we have a TCP socket as device input argument.
      //! @return true if it is a TCP socket, false otherwise.
      bool
      openSocket(void)
      {
        char addr[128] = {0};
        unsigned port = 0;

        if (std::sscanf(m_args.io_dev.c_str(), "tcp://%[^:]:%u", addr, &port) != 2)
          return false;

        TCPSocket* sock = new TCPSocket;
        sock->connect(addr, port);
        m_handle = sock;
        m_serial = false;
        return true;
      }

      //! Release resources.
      void
      onResourceRelease(void)
      {
        Memory::clear(m_handle);
        Memory::clear(m_filter);
      }

      //! Parser to interpret incoming data through TCP connection.
      void
      parseTCP(char* data)
      {
        try {
          // Interpret received data
          auto msg = json::parse(data);

          // Status
          uint8_t status = msg["status"];
          if (status) {
            err("DVL high temperature warning!!!");
            setEntityState(IMC::EntityState::ESTA_FAULT,
                           Status::CODE_INTERNAL_ERROR);
          }

          // Water Velocity
          uint8_t validity = msg["velocity_valid"];
          if (validity) {
            setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_ACTIVE);

            m_wvel.x = (-1)*(fp64_t)msg["vx"];
            m_wvel.y = (-1)*(fp64_t)msg["vy"];
            m_wvel.z = (fp64_t)msg["vz"];
            m_wvel.validity =
                (IMC::WaterVelocity::VAL_VEL_X | IMC::WaterVelocity::VAL_VEL_Y |
                 IMC::WaterVelocity::VAL_VEL_Z);

          } else {
            setEntityState(IMC::EntityState::ESTA_NORMAL,
                           Status::CODE_NO_BOTTOM_LOCK);
            m_wvel.clear();
          }
          m_wvel.setTimeStamp(m_timestamp);
          dispatch(m_wvel, DF_KEEP_TIME);

          // Bottom Ranges
          uint8_t beam_valid;
          float distance;
          for (unsigned i = 0; i < c_beams; ++i) {
            beam_valid = msg["transducers"][i]["beam_valid"];
            distance = (float)msg["transducers"][i]["distance"];

            (beam_valid && distance > 0)
                ? m_filter->setValidity(i, IMC::Distance::DV_VALID)
                : m_filter->setValidity(i, IMC::Distance::DV_INVALID);
            m_filter->update(i, distance);
          }
          m_filter->dispatch(m_timestamp);

          // Altitude from DVL
          m_alt_dvl.value = (fp32_t)msg["altitude"];
          m_alt_dvl.validity = validity;
          m_alt_dvl.setTimeStamp(m_timestamp);
          dispatch(m_alt_dvl, DF_KEEP_TIME);

          // Filtered Altitude
          m_alt_flt.value = m_filter->get();
          m_alt_flt.validity =
              (m_alt_flt.value > 0.0 ? IMC::Distance::DV_VALID
                                     : IMC::Distance::DV_INVALID);
          m_alt_flt.setTimeStamp(m_timestamp);
          dispatch(m_alt_flt, DF_KEEP_TIME);
        }
        catch (Exception e)
        {
          debug("TCP driver parsing problem '%s'.", e.what());
          spew("\ntcp problematic parsed data = >>%s<<", Streams::sanitize(data).c_str());
        }
      }

      //! Parser to interpret incoming data through serial connection.
      void
      parseSerial(char* data)
      {
        war("Serial driver not supported yet.");
        spew("\nserial data = >>%s<<", Streams::sanitize(data).c_str());
      }

      //! Read data from sensor.
      void
      readData()
      {
        char bfr[1024] = {0};
        IMC::DevDataText data;

        size_t rv = m_handle->read(bfr, sizeof(bfr));
        if(rv <= 0)
          return;
        m_timestamp = Clock::getSinceEpoch();

        // Ensure proper string of data
        std::string s = bfr, proper;
        if(s.find("time") == std::string::npos)
          return;
        m_serial ? proper = s.substr(0, s.find("y")+4) : proper = s.substr(0, s.find("json_v1")+11);

        // Parse received data
        m_serial ? parseSerial(&proper[0]) : parseTCP(&proper[0]);

        // Log Raw Data
        data.value = proper.c_str();
        dispatch(data);
      }

      //! Main loop.
      void
      onMain(void)
      {
        while (!stopping())
        {
          if(isActive())
          {
            consumeMessages();
            if (Poll::poll(*m_handle, 0.01))
              readData();
          }
          else
          {
            waitForMessages(1.0);
            setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_IDLE);
          }
        }
      }
    };
  }
}

DUNE_TASK
