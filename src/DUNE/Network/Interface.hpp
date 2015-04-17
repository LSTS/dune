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
