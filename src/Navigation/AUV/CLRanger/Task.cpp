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
// Author: José Braga                                                       *
//***************************************************************************

// ISO C++ 98 headers.
#include <cstring>
#include <string>

// DUNE headers.
#include <DUNE/DUNE.hpp>

namespace Navigation
{
  namespace AUV
  {
    //! %CLRanger stands for Cooperative Localization Ranger. It's intended
    //! to get a range on a number of different underwater acoustic node
    //! assets. A configurable AUV system can be defined to share state
    //! information. The Cooperative Localization filter expects two AUVs
    //! and at least a single moored beacon.
    //!
    //! @author José Braga
    namespace CLRanger
    {
      using DUNE_NAMESPACES;

      //! %Task arguments
      struct Arguments
      {
        //! TDMA slot order.
        uint8_t slot_order;
        //! TDMA slot duration.
        uint8_t slot_duration;
        //! Extra TDMA slots.
        uint8_t extra_slots;
        //! AUV to range.
        std::string dst;
        //! Destination first.
        bool dest_head;
      };

      struct Task: public DUNE::Tasks::Task
      {
        //! Last received estimated state.
        IMC::EstimatedState* m_estate;
        //! Current LBL configuration.
        IMC::LblConfig m_lbl_config;
        //! Latest LBL range to destination system.
        IMC::LblRange m_lbl_range;
        //! TDMA slots for regular transmissions.
        DUNE::Network::TDMA m_tdma;
        //! TDMA slots for piggyback messages.
        DUNE::Network::TDMA m_tdma_pbm;
        //! List of systems to ping.
        std::vector<std::string> m_list;
        //! Iterator
        uint8_t m_cursor;
        //! Holder counter;
        Time::Counter<double> m_wdog;
        //! Task arguments.
        Arguments m_args;

        //! Constructor.
        //! @param[in] name task name.
        //! @param[in] ctx context.
        Task(const std::string& name, Tasks::Context& ctx):
          DUNE::Tasks::Task(name, ctx),
          m_estate(NULL)
        {
          paramActive(Tasks::Parameter::SCOPE_IDLE,
                      Tasks::Parameter::VISIBILITY_USER);

          param("Slot Order", m_args.slot_order)
          .defaultValue("1")
          .values("1, 2")
          .description("Defines which AUV transmits first");

          param("Slot Duration", m_args.slot_duration)
          .defaultValue("2")
          .minimumValue("2")
          .units(Units::Second)
          .description("TDMA slot duration");

          param("Extra Slots", m_args.extra_slots)
          .defaultValue("0")
          .minimumValue("0")
          .description("Extra TDMA slots");

          param("Destination", m_args.dst)
          .description("Destination name");

          param("Destination First", m_args.dest_head)
          .defaultValue("false")
          .description("Destination will be pinged first");

          m_cursor = 0;
          m_wdog.setTop(2.0);

          bind<IMC::EstimatedState>(this);
          bind<IMC::GpsFix>(this);
          bind<IMC::LblConfig>(this);
          bind<IMC::UamRxFrame>(this);
          bind<IMC::UamRxRange>(this);
        }

        ~Task(void)
        {
          Memory::clear(m_estate);
        }

        //! Update internal state with new parameter values.
        void
        onUpdateParameters(void)
        {
          // Recompute TDMA if necessary.
          setTDMA();
        }

        //! Initialize resources.
        void
        onResourceInitialization(void)
        {
          setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_IDLE);
        }

        //! On task deactivation.
        void
        onDeactivation(void)
        {
          setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_IDLE);
        }

        //! On task activation.
        void
        onActivation(void)
        {
          setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_ACTIVE);
        }

        void
        consume(const IMC::EstimatedState* msg)
        {
          if (msg->getSource() != getSystemId())
            return;

          if (m_estate != NULL)
            *m_estate = *msg;
          else
            m_estate = new IMC::EstimatedState(*msg);
        }

