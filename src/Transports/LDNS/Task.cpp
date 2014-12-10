//***************************************************************************
// Copyright 2007-2014 Universidade do Porto - Faculdade de Engenharia      *
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
// https://www.lsts.pt/dune/licence.                                        *
//***************************************************************************
// Author: Ricardo Martins                                                  *
//***************************************************************************

// ISO C++ 98 headers.
#include <memory>
#include <cstring>
#include <algorithm>
#include <cstdlib>

// DUNE headers.
#include <DUNE/DUNE.hpp>

namespace Transports
{
  namespace LDNS
  {
    using DUNE_NAMESPACES;

    //! Task arguments.
    struct Arguments
    {
      //!
      std::string server_host;
      //
      unsigned server_port;
      //
      std::string server_path;
      //
      std::string server_pass;
      //! Network interface.
      std::string interface;
      //! Update periodicity.
      double update_period;
    };

    struct Task: public Tasks::Task
    {
      //! Last address.
      Address m_address;
      //! Update Timer.
      Counter<double> m_timer;
      //! Task arguments.
      Arguments m_args;

      Task(const std::string& name, Tasks::Context& ctx):
        Tasks::Task(name, ctx)
      {
        param("Server - Hostname", m_args.server_host)
        .visibility(Tasks::Parameter::VISIBILITY_DEVELOPER)
        .scope(Tasks::Parameter::SCOPE_GLOBAL)
        .defaultValue("www.lsts.pt");

        param("Server - Port", m_args.server_port)
        .visibility(Tasks::Parameter::VISIBILITY_DEVELOPER)
        .scope(Tasks::Parameter::SCOPE_GLOBAL)
        .defaultValue("80");

        param("Server - Path", m_args.server_path)
        .visibility(Tasks::Parameter::VISIBILITY_DEVELOPER)
        .scope(Tasks::Parameter::SCOPE_GLOBAL)
        .defaultValue("/ldns/put.php");

        param("Server - Password", m_args.server_pass)
        .visibility(Tasks::Parameter::VISIBILITY_DEVELOPER)
        .scope(Tasks::Parameter::SCOPE_GLOBAL)
        .defaultValue("");

        param("Network Interface", m_args.interface)
        .visibility(Tasks::Parameter::VISIBILITY_DEVELOPER)
        .scope(Tasks::Parameter::SCOPE_GLOBAL)
        .defaultValue("ppp0")
        .description("Network Interface");

        param("Update Periodicity", m_args.update_period)
        .visibility(Tasks::Parameter::VISIBILITY_DEVELOPER)
        .scope(Tasks::Parameter::SCOPE_GLOBAL)
        .units(Units::Second)
        .defaultValue("60");
      }

      ~Task(void)
      {

      }

      void
      onResourceAcquisition(void)
      {
        setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_ACTIVE);
      }

      void
      onUpdateParameters(void)
      {
        m_timer.setTop(m_args.update_period);
      }

      void
      updateAddress(const Address& address)
      {
        if (address == m_address)
        {
          debug("recorded address did not change");
          return;
        }

        TCPSocket socket;
        socket.connect(Address(m_args.server_host.c_str()), m_args.server_port);

        std::ostringstream os;
        os << "GET " << m_args.server_path
           << "?host=" << getSystemName()
           << "&pass=" << m_args.server_pass
           << "&addr=" << address
           << "\r\n"
           << "Host: " << m_args.server_host << "\r\n"
           << "Connection: close\r\n\r\n";

        std::string request = os.str();

        socket.write(request.c_str(), request.size());

        char bfr[1024];
        socket.readString(bfr, sizeof(bfr));
        if (std::strcmp(bfr, "Recorded") == 0)
        {
          m_address = address;
          debug("address updated");
        }
      }

      void
      update(void)
      {
        std::vector<Interface> interfaces = Interface::get();
        for (size_t i = 0; i < interfaces.size(); ++i)
        {
          if (interfaces[i].name() == m_args.interface)
          {
            updateAddress(interfaces[i].address());
            break;
          }
        }
      }

      void
      onMain(void)
      {
        while (!stopping())
        {
          waitForMessages(1.0);

          if (!m_timer.overflow())
            continue;

          try
          {
            update();
            m_timer.reset();
          }
          catch (std::runtime_error& e)
          {
            err("%s", e.what());
          }
        }
      }
    };
  }
}

DUNE_TASK
