//***************************************************************************
// Copyright 2007-2026 Universidade do Porto - Faculdade de Engenharia      *
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
// Author: Luis Venâncio                                                    *
//***************************************************************************

#ifndef DUNE_UTILS_EMERGENCY_MESSAGE_HPP_INCLUDED_
#define DUNE_UTILS_EMERGENCY_MESSAGE_HPP_INCLUDED_

// ISO C++ 98 headers.
#include <string>

// DUNE headers.
#include <DUNE/Config.hpp>
#include <DUNE/Memory.hpp>
#include <DUNE/Utils/String.hpp>
#include <DUNE/Time/BrokenDown.hpp>
#include <DUNE/Math/Angles.hpp>

namespace DUNE
{
  namespace Utils
  {
    // This class generates and parses a standard emergency message.
    // The message is a string with the following format:
    // (type) (origin) hh:mm:ss / lat lon / f: fuel v: voltage c: confidence / s: state / p: progress
    // where:
    //   - type: type of message (e.g. 'T' for distress message when comms are lost, 'R' for scheduled report)
    //   - origin: system name
    //   - hh:mm:ss: time of the message
    //   - lat lon: latitude and longitude of the system
    //   - fuel: fuel level
    //   - voltage: battery voltage
    //   - confidence: confidence of the fuel level
    //   - state: vehicle state (e.g. 'B' for boot, 'C' for calibration, 'E' for error, 'X' for external control, etc.)
    //   - progress: progress of the mission (if in mission)
    class EmergencyMessage
    {
    public:
      struct DecodedPackate
      {
        char type;
        char origin[100];
        unsigned hour, minute, second;
        char location[100];
        int fuel, bat_voltage, fuel_conf;
        char vehicle_state;
        int progress;
      };

      EmergencyMessage(const std::string& system_name):
      m_system_name(system_name),
      m_gps(nullptr),
      m_fuel(-1.0),
      m_fuel_conf(-1.0),
      m_bat_voltage(-1.0),
      m_in_mission(false),
      m_progress(-1.0),
      m_vstate('?')
      {}

      ~EmergencyMessage()
      {
        Memory::clear(m_gps);
      }

      std::string
      get(const char* prefix = nullptr)
      {
        std::string pos;
        if(m_gps != nullptr)
        {
          int lat_deg;
          double lat_min;
          Math::Angles::convertDecimalToDM(Math::Angles::degrees(m_gps->lat), lat_deg, lat_min);

          int lon_deg;
          double lon_min;
          Math::Angles::convertDecimalToDM(Math::Angles::degrees(m_gps->lon), lon_deg, lon_min);

          pos = String::str("%d %f, %d %f", lat_deg, lat_min, lon_deg, lon_min);
        }
        else
        {
          pos = "Unknown Location";
        }

        std::string msg;
        Time::BrokenDown bdt;

        msg = String::str("(%s) %02u:%02u:%02u / %s / f:%d v:%d c:%d / s: %c",
                          m_system_name.c_str(),
                          bdt.hour, bdt.minutes, bdt.seconds,
                          pos.c_str(),
                          (int)m_fuel, (int) m_bat_voltage, (int)m_fuel_conf, m_vstate);

        msg += m_in_mission ? String::str(" / p:%d", (int)m_progress) : "";

        if (prefix != nullptr)
          msg = String::str("(%s) %s", prefix, msg.c_str());

        return msg;
      }

      int
      decode(const std::string& msg, DecodedPackate& dat)
      {
        // Decode the string and fill the structure.
        return std::sscanf(msg.c_str(), "(%c) (%[^)]) %02u:%02u:%02u / %[^/]/ f:%d v:%d c:%d / s: %c / p:%d", 
                              &dat.type, 
                              dat.origin, 
                              &dat.hour, 
                              &dat.minute, 
                              &dat.second,
                              dat.location,
                              &dat.fuel,
                              &dat.bat_voltage,
                              &dat.fuel_conf,
                              &dat.vehicle_state,
                              &dat.progress);
      }

      void
      update(const IMC::GpsFix* msg)
      {
        Memory::replace(m_gps, msg->clone());
      }

      void
      update(const IMC::FuelLevel* msg)
      {
        m_fuel = msg->value;
        m_fuel_conf = msg->confidence;
      }

      void
      update(const IMC::Voltage* msg)
      {
        m_bat_voltage = msg->value * 10;
      }

      void
      update(const IMC::PlanControlState* msg)
      {
        m_in_mission = msg->state == IMC::PlanControlState::PCS_EXECUTING;
        m_progress = msg->plan_progress;
      }

      void
      update(const IMC::VehicleState* msg)
      {
        switch((IMC::VehicleState::OperationModeEnum) msg->op_mode)
        {
          case IMC::VehicleState::VS_BOOT:
            m_vstate = 'B';
            break;
          case IMC::VehicleState::VS_CALIBRATION:
            m_vstate = 'C';
            break;
          case IMC::VehicleState::VS_ERROR:
            m_vstate = 'E';
            break;
          case IMC::VehicleState::VS_EXTERNAL:
            m_vstate = 'X';
            break;
          case IMC::VehicleState::VS_MANEUVER:
            m_vstate = 'M';
            break;
          case IMC::VehicleState::VS_SERVICE:
            m_vstate = 'S';
            break;
          default:
            m_vstate = '?';
        }
      }

    private:
      std::string m_system_name;
      unsigned int m_battery_id;
      IMC::GpsFix* m_gps;
      float m_fuel;
      float m_fuel_conf;
      float m_bat_voltage;
      bool m_in_mission;
      float m_progress;
      char m_vstate;
    };
  }
}

#endif
