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

// Task specific headers
#include "net_fdm.hxx"
#include "helpers.hpp"

namespace Visualisers
{
  namespace Flightgear
  {
    using DUNE_NAMESPACES;


    static const unsigned int FLIGHTGEAR_footer = 0x4c56414d;


    //! %Task arguments.
    struct Arguments
    {

      //! Port for FlightGear connection
      uint16_t UDP_port;
      //! Address for SITL simulations
      Address UDP_addr;
      //! Port for outgoing control
      uint16_t UDP_port_out;
      //! Address for output to FG
      Address UDP_addr_out;
      //! Protocol xml file name
      std::string protocol;
      //! Aircraft Name
      std::string aircraft;
      //! If input stuff is binary
      bool is_protocol_binary;

      //TODO: Add initial position support

    };

    struct Task: public DUNE::Tasks::Task
    {

      //! Task arguments.
      Arguments m_args;

      //! UDP sockets and parameters
      UDPSocket* m_UDP_sock;
      Address m_UDP_addr;
      uint16_t m_UDP_port;

      //! UDP output socket
      UDPSocket* m_UDP_sock_out;
      Address m_UDP_addr_out;
      uint16_t m_UDP_port_out;

      //! Buffer for incomming data
      uint8_t m_buf[1024];

      //! Previous received acceleration data
      IMC::Acceleration m_acc;



      //! Constructor.
      //! @param[in] name task name.
      //! @param[in] ctx context.
      Task(const std::string& name, Tasks::Context& ctx):
        DUNE::Tasks::Task(name, ctx)
      {

        param("UDP - Port", m_args.UDP_port)
    		    .defaultValue("49000")
    		    .description("Port for connection to Flightgear");

        param("UDP - Address", m_args.UDP_addr)
        .defaultValue("127.0.0.1")
        .description("Address for connection to Flightgear");

        param("UDP Out - Port", m_args.UDP_port_out)
        .defaultValue("39000")
        .description("Port for sending data back to FlightGear");

        param("UDP Out - Address", m_args.UDP_addr_out)
        .defaultValue("127.0.0.1")
        .description("Address for outgoing comm. to FlightGear");



        param("Aircraft", m_args.aircraft)
        .defaultValue("arducopter")
        .description("Name of aircraft to use");




        // Should perhaps add our own input channel to this...

        bind<IMC::SimulatedState>(this);
        bind<IMC::Acceleration>(this);


      }

      //! Update internal state with new parameter values.
      void
      onUpdateParameters(void)
      {
      }

      //! Reserve entity identifiers.
      void
      onEntityReservation(void)
      {
      }

      //! Resolve entity names.
      void
      onEntityResolution(void)
      {
      }

      //! Acquire resources.
      void
      onResourceAcquisition(void)
      {
        m_UDP_addr = m_args.UDP_addr;
        m_UDP_port = m_args.UDP_port;

        m_UDP_addr_out = m_args.UDP_addr_out;
        m_UDP_port_out = m_args.UDP_port_out;
        openConnection();
      }

      void
      openConnection(void)
      {
        try
        {
            m_UDP_sock = new UDPSocket;

            m_UDP_sock->bind(m_UDP_port, m_UDP_addr, false);

            m_UDP_sock_out = new UDPSocket;
            // Do not bind outgoing socket.

            inf(DTR("UDP sockets for FlightGear setup."));
        }
        catch (...)
        {

            Memory::clear(m_UDP_sock);
            Memory::clear(m_UDP_sock_out);

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
        Memory::clear(m_UDP_sock);
        Memory::clear(m_UDP_sock_out);
      }

      int
      receiveData(uint8_t* buf, size_t blen)
      {
        if(m_UDP_sock)
          {
            try
            {
                return m_UDP_sock->read(buf, blen);
            }
            catch (...)
            {
                war(DTR("Connection lost, retrying..."));
                Memory::clear(m_UDP_sock);
                Memory::clear(m_UDP_sock_out);
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
            if ( n == sizeof(FGNetCtrls))
            {
              FGNetCtrls* fg_ctrls = (FGNetCtrls*) m_buf;
              convertFromNetworkEndian(fg_ctrls);
              spew("Got native flightgear controls. Elevator: %f", fg_ctrls->elevator);
              // TODO: Do something useful with this.

            }
            else if ( n == sizeof(FGNetFDM))
            {
              FGNetFDM* fg_native = (FGNetFDM*) m_buf;
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
      consume(const IMC::SimulatedState *simstate)
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

        if(m_UDP_sock_out != NULL)
        {
          try
          {
            m_UDP_sock_out->write((uint8_t*) &net, sizeof(FGNetFDM), m_UDP_addr_out, m_UDP_port_out);
          }
          catch(NetworkError& error)
          {
            war("Failed to send: %s ", error.what());
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
            if(m_UDP_sock)
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
        if (m_UDP_sock != NULL)
          return Poll::poll(*m_UDP_sock, timeout);


        return false;
      }
    };
  }
}

DUNE_TASK
