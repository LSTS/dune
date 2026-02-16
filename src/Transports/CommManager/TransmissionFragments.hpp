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
// Author: Luis Venancio                                                    *
//***************************************************************************

#ifndef SRC_TRANSPORTS_COMMMANAGER_TRANSMISSION_FRAGMENTS_HPP_
#define SRC_TRANSPORTS_COMMMANAGER_TRANSMISSION_FRAGMENTS_HPP_

// DUNE headers.
#include <DUNE/DUNE.hpp>
#include <DUNE/Network/Fragments.hpp>

namespace Transports
{
  namespace CommManager
  {

    using DUNE_NAMESPACES;

    const uint8_t c_unknown_frag_state = 0xFF;

    class TransmissionFragments
    {
    public:
      TransmissionFragments(const IMC::TransmissionRequest* request, uint32_t max_payload_size, uint32_t expiration_time) :
        m_original_request(*request),
        m_fragments(nullptr),
        m_transmission_timedout(false)
      {
        if (request->data_mode != IMC::TransmissionRequest::DMODE_INLINEMSG)
          return;

        m_ttl = m_original_request.deadline - m_original_request.getTimeStamp();
        m_expiration_timer.setTop(expiration_time);
        m_fragments = createFragments(request->msg_data.get(), max_payload_size);
        m_transmission_states.resize(m_fragments->getNumberOfFragments(), c_unknown_frag_state);
      }

      ~TransmissionFragments()
      { 
        Memory::clear(m_fragments);
      }

      void
      resetExpirationTimer()
      {
        m_expiration_timer.reset();
      }

      bool
      areFragmentsExpired()
      {
        return m_expiration_timer.overflow();
      }

      bool
      isDeadlineExpired() const
      {
        return Clock::getSinceEpoch() >= m_original_request.deadline;
      }

      bool
      isTransmissionTimedOut() const
      {
        return m_transmission_timedout;
      }

      void
      setTransmissionAsTimedout()
      {
        // Set all "IN_PROGRESS" states to "TEMPORARY_FAILURE"
        for (auto& state : m_transmission_states)
        {
          if (state == c_unknown_frag_state ||
              state == IMC::TransmissionStatus::TSTAT_IN_PROGRESS)
            state = IMC::TransmissionStatus::TSTAT_TEMPORARY_FAILURE;
        }

        // Mark as timed out
        m_transmission_timedout = true;
      }

      void
      setFragmentStatus(uint8_t frag_num, uint8_t status)
      {
        if (frag_num >= static_cast<uint8_t>(m_transmission_states.size()))
          return;

        m_transmission_states[frag_num] = status;
      }

      bool
      isTransmissionComplete() const
      {
        for (const auto& state : m_transmission_states)
        {
          if (state != IMC::TransmissionStatus::TSTAT_SENT)
            return false;
        }
        return true;
      }

      bool
      isTransmissionInProgress() const
      {
        for (const auto& state : m_transmission_states)
        {
          if (state != IMC::TransmissionStatus::TSTAT_IN_PROGRESS)
            return false;
        }
        return true;
      }

      bool
      isTransmissionFailed() const
      {
        for (const auto& state : m_transmission_states)
        {
          if (state == IMC::TransmissionStatus::TSTAT_INPUT_FAILURE ||
              state == IMC::TransmissionStatus::TSTAT_TEMPORARY_FAILURE ||
              state == IMC::TransmissionStatus::TSTAT_PERMANENT_FAILURE ||
              state == IMC::TransmissionStatus::TSTAT_INV_ADDR)
            return true;
        }
        return false;
      }

      std::string
      getFailedFragments()
      {
        // Return failed frag ids as string
        std::string failed_frags_str;
        for (unsigned i = 0; i < m_transmission_states.size(); ++i)
          if (m_transmission_states[i] == IMC::TransmissionStatus::TSTAT_INPUT_FAILURE ||
              m_transmission_states[i] == IMC::TransmissionStatus::TSTAT_TEMPORARY_FAILURE ||
              m_transmission_states[i] == IMC::TransmissionStatus::TSTAT_PERMANENT_FAILURE ||
              m_transmission_states[i] == IMC::TransmissionStatus::TSTAT_INV_ADDR)
            failed_frags_str += String::str(i) + " ";

        if (!failed_frags_str.empty())
          failed_frags_str.pop_back(); // Remove trailing space
        
        return failed_frags_str;
      }

