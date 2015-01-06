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

    //! Vector for System Mapping.
    typedef std::vector<uint32_t> Systems;
    //! Vector for Entity Mapping.
    typedef std::vector<uint32_t> Entities;

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
      // Simulation vehicle.
      //UAVModel* m_model;
      //! Simulated position (X,Y,Z).
      IMC::SimulatedState m_sstate;
      //! Origin for simulated state.
      IMC::GpsFix m_origin;
      //! List of systems allowed to define a command.
      Systems m_filtered_sys;
      //! List of entities allowed to define a command.
      Entities m_filtered_ent;
      // System alias id
      uint32_t m_alias_id;

      Task(const std::string& name, Tasks::Context& ctx):
        DUNE::Tasks::Periodic(name, ctx),
        m_alias_id(UINT_MAX)
      {
        // Definition of configuration parameters.
        param("SimulatedState Filter", m_args.state_src)
        .defaultValue("")
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
      onResourceAcquisition(void)
      {
      }

      void
      onEntityResolution(void)
      {
        //! Process the systems and entities allowed to pass the SimulatedState
        uint32_t i_src;
        m_filtered_sys.clear();
        m_filtered_ent.clear();
        for (unsigned int i = 0; i < m_args.state_src.size(); ++i)
        {
          std::vector<std::string> parts;
          String::split(m_args.state_src[i], ":", parts);
          if (parts.size() < 1)
            continue;

          // Split systems and entities.
          std::vector<std::string> systems;
          String::split(parts[0], "+", systems);
          std::vector<std::string> entities;
          String::split(parts[1], "+", entities);

          m_filtered_ent.resize(systems.size()*entities.size());
          m_filtered_sys.resize(systems.size()*entities.size());
          unsigned int i_sys_n = systems.size();
          unsigned int i_ent_n = entities.size();
          // Resolve systems id.
          for (unsigned j = 0; j < i_sys_n; j++)
          {
            // Resolve entities id.
            for (unsigned k = 0; k < i_ent_n; k++)
            {
              i_src = (j+1)*(k+1)-1;
              // Resolve systems.
              if (systems[j].empty())
              {
                m_filtered_sys[i_src] = UINT_MAX;
                debug("State filtering - Filter source system undefined");
              }
              else
              {
                try
                {
                  m_filtered_sys[i_src] = resolveSystemName(systems[j]);
                  debug("State filtering - System '%s' with ID: %d",
                      systems[j].c_str(), resolveSystemName(systems[j]));
                }
                catch (...)
                {
                  war("State filtering - No system found with designation '%s'!", systems[j].c_str());
                  i_sys_n--;
                  j--;
                }
              }
              // Resolve entities.
              if (entities[j].empty())
              {
                m_filtered_ent[i_src] = UINT_MAX;
                debug("State filtering - Filter entity system undefined");
              }
              else
              {
                try
                {
                  m_filtered_ent[i_src] = resolveEntity(entities[k]);
                  debug("State filtering - Entity '%s' with ID: %d",
                      entities[k].c_str(), resolveEntity(entities[k]));
                }
                catch (...)
                {
                  war("State filtering - No entity found with designation '%s'!", entities[k].c_str());
                  i_ent_n--;
                  k--;
                }
              }
            }
          }
        }
      }

      void
      onResourceRelease(void)
      {
        //Memory::clear(m_model);
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
        bool matched = true;
        if (m_filtered_sys.size() > 0)
        {
          matched = false;
          std::vector<uint32_t>::iterator itr_sys = m_filtered_sys.begin();
          std::vector<uint32_t>::iterator itr_ent = m_filtered_ent.begin();
          for (; itr_sys != m_filtered_sys.end(); ++itr_sys)
          {
            if ((*itr_sys == msg->getSource() || *itr_sys == (unsigned int)UINT_MAX) &&
                (*itr_ent == msg->getSourceEntity() || *itr_ent == (unsigned int)UINT_MAX))
              matched = true;
            ++itr_ent;
          }
        }
        // This system and entity are not listed to be passed.
        if (!matched)
        {
          trace("SimulatedState message rejected.");
          trace("SimulatedState received from system '%s' and entity '%s'.",
              resolveSystemId(msg->getSource()),
              resolveEntity(msg->getSourceEntity()).c_str());
          return;
        }

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
