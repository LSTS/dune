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
// Author: Kristian Klausen                                                 *
//***************************************************************************
// You can for instance start FlightGear with something like this:
// fgfs --native-fdm=socket,in,10,,39000,udp --fdm=null --aircraft=arducopter
//***************************************************************************

// DUNE headers.
#include <DUNE/DUNE.hpp>

// Local headers.
#include "Helpers.hpp"
#include "net_fdm.hxx"

namespace Transports
{
  namespace FlightGear
  {
    using DUNE_NAMESPACES;

    static const unsigned int FLIGHTGEAR_footer = 0x4c56414d;

    //! %Task arguments.
    struct Arguments
    {
      //! Port for FlightGear connection
      uint16_t udp_port;
      //! Address for SITL simulations
      Address udp_addr;
      //! Port for outgoing control
      uint16_t udp_port_out;
      //! Address for output to FG
      Address udp_addr_out;
      //! Protocol xml file name
      std::string protocol;
      //! Aircraft Name
      std::string aircraft;
      //! If input stuff is binary
      bool create_rc_values;

      //TODO: Add initial position support
    };

    struct Task : public DUNE::Tasks::Task
    {
      //! Task arguments.
      Arguments m_args;

      //! UDP sockets and parameters
      UDPSocket* m_udp_sock;
      Address m_udp_addr;
      uint16_t m_udp_port;

      //! UDP output socket
      UDPSocket* m_udp_sock_out;
      Address m_udp_addr_out;
      uint16_t m_udp_port_out;

      //! Buffer for incomming data
      uint8_t m_buf[1024];

      //! Previous received acceleration data
      IMC::Acceleration m_acc;

      //! True if we should generate ardupilot pwm codes
      bool m_create_rc_values;

      //! Constructor.
      //! @param[in] name task name.
      //! @param[in] ctx context.
      Task(const std::string& name, Tasks::Context& ctx):
        DUNE::Tasks::Task(name, ctx)
      {

        param("UDP - Port", m_args.udp_port)
        .defaultValue("49000")
        .description("Port for connection to FlightGear");

        param("UDP - Address", m_args.udp_addr)
        .defaultValue("127.0.0.1")
        .description("Address for connection to FlightGear");

        param("UDP Out - Port", m_args.udp_port_out)
        .defaultValue("39000")
        .description("Port for sending data back to FlightGear");

        param("UDP Out - Address", m_args.udp_addr_out)
        .defaultValue("127.0.0.1")
        .description("Address for outgoing comm. to FlightGear");

        param("Create RC Commands", m_args.create_rc_values)
        .defaultValue("False")
        .description("True if this task should dispatch ArdupilotPwm messages.");

        // Should perhaps add our own input channel to this...

        bind<IMC::SimulatedState>(this);
        bind<IMC::Acceleration>(this);

        // Set OK status
        setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_ACTIVE);
      }

      //! Acquire resources.
      void
      onResourceAcquisition(void)
      {
        m_udp_addr = m_args.udp_addr;
        m_udp_port = m_args.udp_port;

        m_udp_addr_out = m_args.udp_addr_out;
        m_udp_port_out = m_args.udp_port_out;
        openConnection();

        m_create_rc_values = m_args.create_rc_values;
      }

      void
      openConnection(void)
      {
        try
        {
          m_udp_sock = new UDPSocket;

          m_udp_sock->bind(m_udp_port, m_udp_addr, false);

          m_udp_sock_out = new UDPSocket;
          // Do not bind outgoing socket.

          inf(DTR("UDP sockets for FlightGear setup."));
        }
        catch (...)
        {

          Memory::clear(m_udp_sock);
          Memory::clear(m_udp_sock_out);

          war(DTR("Connection failed, retrying..."));
          setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_COM_ERROR);
        }
      }

      //! Initialize resources.
      void
      onResourceInitialization(void)
      {
        // Could be an idea to start flightgear here.
        // But for now, rely on an external shell to start.
      }

      //! Release resources.
      void
      onResourceRelease(void)
      {
        // Clear up the socket
        Memory::clear(m_udp_sock);
        Memory::clear(m_udp_sock_out);
      }

