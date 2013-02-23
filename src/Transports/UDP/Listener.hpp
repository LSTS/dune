//***************************************************************************
// Copyright (C) 2007-2013 Laboratório de Sistemas e Tecnologia Subaquática *
// Departamento de Engenharia Electrotécnica e de Computadores              *
// Rua Dr. Roberto Frias, 4200-465 Porto, Portugal                          *
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
        IOMultiplexing iom;
        uint8_t* bfr = new uint8_t[c_bfr_size];
        double poll_tout = c_poll_tout / 1000.0;

        m_sock.addToPoll(iom);

        while (!isStopping())
        {
          try
          {
            if (!iom.poll(poll_tout))
              continue;

            uint16_t rv = m_sock.read((char*)bfr, c_bfr_size, &addr);
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
          catch (...)
          { }
        }

        delete [] bfr;
      }
    };
  }
}

#endif
