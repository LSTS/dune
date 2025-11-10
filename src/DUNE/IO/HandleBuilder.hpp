//***************************************************************************
// Copyright 2021 OceanScan - Marine Systems & Technology, Lda.             *
//***************************************************************************
// This file is subject to the terms and conditions defined in file         *
// 'LICENCE.md', which is part of this source code package.                 *
//***************************************************************************
// Author: Tiago Sá Marques                                                 *
//***************************************************************************

#ifndef DUNE_IO_URL_HPP_INCLUDED_
#define DUNE_IO_URL_HPP_INCLUDED_

// ISO C++ 98 headers.
#include <optional>
#include <string>

// DUNE headers.
#include <DUNE/IO/Handle.hpp>
#include <DUNE/Hardware/SerialPort.hpp>

namespace DUNE::IO
{
  struct IOConfig
  {
    //! TCP Configuration
    //! Check DUNE/Network/TCPSocket for documentation
    std::optional<double> tcp_rx_timeout;
    std::optional<double> tcp_tx_timeout;
    std::optional<bool> tcp_no_delay;
    std::optional<bool> tcp_keep_alive;

    //! Serial Configuration
    //! Check DUNE/Hardware/SerialPort for documentation
    std::optional<bool> serial_canonical_input;
    std::optional<char> serial_canonical_input_terminator;
    std::optional<Hardware::SerialPort::Parity> serial_parity;
    std::optional<Hardware::SerialPort::StopBits> serial_stop_bits;
    std::optional<Hardware::SerialPort::DataBits> serial_data_bits;
    std::optional<bool> serial_block;
  };

  //! Parse the given URL to obtain a IO handler.\n
  //! A custom struct can be passed with further configuration that
  //! needs to be performed on the port.\n
  //! Only the bare minimum configuration is supported; add more if
  //! needed.
  //! The caller is responsible for managing the returned
  //! pointer.\n\n
  //! Example URLs:\n\n
  //!    uart:///dev/uart/8:19200\n
  //!    tcp://192.168.0.99:3500\n
  //! @param[in] url URL describing the protocol to use
  //! @param[in] cfg Which configuration to apply to the given port.
  //!                Note that if no configuration is passed for a given port type
  //!                then the default configuration is used for each port, e.g.,
  //!                check DUNE/Hardware/SerialPort.cpp to see the defaults

  [[nodiscard]]
  IO::Handle*
  openFrom(const std::string& url, IOConfig cfg = {});
}

#endif
