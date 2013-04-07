//***************************************************************************
// Copyright 2007-2013 Universidade do Porto - Faculdade de Engenharia      *
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
// Author: Jose Pinto                                                       *
//***************************************************************************

// DUNE headers.
#include <DUNE/DUNE.hpp>

namespace Maneuver
{
  namespace FollowReference
  {
    using DUNE_NAMESPACES;

    struct Arguments
    {
      float vertical_tolerance;
      float horizontal_tolerance;
      float loitering_radius;
      float default_speed;
      std::string default_speed_units;
      float default_z;
      std::string default_z_units;
    };

    struct Task : public DUNE::Maneuvers::Maneuver
    {
      //! Store maneuver specification
      IMC::FollowReference m_spec;
      //! Store latest received reference
      IMC::Reference m_cur_ref;
      IMC::Reference m_last_ref;
      //! Estimated state
      IMC::EstimatedState m_estate;
      //! Path Control state
      IMC::PathControlState m_pcs;
      //! FollowRefState
      IMC::FollowRefState m_fref_state;
      //! Did we get a reference already?
      bool m_got_reference;
      //! Are we moving or idle (floating)
      bool m_moving;
      //! Store last timestamp when reference was received
      double m_last_ref_time;
      //! Task arguments.
      Arguments m_args;

      Task(const std::string& name, Tasks::Context& ctx):
        DUNE::Maneuvers::Maneuver(name, ctx)
      {
        param("Loitering Radius", m_args.loitering_radius)
        .defaultValue("7.5")
        .units(Units::Meter).
        description("Radius of loitering circle after arriving at destination");

        param("Horizontal Tolerance", m_args.horizontal_tolerance)
        .defaultValue("15.0")
        .units(Units::Meter)
        .description("Minimum distance required to consider that the vehicle has arrived at the reference (XY)");

        param("Vertical Tolerance", m_args.vertical_tolerance)
        .defaultValue("2.0")
        .units(Units::Meter)
        .description("Minimum distance required to consider that the vehicle has arrived at the reference (Z)");

        param("Default Speed", m_args.default_speed)
        .defaultValue("50")
        .description("Speed to use in case no speed is given by reference source.");

        param("Default Speed Units", m_args.default_speed_units)
        .defaultValue("%")
        .description("Units to use for default speed (one of 'm/s', 'rpm' or '%').");

        param("Default Z", m_args.default_z)
        .defaultValue("0")
        .units(Units::Meter)
        .description("Default z when no vertical reference is given.");

        param("Default Z Units", m_args.default_z_units)
        .defaultValue("DEPTH")
        .units(Units::Meter)
        .description("Units to use for default z reference (one of 'DEPTH', 'ALTITUDE' or 'HEIGHT')");

        m_got_reference = false;
        m_moving = false;
        m_last_ref_time = 0;

        bindToManeuver<Task, IMC::FollowReference>();
        bind<IMC::Reference>(this);
        bind<IMC::EstimatedState>(this);
        bind<IMC::PathControlState>(this);
      }

      void
      consume(const IMC::FollowReference* msg)
      {
        m_moving = false;
        m_got_reference = false;
        m_spec = *msg;
        m_last_ref_time = Clock::get();

        m_fref_state.proximity = IMC::FollowRefState::PROX_FAR;
        m_fref_state.state = IMC::FollowRefState::FR_WAIT;
        m_fref_state.control_ent = msg->control_ent;
        m_fref_state.control_src = msg->control_src;

        // send a notify to controlling peer that the maneuver was activated
        dispatch(m_fref_state);

        inf("waiting for first reference");
      }

