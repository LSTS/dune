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
      //! Task arguments.
      Arguments m_args;

      Task(const std::string& name, Tasks::Context& ctx):
        Tasks::Periodic(name, ctx),
        m_prng(NULL)
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
