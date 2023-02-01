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
    //! Command ticket time to live in seconds.
    static const float c_ttl = 1.0;

    //! %Task arguments.
    struct Arguments
    {
      //! IO device.
      std::string io_dev;
      //! Power channels.
      std::vector<std::string> pwr_channels;
      //! Type of acoustics activation/deactivation.
      std::string type_activation;
      //! DVL position.
      std::vector<float> position;
      //! DVL orientation.
      std::vector<float> orientation;
      //! Beam angle.
      double beam_angle;
      //! Beam width.
      double beam_width;
    };

    struct Task: public Hardware::BasicDeviceDriver
    {
      //! Water velocity message.
      IMC::GroundVelocity m_gvel;
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
      //! Message fragment buffer.
      std::string m_msg_frag;
      //! Timestamp of received data.
      double m_timestamp;
      //! List of entities.
      std::vector<unsigned> m_entities;
      //! Bottom lock.
      bool m_bottom_lock;
      //! Command ticket.
      std::string m_cmd_ticket;
      //! Medium handler.
      DUNE::Monitors::MediumHandler m_hand;
      //! Task arguments.
      Arguments m_args;
      //! Device configuration.
      struct Configuration
      {
        double speed_of_sound;
        bool acoustic_enabled;
        bool dark_mode_enabled;
        double mounting_rotation_offset;
        std::string range_mode;
      }m_config;

      //! Constructor.
      //! @param[in] name task name.
      //! @param[in] ctx context.
      Task(const std::string& name, Tasks::Context& ctx):
        Hardware::BasicDeviceDriver(name, ctx),
        m_filter(NULL),
        m_serial(false),
        m_handle(NULL),
        m_timestamp(-1),
        m_bottom_lock(false)
      {
        param("IO Port - Device", m_args.io_dev)
        .defaultValue("")
        .description("IO device URI in the form \"tcp://ADDRESS:PORT\" "
                     "or \"uart://DEVICE:BAUD\".");

        param("Power Channel - Names", m_args.pwr_channels)
        .defaultValue("")
        .description("Device's power channels");

        param("Acoustics Activation", m_args.type_activation)
        .values("Water, Always")
        .defaultValue("Always")
        .description("Operator is able to control acoustics");

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

        bind<IMC::VehicleMedium>(this);
      }

      //! Update internal state with new parameter values.
      void
      onUpdateParameters(void)
      {
        if (paramChanged(m_args.pwr_channels))
        {
          clearPowerChannelNames();
          for (std::string pc : m_args.pwr_channels)
            addPowerChannelName(pc);
        }

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

      //! Restart device when idle
      void
      onIdle(void) override
      {
        requestActivation();
      }

      //! Try to connect to the device.
      //! @return true if connection was established, false otherwise.
      bool
      onConnect() override
      {
        m_handle = openSocketTCP(m_args.io_dev);

        if (m_handle == nullptr)
        {
          m_handle = openUART(m_args.io_dev);
          m_serial = true;
        }

        return m_handle != nullptr;
      }

      //! Disconnect from device.
      void
      onDisconnect() override
      {
        Memory::clear(m_handle);
        Memory::clear(m_filter);
      }

      //! Initialize device.
      void
      onInitializeDevice() override
      {
        // Initialize filter
        Memory::clear(m_filter);
        m_filter = new BeamFilter(this, c_beams, m_args.beam_width, c_xdcr_offset,
                                    m_args.beam_angle, m_args.position, m_args.orientation,
                                    BeamFilter::CLOCKWISE);

        m_filter->setSourceEntities(m_entities);

        // Initialize device configuration
        getConfig();
        setRotation(m_args.orientation[2]);
        if (m_args.type_activation == "Always")
          setAcoustics(true);
      }

      void
      consume(const IMC::VehicleMedium* msg)
      {
        m_hand.update(msg);

        if (m_args.type_activation != "Water")
          return;

        if (!isActive())
          return;
        
        if (!m_hand.isKnown())
          setAcoustics(false);
        else if (m_hand.outWater())
          setAcoustics(false);
        else
          setAcoustics(true);
      }

      //! Parser for incoming TPC data.
      //! @param[in] data JSON data string
      void
      parseTCP(std::string& data)
      {
        try 
        {
          // Interpret received data
          auto msg = json::parse(data);

          if (data.find("time") != std::string::npos)
            parseTCPReport(msg);
          else if (data.find("ts") != std::string::npos)
            parseTCPDeadReckoning(msg);
          else if (data.find("response_to") != std::string::npos)
            parseTCPConfig(msg);
          else
            war("Unknown TCP message.");
        }
        catch (Exception e)
        {
          err("TCP driver parsing problem '%s'.", e.what());
          spew("\ntcp problematic parsed data = >>%s<<", Streams::sanitize(data).c_str());
        }
      }

      //! Parse velocity-and-transducer report.
      //! @param[in] msg parsed JSON data.
      void
      parseTCPReport(const nlohmann::json& msg)
      {
        if (!m_filter)
          return;
        
        // Status
        uint8_t status = msg["status"];
        checkStatus(status);

        // Water Velocity
        uint8_t validity = msg["velocity_valid"];
        if (validity) 
        {
          m_gvel.x = (fp64_t)msg["vx"];
          m_gvel.y = (fp64_t)msg["vy"];
          m_gvel.z = (fp64_t)msg["vz"];
          m_gvel.validity = (IMC::WaterVelocity::VAL_VEL_X | 
                             IMC::WaterVelocity::VAL_VEL_Y |
                             IMC::WaterVelocity::VAL_VEL_Z);
          m_bottom_lock = true;
        } 
        else 
        {
          m_bottom_lock = false;
          m_gvel.clear();
        }
        m_gvel.setTimeStamp(m_timestamp);
        dispatch(m_gvel, DF_KEEP_TIME);

        // Bottom Ranges
        uint8_t beam_valid;
        float distance;
        for (unsigned i = 0; i < c_beams; ++i) 
        {
          beam_valid = msg["transducers"][i]["beam_valid"];
          distance = (float)msg["transducers"][i]["distance"];

          m_filter->setValidity(i, (beam_valid && distance > 0) ? 
                                    IMC::Distance::DV_VALID : 
                                    IMC::Distance::DV_INVALID);
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
        m_alt_flt.validity = m_alt_flt.value > 0.0 ? IMC::Distance::DV_VALID
                                                   : IMC::Distance::DV_INVALID;
        m_alt_flt.setTimeStamp(m_timestamp);
        dispatch(m_alt_flt, DF_KEEP_TIME);
      }

      //! Parse Dead Reckoning report.
      void
      parseTCPDeadReckoning(nlohmann::json& msg)
      {
        // Status
        uint8_t status = msg["status"];
        checkStatus(status);
      }

      //! Parse configuration response.
      //! @param[in] msg parsed JSON data.
      void
      parseTCPConfig(const nlohmann::json& msg)
      {
        if ((std::string)msg["response_to"] == "get_config")
        {
          m_config.speed_of_sound = (double)msg["result"]["speed_of_sound"];
          m_config.acoustic_enabled = (bool)msg["result"]["acoustic_enabled"];
          m_config.dark_mode_enabled = (bool)msg["result"]["dark_mode_enabled"];
          m_config.mounting_rotation_offset = (double)msg["result"]["mounting_rotation_offset"];
          m_config.range_mode = (std::string)msg["result"]["range_mode"];
        }

        if (m_cmd_ticket.empty())
          return;
        
        if ((bool)msg["success"])
        {
          if ((std::string)msg["response_to"] == m_cmd_ticket)
            m_cmd_ticket.clear();
        }
        else
        {
          std::string s(msg["error_message"]);
          err("Configuration response error: %s", s.c_str());
        }
      }

      //! Parser to interpret incoming data through serial connection.
      //! @param[in] data JSON data string.
      void
      parseSerial(std::string& data)
      {
        war("Serial driver not supported yet.");
        spew("\nSerial data = >>%s<<", Streams::sanitize(data).c_str());
      }

      //! Read data from sensor.
      //! @return true if data is read, false otherwise.
      bool
      readData()
      {
        if (!Poll::poll(*m_handle, 0.01))
          return false;
        
        char bfr[2000] = {0};
        IMC::DevDataText data;

        size_t rv = m_handle->read(bfr, sizeof(bfr));
        if(rv <= 0)
          return false;
        bfr[rv] = '\0';

        m_timestamp = Clock::getSinceEpoch();

        // Ensure proper string of data
        std::vector<std::string> proper;
        String::split(bfr, "\r\n", proper);
        checkFragment(proper);
        for (auto p : proper)
        {
          if (!m_serial)
            parseTCP(p);
          else
            parseSerial(p);

          // Log Raw Data
          data.value = p.c_str();
          dispatch(data);
        }

        return true;
      }

      //! Check for message fragments.
      //! @param[in] list message list.
      void
      checkFragment(std::vector<std::string>& list)
      {
        if (!m_msg_frag.empty() && 
            list.front().front() != '{')
        {
          list.front() = m_msg_frag + list.front();
          m_msg_frag.clear();
        }
        if (list.back().find("}", list.back().find("json_v")) == std::string::npos)
        {
          m_msg_frag = list.back();
          list.pop_back();
        }
      }

      //! Check for device faults.
      //! @param[in] status device status (0 -> OK; 1 -> fault).
      void
      checkStatus(const bool status)
      {
        if (status) 
        {
          if (getEntityState() > IMC::EntityState::ESTA_NORMAL)
            return;
          
          // Disable acoustics until recovery
          setAcoustics(false);
          std::stringstream ss;
          ss << Status::getString(CODE_INTERNAL_ERROR)
             << " - DVL temperature too high"
             << " | Acoustics: Off";
          
          err("%s", ss.str().c_str());
          setEntityState(IMC::EntityState::ESTA_FAULT, ss.str());
        }
        else
        {
          if (getEntityState() < IMC::EntityState::ESTA_FAULT)
            return;

          // Recovered from fault
          setAcoustics(true);
          displayConfig();
        }
      }

      //! Get device configuration.
      void
      getConfig(void)
      {
        sendCommand("get_config");
      }

      //! Enable or disable device acoustics. 
      //! @param[in] enable true to enable, false to disable.
      void
      setAcoustics(const bool enable)
      {
        if (m_config.acoustic_enabled == enable)
          return;
        
        sendCommand("set_config", "acoustic_enabled", 
                    enable ? "true" : "false");
        getConfig();
      }

      //! Set device sound speed. 
      //! @param[in] sound_speed sound speed in m/s.
      void
      setSoundSpeed(const double sound_speed)
      {
        if (m_config.speed_of_sound == sound_speed)
          return;

        std::stringstream ss;
        ss << sound_speed;
        sendCommand("set_config", "speed_of_sound", ss.str());
        getConfig();
      }

      //! Set device rotation angle. 
      //! @param[in] angle mounting rotation angle in degrees.
      void
      setRotation(const double angle)
      {
        if (m_config.mounting_rotation_offset == angle)
          return;

        std::stringstream ss;
        ss << angle;
        sendCommand("set_config", "mounting_rotation_offset", ss.str());
        getConfig();
      }

      //! Send command to device. 
      //! @param[in] cmd command type.
      //! @param[in] param_name parameter name, only used for "set_config" command. 
      //!                       If empty only cmd is used.
      //! @param[in] param_value parameter value, only used for "set_config" command. 
      //!                       If empty only cmd is used.
      void
      sendCommand(const std::string cmd, const std::string param_name = "", 
                  const std::string param_value = "")
      {
        if (!m_handle)
          return;
        
        std::string bfr;
        if (!m_serial)
        {
          if (param_name.empty() || param_value.empty())
            bfr = String::str("{\"command\":\"%s\"}", cmd.c_str());
          else
            bfr = String::str("{\"command\":\"%s\",\"parameters\":{\"%s\":%s}}", 
                              cmd.c_str(),
                              param_name.c_str(),
                              param_value.c_str());
        }
        else
        {
          war("Serial commands not implemented");
          return;
        }
        
        spew("Sending: %s", bfr.c_str());
        m_handle->writeString(bfr.c_str());

        // Wait for response
        if (!waitResponse(cmd))
          war("%s failure (timeout)", cmd.c_str());
      }

      //! Wait command response
      //! @return true if successful response, false otherwise
      bool
      waitResponse(const std::string& cmd)
      {
        m_cmd_ticket = cmd;
        double ttl = Clock::get() + c_ttl;
        while (Clock::get() < ttl)
        {
          readData();
          if (m_cmd_ticket.empty())
            return true;
        }

        m_cmd_ticket.clear();
        return false;
      }

      //! Get data from device.
      //! @return true if data was received, false otherwise.
      bool
      onReadData() override
      {
        bool recv = readData();
        displayConfig();

        return recv;
      }

      //! Set entity state description.
      void
      displayConfig(void)
      {
        std::string description;
        description = String::str("%s - Acoustics: %s | Sound Speed: %.1f m/s", 
                                  Status::getString(m_bottom_lock ? CODE_ACTIVE 
                                                                  : CODE_NO_BOTTOM_LOCK),
                                  m_config.acoustic_enabled ? "On" : "Off",
                                  m_config.speed_of_sound);
        setEntityState(getEntityState(), description);
      }
    };
  }
}

DUNE_TASK
