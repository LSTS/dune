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
// Author: Pedro Calado                                                     *
//***************************************************************************

// DUNE headers.
#include <DUNE/DUNE.hpp>

using DUNE_NAMESPACES;

namespace Simulators
{
  //! Sound Velocity sensor simulator for DUNE.
  //! %SVS is responsible to gather data from the
  //! vehicle simulator by consuming SimulatedState IMC
  //! message, then computing a value for sound speed
  //! and sending it to the bus.
  //! Based on DepthSensor simulator.
  //!
  //! @author Pedro Calado
  namespace SVS
  {
    //! %Task arguments.
    struct Arguments
    {
      //! Standard deviation of sound velocity sensor measurements.
      double std_dev;
      //! PRNG type.
      std::string prng_type;
      //! PRNG seed.
      int prng_seed;
      //! Mean sound speed value
      float mean_sspeed;
    };

    //! %SVS simulator task.
    struct Task: public Tasks::Periodic
    {
      //! Simulated state.
      IMC::SimulatedState m_sstate;
      //! Current sound speed.
      IMC::SoundSpeed m_sspeed;
      //! PRNG handle.
      Random::Generator* m_prng;
      //! Task arguments.
      Arguments m_args;

      Task(const std::string& name, Tasks::Context& ctx):
        Tasks::Periodic(name, ctx),
        m_prng(NULL)
      {
        // Retrieve configuration values.
        param("Standard Deviation", m_args.std_dev)
        .units(Units::Meter)
        .defaultValue("0.1");

        param("PRNG Type", m_args.prng_type)
        .defaultValue(Random::Factory::c_default);

        param("PRNG Seed", m_args.prng_seed)
        .defaultValue("-1");

        param("Mean Value", m_args.mean_sspeed)
        .defaultValue("1500.0")
        .description("Mean value for the sound speed");

        // Register consumers.
        bind<IMC::SimulatedState>(this);
      }

      //! Initialize resources.
      void
      onResourceInitialization(void)
      {
        requestDeactivation();
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
        if (!isActive())
        {
          setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_ACTIVE);
          requestActivation();
        }

        m_sstate = *msg;
      }

      void
      task(void)
      {
        // Return if task is not active.
        if (!isActive())
          return;

        // Compute positive sound speed adding a gaussian noise component.
        m_sspeed.value = m_args.mean_sspeed + m_prng->gaussian() * m_args.std_dev;
        dispatch(m_sspeed);
      }
    };
  }
}

DUNE_TASK
