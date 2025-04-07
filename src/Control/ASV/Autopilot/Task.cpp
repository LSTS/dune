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
// Author: João Costa                                                       *
//***************************************************************************

// ISO C++ 98 headers.
#include <cmath>

// DUNE headers.
#include <DUNE/DUNE.hpp>

namespace Control
{
  namespace ASV
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
        //! PID gains for heading controller during turn.
        std::vector<float> course_gains_turn;
        //! PID gains for heading controller during transect.
        std::vector<float> course_gains_trans;
        //! Log the size of each PID parcel
        bool log_parcels;
        //! External Filter type.
        std::string ext_filter_type;
        //! Filter activation variables.
        bool lp_filtering, n_filtering, bs_filtering, ext_filtering, course_des_filtering;
        //! Low-pass filter taps.
        double lpf_taps;
        //! Low-pass filter scaling.
        double lpf_scaling;
        //! Notch filter taps.
        double nf_taps;
        //! Band-stop filter taps.
        double bsf_taps;
        //! Band-stop filter scaling.
        double bsf_scaling;
        //! External filter frequency.
        double ext_filter_freq;
        //! Desired Course percentage increase.
        int chop;
        //! Navigation entity label.
        std::string elabel_nav;
        //! Enable gain scheduling.
        bool en_gain_sch;
        //! Use new gains (gain scheduling).
        bool use_new_gains;
        //! Use ADCP measurements.
        std::string sch_source;
        //! Enable thruster usage.
        bool en_thrust;
        //! Enable thruster usage during turns.
        bool en_thrust_turn;
        //! Maximum Motor thrust.
        float max_thrust;
        //! Minimun SOG for thrusting.
        double min_sog;
        //! User defined thrust assistance.
        double thrust_assist;
        //! Switch to heading control.
        bool heading_ctrl;
        //! Speed threshold for heading control
        double speed_threshold;
        //! Gain scheduling period.
        double gain_sch_t;

        //! Amplitude limit.
        double ampl_lim;
        //! Correlation Limit.
        double corr_lim;
        //! Vehicle pitching rate limit.
        double pitch_rate;
        //! Vehicle rolling rate limit.
        double roll_rate;
        //! Enable speed controller
        bool speed_control;

