//***************************************************************************
// Copyright 2017 OceanScan - Marine Systems & Technology, Lda.             *
//***************************************************************************
// This file is subject to the terms and conditions defined in file         *
// 'LICENCE.md', which is part of this source code package.                 *
//***************************************************************************
// Author: Ricardo Martins                                                  *
//***************************************************************************

#ifndef DUNE_NETWORK_NODE_MAP_HPP_INCLUDED_
#define DUNE_NETWORK_NODE_MAP_HPP_INCLUDED_

// ISO C++ 98 headers.
#include <map>
#include <string>

// DUNE headers.
#include <DUNE/Parsers/Config.hpp>

namespace DUNE
{
  namespace Network
  {
    //! Utility class that enables mapping node names to addresses and
    //! vice versa.
    template <typename T>
    class NodeMap
    {
    public:
      //! Initialize node map from configuration section.
      //!
      //! @param[in] config config parser instance.
      //! @param[in] section config section name.
      void
      readConfigSection(Parsers::Config& config, const std::string& section)
      {
        clear();

        std::vector<std::string> addrs = config.options(section);
        for (unsigned i = 0; i < addrs.size(); ++i)
        {
          T addr;
          config.get(section, addrs[i], "", addr);
          add(addrs[i], addr);
        }
      }

      //! Add a node to the map.
      //!
      //! @param[in] name canonical node name.
      //! @param[in] address node address.
      void
      add(const std::string& name, const T& address)
      {
        m_node_names[name] = address;
        m_node_addresses[address] = name;
      }

      //! Remove all elements from the map.
      void
      clear()
      {
        m_node_names.clear();
        m_node_addresses.clear();
      }

      //! Lookup a node's address given its name.
      //!
      //! @param[in] name canonical node name.
      //! @param[out] address node address.
      //!
      //! @return true if the canonical node name has a corresponding
      //! address, false otherwise.
      bool
      lookupAddress(const std::string& name, T& address) const
      {
        typename std::map<std::string, T>::const_iterator itr = m_node_names.find(name);
        if (itr == m_node_names.end())
          return false;

        address = itr->second;
        return true;
      }

      //! Lookup a node's name given its address.
      //!
      //! @param[in] address node address.
      //! @param[out] name canonical node name.
      //!
      //! @return true if the node address has a corresponding
      //! canonical name, false otherwise.
      bool
      lookupName(const T& address, std::string& name) const
      {
        typename std::map<T, std::string>::const_iterator itr = m_node_addresses.find(address);
        if (itr == m_node_addresses.end())
          return false;

        name = itr->second;
        return true;
      }

    private:
      //! Map node names to addresses.
      std::map<std::string, T> m_node_names;
      //! Map node addresses to names.
      std::map<T, std::string> m_node_addresses;
    };
  }
}

#endif
