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
        double k_ss;
        double k_vr;
        double phi_ss;
        double phi_h;
      };

      struct Task: public DUNE::Control::PathController
      {
        Arguments m_args;
        IMC::DesiredVerticalRate m_vrate;
        double m_h_dot_cmd;
        double m_airspeed;
        bool m_first_run;

        Task(const std::string& name, Tasks::Context& ctx):
          DUNE::Control::PathController(name, ctx)
        {
          param("Sliding Surface maximum gain", m_args.k_ss)
              .units(Units::MeterPerSquareSecond)
          .defaultValue("0.1")
          .description("Sliding Surface maximum gain for control");

          param("Vertical Rate maximum gain", m_args.k_vr)
          .defaultValue("0.15")
          .description("Vertical Rate maximum gain for control");

          param("Sliding Surface bandwidth", m_args.phi_ss)
          .units(Units::MeterPerSecond)
          .defaultValue("10")
          .description("Limit for absolute value of output bank angle reference");

          param("Height bandwidth", m_args.phi_h)
          .units(Units::Meter)
          .defaultValue("20")
          .description("Limit for absolute value of output bank angle reference");

          bind<IMC::IndicatedSpeed>(this);
        }

        void
        onUpdateParameters(void)
        {
          PathController::onUpdateParameters();
        }

        void
        onPathActivation(void)
        {
          // Activate vertical rate controller.
          enableControlLoops(IMC::CL_VERTICAL_RATE);
          m_first_run = true;
        }

        void
        consume(const IMC::IndicatedSpeed* airspeed)
        {
          m_airspeed = airspeed->value;
        }

        bool
        hasSpecificZControl(void)
        {
          return true;
        }

        void
        step(const IMC::EstimatedState& state, const TrackingState& ts)
        {
          if (m_first_run)
          {
            m_h_dot_cmd = state.vz;
            m_first_run = false;
          }

          double delta_h = ts.end.z - (state.height - state.z);
          double delta_h_dot = state.vz; //should be -h_dot, but z is pointing down and h is up

          double h_dotdot;

          if (std::abs(delta_h / m_args.phi_h) < 1)
          {
            double delta_h_phi = (delta_h / m_args.phi_h);
            double trimmed_ss = trimValue((delta_h_dot + (m_args.k_vr * m_airspeed * delta_h_phi)) / m_args.phi_ss,-1,1);
            h_dotdot = m_args.k_ss * trimmed_ss + m_args.k_vr * m_airspeed * (delta_h_dot / m_args.phi_h);
          }
          else
          {
            double trimmed_ss = trimValue((delta_h_dot + (m_args.k_vr * m_airspeed)) / m_args.phi_ss,-1,1);
            h_dotdot = m_args.k_ss * trimmed_ss;
          }

          double h_dot_cmd_tmp = m_h_dot_cmd + h_dotdot * ts.delta;

//          if (std::abs(h_dot_cmd_tmp) < m_airspeed * m_args.k_vr)
//            m_h_dot_cmd = h_dot_cmd_tmp;
          m_h_dot_cmd = trimValue(h_dot_cmd_tmp, -(m_airspeed * m_args.k_vr), (m_airspeed * m_args.k_vr));

          m_vrate.value = m_h_dot_cmd;

          // Send to bus
          dispatch(m_vrate);
        }
      };
    }
  }
}

DUNE_TASK
