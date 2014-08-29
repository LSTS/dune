//***************************************************************************
// Copyright 2007-2014 Universidade do Porto - Faculdade de Engenharia      *
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
//***************************************************************************

// DUNE headers.
#include <DUNE/DUNE.hpp>

namespace Transports
{
  namespace Noptilus
  {
    using DUNE_NAMESPACES;

    struct Arguments
    {
      //! Number of TDMA slots.
      unsigned slot_count;
      //! TDMA slot number.
      std::vector<unsigned> slot_number;
      //! TDMA slot duration.
      unsigned slot_dur;
      //! Destination
      std::string dst;
      //! True to transmit estimated state.
      bool tx_estate;
    };

    struct Task: public DUNE::Tasks::Task
    {
      //! Last received estimated state.
      IMC::EstimatedState* m_estate;
      //! Map of pending transmissions.
      std::map<std::string, IMC::UamTxFrame*> m_txs;
      //! Destination of last transmission.
      std::string m_tx_last;
      //! TDMA slots
      DUNE::Network::TDMA m_tdma;
      //! Task arguments.
      Arguments m_args;

      //! Constructor.
      //! @param[in] name task name.
      //! @param[in] ctx context.
      Task(const std::string& name, Tasks::Context& ctx):
        DUNE::Tasks::Task(name, ctx),
        m_estate(NULL)
      {
        param("Slot Count", m_args.slot_count)
        .description("Number of TDMA slots");

        param("Slot Number", m_args.slot_number)
        .description("TDMA slot of local node");

        param("Slot Duration", m_args.slot_dur)
        .units(Units::Second)
        .description("TDMA slot duration");

        param("Destination", m_args.dst)
        .description("Destination name");

        param("Transmit Estimated State", m_args.tx_estate)
        .defaultValue("true")
        .description("True to transmit estimated state");

        bind<IMC::EstimatedState>(this);
        bind<IMC::UamRxFrame>(this);
        bind<IMC::AcousticOperation>(this);
        bind<IMC::GpsFix>(this);
      }

      ~Task(void)
      {
        Memory::clear(m_estate);
      }

      //! Update internal state with new parameter values.
      void
      onUpdateParameters(void)
      {
        m_tdma.reset(m_args.slot_count, m_args.slot_number, m_args.slot_dur);
      }

      void
      consume(const IMC::EstimatedState* msg)
      {
        if (msg->getSource() != getSystemId())
          return;

        if (m_estate)
          *m_estate = *msg;
        else
          m_estate = new IMC::EstimatedState(*msg);
      }

      void
      consume(const IMC::AcousticOperation* msg)
      {
        if (msg->msg.isNull())
          return;

        if (msg->op != IMC::AcousticOperation::AOP_MSG)
          return;

        try
        {
          const IMC::Message* m = msg->msg.get();
          uint8_t bfr[64] = {0};
          uint16_t rv = IMC::Packet::serialize(m, bfr, sizeof(bfr));

          IMC::UamTxFrame* frame = new IMC::UamTxFrame;
          frame->setDestination(getSystemId());
          frame->sys_dst = msg->system;
          frame->data.assign((char*)&bfr[0], (char*)&bfr[rv]);

          std::map<std::string, IMC::UamTxFrame*>::iterator itr = m_txs.find(frame->sys_dst);
          if (itr != m_txs.end())
          {
            delete itr->second;
            itr->second = frame;
          }
          else
          {
            m_txs[frame->sys_dst] = frame;
          }
        }
        catch (...)
        {
          err(DTR("messages doesn't fit in one frame"));
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
        switch (id)
        {
          case Utils::Codecs::CodedEstimatedState::c_id:
            rmsg = Utils::Codecs::CodedEstimatedState::decode(msg);
            break;

          default:
            try
            {
              rmsg = IMC::Packet::deserialize((uint8_t*)&msg->data[0], msg->data.size());
            }
            catch (std::runtime_error& e)
            {
              war(DTR("deserialization error: %s"), e.what());
              return;
            }
            break;
        }

        if (rmsg != NULL)
        {
          uint16_t src = resolveSystemName(msg->sys_src);
          rmsg->setSource(src);
          dispatch(*rmsg);
        }
      }

      void
      consume(const IMC::GpsFix* msg)
      {
        if (m_tdma.check(msg->utc_time))
        {
          if (m_args.tx_estate)
            transmit();
          else
            transmitPending();
        }
      }

      void
      clearPending(void)
      {
        std::map<std::string, IMC::UamTxFrame*>::iterator itr = m_txs.begin();
        for (; itr != m_txs.end(); ++itr)
          delete itr->second;
        m_txs.clear();
      }

      void
      transmitPending(void)
      {
        std::map<std::string, IMC::UamTxFrame*>::iterator itr = m_txs.begin();

        if (m_txs.size() == 1)
        {
          m_tx_last = itr->first;
          dispatch(itr->second);
        }
        else
        {
          // Try to balance transmissions.
          for (; itr != m_txs.end(); ++itr)
          {
            if (itr->first != m_tx_last)
            {
              m_tx_last = itr->first;
              dispatch(itr->second);
              break;
            }
          }
        }

        clearPending();
      }

      void
      transmit(void)
      {
        if (m_estate == NULL)
          return;

        IMC::UamTxFrame frame;
        frame.setDestination(getSystemId());
        frame.sys_dst = m_args.dst;
        Utils::Codecs::CodedEstimatedState::encode(m_estate, &frame);
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

DUNE_TASK
