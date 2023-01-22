//***************************************************************************
// Copyright 2007-2022 Universidade do Porto - Faculdade de Engenharia      *
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
// Author: João Fortuna                                                     *
// Author: Maria Costa                                                      *
//***************************************************************************

// DUNE headers.
#include <DUNE/DUNE.hpp>

namespace Monitors
{
  //! This task is responsible to monitor system's current medium.
  //!
  //! @author José Braga
  namespace Medium
  {
    using DUNE_NAMESPACES;

    //! Depth hysteresis.
    static const float c_depth_hyst = 0.1;
    //! Timeout to check presence of wet measurement sensors.
    static const float c_water_presence = 30.0;

    //! %Task arguments.
    struct Arguments
    {
      //! Wet measurements timeout.
      float water_timeout;
      //! Salinity threshold.
      float salinity_lm;
      //! Sound speed threshold.
      float sspeed_lm;
      //! Initialization time.
      float init_time;
      //! GPS timeout.
      float gps_timeout;
      //! Depth threshold to be considered surface.
      float depth_lm;
      //! Air Speed threshold.
      float airspeed_lm;
      //! Ground Speed threshold.
      float gndspeed_lm;
      //! Altitude threshold
      float altitude_lm;
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
      Time::Counter<float> m_in_water;
      //! Timer to check if we're capable of detecting water.
      Time::Counter<float> m_wet_devs;
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
        m_medium_eid(UINT_MAX),
        m_altitude(0)
      {
        paramActive(Tasks::Parameter::SCOPE_IDLE,
                    Tasks::Parameter::VISIBILITY_DEVELOPER, true);

        param("Initialization Time", m_args.init_time)
        .units(Units::Second)
        .defaultValue("20.0")
        .minimumValue("5.0")
        .maximumValue("60.0")
        .description("Time to wait at beginning before assessing vehicle medium");

        param("Wet Data Timeout", m_args.water_timeout)
        .units(Units::Second)
        .defaultValue("3.0")
        .minimumValue("1.5")
        .description("No valid wet sensor data timeout");

        param("Salinity Threshold", m_args.salinity_lm)
        .defaultValue("1.0")
        .minimumValue("0.0")
        .maximumValue("5.0")
        .description("No valid salinity threshold value");

        param("Sound Speed Threshold", m_args.sspeed_lm)
        .defaultValue("1000.0")
        .minimumValue("0.0")
        .maximumValue("2000.0")
        .description("No valid sound speed threshold value");

        param("GPS Timeout", m_args.gps_timeout)
        .units(Units::Second)
        .defaultValue("3.0")
        .minimumValue("2.0")
        .description("No valid GPS fixes timeout");

        m_ctx.config.get("General", "Underwater Depth Threshold", "0.3", m_args.depth_lm);

        param("Air Speed Threshold", m_args.airspeed_lm)
        .units(Units::MeterPerSecond)
        .defaultValue("12.0")
        .minimumValue("0.0")
        .description("Minimum air speed necessary to consider a vehicle in air");

        param("Ground Speed Threshold", m_args.gndspeed_lm)
        .units(Units::MeterPerSecond)
        .defaultValue("2.0")
        .minimumValue("0.0")
        .description("Minimum ground speed necessary to consider a vehicle has landed");

        param("Altitude Threshold", m_args.altitude_lm)
        .units(Units::Meter)
        .defaultValue("1")
        .description("Minimum altitude necessary to consider a vehicle (Copter) in air");

        param("Vehicle Type", m_args.vtype)
        .defaultValue("UUV")
        .values("UUV, ASV, UAV")
        .description("Type of vehicle");

        param("Vehicle Sub-Type", m_args.stype)
        .defaultValue("None")
        .values("None, FixedWing, Copter")
        .description("Sub-Type of vehicle, if applicable");

        param("Entity Label - Medium Sensor", m_args.label_medium)
        .defaultValue("Medium Sensor")
        .description("Entity label of 'EntityState' Medium Sensor messages");

        // GPS validity.
        m_gps_val_bits = (IMC::GpsFix::GFV_VALID_DATE | IMC::GpsFix::GFV_VALID_TIME |
                          IMC::GpsFix::GFV_VALID_HACC | IMC::GpsFix::GFV_VALID_VACC |
                          IMC::GpsFix::GFV_VALID_HDOP | IMC::GpsFix::GFV_VALID_VDOP |
                          IMC::GpsFix::GFV_VALID_POS);

        m_wet_devs.setTop(c_water_presence);

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
        m_in_water.setTop(m_args.water_timeout);
        m_gps_status.setTop(m_args.gps_timeout);
      }

      void
      consume(const IMC::EntityState* msg)
      {
        if (msg->getSource() != getSystemId())
          return;

        if (msg->getSourceEntity() != m_medium_eid)
          return;

        m_wet_devs.reset();

        if (msg->description == DTR("water")) {
          m_in_water.reset();
          debug(DTR("Water detected using medium sensor."));
        }
      }

