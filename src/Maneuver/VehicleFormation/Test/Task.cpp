//***************************************************************************
// Copyright 2007-2014 Universidade do Porto - Faculdade de Engenharia      *
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
// https://www.lsts.pt/dune/licence.                                        *
//***************************************************************************
// Author: Ricardo Bencatel                                                 *
//***************************************************************************

// ISO C++ 98 headers.
#include <cstring>
#include <string>
#include <cmath>
#include <vector>

// DUNE headers.
#include <DUNE/DUNE.hpp>
#include <DUNE/Simulation/UAV.hpp>
using DUNE::Simulation::UAVSimulation;

namespace Maneuver
{
  namespace VehicleFormation
  {
    namespace Test
    {
      using DUNE_NAMESPACES;

      struct Arguments
      {
        // ToDo - Introduce the controller parameters sweeping configuration
        // Iteration
        double iteration_time;
        // Controller parameters
        double k_longitudinal;
        double k_lateral;
        double k_boundary;
        double k_leader;
        double k_deconfliction;
        double flow_accel_max;
        double safe_dist;
        double deconfliction_offset;
        double acc_safety_marg;
        // Control constraints
        double speed_max;
        double speed_min;
      };

      struct Task: public DUNE::Tasks::Periodic
      {
        //! Task arguments.
        Arguments m_args;

        // Controller flags
        bool m_param_update_first;
        // Time variables
        Matrix m_last_param_update;
        double m_last_time_verb_task;
        double m_timestep_trace;

        //! Controller parameters
        IMC::FormationControlParams m_formation_ctrl_params;
        double m_k_longitudinal;
        double m_k_lateral;
        double m_k_boundary;
        double m_k_leader;
        double m_k_deconfliction;
        double m_flow_accel_max;
        double m_safe_dist;
        double m_deconfliction_offset;
        double m_acc_safety_marg;
        double m_accel_lim_x;

        Task(const std::string& name, Tasks::Context& ctx):
          DUNE::Tasks::Periodic(name, ctx),
          m_param_update_first(true),
          m_last_time_verb_task(std::min(-1.0, Clock::get())),
          m_timestep_trace(5.0),
          m_k_longitudinal(0.0),
          m_k_lateral(0.0),
          m_k_boundary(0.0),
          m_k_leader(0.0),
          m_k_deconfliction(0.0),
          m_flow_accel_max(0.0),
          m_safe_dist(0.0),
          m_deconfliction_offset(0.0),
          m_acc_safety_marg(0.0),
          m_accel_lim_x(0.0)
        {
          // Definition of configuration parameters.
          paramActive(Tasks::Parameter::SCOPE_MANEUVER,
                      Tasks::Parameter::VISIBILITY_USER);

          param("Formation Longitudinal Gain", m_args.k_longitudinal)
          .defaultValue("0.5")
          .description("Trajectory gain over the vehicle longitudinal direction");

          param("Formation Lateral Gain", m_args.k_lateral)
          .defaultValue("0.8")
          .description("Trajectory gain over the vehicle lateral direction");

          param("Formation Boundary Layer", m_args.k_boundary)
          .defaultValue("0.6")
          .description("Control sliding surface boundary layer thickness");

          param("Flow Switching Gain", m_args.flow_accel_max)
          .defaultValue("0.0")
          .units(Units::MeterPerSquareSecond)
          .description("Maximum fluid flow acceleration at aircraft location. Switching gain for the worst case scenario.");

          param("Formation Leader Gain", m_args.k_leader)
          .defaultValue("2.5")
          .description("Leader control importance gain (relative to the sum of every other formation vehicle)");

          param("Formation Deconfliction Gain", m_args.k_deconfliction)
          .defaultValue("5.0")
          .description("Individual vehicle importance gain (relative to the leader)");

          param("Safety Distance", m_args.safe_dist)
          .defaultValue("12.0")
          .units(Units::Meter)
          .description("Aircraft Safety Distance");

          param("Deconfliction Offset", m_args.deconfliction_offset)
          .defaultValue("7.0")
          .units(Units::Meter)
          .description("Aircraft Deconfliction Distance Offset");

          param("Acceleration Safety Margin", m_args.acc_safety_marg)
          .defaultValue("0.3")
          .description("Acceleration safety margin");

          param("Maximum Airspeed", m_args.speed_max)
          .defaultValue("22.0")
          .units(Units::MeterPerSecond)
          .description("Aircraft maximum airspeed");

          param("Minimum Airspeed", m_args.speed_min)
          .defaultValue("18.0")
          .units(Units::MeterPerSecond)
          .description("Aircraft minimum airspeed");

          // Message binding
          bind<IMC::EstimatedState>(this);
        }

        void
        onUpdateParameters(void)
        {
          spew("Starting the parameters update.");

          //==========================================
          // General parameters treatment
          //==========================================

          //==========================================
          //
          //==========================================
          spew("onUpdateParameters - 1");

          debug("Ending the parameters update.");
        }

        void
        onEntityResolution(void)
        {
          spew("Entity resolution.");
        }

        void
        onResourceAcquisition(void)
        {
          // Initialize entity state.
          setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_ACTIVE);
        }

        void
        onResourceRelease(void)
        {
        }

        void
        consume(const IMC::EstimatedState* msg)
        {
          inf("EstimatedState from vehicle %s, entity %s",
              resolveSystemId(msg->getSource()), resolveEntity(msg->getSourceEntity()).c_str());
        }

        void
        task(void)
        {
          spew("Starting periodic task");
          //! Handle IMC messages from bus
          consumeMessages();

          if (!isActive() && !isActivating())
          {
            if (Clock::get() >= m_last_time_verb_task + m_timestep_trace)
            {
              trace("Formation test task is not active (%s).", this->getSystemName());
              m_last_time_verb_task = Clock::get();
            }
            return;
          }

          spew("Ending periodic task");
        }
      };
    }
  }
}

DUNE_TASK
