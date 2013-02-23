//***************************************************************************
// Copyright (C) 2007-2013 Laboratório de Sistemas e Tecnologia Subaquática *
// Departamento de Engenharia Electrotécnica e de Computadores              *
// Rua Dr. Roberto Frias, 4200-465 Porto, Portugal                          *
//***************************************************************************
// Author: Eduardo Marques                                                  *
//***************************************************************************
// $Id:: Task.cpp 12695 2013-01-23 22:54:41Z rasm                         $:*
//***************************************************************************

//***************************************************************************
// Reference:
//  "Vector Field Path Following for Miniature Air Vehicles",
//  Nelson, Barber, McLain and Beard,
//  Proc. American Control Conference, 2006 (ACC'06)
//***************************************************************************

// ISO C++ 98 headers.
#include <iomanip>
#include <cmath>

// DUNE headers.
#include <DUNE/DUNE.hpp>

using DUNE_NAMESPACES;

namespace Control
{
  namespace Path
  {
    namespace VectorField
    {
      struct Arguments
      {
        double corridor;
        double entry_angle;
        bool ext_control;
        double ext_gain;
        double ext_trgain;
      };

      struct Task: public DUNE::Control::PathController
      {
        //! Controller gain.
        double m_gain;
        //! Outgoing desired heading message.
        IMC::DesiredHeading m_heading;
        //! Task arguments.
        Arguments m_args;

        Task(const std::string& name, Tasks::Context& ctx):
          DUNE::Control::PathController(name, ctx)
        {
          param("Corridor -- Width", m_args.corridor)
          .minimumValue("1.0")
          .maximumValue("50.0")
          .defaultValue("5.0")
          .units(Units::Meter)
          .description("Width of corridor for attack entry angle");

          param("Corridor -- Entry Angle", m_args.entry_angle)
          .minimumValue("2")
          .maximumValue("45")
          .defaultValue("15")
          .units(Units::Degree)
          .description("Attack angle when lateral track error equals corridor width");

          param("Extended Control -- Enabled", m_args.ext_control)
          .defaultValue("false")
          .description("Enable extended (refined) corridor control");

          param("Extended Control -- Controller Gain", m_args.ext_gain)
          .defaultValue("1.0")
          .description("Gain for extended control");

          param("Extended Control -- Turn Rate Gain", m_args.ext_trgain)
          .defaultValue("1.0")
          .description("Turn rate gain for extended control");
        }

        void
        onUpdateParameters(void)
        {
          PathController::onUpdateParameters();
          m_args.entry_angle = Angles::radians(m_args.entry_angle);
          m_gain = std::tan(m_args.entry_angle) / m_args.corridor;
        }

        void
        onEntityReservation(void)
        {
          PathController::onEntityReservation();
        }

        void
        onPathActivation(void)
        {
          // Activate heading cotroller.
          enableControlLoops(IMC::CL_YAW);
        }

        //! Execute a path control step
        //! From base class PathController
        void
        step(const IMC::EstimatedState& state, const TrackingState& ts)
        {
          // Note:
          // cross-track position (lateral error) = ts.track_pos.y
          // and along-track position = ts.track_pos.x
          double kcorr = ts.track_pos.y / m_args.corridor;
          double akcorr = std::fabs(kcorr);

          double ref;

          if (ts.track_pos.x > ts.track_length)
          {
            // Past the track goal: this should never happen but ...
            ref = getBearing(state, ts.end);
          }
          else if (akcorr > 1 || !m_args.ext_control)
          {
            // Outside corridor
            ref = ts.track_bearing - std::atan(m_gain * ts.track_pos.y);
          }
          else if (akcorr > 0.05)
          {
            // Inside corridor
            ref = ts.track_bearing
            - std::pow(kcorr, m_args.ext_gain) * m_args.entry_angle
            * (1 +
               (m_gain * ts.speed * std::sin(ts.course - ts.track_bearing))
               / (m_args.ext_trgain * ts.track_pos.y));
          }
          else
          {
            // Over track (avoid singularities)
            ref = ts.track_bearing;
          }

          if (ts.cc)
            ref += state.psi - ts.course;  // course control rather than yaw control

          spew("lte=%0.1f cadj=%0.1f attack=%0.1f", std::fabs(ts.track_pos.y),
               Angles::degrees(Angles::normalizeRadian(std::fabs(state.psi - std::atan2(state.vy, state.vx)))),
               Angles::degrees(Angles::normalizeRadian(std::fabs(ts.track_bearing - ref))));

          // Dispatch heading reference
          m_heading.value = Angles::normalizeRadian(ref);
          dispatch(m_heading);
        }

        //! Execute a loiter control step
        //! From base class PathController
        void
        loiter(const IMC::EstimatedState& state, const TrackingState& ts)
        {
          double ref = DUNE::Math::c_half_pi + std::atan(2 * m_gain * (ts.range - ts.loiter.radius));

          if (!ts.loiter.clockwise)
            ref = -ref;

          ref += DUNE::Math::c_pi + ts.los_angle;

          if (ts.cc)
            ref += state.psi - ts.course;  // course control

          // Dispatch heading reference
          m_heading.value = Angles::normalizeRadian(ref);
          dispatch(m_heading);
        }
      };
    }
  }
}

DUNE_TASK