      void
      consume(const IMC::EstimatedState* msg)
      {
        if (msg->getSource() != getSystemId())
          return;

        m_depth = msg->depth;
        // For UAVs: Height is positive upwards, z is positive downwards.
        m_altitude = msg->alt;
      }

      void
      consume(const IMC::IndicatedSpeed* msg)
      {
        if (!isUAV())
          return;

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
        if (isUAV())
          return;

        m_wet_devs.reset();

        if (msg->value >= m_args.salinity_lm) {
          m_in_water.reset();
          debug(DTR("Water detected using salinity threshold."));
        }
      }

      void
      consume(const IMC::SoundSpeed* msg)
      {
        if (isUAV())
          return;

        m_wet_devs.reset();

        if (msg->value >= m_args.sspeed_lm) {
          m_in_water.reset();
          debug(DTR("Water detected using sound speed sensor."));
        }
      }

      //! Routine to check if we have recent wet sensor measurements.
      //! @return true if we have recent measurements, false otherwise.
      bool
      inWater(void)
      {
        return (!m_in_water.overflow());
      }

      //! Routine to check if we have recent valid GPS measurements.
      //! @return true if we have recent fixes, false otherwise.
      bool
      isGpsAvailable(void)
      {
        return (!m_gps_status.overflow());
      }

      //! Check presence of water sensors.
      void
      checkWater(void)
      {
        spew("Water check.");

        if (m_wet_devs.overflow())
        {
          m_vm.medium = IMC::VehicleMedium::VM_UNKNOWN;
          return;
        }

        if (inWater()) {
          m_vm.medium = IMC::VehicleMedium::VM_WATER;
          spew("Vehicle is in water.");
        }
        else
          m_vm.medium = IMC::VehicleMedium::VM_GROUND;
      }

      //! Check data input. Only for water going vehicles.
      void
      checkUUV(void)
      {
        if (isUAV())
          return;

        if (!waterMediumCheck())
          return;

        checkWater();

        if ((m_depth > m_args.depth_lm) && !isGpsAvailable())
          m_vm.medium = IMC::VehicleMedium::VM_UNDERWATER;
      }

      //! Check data input. Only for aerial vehicles.
      void
      checkUAV(void)
      {
        if (!isUAV())
          return;

        if (isCopter())
        {
          if (m_altitude < m_args.altitude_lm)
            m_vm.medium = IMC::VehicleMedium::VM_GROUND;
          else
            m_vm.medium = IMC::VehicleMedium::VM_AIR;
        }
        else
        {
          if (m_airspeed < m_args.airspeed_lm && m_gndspeed < m_args.gndspeed_lm)
            m_vm.medium = IMC::VehicleMedium::VM_GROUND;

          if (m_airspeed > m_args.airspeed_lm && m_altitude > m_args.altitude_lm)
            m_vm.medium = IMC::VehicleMedium::VM_AIR;
        }
      }

      //! Check if vehicle is a copter.
      //! @return true if vehicle is a UAV of sub-type Copter.
      bool
      isCopter(void)
      {
        if (isUAV() && m_args.stype == "Copter")
          return true;

        return false;
      }

      //! Check if vehicle is a UAV.
      //! @return true if vehicle is a UAV.
      bool
      isUAV(void)
      {
        if (m_args.vtype == "UAV")
          return true;

        return false;
      }

      //! Check water medium presence.
      //! @return true if water medium can be detected or if it can be ignored.
      bool
      waterMediumCheck(void)
      {
        if (isUAV())
          return true;

        // No way to detect medium properly.
        if (isActive() && m_wet_devs.overflow())
        {

          debug("No medium data has been received for %f seconds.", m_wet_devs.getElapsed());
          m_vm.medium = IMC::VehicleMedium::VM_UNKNOWN;
          dispatch(m_vm);
          setEntityState(IMC::EntityState::ESTA_ERROR, Status::CODE_MISSING_DATA);
          return false;
        }

        spew("Either not active or there was an overflow.");

        return true;
      }

      //! Update state machine.
      void
      updateStateMachine(void)
      {
        // Task state machine.
        switch (m_vm.medium)
        {
          case (IMC::VehicleMedium::VM_AIR):
            checkUAV();
            break;

          case (IMC::VehicleMedium::VM_GROUND):
            checkUUV();
            checkUAV();
            break;

          case (IMC::VehicleMedium::VM_WATER):
            checkUUV();
            break;

          case (IMC::VehicleMedium::VM_UNDERWATER):
            if ((m_depth < m_args.depth_lm - c_depth_hyst) && isGpsAvailable())
              m_vm.medium = IMC::VehicleMedium::VM_WATER;
            break;

          case (IMC::VehicleMedium::VM_UNKNOWN):
            checkUUV();
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

      void
      task(void)
      {
        // Wait to stabilize at beginning.
        if (!m_init.overflow())
          return;

        updateStateMachine();
      }
    };
  }
}

DUNE_TASK
