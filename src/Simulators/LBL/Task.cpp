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
// Author: Ricardo Martins                                                  *
// Author: Bruno Terra                                                      *
// Author: Eduardo Marques                                                  *
//***************************************************************************

// ISO C++ 98 headers.
#include <cstdlib>
#include <cmath>
#include <iomanip>

// DUNE headers.
#include <DUNE/DUNE.hpp>

using DUNE_NAMESPACES;

namespace Simulators
{
  //! %LBL simulator for DUNE
  //! %LBL is responsible to gather data from the vehicle simulator
  //! by consuming SimulatedState IMC messages and then add a
  //! configurable gaussian noise component before sending LblRange
  //! information to the bus.
  //!
  //! To conform with existent hardware properties it is also
  //! possible to define a invalid reading probability to nullify
  //! some of the readings.
  //!
  //! @author Ricardo Martins
  //! @author Bruno Terra
  //! @author Eduardo Marques
  namespace LBL
  {
    //! Constant for "bad range"
    static const int c_huge_error = 700;

    //! Beacon setup.
    struct BeaconSetup
    {
      //! Beacon id.
      uint8_t id;
      //! WGS-84 latitude.
      double lat;
      //! WGS-84 longitude.
      double lon;
      //! Beacon north displacement relative to reference (m).
      double x;
      //! Beacon east displacement relative to reference (m).
      double y;
      //! Beacon depth (m).
      double depth;
    };

    //! %LBL entity states.
    struct Arguments
    {
      //! Ping delay.
      double ping_delay;
      //! LBL bad range probability.
      uint16_t bad_range_prob;
      //! Std. deviation of "good" range.
      double sigma;
      //! PRNG type.
      std::string prng_type;
      //! PRNG seed.
      int prng_seed;
    };

    //! %LBL simulator task.
    struct Task: public Tasks::Task
    {
      //! Simulated state.
      IMC::SimulatedState m_sstate;
      //! WGS84 origin.
      IMC::GpsFix* m_origin;
      //! LblConfig buffer.
      IMC::LblConfig* m_lbl_cfg;
      //! Next ping time.
      Counter<double> m_ping_time;
      //! PRNG handle.
      Random::Generator* m_prng;
      //! Configuration/position of LBL beacons.
      std::vector<BeaconSetup> m_beacons;
      //! Current active beacon.
      std::vector<BeaconSetup>::const_iterator m_beacon;
      //! Task arguments.
      Arguments m_args;

      Task(const std::string& name, Tasks::Context& ctx):
        Tasks::Task(name, ctx),
        m_origin(NULL),
        m_lbl_cfg(NULL),
        m_prng(NULL)
      {
        // Define configuration parameters.
        paramActive(Tasks::Parameter::SCOPE_MANEUVER,
                    Tasks::Parameter::VISIBILITY_USER,
                    true);

        param("Ping Delay", m_args.ping_delay)
        .units(Units::Second)
        .defaultValue("1.0")
        .description("");

        param("Bad Range Probability", m_args.bad_range_prob)
        .units(Units::Percentage)
        .minimumValue("0")
        .maximumValue("100")
        .defaultValue("5.0")
        .description("Probability of a bad range");

        param("Standard Deviation", m_args.sigma)
        .units(Units::Meter)
        .defaultValue("1.25")
        .description("Standard deviation of \"good\" range. "
                     "It is assumed that range errors are Gaussian distributed "
                     "with mean 0 and std. dev. sigma. "
                     "Rule of thumb (the usual one): to achieve 95% of range errors "
                     "with absolute value less than E, set sigma = E / 2. "
                     "For 99% of errors lower than E set sigma = E / 3");

        param("PRNG Type", m_args.prng_type)
        .defaultValue(Random::Factory::c_default);

        param("PRNG Seed", m_args.prng_seed)
        .defaultValue("-1");

        setEntityState(IMC::EntityState::ESTA_BOOT, Status::CODE_WAIT_GPS_FIX);
        requestDeactivation();

        // Register consumers.
        bind<IMC::LblConfig>(this);
        bind<IMC::GpsFix>(this);
        bind<IMC::SimulatedState>(this);
      }

      //! Update parameters.
      void
      onUpdateParameters(void)
      {
        m_ping_time.setTop(m_args.ping_delay);
      }

      //! Acquire resources.
      void
      onResourceAcquisition(void)
      {
        m_prng = Random::Factory::create(m_args.prng_type, m_args.prng_seed);
      }

      //! Release resources.
      void
      onResourceRelease(void)
      {
        Memory::clear(m_prng);
        Memory::clear(m_origin);
        Memory::clear(m_lbl_cfg);
      }

      bool
      hasLBLConfig(void) const
      {
        return m_lbl_cfg != NULL;
      }

