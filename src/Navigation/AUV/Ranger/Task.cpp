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
//***************************************************************************

// DUNE headers.
#include <DUNE/DUNE.hpp>

namespace Navigation
{
  namespace AUV
  {
    namespace Ranger
    {
      using DUNE_NAMESPACES;

      //! Task arguments.
      struct Arguments
      {
        //! Ping periodicity.
        double ping_period;
      };

      struct Task: public DUNE::Tasks::Task
      {
        //! Current LBL configuration.
        IMC::LblConfig m_lbl_config;
        //! Cursor.
        MessageList<IMC::LblBeacon>::const_iterator m_cursor;
        //! Timer.
        Time::Counter<double> m_timer;
        //! Task arguments.
        Arguments m_args;

        //! Constructor.
        //! @param[in] name task name.
        //! @param[in] ctx context.
        Task(const std::string& name, Tasks::Context& ctx):
          DUNE::Tasks::Task(name, ctx)
        {
          paramActive(Tasks::Parameter::SCOPE_MANEUVER,
                      Tasks::Parameter::VISIBILITY_USER);

          param("Ping Periodicity", m_args.ping_period)
          .visibility(Tasks::Parameter::VISIBILITY_USER)
          .units(Units::Second)
          .defaultValue("2")
          .minimumValue("2");

          bind<IMC::LblConfig>(this);
          bind<IMC::UamRxRange>(this);
        }

        //! Update internal state with new parameter values.
        void
        onUpdateParameters(void)
        {
          if (paramChanged(m_args.ping_period))
            m_timer.setTop(m_args.ping_period);
        }

        //! Initialize resources.
        void
        onResourceInitialization(void)
        {
          setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_IDLE);
        }

        void
        onActivation(void)
        {
          m_timer.reset();
          setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_ACTIVE);
        }

        void
        onDeactivation(void)
        {
          setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_IDLE);
        }

        void
        consume(const IMC::LblConfig* msg)
        {
          if (msg->op == IMC::LblConfig::OP_SET_CFG)
          {
            m_lbl_config = *msg;
            m_cursor = m_lbl_config.beacons.begin();
          }
          else if (msg->op == IMC::LblConfig::OP_GET_CFG)
          {
            IMC::LblConfig cfg(m_lbl_config);
            cfg.op = IMC::LblConfig::OP_CUR_CFG;
            cfg.setSource(getSystemId());
            dispatchReply(*msg, cfg);
          }
        }

        void
        consume(const IMC::UamRxRange* msg)
        {
          unsigned id = 0;

          MessageList<IMC::LblBeacon>::const_iterator itr = m_lbl_config.beacons.begin();
          for (; itr < m_lbl_config.beacons.end(); ++itr)
          {
            if ((*itr) == NULL)
              continue;

            if ((*itr)->beacon == msg->sys)
            {
              IMC::LblRange range;
              range.id = id;
              range.range = msg->value;
              dispatch(range);
              return;
            }

            ++id;
          }
        }

        void
        ping(const std::string& sys_name)
        {
          IMC::UamTxFrame tx;
          tx.setDestination(getSystemId());
          tx.sys_dst = sys_name;
          tx.flags = IMC::UamTxFrame::UTF_ACK;
          tx.data.push_back(0);
          dispatch(tx);
        }

        const IMC::LblBeacon*
        getNextBeacon(void)
        {
          for (size_t i = 0; i < m_lbl_config.beacons.size(); ++i)
          {
            if (*m_cursor != NULL)
            {
              const IMC::LblBeacon* beacon = *m_cursor;
              if (++m_cursor == m_lbl_config.beacons.end())
                m_cursor = m_lbl_config.beacons.begin();
              return beacon;
            }
          }

          return NULL;
        }

        void
        pingNextBeacon(void)
        {
          const IMC::LblBeacon* beacon = getNextBeacon();
          if (beacon == NULL)
            return;

          ping(beacon->beacon);
        }

        void
        wait(void)
        {
          double delay = m_timer.getRemaining();
          if (delay < 0 || delay > 1.0)
            delay = 1.0;
          waitForMessages(delay);
        }

        //! Main loop.
        void
        onMain(void)
        {
          while (!stopping())
          {
            wait();

            if (!isActive())
              continue;

            if (m_timer.overflow())
            {
              pingNextBeacon();
              m_timer.reset();
            }
          }
        }
      };
    }
  }
}

DUNE_TASK
