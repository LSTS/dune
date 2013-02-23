//***************************************************************************
// Copyright (C) 2007-2013 Laboratório de Sistemas e Tecnologia Subaquática *
// Departamento de Engenharia Electrotécnica e de Computadores              *
// Rua Dr. Roberto Frias, 4200-465 Porto, Portugal                          *
//***************************************************************************
// Author: Eduardo Marques                                                  *
// Author: Ricardo Bencatel                                                 *
// Author: Filipe Ferreira                                                  *
//***************************************************************************
// $Id:: Task.cpp 12695 2013-01-23 22:54:41Z rasm                         $:*
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
        double la_gain; // Looakhead gain
        double tr_gain; // Turn rate gain
        double max_bank; // Max bank.
      };

      struct Task: public DUNE::Control::PathController
      {
        Arguments m_args;
        IMC::DesiredRoll m_bank;

        Task(const std::string& name, Tasks::Context& ctx):
          DUNE::Control::PathController(name, ctx)
        {
          param("Look Ahead Gain", m_args.la_gain)
          .defaultValue("1.0")
          .description("Lookahead again for control");

          param("Turn Rate Gain", m_args.tr_gain)
          .defaultValue("0.005")
          .description("Lookahead again for control");

          param("Maximum Bank", m_args.max_bank)
          .units(Units::Degree)
          .minimumValue("5")
          .maximumValue("45")
          .defaultValue("30")
          .description("Limit for absolute value of output bank reference");
        }

        void
        onUpdateParameters(void)
        {
          PathController::onUpdateParameters();

          m_args.max_bank = Angles::radians(m_args.max_bank);
          m_args.la_gain = m_args.la_gain / (Math::c_gravity * std::tan(m_args.max_bank));
        }

        void
        onPathActivation(void)
        {
          // Activate bank (roll) controller.
          enableControlLoops(IMC::CL_ROLL);
        }

        void
        step(const IMC::EstimatedState& state, const TrackingState& ts)
        {
          if (std::fabs(ts.track_vel.y) <= -ts.track_vel.x)
          {
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
            double speed = std::sqrt(state.u * state.u + state.v * state.v + state.w * state.w);
            double xla = m_args.la_gain * speed * speed;
            double desired_tr = -m_args.tr_gain * (xla * ts.track_vel.y + ts.track_pos.y * ts.track_vel.x);

            m_bank.value = std::atan(desired_tr * speed / Math::c_gravity);
            m_bank.value = trimValue(m_bank.value, -m_args.max_bank, m_args.max_bank);
          }

          // Send to bus
          dispatch(m_bank);
        }
      };
    }
  }
}

DUNE_TASK
