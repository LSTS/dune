//***************************************************************************
// Copyright (C) 2007-2013 Laboratório de Sistemas e Tecnologia Subaquática *
// Departamento de Engenharia Electrotécnica e de Computadores              *
// Rua Dr. Roberto Frias, 4200-465 Porto, Portugal                          *
//***************************************************************************
// Author: Ricardo Martins                                                  *
//***************************************************************************
// $Id:: Interface.cpp 12667 2013-01-22 02:44:42Z rasm                    $:*
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
