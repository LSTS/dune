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
// Author: Bernardo Gabriel                                                 *
//***************************************************************************

// DUNE headers.
#include <DUNE/DUNE.hpp>

namespace Monitors
{
  //! @author Bernardo Gabriel
  namespace NavigationLight
  {
    using DUNE_NAMESPACES;

    struct Arguments
    {
      //! Light state with no targets in proximity.
      int light_state_no_targets;
      //! Light state with targets in proximity.
      int light_state_with_targets;
      //! Light entity label.
      std::string light_entity;
      //! Light parameter label.
      std::string light_parameter_label;
    };

    struct Task: public DUNE::Monitors::AISProximity
    {
      //! Task Arguments
      Arguments m_args;

      //! Constructor.
      //! @param[in] name task name.
      //! @param[in] ctx context.
      Task(const std::string& name, Tasks::Context& ctx):
        DUNE::Monitors::AISProximity(name, ctx)
      {
        paramActive(Tasks::Parameter::SCOPE_GLOBAL,
                    Tasks::Parameter::VISIBILITY_USER);

        param("Light State No Targets", m_args.light_state_no_targets)
        .minimumValue("-1")
        .defaultValue("-1")
        .description("State of the light when no targets are in proximity.");

        param("Light State With Targets", m_args.light_state_with_targets)
        .minimumValue("-1")
        .defaultValue("0")
        .description("State of the light when targets are in proximity.");

        param("Light Entity", m_args.light_entity)
        .editable("false")
        .defaultValue("")
        .description("Entity label for the light.");

        param("Light Parameter Label", m_args.light_parameter_label)
        .editable("false")
        .defaultValue("")
        .description("Parameter label for the light state.");
      }

      void
      setNavigationLight(int state)
      {
        debug("setting light state to %d", state);
        IMC::SetEntityParameters sep;
        sep.name = m_args.light_entity;
        IMC::EntityParameter param;
        param.name = m_args.light_parameter_label;
        param.value = std::to_string(state);
        sep.params.push_back(param);
        dispatch(sep);
      }

      void
      onActivation(void) override
      {
        if (targetsInProximity())
          setNavigationLight(m_args.light_state_with_targets);
        else
          setNavigationLight(m_args.light_state_no_targets);

        setEntityState(IMC::EntityState::ESTA_NORMAL,
                      CODE_ACTIVE);
      }

      void
      onTargetsInProximity(void) override
      {
        if (!isActive())
          return;

        war("Proximity alert triggered for AIS targets."); 
        setNavigationLight(m_args.light_state_with_targets);
      }

      void
      onNoTargetsInProximity(void) override
      {
        if (!isActive())
          return;

        inf("No AIS targets in the area.");
        setNavigationLight(m_args.light_state_no_targets);
      }
    };
  }
}

DUNE_TASK
