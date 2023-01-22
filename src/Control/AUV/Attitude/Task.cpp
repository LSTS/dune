//***************************************************************************
// Copyright 2007-2022 Universidade do Porto - Faculdade de Engenharia      *
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
// Author: Jorge Estrela da Silva (original controller implementation)      *
// Author: Renato Caldas                                                    *
// Author: Pedro Calado                                                     *
//***************************************************************************

// ISO C++ 98 headers.
#include <cmath>
#include <memory>
#include <string>
#include <vector>

// DUNE headers.
#include <DUNE/DUNE.hpp>

namespace Control
{
  namespace AUV
  {
    namespace Attitude
    {
      using DUNE_NAMESPACES;
      using std::sin;
      using std::cos;
      using std::tan;

      //! Depth reference when altitude is ignored.
      static const float c_min_depth_ref = 1.5f;
      //! Depth hysteresis boundary to apply extra pitch.
      static const float c_depth_hyst = 0.5f;
      //! Heading rate limit to apply extra pitch.
      static const float c_max_hrate = 10.0f;

      //! Controllable loops.
      static const uint32_t c_controllable = IMC::CL_YAW | IMC::CL_YAW_RATE | IMC::CL_DEPTH | IMC::CL_PITCH;
      //! Required loops.
      static const uint32_t c_required = IMC::CL_TORQUE;
      //! Loops names.
      static const std::string c_loop_name[]
      = { DTR_RT("Roll"),     DTR_RT("Pitch"),   DTR_RT("Depth"),
          DTR_RT("Altitude"), DTR_RT("Heading"), DTR_RT("Heading Rate") };
      //! Loops units.
      static const unsigned c_loop_unit[]
      = { Units::Degree, Units::Degree,          Units::Degree,
          Units::Degree, Units::DegreePerSecond, Units::Degree };

      enum Loops
      {
        //! Roll loop.
        LP_ROLL,
        //! Pitch loop.
        LP_PITCH,
        //! Depth loop.
        LP_DEPTH,
        //! Altitude loop.
        LP_ALT,
        //! Heading loop.
        LP_HEADING,
        //! Heading rate loop.
        LP_HRATE,
        //! Number of loops.
        LP_MAX_LOOPS
      };

      struct RollCompensation
      {
        //! Perform roll compensation by using offset in reference.
        bool use_offset;
        //! Roll offset value if set.
        float offset_angle;
        //! Perform roll speed compensation by changing proportional gain.
        bool use_speed;
        //! Lower and upper speed bounds when doing roll speed compensation.
        std::vector<float> speed_bounds;
        //! Roll's minimum proportional gain in speed compensation.
        float speed_gain;
      };

      struct Arguments
      {
        //! PID controller gains.
        std::vector<float> gains[LP_MAX_LOOPS];
        //! PID integral limits.
        float max_int[LP_MAX_LOOPS];
        //! Maximum fin rotation.
        float max_fin_rot;
        //! Enable or disable roll controller.
        bool roll_control_enabled;
        //! Maximum pitch actuation.
        float max_pitch_act;
        //! Maximum pitch reference for depth controller.
        float max_pitch;
        //! Extra pitch reference beyond maximum.
        float extra_pitch;
        //! Vertical error to apply extra pitch.
        float zref_extra;
        //! Use a fixed depth offset.
        bool use_depth_offset;
        //! Depth offset value if set.
        float depth_offset;
        //! Force positive pitch while at the surface.
        bool force_pitch;
        //! Pitch value when forced at surface.
        float surface_pitch;
        //! Maximum heading rate reference for heading controller.
        float max_hrate;
        //! Heading rate in open loop.
        bool hrate_oloop;
        //! Error attitude compensation.
        bool error_attitude;
        //! Log PID gain parcels.
        bool log_parcels;
        //! Altitude value below which altitude from DVL will be ignored.
        float min_dvl_alt;
        //! Depth value below which altitude from DVL will be ignored.
        float min_dvl_depth;
        //! Depth threshold to be considered surface.
        float depth_threshold;
        //! Roll speed compensation.
        RollCompensation rc;
        //!
        int sampling_rate_relation;
        //! Weights of the vertical reference filter.
        std::vector<float> vref_filt_weights;
        //! Enable dedicated altitude controller.
        bool altitude_control;
      };

