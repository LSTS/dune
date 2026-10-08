//***************************************************************************
// Copyright 2007-2026 Universidade do Porto - Faculdade de Engenharia      *
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
// Author: Pedro Calado                                                     *
//***************************************************************************

// ISO C++ 98 headers.
#include <map>
#include <string>
#include <vector>

// DUNE headers.
#include <DUNE/DUNE.hpp>

namespace Maneuver
{
  namespace CompassCalibration
  {
    using DUNE_NAMESPACES;

    //! Minimum radius admissible for loitering
    static const float c_min_radius = 5.0f;
    //! Minimum admissible amplitude to check yoyoing motion
    static const float c_min_amplitude = 0.5f;
    //! Minimum number of turns for admissible solution.
    static const unsigned c_min_turns = 3;

    struct Arguments
    {
      //! Saturation level for variation in pitch references.
      double variation;
      //! AHRS entity labels.
      std::vector<std::string> label_ahrs;
      //! Attitude filter fed by each AHRS (same order; empty: none).
      std::vector<std::string> label_filter;
      //! Calibration methods by priority.
      std::vector<std::string> methods;
      //! Tolerance in cross-track error to consider loiter has started
      float cross_tol;
      //! Number of 360 degree turns until calibration
      float turns;
      //! Perform compass calibration if true
      bool compass_calib;
    };

    //! Calibration channel of a single AHRS entity.
    struct CalibrationChannel
    {
      //! Compass calibration algorithm.
      DUNE::Navigation::CompassCalibration ccal;
      //! Magnetic Field for Compass Calibration.
      IMC::MagneticField mfield;
      //! AHRS entity label.
      std::string label;
      //! Label of the attitude filter that takes this AHRS's z (empty: none).
      std::string filter;
      //! mfield holds a calibration (the fit succeeded).
      bool valid = false;
    };

    struct Task: public DUNE::Maneuvers::Maneuver
    {
      //! Desired Path message.
      IMC::DesiredPath m_path;
      //! Desired Pitch for the maneuver.
      IMC::DesiredPitch m_pitch;
      //! EstimatedState.
      IMC::EstimatedState m_estate;
      //! Calibration channels indexed by AHRS entity id.
      std::map<unsigned, CalibrationChannel> m_channels;
      //! Yoyo motion controller.
      DUNE::Control::YoYoMotion* m_yoyo;
      //! Z units for the maneuver.
      IMC::ZUnits m_zunits;
      //! End time of the maneuver.
      double m_end_time;
      //! Duration of the maneuver
      uint16_t m_duration;
      //! In calibrating phase
      bool m_calibrating;
      //! Already calibrated
      bool m_calibrated;
      //! True if a pitch message has been dispatched already
      bool m_dispatched;
      //! Started yoyo movements (not necessarily calibrating)
      bool m_yoyo_ing;
      //! Last value of psi
      float m_last_psi;
      //! Accumulated psi variation
      float m_accum_psi;
      //! Yoyo's amplitude
      float m_amplitude;
      //! Task arguments.
      Arguments m_args;

      Task(const std::string& name, Tasks::Context& ctx):
        DUNE::Maneuvers::Maneuver(name, ctx),
        m_yoyo(NULL),
        m_calibrating(false),
        m_calibrated(false),
        m_yoyo_ing(false)
      {
        param("Maximum Pitch Variation", m_args.variation)
        .defaultValue("10.0")
        .units(Units::Degree)
        .description("Maximum pitch variation step when changing z direction");

        param("Entity Label - Compass", m_args.label_ahrs)
        .defaultValue("AHRS")
        .description("Comma-separated list of entity labels of 'AHRS' messages");

        param("Calibration Methods", m_args.methods)
        .defaultValue("Gyro-Aided, Min-Max")
        .description("Hard-iron calibration methods by priority: the first that "
                     "determines a calibration gives it. 'Gyro-Aided' (needs the "
                     "AHRS's AngularVelocity; x, y and z), 'Min-Max' (midpoint of "
                     "the levelled field extremes; x, y), 'Circle Fit' (x, y)");

        param("Entity Label - Attitude Filter", m_args.label_filter)
        .defaultValue("")
        .description("Attitude filter fed by each AHRS, in the same order as "
                     "'Entity Label - Compass' (empty: none). When a calibration "
                     "determines z, the filter's 'Hard-Iron Offset' is set to "
                     "(0, 0, z) and saved: the AHRS applies the new x/y itself");

        param("Cross Track Tolerance", m_args.cross_tol)
        .defaultValue("1.0")
        .units(Units::Meter)
        .description("Tolerance in cross-track error to consider loiter has started");

        param("Number Of Turns", m_args.turns)
        .defaultValue("1.0")
        .description("Number of 360 degree turns until calibration");

        param("Calibrate Compass", m_args.compass_calib)
        .defaultValue("true")
        .description("Perform compass calibration if true");

        bindToManeuver<Task, IMC::CompassCalibration>();
        bind<IMC::EstimatedState>(this);
        bind<IMC::EulerAngles>(this);
        bind<IMC::MagneticField>(this);
        bind<IMC::AngularVelocity>(this);
      }

