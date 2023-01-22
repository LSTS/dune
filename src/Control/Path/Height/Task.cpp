//***************************************************************************
// Copyright 2007-2022 Universidade do Porto - Faculdade de Engenharia      *
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
// Author: Ricardo Bencatel                                                 *
// Author: Joao Fortuna                                                     *
//***************************************************************************

//***************************************************************************
// Sliding Mode Controler
//***************************************************************************

// ISO C++ 98 headers.
#include <cmath>

// DUNE headers.
#include <DUNE/DUNE.hpp>

namespace Control
{
  namespace Path
  {
    namespace Height
    {
      using DUNE_NAMESPACES;

      struct Arguments
      {
//        double tau_ss;
        double k_vr;
//        double phi_sp_ss;
        double phi_h;
        // Input filtering
        // - Command source
        std::vector<std::string> cmd_src;
        // - EstimatedState source
        std::vector<std::string> state_src;
      };

      struct Task: public Tasks::Periodic
      {
        Arguments m_args;
        IMC::DesiredVerticalRate m_vrate;
        double m_h_dot_cmd;
        double m_airspeed;
        double m_target_z;
        bool m_first_run;

        //! Commands filter
        DUNE::Tasks::SourceFilter* m_cmd_flt;
        //! EstimatedState filter
        DUNE::Tasks::SourceFilter* m_state_flt;

        Task(const std::string& name, Tasks::Context& ctx):
          Tasks::Periodic(name, ctx),
          m_h_dot_cmd(0.0),
          m_airspeed(0.0),
          m_target_z(0.0),
          m_first_run(true),
          m_cmd_flt(NULL),
          m_state_flt(NULL)
        {
          paramActive(Tasks::Parameter::SCOPE_MANEUVER,
                      Tasks::Parameter::VISIBILITY_USER);

//          param("Sliding Surface maximum gain", m_args.tau_ss)
//          .units(Units::MeterPerSquareSecond)
//          .defaultValue("0.25")
//          .description("Sliding Surface maximum gain for control");

          param("Vertical Rate maximum gain", m_args.k_vr)
          .defaultValue("0.15")
          .description("Vertical Rate maximum gain for control");

//          param("Sliding Surface bandwidth scaler", m_args.phi_sp_ss)
//          .units(Units::MeterPerSecond)
//          .defaultValue("0.7")
//          .description("Sliding Surface bandwidth scaler");

          param("Height bandwidth", m_args.phi_h)
          .units(Units::Meter)
          .defaultValue("20")
          .description("Limit distance above and bellow desired height from which maximum control is used");

          param("DesiredZ Filter", m_args.cmd_src)
          .defaultValue("")
          .description("List of <System>+<System> that define the source systems allowed to command DesiredZ.");

          param("EstimatedState Filter", m_args.state_src)
          .defaultValue("self")
          .description("List of <System>+<System> that define the source systems allowed to pass EstimatedState messages.");

          bind<IMC::IndicatedSpeed>(this);
          bind<IMC::DesiredZ>(this);
          bind<IMC::EstimatedState>(this);
          bind<IMC::ControlLoops>(this);
        }

        void
        onActivation(void)
        {
          // Activate vertical rate controller.
          IMC::ControlLoops cloops;
          cloops.enable = IMC::ControlLoops::CL_ENABLE;
          cloops.mask = IMC::CL_VERTICAL_RATE;
          dispatch(cloops);

          m_first_run = true;
        }

        void
        onDeactivation(void)
        {
          // Deactivate vertical rate controller.
          IMC::ControlLoops cloops;
          cloops.enable = IMC::ControlLoops::CL_DISABLE;
          cloops.mask = IMC::CL_VERTICAL_RATE;
          dispatch(cloops);
        }

        void
        consume(const IMC::ControlLoops* c_loops)
        {
          if (!isActive())
            return;

          if ((c_loops->enable == IMC::ControlLoops::CL_ENABLE) &&
              (c_loops->mask & IMC::CL_ALTITUDE))
          {
            // Activate vertical rate controller.
            IMC::ControlLoops cloops;
            cloops.enable = IMC::ControlLoops::CL_ENABLE;
            cloops.mask = IMC::CL_VERTICAL_RATE;
            dispatch(cloops);
          }
        }

        void
        onResourceRelease(void)
        {
          Memory::clear(m_cmd_flt);
          Memory::clear(m_state_flt);
        }

        void
        onResourceAcquisition(void)
        {
          // Process the systems allowed to define DesiredZ
          m_cmd_flt = new Tasks::SourceFilter(*this, true, m_args.cmd_src, "DesiredZ");
          // Process the systems allowed to pass the EstimatedState
          m_state_flt = new Tasks::SourceFilter(*this, true, m_args.state_src, "EstimatedState");
        }

        void
        consume(const IMC::IndicatedSpeed* airspeed)
        {
          m_airspeed = airspeed->value;
        }

        void
        consume(const IMC::DesiredZ* desired_z)
        {
          // Filter DesiredZ by systems and entities
          if (!m_cmd_flt->match(desired_z))
            return;

          m_target_z = desired_z->value;
        }

        void
        consume(const IMC::EstimatedState* state)
        {
          if (!isActive())
            return;

          // Filter EstimatedState by systems and entities
          if (!m_state_flt->match(state))
            return;

          if (m_first_run)
          {
            m_h_dot_cmd = state->vz;
            m_first_run = false;
          }

          /*
          double phi_ss = m_args.phi_sp_ss * m_args.k_vr * m_airspeed;
          double k_ss = phi_ss / m_args.tau_ss;
          */

          double delta_h = m_target_z - (state->height - state->z);

          double delta_h_phi = (delta_h / m_args.phi_h);
          double trimmed_d_h_phi = trimValue(delta_h_phi,-1,1);
          m_vrate.value = m_args.k_vr * m_airspeed * trimmed_d_h_phi;

          /*
          double delta_h_dot = state.vz; //should be -h_dot, but z is pointing down and h is up
          double trimmed_ss = trimValue((delta_h_dot + (m_args.k_vr * m_airspeed * trimmed_d_h_phi)) / phi_ss,-1,1);
          double h_dotdot = k_ss * trimmed_ss;

          if (std::abs(delta_h_phi) < 1)
            h_dotdot += m_args.k_vr * m_airspeed * (delta_h_dot / m_args.phi_h);

          double h_dot_cmd_tmp = m_h_dot_cmd + h_dotdot * ts.delta;

          m_h_dot_cmd = trimValue(h_dot_cmd_tmp, -(m_airspeed * m_args.k_vr), (m_airspeed * m_args.k_vr));

          m_vrate.value = m_h_dot_cmd;
           */
        }

        void
        task(void)
        {
          if (!isActive())
            return;

          // Send to bus
          dispatch(m_vrate);
        }
      };
    }
  }
}

DUNE_TASK
