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

namespace Transports
{
  namespace Noptilus
  {
    using DUNE_NAMESPACES;

    //! Broadcast channel.
    static const std::string c_broadcast = "broadcast";
    //! Maximum number of References per cycle.
    static const uint8_t c_max_ref = 3;
    //! Number of DVL beams.
    static const uint8_t c_dvl_beams = 4;
    //! Value multiplier
    static const float c_mult = 100.0;

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
      //! Last received navigation uncertainty.
      IMC::NavigationUncertainty* m_uncertainty;
      //! DVL beam value.
      int16_t m_beams[c_dvl_beams];
      //! DVL beam entity id.
      unsigned m_dvl_eid[c_dvl_beams];
      //! Map of pending transmissions.
      std::map<std::string, IMC::Reference*> m_txs;
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
        m_estate(NULL),
        m_uncertainty(NULL)
      {
        paramActive(Tasks::Parameter::SCOPE_IDLE,
                    Tasks::Parameter::VISIBILITY_DEVELOPER);

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

        resetBeamsValue();
        setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_IDLE);

        bind<IMC::AcousticOperation>(this);
        bind<IMC::Distance>(this);
        bind<IMC::EstimatedState>(this);
        bind<IMC::GpsFix>(this);
        bind<IMC::NavigationUncertainty>(this);
        bind<IMC::UamRxFrame>(this);
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
      onEntityResolution(void)
      {
        for (uint8_t i = 0; i < c_dvl_beams; ++i)
        {
          std::string option = String::str("DVL Beam %u", i);
          try
          {
            m_dvl_eid[i] = resolveEntity(option);
          }
          catch (...)
          {
            m_dvl_eid[i] = UINT_MAX;
          }
        }
      }

      void
      onActivation(void)
      {
        setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_ACTIVE);
      }

      void
      onDeactivation(void)
      {
        setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_IDLE);
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
      consume(const IMC::NavigationUncertainty* msg)
      {
        if (msg->getSource() != getSystemId())
          return;

        if (m_uncertainty)
          *m_uncertainty = *msg;
        else
          m_uncertainty = new IMC::NavigationUncertainty(*msg);
      }

      void
      consume(const IMC::Distance* msg)
      {
        if (msg->getSource() != getSystemId())
          return;

        for (uint8_t i = 0; i < c_dvl_beams; ++i)
        {
          if (msg->getSourceEntity() == m_dvl_eid[i])
          {
            if (msg->validity == IMC::Distance::DV_VALID)
              m_beams[i] = static_cast<int16_t>(msg->value * c_mult);
          }
        }
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

          if (m->getId() == DUNE_IMC_REFERENCE)
          {
            const IMC::Reference* r = static_cast<const IMC::Reference*>(m);
            IMC::Reference* ref = new IMC::Reference(*r);
            ref->setDestination(resolveSystemName(msg->system));

            std::map<std::string, IMC::Reference*>::iterator itr = m_txs.find(msg->system);
            if (itr != m_txs.end())
            {
              delete itr->second;
              itr->second = ref;
            }
            else
            {
              m_txs[msg->system] = ref;
            }
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
        if (!isActive())
          return;

        if (msg->sys_dst != getSystemName() && msg->sys_dst != c_broadcast)
          return;

        if (msg->data.size() < 1)
          return;

        uint8_t id = msg->data[0];

        IMC::Message* rmsg = NULL;
        uint8_t* ptr = NULL;
        IMC::Distance distance;
        IMC::NavigationUncertainty unc;
        uint16_t src = resolveSystemName(msg->sys_src);
        uint16_t length;

        switch (id)
        {
          case Utils::Codecs::CodedEstimatedState::c_id:
            rmsg = Utils::Codecs::CodedEstimatedState::decode(msg);

            // Decode the rest of the frame.
            ptr = (uint8_t*)&msg->data[Utils::Codecs::CodedEstimatedState::getSize()];

            distance.setSource(src);
            unc.setSource(src);

            int16_t tdist;
            length = msg->data.size() - Utils::Codecs::CodedEstimatedState::getSize();
            for (uint8_t i = 0; i < c_dvl_beams; ++i)
            {
              ptr += IMC::deserialize(tdist, ptr, length);
              distance.value = static_cast<float>(tdist / c_mult);

              if (distance.value > 0)
                distance.validity = IMC::Distance::DV_VALID;

              dispatch(distance);
            }

            ptr += IMC::deserialize(unc.x, ptr, length);
            ptr += IMC::deserialize(unc.y, ptr, length);
            dispatch(unc);
            break;

          case Utils::Codecs::CodedReference::c_id:
            rmsg = Utils::Codecs::CodedReference::decodeById(msg, getSystemId());
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
          uint16_t sr = resolveSystemName(msg->sys_src);
          rmsg->setSource(sr);
          dispatch(*rmsg);
        }
      }

      void
      consume(const IMC::GpsFix* msg)
      {
        if (!isActive())
          return;

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
        std::map<std::string, IMC::Reference*>::iterator itr = m_txs.begin();
        for (; itr != m_txs.end(); ++itr)
          delete itr->second;
        m_txs.clear();
      }

      void
      transmitPending(void)
      {
        std::map<std::string, IMC::Reference*>::iterator itr = m_txs.begin();

        if (m_txs.size() < 1)
          return;

        if (m_txs.size() <= c_max_ref)
        {
          UamTxFrame* tx = new UamTxFrame;
          tx->setDestination(getSystemId());
          tx->sys_dst = c_broadcast;
          tx->data.resize(Utils::Codecs::CodedReference::getPayloadSize(m_txs.size()));

          for (; itr != m_txs.end(); ++itr)
            Utils::Codecs::CodedReference::encodeById(itr->second, tx, itr->second->getDestination());

          dispatch(*tx);
        }

        clearPending();
      }

      void
      transmit(void)
      {
        if (m_estate == NULL)
          return;

        if (m_uncertainty == NULL)
          return;

        IMC::UamTxFrame frame;
        frame.setDestination(getSystemId());
        frame.sys_dst = m_args.dst;
        frame.data.resize(Utils::Codecs::CodedEstimatedState::getSize() + c_dvl_beams * sizeof(int16_t) + 2 * sizeof(float));
        Utils::Codecs::CodedEstimatedState::encode(m_estate, &frame);

        // Add distance values.
        uint8_t* ptr = (uint8_t*)&frame.data[Utils::Codecs::CodedEstimatedState::getSize()];
        for (uint8_t i = 0; i < 4; ++i)
          ptr += IMC::serialize(m_beams[i], ptr);
        resetBeamsValue();

        // Add uncertainty.
        ptr += IMC::serialize(m_uncertainty->x, ptr);
        ptr += IMC::serialize(m_uncertainty->y, ptr);
        dispatch(frame);
      }

      void
      resetBeamsValue(void)
      {
        for (uint8_t i = 0; i < c_dvl_beams; i++)
          m_beams[i] = -1 * c_mult;
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
