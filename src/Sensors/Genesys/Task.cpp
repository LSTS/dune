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
// Author: José Braga                                                       *
//***************************************************************************

// ISO C++ 98 headers.
#include <cstring>
#include <string>

// DUNE headers.
#include <DUNE/DUNE.hpp>

namespace Sensors
{
  //! This task extracts data from the TDK Genesys Programmable DC Power Supplier.
  //!
  //! @author José Braga
  namespace Genesys
  {
    using DUNE_NAMESPACES;

    //! %Task arguments.
    struct Arguments
    {
      //! IPv4 address.
      Address ip;
      //! TCP port.
      unsigned port;
      //! Start gain.
      uint8_t addr;
    };

    //! Address data size.
    static const unsigned c_addr_size = 7;
    //! Request status frame size.
    static const unsigned c_data_size = 5;
    //! Internal read buffer.
    static const unsigned c_bfr_size = 128;

    //! %Task.
    struct Task: public Tasks::Periodic
    {
      //! TCP socket.
      TCPSocket* m_sock;
      //! Input Watchdog.
      Counter<float> m_wdog;
      //! Configuration parameters.
      Arguments m_args;

      //! Constructor.
      Task(const std::string& name, Tasks::Context& ctx):
        Tasks::Periodic(name, ctx),
        m_sock(NULL)
      {
        param("IPv4 Address", m_args.ip)
        .defaultValue("10.0.10.73")
        .description("IP address of the device");

        param("TCP Port", m_args.port)
        .defaultValue("5000")
        .minimumValue("0")
        .maximumValue("65535")
        .description("TCP port");

        param("Device Address", m_args.addr)
        .defaultValue("6")
        .minimumValue("0")
        .maximumValue("30")
        .description("Device address in the network");
      }

      //! Update task parameters.
      void
      onUpdateParameters(void)
      {
        m_wdog.setTop(3 / getFrequency());

        if (isActive())
        {
          if (paramChanged(m_args.ip))
            throw RestartNeeded(DTR("restarting to change IPv4 address"), 1);

          if (paramChanged(m_args.port))
            throw RestartNeeded(DTR("restarting to change TCP port"), 1);

          if (paramChanged(m_args.addr))
            throw RestartNeeded(DTR("restarting to change device address"), 1);
        }
      }

      //! Initialize resources.
      void
      onResourceInitialization(void)
      {
        try
        {
          m_sock = new TCPSocket;
          m_sock->setNoDelay(true);
          m_sock->connect(m_args.ip, m_args.port);

          Delay::wait(1.0);

          setAddress();
        }
        catch (...)
        { }
      }

      //! Release resources.
      void
      onResourceRelease(void)
      {
        Memory::clear(m_sock);
      }

      //! Send node address to establish communication.
      void
      setAddress(void)
      {
        char packet[c_addr_size];
        String::format(packet, c_addr_size, "ADR %u\r", m_args.addr);

        uint8_t size = m_args.addr < 10 ? 6 : 7;
        m_sock->write(packet, size);
      }

      //! Extract data from device.
      void
      getData(void)
      {
        // Request data.
        m_sock->write("STT?\r", c_data_size);

        // Extract data.
        char bfr[c_bfr_size];
        m_sock->read(bfr, c_bfr_size);

        IMC::Voltage volt;
        IMC::Current curr;
        float pv, pc;
        unsigned sr, fr;

        // Interpret data.
        int rv = std::sscanf(bfr, "MV(%f),PV(%f),MC(%f),PC(%f),SR(%02X),FR(%02X)\r",
                             &volt.value, &pv, &curr.value, &pc, &sr, &fr);

        if (rv != 6)
        {
          spew("unable to interpret data");
          return;
        }

        volt.setTimeStamp();
        curr.setTimeStamp(volt.getTimeStamp());

        dispatch(volt, DF_KEEP_TIME);
        dispatch(curr, DF_KEEP_TIME);

        spew("voltage: %f | current: %f", volt.value, curr.value);
        spew("status register: %02X | fault register: %02X", sr, fr);

        m_wdog.reset();
        setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_ACTIVE);
      }

      void
      task(void)
      {
        consumeMessages();

        if (m_sock != NULL)
        {
          try
          {
            getData();
          }
          catch (...)
          {
            throw RestartNeeded(DTR(Status::getString(CODE_COM_ERROR)), 30);
          }
        }

        if (m_wdog.overflow())
        {
          setEntityState(IMC::EntityState::ESTA_ERROR, Status::CODE_COM_ERROR);
          m_wdog.reset();
        }
      }
    };
  }
}

DUNE_TASK
