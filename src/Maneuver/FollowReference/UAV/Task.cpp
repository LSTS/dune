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
  //! Maneuver FollowReference for when the plan execution takes z into account to declare a reference reached.
  //!
  //! @author Margarida
    namespace UAV
    {
      using DUNE_NAMESPACES;

      struct Arguments
      {
        //! Default loitering radius
        float loitering_radius;
        //! Default vehicle speed
        float default_speed;
        //! Default units for the speed
        std::string default_speed_units;
        //! Default z of the maneuver
        float default_z;
        //! Default referential of z units (HEIGHT/ALTITUDE/DEPTH/NONE)
        std::string default_z_units;
      };

      struct Task : public DUNE::Maneuvers::Maneuver
      {
        //! Store maneuver specification
        IMC::FollowReference m_spec;
        //! Store latest received reference and the one before that
        IMC::Reference m_cur_ref;
        // IMC::Reference m_last_ref;
        //! Store last timestamp when reference was received
        double m_last_ref_time;
        //! Estimated state
        IMC::EstimatedState m_estate;
        //! Path Control state
        IMC::PathControlState m_pcs;
        //! keep track if m_pcs was initialized yet
        bool init_pcs;
        //! FollowRefState, dispatch on arrival of Reference, FollowReference
        //! and EstimatedState.
        //! --- State
        //! WAIT signals not controllable, set when receives:
        //!  - FollowReference
        //!  - Reference with flag MANDONE
        //! TIMEOUT signals too long since last Reference, set when receives:
        //!  - EstimatedState and has passed more time then specified in m_spec
        //! GOTO signals vehicle in transit, set when receives and proximity is far:
        //!  - Reference
        //! LOITER signals vehicle has nothing more to do, set when receives and
        //! proximity is near:
        //!  - Reference
        //! --- Proximity
        //! PROX_XY_NEAR & PROX_XY_NEAR signals arrived, set when received:
        //!  - PathControlState has flag near
        //! FAR signals far, set when received:
        //!  - FollowReference
        //!  - Reference with flag MANDONE
        //!  - PathControlState without flag NEAR
        IMC::FollowRefState m_fref_state;
        //! Did we get a reference already?
        //bool m_got_reference;
        //! Are we moving or idle (floating)
        //bool m_moving;
        //! Task arguments.
        Arguments m_args;

        Task(const std::string& name, Tasks::Context& ctx) :
          DUNE::Maneuvers::Maneuver(name, ctx), m_pcs(PathControlState()), init_pcs(false)
        {
          param("Loitering Radius", m_args.loitering_radius).defaultValue("7.5").units(
              Units::Meter).description(
                  "Radius of loitering circle after arriving at destination");

          /*param("Vehicle Type", m_args.vehicle_type).defaultValue("AUV")
                        .description(
                            "Vehicle type (AUV or UAV), default AUV");

          param("Horizontal Tolerance", m_args.horizontal_tolerance).defaultValue(
              "15.0").units(Units::Meter).description(
                  "Minimum distance required to consider that the vehicle has arrived at the reference (XY)");

          param("Vertical Tolerance", m_args.vertical_tolerance).defaultValue(
              "2.0").units(Units::Meter).description(
                  "Minimum distance required to consider that the vehicle has arrived at the reference (Z)");
*/
          param("Default Speed", m_args.default_speed)
          .defaultValue("50").
          description("Speed to use in case no speed is given by reference source.");

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
          .description("Units to use for default z reference ('DEPTH', 'ALTITUDE' or 'HEIGHT')");

          //m_got_reference = false;
          //m_moving = false;
          m_last_ref_time = 0;

          bindToManeuver<Task, IMC::FollowReference>();
          bind<IMC::Reference>(this);
          bind<IMC::EstimatedState>(this);
          bind<IMC::PathControlState>(this);
        }

        void
        consume(const IMC::FollowReference* msg)
        {
          // Activating maneuver
          //m_moving = false;
          //m_got_reference = false;
          m_spec = *msg;
          m_last_ref_time = Clock::get();

          // create a message to notify that the maneuver was activated
          m_fref_state.proximity = IMC::FollowRefState::PROX_FAR;
          m_fref_state.state = IMC::FollowRefState::FR_WAIT;
          m_fref_state.control_ent = msg->control_ent;
          m_fref_state.control_src = msg->control_src;
          dispatch(m_fref_state);
          inf(DTR("waiting for first reference"));
          //m_last_ref = Reference(); -> init in constructor
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
          if (msg1->radius != msg2->radius)
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
          // verify that the source is either all or the one designated at
          // the start of the maneuver
          if (m_spec.control_src != 0xFFFF
              && m_spec.control_src != msg->getSource())
          {
            inf(DTR("ignored reference from non-authorized source: %d"),
                msg->getSource());
            return;
          }
          // verify that the source entity is either all or the one designated
          // at the start of the maneuver
          if (m_spec.control_ent != 0xFF
              && m_spec.control_ent != msg->getSourceEntity())
          {
            inf(DTR("ignored reference from non-authorized entity: %d"),
                msg->getSourceEntity());
            return;
          }

          //m_got_reference = true;
          m_last_ref_time = Clock::get();
          m_cur_ref = *msg;
          // verify if maneuver is done
          if (m_cur_ref.flags & IMC::Reference::FLAG_MANDONE)
          {
            m_fref_state.proximity = IMC::FollowRefState::PROX_FAR;
            m_fref_state.state = IMC::FollowRefState::FR_WAIT;
            signalCompletion("maneuver terminated by reference source");
          }
          // propagate the new reference
          guide();
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
          init_pcs = true;
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

        //! Generate and dispatch a DesiredPath based on the received reference
        void
        guide(/*const IMC::PathControlState* pcs - m_pcs, IMC::Reference* ref - m_cur_ref,
            const IMC::EstimatedState* state - m_estate*/)
        {
          // start building the DesiredPath message to be commanded
          IMC::DesiredPath desired_path;
          updateCoordinates(desired_path);
          // set attributes according to flags
          updateEndLoc(desired_path);
          updateSpeed(desired_path);
          updateEndZ(desired_path);
          updateRadius(desired_path);
          updateFollowRefStateFlags();
          // Add the new reference to the FollowReferenceState
          m_fref_state.reference.set(m_cur_ref);
          dispatch(m_fref_state);
          dispatchDesiredPath(desired_path);
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
            //m_moving = true;
          }
          else
          {
            // stop moving by setting control loops to zero
            //m_moving = false;
            setControl(0);
          }
        }

      private:
        void updateEndLoc(IMC::DesiredPath &desired_path)
        {
          // set end location according to received reference
          if (m_cur_ref.flags & IMC::Reference::FLAG_LOCATION)
          {
            // use new reference
            desired_path.end_lat = m_cur_ref.lat;
            desired_path.end_lon = m_cur_ref.lon;
          }
          /*else if (m_got_reference)
          {
            // use previously received reference
            desired_path.end_lat = m_cur_ref.lat;
            desired_path.end_lon = m_cur_ref.lon;
          }*/
          else
          {
            // just stay where we are
            desired_path.end_lat = desired_path.start_lat;
            desired_path.end_lon = desired_path.start_lon;
          }
        }

        void updateSpeed(IMC::DesiredPath &desired_path)
        {
          // set speed according to received reference. If the reference does not
          // provide a desired speed, use default
          if ((m_cur_ref.flags & IMC::Reference::FLAG_SPEED) && !(m_cur_ref.speed.isNull()))
          {
            desired_path.speed = m_cur_ref.speed->value;
            desired_path.speed_units = m_cur_ref.speed->speed_units;
          }
          /*else if (/*m_got_reference && *//*!m_cur_ref.speed.isNull())
          {
            desired_path.speed = m_cur_ref.speed->value;
            desired_path.speed_units = m_cur_ref.speed->speed_units;
          }*/
          else
          {
            // default speed
            desired_path.speed = m_args.default_speed;
            desired_path.speed_units = parseSpeedUnitsStr(m_args.default_speed_units);
          }
        }

        void updateRadius(IMC::DesiredPath &desired_path)
        {
          //std::cout<< " starting radius " << ref->radius << "  -  " << desired_path.lradius << "\n";
          // set radius according to received reference. If the reference does not
          // provide a desired radius, use default
          if (m_cur_ref.flags & IMC::Reference::FLAG_RADIUS)
          {
            desired_path.lradius = m_cur_ref.radius;
          }
          /*else if (/*m_got_reference && m_cur_ref.radius != 0)
          {
            desired_path.lradius = m_cur_ref.radius;
          }*/
          else
          {
            desired_path.lradius = m_args.loitering_radius;
          }
          // traduce negative radius in desiredPath (from received Reference) to a
          // positive one with CCLOCW flag
          if(desired_path.lradius < 0)
          {
            desired_path.flags |= DesiredPath::FL_CCLOCKW;
            desired_path.lradius = desired_path.lradius * -1;
          }
        }

        void updateEndZ(IMC::DesiredPath& desired_path) {
          // set end_z according to received reference
          if ((m_cur_ref.flags & IMC::Reference::FLAG_Z) && !(m_cur_ref.z.isNull()))
          {
            desired_path.end_z = m_cur_ref.z->value;
            desired_path.end_z_units = m_cur_ref.z->z_units;
          }
          /*else if (/*m_got_reference && *//*!m_cur_ref.z.isNull())
          {
            desired_path.end_z = m_cur_ref.z->value;
            desired_path.end_z_units = m_cur_ref.z->z_units;
          }*/
          else
          {
            desired_path.end_z = m_args.default_z;
            desired_path.end_z_units = parseZUnitsStr(m_args.default_z_units);
          }
        }

        void updateCoordinates(IMC::DesiredPath& desired_path)
        {
          // calculate coordinates taking into account the offsets
          double curlat = m_estate.lat;
          double curlon = m_estate.lon;
          WGS84::displace(m_estate.x, m_estate.y, &curlat, &curlon);
          // command start corresponds to current position
          desired_path.start_lat = curlat;
          desired_path.start_lon = curlon;
          desired_path.flags = IMC::DesiredPath::FL_DIRECT;
        }

        void dispatchDesiredPath(IMC::DesiredPath desired_path)
        {
          enableMovement(true);
          dispatch(desired_path);
          // dispatch new desired path
          switch (m_fref_state.state)
          {
            case (IMC::FollowRefState::FR_LOITER):
              //desired_path.lradius = m_args.loitering_radius;
              inf(DTR("Loitering around (%f, %f, %f, %f)."),
                  Angles::degrees(desired_path.end_lat), Angles::degrees(desired_path.end_lon),
                  desired_path.end_z, desired_path.lradius);
              break;
            case (IMC::FollowRefState::FR_GOTO):
              inf(DTR("Going towards (%f, %f, %f)."), Angles::degrees(desired_path.end_lat),
                  Angles::degrees(desired_path.end_lon), desired_path.end_z);
              break;
            case (IMC::FollowRefState::FR_WAIT):
              inf(DTR("Waiting for next reference."));
              break;
            case (IMC::FollowRefState::FR_TIMEOUT):
              inf(DTR("Bad connection, too long since last EstimatedState was received."));
              break;
            default:
              inf(DTR("Unexpected state %#x"), m_fref_state.state);
              enableMovement(false);
              break;
          }
        }

        void updateFollowRefStateFlags()
        {
          // Update flags
          if (pcsNotEmpty() && (m_pcs.flags & IMC::PathControlState::FL_NEAR) != 0)
          {
            m_fref_state.proximity |= IMC::FollowRefState::PROX_Z_NEAR;
            m_fref_state.proximity |= IMC::FollowRefState::PROX_XY_NEAR;
          } else
          {
            m_fref_state.proximity |= IMC::FollowRefState::PROX_FAR;
          }
          // If it was on WAIT it should start and if it was on TIMEOUT it should also
          // start since connection was restored (as this is called by consume(Reference))
          if ((m_fref_state.proximity & IMC::FollowRefState::PROX_FAR) != 0)
          {
            // FAR => GOTO
            m_fref_state.state = IMC::FollowRefState::FR_GOTO;
          }
          else
          {
            // (proximity sets both nears or none at all)
            // NEAR_Z and NEAR_XY => LOITER
            m_fref_state.state = IMC::FollowRefState::FR_LOITER;
          }
        }

        //!
        bool pcsNotEmpty()
        {
          return init_pcs;
        }
      };
    }
  }
}

DUNE_TASK
