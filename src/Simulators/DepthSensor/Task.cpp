//***************************************************************************
// Copyright (C) 2007-2013 Laboratório de Sistemas e Tecnologia Subaquática *
// Departamento de Engenharia Electrotécnica e de Computadores              *
// Rua Dr. Roberto Frias, 4200-465 Porto, Portugal                          *
//***************************************************************************
// Author: Ricardo Martins                                                  *
//***************************************************************************
// $Id:: Task.cpp 12721 2013-01-25 02:01:06Z jbraga                       $:*
//***************************************************************************

// DUNE headers.
#include <DUNE/DUNE.hpp>

using DUNE_NAMESPACES;

namespace Simulators
{
  //! Depth sensor simulator for DUNE.
  //! %DepthSensor is responsible to gather data from the
  //! vehicle simulator by consuming SimulatedState IMC
  //! message and then add a configurable gaussian noise
  //! component before sending Depth information to the bus.
  //!
  //! @author Ricardo Martins
  namespace DepthSensor
  {
    //! %Task arguments.
    struct Arguments
    {
      //! Standard deviation of depth sensor measurements.
      double std_dev;
      //! PRNG type.
      std::string prng_type;
      //! PRNG seed.
      int prng_seed;
    };

    //! %DepthSensor simulator task.
    struct Task: public Tasks::Periodic
    {
      //! Simulated state.
      IMC::SimulatedState m_sstate;
      //! Current depth.
      IMC::Depth m_depth;
      //! PRNG handle.
      Random::Generator* m_prng;
      //! True if task is active.
      bool m_active;
      //! Task arguments.
      Arguments m_args;

      Task(const std::string& name, Tasks::Context& ctx):
        Tasks::Periodic(name, ctx),
        m_prng(NULL),
        m_active(false)
      {
        // Retrieve configuration values.
        param("Standard Deviation", m_args.std_dev)
        .units(Units::Meter)
        .defaultValue("0.05");

        param("PRNG Type", m_args.prng_type)
        .defaultValue(Random::Factory::c_default);

        param("PRNG Seed", m_args.prng_seed)
        .defaultValue("-1");

        // Register consumers.
        bind<IMC::SimulatedState>(this);
      }

      ~Task(void)
      {
        Task::onResourceRelease();
      }

      //! Acquire resources.
      void
      onResourceAcquisition(void)
      {
        m_prng = Random::Factory::create(m_args.prng_type, m_args.prng_seed);
      }

      //! Release resources.
      void
      onResourceRelease(void)
      {
        Memory::clear(m_prng);
      }

      void
      consume(const IMC::SimulatedState* msg)
      {
        setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_ACTIVE);
        m_active = true;
        m_sstate = *msg;
      }

      void
      task(void)
      {
        // Return if task is not active.
        if (!m_active)
          return;

        //! Compute positive depth value adding a gaussian noise component.
        m_depth.value = std::max(m_sstate.z + m_prng->gaussian() * m_args.std_dev, 0.0);
        // Set timestamp and dispatch message to bus.
        m_depth.setTimeStamp(m_sstate.getTimeStamp());
        dispatch(m_depth, DF_KEEP_TIME);
      }
    };
  }
}

DUNE_TASK
