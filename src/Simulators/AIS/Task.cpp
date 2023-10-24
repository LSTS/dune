//***************************************************************************
// Copyright 2007-2017 Universidade do Porto - Faculdade de Engenharia      *
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
// Author: Alberto Dallolio                                                 *
//***************************************************************************

#include<sstream>

// DUNE headers.
#include <DUNE/DUNE.hpp>

namespace Simulators
{
  // This task simulates AIS by receiving GpsFix information 
  // from virtual vessel obstacles and dispatching a RemoteSensorInfo message.
  namespace AIS
  {
    using DUNE_NAMESPACES;

    struct Arguments
    {
      //! Ais Info.
      std::string mmsi, sensor_class, name, callsign;
      //! Type and Cargo.
      int type_and_cargo;
      // length = A + B, width = C + D
      double size_a, size_b, size_c, size_d, draught;
      //! Ais5 Frequency.
      double ais5_freq;
      //! Ais123 Frequency.
      double ais123_freq_static, ais123_freq_moving;
        
    };

    struct Task: public DUNE::Tasks::Task
    {
      //! Ais5 Frequency.
      double m_ais5_freq;
      //! AIS message type.
      std::string m_msg_type;
      //! Vessel Sensor Class.
      std::string m_sensor_class;
      //! Vessel MMSI.
      std::string m_mmsi;
      //! Vessel callsign.
      std::string m_callsign;
      //! Vessel Name.
      std::string m_name;
      //! Navigation Status.
      int m_nav_status;
      //! Vessel type and cargo.
      int m_type_and_cargo;
      //! Size.
      double m_a, m_b, m_c, m_d, m_draught;
      //! Last Ais5 broadcast time.
      double m_last_broadc_time_ais5;
      //! Last Ais123 broadcast time - anchored.
      double m_last_broadc_time_ais123s;
      //! Last Ais123 broadcast time - under way.
      double m_last_broadc_time_ais123m;

      //! Task arguments
      Arguments m_args;

      Task(const std::string& name, Tasks::Context& ctx):
        DUNE::Tasks::Task(name, ctx),
        m_nav_status(0),
        m_type_and_cargo(0),
        m_last_broadc_time_ais5(0.0),
        m_last_broadc_time_ais123s(0.0),
        m_last_broadc_time_ais123m(0.0)
      {
        param("Ais5 Broadcast Frequency", m_args.ais5_freq)
        .units(Units::Second)
        .defaultValue("5")
        .description("Ais5 message frequency when vessel moves");

        param("Ais123 Broadcast Frequency Static", m_args.ais123_freq_static)
        .units(Units::Second)
        .defaultValue("5")
        .description("Ais123 message frequency when vessel is anchored");

        param("Ais123 Broadcast Frequency Moving", m_args.ais123_freq_moving)
        .units(Units::Second)
        .defaultValue("10")
        .description("Ais123 message frequency when vessel is moving");

        param("Sensor Class", m_args.sensor_class)
        .description("Vessel AIS Sensor Class");

        param("MMSI", m_args.mmsi)
        .description("Vessel MMSI");

        param("Callsign", m_args.callsign)
        .description("Vessel VHF Radio Callsign");

        param("Name", m_args.name)
        .description("Vessel Name");        

        param("Type and Cargo", m_args.type_and_cargo)
        .description("Vessel Type and Cargo");

        param("Size A", m_args.size_a)
        .units(Units::Meter)
        .description("Length to stern from the located AIS [m]");
     
		    param("Size B", m_args.size_b)
        .units(Units::Meter)
        .description("Length to bow from the located AIS [m]");
        
        param("Size C", m_args.size_c)
        .units(Units::Meter)
        .description("Length to port from the located AIS [m]");
        
        param("Size D", m_args.size_d)
        .units(Units::Meter)
        .description("Length to starboard from the located AIS [m]");

        param("Draught", m_args.draught)
        .units(Units::Meter)
        .description("Draught [m]");

        setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_ACTIVE);

        // Register handler routines. 
		    bind<IMC::GpsFix>(this);
      }


      void
      onUpdateParameters(void)
      {
        if(paramChanged(m_args.ais5_freq))
          m_ais5_freq = m_args.ais5_freq; 
        if(paramChanged(m_args.sensor_class))
          m_sensor_class = m_args.sensor_class;
        if(paramChanged(m_args.mmsi))
          m_mmsi = m_args.mmsi;
        if(paramChanged(m_args.callsign))
          m_callsign = m_args.callsign;  
        if(paramChanged(m_args.name))
          m_name = m_args.name;
        if(paramChanged(m_args.type_and_cargo))
          m_type_and_cargo = m_args.type_and_cargo;
        if(paramChanged(m_args.size_a))
          m_a = m_args.size_a;
        if(paramChanged(m_args.size_b))
          m_b = m_args.size_b;
        if(paramChanged(m_args.size_c))
          m_c = m_args.size_c;
        if(paramChanged(m_args.size_d))
          m_d = m_args.size_d;
        if(paramChanged(m_args.draught))
          m_draught = m_args.draught;
      }

