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
// Author: Eduardo Marques                                                  *
//***************************************************************************

// ISO C++ 98 headers.
#include <iomanip>

// DUNE headers.
#include <DUNE/DUNE.hpp>

namespace Simulators
{
  //! %GPS simulator for DUNE.
  //! %GPS is responsible to gather data from the vehicle simulator
  //! by consuming SimulatedState IMC messages and then add sending
  //! GpsFix messages to the bus.
  //!
  //! This task can also send GroundVelocity and EulerAngles
  //! messages to the bus.
  //!
  //! @author Eduardo Marques.
  namespace GPS
  {
    using DUNE_NAMESPACES;

    //! GpsFix required validity flags.
    static const uint16_t c_gps_valid = (IMC::GpsFix::GFV_VALID_DATE |
                                         IMC::GpsFix::GFV_VALID_TIME |
                                         IMC::GpsFix::GFV_VALID_POS |
                                         IMC::GpsFix::GFV_VALID_COG |
                                         IMC::GpsFix::GFV_VALID_SOG |
                                         IMC::GpsFix::GFV_VALID_HACC |
                                         IMC::GpsFix::GFV_VALID_VACC |
                                         IMC::GpsFix::GFV_VALID_HDOP |
                                         IMC::GpsFix::GFV_VALID_VDOP);

    //! GroundVelocity required validity flags.
    static const uint8_t c_dvl_valid = (IMC::GroundVelocity::VAL_VEL_X |
                                        IMC::GroundVelocity::VAL_VEL_Y |
                                        IMC::GroundVelocity::VAL_VEL_Z);
    //! %Task arguments.
    struct Arguments
    {
      //! Ground velocity report flag.
      bool report_gv;
      //! Yaw report flag.
      bool report_yaw;
      //! Activation depth.
      double act_depth;
      //! Horizontal Dilution of Precision.
      double hdop;
      //! Horizontal Accuracy.
      double hacc;
      //! Number of sattelites.
      uint16_t n_sat;
      //! Initial position (degrees)
      std::vector<double> position;
    };

    //! %GPS simulator task.
    struct Task: public Tasks::Periodic
    {
      //! GPS Fix message.
      IMC::GpsFix m_fix;
      //! Ground velocity message.
      IMC::GroundVelocity m_gv;
      //! Euler Angles message.
      IMC::EulerAngles m_euler;
      //! Current simulated state.
      IMC::SimulatedState m_sstate;
      //! SimulatedState
      IMC::SimulatedState m_sstate_at_fix;
      //! Origin for simulated state.
      IMC::GpsFix m_origin;
      //! Task arguments.
      Arguments m_args;

      Task(const std::string& name, Tasks::Context& ctx):
        Tasks::Periodic(name, ctx)
      {
        // Retrieve configuration parameters.
        param("Report Ground Velocity", m_args.report_gv)
        .defaultValue("false")
        .description("Activate output of Ground Velocity messages");

        param("Report Yaw", m_args.report_yaw)
        .defaultValue("false")
        .description("Activate output of Euler Angles messages");

        param("Activation Depth", m_args.act_depth)
        .units(Units::Meter)
        .minimumValue("0.0")
        .maximumValue("1.0")
        .defaultValue("0.20")
        .description("Minimum depth at which the GPS is unable to produce accurate fixes");

        param("HDOP", m_args.hdop)
        .minimumValue("0.0")
        .defaultValue("0.9")
        .description("Horizontal Dilution of Position index");

        param("HACC", m_args.hacc)
        .minimumValue("0.0")
        .defaultValue("2.0")
        .description("Horizontal Accuracy index");

        param("Number of Satellites", m_args.n_sat)
        .defaultValue("8")
        .description("Number of available satellites");

        param("Initial Position", m_args.position)
        .units(Units::Degree)
        .size(2)
        .description("Initial position of the vehicle");

        m_fix.clear();
        m_euler.clear();
        m_gv.clear();

        setEntityState(IMC::EntityState::ESTA_BOOT, Status::CODE_WAIT_GPS_FIX);

        m_fix.validity = c_gps_valid;
        m_gv.validity = c_dvl_valid;

        bind<IMC::GpsFix>(this);
        bind<IMC::SimulatedState>(this);
      }