      struct Task: public DUNE::Control::BasicAutopilot
      {
        //! PID Controllers.
        DiscretePID m_pid[LP_MAX_LOOPS];
        //! Heading controller heading rate reference.
        IMC::DesiredHeadingRate m_hrate_ref;
        //! Depth controller pitch reference.
        IMC::DesiredPitch m_pitch_ref;
        //! PID parcels.
        IMC::ControlParcel m_parcels[LP_MAX_LOOPS];
        //! Coarse Altitude arguments.
        CoarseAltitude::Arguments m_ca_args;
        //! Coarse Altitude pointer to object.
        CoarseAltitude* m_ca;
        //! Parcel for coarse altitude.
        IMC::ControlParcel m_ca_parcel;
        //! Applying extra reference.
        bool m_extra_pitch;
        //! Task Arguments.
        Arguments m_args;

        int m_sampling_rate_relation;

        //! Smoothed altitude reference.
        std::unique_ptr<Math::FIRFilter<float>> m_vref;
        //! Derivative of the altitude reference.
        Math::Derivative<float> m_vref_d;
        //! Derivative of the pitch reference.
        Math::Derivative<float> m_pref_d;

        Task(const std::string& name, Tasks::Context& ctx):
          DUNE::Control::BasicAutopilot(name, ctx, c_controllable, c_required),
          m_ca(NULL),
          m_extra_pitch(false),
          m_vref(nullptr),
          m_vref_d(),
          m_pref_d()
        {
          // Load controller gains and integral limits.
          for (unsigned i = 0; i < LP_MAX_LOOPS; ++i)
          {
            param(c_loop_name[i] + " PID Gains", m_args.gains[i])
            .defaultValue("")
            .size(3)
            .description("PID gains for " + c_loop_name[i] + " controller");

            param(c_loop_name[i] + " Integral Limit", m_args.max_int[i])
            .defaultValue("-1.0")
            .units((Units::Types)c_loop_unit[i])
            .description("Integral limit for " + c_loop_name[i] + " controller");
          }

          param(DTR_RT("Maximum Fin Rotation"), m_args.max_fin_rot)
          .defaultValue("25.0")
          .units(Units::Degree)
          .description(DTR("Maximum admissible fin rotation"));

          param(DTR_RT("Enable roll controller"), m_args.roll_control_enabled)
          .defaultValue("false")
          .description(DTR("Enable roll controller"));

          param("Maximum Pitch Actuation", m_args.max_pitch_act)
          .defaultValue("15.0")
          .units(Units::Degree)
          .description("Maximum admissible fin actuation for the pitch controller");

          param("Maximum Pitch Reference", m_args.max_pitch)
          .defaultValue("10.0")
          .minimumValue("5.0")
          .maximumValue("35.0")
          .units(Units::Degree)
          .description("Maximum pitch reference used by depth controller");

          param("Extra Pitch Reference", m_args.extra_pitch)
          .defaultValue("5.0")
          .minimumValue("0.0")
          .maximumValue("15.0")
          .units(Units::Degree)
          .description("Extra pitch beyond \"Maximum Pitch Reference\"");

          param("Extra Pitch -- Vertical Error", m_args.zref_extra)
          .defaultValue("10.0")
          .minimumValue("0.0")
          .units(Units::Meter)
          .description("\"Extra Pitch\" is added to \"Maximum Pitch Reference\" if"
                       " error to vertical reference is greater than this");

          param("Use Fixed Depth Offset", m_args.use_depth_offset)
          .defaultValue("false")
          .description("Use a fixed depth offset to compensate for steady state error");

          param("Depth Offset", m_args.depth_offset)
          .defaultValue("0.0")
          .units(Units::Meter)
          .description("Depth reference offset value");

          param("Force Pitch At Surface", m_args.force_pitch)
          .defaultValue("false")
          .units(Units::Meter)
          .description("Force pitching up at the surface");

          param("Pitch Angle At Surface", m_args.surface_pitch)
          .defaultValue("15.0")
          .units(Units::Degree)
          .description("Angle at which to force pitch at the surface");

          param("Heading Rate Open Loop", m_args.hrate_oloop)
          .defaultValue("false")
          .description("Dispatch heading rate commands directly to servos");

          param("Maximum Heading Rate", m_args.max_hrate)
          .defaultValue("45.0")
          .units(Units::DegreePerSecond)
          .description("Maximum heading rate reference");

          param("Error Attitude Compensation", m_args.error_attitude)
          .defaultValue("false")
          .description("Compensate PID controller errors with vehicle's attitude");

          param("Log PID Parcels", m_args.log_parcels)
          .defaultValue("false")
          .description("Log the size of each PID parcel");

          param("Minimum DVL Depth", m_args.min_dvl_depth)
          .defaultValue("2.5")
          .description("Depth value below which altitude from DVL will be ignored");

          param("Minimum DVL Altitude", m_args.min_dvl_alt)
          .defaultValue("0.50")
          .description("Altitude value below which altitude from DVL will be ignored");

          param("Coarse Altitude -- Enabled", m_ca_args.enabled)
          .defaultValue("false")
          .description("Coarse Altitude arguments");

          param("Coarse Altitude -- Window Sizes", m_ca_args.wsizes)
          .defaultValue("")
          .description("Vector of window sizes for the moving averages");

          param("Coarse Altitude -- Upper Gap", m_ca_args.upper_gap)
          .defaultValue("")
          .units(Units::Meter)
          .description("Size of the upper part of the corridor");

          param("Coarse Altitude -- Period", m_ca_args.period)
          .defaultValue("20.0")
          .units(Units::Second)
          .description("Period for checking time spent outside the corridor");

          param("Coarse Altitude -- Ratio Time Outside", m_ca_args.max_outside)
          .defaultValue("60.0")
          .units(Units::Percentage)
          .description("Percentage of time outside the corridor to change corridor size");

          param("Coarse Altitude -- Sample Limit", m_ca_args.sample_limit)
          .defaultValue("10")
          .description("Limit of a fixed number of incoming samples per second");

          param("Roll Compensation -- Use Offset", m_args.rc.use_offset)
          .defaultValue("false")
          .description("Use a fixed roll offset to compensate for steady state error");

          param("Roll Compensation -- Offset Angle", m_args.rc.offset_angle)
          .defaultValue("0.0")
          .units(Units::Degree)
          .description("Roll reference offset value");

          param("Roll Compensation -- Use Speed", m_args.rc.use_speed)
          .defaultValue("false")
          .description("Perform roll speed compensation by changing proportional gain");

          param("Roll Compensation -- Speed Bounds", m_args.rc.speed_bounds)
          .defaultValue("")
          .size(2)
          .units(Units::MeterPerSecond)
          .description("Lower and upper speed bounds when doing roll speed compensation");

          param("Roll Compensation -- Speed Gain", m_args.rc.speed_gain)
          .defaultValue("0.0")
          .minimumValue("0.0")
          .maximumValue("2.0")
          .description("Roll's minimum proportional gain in speed compensation");

          param("Depth-to-pitch PID sampling rate relation", m_args.sampling_rate_relation)
          .defaultValue("1")
          .minimumValue("1")
          .maximumValue("5")
          .description("Depth-to-pitch sampling rate relation");

          param("Altitude Control -- Filter Weights", m_args.vref_filt_weights)
          .description("Impulse response of the FIR filter used to smooth the "
                       "depth reference during altitude control.");

          param("Altitude Control -- Enabled", m_args.altitude_control)
          .defaultValue("false")
          .description("Enable dedicated altitude controller.");

          m_ctx.config.get("General", "Underwater Depth Threshold", "0.3", m_args.depth_threshold);
        }

