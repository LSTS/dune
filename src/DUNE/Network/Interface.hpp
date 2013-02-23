//***************************************************************************
// Copyright (C) 2007-2013 Laboratório de Sistemas e Tecnologia Subaquática *
// Departamento de Engenharia Electrotécnica e de Computadores              *
// Rua Dr. Roberto Frias, 4200-465 Porto, Portugal                          *
//***************************************************************************
// Author: Ricardo Martins                                                  *
//***************************************************************************

#ifndef DUNE_NETWORK_INTERFACE_HPP_INCLUDED_
#define DUNE_NETWORK_INTERFACE_HPP_INCLUDED_

// ISO C++ 98 headers.
#include <string>
#include <vector>

// DUNE headers.
#include <DUNE/Config.hpp>
#include <DUNE/Network/Address.hpp>

namespace DUNE
{
  namespace Network
  {
    // Export DLL Symbol.
    class DUNE_DLL_SYM Interface;

    //! Network interface information.
    class Interface
    {
    public:
      enum Features
      {
        FeatureMulticast = 0x01,
        FeatureBroadcast = 0x02
      };

      //! Retrieve list with all active network interfaces.
      //! @return list with all currently active network interfaces.
      static std::vector<Interface>
      get(void);

      //! Constructor.
      Interface(void);

      //! Retrieve interface's name.
      //! @return interface's name.
      const std::string&
      name(void) const
      {
        return m_name;
      }

      //! Test for a given feature.
      //! @param feature feature to test.
      //! @return true if the interface supports the given feature,
      //! false otherwise.
      bool
      hasFeature(Features feature);

      //! Retrieve interface's address.
      //! @return interface's address.
      const Address&
      address(void) const
      {
        return m_addr;
      }

      //! Retrieve interface's broadcast address.
      //! @return interface's broadcast address.
      const Address&
      broadcast(void) const
      {
        return m_bcast;
      }

    private:
      //! Interface name.
      std::string m_name;
      //! IPv4 address.
      Address m_addr;
      //! IPv4 broadcast address.
      Address m_bcast;
      //! Features.
      unsigned m_features;
    };
  }
}

#endif
