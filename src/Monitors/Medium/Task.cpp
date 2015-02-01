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
// Author: José Braga                                                       *
//***************************************************************************

// DUNE headers.
#include <DUNE/DUNE.hpp>

namespace Monitors
{
  //! This task is responsible to monitor
  //! system's current medium.
  //!
  //! @author José Braga
  namespace Medium
  {
    using DUNE_NAMESPACES;

    //! Depth hysteresis.
    static const float c_depth_hyst = 0.1;

    //! Timeout to check presence of
    //! wet measurement sensors.
    static const float c_water_presence = 30.0;

    //! %Task arguments.
    struct Arguments
    {
      //! Wet measurements timeout.
      float water_timeout;
      //! Wet measurements threshold.
      float water_threshold;
      //! Initialization time.
      float init_time;
      //! GPS timeout.
      float gps_timeout;
      //! Depth threshold to be considered surface.
      float depth_threshold;
      //! Air Speed threshold.
      float airspeed_threshold;
      //! Altitude threshold
      float altitude_threshold;
      //! Vehicle type.
      std::string vtype;
      //! Vehicle subtype
      std::string stype;
      //! Medium Sensor Entity Label.
      std::string label_medium;
    };

    //! %Medium task.
    struct Task: public DUNE::Tasks::Periodic
    {
      //! Vehicle Medium.
      IMC::VehicleMedium m_vm;
      //! Timer to check status of water measurements.
      Time::Counter<float> m_water_status;
      //! Timer to check presence of water measurements.
      Time::Counter<float> m_water_presence;
      //! Timer to check presence of GPS fixes.
      Time::Counter<float> m_gps_status;
      //! Initialization timer.
      Time::Counter<float> m_init;
      //! GPS validation bits.
      uint16_t m_gps_val_bits;
      //! Vehicle depth.
      float m_depth;
      //! Vehicle airspeed.
      float m_airspeed;
      //! Vehicle groundspeed.
      float m_gndspeed;
      //! Medium Sensor entity id.
      unsigned m_medium_eid;
      //! Vehicle Altitude
      float m_altitude;
      //! Task arguments.
      Arguments m_args;

      Task(const std::string& name, Tasks::Context& ctx):
        Tasks::Periodic(name, ctx),
        m_depth(0),
        m_airspeed(0),
        m_gndspeed(0),
        m_altitude(0)
      {
        paramActive(Tasks::Parameter::SCOPE_IDLE,
                    Tasks::Parameter::VISIBILITY_DEVELOPER, true);

        param("Initialization Time", m_args.init_time)
        .units(Units::Second)
        .defaultValue("30.0")
        .minimumValue("20.0")
        .maximumValue("60.0")
        .description("Time to wait at beginning before assessing vehicle medium");

        param("Wet Data Timeout", m_args.water_timeout)
        .units(Units::Second)
        .defaultValue("3.0")
        .minimumValue("1.5")
        .description("No valid wet sensor data timeout");

        param("Wet Data Threshold", m_args.water_threshold)
        .defaultValue("1.0")
        .minimumValue("0.0")
        .maximumValue("5.0")
        .description("No valid wet sensor data threshold value");

        param("GPS Timeout", m_args.gps_timeout)
        .units(Units::Second)
        .defaultValue("3.0")
        .minimumValue("2.0")
        .description("No valid GPS fixes timeout");

        m_ctx.config.get("General", "Underwater Depth Threshold", "0.3", m_args.depth_threshold);

        param("Air Speed Threshold", m_args.airspeed_threshold)
        .units(Units::Meter)
        .defaultValue("12.0")
        .description("Minimum air speed necessary to consider a vehicle in air");

        param("Altitude Threshold", m_args.altitude_threshold)
        .units(Units::Meter)
        .defaultValue("1")
        .description("Minimum altitude necessary to consider a vehicle (Copter) in air");

        param("Vehicle Type", m_args.vtype)
        .defaultValue("UUV")
        .values("UUV, ASV, UAV")
        .description("Type of vehicle");

        param("Vehicle Sub-Type", m_args.stype)
        .defaultValue("FixedWing")
        .values("FixedWing, Copter")
        .description("Sub-Type of vehicle");

        param("Entity Label - Medium Sensor", m_args.label_medium)
        .defaultValue("Medium Sensor")
        .description("Entity label of 'EntityState' Medium Sensor messages");

        // GPS validity.
        m_gps_val_bits = (IMC::GpsFix::GFV_VALID_DATE |
                          IMC::GpsFix::GFV_VALID_TIME |
                          IMC::GpsFix::GFV_VALID_POS |
                          IMC::GpsFix::GFV_VALID_HACC |
                          IMC::GpsFix::GFV_VALID_VACC |
                          IMC::GpsFix::GFV_VALID_HDOP |
                          IMC::GpsFix::GFV_VALID_VDOP);

        m_water_presence.setTop(c_water_presence);

        // Register consumers.
        bind<IMC::EntityState>(this);
        bind<IMC::EstimatedState>(this);
        bind<IMC::GpsFix>(this);
        bind<IMC::Salinity>(this);
        bind<IMC::SoundSpeed>(this);
        bind<IMC::IndicatedSpeed>(this);
      }

      void
      onEntityResolution(void)
      {
        try
        {
          m_medium_eid = resolveEntity(m_args.label_medium);
        }
        catch (...)
        {
          m_medium_eid = UINT_MAX;
        }
      }

      void
      onResourceInitialization(void)
      {
        m_init.setTop(m_args.init_time);
        m_water_status.setTop(m_args.water_timeout);
        m_gps_status.setTop(m_args.gps_timeout);
      }

