//***************************************************************************
// Copyright 2007-2023 Universidade do Porto - Faculdade de Engenharia      *
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
// Author: J.Costa                                                          *
//***************************************************************************

// DUNE headers.
#include <DUNE/DUNE.hpp>

namespace Sensors
{
  //! Temperature Publisher Example 1
  //!
  //! This task simulates a temperature sensor and publishes IMC Temperature 
  //! messages with values around a specified mean value and a random standard 
  //! deviation.
  //!
  //! @author J.Costa
  namespace Temperature
  {
    using DUNE_NAMESPACES;

    //! Task Arguments
    struct Arguments
    {
      //! PRNG type
      std::string prng_type;
      //! PRNG seed
      int prng_seed;
      //! Mean temperature value.
      float mean_value;
      //! Standard deviation of temperature measurements
      double std_dev;
    };

    struct Task : public DUNE::Tasks::Periodic // Change task type to DUNE::Tasks::Periodic
    {
      //! PRNG handle.
      Math::Random::Generator* m_prng;
      //! Task arguments.
      Arguments m_args;

      //! Constructor.
      //! @param[in] name task name.
      //! @param[in] ctx context.
      Task(const std::string& name, Tasks::Context& ctx):
        DUNE::Tasks::Periodic(name, ctx), // Don't forget to update the task type on the constructor!
        m_prng(NULL)
      {
        // Specify the task parameters / arguments
        // Thess can be changed in the configuration file or in Neptus (ctrl+1)

        param("Standard Deviation", m_args.std_dev)
        .defaultValue("0.1")
        .visibility(Tasks::Parameter::VISIBILITY_DEVELOPER);
        
        param("PRNG Type", m_args.prng_type)
        .defaultValue(Math::Random::Factory::c_default);

        param("PRNG Seed", m_args.prng_seed)
        .defaultValue("-1");
        

        param("Mean Value", m_args.mean_value)
        .defaultValue("25.0")
        .units(Units::DegreeCelsius)
        .description("Mean Temperature Value")
        .visibility(Tasks::Parameter::VISIBILITY_USER);
      }

      //! Update internal state with new parameter values.
      void
      onUpdateParameters(void)
      {
      }

      //! Reserve entity identifiers.
      void
      onEntityReservation(void)
      {
      }

      //! Resolve entity names.
      void
      onEntityResolution(void)
      {
      }

      //! Acquire resources.
      void
      onResourceAcquisition(void)
      {
        m_prng = Math::Random::Factory::create(m_args.prng_type, m_args.prng_seed);
      }

      //! Initialize resources.
      void
      onResourceInitialization(void)
      {
      }

      //! Release resources.
      void
      onResourceRelease(void)
      {
        Memory::clear(m_prng);
      }

      //! Periodic Work.
      void
      task(void)
      {
        IMC::Temperature temperature;
        temperature.value = m_args.mean_value 
                          + m_prng->gaussian()
                          * m_args.std_dev;
        dispatch(temperature);
      }
    };
  }
}

DUNE_TASK