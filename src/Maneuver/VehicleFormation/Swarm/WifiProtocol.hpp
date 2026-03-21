//***************************************************************************
// Copyright 2007-2023 Universidade do Porto - Faculdade de Engenharia      *
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
// Author: Luís Venâncio                                                    *
//***************************************************************************

#ifndef MANEUVER_VEHICLEFORMATION_SWARM_WIFIPROTOCOL_HPP_INCLUDED_
#define MANEUVER_VEHICLEFORMATION_SWARM_WIFIPROTOCOL_HPP_INCLUDED_

#include <DUNE/DUNE.hpp>
#include <DUNE/Utils/String.hpp>
#include <DUNE/Network.hpp>
#include <DUNE/Memory.hpp>

namespace Maneuver
{
  namespace VehicleFormation
  {
    namespace Swarm
    {
      //! Takeoff maneuver
      class WifiProtocol: public CommsProtocol
      {
      public:
        //! Default constructor.
        WifiProtocol(DUNE::Tasks::Task* task, 
                     const DUNE::Network::Address& udp_maddr,
                     const uint16_t udp_port,
                     std::vector<DUNE::Network::Address>& addresses):
          CommsProtocol(task, "WifiProtocol", 0xA3),
          m_udp_maddr(udp_maddr),
          m_udp_port(udp_port),
          m_addresses(addresses)
        { 
          m_sock = new DUNE::Network::UDPSocket();
          m_sock->bind(udp_port, DUNE::Network::Address::Any, false);
        }

        ~WifiProtocol()
        {
          DUNE::Memory::clear(m_sock);
        }

        //! Transmit message over UDP.
        void
        send(const std::string& sys, const std::vector<uint8_t>& data) override
        {
          uint16_t src_id = m_task->getSystemId();
          uint16_t dst_id = DUNE::IMC::AddressResolver::invalid();
          try
          {
            dst_id = m_task->resolveSystemName(sys);
          }
          catch(const std::exception& e)
          {
            err(DUNE::Utils::String::str("Failed to resolve system name '%s': %s",
                                        sys.c_str(), e.what()));
            return;
          }
          DUNE::Algorithms::CRC8 crc(m_poly);
          std::vector<uint8_t> buf;

          // Add sync byte
          buf.push_back(m_sync);
          crc.putByte(m_sync);

          // Add source and destination IDs
          uint8_t id[2];
          std::memcpy(&id[0], &src_id, sizeof(uint16_t));
          buf.push_back(id[0]); crc.putByte(id[0]);
          buf.push_back(id[1]); crc.putByte(id[1]);
          std::memcpy(&id[0], &dst_id, sizeof(uint16_t));
          buf.push_back(id[0]); crc.putByte(id[0]);
          buf.push_back(id[1]); crc.putByte(id[1]);

          // Add data
          for (size_t i = 0; i < data.size(); ++i)
          {
            buf.push_back(data[i]);
            crc.putByte(data[i]);
          }
          buf.push_back(crc.get());

          for (auto addr : m_addresses)
          {
            m_sock->write(&buf[0], buf.size(), addr, m_udp_port);
            spew(DUNE::Utils::String::str("Sending message (to %s): %s",
                                          addr.c_str(),
                                          DUNE::Utils::String::bytesToHex(buf).c_str()));
          }
        }

        //! Check UDP socket for incoming message.
        bool
        checkIncomingData(std::vector<uint8_t>& data)
        {
          DUNE::Network::Address dummy;
          try
          {
            if (DUNE::IO::Poll::poll(*m_sock, 0.01))
            {
              size_t n = m_sock->read(m_buf, c_buf_size, &dummy);
              data.clear();
              data.assign(m_buf, m_buf + n);
              spew(DUNE::Utils::String::str("Received message (from %s): %s",
                                            dummy.c_str(),
                                            DUNE::Utils::String::bytesToHex(data).c_str()));

              return true;
            }
          }
          catch(std::runtime_error& e)
          {
            err(DUNE::Utils::String::str("Read error: %s", e.what()));
          }

          return false;
        }

        uint16_t
        getSource(const std::vector<uint8_t>& data) const
        {
          if (data.size() < 5)
            return DUNE::IMC::AddressResolver::invalid();

          uint16_t src_id = 0;
          memcpy(&src_id, &data[1], sizeof(uint16_t));
          return src_id;
        }

        uint16_t
        getDestination(const std::vector<uint8_t>& data) const
        {
          if (data.size() < 5)
            return DUNE::IMC::AddressResolver::invalid();

          uint16_t dst_id = 0;
          memcpy(&dst_id, &data[3], sizeof(uint16_t));
          return dst_id;
        }

        std::vector<uint8_t>
        getData(const std::vector<uint8_t>& data) const
        {
          if (data.size() < 5)
            return std::vector<uint8_t>();
          return std::vector<uint8_t>(data.begin() + 5, data.end() - 1);
        }

        bool
        validate(const std::vector<uint8_t>& data)
        {
          // Check size
          if (data.size() < 5)
          {
            debug("invalid message size");
            return false;
          }

          // Check sync byte
          if ((uint8_t)data[0] != m_sync)
          {
            debug(DUNE::Utils::String::str("invalid synchronization number: %02X", data[0]));
            return false;
          }

          // Check crc
          DUNE::Algorithms::CRC8 crc(m_poly);
          crc.putArray(&data[0], data.size() - 1);
          if (crc.get() != (data[data.size() - 1]))
          {
            debug("invalid CRC");
            return false;
          }

          // Check source and destination IDs
          uint16_t imc_addr_src = getSource(data);
          // No loopback to self.
          if (imc_addr_src == m_task->getSystemId())
            return false;

          uint16_t imc_addr_dst = getDestination(data);
          std::string sys_dst;
          try
          {
            sys_dst = m_task->resolveSystemId(imc_addr_dst);
          }
          catch (...)
          {
            debug(DUNE::Utils::String::str("unknown destination id: %02X", imc_addr_dst));
            return false;
          }

          return (sys_dst == "broadcast" || imc_addr_dst == m_task->getSystemId());
        }

      private:
        // Buffer size for incoming data.
        static const size_t c_buf_size = 128;
        //! Buffer for incoming data.
        uint8_t m_buf[c_buf_size];
        //! Multicast Address.
        DUNE::Network::Address m_udp_maddr;
        //! UDP port.
        uint16_t m_udp_port;
        //! UDP socket.
        DUNE::Network::UDPSocket* m_sock;
        //! Swarm addresses
        std::vector<DUNE::Network::Address> m_addresses;
      };
    }
  }
}

#endif