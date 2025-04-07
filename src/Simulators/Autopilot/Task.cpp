//***************************************************************************
// Copyright 2007-2025 Universidade do Porto - Faculdade de Engenharia      *
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
// Author: Alberto Dallolio                                                 *
//***************************************************************************

// ISO C++ 98 headers.
#include <iomanip>

// DUNE headers.
#include <DUNE/DUNE.hpp>

namespace Simulators
{
  namespace Autopilot
  {
    using DUNE_NAMESPACES;

      struct Arguments
      {
        //! Maximum Rudder Actuation.
        float act_max;
        //! Ramp actuation limit when the value is rising in actuation per second
        float act_ramp;
        //! PID gains for heading controller during transect.
        std::vector<float> course_gains;
        //! Log the size of each PID parcel
        bool log_parcels;
        //! Navigation entity label.
        std::string elabel_nav;
        //! GPS entity label.
        std::string elabel_gps;
        //! Switch to heading control.
        bool heading_ctrl;
        //! Desired turning rate.
        float desired_course_der;
        //! Speed threshold for heading control
        double speed_threshold;
        //! User defined thrust assistance.
        double thrust_assist;
      };

      struct Task: public Tasks::Task
      {
        //! Navigation entity eid.
        int m_nav_eid;
        //! GPS entity eid.
        int m_gps_eid;
        //! Course PID controller
        DiscretePID m_course_pid;
        //! Control Parcels for course controller
        IMC::ControlParcel m_parcel;
        //! Desired course used by PID.
        float m_desired_course;
        //! Time of last estimated state message.
        Delta m_delta;        
        //! Current rudder position/actuation.
        IMC::SetServoPosition m_act;
        //! Current rudder position/actuation.
        IMC::ServoPosition m_last_act;
        //! Angular velocity message.
        IMC::AngularVelocity m_angvel;
        //! Desired Heading rate message.
        IMC::DesiredHeadingRate m_des_course_rate;
        //! Control loops last reference
        uint32_t m_scope_ref;
        //! Timestep.
        double m_tstep;
        //! Current motor actuation.
        IMC::SetThrusterActuation m_act_thrust;
        //! Speed Over Ground.
        double m_sog;
        //! Lats, lons.
        double m_lat,m_lon,m_lat_next_wp,m_lon_next_wp;
        //! Distance to next wp.
        double m_dist_to_wp;
        //! Vessel heading.
        double m_heading;
        //! True if vehicle is in service mode.
        bool m_service;
        //! True if vehicle is in maneuver mode.
        bool m_maneuver;
        //! Thrust during assistance.
        double m_thrust_assistance;

        //! Task arguments.
        Arguments m_args;

        Task(const std::string& name, Tasks::Context& ctx):
          Tasks::Task(name, ctx),
          m_scope_ref(0),
          m_tstep(0.0),
          m_service(true),
          m_maneuver(false)
        {
          param("Maximum Rudder Actuation", m_args.act_max)
          .defaultValue("1.0")
          .description("Maximum Rudder Command");

          param("Course PID Gains", m_args.course_gains)
          .defaultValue("")
          .size(3)
          .description("PID gains for Course controller during straight line");

          param("Ramp Actuation Limit", m_args.act_ramp)
          .defaultValue("0.0")
          .description("Ramp actuation limit when the value is rising in actuation per second");

          param("Log PID Parcels", m_args.log_parcels)
          .defaultValue("false")
          .description("Log the size of each PID parcel");
          
          param("Entity Label - Navigation", m_args.elabel_nav)
          .description("Entity label of 'EstimatedState' message");

          param("Entity Label - GPS", m_args.elabel_gps)
          .description("Entity label of 'GpsFix' message");

          param("Desired turning rate", m_args.desired_course_der)
          .defaultValue("0.0")
          .minimumValue("0.0")
          .maximumValue("5.0")
          .description("User-defined desired turning rate in rad/s.");

          param("Heading Control", m_args.heading_ctrl)
          .defaultValue("false")
          .description("Switch to heading control.");

          param("Thrust Assistance", m_args.thrust_assist)
          .defaultValue("0.75")
          .description("Percentage of thrust assistance");

          param("SOG threshold - Heading Control", m_args.speed_threshold)
          .defaultValue("0.1")
          .minimumValue("0.001")
          .description("SOG threshold above which switch to heading control.");

          // Initialize entity state.
          setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_IDLE);