      bool
      hasOrigin(void) const
      {
        return m_origin != NULL;
      }

      bool
      isInitialized(void) const
      {
        return hasOrigin() && hasLBLConfig() && (m_beacons.size() > 0);
      }

      void
      updateBeacons(void)
      {
        m_beacons.clear();
        IMC::MessageList<IMC::LblBeacon>::const_iterator itr = m_lbl_cfg->beacons.begin();
        for (unsigned i = 0; itr != m_lbl_cfg->beacons.end(); ++itr, ++i)
          addBeacon(i, *itr);
        m_beacon = m_beacons.begin();
        m_ping_time.reset();

        if (isActive())
          setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_ACTIVE);
        else
          setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_IDLE);
      }

      //! Routine to add a new beacon.
      //! @param[in] id beacon id.
      //! @param[in] msg inline msg.
      void
      addBeacon(unsigned id, const IMC::LblBeacon* msg)
      {
        if (m_beacons.size() >= c_max_beacons)
        {
          err(DTR("maximum amount of beacons is %u"), c_max_beacons);
          return;
        }

        if (msg == NULL)
          return;

        BeaconSetup setup;
        setup.id = id;
        setup.lat = msg->lat;
        setup.lon = msg->lon;
        setup.depth = msg->depth;

        Coordinates::WGS84::displacement(m_origin->lat, m_origin->lon, 0.0,
                                         msg->lat, msg->lon, msg->depth,
                                         &(setup.x), &(setup.y));

        m_beacons.push_back(setup);

        debug("beacon %s (id %d): (%0.2f, %0.2f, %0.2f)", msg->beacon.c_str(),
              setup.id, setup.x, setup.y, setup.depth);
      }

      void
      consume(const IMC::GpsFix* msg)
      {
        if (msg->type != IMC::GpsFix::GFT_MANUAL_INPUT)
          return;

        Memory::replace(m_origin, new IMC::GpsFix(*msg));
        if (hasLBLConfig())
          updateBeacons();
        else
          setEntityState(IMC::EntityState::ESTA_BOOT, Status::CODE_WAIT_LBL_CFG);
      }

      void
      consume(const IMC::LblConfig* msg)
      {
        if (msg->op == IMC::LblConfig::OP_SET_CFG)
        {
          // Save message to cache.
          IMC::CacheControl cop;
          cop.op = IMC::CacheControl::COP_STORE;
          cop.message.set(*msg);
          dispatch(cop);

          Memory::replace(m_lbl_cfg, new IMC::LblConfig(*msg));
          if (hasOrigin())
            updateBeacons();
          else
            setEntityState(IMC::EntityState::ESTA_BOOT, Status::CODE_WAIT_GPS_FIX);
        }
        else if (msg->op == IMC::LblConfig::OP_GET_CFG)
        {
          IMC::LblConfig cfg;
          cfg.op = IMC::LblConfig::OP_CUR_CFG;
          if (m_lbl_cfg != NULL)
            cfg.beacons = m_lbl_cfg->beacons;
          dispatch(cfg);
        }
      }

      void
      consume(const IMC::SimulatedState* msg)
      {
        if (isInitialized())
          m_sstate = *msg;
      }

      void
      onActivation(void)
      {
        setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_ACTIVE);
        m_ping_time.reset();
      }

      void
      onDeactivation(void)
      {
        setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_IDLE);
      }

      void
      onMain(void)
      {
        while (!stopping())
        {
          if (!isInitialized() || !isActive())
          {
            waitForMessages(1.0);
            continue;
          }

          if (!m_ping_time.overflow())
          {
            waitForMessages(m_args.ping_delay);
            continue;
          }

          double tstamp = Time::Clock::getSinceEpoch();

          for (m_beacon = m_beacons.begin(); m_beacon < m_beacons.end(); ++m_beacon)
          {
            // Compute error.
            double error = 0;
            if (m_args.bad_range_prob > 0 && m_prng->random() % 100 <= m_args.bad_range_prob)
              error = c_huge_error;
            else if (m_args.sigma > 0)
              error = m_prng->gaussian() * m_args.sigma;

            //! Compute range.
            double xd = m_sstate.x - m_beacon->x;
            double yd = m_sstate.y - m_beacon->y;
            double zd = m_sstate.z - m_beacon->depth;
            IMC::LblRange range;
            range.setTimeStamp(tstamp);
            range.id = m_beacon->id;
            range.range = std::sqrt(xd * xd + yd * yd + zd * zd);
            range.range += error;
            dispatch(range, DF_KEEP_TIME);

            trace("beacon %u, range of %0.2f m, simulated error of %0.2f m",
                  range.id, range.range, error);
          }

          // Setup next ping.
          m_ping_time.reset();
        }
      }
    };
  }
}

DUNE_TASK
