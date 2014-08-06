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
//***************************************************************************

// DUNE headers.
#include <DUNE/DUNE.hpp>

namespace Maneuver
{
  namespace YoYo
  {
    using DUNE_NAMESPACES;

    struct Arguments
    {
      //! Saturation level for variation in pitch references.
      double variation;
      //! True if we should check path errors and stabilize pitch
      bool check_errors;
      //! Max course error.
      double u_course;
      //! Max cross. track error.
      double u_ctrack;
    };

    struct Task: public DUNE::Maneuvers::Maneuver
    {
      //! Desired path message.
      IMC::DesiredPath m_path;
      //! Desired pitch message.
      IMC::DesiredPitch m_pitch;
      //! Z units for this maneuver
      IMC::ZUnits m_zunits;
      //! Yoyo motion controller
      DUNE::Control::YoYoMotion* m_yoyo;
      //! On course flag.
      bool m_on_course;
      //! Course recovered flag.
      bool m_course_recovered;
      //! Some pitch reference has been dispatched already.
      bool m_dispatched;
      //! Task arguments.
      Arguments m_args;

      Task(const std::string& name, Tasks::Context& ctx):
        DUNE::Maneuvers::Maneuver(name, ctx),
        m_yoyo(NULL),
        m_dispatched(false)
      {
        param("Maximum Pitch Variation", m_args.variation)
        .defaultValue("2")
        .units(Units::Degree)
        .description("Maximum pitch variation step when changing z direction");

        param("Check Path Errors", m_args.check_errors)
        .defaultValue("false")
        .description("True if we should check path errors and stabilize pitch");

        param("Maximum Cross Track Error", m_args.u_ctrack)
        .defaultValue("6")
        .units(Units::Meter)
        .description("Maximum cross track error admissible");

        param("Maximum Course Error", m_args.u_course)
        .defaultValue("15")
        .units(Units::Degree)
        .description("Maximum course error admissible");

        bindToManeuver<Task, IMC::YoYo>();
        bind<IMC::EstimatedState>(this);
      }

      void
      onUpdateParameters(void)
      {
        if (paramChanged(m_args.variation))
          m_args.variation = Angles::radians(m_args.variation);

        if (paramChanged(m_args.u_course))
          m_args.u_course = Angles::radians(m_args.u_course);
      }

      void
      onResourceRelease(void)
      {
        Memory::clear(m_yoyo);
      }

      void
      consume(const IMC::YoYo* maneuver)
      {
        // Enable path, pitch and speed control
        setControl(IMC::CL_PATH | IMC::CL_PITCH);

        m_path.end_lat = maneuver->lat;
        m_path.end_lon = maneuver->lon;

        m_path.speed = maneuver->speed;
        m_path.speed_units = maneuver->speed_units;

        // disable depth control within path control
        m_path.flags = IMC::DesiredPath::FL_NO_Z;
        dispatch(m_path);

        m_zunits = static_cast<IMC::ZUnits>(maneuver->z_units);

        double zref;

        if (maneuver->z_units == IMC::Z_ALTITUDE)
        {
          zref = - maneuver->z;
        }
        else if (maneuver->z_units == IMC::Z_DEPTH)
        {
          zref = maneuver->z;
        }
        else
        {
          signalInvalidZ();
          return;
        }

        debug("altitude/depth :[%0.2f %0.2f] | %s: %0.2f %s | %s: %0.2f %s %d %s",
              std::fabs(maneuver->z - maneuver->amplitude),
              std::fabs(maneuver->z + maneuver->amplitude),
              "pitch", Angles::degrees(maneuver->pitch),
              "degrees", "speed", m_path.speed,
              "in", (int)m_path.speed_units, "units");

        // basic init.
        m_on_course = false;
        m_course_recovered = false;

        // initialize yoyo motion controller
        Memory::clear(m_yoyo);

        m_yoyo = new YoYoMotion(this, maneuver->pitch, zref,
                                maneuver->amplitude, m_args.variation);
      }

      void
      onPathControlState(const IMC::PathControlState* pcs)
      {
        if (pcs->flags & IMC::PathControlState::FL_NEAR)
        {
          // done, stabilize pitch at the end
          m_pitch.value = 0;
          dispatch(m_pitch);
          signalCompletion();
          return;
        }

        signalProgress(pcs->eta);

        // Check if off-track (stabilize pitch otherwise)
        if (m_args.check_errors &&
            (std::fabs(pcs->course_error) >= m_args.u_course ||
             std::fabs(pcs->y) >= m_args.u_ctrack))
        {
          m_on_course = false;
          m_course_recovered = false;
        }
        else if (!m_on_course)
        {
          m_on_course = true;
          m_course_recovered = true;
        }
      }

      void
      consume(const IMC::EstimatedState* state)
      {
        if (m_zunits == IMC::Z_DEPTH)
        {
          update(state->depth, state->theta);
        }
        else if ((state->alt >= 0) && (m_zunits == IMC::Z_ALTITUDE))
        {
          update(-state->alt, state->theta);
        }
        else
        {
          signalNoAltitude();
          return;
        }
      }

      //! update the maneuver with a depth or altitude value
      //! a negative value will be interpreted as an altitude
      //! @param[in] state_z current z position
      //! @param[in] theta current pitch angle
      void
      update(double state_z, double theta)
      {
        // Pitch value for control
        double v;

        if (!m_on_course)
        {
          // Stabilize pitch at 0 degrees
          v = m_yoyo->stabilize(0.0, theta);
        }
        else if (m_course_recovered)
        {
          // yo-yo again after course is recovered
          v = m_yoyo->update(true, state_z, theta);
          m_course_recovered = false;
        }
        else
        {
          v = m_yoyo->update(false, state_z, theta);
        }

        // dont bother sending message if the value remains the same
        // which will happen frequently
        if ((m_pitch.value == v) && (m_dispatched))
          return;

        // Dispatch pitch message
        m_pitch.value = v;
        dispatch(m_pitch);

        m_dispatched = true;
      }
    };
  }
}

DUNE_TASK