        //! Initialize resources.
        void
        onResourceInitialization(void)
        {
          BasicAutopilot::onResourceInitialization();

        }

        //! Acquire resources.
        void
        onResourceAcquisition(void)
        {
          BasicAutopilot::onResourceAcquisition();

          if (m_ca_args.enabled)
            m_ca = new CoarseAltitude(&m_ca_args);

          m_vref = std::make_unique<FIRFilter<float>>(m_args.vref_filt_weights);
        }

        //! Release Resources.
        void
        onResourceRelease(void)
        {
          Memory::clear(m_ca);
          m_vref.reset();

          BasicAutopilot::onResourceRelease();
        }

        //! On activation.
        void
        onAutopilotActivation(void)
        {
          if (m_ca != NULL)
            m_ca->activate();
        }

        //! On deactivation.
        void
        onAutopilotDeactivation(void)
        {
          if (m_ca != NULL)
            m_ca->deactivate();
        }

        //! Update internal parameters.
        void
        onUpdateParameters(void)
        {
          reset();

          for (unsigned i = 0; i < LP_MAX_LOOPS; ++i)
          {
            if (paramChanged(m_args.max_int[i]))
              m_args.max_int[i] = Angles::radians(m_args.max_int[i]);
          }

          // Pitch control parameters.
          if (paramChanged(m_args.max_pitch_act))
            m_args.max_pitch_act = Angles::radians(m_args.max_pitch_act);

          // Depth control parameters.
          if (paramChanged(m_args.max_pitch))
            m_args.max_pitch = Angles::radians(m_args.max_pitch);

          if (paramChanged(m_args.surface_pitch))
            m_args.surface_pitch = Angles::radians(m_args.surface_pitch);

          // Roll offset conversion.
          if (paramChanged(m_args.rc.offset_angle))
            m_args.rc.offset_angle = Angles::radians(m_args.rc.offset_angle);

          // Heading rate control parameters.
          if (paramChanged(m_args.max_fin_rot))
            m_args.max_fin_rot = Angles::radians(m_args.max_fin_rot);

          if (paramChanged(m_args.max_hrate))
            m_args.max_hrate = Angles::radians(m_args.max_hrate);

          // Coarse altitude control.
          if (paramChanged(m_ca_args.enabled) ||
              paramChanged(m_ca_args.wsizes) ||
              paramChanged(m_ca_args.upper_gap) ||
              paramChanged(m_ca_args.period) ||
              paramChanged(m_ca_args.max_outside) ||
              paramChanged(m_ca_args.sample_limit))
          {
            Memory::clear(m_ca);

            if (m_ca_args.enabled)
              m_ca = new CoarseAltitude(&m_ca_args);
          }

          initializePIDs();
          m_sampling_rate_relation = m_args.sampling_rate_relation;
        }