      //! Initialize resources.
      void
      onResourceInitialization(void)
      {
        m_sensor_class = m_args.sensor_class;
        m_mmsi = m_args.mmsi;
        m_callsign = m_args.callsign;
        m_name = m_args.name;
        m_type_and_cargo = m_args.type_and_cargo;
        m_a = m_args.size_a;
        m_b = m_args.size_b;
        m_c = m_args.size_c;
        m_d = m_args.size_d;
        m_draught = m_args.draught;
      }

      void
      consume(const IMC::GpsFix* msg)
      {
        double now = Clock::get();

        // Send Ais5.
        if(msg->sog > 1 && (now > m_last_broadc_time_ais5 + m_ais5_freq))
        {
          //! Obstacle State message
          IMC::AisInfo ais_msg_5;
          ais_msg_5.msg_type = "5";
          ais_msg_5.mmsi = m_mmsi;
          ais_msg_5.callsign = m_callsign;
          ais_msg_5.name = m_name;
          ais_msg_5.type_and_cargo = m_type_and_cargo;
          ais_msg_5.a = m_a;
          ais_msg_5.b = m_b;
          ais_msg_5.c = m_c;
          ais_msg_5.d = m_d;
          ais_msg_5.draught = m_draught;

          if(msg->lat != 0.0 && msg->lon != 0.0)
          {
            //rsi.setDestination(0x8803);
            dispatch(ais_msg_5);
            spew("AIS5 - Obstacle %s, callsign %s, name %s, type&cargo %d, A %f, B %f, C %f, D %f, DRAUGHT %f",
                      ais_msg_5.mmsi.c_str(), ais_msg_5.callsign.c_str(), ais_msg_5.name.c_str(), ais_msg_5.type_and_cargo, ais_msg_5.a, ais_msg_5.b, ais_msg_5.c, ais_msg_5.d, ais_msg_5.draught);
          }

          m_last_broadc_time_ais5 = now;
        }

        if(msg->sog < 1 && (now > m_last_broadc_time_ais123s + m_args.ais123_freq_static))
        {
          // Broadcast Ais1_2_3 message always when vehicle is on.
          IMC::AisInfo ais_msg_123;
          ais_msg_123.msg_type = "1"; // or 2 or 3.
          ais_msg_123.mmsi = m_mmsi;
          ais_msg_123.speed = msg->sog*1.943844; //! Speed arrives in m/s and goes in kn.
          if(ais_msg_123.speed > 1)
            ais_msg_123.nav_status = 0; //under way using engine.
          else
            ais_msg_123.nav_status = 5; //moored.
          ais_msg_123.lat = msg->lat;
          ais_msg_123.lon = msg->lon;
          ais_msg_123.course = msg->cog;

          if(msg->lat != 0.0 && msg->lon != 0.0)
          {
            //rsi.setDestination(0x8803);
            dispatch(ais_msg_123);
            spew("AIS123 - Obstacle %s info: (lon,lat,cog,sog) %f %f %f %f",
                      ais_msg_123.mmsi.c_str(), Angles::degrees(ais_msg_123.lon), Angles::degrees(ais_msg_123.lat), Angles::degrees(ais_msg_123.course), ais_msg_123.speed);
          }

          m_last_broadc_time_ais123s = now;
        } else if(msg->sog > 1 && (now > m_last_broadc_time_ais123m + m_args.ais123_freq_moving))
        {
          // Broadcast Ais1_2_3 message always when vehicle is on.
          IMC::AisInfo ais_msg_123;
          ais_msg_123.msg_type = "1"; // or 2 or 3.
          ais_msg_123.mmsi = m_mmsi;
          ais_msg_123.speed = msg->sog*1.943844;
          if(ais_msg_123.speed > 1)
            ais_msg_123.nav_status = 0; //under way using engine.
          else
            ais_msg_123.nav_status = 5; //moored.
          ais_msg_123.lat = msg->lat;
          ais_msg_123.lon = msg->lon;
          ais_msg_123.course = msg->cog;

          if(msg->lat != 0.0 && msg->lon != 0.0)
          {
            //rsi.setDestination(0x8803);
            dispatch(ais_msg_123);
            spew("AIS123 - Obstacle %s info: (lon,lat,cog,sog) %f %f %f %f",
                      ais_msg_123.mmsi.c_str(), Angles::degrees(ais_msg_123.lon), Angles::degrees(ais_msg_123.lat), Angles::degrees(ais_msg_123.course), ais_msg_123.speed);
          }

          m_last_broadc_time_ais123m = now;
        }
      }


      void
      onMain(void)
      {

        while (!stopping())
        {
          waitForMessages(1.0);

        }
      }
    };
  }
}

DUNE_TASK