      void
      onUpdateParameters(void)
      {
        if (paramChanged(m_args.variation))
          m_args.variation = Angles::radians(m_args.variation);

        if (paramChanged(m_args.compass_calib))
        {
          if (!isActive())
            clearCalibration();
        }

        if (paramChanged(m_args.methods) && !isActive())
          setMethods();
      }

      void
      onResourceRelease(void)
      {
        Memory::clear(m_yoyo);
      }

      void
      onEntityResolution(void)
      {
        m_channels.clear();

        for (size_t i = 0; i < m_args.label_ahrs.size(); ++i)
        {
          const std::string& label = m_args.label_ahrs[i];
          unsigned eid;

          try
          {
            eid = resolveEntity(label);
          }
          catch (...)
          {
            war(DTR("failed to resolve entity '%s'"), label.c_str());
            continue;
          }

          CalibrationChannel& channel = m_channels[eid];
          channel.label = label;
          if (i < m_args.label_filter.size())
            channel.filter = m_args.label_filter[i];
          channel.mfield.setDestinationEntity(eid);
        }

        setMethods();
      }

      //! Configure the calibration methods of every channel.
      void
      setMethods(void)
      {
        std::vector<std::string> unknown;
        for (auto& itr : m_channels)
        {
          unknown.clear();
          itr.second.ccal.setMethods(m_args.methods, unknown);
        }

        for (const std::string& name : unknown)
          war(DTR("unknown calibration method '%s'"), name.c_str());
      }

      void
      onManeuverDeactivation(void)
      {
        // Do not calibrate.
        if (!m_args.compass_calib)
          return;

        // Already calibrated.
        if (m_calibrated)
          return;

        // Number of turns.
        unsigned turns = (unsigned)std::floor(std::fabs(m_accum_psi / c_two_pi));

        // Check if we have sufficient data.
        if (!m_calibrating || turns < c_min_turns)
        {
          err(DTR("insufficient data for calibration"));
        }
        else
        {
          calibrate(false);
          for (const auto& itr : m_channels)
          {
            const CalibrationChannel& channel = itr.second;
            if (channel.valid)
              err(DTR("%s entity not calibrated. Calibration values with %d turns: %f, %f, 0.0"),
                  channel.label.c_str(), turns, channel.mfield.x, channel.mfield.y);
            else
              err(DTR("%s entity not calibrated: no method determined a calibration"),
                  channel.label.c_str());
          }
        }
      }

      void
      consume(const IMC::CompassCalibration* maneuver)
      {
        setControl(IMC::CL_PATH);

        if (maneuver->radius < c_min_radius)
        {
          war(DTR("forcing minimum of %.1f"), c_min_radius);
          m_path.lradius = c_min_radius;
        }
        else
        {
          m_path.lradius = maneuver->radius;
        }

        m_path.end_lat = maneuver->lat;
        m_path.end_lon = maneuver->lon;
        m_path.end_z = maneuver->z;
        m_path.end_z_units = maneuver->z_units;

        m_zunits = static_cast<IMC::ZUnits>(maneuver->z_units);

        if (maneuver->direction == IMC::CompassCalibration::LD_CCLOCKW)
          m_path.flags = IMC::DesiredPath::FL_CCLOCKW;
        else
          m_path.flags = 0;  // clockwise by default

        m_path.speed = maneuver->speed;
        m_path.speed_units = maneuver->speed_units;

        m_duration = maneuver->duration;

        m_amplitude = maneuver->amplitude;

        // set but do not send
        m_pitch.value = 0;

        dispatch(m_path);

        m_end_time = -1;
        m_calibrating = false;
        m_calibrated = false;
        m_yoyo_ing = false;
        m_dispatched = false;

        // Clear compass_calibration data
        clearCalibration();

        if (m_args.compass_calib && m_channels.empty())
          war(DTR("no AHRS entities resolved, compass will not be calibrated"));

        if (m_zunits != IMC::Z_DEPTH && m_zunits != IMC::Z_ALTITUDE)
        {
          signalInvalidZ();
          return;
        }

        // initialize yoyo motion controller
        Memory::clear(m_yoyo);

        m_yoyo = new YoYoMotion(this, maneuver->pitch, maneuver->z,
                                (IMC::ZUnits)maneuver->z_units,
                                maneuver->amplitude, m_args.variation);
      }