      void
      onUpdateParameters(void)
      {
        m_origin.lat = Math::Angles::radians(m_args.position[0]);
        m_origin.lon = Math::Angles::radians(m_args.position[1]);
        m_origin.type = IMC::GpsFix::GFT_MANUAL_INPUT;
        m_origin.validity = 0xffff;

        // Dispatching local origin.
        dispatch(m_origin);

        // Activate task.
        requestActivation();
      }

      void
      consume(const IMC::GpsFix* msg)
      {
        if (msg->getSourceEntity() == getEntityId())
          return;

        requestActivation();
        m_origin = *msg;
      }

      void
      consume(const IMC::SimulatedState* msg)
      {
        if (!isActive())
        {
          return;
        }

        if (getEntityState() != IMC::EntityState::ESTA_NORMAL)
        {
          setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_ACTIVE);
          m_fix.setTimeStamp();
          m_sstate_at_fix = *msg;
        }

        m_sstate = *msg;
      }

      //! Report invalid fix.
      void
      reportInvalidFix(void)
      {
        trace("reporting invalid fix");

        m_fix.satellites = 0;
        m_fix.validity = 0;
        m_fix.sog = 0.0;
        m_fix.cog = 0.0;
        m_fix.hdop += 1.0 / getFrequency();
        m_fix.hacc += 1.0 / getFrequency();
        m_fix.utc_time = ((uint32_t)Clock::getSinceEpoch()) % 86400;
        dispatch(m_fix);
      }

      void
      task(void)
      {
        // Report invalid fixes when task not active or system is underwater.
        if (!isActive() || m_sstate.z > m_args.act_depth)
        {
          reportInvalidFix();
          return;
        }

        double now = Clock::getSinceEpoch();

        // Report GpsFix.
        m_fix.sog = std::sqrt(std::pow(m_sstate.u, 2) + std::pow(m_sstate.v, 2));
        m_fix.cog = m_sstate.psi;
        m_fix.validity = c_gps_valid;
        m_fix.satellites = m_args.n_sat;
        m_fix.hdop = m_args.hdop;
        m_fix.hacc = m_args.hacc;

        // WGS84 coordinates.
        m_fix.lat = m_origin.lat;
        m_fix.lon = m_origin.lon;
        m_fix.height = m_origin.height;
        WGS84::displace(m_sstate.x, m_sstate.y, m_sstate.z, &m_fix.lat, &m_fix.lon, &m_fix.height);
        m_fix.utc_time = ((uint32_t)now) % 86400;

        trace("fix: %0.6f %0.6f | yaw %0.1f | ground velocity %0.1f %0.1f %0.1f",
              Angles::degrees(m_fix.lat), Angles::degrees(m_fix.lon),
              Angles::degrees(m_euler.psi),
              m_gv.x, m_gv.y, m_gv.z);

        m_fix.setTimeStamp(now);
        dispatch(m_fix, DF_KEEP_TIME);

        // Report GroundVelocity.
        if (m_args.report_gv)
        {
          m_gv.x = m_sstate.u;
          m_gv.y = m_sstate.v;
          m_gv.z = m_sstate.z;

          m_gv.setTimeStamp(now);
          dispatch(m_gv, DF_KEEP_TIME);
        }

        // Report Heading.
        if (m_args.report_yaw)
        {
          m_euler.psi = m_sstate.psi;
          m_euler.setTimeStamp(now);
          dispatch(m_euler, DF_KEEP_TIME);
        }
      }
    };
  }
}

DUNE_TASK
