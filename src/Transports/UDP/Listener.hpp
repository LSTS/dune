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

#ifndef TRANSPORTS_UDP_LISTENER_HPP_INCLUDED_
#define TRANSPORTS_UDP_LISTENER_HPP_INCLUDED_

// ISO C++ 98 headers.
#include <map>
#include <vector>

// DUNE headers.
#include <DUNE/DUNE.hpp>

// Local headers.
#include "ContactTable.hpp"
#include "LimitedComms.hpp"

namespace Transports
{
  namespace UDP
  {
    using DUNE_NAMESPACES;

    class Listener: public Concurrency::Thread
    {
    public:
      Listener(Tasks::Task& task, UDPSocket& sock, LimitedComms* lcomms,
               float contact_timeout, bool trace = false):
        m_task(task),
        m_sock(sock),
        m_trace(trace),
        m_contacts(contact_timeout),
        m_lcomms(lcomms)
      {  }

      void
      getContacts(std::vector<Contact>& list)
      {
        m_contacts.getContacts(list);
      }

      void
      lockContacts(void)
      {
        m_contacts_lock.lockRead();
      }

      void
      unlockContacts(void)
      {
        m_contacts_lock.unlock();
      }

    private:
      // Buffer capacity.
      static const int c_bfr_size = 65535;
      // Poll timeout in milliseconds.
      static const int c_poll_tout = 1000;
      // Parent task.
      Tasks::Task& m_task;
      // Reference to socket used for sending data.
      UDPSocket& m_sock;
      // True to print incoming messages.
      bool m_trace;
      // Table of contacts.
      ContactTable m_contacts;
      // Lock to serialize access to m_contacts.
      RWLock m_contacts_lock;
      // LimitedComms object
      LimitedComms* m_lcomms;

      void
      run(void)
      {
        Address addr;
        uint8_t* bfr = new uint8_t[c_bfr_size];
        double poll_tout = c_poll_tout / 1000.0;

        while (!isStopping())
        {
          try
          {
            if (!Poll::poll(m_sock, poll_tout))
              continue;

            uint16_t rv = m_sock.read(bfr, c_bfr_size, &addr);
            IMC::Message* msg = IMC::Packet::deserialize(bfr, rv);

            if (m_lcomms->isActive())
            {
              if (msg->getId() == DUNE_IMC_ANNOUNCE)
              {
                m_lcomms->setAnnounce(static_cast<IMC::Announce*>(msg));
              }

              if (!m_lcomms->isNodeWithinRange(msg->getSource(), msg->getId()))
              {
                delete msg;
                continue;
              }
            }

            m_contacts_lock.lockWrite();
            m_contacts.update(msg->getSource(), addr);
            m_contacts_lock.unlock();

            m_task.dispatch(msg, DF_KEEP_TIME | DF_KEEP_SRC_EID);

            if (m_trace)
              msg->toText(std::cerr);

            delete msg;
          }
          catch (std::exception & e)
          {
            m_task.debug("error while unpacking message: %s",e.what());
          }
        }

        delete [] bfr;
      }
    };
  }
}

#endif