      int
      receiveData(uint8_t* buf, size_t blen)
      {
        if (m_udp_sock)
        {
          try
          {
            return m_udp_sock->read(buf, blen);
          }
          catch (...)
          {
            war(DTR("Connection lost, retrying..."));
            Memory::clear(m_udp_sock);
            Memory::clear(m_udp_sock_out);
            openConnection();
            return 0;
          }
        }
        return 0;
      }

      //! Main data-handle for flightgear
      void
      handleFlightGearData(void)
      {
        while (poll(0.01))
        {
          int n = receiveData(m_buf, sizeof(m_buf));
          if (n < 0)
          {
            debug("Receive error");
            break;
          }
          if (n == sizeof(FGNetCtrls))
          {
            FGNetCtrls* fg_ctrls = (FGNetCtrls*)m_buf;
            convertFromNetworkEndian(fg_ctrls);
            spew("Got native flightgear controls. Elevator: %f", fg_ctrls->elevator);
            // TODO: Do something useful with this.

            if (m_create_rc_values)
            {
              inf("Ailron: %f, Flaps: %f, Elevator: %f, Throttle: %f ", fg_ctrls->aileron, fg_ctrls->flaps, fg_ctrls->elevator, fg_ctrls->throttle[0]);

              IMC::PWM pwm[4];

              // -1 should be 1000, +1 should be 2000
              pwm[0].duty_cycle = 1000.0 + 1000.0 * (fg_ctrls->aileron + 1.0) / 2.0;
              pwm[1].duty_cycle = 1000.0 + 1000.0 * (fg_ctrls->elevator + 1.0) / 2.0;
              pwm[2].duty_cycle = 1000.0 + 1000.0 * (fg_ctrls->throttle[0]) / 2.0;
              pwm[3].duty_cycle = 1000.0 + 1000.0 * (fg_ctrls->rudder + 1.0) / 2.0;

              for (int i = 0; i < 4; i++)
              {
                pwm[i].id = i + 1;
                pwm[i].period = 20000;
                dispatch(pwm[i]);
              }
            }
          }
          else if (n == sizeof(FGNetFDM))
          {
            FGNetFDM* fg_native = (FGNetFDM*)m_buf;
            convertFromNetworkEndian(fg_native);
            spew("Got native flightgear FDM packet. ");
          }
        }
      }

      void
      consume(const IMC::Acceleration* acc)
      {
        // Just update member
        m_acc = *acc;
      }

      void
      consume(const IMC::SimulatedState* simstate)
      {
        trace("Vizualiser got new SimulatedState data.");

        // Simulation is done in NED. Calculate to geodetic coordinates.
        fp64_t rcv_lat = simstate->lat;
        fp64_t rcv_lon = simstate->lon;
        fp64_t rcv_hei = simstate->height;

        WGS84::displace(simstate->x, simstate->y, simstate->z,
                        &rcv_lat, &rcv_lon, &rcv_hei);

        IMC::SimulatedState sim = *simstate;

        sim.lat = rcv_lat;
        sim.lon = rcv_lon;
        sim.height = rcv_hei;

        // Prepare for transmission
        FGNetFDM net;
        convertFromSimstateToFGNetHost(&sim, &m_acc, &net);
        convertToNetworkEndian(&net);

        if (m_udp_sock_out != NULL)
        {
          try
          {
            m_udp_sock_out->write((uint8_t*)&net, sizeof(FGNetFDM), m_udp_addr_out, m_udp_port_out);
          }
          catch (NetworkError& error)
          {
            war(DTR("Failed to send: %s"), error.what());
          }
        }
      }

      //! Main loop.
      void
      onMain(void)
      {
        while (!stopping())
        {
          // Handle data
          if (m_udp_sock)
          {
            handleFlightGearData();
          }
          else
          {
            Time::Delay::wait(0.5);
            openConnection();
          }

          // Handle IMC messages from bus
          consumeMessages();
        }
      }

      bool
      poll(double timeout)
      {
        if (m_udp_sock != NULL)
          return Poll::poll(*m_udp_sock, timeout);

        return false;
      }
    };
  }
}

DUNE_TASK
