//***************************************************************************
// Copyright 2007-2026 Universidade do Porto - Faculdade de Engenharia      *
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
// Author: Test (do not commit!)                                            *
//***************************************************************************

// DUNE headers.
#include <DUNE/DUNE.hpp>

namespace Supervisors
{
  //! Insert short task description here.
  //!
  //! Insert explanation on task behaviour here.
  //! @author Test (do not commit!)
  namespace SamplingSender
  {
    //! Insert short task description here.
    //!
    //! Insert explanation on task behaviour here.
    //! @author Test (do not commit!)
    using DUNE_NAMESPACES;
    
    //! %Task arguments.
    struct Arguments
    {
      //! Flag to start
      bool start_plan;
      float radius;
      float speed_to_target;
      float speed_on_sample;
      std::vector<double> position;
    };

    struct Task: public DUNE::Tasks::Task
    {
      IMC::Sampling m_sampling;
      IMC::PlanControl m_start_plan;

      bool m_was_started;

      Arguments m_args;

      //! Constructor.
      //! @param[in] name task name.
      //! @param[in] ctx context.
      Task(const std::string& name, Tasks::Context& ctx):
        DUNE::Tasks::Task(name, ctx),
        m_was_started(false)
      {
        param("Start Maneuver", m_args.start_plan)
        .visibility(Tasks::Parameter::VISIBILITY_USER)
        .scope(Tasks::Parameter::SCOPE_GLOBAL)
        .defaultValue("false")
        .description("Flag to start maneuver. Any change in flag will trigger a new maneuver dispatch.");

        param("Radius", m_args.radius)
        .visibility(Tasks::Parameter::VISIBILITY_USER)
        .scope(Tasks::Parameter::SCOPE_GLOBAL)
        .defaultValue("10.0")
        .units(Units::Meter)
        .description("Sampling radius");

        param("Speed to Target", m_args.speed_to_target)
        .visibility(Tasks::Parameter::VISIBILITY_USER)
        .scope(Tasks::Parameter::SCOPE_GLOBAL)
        .defaultValue("1.0")
        .units(Units::MeterPerSecond)
        .description("Speed to reach the target position");

        param("Speed on Target", m_args.speed_on_sample)
        .visibility(Tasks::Parameter::VISIBILITY_USER)
        .scope(Tasks::Parameter::SCOPE_GLOBAL)
        .defaultValue("0.3")
        .units(Units::MeterPerSecond)
        .description("Speed while performing the sampling maneuver");

        param("Maneuver Position", m_args.position)
        .visibility(Tasks::Parameter::VISIBILITY_USER)
        .scope(Tasks::Parameter::SCOPE_GLOBAL)
        .units(Units::Degree)
        .size(2)
        .description("Initial position of the vehicle");
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
        updateManeuver();
      }

      void
      updateManeuver()
      {
        m_sampling.clear();
        m_start_plan.clear();

        m_sampling.sampling_type = "RedX";
        m_sampling.sampling_args = String::str("Radius=%f;Speed=%f", m_args.radius, m_args.speed_on_sample);
        m_sampling.lat = Angles::radians(m_args.position[0]);
        m_sampling.lon = Angles::radians(m_args.position[1]);
        m_sampling.z = 0.0;
        m_sampling.z_units = IMC::ZUnits::Z_DEPTH;
        m_sampling.speed = m_args.speed_to_target;
        m_sampling.speed_units = IMC::SpeedUnits::SUNITS_METERS_PS;

        m_start_plan.type = IMC::PlanControl::PC_REQUEST;
        m_start_plan.op = IMC::PlanControl::PC_START;
        m_start_plan.plan_id = "sampling-plan-test";

        IMC::PlanManeuver pm;
        pm.data.set(m_sampling);
        pm.maneuver_id = "sampling-man-test";

        IMC::PlanSpecification spec;
        spec.plan_id = m_start_plan.plan_id;
        spec.start_man_id = pm.maneuver_id;
        spec.maneuvers.push_back(pm);

        m_start_plan.arg.set(spec);
        m_start_plan.request_id = 0;
        m_start_plan.flags = 0;
        m_start_plan.setDestination(m_ctx.resolver.id());

        war("Sampling args: %s", m_sampling.sampling_args.c_str());
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

          if (m_was_started != m_args.start_plan)
          {
            m_was_started = m_args.start_plan;
            updateManeuver();
            dispatch(m_start_plan);
            war("Dispatched sampling specification: %s", m_sampling.getName());
          }
        }

      }
    };
  }
}

DUNE_TASK

