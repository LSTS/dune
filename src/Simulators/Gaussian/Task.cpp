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
// Author: Jose Pinto                                                       *
//***************************************************************************

// DUNE headers.
#include <DUNE/DUNE.hpp>

using DUNE_NAMESPACES;

namespace Simulators
{
  namespace Gaussian
  {
    //! %Task arguments.
    struct Arguments
    {
      //! Latitude of the peak's center
      double peak_latitude;
      //! Longitude of the peak's center
      double peak_longitude;
      //! Value at the center
      float peak_value;
      //! Value away from the center
      float away_value;
      //! The distance from the center where values become away_value
      float peak_width;
      //! The message to be produced - should contain the field 'value'
      std::string message_name;
      //! PRNG type.
      std::string prng_type;
      //! PRNG seed.
      int prng_seed;
    };

    //! Gaussian simulator task.
    struct Task: public Tasks::Periodic
    {
      IMC::Message *m_msg;
      IMC::SimulatedState m_last_state;
      Random::Generator* m_prng;
      Arguments m_args;

      Task(const std::string& name, Tasks::Context& ctx):
        Tasks::Periodic(name, ctx),
		m_msg(NULL),
		m_prng(NULL)
      {
        // Retrieve configuration values.
        param("Latitude (degrees) of gaussian peak", m_args.peak_latitude)
        .defaultValue("41.185373");

        param("Longitude (degrees) of gaussian peak", m_args.peak_longitude)
        .defaultValue("-8.704962");

        param("Value at peak", m_args.peak_value)
        .defaultValue("20");

        param("Value away from peak", m_args.away_value)
        .defaultValue("14");

        param("Width of gaussian", m_args.peak_width)
        .defaultValue("250");

        param("Name of message to produce", m_args.message_name)
       .defaultValue("RhodamineDye");

        param("PRNG Type", m_args.prng_type)
        .defaultValue(Random::Factory::c_default);

        param("PRNG Seed", m_args.prng_seed)
        .defaultValue("-1");

        // Register consumers.
        bind<IMC::SimulatedState>(this);

      }

      //! Parse arguments.
      void
      onUpdateParameters(void)
      {
    	  if (m_msg != NULL)
    		  Memory::clear(m_msg);

          // Create message to be dispatched.
          m_msg = IMC::Factory::produce(m_args.message_name);
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
        // Create message to be dispatched.
        m_msg = IMC::Factory::produce(m_args.message_name);
      }

      //! Release resources.
      void
      onResourceRelease(void)
      {
        Memory::clear(m_prng);
        Memory::clear(m_msg);
      }

      void
      consume(const IMC::SimulatedState* msg)
      {
        if (!isActive())
        {
          setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_ACTIVE);
          requestActivation();
        }

        m_last_state = *msg;
      }

      void
      task(void)
      {
        // Return if task is not active.
        if (!isActive())
          return;

        m_msg->setTimeStamp();

        //fixme calculate value
        m_msg->setValueFP(0);

        dispatch(m_msg, DF_KEEP_TIME);
      }
    };
  }
}

DUNE_TASK
