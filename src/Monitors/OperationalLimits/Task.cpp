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
// Author: Eduardo Marques                                                  *
//***************************************************************************

// ISO C++ 98 headers.
#include <algorithm>
#include <cmath>
#include <cstring>
#include <map>
#include <iostream>
#include <sstream>

// DUNE headers.
#include <DUNE/DUNE.hpp>

namespace Monitors
{
  //! Operational Limits are operating parameters and conditions,
  //! chosen among all system/components, which, together, define
  //! the domain of the safe operation of the system in all foreseen
  //! system states (operation, maintenance, commissioning).
  //!
  //! %OperationalLimits is the task responsible to monitor system
  //! states and enter safety modes when/if necessary to guarantee
  //! mechanical/electrical safety of the device.
  //!
  //! @author Eduardo Marques
  namespace OperationalLimits
  {
    using DUNE_NAMESPACES;

    //! Task arguments.
    struct Arguments
    {
      //! Initial maximum depth.
      fp32_t i_max_depth;
      //! Initial minimum altitude.
      fp32_t i_min_altitude;
      //! Initial maximum altitude.
      fp32_t i_max_altitude;
      //! Initial minimum speed.
      fp32_t i_min_speed;
      //! Initial maximum speed.
      fp32_t i_max_speed;
      //! Initial maximum vertical rate.
      fp32_t i_max_vrate;
      //! Maximum depth hysteresis value.
      fp32_t h_max_depth;
      //! Minimum altitude hysteresis value.
      fp32_t h_min_altitude;
      //! Minimum depth to monitor altitude limits.
      fp32_t min_depth;
    };

    //! Period for testing the area operational limits
    static const double c_atest_period = 1.0;

    struct Task: public DUNE::Tasks::Periodic
    {
      //! Limit error struct
      struct LError
      {
        //! Error description
        std::string desc;
        //! Value 1
        double v1;
        //! Value 2
        double v2;
      };

      //! Mapping of error bitmask to op limits error.
      typedef std::map<uint8_t, LError> LErrorMap;

      //! Task arguments.
      Arguments m_args;
      //! Error map.
      LErrorMap m_errs;
      //! Limits in use.
      IMC::OperationalLimits m_ol;
      //! Last EstimatedState message
      IMC::EstimatedState m_estate;
      //! Error mask.
      uint8_t m_emask;
      //! Cache control message.
      IMC::CacheControl m_cc;
      //! Time of next area limit test.
      double m_atest_time;
      //! Use configuration flag.
      bool m_use_cfg;
      //! Absolute maximum depth
      float m_max_depth;

      Task(const std::string& name, Tasks::Context& ctx):
        DUNE::Tasks::Periodic(name, ctx),
        m_atest_time(0),
        m_use_cfg(true),
        m_max_depth(50.0)
      {
        param("Initial Setting - Maximum Depth", m_args.i_max_depth)
        .units(Units::Meter)
        .defaultValue("-1")
        .description("Initial setting for maximum depth");

        param("Initial Setting - Minimum Altitude", m_args.i_min_altitude)
        .units(Units::Meter)
        .defaultValue("-1")
        .description("Initial setting for minimum altitude");

        param("Initial Setting - Maximum Altitude", m_args.i_max_altitude)
        .units(Units::Meter)
        .defaultValue("-1")
        .description("Initial setting for maximum altitude");

        param("Initial Setting - Minimum Speed", m_args.i_min_speed)
        .units(Units::MeterPerSecond)
        .defaultValue("-1")
        .description("Initial setting for minimum speed");

        param("Initial Setting - Maximum Speed", m_args.i_max_speed)
        .units(Units::MeterPerSecond)
        .defaultValue("-1")
        .description("Initial setting for maximum speed");

        param("Initial Setting - Maximum Vertical Rate", m_args.i_max_vrate)
        .units(Units::MeterPerSecond)
        .defaultValue("-1")
        .description("Initial setting for maximum vertical rate");

        param("Hysteresis Threshold - Maximum Depth", m_args.h_max_depth)
        .defaultValue("0.0")
        .description("Hysteresis value for maximum depth");

        param("Hysteresis Threshold - Minimum Altitude", m_args.h_min_altitude)
        .defaultValue("0.0")
        .description("Hysteresis value for minimum altitude");

        param("Minimum Depth to Check Altitude", m_args.min_depth)
        .minimumValue("0.0")
        .defaultValue("0.2")
        .description("Minimum depth required to check altitude operational limits");

        m_ctx.config.get("General", "Absolute Maximum Depth", "50.0", m_max_depth);

        bind<IMC::EstimatedState>(this);
        bind<IMC::GetOperationalLimits>(this);
        bind<IMC::OperationalLimits>(this);
      }

