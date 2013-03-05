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

    enum FREF_STATE
    {
      //! Waiting for first reference
      FREF_BOOT = 1,
      //! Following
      FREF_GOING = 2,
      //! Loitering
      FREF_LOITERING = 3,
      //! Hovering
      FREF_HOVERING = 4,
      //! Vertical movement
      FREF_ELEVATOR = 5
    };

    struct Task : public DUNE::Maneuvers::Maneuver
    {
      //! Task arguments.
      Arguments m_args;
      //! Store maneuver specification
      IMC::FollowReference m_spec;
      //! Store latest received reference
      IMC::Reference m_cur_ref;
      //! Estimated state
      IMC::EstimatedState m_estate;
      //! FollowRefState
      IMC::FollowRefState m_fref_state;

      //! Did we get a reference already?
      bool m_got_reference;
      //! Are we moving or idle (floating)
      bool m_moving;
      //! Store last timestamp when reference was received
      double m_last_ref_time;
      //! Stores the current execution state
      FREF_STATE state;

      Task(const std::string& name, Tasks::Context& ctx) :
        DUNE::Maneuvers::Maneuver(name, ctx), m_got_reference(false), m_moving(
            false), m_last_ref_time(0), state(FREF_BOOT)
      {

        param("Loitering Radius", m_args.loitering_radius).defaultValue("7.5").units(
            Units::Meter).description(
                "Radius of loitering circle after arriving at destination");

        param("Horizontal Tolerance", m_args.horizontal_tolerance).defaultValue(
            "15.0").units(Units::Meter).description(
                "Minimum distance required to consider that the vehicle has arrived at the reference (XY)");

        param("Vertical Tolerance", m_args.vertical_tolerance).defaultValue(
            "2.0").units(Units::Meter).description(
                "Minimum distance required to consider that the vehicle has arrived at the reference (Z)");

        param("Default Speed", m_args.default_speed).defaultValue("50")
                                                .description("Speed to use in case no speed is given by reference source.");

        param("Default Speed Units", m_args.default_speed_units).defaultValue("%")
                                                .description("Units to use for default speed (one of 'm/s', 'rpm' or '%').");

        param("Default Z", m_args.default_z).defaultValue("0")
                                                .units(Units::Meter)
                                                .description("Default z when no vertical reference is given.");

        param("Default Z Units", m_args.default_z_units).defaultValue("DEPTH")
                                                .units(Units::Meter)
                                                .description("Units to use for default z reference (one of 'DEPTH', 'ALTITUDE' or 'HEIGHT')");

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
        state = FREF_BOOT;

        m_fref_state.proximity = IMC::FollowRefState::PROX_FAR;
        m_fref_state.state = IMC::FollowRefState::FR_WAIT;
        m_fref_state.control_ent = msg->control_ent;
        m_fref_state.control_src = msg->control_src;

        // send a notify to controlling peer that the maneuver was activated
        dispatch(m_fref_state);
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

        const DesiredZ *z1 = msg1->z.get();
        const DesiredZ *z2 = msg2->z.get();
        const DesiredSpeed *s1 = msg1->speed.get();
        const DesiredSpeed *s2 = msg2->speed.get();

        if (!z1->fieldsEqual(*z2))
          return false;

        if (!s1->fieldsEqual(*s2))
          return false;

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

        if (sameReference(msg, &m_cur_ref)) {
          return;
        }
        else
        {
          m_cur_ref = *msg;
        }

        if (m_cur_ref.flags & IMC::Reference::FLAG_MANDONE)
        {
          m_fref_state.proximity = IMC::FollowRefState::PROX_FAR;
          m_fref_state.state = IMC::FollowRefState::FR_WAIT;

          signalCompletion("maneuver terminated by reference source");
        }
        else
        {
          follow(msg);
        }
      }

      void
      consume(const IMC::EstimatedState* msg)
      {
        m_estate = *msg;
        double delta = 0;
        if (m_spec.timeout != 0)
          delta = Clock::get() - m_last_ref_time;

        if (delta > m_spec.timeout) {
          m_fref_state.state = IMC::FollowRefState::FR_TIMEOUT;
          dispatch(m_fref_state);
          signalError("reference source timed out");
        }

      }

      //! Function to check if the vehicle is getting near to the next waypoint
      void
      consume(const IMC::PathControlState* pcs)
      {

        // if we have arrived at the target, we stop moving
        if (pcs->flags & IMC::PathControlState::FL_NEAR)
        {
          follow(&m_cur_ref);
        }
      }

      SpeedUnits
      parseSpeedUnitsStr(std::string sunits_str)
      {
        if (sunits_str == "m/s")
          return IMC::SUNITS_METERS_PS;
        else if (sunits_str == "rpm")
          return IMC::SUNITS_RPM;
        else
          return IMC::SUNITS_PERCENTAGE;
      }

      ZUnits
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

      //! This method updates current reference, possibly generating movement
      //! or not (if vehicle already in the vicinity of the target).
      void
      follow(const IMC::Reference* msg)
      {
        // start building the DesiredPath message to be commanded
        DesiredPath desired_path;

        // compute current position
        double curlat = m_estate.lat;
        double curlon = m_estate.lon;
        WGS84::displace(m_estate.x, m_estate.y, &curlat, &curlon);

        // command start corresponds to current position
        desired_path.start_lat = curlat;
        desired_path.start_lon = curlon;
        desired_path.flags = IMC::DesiredPath::FL_DIRECT;

        // set end location according to received reference
        if (msg->flags & IMC::Reference::FLAG_LOCATION)
        {
          // use new reference
          desired_path.end_lat = msg->lat;
          desired_path.end_lon = msg->lon;
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
        if ((msg->flags & IMC::Reference::FLAG_SPEED) && !(msg->speed.isNull()))
        {
          desired_path.speed = msg->speed->value;
          desired_path.speed_units = msg->speed->speed_units;
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
        if ((msg->flags & IMC::Reference::FLAG_Z) && !(msg->z.isNull()))
        {
          desired_path.end_z = msg->z->value;
          desired_path.end_z_units = msg->z->z_units;
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
          case (Z_DEPTH):
                                                z_dist = std::abs(desired_path.end_z - m_estate.depth);
          break;
          case (Z_ALTITUDE):
                                                z_dist = std::abs(desired_path.end_z - m_estate.alt);
          break;
          case (Z_HEIGHT):
                                                z_dist = std::abs(desired_path.end_z - m_estate.height);
          break;
          default:
            z_dist = 0;
            break;
        }

        state = FREF_GOING;
        // if inside target cylinder
        if (xy_dist < m_args.horizontal_tolerance)
        {

          // if inside desired location
          if (z_dist < 1 && desired_path.end_z == 0
              && desired_path.end_z_units == Z_DEPTH)
          {
            state = FREF_HOVERING;
            enableMovement(false);
            return;
          }
          else if (z_dist < m_spec.altitude_interval)
          {
            state = FREF_LOITERING;
          }
          else
          {
            state = FREF_ELEVATOR;
          }
        }

        if (!m_moving)
          enableMovement(true);

        switch (state)
        {
          case FREF_GOING:
            m_fref_state.proximity = IMC::FollowRefState::PROX_FAR;
            m_fref_state.state = IMC::FollowRefState::FR_GOING;
            break;
          case FREF_ELEVATOR:
            m_fref_state.proximity = IMC::FollowRefState::PROX_XY_NEAR;
            m_fref_state.state = IMC::FollowRefState::FR_GOING;
            desired_path.lradius = m_args.loitering_radius;
            break;
          case FREF_LOITERING:
            m_fref_state.proximity = IMC::FollowRefState::PROX_XY_NEAR | IMC::FollowRefState::PROX_Z_NEAR;
            m_fref_state.state = IMC::FollowRefState::FR_STAYING;
            desired_path.lradius = m_args.loitering_radius;
            break;
          case FREF_HOVERING:
            m_fref_state.proximity = IMC::FollowRefState::PROX_XY_NEAR | IMC::FollowRefState::PROX_Z_NEAR;
            m_fref_state.state = IMC::FollowRefState::FR_STAYING;
            break;
          default:
            break;
        }

        m_fref_state.reference.set(*msg);
        dispatch(m_fref_state);
        dispatch(desired_path);
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
