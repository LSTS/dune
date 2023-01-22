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
// Author: Ricardo Bencatel                                                 *
//***************************************************************************

// ISO C++ 98 headers.
#include <cstring>

// DUNE headers.
#include <DUNE/DUNE.hpp>

namespace Simulators
{
  namespace UAVAutopilot
  {
    using DUNE_NAMESPACES;

    struct Arguments
    {
      // SimulatedState filter
      std::vector<std::string> state_src;
      // Source system alias
      std::string src_alias;
    };

    //! %UAV autopilot simulator task.
    struct Task: public DUNE::Tasks::Periodic
    {
      //! Task arguments.
      Arguments m_args;
      //! Simulated position (X,Y,Z).
      IMC::SimulatedState m_sstate;
      //! Origin for simulated state.
      IMC::GpsFix m_origin;
      //! SimulatedState filter.
      DUNE::Tasks::SourceFilter* m_state_flt;
      // System alias id
      uint32_t m_alias_id;

      Task(const std::string& name, Tasks::Context& ctx):
        DUNE::Tasks::Periodic(name, ctx),
        m_state_flt(NULL),
        m_alias_id(UINT_MAX)
      {
        // Definition of configuration parameters.
        param("SimulatedState Filter", m_args.state_src)
        .defaultValue("self:")
        .description("List of <System>+<System>:<Entity>+<Entity> that define the source systems and entities from which the state is accepted.");

        param("Source Alias", m_args.src_alias)
        .defaultValue("")
        .description("Emulated system id.");

        bind<IMC::GpsFix>(this);
        bind<IMC::SimulatedState>(this);
      }

      ~Task(void)
      {
        Task::onResourceRelease();
      }

      void
      onUpdateParameters(void)
      {
        //! Set source system alias
        if (!m_args.src_alias.empty())
        {
          // Resolve systems.
          try
          {
            m_alias_id = resolveSystemName(m_args.src_alias);
          }
          catch (...)
          {
            debug("No system found with designation '%s'.", m_args.src_alias.c_str());
            m_alias_id = UINT_MAX;
          }
        }
        else
          m_alias_id = UINT_MAX;
      }

      void
      onResourceRelease(void)
      {
        Memory::clear( m_state_flt );
      }

      void
      onResourceAcquisition(void)
      {
        //! Process the systems and entities allowed to pass the SimulatedState
        m_state_flt = new Tasks::SourceFilter(*this, m_args.state_src, "SimulatedState");
      }

      void
      consume(const IMC::GpsFix* msg)
      {
        if (msg->getSourceEntity() == getEntityId() ||
            msg->getSource() != ((m_alias_id != (unsigned int)UINT_MAX) ? m_alias_id : getSystemId()))
          return;
        debug("Consuming GPS-Fix");

        requestActivation();
        setEntityState(EntityState::ESTA_NORMAL, Status::CODE_ACTIVE);
        //m_origin = *msg;
      }

      void
      consume(const IMC::SimulatedState* msg)
      {
        //! Check if system is active
        if (!isActive())
          return;

        //! Check if the source ID is from the system itself
        if (msg->getSource() != ((m_alias_id != (unsigned int)UINT_MAX) ? m_alias_id : getSystemId()) ||
            msg->getDestination() != ((m_alias_id != (unsigned int)UINT_MAX) ? m_alias_id : getSystemId()))
        {
          spew("Simulated state rejected.");
          spew("SimulatedState sent from another source!");
          return;
        }

        // Filter SimulatedState by systems and entities.
        if (!m_state_flt->match(msg))
          return;

        spew("Consuming SimulatedState");

        m_sstate = *msg;
      }

      void
      task(void)
      {
        //! Check if system is active
        if (!isActive())
          return;

        spew("UAV Simulator: Running");
        // Handle IMC messages from bus
        consumeMessages();

        // Initialization
        IMC::EstimatedState estate;
        IMC::IndicatedSpeed speed;
        IMC::TrueSpeed groundspeed;
        IMC::EstimatedStreamVelocity streamspeed;

        // Attitude.
        double vt_attitude[3] = {m_sstate.phi, m_sstate.theta, m_sstate.psi};
        Matrix vd_attitude = Matrix(vt_attitude, 3, 1);
        // Body velocity.
        double vt_velocity[3] = {m_sstate.u, m_sstate.v, m_sstate.w};
        Matrix vd_body_vel = Matrix(vt_velocity, 3, 1);
        // Stream velocity.
        double vt_stream_vel[3] = {m_sstate.svx, m_sstate.svy, m_sstate.svz};
        Matrix vd_stream_vel = Matrix(vt_stream_vel, 3, 1);
        // Rotation matrices
        double euler_ang[3] = {vd_attitude(0), vd_attitude(1), vd_attitude(2)};
        Matrix md_rot_body2gnd = Matrix(euler_ang, 3, 1).toDCM();
        // UAV velocity components, on ground frame
        Matrix vd_gnd_vel = md_rot_body2gnd * vd_body_vel;
        // Air-relative UAV velocity components, on aircraft frame
        Matrix vd_body_vel_2wind = transpose(md_rot_body2gnd) * (vd_gnd_vel - vd_stream_vel);

        // Origin coordinates.
        estate.lat = m_sstate.lat;
        estate.lon = m_sstate.lon;
        estate.height = m_sstate.height;
        // Fill position.
        estate.x = m_sstate.x;
        estate.y = m_sstate.y;
        estate.z = m_sstate.z;
        // Fill body linear velocity.
        estate.u = vd_body_vel(0);
        estate.v = vd_body_vel(1);
        estate.w = vd_body_vel(2);
        // Fill ground linear velocity.
        estate.vx = vd_gnd_vel(0);
        estate.vy = vd_gnd_vel(1);
        estate.vz = vd_gnd_vel(2);
        // Fill attitude.
        estate.phi = vd_attitude(0);
        estate.theta = vd_attitude(1);
        estate.psi = vd_attitude(2);
        // Fill angular velocity.
        estate.p = m_sstate.p;
        estate.q = m_sstate.q;
        estate.r = m_sstate.r;

        // Fill stream velocity.
        streamspeed.x = vd_stream_vel(0);
        streamspeed.y = vd_stream_vel(1);
        streamspeed.z = vd_stream_vel(2);

        // Absolute speed
        speed.value = vd_body_vel_2wind.norm_2();
        /*
        // Alpha - Angle of Attack
        m_alpha.value = std::atan(-vd_body_vel_2wind(2)/vd_body_vel_2wind(0));
        // Beta - Slip angle
        m_beta.value = std::atan2(vd_body_vel_2wind(1), vd_body_vel_2wind(0));
         */

        // Ground speed
        groundspeed.value = vd_gnd_vel.norm_2();

        //! Set source system alias
        if (m_alias_id != (unsigned int)UINT_MAX)
        {
          estate.setSource(m_alias_id);
          speed.setSource(m_alias_id);
          groundspeed.setSource(m_alias_id);
          streamspeed.setSource(m_alias_id);
        }

        //trace("Exporting estimated state (%s)!", this->getSystemName());
        dispatch(estate);
        dispatch(speed);
        dispatch(groundspeed);
        dispatch(streamspeed);
      }
    };
  }
}

DUNE_TASK
