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

#ifndef TRANSPORTS_IRIDIUM_SBD_TX_REQUEST_HPP_INCLUDED_
#define TRANSPORTS_IRIDIUM_SBD_TX_REQUEST_HPP_INCLUDED_

// DUNE headers.
#include <DUNE/DUNE.hpp>

namespace Transports
{
  namespace IridiumSBD
  {
    //! This class represents an SBD transmission request.
    class TxRequest
    {
    public:
      //! Create a transmission request object.
      //! @param[in] src_adr IMC address of the requester.
      //! @param[in] src_eid entity identifier of the requester.
      //! @param[in] req_id request identifier.
      //! @param[in] ttl time-to-live (s).
      //! @param[in] data to transmit.
      TxRequest(uint16_t src_adr, uint8_t src_eid, uint16_t req_id,
                unsigned ttl, const std::vector<char>& data):
        m_src_adr(src_adr),
        m_src_eid(src_eid),
        m_req_id(req_id),
        m_msn(-1)
      {
        m_expiration = DUNE::Time::Clock::get() + ttl;
        m_data.insert(m_data.end(), data.begin(), data.end());
      }

      //! Retrieve the IMC address of the requester.
      //! @return IMC address.
      uint16_t
      getSource(void) const
      {
        return m_src_adr;
      }

      //! Retrieve the entity identifier of the requester.
      //! @return entity identifier.
      uint8_t
      getSourceEntity(void) const
      {
        return m_src_eid;
      }

      //! Retrieve request identifier.
      //! @return request identifier.
      uint16_t
      getId(void) const
      {
        return m_req_id;
      }

      //! Test if MSN is valid.
      bool
      hasValidMSN(void) const
      {
        return m_msn >= 0;
      }

      //! Retrieve MO message sequence number.
      //! @return message sequence number.
      uint16_t
      getMSN(void) const
      {
        return static_cast<uint16_t>(m_msn);
      }

      //! Retrieve MO message sequence number.
      //! @return message sequence number.
      void
      setMSN(uint16_t msn)
      {
        m_msn = msn;
      }

      void
      invalidateMSN(void)
      {
        m_msn = -1;
      }

      //! Retrieve data.
      //! @return data.
      const std::vector<uint8_t>&
      getData(void) const
      {
        return m_data;
      }

      //! Retrieve expiration time.
      //! @return expiration time (s).
      double
      getExpiration(void) const
      {
        return m_expiration;
      }

      //! Test if request expired.
      //! @return true if request expired, false otherwise.
      bool
      hasExpired(void) const
      {
        return DUNE::Time::Clock::get() > getExpiration();
      }

    private:
      //! Requester IMC address.
      uint16_t m_src_adr;
      //! Requester entity identifier.
      uint8_t m_src_eid;
      //! Request identifier.
      uint16_t m_req_id;
      //! MO message sequence number.
      int m_msn;
      //! Expiration time.
      double m_expiration;
      //! Data to be transmitted.
      std::vector<uint8_t> m_data;
    };
  }
}

#endif
