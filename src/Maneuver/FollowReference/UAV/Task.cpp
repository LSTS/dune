//***************************************************************************
// Copyright 2007-2015 Universidade do Porto - Faculdade de Engenharia      *
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
// http://ec.europa.eu/idabc/eupl.html.                                     *
//***************************************************************************
// Author: Jose Pinto                                                       *
// Author: Margarida Faria                                                  *
//***************************************************************************
// FollowReference for when the plan execution takes z into account to      *
// declare a reference reached.                                             *
//***************************************************************************

// DUNE headers.
#include <DUNE/DUNE.hpp>

namespace Maneuver
{
  namespace FollowReference
  {
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
        IMC::DesiredPath m_desired_path;
        //! Task arguments.
        Arguments m_args;

        Task(const std::string& name, Tasks::Context& ctx) :
          DUNE::Maneuvers::Maneuver(name, ctx)
        {
          param("Loitering Radius", m_args.loitering_radius).defaultValue("7.5")
          .units(Units::Meter)
          .description("Radius of loitering circle after arriving at destination");

          param("Default Speed", m_args.default_speed)
          .defaultValue("50").
          description("Speed to use in case no speed is given by reference source.");

          param("Default Speed Units", m_args.default_speed_units)
          .defaultValue("%")
          .description("Units to use for default speed (one of 'm/s', 'rpm' or '%').");

          param("Default Z", m_args.default_z)
          .defaultValue("200")
          .units(Units::Meter)
          .description("Default z when no vertical reference is given.");

          m_last_ref_time = 0;

          bindToManeuver<Task, IMC::FollowReference>();
          bind<IMC::Reference>(this);
          bind<IMC::EstimatedState>(this);
        }

        void
        consume(const IMC::FollowReference* msg)
        {
          // initialize maneuver definitions and time for timeout calculation
          m_spec = *msg;
          m_last_ref_time = Clock::get();
          //Waiting for the first reference in the position the vehicle currently is on
          m_cur_ref.flags = Reference::FLAG_LOCATION;
          m_cur_ref.lat = m_estate.lat;
          m_cur_ref.lon = m_estate.lon;
          /*IMC::DesiredZ firstZ;
          firstZ.z_units = IMC::Z_HEIGHT;
          firstZ.value = initializeEndZ();
          m_cur_ref.z.set(firstZ);*/
          m_cur_ref.radius = m_args.loitering_radius;
          WGS84::displace(m_estate.x, m_estate.y, &(m_cur_ref.lat), &(m_cur_ref.lon));
          inf(DTR("lat lon = 0 ? %f"), m_cur_ref.lat);
          // create a message to notify that the maneuver was activated
          m_fref_state.reference.set(m_cur_ref);
          m_fref_state.proximity = IMC::FollowRefState::PROX_FAR;
          m_fref_state.state = IMC::FollowRefState::FR_WAIT;
          m_fref_state.control_ent = msg->control_ent;
          m_fref_state.control_src = msg->control_src;
          dispatch(m_fref_state);
          //processDesiredPath();
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
            inf(DTR("ignored reference from non-authorized source: %d"), msg->getSource());
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
          // update time
          m_last_ref_time = Clock::get();
          // verify if maneuver is done
          if (msg->flags & IMC::Reference::FLAG_MANDONE)
          {
            m_fref_state.proximity = IMC::FollowRefState::PROX_FAR;
            m_fref_state.state = IMC::FollowRefState::FR_WAIT;
            signalCompletion("maneuver terminated by reference source");
          }
          else
          {
            m_fref_state.state = IMC::FollowRefState::FR_GOTO;
          }

          // if it is a different ref, propagate
          if (!sameReference(msg, &m_cur_ref))
          {
            m_cur_ref = *msg;
            // propagate the new reference
            processDesiredPath();
          }
          // Add the new reference to the FollowReferenceState
          m_fref_state.reference.set(m_cur_ref);
        }

        void
        consume(const IMC::EstimatedState* msg)
        {
          if (msg->getSource() != getSystemId())
            return;

          m_estate = *msg;
          // as EstimatedState is received regularly, use this event to process regularly!?
          checkTimeout();
        }

        void
        onPathControlState(const IMC::PathControlState* pcs)
        {
          m_pcs = *pcs;
          updateFollowRefStateFlags();
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
        processDesiredPath(void)
        {
          updateCoordinates();
          // set attributes according to flags
          updateEndLoc();
          updateSpeed();
          updateEndZ();
          updateRadius();

          if (m_cur_ref.flags & IMC::Reference::FLAG_START_POINT)
            return;

          dispatchDesiredPath();
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
          }
          else
          {
            // stop moving by setting control loops to zero
            setControl(0);
          }
        }

        void
        updateEndLoc(void)
        {
          // set end location according to received reference
          if (m_cur_ref.flags & IMC::Reference::FLAG_LOCATION)
          {
            // use new reference
            m_desired_path.end_lat = m_cur_ref.lat;
            m_desired_path.end_lon = m_cur_ref.lon;
          }
        }

        void updateSpeed(void)
        {
          // set speed according to received reference. If the reference does not
          // provide a desired speed, use default
          if ((m_cur_ref.flags & IMC::Reference::FLAG_SPEED) && !(m_cur_ref.speed.isNull()))
          {
            m_desired_path.speed = m_cur_ref.speed->value;
            m_desired_path.speed_units = m_cur_ref.speed->speed_units;
          }
          else
          {
            // default speed
            m_desired_path.speed = m_args.default_speed;
            m_desired_path.speed_units = parseSpeedUnitsStr(m_args.default_speed_units);
          }
        }