        //! Initialize PID related variables.
        void
        initializePIDs(void)
        {
          float output_limits[LP_MAX_LOOPS];
          output_limits[LP_ROLL] = m_args.max_fin_rot;
          output_limits[LP_PITCH] = m_args.max_pitch_act;
          output_limits[LP_DEPTH] = m_args.max_pitch;
          output_limits[LP_ALT] = m_args.max_pitch;
          output_limits[LP_HEADING] = m_args.max_hrate;
          output_limits[LP_HRATE] = m_args.max_fin_rot;

          // Setting pid gains and integral limits.
          for (unsigned i = 0; i < LP_MAX_LOOPS; ++i)
          {
            m_pid[i].setGains(m_args.gains[i]);
            m_pid[i].setOutputLimits(-output_limits[i], output_limits[i]);
            m_pid[i].setIntegralLimits(m_args.max_int[i]);

            // Debug parcels.
            if (m_args.log_parcels)
              m_pid[i].enableParcels(this, &m_parcels[i]);
          }
        }

        //! Member variable reset function.
        void
        reset(void)
        {
          BasicAutopilot::reset();

          if (m_vref)
            m_vref->clear();

          m_vref_d.clear();
          m_pref_d.clear();

          for (unsigned i = 0; i < LP_MAX_LOOPS; ++i)
            m_pid[i].reset();
        }

        //! Reserve entities for messages.
        void
        onEntityReservation(void)
        {
          if (m_args.log_parcels)
          {
            for (unsigned i = 0; i < LP_MAX_LOOPS; ++i)
              m_parcels[i].setSourceEntity(reserveEntity(c_loop_name[i] + " Parcel"));

            m_ca_parcel.setSourceEntity(reserveEntity("Coarse Altitude"));
          }
        }