      void
      consume(const IMC::EstimatedState* msg)
      {
        if (msg->getSource() != getSystemId())
          return;

        m_estate = *msg;

        if (!m_yoyo_ing)
          return;

        yoyoMotion(false);
      }

      //! Angular rates of each AHRS: enable its gyro-aided calibration.
      void
      consume(const IMC::AngularVelocity* msg)
      {
        auto itr = m_channels.find(msg->getSourceEntity());
        if (itr != m_channels.end())
          itr->second.ccal.updateRates(*msg);
      }

      void
      consume(const IMC::EulerAngles* msg)
      {
        // Update Direct Cosine Matrix.
        if (m_args.compass_calib && m_calibrating)
        {
          auto itr = m_channels.find(msg->getSourceEntity());
          if (itr != m_channels.end())
            itr->second.ccal.updateDCM(*msg);
        }
      }

      void
      consume(const IMC::MagneticField* msg)
      {
        // Update stabilized magnetic field.
        if (m_args.compass_calib && m_calibrating)
        {
          auto itr = m_channels.find(msg->getSourceEntity());
          if (itr != m_channels.end())
            itr->second.ccal.updateField(*msg);
        }
      }

      void
      onPathControlState(const IMC::PathControlState* pcs)
      {
        if ((pcs->flags & IMC::PathControlState::FL_LOITERING) && !m_yoyo_ing)
        {
          setControl(IMC::CL_PATH | IMC::CL_PITCH);

          m_path.flags |= IMC::DesiredPath::FL_NO_Z;

          yoyoMotion(true);
          m_yoyo_ing = true;

          dispatch(m_path);
        }
        else if ((pcs->flags & IMC::PathControlState::FL_LOITERING) && m_yoyo_ing && !m_calibrating)
        {
          bool inbounds = false;

          // if amplitude is too short, do not check if between bounds
          if (m_amplitude <= c_min_amplitude)
            inbounds = true;
          else if (m_path.end_z_units == IMC::Z_ALTITUDE)
            inbounds = m_yoyo->isBetweenBounds(m_estate.alt);
          else if (m_path.end_z_units == IMC::Z_DEPTH)
            inbounds = m_yoyo->isBetweenBounds(m_estate.depth);

          if (inbounds)
          {
            m_calibrating = true;
            m_last_psi = m_estate.psi;
            m_accum_psi = 0.0;
          }
        }
        else if ((pcs->flags & IMC::PathControlState::FL_LOITERING) && m_calibrating)
        {
          if (m_duration)
          {
            double now = Clock::get();

            if (m_end_time < 0)
            {
              m_end_time = now + m_duration;
              debug("will now loiter for %d seconds", m_duration);
            }
            else if (now >= m_end_time)
            {
              complete();
              return;
            }
            else
            {
              signalProgress((uint16_t)Math::round(m_end_time - now));
            }
          }

          m_accum_psi += Angles::normalizeRadian(m_estate.psi - m_last_psi);
          m_last_psi = m_estate.psi;

          if (((m_path.flags & IMC::DesiredPath::FL_CCLOCKW) && (m_accum_psi < - m_args.turns * c_two_pi)) ||
              (!(m_path.flags & IMC::DesiredPath::FL_CCLOCKW) && (m_accum_psi > m_args.turns * c_two_pi)))
          {
            debug("described %.1f turns for calibration", m_args.turns);

            complete();
            return;
          }
        }
        else
        {
          if (m_duration > 0)
            signalProgress(pcs->eta + m_duration);
          else
            signalProgress();
        }
      }

      //! Dispatch the calibrations and end the maneuver, with an error
      //! when no AHRS was calibrated.
      void
      complete(void)
      {
        if (calibrate(true))
          signalCompletion();
        else
          signalError(DTR("no AHRS calibrated"));
      }

