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
//***************************************************************************

#ifndef TRANSPORTS_IRIDIUM_SBD_TX_REQUEST_HPP_INCLUDED_
#define TRANSPORTS_IRIDIUM_SBD_TX_REQUEST_HPP_INCLUDED_

// DUNE headers.
#include <DUNE/DUNE.hpp>

namespace Transports
{
  namespace IridiumSBD
  {
    class TxRequest
    {
    public:
      //! Create a transmit request object.
      //! @param[in] src_id originator IMC identifier.
      //! @param[in] req_id request identifier.
      //! @param[in] data to transmit.
      TxRequest(uint16_t src_id, uint16_t req_id, const std::vector<char>& data):
        m_src_id(src_id),
        m_req_id(req_id)
      {
        m_data.push_back(m_src_id >> 8);
        m_data.push_back(m_src_id & 0xff);
        m_data.insert(m_data.end(), data.begin(), data.end());
      }

      //! Retrieve a key that uniquely identifies the pair <source id,
      //! request id>.
      //! @return request key.
      uint32_t
      getKey(void) const
      {
        return m_src_id << 16 | m_req_id;
      }

      //! Retrieve request originator identifier.
      //! @return IMC identifier.
      uint16_t
      getSource(void) const
      {
        return m_src_id;
      }

      //! Retrieve request identifier.
      //! @return request identifier.
      uint16_t
      getId(void) const
      {
        return m_req_id;
      }

      //! Retrieve data.
      //! @return data.
      const std::vector<uint8_t>&
      getData(void) const
      {
        return m_data;
      }

    private:
      //! Requester IMC system identifier.
      uint16_t m_src_id;
      //! Request identifier.
      uint16_t m_req_id;
      //! Data to be transmitted.
      std::vector<uint8_t> m_data;
    };
  }
}

#endif