      //! Initialize op limits mask
      //! @param[out] v value of the limit
      //! @param[in] dfl value for the limit
      //! @param[in] mask initial mask
      void
      init(fp32_t& v, fp32_t dfl, uint8_t mask)
      {
        if (dfl > 0)
        {
          m_ol.mask |= mask;
          v = dfl;
        }
      }

      //! There's an absolute maximum depth rating, limit the "operational limit"
      void
      setMaxDepth(void)
      {
        if (m_ol.mask & IMC::OPL_MAX_DEPTH)
          m_ol.max_depth = std::min(m_ol.max_depth, m_max_depth);
        else
          m_ol.max_depth = m_max_depth;

        m_ol.mask |= IMC::OPL_MAX_DEPTH;
      }

      void
      onUpdateParameters(void)
      {
        if (m_use_cfg)
        {
          reset();
          m_ol.mask = 0;

          init(m_ol.max_depth, m_args.i_max_depth, IMC::OPL_MAX_DEPTH);
          init(m_ol.min_altitude, m_args.i_min_altitude, IMC::OPL_MIN_ALT);
          init(m_ol.max_altitude, m_args.i_max_altitude, IMC::OPL_MAX_ALT);
          init(m_ol.min_speed, m_args.i_min_speed, IMC::OPL_MIN_SPEED);
          init(m_ol.min_speed, m_args.i_max_speed, IMC::OPL_MAX_SPEED);
          init(m_ol.max_vrate, m_args.i_max_vrate, IMC::OPL_MAX_VRATE);

          setMaxDepth();
        }
      }

      //! Reset task to initial state.
      void
      reset(void)
      {
        m_atest_time = 0;
        m_emask = 0;
        m_ol.mask = 0;
        m_errs.clear();
        setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_ACTIVE);
      }

      void
      consume(const IMC::OperationalLimits* msg)
      {
        reset();
        m_use_cfg = false;

        m_ol = *msg;
        setMaxDepth();
        m_ol.setSource(IMC::AddressResolver::invalid());
        m_ol.setDestination(IMC::AddressResolver::invalid());
        m_ol.setSourceEntity(getEntityId());
        inf("%s", DTR(Status::getString(Status::CODE_ACTIVE)));

        // Store it in cache
        m_cc.op = IMC::CacheControl::COP_STORE;
        m_cc.message.set(m_ol);
        dispatch(m_cc);
      }

      //! Set an op limit to error mode
      //! @param[in] lmask new error bitmask
      //! @param[in] ldesc error description
      //! @param[in] v1 current value
      //! @param[in] v2 limit value
      void
      setError(uint8_t lmask, const char* ldesc, double v1, double v2)
      {
        m_emask |= lmask;

        LError& le = m_errs[lmask];
        le.desc = ldesc;
        le.v1 = v1;
        le.v2 = v2;

        err(DTR("%s -- operational limit breached: %0.2f > %0.2f"), ldesc, v1, v2);
      }

      //! Clear an op limit from error state
      //! @param[in] lmask new error bitmask
      //! @param[in] ldesc error description
      //! @param[in] v1 current value
      //! @param[in] v2 limit value
      void
      clearError(uint8_t lmask, const char* ldesc, double v1, double v2)
      {
        m_emask &= ~lmask;
        m_errs.erase(lmask);
        war(DTR("%s -- operational limit now sane: %0.2f <= %0.2f"), ldesc, v1, v2);
      }