          // Register handler routines.
          bind<IMC::Abort>(this);
          bind<IMC::EstimatedState>(this);
          bind<IMC::DesiredHeading>(this);
          bind<IMC::ControlLoops>(this);
          bind<IMC::GpsFix>(this);
          bind<IMC::VehicleState>(this);
          bind<IMC::PathControlState>(this);
        }

        void
        onUpdateParameters(void)
        {
          if(paramChanged(m_args.thrust_assist))
            m_thrust_assistance = m_args.thrust_assist;

          if (paramChanged(m_args.course_gains) ||
              paramChanged(m_args.log_parcels))
          {
            reset();
            setup(m_args.course_gains);
          }
        }

        void
        onEntityResolution(void)
        {
          try
          {
            m_nav_eid = resolveEntity(m_args.elabel_nav);
          }
          catch (...)
          {
            m_nav_eid = 0;
          }
          
          try
          {
            m_gps_eid = resolveEntity(m_args.elabel_gps);
          }
          catch (...)
          {
            m_gps_eid = 0;
          }
        }
        

        //! Reserve entities.
        void
        onEntityReservation(void)
        {
          if (m_args.log_parcels)
          {
            std::string label = getEntityLabel();
            m_parcel.setSourceEntity(reserveEntity(label + " - Yaw Parcel"));
          }
        }

        //! On activation
        void
        onActivation(void)
        {
          setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_ACTIVE);
        }

