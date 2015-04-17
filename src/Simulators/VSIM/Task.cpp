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
// Author: Ricardo Martins                                                  *
// Author: Bruno Terra                                                      *
// Author: José Braga                                                       *
//***************************************************************************

// ISO C++ 98 headers.
#include <cmath>
#include <algorithm>
#include <vector>
#include <stdexcept>
#include <cstdlib>

// DUNE headers.
#include <DUNE/DUNE.hpp>

// Local headers.
#include "Factory.hpp"
#include <VSIM/VSIM.hpp>

using DUNE_NAMESPACES;

namespace Simulators
{
  //! Vehicle SIMulator for DUNE.
  //! %VSIM is responsible for multiple vehicle simulation.
  //! In the present, it is able to simulate
  //! Unmanned Underwater Vehicles
  //! and Autonomous Surface Vehicles.
  //!
  //! @author Bruno Terra
  //! @author José Braga
  namespace VSIM
  {
    //! %Task arguments.
    struct Arguments
    {
      //! Stream speed North parameter (m/s).
      double wx;
      //! Stream speed East parameter (m/s).
      double wy;
      //! Initial heading (degrees).
      double yaw;
    };

    //! Simulator task.
    struct Task: public Tasks::Periodic
    {
      //! Simulation vehicle.
      Simulators::VSIM::Vehicle* m_vehicle;
      //! Simulation world.
      Simulators::VSIM::World* m_world;
      //! Simulated position (X,Y,Z).
      IMC::SimulatedState m_sstate;
      //! Start time.
      double m_start_time;
      //! Task arguments.
      Arguments m_args;

      Task(const std::string& name, Tasks::Context& ctx):
        Periodic(name, ctx),
        m_vehicle(NULL),
        m_world(NULL),
        m_start_time(Clock::get())
      {
        // Retrieve configuration values.
        param("Stream Speed North", m_args.wx)
        .units(Units::MeterPerSecond)
        .defaultValue("0.0")
        .description("Water current speed along the North in the NED frame");

        param("Stream Speed East", m_args.wy)
        .units(Units::MeterPerSecond)
        .defaultValue("0.0")
        .description("Water current speed along the East in the NED frame");

        param("Initial Heading", m_args.yaw)
        .units(Units::Degree)
        .defaultValue("0.0")
        .description("Initial heading of the vehicle.");

        // Register handler routines.
        bind<IMC::GpsFix>(this);
        bind<IMC::ServoPosition>(this);
        bind<IMC::SetThrusterActuation>(this);
      }

      //! Update parameters.
      void
      onUpdateParameters(void)
      {
        if (paramChanged(m_args.yaw))
          m_args.yaw = Math::Angles::radians(m_args.yaw);
      }

      //! Release allocated resources.
      void
      onResourceRelease(void)
      {
        Memory::clear(m_vehicle);
        Memory::clear(m_world);
      }

      //! Initialize resources and add vehicle to the world.
      void
      onResourceInitialization(void)
      {
        // Initialize simulation world.
        m_world = Factory::produceWorld(m_ctx.config);
        if (!m_world)
          throw std::runtime_error(DTR("error loading world parameters."));

        m_vehicle = Factory::produceVehicle(m_ctx.config);
        if (!m_vehicle)
          throw std::runtime_error(DTR("error loading vehicle parameters."));

        m_world->addVehicle(m_vehicle);
        m_world->setTimeStep(1.0 / getFrequency());

        setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_ACTIVE);
      }

      void
      consume(const IMC::GpsFix* msg)
      {
        if (msg->type != IMC::GpsFix::GFT_MANUAL_INPUT)
          return;

        // We assume vehicle starts at sea surface.
        m_vehicle->setPosition(0, 0, 0);
        m_vehicle->setOrientation(0, 0, m_args.yaw);

        // Define vehicle origin.
        m_sstate.lat = msg->lat;
        m_sstate.lon = msg->lon;
        m_sstate.height = msg->height;

        m_start_time = Clock::get();

        requestActivation();

        // Save message to cache.
        IMC::CacheControl cop;
        cop.op = IMC::CacheControl::COP_STORE;
        cop.message.set(*msg);
        dispatch(cop);
      }

      void
      consume(const IMC::ServoPosition* msg)
      {
        using Simulators::VSIM::UUV;
        UUV* v = static_cast<UUV*>(m_vehicle);
        v->updateFin(msg->id, msg->value);
      }

      void
      consume(const IMC::SetThrusterActuation* msg)
      {
        m_vehicle->updateEngine(msg->id, msg->value);
      }

      void
      task(void)
      {
        if (!isActive())
          return;

        m_world->takeStep();

        // Fill position.
        double* position = m_vehicle->getPosition();
        double sim_time = Clock::get() - m_start_time;
        m_sstate.x = position[0] + sim_time * m_args.wx;
        m_sstate.y = position[1] + sim_time * m_args.wy;
        m_sstate.z = position[2];

        // Fill attitude.
        double* attitude = m_vehicle->getOrientation();
        m_sstate.phi = Angles::normalizeRadian(attitude[0]);
        m_sstate.theta = Angles::normalizeRadian(attitude[1]);
        m_sstate.psi = Angles::normalizeRadian(attitude[2]);

        // Fill angular velocity.
        double* av = m_vehicle->getAngularVelocity();
        m_sstate.p = av[0];
        m_sstate.q = av[1];
        m_sstate.r = av[2];

        // Fill linear velocity.
        double* lv = m_vehicle->getLinearVelocity();
        m_sstate.u = lv[0];
        m_sstate.v = lv[1];
        m_sstate.w = lv[2];

        // Fill stream velocity.
        m_sstate.svx = m_args.wx;
        m_sstate.svy = m_args.wy;
        m_sstate.svz = 0;

        dispatch(m_sstate);
      }
    };
  }
}

DUNE_TASK