      void
      consume(const IMC::EntityState* msg)
      {
        if (msg->getSourceEntity() != m_medium_eid)
          return;

        m_water_presence.reset();

        if (msg->description == DTR("water"))
          m_water_status.reset();
      }

      void
      consume(const IMC::EstimatedState* msg)
      {
        if (msg->getSource() != getSystemId())
          return;

        m_depth = msg->depth;
        // For UAVs: Height is positive upwards, z is positive downwards.
        m_altitude = msg->height - msg->z;
      }

      void
      consume(const IMC::IndicatedSpeed* msg)
      {
        if (m_args.vtype != "UAV")
        {
          (void) msg;
          return;
        }

        m_airspeed = msg->value;
      }

      void
      consume(const IMC::GpsFix* msg)
      {
        if ((msg->validity & m_gps_val_bits) == m_gps_val_bits)
          m_gps_status.reset();

        m_gndspeed = msg->sog;
      }

      void
      consume(const IMC::Salinity* msg)
      {
        if (m_args.vtype == "UAV")
        {
          (void) msg;
          return;
        }

        m_water_presence.reset();

        if (msg->value >= m_args.water_threshold)
          m_water_status.reset();
      }

      void
      consume(const IMC::SoundSpeed* msg)
      {
        if (m_args.vtype == "UAV")
        {
          (void) msg;
          return;
        }

        m_water_presence.reset();

        if (msg->value >= m_args.water_threshold)
          m_water_status.reset();
      }

      //! Routine to check if we have recent wet sensor measurements.
      //! @return true if we have recent measurements, false otherwise.
      bool
      hasWaterParameters(void)
      {
        return (!m_water_status.overflow());
      }

      //! Routine to check if we have recent valid GPS measurements.
      //! @return true if we have recent fixes, false otherwise.
      bool
      isGpsAvailable(void)
      {
        return (!m_gps_status.overflow());
      }

      void
      checkWaterPresence(void)
      {
        if (m_water_presence.overflow())
        {
          m_vm.medium = IMC::VehicleMedium::VM_UNKNOWN;
          return;
        }

        if (hasWaterParameters())
          m_vm.medium = IMC::VehicleMedium::VM_WATER;
        else
          m_vm.medium = IMC::VehicleMedium::VM_GROUND;
      }

      void
      checkDepth(void)
      {
        if ((m_depth > m_args.depth_threshold) && !isGpsAvailable())
          m_vm.medium = IMC::VehicleMedium::VM_UNDERWATER;
      }

      void
      check(void)
      {
        if (m_args.vtype == "UAV")
          return;

        checkWaterPresence();
        checkDepth();
      }

      void
      task(void)
      {
        // Wait to stabilize at beginning.
        if (!m_init.overflow())
          return;

        // Initialization.
        if (getEntityState() == IMC::EntityState::ESTA_BOOT)
        {
          check();
          if (m_args.vtype == "UAV")
          {
            if (m_args.stype == "Copter")
            {
              if (m_altitude < m_args.altitude_threshold)
                m_vm.medium = IMC::VehicleMedium::VM_GROUND;
              else
                m_vm.medium = IMC::VehicleMedium::VM_AIR;
            }
            else
            {
              if (m_airspeed < m_args.airspeed_threshold)
                m_vm.medium = IMC::VehicleMedium::VM_GROUND;
              else
                m_vm.medium = IMC::VehicleMedium::VM_AIR;
            }
          }

          if (isActive())
          {
            setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_ACTIVE);
            dispatch(m_vm);
          }
          else
          {
            setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_IDLE);
          }

          return;
        }

        // No way to detect medium properly.
        if (m_water_presence.overflow() && m_args.vtype != "UAV" && isActive())
          setEntityState(IMC::EntityState::ESTA_ERROR, Status::CODE_MISSING_DATA);

        if (getEntityState() == IMC::EntityState::ESTA_ERROR)
        {
          if (!m_water_presence.overflow() && m_args.vtype != "UAV" && isActive())
            setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_ACTIVE);
          else
            setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_IDLE);
        }

        // Task state machine.
        switch (m_vm.medium)
        {
          case (IMC::VehicleMedium::VM_AIR):
            {
              if (m_args.stype == "Copter")
              {
                if (m_altitude < m_args.altitude_threshold)
                  m_vm.medium = IMC::VehicleMedium::VM_GROUND;
              }
              else {
                if (m_airspeed < m_args.airspeed_threshold && m_gndspeed < 2)
                  m_vm.medium = IMC::VehicleMedium::VM_GROUND;
              }
            }
            break;

          case (IMC::VehicleMedium::VM_GROUND):
            {
              check();
              if (m_args.stype == "Copter")
              {
                if (m_altitude > m_args.altitude_threshold)
                  m_vm.medium = IMC::VehicleMedium::VM_AIR;
              }
              else
              {
                if (m_airspeed > m_args.airspeed_threshold && m_args.vtype == "UAV")
                  m_vm.medium = IMC::VehicleMedium::VM_AIR;
              }
            }
            break;

          case (IMC::VehicleMedium::VM_WATER):
            check();
            break;

          case (IMC::VehicleMedium::VM_UNDERWATER):
            if ((m_depth < m_args.depth_threshold - c_depth_hyst) && isGpsAvailable())
              m_vm.medium = IMC::VehicleMedium::VM_WATER;
            break;

          case (IMC::VehicleMedium::VM_UNKNOWN):
            check();
            break;
        }

        if (isActive())
        {
          setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_ACTIVE);
          dispatch(m_vm);
        }
        else
        {
          setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_IDLE);
        }
      }
    };
  }
}

DUNE_TASK
