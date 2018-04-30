//***************************************************************************
// Copyright 2007-2017 Universidade do Porto - Faculdade de Engenharia      *
// Laboratório de Sistemas e Tecnologia Subaquática (LSTS)                  *
//***************************************************************************
// This file is part of DUNE: Unified Navigation Environment.               *
//                                                                          *
// Commercial Licence Usage                                                 *
// Licencees holding valid commercial DUNE licences may use this file in    *
// accordance with the commercial licence agreement provided with the       *
// Software or, alternatively, in accordance with the terms contained in a  *
// written agreement between you and Faculdade de Engenharia da             *
// Universidade do Porto. For licensing terms, conditions, and further      *
// information contact lsts@fe.up.pt.                                       *
//                                                                          *
// Modified European Union Public Licence - EUPL v.1.1 Usage                *
// Alternatively, this file may be used under the terms of the Modified     *
// EUPL, Version 1.1 only (the "Licence"), appearing in the file LICENCE.md *
// included in the packaging of this file. You may not use this work        *
// except in compliance with the Licence. Unless required by applicable     *
// law or agreed to in writing, software distributed under the Licence is   *
// distributed on an "AS IS" basis, WITHOUT WARRANTIES OR CONDITIONS OF     *
// ANY KIND, either express or implied. See the Licence for the specific    *
// language governing permissions and limitations at                        *
// https://github.com/LSTS/dune/blob/master/LICENCE.md and                  *
// http://ec.europa.eu/idabc/eupl.html.                                     *
//***************************************************************************
// Author: José Pinto                                                       *
//***************************************************************************

// DUNE headers.
#include <DUNE/DUNE.hpp>
#include <DUNE/Network.hpp>

using DUNE_NAMESPACES;

namespace Simulators
{
  //! This task simulates Iridium communications
  //! by posting messages directly to Ripples
  namespace Iridium
  {
    //! %Task arguments.
    struct Arguments
    {
      //! Server hostname
      std::string server_address;
      //! Server port
      int server_port;
      //! Server path
      std::string server_path;
    };

    //!
    struct Task: public Tasks::Periodic
    {
      //! Task arguments.
      Arguments m_args;

      Task(const std::string& name, Tasks::Context& ctx):
        Tasks::Periodic(name, ctx)
      {
        // Retrieve configuration values.
        param("Server Address", m_args.server_address)
          .defaultValue("127.0.0.1");

        param("Server Port", m_args.server_port)
          .defaultValue("8888");

        param("Server Path", m_args.server_path)
          .defaultValue("/api/v1/irsim");

        // Register consumers.
        bind<IMC::IridiumMsgTx>(this);
      }


      //! Acquire resources.
      void
      onResourceAcquisition(void)
      {
        setEntityState(EntityState::ESTA_NORMAL, Status::CODE_ACTIVE);
      }

      //!
      void
      consume(const IMC::IridiumMsgTx* msg)
      {

        IMC::IridiumTxStatus status;
        status.req_id = msg->req_id;
        status.setDestination(msg->getSource());
        status.setDestinationEntity(msg->getSourceEntity());

        std::stringstream ss;
        ss << "POST " << m_args.server_path << " HTTP/1.0\r\n";
        ss << "Content-Type: application/hub\r\n";
        ss << "Content-Length: "<< msg->data.size()*2 << "\r\n\r\n";

        ss << std::hex;
        std::vector<char>::const_iterator it = msg->data.begin();
        for(; it != msg->data.end(); it++)
          ss << *it;
        ss << "\r\n";
        inf("POSTING: %s", ss.str().c_str());
        try {
          TCPSocket sock;
          Network::Address addr(m_args.server_address.c_str());
          sock.connect(addr, m_args.server_port);
          std::string data = ss.str();
          sock.write(data.c_str(), data.length());
          sock.flushOutput();

          status.status = IMC::IridiumTxStatus::TXSTATUS_OK;
          status.text = "Transmitted to Ripples (Simulation)";
          dispatch(status);
        }
        catch (Exception &e) {
          err("Error while posting: %s", e.what());
          status.status = IMC::IridiumTxStatus::TXSTATUS_ERROR;
          status.text = e.what();
          dispatch(status);
        }
      }

      //! @publish DUNE::IMC::IridiumMsgRx
      void
      task(void)
      {
      }
    };
  }
}

DUNE_TASK
