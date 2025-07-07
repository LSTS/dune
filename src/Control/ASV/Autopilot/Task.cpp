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
    //! %Autopilot is responsible for actuation control
    //! for the Autonaut wave glider, with thruster and rudder.
    namespace Autopilot
    {
      using DUNE_NAMESPACES;

      struct Arguments
      {
        //! Maximum Rudder Actuation.
        float act_max;
        //! PID gains for heading controller during turn.
        std::vector<float> course_gains_turn;
        //! Log the size of each PID parcel
        bool log_parcels;
        //! Navigation task entity label.
        std::string elabel_nav;
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
        //! Force thrust assistance.
        bool force_thrust_assist;
        //! Enable speed controller
        bool speed_control;
        //! Minimum heading error to consider vessel is turning
        double turn_min_error;
        //! Autonaut max speed (m/s).
        double max_speed;
        //! Autonaut thruster max rpm.
        double max_rpm;

        //! Ramp actuation limit when the value is rising in actuation per second
        // float act_ramp;
        //! PID gains for heading controller during transect.
        // std::vector<float> course_gains_trans;
        //! External Filter type.
        // std::string ext_filter_type;
        //! Filter activation variables.
        // bool lp_filtering, n_filtering, bs_filtering, ext_filtering;
        //! Low-pass filter taps.
        // double lpf_taps;
        //! Low-pass filter scaling.
        // double lpf_scaling;
        //! Notch filter taps.
        // double nf_taps;
        //! Band-stop filter taps.
        // double bsf_taps;
        //! Band-stop filter scaling.
        // double bsf_scaling;
        //! External filter frequency.
        // double ext_filter_freq;
        //! Enable gain scheduling.
        // bool en_gain_sch;
        // //! Use new gains (gain scheduling).
        // bool use_new_gains;
        //! Use ADCP measurements.
        // std::string sch_source;
        //! Speed threshold for heading control
        // double speed_threshold;
        //! Gain scheduling period.
        // double gain_sch_t;
        //! Amplitude limit.
        // double ampl_lim;
        //! Correlation Limit.
        // double corr_lim;
        //! Vehicle pitching rate limit.
        // double pitch_rate;
        //! Vehicle rolling rate limit.
        // double roll_rate;
      };

      // struct Gamma
      // {
      //   //! Source.
      //   std::string source;
      //   //! Latitude WGS-84.
      //   fp64_t lat;
      //   //! Longitude WGS-84.
      //   fp64_t lon;
      //   //! Ground Speed.
      //   fp32_t sog;
      //   //! Current Longitudinal Speed.
      //   fp32_t uc;
      //   //! Cell Depth.
      //   fp32_t depth;
      //   //! Value.
      //   fp32_t value;
      // };

      // struct SingleCurrentCell
      // {
      //   //! Latitude WGS-84.
      //   fp64_t lat;
      //   //! Longitude WGS-84.
      //   fp64_t lon;
      //   //! Cell Depth.
      //   fp64_t depth;
      //   //! Water Velocity.
      //   fp64_t vel;
      //   //! Direction.
      //   fp64_t dir;
      // };

      struct Task: public Tasks::Task
      {
        //! Task arguments.
        Arguments m_args;
        //! Active.
        bool m_active;
        //! Navigation task entity eid.
        unsigned m_nav_eid;
        //! Course PID controller
        DiscretePID m_course_pid;
        //! Control Parcels for course controller
        IMC::ControlParcel m_parcel;
        //! Desired rudder position/actuation.
        IMC::SetServoPosition m_rudder;
        //! Desired thruster actuation.
        IMC::SetThrusterActuation m_thruster;
        //! Desired course used by PID.
        float m_desired_course;
        //! Time of last estimated state message.
        Delta m_delta;
        //! Control loops last reference
        uint32_t m_scope_ref;
        //! Timestep.
        double m_tstep;
        //! A turn is happening.
        bool m_turning;
        //! Speed Over Ground.
        double m_sog;
        //! Speed over desired course.
        double m_sog_course;
        //! Vehicle Estimated State
        IMC::EstimatedState m_estate;
        //! Desired speed.
        double m_desired_speed;
        // Flag to control PathControlState.
        uint8_t m_pcs_flag_sate;

        //! Low-pass filter for wave filtering.
        // FilterEstimator lpf;
        //! Notch filter for wave filtering.
        // FilterEstimator nf;
        //! Band-stop filter for wave filtering.
        // FilterEstimator bs;
        //! External user-defined filter for wave filtering.
        // FilterEstimator ext;
        //! Estimated Wave Frequency.
        // double m_wave_freq;


        //! Longitudinal relative speed.
        // double m_u_r;
        //! Lateral relative speed.
        // double m_v_r;
        //! Total relative speed.
        // double m_U_r;
        //! Gain Scheduling Timer.
        // Counter<double> m_timer_gs;
        //! Average gamma value.
        // double m_gamma_avg_adcp, m_gamma_avg_adcp_old, m_gamma_avg_sog, m_gamma_avg_sog_old;
        //! Average last gamma value.
        // double m_gamma_avg_adcp_last, m_gamma_avg_adcp_old_last, m_gamma_avg_sog_last, m_gamma_avg_sog_old_last;
        //! Average factor.
        // int m_avg_adcp, m_avg_adcp_old, m_avg_sog, m_avg_sog_old;
        //! Average factor.
        // int m_avg_zero, m_avg_one;
        //! Average last velocity value.
        // double m_beam_velocity_zero_avg_last, m_beam_velocity_one_avg_last;
        //! Average velocity value.
        // double m_beam_velocity_zero_avg, m_beam_velocity_one_avg;
        //! Information about the shallowest current cell.
        // SingleCurrentCell m_shallowest_current_cell;

        Task(const std::string& name, Tasks::Context& ctx):
          Tasks::Task(name, ctx),
          m_active(false),
          m_nav_eid(AddressResolver::invalid()),
          m_scope_ref(0),
          m_tstep(0.0),
          m_turning(false),
          m_sog(0.0),
          m_desired_speed(0.0f)
          // m_wave_freq(0.0),
          // m_avg_adcp(0),
          // m_avg_adcp_old(0),
          // m_avg_sog(0),
          // m_avg_sog_old(0),
          // m_avg_zero(0),
          // m_avg_one(0)
        {
          param("Enable Thrust Assistance", m_args.en_thrust)
          .defaultValue("true")
          .description("Assist navigation with thruster");

          param("Minimum Speed for Thrust", m_args.min_sog)
          .units(Units::MeterPerSecond)
          .visibility(Tasks::Parameter::VISIBILITY_USER)
          .minimumValue("0.0")
          .defaultValue("0.3")
          .description("Speed below which thruster is used");

          param("Enable Thrust During Turn", m_args.en_thrust_turn)
          .visibility(Tasks::Parameter::VISIBILITY_USER)
          .defaultValue("true")
          .description("Assist the turn using the thruster");

          param("Thrust Assistance", m_args.thrust_assist)
          .minimumValue("-1.0")
          .maximumValue("1.0")
          .defaultValue("0.75")
          .description("Percentage of thrust assistance");

          param("Thruster Always On", m_args.force_thrust_assist)
          .defaultValue("true")
          .visibility(Tasks::Parameter::VISIBILITY_USER)
          .scope(Tasks::Parameter::SCOPE_MANEUVER)
          .description("Force the thruster to be always on");

          param("Maximum Thrust Actuation", m_args.max_thrust)
          .minimumValue("0.0")
          .maximumValue("1.0")
          .defaultValue("1.0")
          .description("Maximum Motor Command");

          param("Maximum Rudder Actuation", m_args.act_max)
          .defaultValue("1.0")
          .description("Maximum Rudder Command");

          param("Course PID Gains Turning", m_args.course_gains_turn)
          .defaultValue("")
          .size(3)
          .description("PID gains for Course controller during turn");

          param("Log PID Parcels", m_args.log_parcels)
          .defaultValue("false")
          .description("Log the size of each PID parcel");

          param("Entity Label - Navigation", m_args.elabel_nav)
          .description("Entity label of Navigation task");

          param("Enable speed controller", m_args.speed_control)
          .defaultValue("false");

          param("Minimum Turning Error", m_args.turn_min_error)
          .defaultValue("25")
          .units(Units::Degree)
          .description("Minimum heading error to consider vessel is turning (in degrees).");

          param("Autonaut Maximum Speed", m_args.max_speed)
          .defaultValue("2.0")
          .units(Units::MeterPerSecond)
          .description("Maximum speed of the Autonaut (in m/s).");

          param("Autonaut Thruster Maximum RPM", m_args.max_rpm)
          .defaultValue("3600")
          .units(Units::RPM)
          .description("Maximum rpm of the Autonaut thruster.");

          // param("Enable Gain Scheduling", m_args.en_gain_sch)
          // .defaultValue("true")
          // .description("Enable gain scheduling during turn");

          // param("Preferred scheduling", m_args.sch_source)
          // .defaultValue("false")
          // .description("Preferred information for computing gamma.");

          // param("Gain Scheduling Interval", m_args.gain_sch_t)
          // .defaultValue("60")
          // .minimumValue("30")
          // .description("Interval for recomputing PID gains.");

          // param("Use new gains", m_args.use_new_gains)
          // .defaultValue("false")
          // .description("Enable gain scheduling based on gamma");

          // param("Course PID Gains Transect", m_args.course_gains_trans)
          // .defaultValue("")
          // .size(3)
          // .description("PID gains for Course controller during straight line");

          // param("Ramp Actuation Limit", m_args.act_ramp)
          // .defaultValue("0.0")
          // .description("Ramp actuation limit when the value is rising in actuation per second");

          // param("Activate LP Filtering", m_args.lp_filtering)
          // .defaultValue("false")
          // .description("Activate Low-pass filtering of computed rudder angle");

          // param("Activate N Filtering", m_args.n_filtering)
          // .defaultValue("false")
          // .description("Activate Notch filtering of computed rudder angle");

          // param("Activate BS Filtering", m_args.bs_filtering)
          // .defaultValue("false")
          // .description("Activate Band-stop filtering of computed rudder angle");

          // param("Activate External Filtering", m_args.ext_filtering)
          // .defaultValue("false")
          // .description("Activate external user-defined filtering of computed rudder angle");

          // param("External Filter Type", m_args.ext_filter_type)
          // .defaultValue("LPF")
          // .description("External user-defined filter type");

          // param("LP taps", m_args.lpf_taps)
          // .defaultValue("10.0")
          // .minimumValue("1.0")
          // .description("Low-pass filter number of taps");

          // param("LPF scaling", m_args.lpf_scaling)
          // .defaultValue("1.2")
          // .minimumValue("1.0")
          // .description("Low-pass filter gain to remove HF components");

          // param("NF taps", m_args.nf_taps)
          // .defaultValue("10.0")
          // .minimumValue("1.0")
          // .description("Notch filter number of taps");

          // param("BSF taps", m_args.bsf_taps)
          // .defaultValue("10.0")
          // .minimumValue("1.0")
          // .description("Band-stop filter(s) number of taps");

          // param("BSF scaling", m_args.bsf_scaling)
          // .defaultValue("20")
          // .minimumValue("1")
          // .description("BSF scaling percentage around cut-off estimated frequency");

          // param("External Filter Frequency", m_args.ext_filter_freq)
          // .units(Units::Hertz)
          // .defaultValue("1.0")
          // .description("Frequency for external user-defined filter.");

          // param("SOG threshold - Heading Control", m_args.speed_threshold)
          // .defaultValue("0.1")
          // .minimumValue("0.001")
          // .description("SOG threshold above which switch to heading control.");

          // param("Correlation Limit", m_args.corr_lim)
          // .defaultValue("50")
          // .maximumValue("100")
          // .minimumValue("0")
          // .description("Correlation above which measurement is discarded.");

          // param("Amplitude Limit", m_args.ampl_lim)
          // .defaultValue("0")
          // .units(Units::Decibel)
          // .description("Amplitude above which measurement is discarded.");

          // param("Vehicle Pitch Rate Limit", m_args.pitch_rate)
          // .defaultValue("0")
          // .description("Pitching rate above which measurement is discarded.");

          // param("Vehicle Roll Rate Limit", m_args.roll_rate)
          // .defaultValue("0")
          // .description("Roll rate above which measurement is discarded.");

          // Register handler routines.
          bind<IMC::EstimatedState>(this);
          bind<IMC::DesiredHeading>(this);
          bind<IMC::ControlLoops>(this);
          bind<IMC::PathControlState>(this);          
          bind<IMC::DesiredSpeed>(this);
          // bind<IMC::Frequency>(this);
          // bind<IMC::CurrentProfile>(this);
        }

        void
        onUpdateParameters(void)
        {
          if (paramChanged(m_args.course_gains_turn))
          {
            setup(m_args.course_gains_turn);
            if (m_active)
              reset();
          }

          // if (paramChanged(m_args.course_gains_trans) || paramChanged(m_args.log_parcels))
          // {
          //   if (m_active)
          //     reset();

          //   setup(m_args.course_gains_trans);
          // }

          // if (paramChanged(m_args.gain_sch_t))
          //   m_timer_gs.setTop(m_args.gain_sch_t);

          // if (paramChanged(m_args.en_gain_sch))
          // {
          //   if (!m_args.en_gain_sch)
          //   {
          //     if (m_active)
          //       reset();

          //     setup(m_args.course_gains_trans);
          //     debug("Nominal gains restored.");
          //   }
          // }

          // if (paramChanged(m_args.lp_filtering) || paramChanged(m_args.n_filtering)
          //     || paramChanged(m_args.bs_filtering) || paramChanged(m_args.ext_filtering)
          //     || paramChanged(m_args.lpf_taps) || paramChanged(m_args.nf_taps)
          //     || paramChanged(m_args.lpf_scaling) || paramChanged(m_args.bsf_taps)
          //     || paramChanged(m_args.bsf_scaling) || paramChanged(m_args.ext_filter_freq))
          //   buildFilters();
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
            throw RestartNeeded("Failed resolving entity! Configuration error!", 10);
            //! TODO: this task should not be running if the entity is not resolved.
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

        void
        onResourceAcquisition(void)
        {
        }

        void
        consume(const IMC::DesiredSpeed* msg)
        {
          if (!m_active)
            return;

          if (!m_args.speed_control)
            return;

          double speed = 0;

          switch (msg->speed_units)
          {
            case IMC::SUNITS_METERS_PS:
              speed = msg->value / m_args.max_speed;
              break;

            case IMC::SUNITS_RPM:
              speed = msg->value / m_args.max_rpm;
              break;

            case IMC::SUNITS_PERCENTAGE:
              speed = msg->value;
              break;

            default:
              break;
          }

          m_desired_speed = trimValue(speed, -m_args.max_thrust, m_args.max_thrust);
          spew("onDesiredSpeed %f", m_desired_speed);
        }

        void
        consume(const IMC::PathControlState* msg)
        {
          if (!m_active)
            return;

          m_pcs_flag_sate = msg->flags;
        }

        //! Reset PIDs and actuation references.
        void
        reset(void)
        {
          m_course_pid.reset();

          m_rudder.id = 0;
          m_rudder.value = 0.0;
          dispatch(m_rudder);

          m_thruster.id = 0;
          m_thruster.value = 0.0;
          dispatch(m_thruster);
        }

        //! Setup PIDs.
        void
        setup(std::vector<float> gains)
        {
          m_course_pid.setGains(gains);
          m_course_pid.setOutputLimits(-m_args.act_max, m_args.act_max);  // Anti-windup

          debug("SETTING GAINS: %0.3f, %0.3f, %0.3f", gains[0], gains[1], gains[2]);

          if (m_args.log_parcels)
            m_course_pid.enableParcels(this, &m_parcel);
        }

        void
        onResourceInitialization(void)
        {
          stop();
        }

        void
        consume(const IMC::EstimatedState* msg)
        {
          if (msg->getSource() != getSystemId() || msg->getSourceEntity() != m_nav_eid)
            return;

          m_tstep = m_delta.getDelta();
          m_estate = *msg;
          double lat = m_estate.lat;
          double lon = m_estate.lon;
          WGS84::displace(m_estate.x, m_estate.y, &lat, &lon);

          // Project speed over ground, into the desired course.
          // This is the speed of the vehicle in the direction of the desired course.
          m_sog = std::sqrt(std::pow(m_estate.vx, 2) + std::pow(m_estate.vy, 2));
          m_sog_course = m_sog * std::cos(m_desired_course - m_estate.psi);

          if (!m_active)
            return;

          // Check if we have a valid time delta.
          if (m_tstep < 0.0)
            return;

          float error = 0.0;

          // Course Error (From IMC::DesiredHeading)
          error = Angles::normalizeRadian(m_desired_course - m_estate.psi);

          // Check if turning
          m_turning = std::abs(error) > Angles::radians(m_args.turn_min_error);

          // Derivative Error.
          // float error_der = m_args.desired_course_der - m_angvel.z; //m_angvel.z may need to be
          // filtered?

          // Course Controller (PID controller)
          float rudder_cmd = m_course_pid.step(m_tstep, error, 0);  // error_der
          m_rudder.value = -rudder_cmd;  // TODO: Check if its the same in reality.

          // Dispatch servo command.
          dispatchRudder(m_rudder.value/* , m_tstep */);

          // Dispatch thrust command.
          dispatchThrust();

          // Compute gamma.
          // double k = 0.6;  // k=(m+A11)/(m+a22) hard-coded.
          // Gamma m_gamma_adcp, m_gamma_adcp_old, m_gamma_sog, m_gamma_sog_old;
          // m_gamma_adcp.source = "adcp";
          // m_gamma_adcp_old.source = "adcp_old";
          // m_gamma_sog.source = "sog";
          // m_gamma_sog_old.source = "sog_old";
          // m_gamma_adcp.lat = lat;
          // m_gamma_adcp_old.lat = lat;
          // m_gamma_sog.lat = lat;
          // m_gamma_sog_old.lat = lat;
          // m_gamma_adcp.lon = lon;
          // m_gamma_adcp_old.lon = lon;
          // m_gamma_sog.lon = lon;
          // m_gamma_sog_old.lon = lon;
          // m_gamma_adcp.sog = m_sog;
          // m_gamma_adcp_old.sog = m_sog;
          // m_gamma_sog.sog = m_sog;
          // m_gamma_sog_old.sog = m_sog;
          // m_gamma_adcp.depth = m_shallowest_current_cell.depth;
          // m_gamma_adcp_old.depth = m_shallowest_current_cell.depth;
          // m_gamma_sog_old.depth = m_shallowest_current_cell.depth;

          // double u_c_body =
          //   m_shallowest_current_cell.vel * std::cos(m_shallowest_current_cell.dir - m_estate.psi);
          // double v_c_body =
          //   m_shallowest_current_cell.vel * std::sin(m_shallowest_current_cell.dir - m_estate.psi);
          // spew("u_c_body %f - v_c_body %f", u_c_body, v_c_body);
          // m_gamma_adcp.uc = u_c_body;
          // m_gamma_adcp_old.uc = u_c_body;
          // m_u_r = m_estate.u - u_c_body;
          // m_v_r = m_estate.v - v_c_body;
          // m_U_r = std::sqrt(std::pow(m_u_r, 2) + std::pow(m_v_r, 2));

          // m_gamma_adcp.value = m_u_r * m_U_r
          //                     * (1.0 - (m_estate.u * u_c_body) / std::pow(m_sog, 2)
          //                         - (k * m_estate.u * m_u_r) / std::pow(m_sog, 2));
          // m_gamma_adcp_old.value = 1.0 - (m_estate.u * u_c_body) / std::pow(m_sog, 2)
          //                         - (k * m_estate.u * m_u_r) / std::pow(m_sog, 2);

          // IMC::DevDataText gamma_msg;
          // gamma_msg.value = String::str(
          //   "Gamma ADCP - source: %s, lat: %f, lon: %f, sog: %f, uc: %f, depth: %f, value: %f",
          //   m_gamma_adcp.source.c_str(), m_gamma_adcp.lat, m_gamma_adcp.lon, m_gamma_adcp.sog,
          //   m_gamma_adcp.uc, m_gamma_adcp.depth, m_gamma_adcp.value);
          // dispatch(gamma_msg);

          // gamma_msg.value = String::str(
          //   "Gamma ADCP old- source: %s, lat: %f, lon: %f, sog: %f, uc: %f, depth: %f, value: %f",
          //   m_gamma_adcp_old.source.c_str(), m_gamma_adcp_old.lat, m_gamma_adcp_old.lon,
          //   m_gamma_adcp_old.sog, m_gamma_adcp_old.uc, m_gamma_adcp_old.depth,
          //   m_gamma_adcp_old.value);
          // dispatch(gamma_msg);

          // m_gamma_sog.uc = 0;
          // m_gamma_sog_old.uc = 0;

          // m_gamma_sog.value =
          //   m_estate.u * m_sog * (1.0 - (k * std::pow(m_estate.u, 2)) / std::pow(m_sog, 2));
          // m_gamma_sog_old.value = 1.0 - (k * std::pow(m_estate.u, 2)) / std::pow(m_sog, 2);

          // gamma_msg.value = String::str(
          //   "Gamma SOG - source: %s, lat: %f, lon: %f, sog: %f, uc: %f, depth: %f, value: %f",
          //   m_gamma_sog.source.c_str(), m_gamma_sog.lat, m_gamma_sog.lon, m_gamma_sog.sog, m_gamma_sog.uc,
          //   m_gamma_sog.depth, m_gamma_sog.value);
          // dispatch(gamma_msg);

          // gamma_msg.value = String::str(
          //   "Gamma SOG old source: %s, lat: %f, lon: %f, sog: %f, uc: %f, depth: %f, value: %f",
          //   m_gamma_sog_old.source.c_str(), m_gamma_sog_old.lat, m_gamma_sog_old.lon, m_gamma_sog_old.sog,
          //   m_gamma_sog_old.uc, m_gamma_sog_old.depth, m_gamma_sog_old.value);
          // dispatch(gamma_msg);

          // spew("SPEEDS - u: %.3f, v: %.3f, u_c_body: %.3f, v_c_body: %.3f, u_r: %.3f, v_r: %.3f, "
          //     "U: %.3f, U_r: %.3f",
          //     m_estate.u, m_estate.v, u_c_body, v_c_body, m_u_r, m_v_r, m_sog, m_U_r);
          // spew("GAMMAS - ADCP: %f, ADCP (OLD): %f, SOG: %f, SOG (OLD): %f", m_gamma_adcp.value,
          //     m_gamma_adcp_old.value, m_gamma_sog.value, m_gamma_sog_old.value);

          // //! Compute gamma average.
          // if (m_avg_adcp == 0)
          //   m_gamma_avg_adcp = m_gamma_adcp.value;
          // else
          //   m_gamma_avg_adcp =
          //     ((m_gamma_avg_adcp_last * m_avg_adcp + m_gamma_adcp.value) / (m_avg_adcp + 1));
          // m_avg_adcp++;
          // m_gamma_avg_adcp_last = m_gamma_avg_adcp;

          // if (m_avg_adcp_old == 0)
          //   m_gamma_avg_adcp_old = m_gamma_adcp_old.value;
          // else
          //   m_gamma_avg_adcp_old =
          //     ((m_gamma_avg_adcp_old_last * m_avg_adcp_old + m_gamma_adcp_old.value)
          //     / (m_avg_adcp_old + 1));
          // m_avg_adcp_old++;
          // m_gamma_avg_adcp_old_last = m_gamma_avg_adcp_old;

          // if (m_avg_sog == 0)
          //   m_gamma_avg_sog = m_gamma_sog.value;
          // else
          //   m_gamma_avg_sog =
          //     ((m_gamma_avg_sog_last * m_avg_sog + m_gamma_sog.value) / (m_avg_sog + 1));
          // m_avg_sog++;
          // m_gamma_avg_sog_last = m_gamma_avg_sog;

          // if (m_avg_sog_old == 0)
          //   m_gamma_avg_sog_old = m_gamma_sog_old.value;
          // else
          //   m_gamma_avg_sog_old =
          //     ((m_gamma_avg_sog_old_last * m_avg_sog_old + m_gamma_sog_old.value)
          //     / (m_avg_sog_old + 1));
          // m_avg_sog_old++;
          // m_gamma_avg_sog_old_last = m_gamma_avg_sog_old;
        }

        //! Dispatch to bus ServoPosition message
        //! @param[in] value set rudder actuation value
        //! @param[in] timestep amount of time since last control step
        void
        dispatchRudder(float value/* , double timestep */)
        {
          // Activated if act_ramp parameter is set > 0.0
          // if ((value > m_rudder.value) && (m_args.act_ramp > 0.0))
          // {
          //   value = m_rudder.value +
          //           trimValue((value - m_rudder.value) / timestep, 0.0, m_args.act_ramp * timestep);
          // }

          m_rudder.value = trimValue(value, -m_args.act_max, m_args.act_max);
          dispatch(m_rudder);

          // if (m_wave_freq == 0.0)
          //   dispatch(m_rudder);
          // else
          // {
          //   if (m_args.ext_filtering == true && m_args.lp_filtering == false
          //       && m_args.n_filtering == false && m_args.bs_filtering == false)
          //   {
          //     // Apply external filter coefficients.
          //     m_rudder.value = ext.step(m_rudder.value);
          //     dispatch(m_rudder);
          //     trace("Applying a %s filter with %0.3f cut-off frequency.", m_args.ext_filter_type.c_str(),
          //           m_args.ext_filter_freq);
          //   }
          //   else if (m_args.lp_filtering == true && m_args.n_filtering == false
          //            && m_args.bs_filtering == false)
          //   {
          //     // Apply LPF coefficients.
          //     m_rudder.value = lpf.step(m_rudder.value);
          //     dispatch(m_rudder);
          //     trace("LPF Filtering.");
          //   }
          //   else if (m_args.lp_filtering == false && m_args.n_filtering == true
          //            && m_args.bs_filtering == false)
          //   {
          //     // Apply NF coefficients.
          //     m_rudder.value = nf.step(m_rudder.value);
          //     dispatch(m_rudder);
          //     trace("NF Filtering.");
          //   }
          //   else if (m_args.lp_filtering == true && m_args.n_filtering == true
          //            && m_args.bs_filtering == false)
          //   {
          //     // Apply NF+LPF coefficients.
          //     m_rudder.value = nf.step(m_rudder.value);
          //     m_rudder.value = lpf.step(m_rudder.value);
          //     dispatch(m_rudder);
          //     trace("NF + LP Filtering.");
          //   }
          //   else if (m_args.lp_filtering == true && m_args.n_filtering == false
          //            && m_args.bs_filtering == true)
          //   {
          //     // Apply BS+LPF coefficients.
          //     m_rudder.value = bs.step(m_rudder.value);
          //     m_rudder.value = lpf.step(m_rudder.value);
          //     dispatch(m_rudder);
          //     trace("BS + LP Filtering.");
          //   }
          //   else
          //   {
          //     dispatch(m_rudder);
          //     trace("NO WAVE FILTERING");
          //   }
          // }
        }

        //! Dispatch to bus SetThrusterActuation message
        void
        dispatchThrust(void)
        {
          double value = 0.0f;
          if (m_pcs_flag_sate != IMC::PathControlState::FL_NEAR)
          {
            if (m_args.force_thrust_assist)
            {
              value = m_args.thrust_assist;
            }
            else if (m_args.en_thrust)
            {
              value = m_args.speed_control ? m_desired_speed : 0.0f;

              if ((m_args.en_thrust_turn && m_turning) ||
                  (m_sog_course < m_args.min_sog))
                value += m_args.thrust_assist;
            }
          }

          m_thruster.value = trimValue(value, -m_args.max_thrust, m_args.max_thrust);
          dispatch(m_thruster);
        }

        //! IMC::DesiredHeading contains a desired course over ground.
        void
        consume(const IMC::DesiredHeading* msg)
        {
          if (!m_active)
            return;

          m_desired_course = msg->value;
        }

        // void
        // consume(const IMC::CurrentProfile* msg)
        // {
        //   Math::Matrix profile_average = Math::Matrix(3, msg->ncells, 0.0);
        //   Math::Matrix ncells_averaged = Math::Matrix(1, msg->ncells, 0.0);
        //   Math::Matrix single_profile = Math::Matrix(3, msg->ncells, 0.0);

        //   // Set this limit high enough based on LOGS.
        //   if (m_estate.p < m_args.roll_rate && m_estate.q < m_args.pitch_rate)
        //   {
        //     double cell_beam_amplitude;
        //     double cell_beam_correlation;

        //     for (const auto cell : msg->profile)
        //     {
        //       // Construct velocities vector from cells.
        //       bool cell_is_good = true;

        //       std::vector<double> beam_velocities;

        //       for (auto beam : cell->beams)
        //       {
        //         cell_beam_amplitude = beam->amp;
        //         cell_beam_correlation = beam->cor;

        //         if (cell_beam_amplitude > m_args.ampl_lim
        //             && cell_beam_correlation > m_args.corr_lim)
        //         {
        //           // Measurements in this Cell and Beam are good.
        //           beam_velocities.push_back(beam->vel);
        //         }
        //         else
        //         {
        //           // Measurements in this Cell and Beam are not good.
        //           cell_is_good = false;
        //           spew("BAD MEASUREMENT - CELL DISCARDED");
        //           break;
        //         }
        //       }

        //       if (cell_is_good)
        //       {
        //         toWGS84(m_estate, m_shallowest_current_cell.lat, m_shallowest_current_cell.lon);
        //         m_shallowest_current_cell.depth = cell->cell_position;
        //         spew("Cell at depth %0.3f is good.", m_shallowest_current_cell.depth);

        //         // Rotate of 45deg about z, as the sensor is rotated with respect to the vessel.
        //         if (m_avg_zero == 0)
        //           m_beam_velocity_zero_avg = beam_velocities[0];
        //         else
        //           m_beam_velocity_zero_avg =
        //             ((m_beam_velocity_zero_avg_last * m_avg_zero + beam_velocities[0])
        //              / (m_avg_zero + 1));
        //         m_avg_zero++;
        //         m_beam_velocity_zero_avg_last = m_beam_velocity_zero_avg;

        //         if (m_avg_one == 0)
        //           m_beam_velocity_one_avg = beam_velocities[1];
        //         else
        //           m_beam_velocity_one_avg =
        //             ((m_beam_velocity_one_avg_last * m_avg_one + beam_velocities[1])
        //              / (m_avg_one + 1));
        //         m_avg_zero++;
        //         m_beam_velocity_one_avg_last = m_beam_velocity_one_avg;

        //         double u_body = m_beam_velocity_zero_avg * std::cos(Angles::radians(45))
        //                         - m_beam_velocity_one_avg * std::sin(Angles::radians(45));
        //         double v_body = m_beam_velocity_zero_avg * std::sin(Angles::radians(45))
        //                         + m_beam_velocity_one_avg * std::cos(Angles::radians(45));

        //         debug("ADCP TASK: relative u %.3f, relative v %.3f", u_body, v_body);

        //         // Add velocity/sog.
        //         double u = m_estate.u - u_body;
        //         double v = m_estate.v - v_body;
        //         double w = m_estate.w - (beam_velocities[2] + beam_velocities[3]) / 2;

        //         // Transform speed vectors from body to inertial frame.
        //         // Option 1 - João Costa
        //         double u_c_ned, v_c_ned, w_c_ned;
        //         Coordinates::BodyFixedFrame::toInertialFrame(m_estate.phi, m_estate.theta,
        //                                                      m_estate.psi, u, v, w, &u_c_ned,
        //                                                      &v_c_ned, &w_c_ned);
        //         // Option 2 - Alberto Dallolio
        //         // double u_c_ned = u*std::cos(m_estate.psi)*std::cos(m_estate.theta) +
        //         // v*(std::cos(m_estate.psi)*std::sin(m_estate.theta)*std::sin(m_estate.phi) -
        //         // std::sin(m_estate.psi)*std::cos(m_estate.phi)) +
        //         // w*(std::sin(m_estate.psi)*std::sin(m_estate.phi) +
        //         // std::cos(m_estate.psi)*std::cos(m_estate.phi)*std::sin(m_estate.theta)); double
        //         // v_c_ned = u*std::sin(m_estate.psi)*std::cos(m_estate.theta) +
        //         // v*(std::cos(m_estate.psi)*std::cos(m_estate.phi) +
        //         // std::sin(m_estate.psi)*std::sin(m_estate.theta)*std::sin(m_estate.phi)) +
        //         // w*(std::sin(m_estate.theta)*std::sin(m_estate.psi)*std::cos(m_estate.phi) -
        //         // std::cos(m_estate.psi)*std::sin(m_estate.phi)); double w_c_ned =
        //         // -u*std::sin(m_estate.theta) + v*std::cos(m_estate.theta)*std::sin(m_estate.phi) +
        //         // w*std::cos(m_estate.theta)*std::cos(m_estate.phi);

        //         // Compute 2D direction of current as atan(vy/vx), for the current cell.
        //         double curr_direction = std::atan(v_c_ned / u_c_ned);
        //         m_shallowest_current_cell.dir = curr_direction;

        //         // Compute velocity magnitude in 2D inertial frame, for the current cell.
        //         double curr_velocity = std::sqrt(std::pow(v_c_ned, 2) + std::pow(u_c_ned, 2));
        //         m_shallowest_current_cell.vel = curr_velocity;
        //       }
        //     }
        //   }
        // }

        // void
        // consume(const IMC::Frequency* msg)
        // {
        //   if (!m_active)
        //     return;

        //   // TODO: CHECK THE ENTITY!!!!!
        //   m_wave_freq = msg->value;

        //   if (m_wave_freq != 0
        //       && (m_args.lp_filtering == true || m_args.n_filtering == true
        //           || m_args.bs_filtering == true))
        //     buildFilters();

        //   spew("Consumed Wave Frequency: %f", m_wave_freq);
        // }

        // void
        // buildFilters(void)
        // {
        //   if (m_args.ext_filtering == true)
        //   {
        //     if (m_args.ext_filter_type.compare("LPF") == 0)
        //       ext.build(
        //         "LPF", m_args.lpf_taps, 1 / m_tstep,
        //         pow(2 * M_PI / (m_args.ext_filter_freq), -1));  // Assuming delta is in seconds.
        //     else if (m_args.ext_filter_type.compare("NF") == 0)
        //       ext.build("NF", m_args.nf_taps, 1 / m_tstep,
        //                 pow(2 * M_PI / m_args.ext_filter_freq, -1));
        //     else if (m_args.ext_filter_type.compare("BSF") == 0)
        //       ext.build("BSF", m_args.nf_taps, 1 / m_tstep,
        //                 pow(2 * M_PI / m_args.ext_filter_freq, -1)
        //                   - pow(2 * M_PI / m_args.ext_filter_freq, -1) * (m_args.bsf_scaling / 100),
        //                 pow(2 * M_PI / m_args.ext_filter_freq, -1)
        //                   + pow(2 * M_PI / m_args.ext_filter_freq, -1)
        //                       * (m_args.bsf_scaling / 100));
        //   }

        //   if (m_args.lp_filtering == true)
        //     lpf.build("LPF", m_args.lpf_taps, 1 / m_tstep,
        //               pow(2 * M_PI / (m_args.lpf_scaling * m_wave_freq),
        //                   -1));  // Assuming delta is in seconds.
        //   if (m_args.n_filtering == true)
        //     nf.build("NF", m_args.nf_taps, 1 / m_tstep, pow(2 * M_PI / m_wave_freq, -1));
        //   if (m_args.bs_filtering == true)
        //     bs.build("BSF", m_args.nf_taps, 1 / m_tstep,
        //              pow(2 * M_PI / m_wave_freq, -1)
        //                - pow(2 * M_PI / m_wave_freq, -1) * (m_args.bsf_scaling / 100),
        //              pow(2 * M_PI / m_wave_freq, -1)
        //                + pow(2 * M_PI / m_wave_freq, -1) * (m_args.bsf_scaling / 100));
        // }

        void
        consume(const IMC::ControlLoops* msg)
        {
          if (!(msg->mask & (IMC::CL_YAW | IMC::CL_SPEED)))
            return;

          if (msg->scope_ref < m_scope_ref)
            return;

          m_scope_ref = msg->scope_ref;
          if ((msg->enable == ControlLoops::CL_ENABLE && m_active) ||
              (msg->enable == ControlLoops::CL_DISABLE && !m_active))
            return;

          switch (msg->enable)
          {
          case ControlLoops::CL_ENABLE:
            start();
            break;

          case ControlLoops::CL_DISABLE:
            stop();
            break;
          
          default:
            return;
          }
        }

        void
        start(void)
        {
          m_active = true;
          setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_ACTIVE);
          reset();
        }

        void
        stop(void)
        {
          reset();
          m_active = false;
          setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_IDLE);
        }

        void
        onMain(void)
        {
          while (!stopping())
          {
            waitForMessages(0.01);

            // if (!m_timer_gs.overflow() || !m_active || !m_args.en_gain_sch)
            //   continue;

            // m_timer_gs.reset();

            // float Kp = 0.0;
            // float Ki = 0.0;

            // if (m_args.sch_source.compare("adcp") == 0 && m_gamma_avg_adcp != 0)
            // {
            //   trace("Gamma with ADCP value %f averaged over %.3f seconds.", m_gamma_avg_adcp,
            //         m_args.gain_sch_t);
            //   Kp = (0.4 / m_gamma_avg_adcp) * m_args.course_gains_trans[0];
            //   Ki = (0.4 / m_gamma_avg_adcp) * m_args.course_gains_trans[1];
            // }
            // else if (m_args.sch_source.compare("adcp_old") == 0 && m_gamma_avg_adcp_old != 0)
            // {
            //   trace("Gamma with ADCP (OLD) value %f averaged over %.3f seconds.",
            //         m_gamma_avg_adcp_old, m_args.gain_sch_t);
            //   Kp = (0.4 / m_gamma_avg_adcp_old) * m_args.course_gains_trans[0];
            //   Ki = (0.4 / m_gamma_avg_adcp_old) * m_args.course_gains_trans[1];
            // }
            // else if (m_args.sch_source.compare("sog") == 0 && m_gamma_avg_sog != 0)
            // {
            //   trace("Gamma with SOG value %f averaged over %.3f seconds.", m_gamma_avg_sog,
            //         m_args.gain_sch_t);
            //   Kp = (0.4 / m_gamma_avg_sog) * m_args.course_gains_trans[0];
            //   Ki = (0.4 / m_gamma_avg_sog) * m_args.course_gains_trans[1];
            // }
            // else if (m_args.sch_source.compare("sog_old") == 0 && m_gamma_avg_sog_old != 0)
            // {
            //   trace("Gamma with SOG (OLD) value %f averaged over %.3f seconds.",
            //         m_gamma_avg_sog_old, m_args.gain_sch_t);
            //   Kp = (0.4 / m_gamma_avg_sog_old) * m_args.course_gains_trans[0];
            //   Ki = (0.4 / m_gamma_avg_sog_old) * m_args.course_gains_trans[1];
            // }

            // if (Kp < 0.5)
            //   Kp = 0.5;
            // if (Ki < 0)
            //   Ki = 0.0;

            // trace("GAIN-SCHEDULED GAINS Kp: %f, Ki: %f", Kp, Ki);

            // reset();

            // if (m_args.use_new_gains)
            // {
            //   trace("Using gain-scheduled gains!");
            //   std::vector<float> gains{ Kp, Ki, 0.0 };
            //   setup(gains);
            // }
            // else
            // {
            //   debug("Using original gains!");
            //   setup(m_args.course_gains_trans);
            // }
          }
        }
      };
    }
  }
}

DUNE_TASK
