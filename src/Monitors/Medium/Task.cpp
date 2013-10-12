//***************************************************************************
// Copyright 2007-2013 Universidade do Porto - Faculdade de Engenharia      *
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
      //! Depth threshold.
      float depth_threshold;
      //! Vehicle type.
      std::string vtype;
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
      //! Task arguments.
      Arguments m_args;

      Task(const std::string& name, Tasks::Context& ctx):
        Tasks::Periodic(name, ctx)
      {
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
        .defaultValue("5.0")
        .minimumValue("3.0")
        .description("No valid wet sensor data threshold value");

        param("GPS Timeout", m_args.gps_timeout)
        .units(Units::Second)
        .defaultValue("3.0")
        .minimumValue("2.0")
        .description("No valid GPS fixes timeout");

        param("Underwater Depth Threshold", m_args.depth_threshold)
        .units(Units::Meter)
        .defaultValue("0.3")
        .minimumValue("0.2")
        .maximumValue("0.8")
        .description("Minimum depth necessary to consider a vehicle underwater");

        param("Vehicle Type", m_args.vtype)
        .defaultValue("UUV")
        .values("UUV, ASV, UAV")
        .description("Type of vehicle");

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
        bind<IMC::Conductivity>(this);
        bind<IMC::EstimatedState>(this);
        bind<IMC::GpsFix>(this);
        bind<IMC::Salinity>(this);
        bind<IMC::SoundSpeed>(this);
      }

      void
      onResourceInitialization(void)
      {
        // Initialize timers.
        m_init.setTop(m_args.init_time);
        m_water_status.setTop(m_args.water_timeout);
        m_gps_status.setTop(m_args.gps_timeout);
      }

      void
      consume(const IMC::Conductivity* msg)
      {
        m_water_presence.reset();

        if (msg->value >= m_args.water_threshold)
          m_water_status.reset();
      }

      void
      consume(const IMC::EstimatedState* msg)
      {
        m_depth = msg->depth;
      }

      void
      consume(const IMC::GpsFix* msg)
      {
        if ((msg->validity & m_gps_val_bits) == m_gps_val_bits)
          m_gps_status.reset();
      }

      void
      consume(const IMC::Salinity* msg)
      {
        m_water_presence.reset();

        if (msg->value >= m_args.water_threshold)
          m_water_status.reset();
      }

      void
      consume(const IMC::SoundSpeed* msg)
      {
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
      task(void)
      {
        // Wait to stabilize at beginning.
        if (!m_init.overflow())
          return;

        // Initialization.
        if (getEntityState() == IMC::EntityState::ESTA_BOOT)
        {
          if (!hasWaterParameters() && isGpsAvailable())
            m_vm.medium = IMC::VehicleMedium::VM_GROUND;
          if (hasWaterParameters() && isGpsAvailable())
            m_vm.medium = IMC::VehicleMedium::VM_WATER;
          if (hasWaterParameters() && !isGpsAvailable())
            m_vm.medium = IMC::VehicleMedium::VM_UNDERWATER;

          setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_ACTIVE);
          dispatch(m_vm);

          return;
        }

        // No way to detect medium properly.
        if (m_water_presence.overflow() && m_args.vtype != "UAV")
        {
          setEntityState(IMC::EntityState::ESTA_ERROR, Status::CODE_MISSING_DATA);
          m_vm.medium = IMC::VehicleMedium::VM_UNKNOWN;
          dispatch(m_vm);
          return;
        }

        if (getEntityState() == IMC::EntityState::ESTA_ERROR)
        {
          if (!m_water_presence.overflow() && m_args.vtype != "UAV")
            setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_ACTIVE);
        }

        // Task state machine.
        switch (m_vm.medium)
        {
          case (IMC::VehicleMedium::VM_AIR):
            break;

          case (IMC::VehicleMedium::VM_GROUND):
            if (hasWaterParameters())
              m_vm.medium = IMC::VehicleMedium::VM_WATER;
            break;

          case (IMC::VehicleMedium::VM_WATER):
            if ((m_depth > m_args.depth_threshold) && !isGpsAvailable())
              m_vm.medium = IMC::VehicleMedium::VM_UNDERWATER;
            if (!hasWaterParameters())
              m_vm.medium = IMC::VehicleMedium::VM_GROUND;
            break;

          case (IMC::VehicleMedium::VM_UNDERWATER):
            if ((m_depth < m_args.depth_threshold - c_depth_hyst) && isGpsAvailable())
              m_vm.medium = IMC::VehicleMedium::VM_WATER;
            break;
        }

        dispatch(m_vm);
      }
    };
  }
}

DUNE_TASK
