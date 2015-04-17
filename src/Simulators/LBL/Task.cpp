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
// Author: Ricardo Martins                                                  *
// Author: Bruno Terra                                                      *
// Author: Eduardo Marques                                                  *
// Author: José Braga                                                       *
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
      //! Wait for incoming request;
      bool wait_request;
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
      //! Cursor.
      MessageList<IMC::LblBeacon>::const_iterator m_cursor;
      //! Next ping time.
      Counter<double> m_pinger;
      //! PRNG handle.
      Random::Generator* m_prng;
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
                    false);

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

        param("Wait for Ping Request", m_args.wait_request)
        .defaultValue("false")
        .description("When this parameter is active, the task will wait for"
                     "ping requests from other entities");

        // Register consumers.
        bind<IMC::LblConfig>(this);
        bind<IMC::GpsFix>(this);
        bind<IMC::SimulatedState>(this);
        bind<IMC::UamTxFrame>(this);
      }

      //! Update parameters.
      void
      onUpdateParameters(void)
      {
        if (paramChanged(m_args.ping_delay))
          m_pinger.setTop(m_args.ping_delay);
      }

      //! Acquire resources.
      void
      onResourceAcquisition(void)
      {
        setEntityState(IMC::EntityState::ESTA_BOOT, Status::CODE_WAIT_GPS_FIX);
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
        return hasOrigin() && hasLBLConfig() && (m_lbl_cfg->beacons.size() > 0);
      }

      void
      updateBeacons(void)
      {
        m_cursor = m_lbl_cfg->beacons.begin();
        m_pinger.reset();

        if (isActive())
          setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_ACTIVE);
        else
          setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_IDLE);
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
          if (hasLBLConfig())
            cfg.beacons = m_lbl_cfg->beacons;

          dispatchReply(*msg, cfg);
        }
      }

      void
      consume(const IMC::SimulatedState* msg)
      {
        if (isInitialized())
          m_sstate = *msg;
      }

      void
      consume(const IMC::UamTxFrame* msg)
      {
        if (!m_args.wait_request)
          return;

        if (msg->getSource() != getSystemId())
          return;

        if (msg->flags & IMC::UamTxFrame::UTF_ACK)
          range(msg->sys_dst);
      }

      void
      onActivation(void)
      {
        setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_ACTIVE);
        m_pinger.reset();
      }

      void
      onDeactivation(void)
      {
        setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_IDLE);
      }

      //! Range system.
      //! @param[in] sys_name system name.
      void
      range(const std::string& sys_name)
      {
        if (!hasLBLConfig())
          return;

        IMC::LblBeacon* beacon = NULL;

        // Find beacon id.
        unsigned id = 0;
        bool exists = false;
        MessageList<IMC::LblBeacon>::const_iterator itr = m_lbl_cfg->beacons.begin();
        for (; itr < m_lbl_cfg->beacons.end(); ++itr)
        {
          if ((*itr) == NULL)
            continue;

          if ((*itr)->beacon == sys_name)
          {
            beacon = *itr;
            exists = true;
            break;
          }

          id++;
        }

        if (!exists)
          return;

        // Compute error.
        double error = 0;
        if (m_args.bad_range_prob > 0 && m_prng->random() % 100 <= m_args.bad_range_prob)
          error = c_huge_error;
        else if (m_args.sigma > 0)
          error = m_prng->gaussian() * m_args.sigma;

        double lat, lon;
        Coordinates::toWGS84(m_sstate, lat, lon);

        // Compute range.
        double distance;
        distance = WGS84::distance(lat, lon, m_sstate.z,
                                   beacon->lat, beacon->lon, beacon->depth);

        if (m_args.wait_request)
        {
          IMC::UamRxRange msg;
          msg.sys = sys_name;
          msg.value = distance + error;
          dispatch(msg);
        }
        else
        {
          IMC::LblRange msg;
          msg.id = id;
          msg.range = distance;
          msg.range += error;
          dispatch(msg);
        }
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

          if (m_args.wait_request)
            continue;

          if (!m_pinger.overflow())
          {
            waitForMessages(m_args.ping_delay);
            continue;
          }

          if (*m_cursor == NULL)
            continue;

          range((*m_cursor)->beacon);

          // Setup next ping.
          m_pinger.reset();

          if (++m_cursor == m_lbl_cfg->beacons.end())
            m_cursor = m_lbl_cfg->beacons.begin();
        }
      }
    };
  }
}

DUNE_TASK
