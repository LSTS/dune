//***************************************************************************
// Copyright 2007-2025 Universidade do Porto - Faculdade de Engenharia      *
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
// Author: João Costa                                                       *
//***************************************************************************

// DUNE headers.
#include <DUNE/DUNE.hpp>

namespace Simulators
{
  //! Heave Simulator
  //!
  //! This task simulates the heave displacement of a vehicle caused by
  //! the ondulation.
  //!
  //! @author João Costa
  namespace Heave
  {
    using DUNE_NAMESPACES;

    //! %Task arguments.
    struct Arguments
    {
      //! Wave amplitude.
      double wave_amplitude;
      //! Wave frequency.
      double wave_frequency;
    };

    struct Task: public DUNE::Tasks::Periodic
    {
      //! Initial simulation time.
      double m_simulation_time;
      //! Heave value.
      double m_heave;
      //! Previous Heave value.
      double m_previous_heave;
      //! Heave displacement message.
      IMC::Displacement m_displacement;
      //! Task arguments.
      Arguments m_args;

      //! Constructor.
      //! @param[in] name task name.
      //! @param[in] ctx context.
      Task(const std::string& name, Tasks::Context& ctx):
        DUNE::Tasks::Periodic(name, ctx),
        m_simulation_time(0),
        m_heave(0),
        m_previous_heave(0)
      {
        param("Wave Amplitude", m_args.wave_amplitude)
        .units(Units::Meter)
        .minimumValue("0.0")
        .defaultValue("1.0")
        .maximumValue("10.0")
        .description("Wave amplitude.");

        param("Wave Frequency", m_args.wave_frequency)
        .units(Units::Hertz)
        .minimumValue("0.0")
        .defaultValue("1.0")
        .maximumValue("2.0")
        .description("Wave frequency.");
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
      }

      //! Initialize resources.
      void
      onResourceInitialization(void)
      {
        m_displacement.time = 0.0;
        m_displacement.x = 0.0;
        m_displacement.y = 0.0;
        m_displacement.z = 0.0;
      }

      //! Release resources.
      void
      onResourceRelease(void)
      {
      }

      // Function to simulate heave displacement
      double
      simulateHeave(double amplitude, double frequency, double sim_time)
      {
        // Calculate the angular frequency of the wave
        double angularFrequency = 2.0 * Math::c_pi * frequency;

        // Calculate the displacement using a sine wave equation
        double displacement = amplitude * sin(angularFrequency * sim_time);

        return displacement;
      }

      //! Main loop.
      void
      task(void)
      {
        while (!stopping())
        {
          waitForMessages(1.0);

          // Simulate heave displacement at periodic task's frequency.
          m_heave = simulateHeave(m_args.wave_amplitude, m_args.wave_frequency, m_simulation_time);

          // Calculate the displacement (difference in heave).
          m_displacement.z = m_heave - m_previous_heave;

          // Dispatch the displacement message.
          dispatch(m_displacement);

          // Output the results.
          debug("Time: %fs, Heave:%f, Displacement: %fm, Wave Frequency: %.2fHz, Task Frequency: %.0fHz", m_simulation_time, m_heave, m_displacement.z, m_args.wave_frequency, getFrequency());

          // Update previous heave displacement for the next iteration
          m_previous_heave = m_heave;

          // Increment simulation time based on cycle frequency.
          m_simulation_time += 1.0 / getFrequency();
        }
      }
    };
  }
}

DUNE_TASK