        //! Computes control values when receiving EstimatedState.
        //! @param[in] timestep time interval to use in pid controller.
        //! @param[in] msg pointer to EstimatedState message.
        void
        onEstimatedState(const double timestep, const IMC::EstimatedState* msg)
        {
          // Desired actuation torque vector.
          IMC::DesiredControl torques;

          if (!m_args.error_attitude)
          {
            torques.m = depthControl(timestep, msg);

            if (m_args.roll_control_enabled)
              torques.k = rollControl(timestep, msg);
            else
              torques.k = 0;

            torques.n = headingControl(timestep, msg);
          }
          else
          {
            double elements_J2[9] = {1, sin(msg->phi)*tan(msg->theta), cos(msg->phi)*tan(msg->theta),
                                     0, cos(msg->phi), -sin(msg->phi),
                                     0, sin(msg->phi)/cos(msg->theta), cos(msg->phi)*cos(msg->theta)};
            Matrix J2(elements_J2, 3, 3);

            double elements_comdot[3] = {-msg->phi,
                                         depthControl(timestep, msg),
                                         headingControl(timestep, msg)};

            Matrix v = inverse(J2) * Matrix(elements_comdot, 3, 1);

            if (m_args.roll_control_enabled)
              torques.k = trimValue(v(0), -m_args.max_fin_rot, m_args.max_fin_rot);
            else
              torques.k = 0.0;

            torques.m = trimValue(v(1), -m_args.max_pitch_act, m_args.max_pitch_act);
            torques.n = trimValue(v(2), -m_args.max_fin_rot, m_args.max_fin_rot);
          }

          torques.flags = IMC::DesiredControl::FL_K | IMC::DesiredControl::FL_M | IMC::DesiredControl::FL_N;

          dispatch(torques);
        }

        //! classical inner pitch/outter depth nested controller.
        //! @param[in] timestep time interval to use in pid controller.
        //! @param[in] msg pointer to EstimatedState message.
        //! @return desired torque about y axis.
        float
        depthControl(const double timestep, const IMC::EstimatedState* msg)
        {
          float cmd = 0;
          float z_error = 0;
          bool use_offset = m_args.use_depth_offset;
          bool surface = false;

          if (getVerticalMode() == VERTICAL_MODE_PITCH)
          {
            cmd = getVerticalRef();
          }
          else
          {
            switch (getVerticalMode())
            {
              case VERTICAL_MODE_DEPTH:
                z_error = getVerticalRef() - msg->depth;
                if (getVerticalRef() < m_args.depth_threshold)
                {
                  if (m_args.force_pitch && std::fabs(z_error) < m_args.depth_threshold)
                    surface = true;

                  if (m_args.depth_offset > 0)
                    use_offset = false;
                }
                break;
              case VERTICAL_MODE_ALTITUDE:
                if (msg->alt < m_args.min_dvl_alt && msg->depth < m_args.min_dvl_depth)
                {
                  m_vref->clear();
                  m_vref_d.clear();

                  z_error = c_min_depth_ref;
                }
                else
                {
                  float bfd = getBottomFollowDepth();
                  m_vref->update(bfd);

                  if (m_ca != NULL)
                  {
                    z_error = m_ca->update(timestep, msg->depth, bfd) - msg->depth;

                    if (m_args.log_parcels)
                    {
                      // Log data
                      m_ca->logParcel(m_ca_parcel, bfd);
                      dispatch(m_ca_parcel);
                    }
                  }
                  else
                  {
                    z_error = bfd - msg->depth;
                  }
                }
                break;
              default:
                signalBadVertical();
                return 0.0;
            }

            if (use_offset)
              z_error += m_args.depth_offset;

            // Depth-to-pitch PID sampling rate relation
            m_sampling_rate_relation++;

            if (m_sampling_rate_relation >= m_args.sampling_rate_relation)
            {
              m_sampling_rate_relation = 0;

              if (!surface)
              {
                // extra pitch.
                if (m_extra_pitch)
                {
                  // remove extra pitch.
                  if (std::fabs(z_error) < m_args.zref_extra - c_depth_hyst
                      || std::fabs(m_hrate_ref.value)
                         > Angles::radians(c_max_hrate))
                  {
                    m_extra_pitch = false;
                    m_pid[LP_DEPTH].setOutputLimits(-m_args.max_pitch,
                                                    m_args.max_pitch);
                    m_pid[LP_ALT].setOutputLimits(-m_args.max_pitch,
                                                  m_args.max_pitch);
                  }
                }
                else
                {
                  // add extra pitch.
                  if ((std::fabs(z_error) > m_args.zref_extra)
                      && (m_args.extra_pitch > 0.0)
                      && std::fabs(m_hrate_ref.value)
                         < Angles::radians(c_max_hrate))
                  {
                    m_extra_pitch = true;
                    float pitch = m_args.max_pitch + m_args.extra_pitch;
                    m_pid[LP_DEPTH].setOutputLimits(-pitch, pitch);
                    m_pid[LP_ALT].setOutputLimits(-pitch, pitch);
                  }
                }

                const float z_rate
                = -sin(msg->theta) * msg->u
                  + cos(msg->theta)
                    * (sin(msg->phi) * msg->v + cos(msg->phi) * msg->w);

                // Positive depth rate implies negative pitch, so the PID output
                // is inverted.
                if (getVerticalMode() == VERTICAL_MODE_DEPTH
                    || !m_args.altitude_control)
                {
                  cmd = -m_pid[LP_DEPTH].step(timestep, z_error, -z_rate);
                }
                else
                {
                  const float ref_rate = m_vref_d.update(m_vref->get());
                  cmd
                  = -m_pid[LP_ALT].step(timestep, z_error, ref_rate - z_rate);
                }
              }
              else
              {
                cmd = m_args.surface_pitch;
              }

              // Log the desired pitch
              m_pitch_ref.value = cmd;
              dispatch(m_pitch_ref);
            }
            else
            {
              cmd = m_pitch_ref.value;
              dispatch(m_pitch_ref);
            }
          }

          // Now, track pitch
          float pitch_err = (cmd - msg->theta);

          // With attitude compensation we use a different approach
          if (m_args.error_attitude)
            return pitch_err;

          const float ref_rate = m_pref_d.update(cmd);
          const float pitch_rate
          = msg->q * cos(msg->phi) - msg->r * sin(msg->phi);

          cmd = m_args.altitude_control ?
                m_pid[LP_PITCH].step(timestep, pitch_err, ref_rate - pitch_rate) :
                m_pid[LP_PITCH].step(timestep, pitch_err, -pitch_rate);

          return cmd;
        }

