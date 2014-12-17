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
// Author: Eduardo Marques                                                  *
// Author: Ricardo Bencatel                                                 *
// Author: Filipe Ferreira                                                  *
//***************************************************************************

//***************************************************************************
// Original reference:
// "LATERAL TRACK CONTROL LAW FOR AEROSONDE UAV", by M. Niculescu,
// 39th AIAA Aerospace Science Meeting and Exhibit, 2001
//***************************************************************************

// ISO C++ 98 headers.
#include <cmath>

// DUNE headers.
#include <DUNE/DUNE.hpp>

namespace Control
{
  namespace Path
  {
    namespace Aerosonde
    {
      using DUNE_NAMESPACES;

      struct Arguments
      {
        //! Look-ahead gain - Multiplies by aircraft minimum turning radius
        //! to define the distance ahead in the desired path at which the
        //! aircraft should point.
        double la_gain;
        //! Turn rate gain - Defines how sharply should the aircraft turn to
        //! to track the desired look-ahead point
        double tr_gain;
        //! Maximum bank angle - Defined by aircaft structural, navigation
        //! or control constraints
        double max_bank;
        //!
        bool use_controller;
      };

      struct Task: public DUNE::Control::PathController
      {
        Arguments m_args;
        IMC::DesiredRoll m_bank;
        double m_airspeed;

        Task(const std::string& name, Tasks::Context& ctx):
          DUNE::Control::PathController(name, ctx),
          m_airspeed(0.0)
        {
          param("Look Ahead Gain", m_args.la_gain)
          .defaultValue("1.0")
          .description("Look-ahead gain for control");

          param("Turn Rate Gain", m_args.tr_gain)
          .defaultValue("0.005")
          .description("Turn rate gain for control");

          param("Maximum Bank", m_args.max_bank)
          .units(Units::Degree)
          .minimumValue("5")
          .maximumValue("45")
          .defaultValue("30")
          .description("Limit for absolute value of output bank angle reference");

          param("Use controller", m_args.use_controller)
          .visibility(Tasks::Parameter::VISIBILITY_USER)
          .scope(Tasks::Parameter::SCOPE_MANEUVER)
          .defaultValue("false")
          .description("Use this controller for maneuver");

          bind<IMC::IndicatedSpeed>(this);
       }

        void
        onUpdateParameters(void)
        {
          PathController::onUpdateParameters();

          if (paramChanged(m_args.max_bank))
            m_args.max_bank = Angles::radians(m_args.max_bank);

          if (paramChanged(m_args.max_bank) || paramChanged(m_args.la_gain))
            m_args.la_gain = m_args.la_gain / (Math::c_gravity * std::tan(m_args.max_bank));
        }

        void
        onPathActivation(void)
        {
          if (!m_args.use_controller)
            return;
          // Activate bank (roll) controller.
          enableControlLoops(IMC::CL_ROLL);
        }

        void
        consume(const IMC::IndicatedSpeed* airspeed)
        {
          m_airspeed = airspeed->value;
        }

        void
        step(const IMC::EstimatedState& state, const TrackingState& ts)
        {
          spew("Step start");
          // Unused state
          (void) state;

          if (!m_args.use_controller)
            return;

          //! Check if airspeed is larger than zero
          if (m_airspeed <= 0)
          {
            war("No waypoint tracking control update: Airspeed <= 0!");
            return;
          }

          if (std::fabs(ts.track_vel.y) <= -ts.track_vel.x)
          {
            //! Command maximum bank angle if the aircraft is going on the
            //! opposite direction to the target waypoint
            if (ts.track_vel.y < 0)
            {
              m_bank.value = m_args.max_bank;
            }
            else
            {
              m_bank.value = -m_args.max_bank;
            }
          }
          else
          {
            //! Look-ahead distance computation
            double xla = m_args.la_gain * m_airspeed * m_airspeed;
            //! Desired turn-rate
            double desired_tr = -m_args.tr_gain * (xla * ts.track_vel.y + ts.track_pos.y * ts.track_vel.x);

            //! Output - Bank angle command, constrained
            m_bank.value = trimValue(std::atan(desired_tr * m_airspeed / Math::c_gravity),
                                     -m_args.max_bank, m_args.max_bank);
          }

          // Send to bus
          dispatch(m_bank);
          spew("DesiredBank = %3.2f deg", Math::Angles::degrees(m_bank.value));
        }
      };
    }
  }
}

DUNE_TASK
