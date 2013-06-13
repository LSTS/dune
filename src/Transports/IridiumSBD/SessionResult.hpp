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
    class SessionResult
    {
    public:
      SessionResult(void):
        m_mo_status(0),
        m_mo_msn(0),
        m_mt_status(0),
        m_mt_msn(0),
        m_mt_length(0),
        m_mt_queued(0)
      { }

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
          throw InvalidFormat(str);
      }

      bool
      isSuccessMO(void) const
      {
        return (m_mo_status <= 4);
      }

      bool
      isSuccessMT(void) const
      {
        return (m_mo_status < 4) && (m_mo_status != 1);
      }

      unsigned
      getStatusMO(void) const
      {
        return m_mo_status;
      }

      unsigned
      getStatusMT(void) const
      {
        return m_mt_status;
      }

      unsigned
      getSequenceMO(void) const
      {
        return m_mo_msn;
      }

      unsigned
      getSequenceMT(void) const
      {
        return m_mt_msn;
      }

      unsigned
      getLengthMT(void) const
      {
        return m_mt_length;
      }

    private:
      unsigned m_mo_status;
      unsigned m_mo_msn;
      unsigned m_mt_status;
      unsigned m_mt_msn;
      unsigned m_mt_length;
      unsigned m_mt_queued;
    };
  }
}

#endif
