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

#include <DUNE/DUNE.hpp>

using DUNE_NAMESPACES;

namespace Transports
{
  namespace IridiumOperation
  {

    class PersistentMessage
    {
    public:
      //! Constructor.
      //! @param[in] msg Message to be sent.
      explicit PersistentMessage(const IMC::Message* msg):
        m_msg(msg->clone()),
        m_retries(0)
      { }

      ~PersistentMessage(void)
      {
        delete m_msg;
      }

      //! Check if message should be resent.
      //! @return message to resend, nullptr if retry limit was reached.
      const IMC::Message*
      onFailure(void)
      {
        if (m_retries >= c_max_retries)
          return nullptr;

        ++m_retries;
        return m_msg;
      }

    private:
      //! Copy Constructor.
      PersistentMessage(const PersistentMessage& other) = delete;
      //! Assignment Operator.
      PersistentMessage&
      operator=(const PersistentMessage& other) = delete;

      //! Maximum number of retries before giving up.
      static const unsigned c_max_retries = 3;
      //! Original Message.
      const IMC::Message* m_msg;
      //! Number of retries performed.
      unsigned m_retries;
    };
  }
}
