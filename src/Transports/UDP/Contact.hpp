//***************************************************************************
// Copyright (C) 2007-2013 Laboratório de Sistemas e Tecnologia Subaquática *
// Departamento de Engenharia Electrotécnica e de Computadores              *
// Rua Dr. Roberto Frias, 4200-465 Porto, Portugal                          *
//***************************************************************************
// Author: Ricardo Martins                                                  *
//***************************************************************************

#ifndef TRANSPORTS_UDP_CONTACT_HPP_INCLUDED_
#define TRANSPORTS_UDP_CONTACT_HPP_INCLUDED_

// DUNE headers.
#include <DUNE/DUNE.hpp>

namespace Transports
{
  namespace UDP
  {
    using DUNE_NAMESPACES;

    class Contact
    {
    public:
      Contact(unsigned id, const Address& addr):
        m_id(id),
        m_addr(addr)
      { }

      void
      setTimeout(float tout)
      {
        m_counter.setTop(tout);
      }

      void
      update(void)
      {
        m_counter.reset();
      }

      unsigned
      getId(void) const
      {
        return m_id;
      }

      const Address&
      getAddress(void) const
      {
        return m_addr;
      }

      bool
      isInactive(void)
      {
        return m_counter.overflow();
      }

      bool
      isActive(void)
      {
        return !isInactive();
      }

    private:
      // Node id.
      unsigned m_id;
      // Node address.
      Address m_addr;
      // Counter to check if node is no longer reachable.
      Time::Counter<float> m_counter;
    };
  }
}

#endif
