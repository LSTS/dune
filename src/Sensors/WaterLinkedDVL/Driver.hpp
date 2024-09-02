//***************************************************************************
// Copyright 2023 OceanScan - Marine Systems & Technology, Lda.             *
//***************************************************************************
// This file is subject to the terms and conditions defined in file         *
// 'LICENCE.md', which is part of this source code package.                 *
//***************************************************************************
// Author: Renato Campos                                                    *
//***************************************************************************

#ifndef SENSORS_WATERLINKED_DVL_DRIVER_HPP_INCLUDED_
#define SENSORS_WATERLINKED_DVL_DRIVER_HPP_INCLUDED_

// DUNE headers.
#include <DUNE/DUNE.hpp>
#include <memory>
// Local headers
#include "Configuration.hpp"

// JSON headers.
#include <nlohmann-json/json.hpp>

namespace Sensors
{
  namespace WaterLinkedDVL
  {
    using DUNE_NAMESPACES;
    using json = nlohmann::json;

    //! Command ticket time to live in seconds.
    static const float c_ttl = 1.0;
    //! Number of DVL beams.
    static const unsigned c_beams = 4;

    class Driver
    {
    private:
      //! Parent task
      Tasks::Task* m_parent;
      //! IO Handle
      IO::Handle* m_io;
      //! True if using serial link.
      bool m_serial;
      //! Timestamp of received data.
      double m_timestamp;
      //! Message fragment buffer.
      std::string m_msg_frag;
      //! Config
      Configuration m_config;
      //! Command ticket.
      std::string m_cmd_ticket;
      //! Last Status
      uint8_t m_status;
      //! DVL altitude estimate.
      IMC::Distance m_alt_dvl;
      //! Filtered Altitude.
      IMC::Distance m_alt_flt;
      //! Water velocity message.
      IMC::GroundVelocity m_gvel;
      //! Beam Filter.
      Navigation::BeamFilter* m_filter;
      //! Bottom lock.
      bool m_bottom_lock;
    public:
      Driver(Tasks::Task* task, IMC::Distance& alt_dvl, IMC::Distance& alt_flt) :
        m_parent(task),
        m_serial(false),
        m_timestamp(-1),
        m_status(0),
        m_alt_dvl(alt_dvl),
        m_alt_flt(alt_flt),
        m_filter(nullptr)
      {
      }

      void
      setBeamFilter(Navigation::BeamFilter* beam_filter)
      {
        m_filter = beam_filter;
      }

      void
      setIOHandle(IO::Handle* io, bool is_serial)
      {
        m_io = io;
        m_serial = is_serial;
      }

      //! Send command to device.
      //! @param[in] cmd command type.
      //! @param[in] param_name parameter name, only used for "set_config" command.
      //!                       If empty only cmd is used.
      //! @param[in] param_value parameter value, only used for "set_config" command.
      //!                       If empty only cmd is used.
      void
      sendCommand(const std::string cmd, const std::string param_name = "", const std::string param_value = "")
      {
        if (!m_io)
          return;

        std::string bfr;
        if (!m_serial)
        {
          if (param_name.empty() || param_value.empty())
            bfr = String::str("{\"command\":\"%s\"}", cmd.c_str());
          else
            bfr = String::str("{\"command\":\"%s\",\"parameters\":{\"%s\":%s}}", cmd.c_str(), param_name.c_str(),
                              param_value.c_str());
        }
        else
        {
          m_parent->war("Serial commands not implemented");
          return;
        }

        m_parent->spew("Sending: %s", bfr.c_str());
        m_io->writeString(bfr.c_str());

        // Wait for response
        if (!waitResponse(cmd))
          m_parent->war("%s failure (timeout)", cmd.c_str());
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

      //! Read data from sensor.
      //! @return true if data is read, false otherwise.
      bool
      readData()
      {
        if (!Poll::poll(*m_io, 0.01))
          return false;

        try
        {
          char bfr[2000] = { 0 };
          IMC::DevDataText data;

          size_t rv = m_io->read(bfr, sizeof(bfr));
          if (rv <= 0)
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
            m_parent->dispatch(data);
          }
        }
        catch (const std::exception& e)
        {
          m_parent->err("%s", e.what());
          return false;
        }

        return true;
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
            m_parent->war("Unknown TCP message.");
        }
        catch (Exception& e)
        {
          m_parent->err("TCP driver parsing problem '%s'.", e.what());
          m_parent->spew("\ntcp problematic parsed data = >>%s<<", Streams::sanitize(data).c_str());
        }
      }

      uint8_t
      getLastStatus()
      {
        return m_status;
      }

      bool
      getBottomLock()
      {
        return m_bottom_lock;
      }

