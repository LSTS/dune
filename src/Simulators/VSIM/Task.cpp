//***************************************************************************
// Copyright (C) 2007-2013 Laboratório de Sistemas e Tecnologia Subaquática *
// Departamento de Engenharia Electrotécnica e de Computadores              *
// Rua Dr. Roberto Frias, 4200-465 Porto, Portugal                          *
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
      //! Task is active.
      bool m_active;
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
        m_active(false),
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

      //! Destructor.
      ~Task(void)
      {
        Task::onResourceRelease();
      }

      //! Update parameters.
      void
      onUpdateParameters(void)
      {
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

        m_active = true;

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
        UUV* v = dynamic_cast<UUV*>(m_vehicle);
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
        if (!m_active)
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
        m_sstate.phi = attitude[0];
        m_sstate.theta = attitude[1];
        m_sstate.psi = attitude[2];

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