      //! Run compass calibration.
      //! @param[in] send_magnetic Send magnetic field parameters.
      //! @return true if calibration is off or some AHRS has a calibration.
      bool
      calibrate(bool send_magnetic)
      {
        if (!m_args.compass_calib)
          return true;

        bool any = false;

        for (auto& itr : m_channels)
        {
          CalibrationChannel& channel = itr.second;
          Math::Matrix params;
          if (!channel.ccal.getCalibrationParams(params))
          {
            // Keep a calibration a previous call computed.
            if (!channel.valid)
            {
              // At completion this AHRS keeps its old calibration: an error.
              if (send_magnetic)
                err(DTR("%s: no calibration (%s)"), channel.label.c_str(),
                    channel.ccal.failures().c_str());
              else
                war(DTR("%s: no calibration (%s)"), channel.label.c_str(),
                    channel.ccal.failures().c_str());
            }
          }
          else
          {
            // Fill message and send to bus.
            channel.mfield.x = params(0);
            channel.mfield.y = params(1);
            channel.mfield.z = params(2);
            channel.valid = true;
            inf(DTR("%s: hard-iron %.4f, %.4f, %s (%s: %s)"), channel.label.c_str(),
                params(0), params(1),
                channel.ccal.lastZDetermined() ? String::str("%.4f", params(2)).c_str()
                                               : "z not determined",
                channel.ccal.lastMethod().c_str(),
                channel.ccal.lastResult().details.c_str());
          }

          any = any || channel.valid;

          // Dispatch magnetic data.
          if (send_magnetic && channel.valid)
          {
            dispatch(channel.mfield);
            setFilterOffset(channel);
          }
        }

        if (send_magnetic)
          m_calibrated = true;

        return any;
      }

      //! Hand what a dispatched calibration determined beyond x/y (z, gyro
      //! bias) to the channel's attitude filter, and save it there.
      //! @param[in] channel calibration channel.
      void
      setFilterOffset(const CalibrationChannel& channel)
      {
        if (channel.filter.empty())
          return;

        IMC::SetEntityParameters sep;
        sep.setDestination(getSystemId());
        sep.name = channel.filter;

        if (channel.ccal.lastZDetermined())
        {
          IMC::EntityParameter p;
          p.name = "Hard-Iron Offset";
          p.value = String::str("0.0, 0.0, %.4f", channel.mfield.z);
          sep.params.push_back(p);
        }
        else
        {
          war(DTR("%s: z not determined, '%s' hard-iron offset unchanged"),
              channel.label.c_str(), channel.filter.c_str());
        }

        const DUNE::Navigation::CalibrationResult& r = channel.ccal.lastResult();
        if (r.has_gyro_bias)
        {
          IMC::EntityParameter p;
          p.name = "Gyro Bias";
          p.value = String::str("%.3f, %.3f, %.3f", Angles::degrees(r.gyro_bias[0]),
                                Angles::degrees(r.gyro_bias[1]),
                                Angles::degrees(r.gyro_bias[2]));
          sep.params.push_back(p);
        }

        if (sep.params.empty())
          return;

        dispatch(sep, DF_LOOP_BACK);

        IMC::SaveEntityParameters sp;
        sp.setDestination(getSystemId());
        sp.name = channel.filter;
        dispatch(sp, DF_LOOP_BACK);

        IMC::MessageList<IMC::EntityParameter>::const_iterator itr = sep.params.begin();
        for (; itr != sep.params.end(); ++itr)
          inf(DTR("%s: '%s' %s set to %s"), channel.label.c_str(), channel.filter.c_str(),
              (*itr)->name.c_str(), (*itr)->value.c_str());
      }

      //! Clear calibration data of all AHRS channels.
      void
      clearCalibration(void)
      {
        for (auto& itr : m_channels)
        {
          itr.second.ccal.clear();
          itr.second.valid = false;
        }
      }

      //! Yoyo motion update
      //! @param[in] startup whether or not the motion is starting right now
      void
      yoyoMotion(bool startup)
      {
        if (m_estate.alt < 0 && m_zunits == IMC::Z_ALTITUDE)
        {
          clearCalibration();
          signalNoAltitude();
          return;
        }

        double v = m_yoyo->update(startup, m_estate.depth, m_estate.alt, m_estate.theta);

        if ((v == m_pitch.value) && m_dispatched)
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