      bool
      sameReference(const IMC::Reference *msg1, const IMC::Reference *msg2)
      {
        if (msg1->flags != msg2->flags)
          return false;
        if (msg1->lat != msg2->lat)
          return false;
        if (msg1->lon != msg2->lon)
          return false;

        if (msg1->z.isNull() != msg2->z.isNull())
          return false;
        else if (!msg1->z.isNull())
        {
          const IMC::DesiredZ *z1 = msg1->z.get();
          const IMC::DesiredZ *z2 = msg2->z.get();

          if (!z1->fieldsEqual(*z2))
              return false;
        }

        if (msg1->speed.isNull() != msg2->speed.isNull())
          return false;
        else if (!msg1->speed.isNull())
        {
          const IMC::DesiredSpeed *s1 = msg1->speed.get();
          const IMC::DesiredSpeed *s2 = msg2->speed.get();

          if (!s1->fieldsEqual(*s2))
            return false;
        }

        return true;
      }

      //! Consume Reference messages and generate DesiredPath messages accordingly
      //! Whenever a new Reference is received from a valid source, a new desired_path
      //! gets commanded to the vehicle.
      //! @see https://!whale.fe.up.pt/imc/doc/trunk/Maneuvering.html#follow-reference-maneuver
      //! @param msg the Reference message to be processed
      void
      consume(const IMC::Reference* msg)
      {
        // verify that the source is acceptable
        if (m_spec.control_src != 0xFFFF
            && m_spec.control_src != msg->getSource())
        {
          inf("ignored reference from non-authorized source: %d",
              msg->getSource());
          return;
        }

        // verify that the source entity is acceptable
        if (m_spec.control_ent != 0xFF
            && m_spec.control_ent != msg->getSourceEntity())
        {
          inf("ignored reference from non-authorized entity: %d",
              msg->getSource());
          return;
        }

        m_got_reference = true;
        m_last_ref_time = Clock::get();

        m_last_ref = m_cur_ref;
        m_cur_ref = *msg;

        if (m_cur_ref.flags & IMC::Reference::FLAG_MANDONE)
        {
          m_fref_state.proximity = IMC::FollowRefState::PROX_FAR;
          m_fref_state.state = IMC::FollowRefState::FR_WAIT;

          signalCompletion("maneuver terminated by reference source");
        }

        guide(&m_pcs, &m_cur_ref, &m_estate);
      }

      void
      consume(const IMC::EstimatedState* msg)
      {
        m_estate = *msg;
        double delta = 0;

        if (m_spec.timeout != 0)
          delta = Clock::get() - m_last_ref_time;

        if (delta > m_spec.timeout)
        {
          m_fref_state.state = IMC::FollowRefState::FR_TIMEOUT;
          dispatch(m_fref_state);
          signalError("reference source timed out");
        }
      }

      void
      consume(const IMC::PathControlState* pcs)
      {
        m_pcs = *pcs;
      }

      IMC::SpeedUnits
      parseSpeedUnitsStr(std::string sunits_str)
      {
        if (sunits_str == "m/s")
          return IMC::SUNITS_METERS_PS;
        else if (sunits_str == "rpm")
          return IMC::SUNITS_RPM;
        else
          return IMC::SUNITS_PERCENTAGE;
      }

      IMC::ZUnits
      parseZUnitsStr(std::string zunits_str)
      {
        if (zunits_str == "HEIGHT")
          return IMC::Z_HEIGHT;
        else if (zunits_str == "ALTITUDE")
          return IMC::Z_ALTITUDE;
        else if (zunits_str == "DEPTH")
          return IMC::Z_DEPTH;
        else
          return IMC::Z_NONE;
      }