        void
        updateRadius(void)
        {
          // set radius according to received reference. If the reference does not
          // provide a desired radius, use default
          if (m_cur_ref.flags & IMC::Reference::FLAG_RADIUS)
            m_desired_path.lradius = m_cur_ref.radius;
          else
            m_desired_path.lradius = m_args.loitering_radius;
          // traduce negative radius in desiredPath (from received Reference) to a
          // positive one with CCLOCW flag
          if (m_desired_path.lradius < 0)
          {
            m_desired_path.flags |= DesiredPath::FL_CCLOCKW;
            m_desired_path.lradius = m_desired_path.lradius * -1;
          }
        }

        void
        updateEndZ(void)
        {
          // set end_z according to received reference
          if ((m_cur_ref.flags & IMC::Reference::FLAG_Z) && !(m_cur_ref.z.isNull()))
          {
            m_desired_path.end_z = m_cur_ref.z->value;
            m_desired_path.end_z_units = m_cur_ref.z->z_units;
          }
          else
          {
            m_desired_path.end_z = initializeEndZ();
            m_desired_path.end_z_units = IMC::Z_HEIGHT;
          }
        }

        int
        initializeEndZ(void)
        {
          int currentHeight = m_estate.height - m_estate.z;
          if (currentHeight > 90 && currentHeight < 500)
          {
            //err("Setting according to estimated state --> %3.0f, %3.0f", m_estate.height, m_estate.z);
            return currentHeight;
          }
          else
          {
            err("Setting according to default value --> %3.0f - estimated state %3.0f, %3.0f", m_args.default_z, m_estate.height, m_estate.z);
            return m_args.default_z;
          }
        }

        void
        updateCoordinates(void)
        {
          if (m_cur_ref.flags & IMC::Reference::FLAG_START_POINT)
          {
            // command start corresponds to reference position
            m_desired_path.start_lat = m_cur_ref.lat;
            m_desired_path.start_lon = m_cur_ref.lon;
            m_desired_path.start_lon = m_cur_ref.lon;
            m_desired_path.flags &= ~IMC::DesiredPath::FL_DIRECT;
          }
          else if (m_cur_ref.flags & IMC::Reference::FLAG_DIRECT)
            m_desired_path.flags |= IMC::DesiredPath::FL_DIRECT;
        }

        void
        dispatchDesiredPath(void)
        {
          enableMovement(true);
          dispatch(m_desired_path);
          // dispatch new desired path
          switch (m_fref_state.state)
          {
            case (IMC::FollowRefState::FR_LOITER):
              trace(DTR("Loitering around (%f, %f, %f, %f)."),
              Angles::degrees(m_desired_path.end_lat), Angles::degrees(m_desired_path.end_lon),
              m_desired_path.end_z, m_desired_path.lradius);
              break;
            case (IMC::FollowRefState::FR_GOTO):
              trace(DTR("Going towards (%f, %f, %f)."), Angles::degrees(m_desired_path.end_lat),
              Angles::degrees(m_desired_path.end_lon), m_desired_path.end_z);
              break;
            case (IMC::FollowRefState::FR_WAIT):
              trace(DTR("Waiting for next reference."));
              break;
            case (IMC::FollowRefState::FR_TIMEOUT):
              trace(DTR("Bad connection, too long since last EstimatedState was received."));
              break;
            default:
              trace(DTR("Unexpected state %#x"), m_fref_state.state);
              enableMovement(false);
              break;
          }
        }

        void
        updateFollowRefStateFlags(void)
        {
          if (m_pcs.flags & IMC::PathControlState::FL_LOITERING)
          {
            m_fref_state.proximity = IMC::FollowRefState::PROX_Z_NEAR;
            m_fref_state.proximity |= IMC::FollowRefState::PROX_XY_NEAR;
            if (!offlineOrWaiting())
            {
              m_fref_state.state = IMC::FollowRefState::FR_LOITER;
              trace(DTR("LOITER, XY and Z NEAR"));
            }
          }
          else
          {
            m_fref_state.proximity = IMC::FollowRefState::PROX_FAR;
            if (!offlineOrWaiting())
            {
              m_fref_state.state = IMC::FollowRefState::FR_GOTO;
              trace(DTR("GOTO, FAR"));
            }
          }
        }

        void
        checkTimeout(void)
        {
          // as EstimatedState is received regularly, use this event to process regularly!?
          double delta = 0;
          if (m_spec.timeout != 0)
            delta = Clock::get() - m_last_ref_time;

          if (delta > m_spec.timeout  && isActive())
          {
            m_fref_state.state = IMC::FollowRefState::FR_TIMEOUT;
            signalError("reference source timed out");
            dispatch(m_fref_state);
          }
        }

        bool
        offlineOrWaiting(void)
        {
          return (m_fref_state.state & IMC::FollowRefState::FR_TIMEOUT)
              && (m_fref_state.state & IMC::FollowRefState::FR_WAIT) ;
        }

        void
        onDeactivation(void)
        {
          // Send to T-Rex the FollowRefState to update Reference to Boot
          m_fref_state.state = IMC::FollowRefState::FR_WAIT;
          dispatch(m_fref_state);
        }
      };
    }
  }
}

DUNE_TASK
