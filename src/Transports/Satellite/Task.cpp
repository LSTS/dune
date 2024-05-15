//***************************************************************************
// Copyright 2007-2024 Universidade do Porto - Faculdade de Engenharia      *
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
// Author: João Bogas                                                       *
//***************************************************************************

// DUNE headers.
#include <DUNE/DUNE.hpp>

// C++ headers.
#include <unordered_map>

namespace Transports
{
  //! Insert short task description here.
  //!
  //! Insert explanation on task behaviour here.
  //! @author João Bogas
  namespace Satellite
  {
    using DUNE_NAMESPACES;

    struct Task: public DUNE::Tasks::Task
    {
      //! Map of received iridium fragments.
      std::unordered_map<uint8_t, IridiumFragment*> m_ir_frags;

      //! Constructor.
      //! @param[in] name task name.
      //! @param[in] ctx context.
      Task(const std::string& name, Tasks::Context& ctx):
        DUNE::Tasks::Task(name, ctx)
      {
        bind<IMC::SatelliteRequest>(this);
        bind<IMC::IridiumTxStatus>(this);
        bind<IMC::IridiumMsgRx>(this);
      }

      //! Update internal state with new parameter values.
      void
      onUpdateParameters(void)
      { }

      //! Reserve entity identifiers.
      void
      onEntityReservation(void)
      { }

      //! Resolve entity names.
      void
      onEntityResolution(void)
      { }

      //! Acquire resources.
      void
      onResourceAcquisition(void)
      { }

      //! Initialize resources.
      void
      onResourceInitialization(void)
      {
        IMC::AnnounceService announce;
        announce.service = std::string("imc+any://iridium");
        dispatch(announce);
        setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_IDLE);
      }

      //! Release resources.
      void
      onResourceRelease(void)
      { }

      void
      consume(const IMC::SatelliteRequest* msg)
      {
        IMC::IridiumMsgTx ir_msg;
        ir_msg.req_id      = msg->req_id;
        ir_msg.ttl         = msg->ttl;
        ir_msg.destination = msg->destination;
        ir_msg.data        = msg->data;

        dispatch(ir_msg);
      }

      void
      consume(const IMC::IridiumTxStatus* msg)
      {
        IMC::SatelliteStatus sat_status;
        sat_status.req_id = msg->req_id;
        sat_status.status = msg->status;
        sat_status.info   = msg->text;

        dispatch(sat_status);
      }

      void
      handleFragment(IridiumFragment* frag)
      {
        debug("Received fragment %d/%d", frag->hdr.frag_id, frag->hdr.num_frags);

        if (m_ir_frags.find(frag->hdr.trans_id) == m_ir_frags.end())
        {
          m_ir_frags[frag->hdr.trans_id] = frag;
          return;
        }

        IMC::Message* imc_msg = m_ir_frags[frag->hdr.trans_id]->merge(frag);
        if (imc_msg != nullptr)
        {
          inf("received message as fragmets %s", imc_msg->getName());
          dispatch(imc_msg);
          Memory::clear(imc_msg);
        }
      }

      void
      consume(const IMC::IridiumMsgRx* msg)
      {
        IridiumMessage* ir_msg = nullptr;
        try
        {
          ir_msg = IridiumMessage::deserialize(msg);
        }
        catch (const std::exception& e)
        {
          err("%s", e.what());
          war(DTR("Parsing unrecognized iridium message as text"));
          std::string text(msg->data.begin(), msg->data.end());
          IMC::TextMessage tm;
          tm.text   = text;
          tm.origin = "iridium";
          std::stringstream ss;
          tm.toText(ss);
          spew("sending this message to bus: %s", ss.str().c_str());
          dispatch(tm);
          return;
        }

        switch (ir_msg->msg_id)
        {
          case ID_IRIDIUMCMD:
            break;

          case (ID_DEVICEUPDATE):
            break;

          case (ID_EXTDEVUPDATE):
            break;

          case (ID_IMCMESSAGE):
            break;

          case (ID_FRAGMENT):
            handleFragment(static_cast<IridiumFragment*>(ir_msg));
            break;

          default:
            break;
        }

        Memory::clear(ir_msg);
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
