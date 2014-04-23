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
// Author: Ricardo Bencatel                                                 *
//***************************************************************************

// DUNE headers.
#include <DUNE/DUNE.hpp>

namespace Simulators
{
  namespace UAVAutopilot
  {
    using DUNE_NAMESPACES;

    struct Arguments
    {
    };

    //! %UAV autopilot simulator task.
    struct Task: public DUNE::Tasks::Periodic
    {
      // Simulation vehicle.
      //UAVModel* m_model;
      //! Simulated position (X,Y,Z).
      IMC::SimulatedState m_sstate;
      //! Origin for simulated state.
      IMC::GpsFix m_origin;
      //! Task arguments.
      Arguments m_args;

      Task(const std::string& name, Tasks::Context& ctx):
        DUNE::Tasks::Periodic(name, ctx)
      {
        bind<IMC::GpsFix>(this);
        bind<IMC::SimulatedState>(this);
      }

      ~Task(void)
      {
        Task::onResourceRelease();
      }

      void
      onResourceRelease(void)
      {
        //Memory::clear(m_model);
      }

      void
      consume(const IMC::GpsFix* msg)
      {
        if (msg->getSourceEntity() == getEntityId())
          return;
        debug("Consuming GPS-Fix");

        requestActivation();
        //m_origin = *msg;
      }

      void
      consume(const IMC::SimulatedState* msg)
      {
        //! Check if system is active
        if (!isActive())
          return;

        //! Check if the source ID is from the system itself
        if (msg->getSource() != getSystemId() || msg->getDestination() != getSystemId())
        {
          spew("Simulated state rejected.");
          spew("SimulatedState sent from another source!");
          return;
        }

        spew("Consuming SimulatedState");

        if (getEntityState() != IMC::EntityState::ESTA_NORMAL)
        {
          setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_ACTIVE);
        }

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

        // Fill attitude.
        estate.phi = vd_attitude(0);
        estate.theta = vd_attitude(1);
        estate.psi = vd_attitude(2);

        // Fill body linear velocity.
        estate.u = vd_body_vel(0);
        estate.v = vd_body_vel(1);
        estate.w = vd_body_vel(2);

        // Fill ground linear velocity.
        estate.vx = vd_gnd_vel(0);
        estate.vy = vd_gnd_vel(1);
        estate.vz = vd_gnd_vel(2);

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

        //trace("Exporting estimated state (%s)!", this->getSystemName());
        dispatch(estate);
        dispatch(speed);
        dispatch(streamspeed);
      }
    };
  }
}

DUNE_TASK
