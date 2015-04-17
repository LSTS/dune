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

// ISO C++ 98 headers.
#include <cstdlib>
#include <cstdio>

// DUNE headers.
#include <DUNE/Network/Interface.hpp>

#if defined(DUNE_SYS_HAS_SYS_TYPES_H)
#  include <sys/types.h>
#endif

#if defined(DUNE_SYS_HAS_SYS_IOCTL_H)
#  include <sys/ioctl.h>
#endif

#if defined(DUNE_SYS_HAS_SYS_SOCKET_H)
#  include <sys/socket.h>
#endif

#if defined(DUNE_SYS_HAS_NET_IF_H)
#  include <net/if.h>
#endif

#if defined(DUNE_SYS_HAS_IFADDRS_H)
#  include <ifaddrs.h>
#endif

#if defined(DUNE_SYS_HAS_WINDOWS_H)
#  include <windows.h>
#endif

#if defined(DUNE_SYS_HAS_WINSOCK2_H)
#  include <winsock2.h>
#endif

#if defined(DUNE_SYS_HAS_WS2TCPIP_H)
#  include <ws2tcpip.h>
#endif

#if defined(DUNE_SYS_HAS_IPHLPAPI_H)
#  include <iphlpapi.h>
#endif

namespace DUNE
{
  namespace Network
  {
    Interface::Interface(void):
      m_features(0)
    { }

    std::vector<Interface>
    Interface::get(void)
    {
      std::vector<Interface> itfs;

#if defined(DUNE_SYS_HAS_IFADDRS_H)
      struct ifaddrs* ifa;
      getifaddrs(&ifa);
      struct ifaddrs* next = ifa;

      do
      {
        // No address.
        if (next->ifa_addr == 0)
          continue;

        // Not IPv4.
        if (next->ifa_addr->sa_family != AF_INET)
          continue;

        // Not active.
        if ((next->ifa_flags & IFF_UP) != IFF_UP)
          continue;

        Interface itf;
        itf.m_name = next->ifa_name;
        itf.m_addr = next->ifa_addr;
        itf.m_bcast = next->ifa_broadaddr;
        if (next->ifa_flags & IFF_MULTICAST)
          itf.m_features |= FeatureMulticast;
        if (next->ifa_flags & IFF_BROADCAST)
          itf.m_features |= FeatureBroadcast;
        itfs.push_back(itf);
      }
      while ((next = next->ifa_next));

      freeifaddrs(ifa);

      // Microsoft Windows implementation.
#elif defined(DUNE_SYS_HAS_IPHLPAPI_H)
      ULONG adps_len = 16 * 1024;
      PIP_ADAPTER_ADDRESSES adps = (PIP_ADAPTER_ADDRESSES) std::malloc(adps_len);

      int rv = GetAdaptersAddresses(AF_INET, GAA_FLAG_INCLUDE_PREFIX, 0, adps, &adps_len);

      if (rv != ERROR_SUCCESS)
        return itfs;

      PIP_ADAPTER_ADDRESSES padp = adps;

      while (padp)
      {
        if (padp->OperStatus == IfOperStatusUp)
        {
          if (padp->FirstUnicastAddress)
          {
            Interface itf;
            itf.m_name = padp->AdapterName;
            itf.m_addr = padp->FirstUnicastAddress->Address.lpSockaddr;
            itfs.push_back(itf);
          }
        }

        padp = padp->Next;
      }

      free(adps);
#endif

      return itfs;
    }

    bool
    Interface::hasFeature(Features feature)
    {
      return (m_features & feature) != 0;
    }
  }
}