        //! Control the roll angle.
        //! @param[in] timestep time interval to use in pid controller.
        //! @param[in] msg pointer to EstimatedState message.
        //! @return desired torque about x axis.
        float
        rollControl(const double timestep, const IMC::EstimatedState* msg)
        {
          float ref = 0.0;

          if (m_args.rc.use_offset)
            ref = m_args.rc.offset_angle;

          if (m_args.rc.use_speed)
          {
            float initial_gain = m_args.gains[LP_ROLL][0];
            float new_gain = initial_gain;

            if (msg->u > m_args.rc.speed_bounds[1])
            {
              new_gain = m_args.rc.speed_gain;
            }
            else if (msg->u > m_args.rc.speed_bounds[0])
            {
              Math::LinIntParam<float> lip(initial_gain, m_args.rc.speed_gain,
                                           m_args.rc.speed_bounds[0], m_args.rc.speed_bounds[1],
                                           msg->u);

              float sc_gain = Math::linearInterpolation(lip);
              new_gain = sc_gain;
            }

            m_pid[LP_ROLL].setProportionalGain(new_gain);
            m_parcels[LP_ROLL].a = new_gain;
          }

          float cmd;

          cmd = m_pid[LP_ROLL].step(timestep, ref - msg->phi, -(msg->p + tan(msg->theta) * (sin(msg->phi) * msg->q + cos(msg->phi) * msg->r)));
          return cmd;
        }

        //! Control the heading angle.
        //! @param[in] timestep time interval to use in pid controller.
        //! @param[in] msg pointer to EstimatedState message.
        //! @return desired torque about z axis.
        float
        headingControl(const double timestep, const IMC::EstimatedState* msg)
        {
          float cmd = 0.0;

          switch (getYawMode())
          {
            case YAW_MODE_HEADING:
              // Outer heading controller
              cmd = m_pid[LP_HEADING].step(timestep, Angles::normalizeRadian(getYawRef() - msg->psi), -(sin(msg->phi) * msg->q + cos(msg->phi) * msg->r) / cos(msg->theta));

              // Log the desired hrate
              m_hrate_ref.value = cmd;
              dispatch(m_hrate_ref);
              break;
            case YAW_MODE_HRATE:
              cmd = getYawRef();
              break;
            case YAW_MODE_BYPASS:
              // Bypass the command directly to the control torques
              return getYawRef();
            default:
              signalBadYaw();
              return 0.0;
          }

          // Inner heading rate controller
          float heading_err = cmd - msg->r;

          // With attitude compensation we use a different approach
          if (m_args.error_attitude)
            return heading_err;

          if (!m_args.hrate_oloop)
            cmd = m_pid[LP_HRATE].step(timestep, heading_err);
          else
            cmd = m_args.gains[LP_HRATE][0] * cmd;

          return cmd;
        }
      };
    }
  }
}

DUNE_TASK
