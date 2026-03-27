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
// Author: zemarinho                                                        *
//***************************************************************************

// DUNE headers.
#include <DUNE/DUNE.hpp>

namespace Tutorials
{
  //! Insert short task description here.
  //!
  //! Insert explanation on task behaviour here.
  //! @author zemarinho
  namespace TempProd
  {
    using DUNE_NAMESPACES;

    struct Task: public DUNE::Tasks::Task
    {
      IMC::Temperature m_temp; 
      float m_initial_temp;
      bool m_reset_temp;

      //! Constructor.
      //! @param[in] name task name.
      //! @param[in] ctx context.
      Task(const std::string& name, Tasks::Context& ctx):
        DUNE::Tasks::Task(name, ctx)
      {
        param("Starting Temperature", m_initial_temp)
        .defaultValue("42.0")
        .minimumValue("0.0")
        .maximumValue("100.0")
        .units(Units::Degree)
        .description("Initital value of temperature.");

        param("Reset Temperature", m_reset_temp)
        .defaultValue("false")
        .visibility(Tasks::Parameter::VISIBILITY_USER)
        .description("Reset temperature to starting value.");
      }

      //! Update internal state with new parameter values.
      void
      onUpdateParameters(void)
      {
        if (paramChanged(m_initial_temp))
          inf("Startint temperature was change to %f", m_initial_temp);

        if (paramChanged(m_reset_temp) && m_reset_temp)
        {
          war("Reseting temperature to starting value: %f", m_initial_temp);
          m_temp.value = m_initial_temp;
          applyEntityParameter(m_reset_temp, false);
        }
      }

      //! Reserve entity identifiers.
      void
      onEntityReservation(void)
      {
        auto temp_id = reserveEntity("Temp42");
        m_temp.setSourceEntity(temp_id);
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
        m_temp.value = m_initial_temp;
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
      }

      //! Main loop.
      void
      onMain(void)
      {
        while (!stopping())
        {
          waitForMessages(1.0);
          dispatch(m_temp, DF_KEEP_SRC_EID);       // Dispatch the value to the message bus
          m_temp.value += 1;      // increment the value just to see the output	
          Delay::wait(1.0);    // Wait doing nothing.
        }
      }
    };
  }
}

DUNE_TASK