        //! Minimum heading error to consider vessel is turning
        double turn_min_error;
      };

      struct Gamma
      {
        //! Source.
        std::string source;
        //! Latitude WGS-84.
        fp64_t lat;
        //! Longitude WGS-84.
        fp64_t lon;
        //! Ground Speed.
        fp32_t sog;
        //! Current Longitudinal Speed.
        fp32_t uc;
        //! Cell Depth.
        fp32_t depth;
        //! Value.
        fp32_t value;
      };

      struct SingleCurrentCell
      {
        //! Latitude WGS-84.
        fp64_t lat;
        //! Longitude WGS-84.
        fp64_t lon;
        //! Cell Depth.
        fp64_t depth;
        //! Water Velocity.
        fp64_t vel;
        //! Direction.
        fp64_t dir;
      };

      struct Task: public Tasks::Task
      {
        //! Navigation entity eid.
        int m_nav_eid;
        //! Course PID controller
        DiscretePID m_course_pid;
        //! Control Parcels for course controller
        IMC::ControlParcel m_parcel;
        //! Current rudder position/actuation.
        IMC::SetServoPosition m_act;
        //! Current rudder position/actuation.
        IMC::ServoPosition m_last_act;
        //! Current motor actuation.
        IMC::SetThrusterActuation m_act_thrust;
        //! Desired course used by PID.
        float m_desired_course;
        //! Time of last estimated state message.
        Delta m_delta;
        //! Control loops last reference
        uint32_t m_scope_ref;
        //! External Filter Type.
        std::string m_ext_filter_type;
        //! Low-pass filter for wave filtering.
        FilterEstimator lpf;
        //! Notch filter for wave filtering.
        FilterEstimator nf;
        //! Band-stop filter for wave filtering.
        FilterEstimator bs;
        //! External user-defined filter for wave filtering.
        FilterEstimator ext;
        //! Estimated Wave Frequency.
        double m_wave_freq;
        //! Timestep.
        double m_tstep;
        //! Chopping boolean.
        bool m_chopping;
        //! A turn is happening.
        bool m_turning;
        //! Desired Heading is arrived.
        bool m_des_head_arrived;
        //! Speed Over Ground.
        double m_sog;
        //! Lats, lons.
        double m_lat, m_lon, m_lat_next_wp, m_lon_next_wp;
        //! Distance to next wp.
        double m_dist_to_wp;
        //! Enable gain scheduling.
        bool m_gain_sch;
        //! Thrust during assistance.
        double m_thrust_assistance;
        //! True if vehicle is in service mode.
        bool m_service;
        //! True if vehicle is in maneuver mode.
        bool m_maneuver;
        //! Scheduling source.
        std::string m_sch_source;
        //! Vehicle Estimated State
        IMC::EstimatedState m_estate;
        //! Longitudinal relative speed.
        double m_u_r;
        //! Lateral relative speed.
        double m_v_r;
        //! Total relative speed.
        double m_U_r;
        //! Desired Course Timer.
        Counter<double> m_timer;
        //! Gain Scheduling Timer.
        Counter<double> m_timer_gs;
        //! Gain scheduling interval.
        double m_gs_interval;
        //! Average gamma value.
        double m_gamma_avg_adcp, m_gamma_avg_adcp_old, m_gamma_avg_sog, m_gamma_avg_sog_old;
        //! Average last gamma value.
        double m_gamma_avg_adcp_last, m_gamma_avg_adcp_old_last, m_gamma_avg_sog_last,
          m_gamma_avg_sog_old_last;
        //! Average factor.
        int m_avg_adcp, m_avg_adcp_old, m_avg_sog, m_avg_sog_old;

        //! Average factor.
        int m_avg_zero, m_avg_one;
        //! Average last velocity value.
        double m_beam_velocity_zero_avg_last, m_beam_velocity_one_avg_last;
        //! Average velocity value.
        double m_beam_velocity_zero_avg, m_beam_velocity_one_avg;

        //! Information about the shallowest current cell.
        SingleCurrentCell m_shallowest_current_cell;

        //! Task arguments.
        Arguments m_args;

        //! For speed controller
        double m_act_speed = 0;
        //! Is in teleoperation
        bool m_teleop;

        // Flag to control PCS
        uint8_t m_pcs_flag_sate;

        Task(const std::string& name, Tasks::Context& ctx):
          Tasks::Task(name, ctx),
          m_scope_ref(0),
          m_wave_freq(0.0),
          m_tstep(0.0),
          m_chopping(false),
          m_turning(false),
          m_des_head_arrived(false),
          m_gain_sch(false),
          m_service(true),
          m_maneuver(false),
          // m_teleoperation(false),
          m_avg_adcp(0),
          m_avg_adcp_old(0),
          m_avg_sog(0),
          m_avg_sog_old(0),
          m_avg_zero(0),
          m_avg_one(0),
          m_teleop(false)
        {
          param("Enable Gain Scheduling", m_args.en_gain_sch)
            .defaultValue("true")
            .description("Enable gain scheduling during turn");

          param("Preferred scheduling", m_args.sch_source)
            .defaultValue("false")
            .description("Preferred information for computing gamma.");

          param("Gain Scheduling Interval", m_args.gain_sch_t)
            .defaultValue("60")
            .minimumValue("30")
            .description("Interval for recomputing PID gains.");

          param("Use new gains", m_args.use_new_gains)
            .defaultValue("false")
            .description("Enable gain scheduling based on gamma");

          param("Enable Thrust Assistance", m_args.en_thrust)
            .defaultValue("true")
            .description("Assist navigation with thruster");

          param("Enable Thrust During Turn", m_args.en_thrust_turn)
            .defaultValue("true")
            .description("Assist the turn using the thruster");

          param("Thrust Assistance", m_args.thrust_assist)
            .defaultValue("0.75")
            .description("Percentage of thrust assistance");

          param("Maximum Thrust Actuation", m_args.max_thrust)
            .defaultValue("1.0")
            .description("Maximum Motor Command");

          param("Minimum Speed for Thrust", m_args.min_sog)
            .defaultValue("0.3")
            .description("Speed [m/s] below which thruster is used");

          param("Maximum Rudder Actuation", m_args.act_max)
            .defaultValue("1.0")
            .description("Maximum Rudder Command");

          param("Course PID Gains Transect", m_args.course_gains_trans)
            .defaultValue("")
            .size(3)
            .description("PID gains for Course controller during straight line");

          param("Course PID Gains Turning", m_args.course_gains_turn)
            .defaultValue("")
            .size(3)
            .description("PID gains for Course controller during turn");

          param("Ramp Actuation Limit", m_args.act_ramp)
            .defaultValue("0.0")
            .description("Ramp actuation limit when the value is rising in actuation per second");

          param("Log PID Parcels", m_args.log_parcels)
            .defaultValue("false")
            .description("Log the size of each PID parcel");

          param("Entity Label - Navigation", m_args.elabel_nav)
            .description("Entity label of 'GpsFix' message");

          param("Activate LP Filtering", m_args.lp_filtering)
            .defaultValue("false")
            .description("Activate Low-pass filtering of computed rudder angle");

          param("Activate N Filtering", m_args.n_filtering)
            .defaultValue("false")
            .description("Activate Notch filtering of computed rudder angle");

          param("Activate BS Filtering", m_args.bs_filtering)
            .defaultValue("false")
            .description("Activate Band-stop filtering of computed rudder angle");

          param("Activate External Filtering", m_args.ext_filtering)
            .defaultValue("false")
            .description("Activate external user-defined filtering of computed rudder angle");

          param("External Filter Type", m_args.ext_filter_type)
            .defaultValue("LPF")
            .description("External user-defined filter type");

          param("Activate Desired Course Filtering", m_args.course_des_filtering)
            .defaultValue("false")
            .description("Activate desired user-defined course filtering");

          param("LP taps", m_args.lpf_taps)
            .defaultValue("10.0")
            .minimumValue("1.0")
            .description("Low-pass filter number of taps");

          param("LPF scaling", m_args.lpf_scaling)
            .defaultValue("1.2")
            .minimumValue("1.0")
            .description("Low-pass filter gain to remove HF components");

          param("NF taps", m_args.nf_taps)
            .defaultValue("10.0")
            .minimumValue("1.0")
            .description("Notch filter number of taps");

          param("BSF taps", m_args.bsf_taps)
            .defaultValue("10.0")
            .minimumValue("1.0")
            .description("Band-stop filter(s) number of taps");

          param("BSF scaling", m_args.bsf_scaling)
            .defaultValue("20")
            .minimumValue("1")
            .description("BSF scaling percentage around cut-off estimated frequency");

          param("External Filter Frequency", m_args.ext_filter_freq)
            .units(Units::Hertz)
            .defaultValue("1.0")
            .description("Frequency for external user-defined filter.");

          param("Desired Course Percentage Increase", m_args.chop)
            .defaultValue("30")
            .description("Incremental portioning during desired course change.");

          param("Heading Control", m_args.heading_ctrl)
            .defaultValue("false")
            .description("Switch to heading control.");

          param("SOG threshold - Heading Control", m_args.speed_threshold)
            .defaultValue("0.1")
            .minimumValue("0.001")
            .description("SOG threshold above which switch to heading control.");

          param("Correlation Limit", m_args.corr_lim)
            .defaultValue("50")
            .maximumValue("100")
            .minimumValue("0")
            .description("Correlation above which measurement is discarded.");

          param("Amplitude Limit", m_args.ampl_lim)
            .defaultValue("0")
            .units(Units::Decibel)
            .description("Amplitude above which measurement is discarded.");

          param("Vehicle Pitch Rate Limit", m_args.pitch_rate)
            .defaultValue("0")
            .description("Pitching rate above which measurement is discarded.");

          param("Vehicle Roll Rate Limit", m_args.roll_rate)
            .defaultValue("0")
            .description("Roll rate above which measurement is discarded.");

          param("Enable speed controller", m_args.speed_control)
            .defaultValue("false");

          param("Minimum Turning Error", m_args.turn_min_error)
            .defaultValue("25")
            .units(Units::Degree)
            .description("Minimum heading error to consider vessel is turning (in degrees).");

          // Register handler routines.
          bind<IMC::Abort>(this);
          bind<IMC::EstimatedState>(this);
          bind<IMC::DesiredHeading>(this);
          bind<IMC::ControlLoops>(this);
          bind<IMC::Frequency>(this);
          bind<IMC::GpsFix>(this);
          bind<IMC::VehicleState>(this);
          // bind<IMC::SingleCurrentCell>(this);
          bind<IMC::CurrentProfile>(this);
          bind<IMC::PathControlState>(this);
          bind<IMC::DevDataText>(this);

          // For speed controller
          bind<IMC::DesiredSpeed>(this);
          bind<IMC::Teleoperation>(this);
          bind<IMC::TeleoperationDone>(this);

          // Initialize entity state.
          setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_IDLE);
        }

        void
        onUpdateParameters(void)
        {
          if (paramChanged(m_args.course_gains_trans) || paramChanged(m_args.log_parcels))
          {
            reset();
            setup(m_args.course_gains_trans);
          }

          if (paramChanged(m_args.course_gains_turn))
          {
            reset();
            setup(m_args.course_gains_turn);
          }

          if (paramChanged(m_args.ext_filter_type))
            m_ext_filter_type = m_args.ext_filter_type;

          if (paramChanged(m_args.thrust_assist))
            m_thrust_assistance = m_args.thrust_assist;

          if (paramChanged(m_args.sch_source))
            m_sch_source = m_args.sch_source;

          if (paramChanged(m_args.gain_sch_t))
          {
            m_gs_interval = m_args.gain_sch_t;
            m_timer_gs.setTop(m_gs_interval);  // 60.
          }

          if (paramChanged(m_args.course_des_filtering))
          {
            if (m_args.course_des_filtering)
              m_chopping = true;
            else
              m_chopping = false;
          }

          if (paramChanged(m_args.en_gain_sch))
          {
            m_gain_sch = m_args.en_gain_sch;
            if (!m_gain_sch)
            {
              reset();
              setup(m_args.course_gains_trans);
              debug("Nominal gains restored.");
            }
          }

          if (paramChanged(m_args.lp_filtering) || paramChanged(m_args.n_filtering)
              || paramChanged(m_args.bs_filtering) || paramChanged(m_args.ext_filtering)
              || paramChanged(m_args.lpf_taps) || paramChanged(m_args.nf_taps)
              || paramChanged(m_args.lpf_scaling) || paramChanged(m_args.bsf_taps)
              || paramChanged(m_args.bsf_scaling) || paramChanged(m_args.ext_filter_freq))
            buildFilters();
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
            err("Failed resolving entity! Configuration error!");
            m_nav_eid = 0;
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
        onResourceAcquisition(void)
        {
          m_timer_gs.setTop(60);
        }

        void
        consume(const IMC::Teleoperation* msg)
        {
          (void)msg;
          m_teleop = true;
          debug("Teleoperation mode activated.");
        }

        void
        consume(const IMC::TeleoperationDone* msg)
        {
          (void)msg;
          m_teleop = false;
          debug("Teleoperation mode deactivated.");
        }

        void
        consume(const IMC::DesiredSpeed* msg)
        {
          if (!m_args.speed_control)
            return;

          double speed = 0;

          switch (msg->speed_units)
          {
            case IMC::SUNITS_METERS_PS:
              speed = msg->value / 2;
              break;

            case IMC::SUNITS_RPM:
              speed = msg->value / 3600;
              break;

            case IMC::SUNITS_PERCENTAGE:
              speed = msg->value;
              break;

            default:
              break;
          }

          m_act_speed = trimValue(speed, -m_args.max_thrust, m_args.max_thrust);

          inf("onDesiredSpeed %f", m_act_speed);
          // IMC::SetThrusterActuation act;
          // act.value = m_act_speed;
          // dispatch(act);
        }

        void
        consume(const IMC::DevDataText* msg)
        {
          if (std::strcmp(resolveEntity(msg->getSourceEntity()).c_str(), "Text Actions") == 0
              && msg->getDestinationEntity() == resolveEntity("Autopilot"))
          {
            debug("Gains arrived from Iridium.");
            std::string m_cmd = msg->value;

            std::vector<float> gains_ir;

            // Parse command.
            char p[32], i[32], d[32];
            std::sscanf(m_cmd.c_str(), "%s %s %s", p, i, d);
            std::string p_str, i_str, d_str;
            p_str.append(p);
            i_str.append(i);
            d_str.append(d);
            gains_ir.push_back(std::atof(p_str.c_str()));
            gains_ir.push_back(std::atof(i_str.c_str()));
            gains_ir.push_back(std::atof(d_str.c_str()));

            reset();
            setup(gains_ir);
          }
        }

        void
        consume(const IMC::PathControlState* pcs)
        {
          m_lat_next_wp = pcs->end_lat;
          m_lon_next_wp = pcs->end_lon;
          double dist_x, dist_y;
          WGS84::displacement(m_lat, m_lon, 0, m_lat_next_wp, m_lon_next_wp, 0, &dist_x, &dist_y);
          m_dist_to_wp = std::sqrt(std::pow(dist_x, 2) + std::pow(dist_y, 2));
          m_pcs_flag_sate = pcs->flags;
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
          m_course_pid.setOutputLimits(-m_args.act_max, m_args.act_max);  // Anti-windup

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

          m_timer.setTop(15.0);
        }

        void
        consume(const IMC::VehicleState* msg)
        {
          if (msg->getSource() != getSystemId())
            return;

          if (msg->op_mode == IMC::VehicleState::VS_MANEUVER)
          {
            m_maneuver = true;
            m_service = false;
          }
          else
          {
            m_service = true;
            m_maneuver = false;
          }
        }

        void
        consume(const IMC::Abort* msg)
        {
          if (msg->getSource() != getSystemId())
            return;

          // Redundancy, in case everything else fails
          reset();
          m_service = true;
        }

        void
        consume(const IMC::EstimatedState* msg)
        {
          if (msg->getSource() != getSystemId() || msg->getSourceEntity() != m_nav_eid)
            return;

          m_estate = *msg;
          spew("BODY frame speeds: u = %.3f, v = %.3f - HEADING %.3f", m_estate.u, m_estate.v,
               Angles::degrees(m_estate.psi));
        }

        void
        consume(const IMC::GpsFix* msg)
        {
          IMC::DevDataText gamma_msg;

          if (msg->getSource() != getSystemId() || msg->getSourceEntity() != m_nav_eid)
            return;

          if (m_teleop)
          {
            debug("Teleoperation mode active - no control allowed.");
            return;
          }

          // Compute Time Delta.
          m_tstep = m_delta.getDelta();
          m_sog = msg->sog;
          m_lat = msg->lat;
          m_lon = msg->lon;

          // If in service mode, center rudder.
          if (m_service)
          {
            debug("On Service -Dispatching a 0 rudder angle and 0 motor");
            dispatchRudder(0, m_tstep);
            m_act_thrust.value = 0;
            dispatch(m_act_thrust);
            reset();
            return;
          }

          // Check if we have a valid time delta.
          if (m_tstep < 0.0)
            return;

          float error = 0.0;

          // Course Error (From IMC::DesiredHeading)
          if (m_args.heading_ctrl || (!m_args.heading_ctrl && msg->sog < m_args.speed_threshold))
          {
            error = Angles::normalizeRadian(m_desired_course - m_estate.psi);
            debug("Heading Control - COG %0.3f, Heading %0.3f, DHeading %0.3f, Error: %0.3f, SOG "
                  "%0.3f, dist to wp: %0.3f",
                  Angles::degrees(msg->cog), Angles::degrees(m_estate.psi),
                  Angles::degrees(m_desired_course), Angles::degrees(error), m_sog, m_dist_to_wp);
          }
          else if (!m_args.heading_ctrl && msg->sog > m_args.speed_threshold)
          {
            error = Angles::normalizeRadian(m_desired_course - msg->cog);
            debug("Course Control - HEAD: %.3f, COG %0.3f, DCOG %0.3f, Error: %0.3f, SOG %0.3f, "
                  "dist to wp: %0.3f",
                  Angles::degrees(m_estate.psi), Angles::degrees(msg->cog),
                  Angles::degrees(m_desired_course), Angles::degrees(error), m_sog, m_dist_to_wp);
          }

          // Check if turning
          m_turning = std::abs(error) > Angles::radians(m_args.turn_min_error);

          // Derivative Error.
          // float error_der = m_args.desired_course_der - m_angvel.z; //m_angvel.z may need to be
          // filtered?

          // Course Controller (PID controller)
          float rudder_cmd = m_course_pid.step(m_tstep, error, 0);  // error_der
          m_act.value = -rudder_cmd;  // TODO: Check if its the same in reality.

          // Dispatch servo command.
          dispatchRudder(m_act.value, m_tstep);

          // Dispatch thrust command.
          dispatchThrust();

          // Compute gamma.
          double k = 0.6;  // k=(m+A11)/(m+a22) hard-coded.
          Gamma m_gamma_adcp, m_gamma_adcp_old, m_gamma_sog, m_gamma_sog_old;
          m_gamma_adcp.source = "adcp";
          m_gamma_adcp_old.source = "adcp_old";
          m_gamma_sog.source = "sog";
          m_gamma_sog_old.source = "sog_old";
          m_gamma_adcp.lat = msg->lat;
          m_gamma_adcp_old.lat = msg->lat;
          m_gamma_sog.lat = msg->lat;
          m_gamma_sog_old.lat = msg->lat;
          m_gamma_adcp.lon = msg->lon;
          m_gamma_adcp_old.lon = msg->lon;
          m_gamma_sog.lon = msg->lon;
          m_gamma_sog_old.lon = msg->lon;
          m_gamma_adcp.sog = m_sog;
          m_gamma_adcp_old.sog = m_sog;
          m_gamma_sog.sog = m_sog;
          m_gamma_sog_old.sog = m_sog;
          m_gamma_adcp.depth = m_shallowest_current_cell.depth;
          m_gamma_adcp_old.depth = m_shallowest_current_cell.depth;
          m_gamma_sog_old.depth = m_shallowest_current_cell.depth;

          double u_c_body =
            m_shallowest_current_cell.vel * std::cos(m_shallowest_current_cell.dir - m_estate.psi);
          double v_c_body =
            m_shallowest_current_cell.vel * std::sin(m_shallowest_current_cell.dir - m_estate.psi);
          spew("u_c_body %f - v_c_body %f", u_c_body, v_c_body);
          m_gamma_adcp.uc = u_c_body;
          m_gamma_adcp_old.uc = u_c_body;
          m_u_r = m_estate.u - u_c_body;
          m_v_r = m_estate.v - v_c_body;
          m_U_r = std::sqrt(std::pow(m_u_r, 2) + std::pow(m_v_r, 2));

          m_gamma_adcp.value = m_u_r * m_U_r
                               * (1.0 - (m_estate.u * u_c_body) / std::pow(m_sog, 2)
                                  - (k * m_estate.u * m_u_r) / std::pow(m_sog, 2));
          m_gamma_adcp_old.value = 1.0 - (m_estate.u * u_c_body) / std::pow(m_sog, 2)
                                   - (k * m_estate.u * m_u_r) / std::pow(m_sog, 2);

          gamma_msg.value = String::str(
            "Gamma ADCP - source: %s, lat: %f, lon: %f, sog: %f, uc: %f, depth: %f, value: %f",
            m_gamma_adcp.source.c_str(), m_gamma_adcp.lat, m_gamma_adcp.lon, m_gamma_adcp.sog,
            m_gamma_adcp.uc, m_gamma_adcp.depth, m_gamma_adcp.value);
          dispatch(gamma_msg);

          gamma_msg.value = String::str(
            "Gamma ADCP old- source: %s, lat: %f, lon: %f, sog: %f, uc: %f, depth: %f, value: %f",
            m_gamma_adcp_old.source.c_str(), m_gamma_adcp_old.lat, m_gamma_adcp_old.lon,
            m_gamma_adcp_old.sog, m_gamma_adcp_old.uc, m_gamma_adcp_old.depth,
            m_gamma_adcp_old.value);
          dispatch(gamma_msg);

          m_gamma_sog.uc = 0;
          m_gamma_sog_old.uc = 0;

          m_gamma_sog.value =
            m_estate.u * m_sog * (1.0 - (k * std::pow(m_estate.u, 2)) / std::pow(m_sog, 2));
          m_gamma_sog_old.value = 1.0 - (k * std::pow(m_estate.u, 2)) / std::pow(m_sog, 2);

          gamma_msg.value = String::str(
            "Gamma SOG - source: %s, lat: %f, lon: %f, sog: %f, uc: %f, depth: %f, value: %f",
            m_gamma_sog.source.c_str(), m_gamma_sog.lat, m_gamma_sog.lon, m_gamma_sog.sog, m_gamma_sog.uc,
            m_gamma_sog.depth, m_gamma_sog.value);
          dispatch(gamma_msg);

          gamma_msg.value = String::str(
            "Gamma SOG old source: %s, lat: %f, lon: %f, sog: %f, uc: %f, depth: %f, value: %f",
            m_gamma_sog_old.source.c_str(), m_gamma_sog_old.lat, m_gamma_sog_old.lon, m_gamma_sog_old.sog,
            m_gamma_sog_old.uc, m_gamma_sog_old.depth, m_gamma_sog_old.value);
          dispatch(gamma_msg);

          spew("SPEEDS - u: %.3f, v: %.3f, u_c_body: %.3f, v_c_body: %.3f, u_r: %.3f, v_r: %.3f, "
               "U: %.3f, U_r: %.3f",
               m_estate.u, m_estate.v, u_c_body, v_c_body, m_u_r, m_v_r, m_sog, m_U_r);
          spew("GAMMAS - ADCP: %f, ADCP (OLD): %f, SOG: %f, SOG (OLD): %f", m_gamma_adcp.value,
               m_gamma_adcp_old.value, m_gamma_sog.value, m_gamma_sog_old.value);

          //! Compute gamma average.
          if (m_avg_adcp == 0)
            m_gamma_avg_adcp = m_gamma_adcp.value;
          else
            m_gamma_avg_adcp =
              ((m_gamma_avg_adcp_last * m_avg_adcp + m_gamma_adcp.value) / (m_avg_adcp + 1));
          m_avg_adcp++;
          m_gamma_avg_adcp_last = m_gamma_avg_adcp;

          if (m_avg_adcp_old == 0)
            m_gamma_avg_adcp_old = m_gamma_adcp_old.value;
          else
            m_gamma_avg_adcp_old =
              ((m_gamma_avg_adcp_old_last * m_avg_adcp_old + m_gamma_adcp_old.value)
               / (m_avg_adcp_old + 1));
          m_avg_adcp_old++;
          m_gamma_avg_adcp_old_last = m_gamma_avg_adcp_old;

          if (m_avg_sog == 0)
            m_gamma_avg_sog = m_gamma_sog.value;
          else
            m_gamma_avg_sog =
              ((m_gamma_avg_sog_last * m_avg_sog + m_gamma_sog.value) / (m_avg_sog + 1));
          m_avg_sog++;
          m_gamma_avg_sog_last = m_gamma_avg_sog;

          if (m_avg_sog_old == 0)
            m_gamma_avg_sog_old = m_gamma_sog_old.value;
          else
            m_gamma_avg_sog_old =
              ((m_gamma_avg_sog_old_last * m_avg_sog_old + m_gamma_sog_old.value)
               / (m_avg_sog_old + 1));
          m_avg_sog_old++;
          m_gamma_avg_sog_old_last = m_gamma_avg_sog_old;
        }

        //! Dispatch to bus ServoPosition message
        //! @param[in] value set rudder actuation value
        //! @param[in] timestep amount of time since last control step
        void
        dispatchRudder(float value, double timestep)
        {
          // Activated if act_ramp parameter is set > 0.0
          if ((value > m_last_act.value) && (m_args.act_ramp > 0.0))
          {
            value =
              m_last_act.value
              + trimValue((value - m_last_act.value) / timestep, 0.0, m_args.act_ramp * timestep);
          }

          m_act.value = trimValue(value, -m_args.act_max, m_args.act_max);

          if (m_wave_freq == 0.0)
            dispatch(m_act);
          else
          {
            if (m_args.ext_filtering == true && m_args.lp_filtering == false
                && m_args.n_filtering == false && m_args.bs_filtering == false)
            {
              // Apply external filter coefficients.
              m_act.value = ext.step(m_act.value);
              dispatch(m_act);
              trace("Applying a %s filter with %0.3f cut-off frequency.", m_ext_filter_type.c_str(),
                    m_args.ext_filter_freq);
            }
            else if (m_args.lp_filtering == true && m_args.n_filtering == false
                     && m_args.bs_filtering == false)
            {
              // Apply LPF coefficients.
              m_act.value = lpf.step(m_act.value);
              dispatch(m_act);
              trace("LPF Filtering.");
            }
            else if (m_args.lp_filtering == false && m_args.n_filtering == true
                     && m_args.bs_filtering == false)
            {
              // Apply NF coefficients.
              m_act.value = nf.step(m_act.value);
              dispatch(m_act);
              trace("NF Filtering.");
            }
            else if (m_args.lp_filtering == true && m_args.n_filtering == true
                     && m_args.bs_filtering == false)
            {
              // Apply NF+LPF coefficients.
              m_act.value = nf.step(m_act.value);
              m_act.value = lpf.step(m_act.value);
              dispatch(m_act);
              trace("NF + LP Filtering.");
            }
            else if (m_args.lp_filtering == true && m_args.n_filtering == false
                     && m_args.bs_filtering == true)
            {
              // Apply BS+LPF coefficients.
              m_act.value = bs.step(m_act.value);
              m_act.value = lpf.step(m_act.value);
              dispatch(m_act);
              trace("BS + LP Filtering.");
            }
            else
            {
              dispatch(m_act);
              trace("NO WAVE FILTERING");
            }
          }

          m_last_act.value = m_act.value;
        }

        //! Dispatch to bus SetThrusterActuation message
        void
        dispatchThrust(void)
        {
          double value;
          // Use thruster if thruster is enabled, turning assistance is enabled and vessel is
          // actually turning.
          if (m_args.en_thrust_turn && m_turning)
            value = m_thrust_assistance;
          // or if thruster is enabled, vessel is not turning,
          // but speed is very low.
          else if (m_args.en_thrust && !m_turning && m_sog < m_args.min_sog && m_pcs_flag_sate != IMC::PathControlState::FL_NEAR)
            value = m_thrust_assistance;
          else if (m_args.en_thrust && m_pcs_flag_sate != IMC::PathControlState::FL_NEAR)
            value = m_thrust_assistance;
          else
            value = 0.0;

          double turning_thrust = trimValue(value, -m_args.max_thrust, m_args.max_thrust);
          if (turning_thrust + m_act_speed > m_args.max_thrust)
          {
            war("Using max thrust");
            m_act_thrust.value = 1;
          }
          else
            m_act_thrust.value = turning_thrust + m_act_speed;

          dispatch(m_act_thrust);
        }

        //! IMC::DesiredHeading contains a desired course over ground.
        void
        consume(const IMC::DesiredHeading* msg)
        {
          if (!isActive())
            return;

          m_des_head_arrived = true;
          m_timer.reset();

          m_desired_course = msg->value;
        }

        void
        consume(const IMC::CurrentProfile* msg)
        {
          Math::Matrix profile_average = Math::Matrix(3, msg->ncells, 0.0);
          Math::Matrix ncells_averaged = Math::Matrix(1, msg->ncells, 0.0);
          Math::Matrix single_profile = Math::Matrix(3, msg->ncells, 0.0);

          // Set this limit high enough based on LOGS.
          if (m_estate.p < m_args.roll_rate && m_estate.q < m_args.pitch_rate)
          {
            double cell_beam_amplitude;
            double cell_beam_correlation;

            for (const auto cell : msg->profile)
            {
              // Construct velocities vector from cells.
              bool cell_is_good = true;

              std::vector<double> beam_velocities;

              for (auto beam : cell->beams)
              {
                cell_beam_amplitude = beam->amp;
                cell_beam_correlation = beam->cor;

                if (cell_beam_amplitude > m_args.ampl_lim
                    && cell_beam_correlation > m_args.corr_lim)
                {
                  // Measurements in this Cell and Beam are good.
                  beam_velocities.push_back(beam->vel);
                }
                else
                {
                  // Measurements in this Cell and Beam are not good.
                  cell_is_good = false;
                  spew("BAD MEASUREMENT - CELL DISCARDED");
                  break;
                }
              }

              if (cell_is_good)
              {
                toWGS84(m_estate, m_shallowest_current_cell.lat, m_shallowest_current_cell.lon);
                m_shallowest_current_cell.depth = cell->cell_position;
                spew("Cell at depth %0.3f is good.", m_shallowest_current_cell.depth);

                // Rotate of 45deg about z, as the sensor is rotated with respect to the vessel.
                if (m_avg_zero == 0)
                  m_beam_velocity_zero_avg = beam_velocities[0];
                else
                  m_beam_velocity_zero_avg =
                    ((m_beam_velocity_zero_avg_last * m_avg_zero + beam_velocities[0])
                     / (m_avg_zero + 1));
                m_avg_zero++;
                m_beam_velocity_zero_avg_last = m_beam_velocity_zero_avg;

                if (m_avg_one == 0)
                  m_beam_velocity_one_avg = beam_velocities[1];
                else
                  m_beam_velocity_one_avg =
                    ((m_beam_velocity_one_avg_last * m_avg_one + beam_velocities[1])
                     / (m_avg_one + 1));
                m_avg_zero++;
                m_beam_velocity_one_avg_last = m_beam_velocity_one_avg;

                double u_body = m_beam_velocity_zero_avg * std::cos(Angles::radians(45))
                                - m_beam_velocity_one_avg * std::sin(Angles::radians(45));
                double v_body = m_beam_velocity_zero_avg * std::sin(Angles::radians(45))
                                + m_beam_velocity_one_avg * std::cos(Angles::radians(45));

                debug("ADCP TASK: relative u %.3f, relative v %.3f", u_body, v_body);

                // Add velocity/sog.
                double u = m_estate.u - u_body;
                double v = m_estate.v - v_body;
                double w = m_estate.w - (beam_velocities[2] + beam_velocities[3]) / 2;

                // Transform speed vectors from body to inertial frame.
                // Option 1 - João Costa
                double u_c_ned, v_c_ned, w_c_ned;
                Coordinates::BodyFixedFrame::toInertialFrame(m_estate.phi, m_estate.theta,
                                                             m_estate.psi, u, v, w, &u_c_ned,
                                                             &v_c_ned, &w_c_ned);
                // Option 2 - Alberto Dallolio
                // double u_c_ned = u*std::cos(m_estate.psi)*std::cos(m_estate.theta) +
                // v*(std::cos(m_estate.psi)*std::sin(m_estate.theta)*std::sin(m_estate.phi) -
                // std::sin(m_estate.psi)*std::cos(m_estate.phi)) +
                // w*(std::sin(m_estate.psi)*std::sin(m_estate.phi) +
                // std::cos(m_estate.psi)*std::cos(m_estate.phi)*std::sin(m_estate.theta)); double
                // v_c_ned = u*std::sin(m_estate.psi)*std::cos(m_estate.theta) +
                // v*(std::cos(m_estate.psi)*std::cos(m_estate.phi) +
                // std::sin(m_estate.psi)*std::sin(m_estate.theta)*std::sin(m_estate.phi)) +
                // w*(std::sin(m_estate.theta)*std::sin(m_estate.psi)*std::cos(m_estate.phi) -
                // std::cos(m_estate.psi)*std::sin(m_estate.phi)); double w_c_ned =
                // -u*std::sin(m_estate.theta) + v*std::cos(m_estate.theta)*std::sin(m_estate.phi) +
                // w*std::cos(m_estate.theta)*std::cos(m_estate.phi);

                // Compute 2D direction of current as atan(vy/vx), for the current cell.
                double curr_direction = std::atan(v_c_ned / u_c_ned);
                m_shallowest_current_cell.dir = curr_direction;

                // Compute velocity magnitude in 2D inertial frame, for the current cell.
                double curr_velocity = std::sqrt(std::pow(v_c_ned, 2) + std::pow(u_c_ned, 2));
                m_shallowest_current_cell.vel = curr_velocity;
              }
            }
          }
        }

        void
        consume(const IMC::Frequency* msg)
        {
          if (!isActive())
            return;

          // TODO: CHECK THE ENTITY!!!!!
          m_wave_freq = msg->value;

          if (m_wave_freq != 0
              && (m_args.lp_filtering == true || m_args.n_filtering == true
                  || m_args.bs_filtering == true))
            buildFilters();

          spew("Consumed Wave Frequency: %f", m_wave_freq);
        }

        void
        buildFilters(void)
        {
          if (m_args.ext_filtering == true)
          {
            if (m_ext_filter_type.compare("LPF") == 0)
              ext.build(
                "LPF", m_args.lpf_taps, 1 / m_tstep,
                pow(2 * M_PI / (m_args.ext_filter_freq), -1));  // Assuming delta is in seconds.
            else if (m_ext_filter_type.compare("NF") == 0)
              ext.build("NF", m_args.nf_taps, 1 / m_tstep,
                        pow(2 * M_PI / m_args.ext_filter_freq, -1));
            else if (m_ext_filter_type.compare("BSF") == 0)
              ext.build("BSF", m_args.nf_taps, 1 / m_tstep,
                        pow(2 * M_PI / m_args.ext_filter_freq, -1)
                          - pow(2 * M_PI / m_args.ext_filter_freq, -1) * (m_args.bsf_scaling / 100),
                        pow(2 * M_PI / m_args.ext_filter_freq, -1)
                          + pow(2 * M_PI / m_args.ext_filter_freq, -1)
                              * (m_args.bsf_scaling / 100));
          }

          if (m_args.lp_filtering == true)
            lpf.build("LPF", m_args.lpf_taps, 1 / m_tstep,
                      pow(2 * M_PI / (m_args.lpf_scaling * m_wave_freq),
                          -1));  // Assuming delta is in seconds.
          if (m_args.n_filtering == true)
            nf.build("NF", m_args.nf_taps, 1 / m_tstep, pow(2 * M_PI / m_wave_freq, -1));
          if (m_args.bs_filtering == true)
            bs.build("BSF", m_args.nf_taps, 1 / m_tstep,
                     pow(2 * M_PI / m_wave_freq, -1)
                       - pow(2 * M_PI / m_wave_freq, -1) * (m_args.bsf_scaling / 100),
                     pow(2 * M_PI / m_wave_freq, -1)
                       + pow(2 * M_PI / m_wave_freq, -1) * (m_args.bsf_scaling / 100));
        }

        void
        consume(const IMC::ControlLoops* msg)
        {
          // Check if its in teleoperation mode
          // if (msg->mask & (IMC::CL_TELEOPERATION))
          //  m_teleoperation = true;
          // else
          //  m_teleoperation = false;

          // Check if Yaw is being controlled.
          if (!(msg->mask & (IMC::CL_YAW)))
            return;

          if (msg->scope_ref < m_scope_ref)
            return;

          m_scope_ref = msg->scope_ref;

          // Activate/Deactivate task as requested by the Control Loop message. Skip if its already
          // as required.
          if (msg->enable == isActive())
            return;

          if (msg->enable)
            requestActivation();
          else
            requestDeactivation();

          // If it was deactivated, stop thruster and center rudder
          if (!isActive())
          {
            reset();
            m_act_thrust.value = 0.0;
            dispatch(m_act_thrust);
            dispatchRudder(0, m_tstep);
          }
        }

        void
        onMain(void)
        {
          while (!stopping())
          {
            waitForMessages(0.01);
            // consumeMessages();

            // If in maneuver and its time to update gains
            if (m_timer_gs.overflow() && !m_service && m_gain_sch)
            {
              m_timer_gs.reset();

              float Kp = 0.0;
              float Ki = 0.0;

              if (m_sch_source.compare("adcp") == 0 && m_gamma_avg_adcp != 0)
              {
                trace("Gamma with ADCP value %f averaged over %.3f seconds.", m_gamma_avg_adcp,
                      m_gs_interval);
                Kp = (0.4 / m_gamma_avg_adcp) * m_args.course_gains_trans[0];
                Ki = (0.4 / m_gamma_avg_adcp) * m_args.course_gains_trans[1];
              }
              else if (m_sch_source.compare("adcp_old") == 0 && m_gamma_avg_adcp_old != 0)
              {
                trace("Gamma with ADCP (OLD) value %f averaged over %.3f seconds.",
                      m_gamma_avg_adcp_old, m_gs_interval);
                Kp = (0.4 / m_gamma_avg_adcp_old) * m_args.course_gains_trans[0];
                Ki = (0.4 / m_gamma_avg_adcp_old) * m_args.course_gains_trans[1];
              }
              else if (m_sch_source.compare("sog") == 0 && m_gamma_avg_sog != 0)
              {
                trace("Gamma with SOG value %f averaged over %.3f seconds.", m_gamma_avg_sog,
                      m_gs_interval);
                Kp = (0.4 / m_gamma_avg_sog) * m_args.course_gains_trans[0];
                Ki = (0.4 / m_gamma_avg_sog) * m_args.course_gains_trans[1];
              }
              else if (m_sch_source.compare("sog_old") == 0 && m_gamma_avg_sog_old != 0)
              {
                trace("Gamma with SOG (OLD) value %f averaged over %.3f seconds.",
                      m_gamma_avg_sog_old, m_gs_interval);
                Kp = (0.4 / m_gamma_avg_sog_old) * m_args.course_gains_trans[0];
                Ki = (0.4 / m_gamma_avg_sog_old) * m_args.course_gains_trans[1];
              }

              if (Kp < 0.5)
                Kp = 0.5;
              if (Ki < 0)
                Ki = 0.0;

              trace("GAIN-SCHEDULED GAINS Kp: %f, Ki: %f", Kp, Ki);

              if (m_args.use_new_gains)
              {
                trace("Using gain-scheduled gains!");
                std::vector<float> gains{ Kp, Ki, 0.0 };
                //! Reset Course Controller.
                reset();
                //! Re-configure PID with new gains.
                setup(gains);
              }
              else
              {
                debug("Using original gains!");
                //! Reset Course Controller.
                reset();
                //! Re-configure PID with new gains.
                setup(m_args.course_gains_trans);
              }
            }

            if (m_timer.overflow())
            {
              m_des_head_arrived = false;
            }
          }
        }
      };
    }
  }
}

DUNE_TASK