        void
        consume(const IMC::GpsFix* msg)
        {
          if (isActive())
          {
            // Synchronize cursor at each minute start.
            synch(msg->utc_time);

            if (m_tdma.check(msg->utc_time))
              pingNextBeacon();
            if (m_tdma_pbm.check(msg->utc_time))
              queue();
          }
        }

        void
        synch(float utc_time)
        {
          unsigned thour = (unsigned)(utc_time / 3600);
          unsigned tmin = (unsigned)(((utc_time / 3600.0) - thour) * 60);
          unsigned tsec = (unsigned)Math::round(((((utc_time / 3600.0) - thour) * 60.0) - tmin) * 60.0);

          if (tsec == 0)
            m_cursor = 0;
        }

        void
        consume(const IMC::LblConfig* msg)
        {
          // New LBL configuration.
          if (msg->op == IMC::LblConfig::OP_SET_CFG)
          {
            m_lbl_config = *msg;
            setTDMA();
          }
          else if (msg->op == IMC::LblConfig::OP_GET_CFG)
          {
            IMC::LblConfig cfg(m_lbl_config);
            cfg.op = IMC::LblConfig::OP_CUR_CFG;
            cfg.setSource(getSystemId());
            cfg.setSourceEntity(getEntityId());
            dispatchReply(*msg, cfg);
          }
        }

