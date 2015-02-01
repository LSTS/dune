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

#ifndef TRANSPORTS_IRIDIUM_SBD_SESSION_RESULT_HPP_INCLUDED_
#define TRANSPORTS_IRIDIUM_SBD_SESSION_RESULT_HPP_INCLUDED_

// ISO C++ 98 headers.
#include <cstdio>

// DUNE headers.
#include <DUNE/DUNE.hpp>

// Local headers.
#include "Exceptions.hpp"

namespace Transports
{
  namespace IridiumSBD
  {
    //! This class interprets and represents the result of an SBD
    //! Session.
    class SessionResult
    {
    public:
      //! Constructor.
      SessionResult(void):
        m_mo_status(0),
        m_mo_msn(0),
        m_mt_status(0),
        m_mt_msn(0),
        m_mt_length(0),
        m_mt_queued(0)
      { }

      //! Parse the response of the +SBDIX command.
      //! @param[in] str +SBDIX response.
      //! @throw InvalidFormat if response has invalid format.
      void
      parse(const std::string& str)
      {
        int rv = std::sscanf(str.c_str(),
                             "+SBDIX:%u,%u,%u,%u,%u,%u",
                             &m_mo_status,
                             &m_mo_msn,
                             &m_mt_status,
                             &m_mt_msn,
                             &m_mt_length,
                             &m_mt_queued);
        if (rv != 6)
          throw DUNE::Hardware::InvalidFormat(str);
      }

      //! Test if the MO status denotes that the MO SBD message, if any,
      //! was transferred successfully.
      //! @return true if the MO transaction was successful, false
      //! otherwise.
      bool
      isSuccessMO(void) const
      {
        return (m_mo_status <= 4);
      }

      //! Test if the MT status denotes that a mailbox check was
      //! performed or an MT SBD message was received.
      //! @return true if the MT transaction was successful, false
      //! otherwise.
      bool
      isSuccessMT(void) const
      {
        return (m_mo_status < 4)
        && (m_mo_status != 1)
        && (m_mt_status < 2);
      }

      //! Retrieve the MO status code.
      //! @return MO status code.
      unsigned
      getStatusMO(void) const
      {
        return m_mo_status;
      }

      //! Retrieve the MT status code.
      //! @return MT status code.
      unsigned
      getStatusMT(void) const
      {
        return m_mt_status;
      }

      //! Retrieve the MO SBD message sequence number.
      //! @return MO SBD message sequence number.
      unsigned
      getSequenceMO(void) const
      {
        return m_mo_msn;
      }

      //! Retrieve the MT SBD message sequence number.
      //! @return MT SBD message sequence number.
      unsigned
      getSequenceMT(void) const
      {
        return m_mt_msn;
      }

      //! Retrieve the length in bytes of the MT SBD message received
      //! from the GSS or zero if no message was received.
      //! @return length of the MT SBD message.
      unsigned
      getLengthMT(void) const
      {
        return m_mt_length;
      }

      //! Retrieve the count of MT SBD messages waiting at the GSS to
      //! be transferred to the transceiver.
      //! @return count of MT SBD messages.
      unsigned
      getQueuedMT(void) const
      {
        return m_mt_queued;
      }

    private:
      //! MO status.
      unsigned m_mo_status;
      //! MO message sequence number.
      unsigned m_mo_msn;
      //! MT status.
      unsigned m_mt_status;
      //! MT message sequence number.
      unsigned m_mt_msn;
      //! MT SBD message length.
      unsigned m_mt_length;
      //! Count of MT SBD messages queued at the GSS.
      unsigned m_mt_queued;
    };
  }
}

#endif