      //! Parse velocity-and-transducer report.
      //! @param[in] msg parsed JSON data.
      void
      parseTCPReport(const nlohmann::json& msg)
      {
        if (!m_filter)
          return;

        // Status
        m_status = msg["status"];

        // Water Velocity
        uint8_t validity = msg["velocity_valid"];
        if (validity)
        {
          m_gvel.x = (fp64_t)msg["vx"];
          m_gvel.y = (fp64_t)msg["vy"];
          m_gvel.z = (fp64_t)msg["vz"];
          m_gvel.validity =
              (IMC::GroundVelocity::VAL_VEL_X | IMC::GroundVelocity::VAL_VEL_Y | IMC::GroundVelocity::VAL_VEL_Z);
          m_bottom_lock = true;
        }
        else
        {
          m_bottom_lock = false;
          m_gvel.clear();
        }
        m_gvel.setTimeStamp(m_timestamp);
        m_parent->dispatch(m_gvel, DF_KEEP_TIME);

        // Bottom Ranges
        uint8_t beam_valid;
        float distance;
        for (unsigned i = 0; i < c_beams; ++i)
        {
          beam_valid = msg["transducers"][i]["beam_valid"];
          distance = (float)msg["transducers"][i]["distance"];

          m_filter->setValidity(i, (beam_valid && distance > 0) ? IMC::Distance::DV_VALID : IMC::Distance::DV_INVALID);
          m_filter->update(i, distance);
        }
        m_filter->dispatch(m_timestamp);

        // Altitude from DVL
        m_alt_dvl.value = (fp32_t)msg["altitude"];
        m_alt_dvl.validity = validity;
        m_alt_dvl.setTimeStamp(m_timestamp);
        m_parent->dispatch(m_alt_dvl, DF_KEEP_TIME);

        // Filtered Altitude
        m_alt_flt.value = m_filter->get();
        m_alt_flt.validity = m_alt_flt.value > 0.0 ? IMC::Distance::DV_VALID : IMC::Distance::DV_INVALID;
        m_alt_flt.setTimeStamp(m_timestamp);
        m_parent->dispatch(m_alt_flt, DF_KEEP_TIME);
      }

      //! Parse Dead Reckoning report.
      void
      parseTCPDeadReckoning(nlohmann::json& msg)
      {
        m_status = msg["status"];
        // Dead reckoning is not implemented
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
          m_parent->err("Configuration response error: %s", s.c_str());
        }
      }

      //! Parser to interpret incoming data through serial connection.
      //! @param[in] data JSON data string.
      void
      parseSerial(std::string& data)
      {
        m_parent->war("Serial driver not supported yet.");
        m_parent->spew("\nSerial data = >>%s<<", Streams::sanitize(data).c_str());
      }

      //! Check for message fragments.
      //! @param[in] list message list.
      void
      checkFragment(std::vector<std::string>& list)
      {
        if (!m_msg_frag.empty() && list.front().front() != '{')
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

      //! Get device configuration.
      void
      getConfig(void)
      {
        m_parent->debug("Getting device config");
        sendCommand("get_config");
      }

      //! Enable or disable device acoustics.
      //! @param[in] enable true to enable, false to disable.
      void
      setAcoustics(const bool enable)
      {
        if (m_config.acoustic_enabled == enable)
          return;
        m_parent->debug("%s acoustics", enable ? "Enabling" : "Disabling");
        sendCommand("set_config", "acoustic_enabled", enable ? "true" : "false");
        getConfig();
      }

      //! Enable or disable device acoustics.
      //! @param[in] enable true to enable, false to disable.
      void
      setSoundSpeed(double sound_speed)
      {
        if (m_config.speed_of_sound == sound_speed || m_io == nullptr)
          return;
        m_parent->debug("Setting sound speed");
        sendCommand("set_config", "speed_of_sound", String::str("%.2f", sound_speed));
        getConfig();
      }

      //! Set range mode.
      //! Modes table:
      //!   Mode    Min alt (m)   Max alt (m)
      //!   0       0.05          0.6
      //!   1       0.3           3.0
      //!   2       1.5           14
      //!   3       7.7           36
      //!   4       15            max
      //! @param[in] spec Range specifier option:
      //! auto  - The DVL will search for bottom lock in it's full operational area (Default)
      //! =a    - The DVL is locked to range mode a where a is a number from 0-4
      //! a<=b  - The DVL will search for bottom lock within range mode a and b
      void
      setRange(const std::string spec)
      {
        if (m_config.range_mode == spec)
          return;

        sendCommand("set_config", "range_mode", spec);
        getConfig();
      }

      //! Set device rotation angle.
      //! @param[in] angle mounting rotation angle in degrees.
      void
      setRotation(const double angle)
      {
        if (m_config.mounting_rotation_offset == angle)
          return;
        m_parent->debug("Setting rotation angle");
        sendCommand("set_config", "mounting_rotation_offset", String::str("%.2f", angle));
        getConfig();
      }

      Configuration&
      getLastConfig()
      {
        return m_config;
      }
    };
  }
}

#endif
