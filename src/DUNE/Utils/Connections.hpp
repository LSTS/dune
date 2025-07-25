//***************************************************************************
// Copyright 2013-2023 EvoLogics GmbH                                       *
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
// https://www.lsts.pt/dune/licence.                                        *
//***************************************************************************
// Author: Ievgenii Glushko                                                 *
//***************************************************************************

#ifndef DUNE_UTILS_CONNECTIONS_HPP_INCLUDED_
#define DUNE_UTILS_CONNECTIONS_HPP_INCLUDED_

#include <string>

#include <DUNE/IO.hpp>
#include <DUNE/Utils/SmartPointers.hpp>

namespace DUNE
{
  namespace Utils
  {
    namespace Connections
    {
      //! Connection Types.
      enum ConnectionType
      {
        CONNECTION_UNKNOWN,
        CONNECTION_SERIAL,
        CONNECTION_UDP,
        CONNECTION_UDP_LISTEN,
        CONNECTION_TCP,
        CONNECTION_TCP_LISTEN,
        CONNECTION_TCP_CLIENT
      };

      //! Breaks down a connection string of the following format:
      //! scheme://path:numeral:[flag]
      //!
      //! If the connection specification is supported, type variable will return
      //! the corresponding value, CONNECTION_UNKNOWN otherwise.
      //!
      //! @throws invalid_argument if connection specification is malformed.
      //!
      //! @param[in] uri connection specification string.
      //! @param[out] type enum connection type.
      //! @param[out] scheme string.
      //! @param[out] path string.
      //! @param[out] numeral baudrate or port number.
      //! @param[out] flag character (e.g. 'l').
      void
      parseURI(const std::string& uri, ConnectionType& type,
          std::string& scheme, std::string& path, unsigned& numeral, char& flag);

      //! Opens serial, TCP or UDP connection depending on the specification string.
      //!
      //! The string must have one of the following formats:
      //!
      //! serial://<device>:<baud_rate> - serial port
      //! tcp://<address>:<port>[:l] - TCP client or server connection
      //! udp://<address>:<port>[:l] - UDP client or server connection
      //!
      //! UDP/TCP connection specification can contain an optional 'l' flag
      //! which indicates that this connection is going to listen (server).
      //!
      //! If opening connection is not possible, propagates the corresponding
      //! exceptions from the called functions.
      //
      //! Note that TCP server connection requires additional logic on upper level.
      //! It is assumed that in that case the result of type_ret will be checked.
      //! If pointer type_ret is not provided, an attempt to open TCP server
      //! connection will fail with an invalid_argument exception.
      //!
      //! @throws invalid_argument if connection specification is malformed.
      //!
      //! @param[in] spec connection specification string.
      //! @param[out] type_ret pointer where connection type will be returned.
      //!
      //! @return pointer to IO::Handle if successfull, 0 otherwise.
      DUNE::IO::Handle*
      openConnection(const std::string& spec, ConnectionType* type_ret = nullptr);

      //! Opens serial, TCP or UDP connection of certain type with path and numeral.
      //!
      //! If opening connection is not possible, propagates the corresponding
      //! exceptions from the called functions.
      //!
      //! @throws invalid_argument if connection type is unknown.
      //!
      //! @param[in] type enum connection type.
      //! @param[in] path string.
      //! @param[in] numeral baudrate or port number.
      DUNE::IO::Handle*
      openConnection(const ConnectionType& type, const std::string& path, const unsigned& numeral);
    }
  }
}

#endif