        void
        consume(const IMC::UamRxFrame* msg)
        {
          if (msg->sys_dst != getSystemName())
            return;

          if (msg->data.size() < 1)
            return;

          uint8_t id = msg->data[0];

          IMC::Message* rmsg = NULL;
          IMC::EstimatedState* estate = NULL;
          switch (id)
          {
            case Utils::Codecs::CodedEstimatedState::c_id:
              rmsg = Utils::Codecs::CodedEstimatedState::decode(msg);
              estate = static_cast<IMC::EstimatedState*>(rmsg);
              break;

            default:
              break;
          }

          if (rmsg != NULL)
          {
            // With EstimatedState from other AUV we need to update LblConfig.
            updateLblConfig(estate);
            uint16_t src = resolveSystemName(msg->sys_src);
            rmsg->setSource(src);
            dispatch(*rmsg);
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
              // Hold range to system.
              if ((*itr)->beacon == m_args.dst && !m_ctx.profiles.isSelected("Simulation"))
              {
                m_lbl_range.setTimeStamp(msg->getTimeStamp());
                m_lbl_range.id = id;
                m_lbl_range.range = msg->value;
                m_wdog.reset();
                return;
              }

              IMC::LblRange range;
              range.id = id;
              range.range = msg->value;
              dispatch(range);
              return;
            }

            ++id;
          }
        }

        //! Update LBL configuration.
        void
        updateLblConfig(const IMC::EstimatedState* estate)
        {
          MessageList<IMC::LblBeacon>::const_iterator itr = m_lbl_config.beacons.begin();
          for (; itr < m_lbl_config.beacons.end(); ++itr)
          {
            if ((*itr) == NULL)
              continue;

            // Update AUV "beacon" position.
            if ((*itr)->beacon == m_args.dst)
            {
              debug("update AUV beacon position");
              double lat, lon;
              Coordinates::toWGS84(*estate, lat, lon);
              (*itr)->lat = lat;
              (*itr)->lon = lon;
              (*itr)->depth = estate->depth;
            }

            // Update own modem if exists.
            if ((*itr)->beacon == getSystemName())
            {
              if (m_estate != NULL)
              {
                debug("update own position");
                double lat, lon;
                Coordinates::toWGS84(*m_estate, lat, lon);
                (*itr)->lat = lat;
                (*itr)->lon = lon;
                (*itr)->depth = m_estate->depth;
              }
            }
          }

          m_lbl_config.op = IMC::LblConfig::OP_SET_CFG;
          m_lbl_config.setSource(getSystemId());
          m_lbl_config.setSourceEntity(getEntityId());
          dispatch(m_lbl_config);

          // Dispatch LBL range if information is not too old.
          if (!m_wdog.overflow())
            dispatch(m_lbl_range);
        }

        //! Compute TDMA slots.
        void
        setTDMA(void)
        {
          std::vector<unsigned> slot_number;
          std::vector<unsigned> slot_pbm_number;
          m_list.clear();

          // Only if beacons are available.
          if (m_lbl_config.beacons.size() > 0)
          {
            bool destination_check = false;
            unsigned slot_count = m_args.extra_slots;
            MessageList<IMC::LblBeacon>::const_iterator itr = m_lbl_config.beacons.begin();
            for (; itr < m_lbl_config.beacons.end(); ++itr)
            {
              if ((*itr) == NULL)
                continue;

              // Do not count own system for the slot count.
              if ((*itr)->beacon != getSystemName())
                slot_count++;

              if ((*itr)->beacon == m_args.dst)
              {
                destination_check = true;

                // Destination goes first.
                if (m_args.dest_head)
                  m_list.insert(m_list.begin(), (*itr)->beacon);
                else
                  m_list.push_back((*itr)->beacon);
              }
              else
              {
                // Destination goes last.
                if (m_args.dest_head)
                  m_list.push_back((*itr)->beacon);
                else
                  m_list.insert(m_list.begin(), (*itr)->beacon);
              }
            }

            if (!destination_check)
              err(DTR("destination is not in the LBL configuration"));

            // Ping to beacons.
            for (uint8_t i = 0; i < slot_count - m_args.extra_slots - 1; ++i)
              slot_number.push_back(i + (m_args.slot_order - 1) * slot_count);

            // Ping destination system.
            int8_t slot = (m_args.slot_order % 2) * 2 * slot_count - m_args.extra_slots - 1;
            if (slot < 0)
              slot += slot_count;
            slot_number.push_back(slot);

            // Queued message.
            int8_t pbm_slot = ((m_args.slot_order * slot_count - m_args.extra_slots - 1) * m_args.slot_duration) - 1;
            if (pbm_slot < 0)
              pbm_slot += slot_count * m_args.slot_duration * 2;
            slot_pbm_number.push_back(pbm_slot);

            // Debug information
            for (uint8_t i = 0; i < slot_number.size(); i++)
              spew("Added slot for instant message: %d/%d", slot_number[i] * m_args.slot_duration, slot_count * 2 * m_args.slot_duration);

            for (uint8_t i = 0; i < slot_pbm_number.size(); i++)
              spew("Added slot for piggyback message: %d/%d", slot_pbm_number[i], slot_count * m_args.slot_duration * 2);

            // Reset TDMA.
            m_tdma.reset(2 * slot_count, slot_number, m_args.slot_duration);
            m_tdma_pbm.reset(2 * slot_count * m_args.slot_duration, slot_pbm_number, 1);

            if (isActive())
              setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_ACTIVE);
            else
              setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_IDLE);
          }
          else
          {
            m_tdma.reset(0, slot_number, 0);
            m_tdma_pbm.reset(0, slot_number, 0);
          }
        }

        //! Ping next beacon in the list.
        void
        pingNextBeacon(void)
        {
          ping(m_list[m_cursor]);

          if (++m_cursor >= m_list.size())
            m_cursor = 0;
        }

        //! Queue Piggyback Message
        void
        queue(void)
        {
          IMC::UamTxFrame frame;
          frame.setDestination(getSystemId());
          frame.flags = IMC::UamTxFrame::UTF_DELAYED;

          if (m_estate != NULL)
          {
            frame.sys_dst = m_args.dst;
            Utils::Codecs::CodedEstimatedState::encode(m_estate, &frame);
          }

          dispatch(frame);
        }

        //! Ping system.
        //! @param[in] sys_name system name.
        void
        ping(const std::string& sys_name)
        {
          IMC::UamTxFrame frame;
          frame.setDestination(getSystemId());
          frame.flags = IMC::UamTxFrame::UTF_ACK;
          frame.sys_dst = sys_name;
          frame.data.push_back(0);
          dispatch(frame);
        }

        //! Main loop.
        void
        onMain(void)
        {
          while (!stopping())
          {
            waitForMessages(1.0);
          }
        }
      };
    }
  }
}

DUNE_TASK