        //! On deactivation
        void
        onDeactivation(void)
        {
          setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_IDLE);
        }

        void
        consume(const IMC::PathControlState* pcs)
        {
          m_lat_next_wp = pcs->end_lat;
          m_lon_next_wp = pcs->end_lon;
          double dist_x,dist_y;
          WGS84::displacement(m_lat, m_lon, 0,
                          m_lat_next_wp, m_lon_next_wp, 0,
                          &dist_x, &dist_y);
          m_dist_to_wp = std::sqrt(std::pow(dist_x,2)+std::pow(dist_y,2));
        }

        //! Reset PIDs and actuation references.
        void
        reset(void)
        {
          m_course_pid.reset();

          m_act.id = 0;
          m_act.value = 0.0;
          m_last_act.id = 0;
          m_last_act.value = 0.0;

          dispatch(m_act);
        }

        //! Setup PIDs.
        void
        setup(std::vector<float> gains)
        {
          m_course_pid.setGains(gains);
          m_course_pid.setOutputLimits(-m_args.act_max, m_args.act_max);	// Anti-windup
          //float ki_sat = 1/gains[1];
          //m_course_pid.setIntegralLimits(ki_sat);

          debug("SETTING GAINS: %0.3f, %0.3f, %0.3f", gains[0], gains[1], gains[2]);

          if (m_args.log_parcels)
          {
            m_course_pid.enableParcels(this, &m_parcel);
          }
        }

        void
        onResourceInitialization(void)
        {
          // Reset Heading Controller.
          reset();

          // Set initial thruster speed to zero.
          m_act_thrust.id = 0;
          m_act_thrust.value = 0.0;
        }

        void
        consume(const IMC::VehicleState* msg)
        {
          if(msg->getSource() != getSystemId())
            return;
          if(msg->op_mode == IMC::VehicleState::VS_SERVICE)
          {
            m_service = true;
            m_maneuver = false;
          }
          if(msg->op_mode == IMC::VehicleState::VS_MANEUVER)
          {
            m_maneuver = true;
            m_service = false;
          }
        }

        void
        consume(const IMC::Abort* msg)
        {
          if (msg->getSource() != getSystemId())
            return;

          // Redundancy, in case everything else fails
          reset();
          //debug("disabling");

          m_service = true;
        }

        void
        consume(const IMC::EstimatedState* msg)
        {
          if (msg->getSource() != getSystemId() || msg->getSourceEntity() != m_nav_eid)
            return;

          m_heading = msg->psi;
          m_angvel.z = msg->r;
        }

        void
        consume(const IMC::GpsFix* msg)
        {
          if(msg->getSource() != getSystemId() || msg->getSourceEntity() != m_gps_eid) //m_gps_eid
            return;

          // Compute Time Delta.
          m_tstep = m_delta.getDelta();
          m_sog = msg->sog;
          m_lat = msg->lat;
          m_lon = msg->lon;

          debug("Lat %f Lon %f SOG %f COG %f",Angles::degrees(m_lat),Angles::degrees(m_lon),Angles::degrees(msg->cog),m_sog);

          if(m_service)
          {
            debug("Dispatching a 0 rudder angle");
            dispatchRudder(0, m_tstep);
            reset();
            return;
          }

          // Check if we have a valid time delta.
          if (m_tstep < 0.0)
            return;

          float error = 0.0;

          // Course Error (From IMC::DesiredHeading)
          if(m_args.heading_ctrl || (!m_args.heading_ctrl && msg->sog < m_args.speed_threshold))
          {
            error = Angles::normalizeRadian(m_desired_course - m_heading);
            debug("Heading Control - COG %0.3f, Heading %0.3f, DHeading %0.3f, Error: %0.3f, SOG %0.3f, dist to wp: %0.3f", Angles::degrees(msg->cog), Angles::degrees(m_heading), Angles::degrees(m_desired_course), Angles::degrees(error), m_sog, m_dist_to_wp);
          }
          else if(!m_args.heading_ctrl && msg->sog > m_args.speed_threshold)
          {
            error = Angles::normalizeRadian(m_desired_course - msg->cog);
            debug("Course Control - HEAD: %.3f, COG %0.3f, DCOG %0.3f, Error: %0.3f, SOG %0.3f, dist to wp: %0.3f", Angles::degrees(m_heading), Angles::degrees(msg->cog), Angles::degrees(m_desired_course), Angles::degrees(error), m_sog, m_dist_to_wp);
          }

          // Derivative Error.
          //float error_der = m_args.desired_course_der - m_angvel.z; //m_angvel.z may need to be filtered?

          // Course Controller (PID controller) 
          float rudder_cmd = m_course_pid.step(m_tstep, error, 0); //error_der
          m_act.value = -rudder_cmd;

		      //spew("AutoNaut - Rudder_cmd/m_act: %0.3f  Desired heading: %0.3f", m_act.value, c_degrees_per_radian*m_desired_course);			
          dispatchRudder(m_act.value, m_tstep);
          //debug("Commanded Rudder Angle %ld", trimValue(roundToInteger(m_act.value*45*10), -45, 45));

          // Dispatch thrust command.
          m_act_thrust.value = m_thrust_assistance;
          dispatch(m_act_thrust);

          m_des_course_rate.value = m_args.desired_course_der;
          dispatch(m_des_course_rate);
        }

        //! Dispatch to bus ServoPosition message
        //! @param[in] value set rudder actuation value
        //! @param[in] timestep amount of time since last control step
        void
        dispatchRudder(float value, double timestep)
        {
			    //Activated if act_ramp (Config file) is set > 0
          if((value > m_last_act.value) && (m_args.act_ramp > 0.0))
          {
            value = m_last_act.value + trimValue((value - m_last_act.value) / timestep,
                                                     0.0, m_args.act_ramp * timestep);
          }

          m_act.value = trimValue(value, -m_args.act_max, m_args.act_max);
          m_last_act.value = m_act.value;
          dispatch(m_act);
        }

        //! IMC::DesiredHeading contains a desired course over ground.
        void
        consume(const IMC::DesiredHeading* msg)
        {
          if (!isActive())
            return;

          m_desired_course = msg->value;
        }

        void
        consume(const IMC::ControlLoops* msg)
        {
          if (!(msg->mask & (IMC::CL_YAW)))
            return;

          if (msg->scope_ref < m_scope_ref)
            return;

          m_scope_ref = msg->scope_ref;

          if (msg->enable == isActive())
            return;

          if (msg->enable)
            requestActivation();
          else
            requestDeactivation();

          if(!isActive())
          {
            reset();
            m_act_thrust.value = 0.0;
            dispatch(m_act_thrust);
          }
        }

        void
        onMain(void)
        {
          while(!stopping())
          {
            waitForMessages(1.0);
          }
        }
      };
  }
}

DUNE_TASK
