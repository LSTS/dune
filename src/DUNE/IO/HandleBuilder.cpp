//***************************************************************************
// Copyright 2021 OceanScan - Marine Systems & Technology, Lda.             *
//***************************************************************************
// This file is subject to the terms and conditions defined in file         *
// 'LICENCE.md', which is part of this source code package.                 *
//***************************************************************************
// Author: Tiago Sá Marques                                                 *
//***************************************************************************

// DUNE headers.
#include <DUNE/Hardware/SerialPort.hpp>
#include <DUNE/IO/Handle.hpp>
#include <DUNE/IO/HandleBuilder.hpp>
#include <DUNE/Network/TCPSocket.hpp>
#include <DUNE/Network/UDPSocket.hpp>

namespace DUNE::IO
{
  // forward declarations
  IO::Handle* openTCPSocket(const IOConfig&, char*, unsigned);
  IO::Handle* openUART(const IOConfig&, char*, unsigned);
  IO::Handle* openUDPSocket(char*, unsigned);
  

  IO::Handle*
  openFrom(const std::string& url, IOConfig cfg)
  {
    char resource_path[128] = {0};
    unsigned resource_extra = 0;

    if (std::sscanf(url.c_str(), "tcp://%127[^:]:%u", resource_path, &resource_extra) == 2)
      return openTCPSocket(cfg, resource_path, resource_extra);
    else if (std::sscanf(url.c_str(), "udp://%127[^:]:%u", resource_path, &resource_extra) == 2)
      return openUDPSocket(resource_path, resource_extra);
    else if (std::sscanf(url.c_str(), "uart://%127[^:]:%u", resource_path, &resource_extra) == 2)
      return openUART(cfg, resource_path, resource_extra);

    return nullptr;
  }

  //! Helper function to deal with UDP ports
  IO::Handle*
  openUDPSocket(char* resource_path, unsigned resource_extra)
  {
    Network::UDPSocket* sock = new Network::UDPSocket;
    sock->connect(resource_path, resource_extra);
    return sock;
  }

  //! Helper function to deal with TCP ports
  IO::Handle*
  openTCPSocket(const IOConfig& cfg, char* resource_path, unsigned resource_extra)
  {
    Network::TCPSocket* sock = new Network::TCPSocket;

    if (cfg.tcp_rx_timeout.has_value())
      sock->setReceiveTimeout(cfg.tcp_rx_timeout.value());

    if (cfg.tcp_tx_timeout.has_value())
      sock->setSendTimeout(cfg.tcp_tx_timeout.value());

    if (cfg.tcp_no_delay.has_value())
      sock->setNoDelay(cfg.tcp_no_delay.value());

    if (cfg.tcp_keep_alive.has_value())
      sock->setKeepAlive(cfg.tcp_keep_alive.has_value());

    sock->connect(resource_path, resource_extra);
    return sock;
  }

  //! Helper function to deal with UART ports
  IO::Handle*
  openUART(const IOConfig& cfg, char* resource_path, unsigned resource_extra)
  {
    auto port = new Hardware::SerialPort(resource_path, resource_extra);

    // canonical input
    if (cfg.serial_canonical_input.has_value())
      port->setCanonicalInput(cfg.serial_canonical_input.value());

    // canonical input terminator
    if (cfg.serial_canonical_input_terminator.has_value())
      port->setCanonicalInputTerminator(cfg.serial_canonical_input_terminator.value());

    // parity
    if (cfg.serial_parity.has_value())
      port->setParity(cfg.serial_parity.value());

    // stop bits
    if (cfg.serial_stop_bits.has_value())
      port->setStopBits(cfg.serial_stop_bits.value());

    // start bits
    if (cfg.serial_data_bits.has_value())
      port->setDataBits(cfg.serial_data_bits.value());

    // non blocking port
    if (cfg.serial_block.has_value() && cfg.serial_block.value())
      port->setNonBlocking();

    return port;
  }
}