      void
      guide(const IMC::PathControlState* pcs, const IMC::Reference* ref, const IMC::EstimatedState* state)
      {

    	  // start building the DesiredPath message to be commanded
        IMC::DesiredPath desired_path;
        double curlat = state->lat;
        double curlon = state->lon;
        bool near_ref = (pcs == NULL) ? false : (pcs->flags & IMC::PathControlState::FL_NEAR) != 0;

        WGS84::displace(state->x, state->y, &curlat, &curlon);

        // command start corresponds to current position
        desired_path.start_lat = curlat;
        desired_path.start_lon = curlon;
        desired_path.flags = IMC::DesiredPath::FL_DIRECT;

        // set end location according to received reference
        if (ref->flags & IMC::Reference::FLAG_LOCATION)
        {
          // use new reference
          desired_path.end_lat = ref->lat;
          desired_path.end_lon = ref->lon;
        }
        else if (m_got_reference)
        {
          // use previously received reference
          desired_path.end_lat = m_cur_ref.lat;
          desired_path.end_lon = m_cur_ref.lon;
        }
        else
        {
          // just stay where we are
          desired_path.end_lat = curlat;
          desired_path.end_lon = curlon;
        }

        // set speed according to received reference. If the reference does not
        // provide a desired speed, use last sent speed
        if ((ref->flags & IMC::Reference::FLAG_SPEED) && !(ref->speed.isNull()))
        {
          desired_path.speed = ref->speed->value;
          desired_path.speed_units = ref->speed->speed_units;
        }
        else if (m_got_reference && !m_cur_ref.speed.isNull())
        {
          desired_path.speed = m_cur_ref.speed->value;
          desired_path.speed_units = m_cur_ref.speed->speed_units;
        }
        else
        {
          // default speed
          desired_path.speed = m_args.default_speed;
          desired_path.speed_units = parseSpeedUnitsStr(m_args.default_speed_units);
        }

        // set end_z according to received reference
        if ((ref->flags & IMC::Reference::FLAG_Z) && !(ref->z.isNull()))
        {
          desired_path.end_z = ref->z->value;
          desired_path.end_z_units = ref->z->z_units;
        }
        else if (m_got_reference && !m_cur_ref.z.isNull())
        {
          desired_path.end_z = m_cur_ref.z->value;
          desired_path.end_z_units = m_cur_ref.z->z_units;
        }
        else
        {
          desired_path.end_z = m_args.default_z;
          desired_path.end_z_units = parseZUnitsStr(m_args.default_z_units);
        }

        // check to see if we are already at the target...
        double xy_dist = WGS84::distance(desired_path.end_lat,
                                         desired_path.end_lon, 0, curlat,
                                         curlon, 0);

        double z_dist;

        switch (desired_path.end_z_units)
        {
          case (IMC::Z_DEPTH):
            z_dist = std::abs(desired_path.end_z - m_estate.depth);
            break;
          case (IMC::Z_ALTITUDE):
            z_dist = std::abs(desired_path.end_z - m_estate.alt);
            break;
          case (IMC::Z_HEIGHT):
            z_dist = std::abs(desired_path.end_z - m_estate.height);
            break;
          default:
            z_dist = 0;
            break;
        }

        bool at_z_target = z_dist < m_args.vertical_tolerance;
        bool at_xy_target = xy_dist < m_args.horizontal_tolerance;
        bool target_at_surface = desired_path.end_z == 0 && desired_path.end_z_units == Z_DEPTH;
        bool still_same_reference = sameReference(ref, &m_last_ref);
        int prevMode = m_fref_state.state;

        if (still_same_reference)
        {
          switch (prevMode)
          {
            case (IMC::FollowRefState::FR_GOTO):
              if (near_ref)
              {
                if (at_z_target && target_at_surface)
                {
                  m_fref_state.state = IMC::FollowRefState::FR_HOVER;
                  m_fref_state.proximity = IMC::FollowRefState::PROX_XY_NEAR
                  | IMC::FollowRefState::PROX_Z_NEAR;
                }
                else if (at_z_target && !target_at_surface)
                {
                  m_fref_state.state = IMC::FollowRefState::FR_LOITER;
                  m_fref_state.proximity = IMC::FollowRefState::PROX_XY_NEAR
                  | IMC::FollowRefState::PROX_Z_NEAR;
                }
                else
                {
                  m_fref_state.state = IMC::FollowRefState::FR_ELEVATOR;
                  m_fref_state.proximity = IMC::FollowRefState::PROX_XY_NEAR;
                }
              }
              break;
            case (IMC::FollowRefState::FR_HOVER):
              if (!at_xy_target)
              {
                m_fref_state.state = IMC::FollowRefState::FR_GOTO;
                m_fref_state.proximity = IMC::FollowRefState::PROX_Z_NEAR;
              }
              break;
            case (IMC::FollowRefState::FR_ELEVATOR):
              if (at_z_target && target_at_surface)
              {
                m_fref_state.state = IMC::FollowRefState::FR_HOVER;
                m_fref_state.proximity = IMC::FollowRefState::PROX_XY_NEAR
                | IMC::FollowRefState::PROX_Z_NEAR;
              }
              if (at_z_target && !target_at_surface)
              {
                m_fref_state.state = IMC::FollowRefState::FR_LOITER;
                m_fref_state.proximity = IMC::FollowRefState::PROX_XY_NEAR
                | IMC::FollowRefState::PROX_Z_NEAR;
              }
              break;
          }
        }
        else
        {
          if (!at_xy_target)
          {
            m_fref_state.state = IMC::FollowRefState::FR_GOTO;
            m_fref_state.proximity =
            at_z_target ? IMC::FollowRefState::PROX_Z_NEAR :
            IMC::FollowRefState::PROX_FAR;
          }
          if (at_xy_target && !at_z_target)
          {
            m_fref_state.state = IMC::FollowRefState::FR_ELEVATOR;
            m_fref_state.proximity = IMC::FollowRefState::PROX_XY_NEAR;
          }
          if (at_z_target && at_xy_target && target_at_surface)
          {
            m_fref_state.state = IMC::FollowRefState::FR_HOVER;
            m_fref_state.proximity = IMC::FollowRefState::PROX_XY_NEAR
            | IMC::FollowRefState::PROX_Z_NEAR;
          }
          if (at_z_target && at_xy_target && !target_at_surface)
          {
            m_fref_state.state = IMC::FollowRefState::FR_LOITER;
            m_fref_state.proximity = IMC::FollowRefState::PROX_XY_NEAR
            | IMC::FollowRefState::PROX_Z_NEAR;
          }
        }

        m_fref_state.reference.set(*ref);
        dispatch(m_fref_state);

        if (sameReference(ref, &m_last_ref) && m_fref_state.state == prevMode)
        {
          // nothing to do
          return;
        }

        // dispatch new desired path
        switch(m_fref_state.state)
        {
          case (IMC::FollowRefState::FR_LOITER):
            desired_path.lradius = m_args.loitering_radius;
            enableMovement(true);
            dispatch(desired_path);
            inf("loitering around (%f, %f, %f).", Angles::degrees(desired_path.end_lat), Angles::degrees(desired_path.end_lon), desired_path.end_z);
            break;
          case (IMC::FollowRefState::FR_ELEVATOR):
            desired_path.lradius = m_args.loitering_radius;
            enableMovement(true);
            dispatch(desired_path);
            inf("loitering towards (%f, %f, %f).", Angles::degrees(desired_path.end_lat), Angles::degrees(desired_path.end_lon), desired_path.end_z);
            break;
          case (IMC::FollowRefState::FR_GOTO):
            enableMovement(true);
            dispatch(desired_path);
            inf("going towards (%f, %f, %f).", Angles::degrees(desired_path.end_lat), Angles::degrees(desired_path.end_lon), desired_path.end_z);
            break;
          default:
            inf("hovering next to (%f, %f).", Angles::degrees(desired_path.end_lat), Angles::degrees(desired_path.end_lon));
            enableMovement(false);
            break;
        }
      }

      //! Function for enabling and disabling the control loops
      void
      enableMovement(bool enable)
      {
        const uint32_t mask = IMC::CL_PATH;

        if (enable)
        {
          // set control loops in order to move
          setControl(mask);
          m_moving = true;
        }
        else
        {
          // stop moving by setting control loops to zero
          m_moving = false;
          setControl(0);
        }
      }
    };
  }
}

DUNE_TASK