      //! Clear an op limit from error state
      //! @param[in] lmask new error bitmask
      //! @param[in] ldesc error description
      //! @param[in] v1 current value
      //! @param[in] v2 limit value
      //! @param[in] hyst hysteresis factor to avoid chattering
      //! @return true if in error mode
      bool
      test(uint8_t lmask, const char* ldesc, double v1, double v2, double hyst = 0.0)
      {
        if (!(m_ol.mask & lmask))
          return false;

        bool limit_breached = v1 > v2;
        bool error = (m_emask & lmask) != 0;

        if (limit_breached)
        {
          if (!error)
          {
            setError(lmask, ldesc, v1, v2);
          }
        }
        else if (error && (v1 + hyst < v2))
        {
          clearError(lmask, ldesc, v1, v2);
        }
        return limit_breached;
      }

      void
      consume(const IMC::EstimatedState* msg)
      {
        if (msg->getSource() != getSystemId())
          return;

        m_estate = *msg;
      }

      void
      consume(const IMC::GetOperationalLimits* msg)
      {
        (void)msg;
        dispatch(m_ol);
      }

      //! Update state of the system.
      void
      updateState(void)
      {
        if (m_emask)
        {
          std::string desc = "";

          for (LErrorMap::iterator itr = m_errs.begin(); itr != m_errs.end(); ++itr)
          {
            std::stringstream ss;
            ss << std::fixed << std::setprecision(2) << itr->second.desc << ':' << itr->second.v1 << " > " << itr->second.v2 << ';';
            desc += ss.str();
          }

          setEntityState(IMC::EntityState::ESTA_FAILURE, desc);
        }
        else
        {
          setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_ACTIVE);
        }
      }

      void
      task(void)
      {
        double speed = std::sqrt(m_estate.vx * m_estate.vx + m_estate.vy * m_estate.vy + m_estate.vz * m_estate.vz);
        uint8_t omask = m_emask;

        test(IMC::OPL_MIN_SPEED, DTR("minimum speed"), m_ol.min_speed, speed);
        test(IMC::OPL_MAX_SPEED, DTR("maximum speed"), speed, m_ol.max_speed);
        test(IMC::OPL_MAX_DEPTH, DTR("depth"), m_estate.depth, m_ol.max_depth, m_args.h_max_depth);
        test(IMC::OPL_MAX_VRATE, DTR("vertical rate"), std::fabs(m_estate.vz), m_ol.max_vrate);

        if (m_estate.alt >= 0 && m_estate.depth >= m_args.min_depth)
        {
          test(IMC::OPL_MAX_ALT, DTR("maximum altitude"), m_estate.alt, m_ol.max_altitude);
          test(IMC::OPL_MIN_ALT, DTR("minimum altitude"), m_ol.min_altitude, m_estate.alt, m_args.h_min_altitude);
        }
        else
        {
          // Clear altitude errors if they exist.
          if (m_emask & IMC::OPL_MAX_ALT)
          {
            m_emask &= ~IMC::OPL_MAX_ALT;
            m_errs.erase(IMC::OPL_MAX_ALT);
          }

          if (m_emask & IMC::OPL_MIN_ALT)
          {
            m_emask &= ~IMC::OPL_MIN_ALT;
            m_errs.erase(IMC::OPL_MIN_ALT);
          }
        }

        if ((m_ol.mask & IMC::OPL_AREA) && (Clock::get() >= m_atest_time))
        {
          double x, y;

          WGS84::displacement(m_ol.lat, m_ol.lon, 0, m_estate.lat, m_estate.lon, 0, &x, &y);

          x += m_estate.x;
          y += m_estate.y;

          Angles::rotate(m_ol.orientation, true, x, y);

          double d2limits =
          std::max(std::fabs(x) - 0.5 * m_ol.length, std::fabs(y) - 0.5 * m_ol.width);
          test(IMC::OPL_AREA, DTR("Operational Area"), d2limits, 0);

          m_atest_time += c_atest_period;
        }

        if (m_emask != omask)
          updateState();
      }
    };
  }
}

DUNE_TASK