      std::vector<IMC::TransmissionRequest>
      getTransmissionList(void)
      {
        std::vector<IMC::TransmissionRequest> tx_list;

        if (m_fragments == nullptr)
          return tx_list;

        int n_frags = m_fragments->getNumberOfFragments();

        for (int i = 0; i < n_frags; i++)
        {
          IMC::MessagePart* part = m_fragments->getFragment(i);
          IMC::TransmissionRequest tx_req = m_original_request;
          tx_req.msg_data.set(*part);

          tx_list.push_back(tx_req);
        }

        return tx_list;
      }

      std::vector<IMC::TransmissionRequest>
      getRetransmissionList(const std::string& request)
      {
        std::vector<IMC::TransmissionRequest> tx_list;

        if (m_fragments == nullptr)
          return tx_list;

        std::unordered_set<int> frag_ids = getRetransmissionIds(request);

        // Set status of requested fragments to "UNKNOWN" and remaining to "DELIVERED"
        for (unsigned i = 0; i < m_transmission_states.size(); i++)
        {
          if (frag_ids.find(i) != frag_ids.end())
            setFragmentStatus(i, c_unknown_frag_state);
          else
            setFragmentStatus(i, IMC::TransmissionStatus::TSTAT_DELIVERED);
        }

        // Create transmission requests for requested fragments
        for(auto& frag_id : frag_ids)
        {
          IMC::MessagePart* part = m_fragments->getFragment(frag_id);
          IMC::TransmissionRequest tx_req = m_original_request;

          tx_req.deadline = Clock::getSinceEpoch() + m_ttl;
          tx_req.data_mode = IMC::TransmissionRequest::DMODE_INLINEMSG;
          tx_req.msg_data.set(*part);

          tx_list.push_back(tx_req);
        }

        return tx_list;
      }

      const IMC::TransmissionRequest*
      getOriginalTransmissionRequest() const
      {
        return &m_original_request;
      }

      uint8_t
      getFragmentsId(void) const
      {
        if (m_fragments == nullptr)
          return 0;

        return m_fragments->getFragment(0)->uid;
      }

      uint8_t
      getNumberOfFragments(void) const
      {
        if (m_fragments == nullptr)
          return 0;

        return m_fragments->getNumberOfFragments();
      }

      static bool
      needsFragmentation(const IMC::Message* msg, const uint32_t max_payload_size)
      {
        if (max_payload_size == 0)
          return false;
        
        return msg->getPayloadSerializationSize() > max_payload_size;
      }

      static bool
      needsFragmentation(const IMC::TransmissionRequest* msg, const uint32_t max_payload_size)
      {
        if (msg->data_mode != IMC::TransmissionRequest::DMODE_INLINEMSG)
          return false;

        const IMC::Message* inline_msg = msg->msg_data.get();
        return needsFragmentation(inline_msg, max_payload_size);
      }

    private:
      //! Original request
      IMC::TransmissionRequest m_original_request;
      //! Message ttl
      fp64_t m_ttl;
      //! Fragments.
      Network::Fragments* m_fragments;
      //! Fragments expiration timer.
      Time::Counter<uint32_t> m_expiration_timer;
      //! Fragments transmission states.
      std::vector<uint8_t> m_transmission_states;
      //! Transmission timed out (deadline reached)
      bool m_transmission_timedout;

      //! Create fragments for a given message.
      Network::Fragments*
      createFragments(const IMC::Message* msg, const uint32_t max_payload_size)
      {
        if (max_payload_size == 0.0)
          return nullptr;

        if (!needsFragmentation(msg, max_payload_size))
          return nullptr;

        Network::Fragments* frags = new Network::Fragments(const_cast<IMC::Message*>(msg), max_payload_size);

        return frags;
      }

      std::unordered_set<int>
      getRetransmissionIds(const std::string& request)
      {
        if (request.empty())
          return {};

        auto frag_list = request;
        auto negation = frag_list.front() == '!';
        if (negation)
          frag_list.erase(0, 1);

        std::vector<int> frag_ids;
        Utils::String::split(frag_list, ",", frag_ids);

        if (!negation)
          return std::unordered_set<int>(frag_ids.begin(), frag_ids.end());

        std::vector<int> temp(m_fragments->getNumberOfFragments()); 
        std::iota(temp.begin(), temp.end(), 0);
        std::unordered_set<int> result(temp.begin(), temp.end());
        for (const auto& id : frag_ids)
          result.erase(id);

        return result;
      }
    };
  }
}

#endif