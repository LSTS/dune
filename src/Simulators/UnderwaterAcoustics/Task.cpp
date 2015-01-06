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
// Author: Eduardo Marques                                                  *
//***************************************************************************

// ISO C++ 98 headers.
#include <cstdlib>
#include <cmath>
#include <map>
#include <iomanip>

// DUNE headers.
#include <DUNE/DUNE.hpp>

namespace Simulators
{
  namespace UnderwaterAcoustics
  {
    using DUNE_NAMESPACES;

    struct Arguments
    {
      Address udp_maddr;
      uint16_t udp_port;
      std::vector<double> location;
      bool trace;
      //! Gps simulator entity id.
      std::string label_gps;
    };

    static const double c_sound_speed = 1500;
    static const double c_max_range = 3000;

    struct Task: public Tasks::Task
    {
      // Task arguments.
      Arguments m_args;

      // Flags.
      bool m_setup, m_fixed_location;
      // Position awareness (of self and others).
      uint16_t m_local_imc_addr;
      IMC::GpsFix m_origin;
      IMC::RemoteState m_lstate;
      typedef std::map<int, IMC::RemoteState> RStateMap;
      RStateMap m_positions;

      // Handling of simulated traffic.
      IMC::UASimulation* m_pending; // Pending delivery to self
      double m_busy_till; // Time until underwater medium is busy (for collision detection)
      double m_send_time;

      // UDP socket and related auxilliary data.
      UDPSocket* m_sock;
      uint8_t m_buf[1024];

      Task(const std::string& name, Tasks::Context& ctx):
        Tasks::Task(name, ctx),
        m_setup(false),
        m_fixed_location(false),
        m_pending(0),
        m_sock(0)
      {
        param("UDP Communications -- Multicast Address", m_args.udp_maddr)
        .defaultValue("225.0.2.1")
        .description("UDP multicast address for communications");

        param("UDP Communications -- Port", m_args.udp_port)
        .defaultValue("8021")
        .description("UDP port for communications");

        param("Fixed Location", m_args.location)
        .defaultValue("")
        .description("WGS84 latitude and longitude for node with fixed position");

        param("Trace", m_args.trace)
        .defaultValue("false")
        .description("Enable verbose output");

        param("Entity Label - GPS", m_args.label_gps)
        .description("Entity label of simulated 'GpsFix' messages");

        // Misc. initialization
        m_local_imc_addr = getSystemId();
        m_lstate.setSource(m_local_imc_addr);
        m_lstate.setTimeStamp(0);

        // Register consumers.
        bind<IMC::GpsFix>(this);
        bind<IMC::SimulatedState>(this);
        bind<IMC::UASimulation>(this);
      }

      ~Task(void)
      {
        onResourceRelease();
      }

      void
      onUpdateParameters(void)
      {
        if (m_args.location.size() == 2)
        {
          m_fixed_location = true;
          m_lstate.clear();
          m_lstate.lat = Angles::radians(m_args.location[0]);
          m_lstate.lon = Angles::radians(m_args.location[1]);
          m_lstate.depth = 0;
          m_setup = true;
        }
        else
        {
          m_setup = false;
        }
      }

      void
      onResourceAcquisition(void)
      {
        m_sock = new DUNE::Network::UDPSocket();
        m_sock->setMulticastTTL(1);
        m_sock->setMulticastLoop(true);
        m_sock->joinMulticastGroup(m_args.udp_maddr);
        m_sock->bind(m_args.udp_port);
      }

      void
      onResourceRelease(void)
      {
        if (m_pending)
        {
          delete m_pending;
          m_pending = 0;
        }

        if (m_sock)
        {
          delete m_sock;
          m_sock = 0;
        }
      }

      void
      share(const IMC::Message* msg)
      {
        // Share message over the UDP multicast socket.
        int n = msg->getSerializationSize();
        IMC::Packet::serialize(msg, m_buf, n);
        m_sock->write(m_buf, n, m_args.udp_maddr, m_args.udp_port);
      }

      void
      updatePosition(const IMC::RemoteState* rstate)
      {
        if (m_positions.find(rstate->getSource()) == m_positions.end())
        {
          debug("%s | part of network",
                resolveSystemId(rstate->getSource()));
        }

        m_positions[rstate->getSource()] = *rstate;

        if (m_args.trace)
        {
          debug("%s (%u) -- position: %0.4f %0.4f %u %0.4f",
                resolveSystemId(rstate->getSource()),
                rstate->getSource(), Angles::degrees(rstate->lat),
                Angles::degrees(rstate->lon), rstate->depth,
                distance(m_local_imc_addr, rstate->getSource()));
        }
      }

      double
      distance(int src, int dst)
      {
        RStateMap::iterator sitr = m_positions.find(src);
        RStateMap::iterator ditr = m_positions.find(dst);

        if (sitr == m_positions.end() || ditr == m_positions.end())
          return -1;

        return WGS84::distance(sitr->second.lat, sitr->second.lon, 0,
                               ditr->second.lat, ditr->second.lon, 0);
      }

      void
      updateKnowledge(const IMC::UASimulation* m)
      {
        if (!m_setup)
        {
          debug("not setup yet");
          return;
        }

        uint16_t src = m->getSource();

        double d = src == m_local_imc_addr ? 0 : distance(src, m_local_imc_addr);

        if (d < 0)
        {
          debug("can't handle this -- some nodes are not part of simulation (yet?)");
          return;
        }

        int bits;

        if (m->type == IMC::UASimulation::UAS_DATA)
          bits = 8 * m->data.size();
        else
          bits = 1;  // well ... :)

        double stime = Clock::get();
        double trip_time = d / c_sound_speed;
        double transm_time = ((double)bits) / (double)m->speed;
        double etime = stime + trip_time + transm_time;

        double btime = etime;

        if (d < c_max_range)
          btime += (c_max_range - d) / c_sound_speed;

        if (src != m_local_imc_addr)
        {
          debug("%s | distance %0.3f m | trip time %0.3f s | %d bits at %d bps | data transm. %0.3f | total time %0.3f s",
                resolveSystemId(src), d, trip_time,
                bits, m->speed, transm_time, etime - stime);
        }

        if (stime < m_busy_till)
        {
          err(DTR("collision detected"));

          if (m_pending)
          {
            delete m_pending;
            m_pending = 0;
          }
        }
        else if (src != m_local_imc_addr)
        {
          m_pending = new IMC::UASimulation(*m);
          m_send_time = etime;
        }

        if (btime > m_busy_till)
        {
          debug("collision-prone for %0.2f s", (btime - stime));
          m_busy_till = btime;
        }
      }

      void
      consume(const IMC::GpsFix* msg)
      {
        if (m_fixed_location)
          return;

        if (msg->type != IMC::GpsFix::GFT_MANUAL_INPUT)
          return;

        m_setup = true;
        m_origin = *msg;
        m_busy_till = -1;
      }

      void
      consume(const IMC::SimulatedState* msg)
      {
        if (!m_setup || m_fixed_location)
          return;

        double tstamp = msg->getTimeStamp();

        if (tstamp - m_lstate.getTimeStamp() >= 1)
        {
          double rlat, rlon;
          m_lstate.setTimeStamp(tstamp);
          rlat = m_origin.lat;
          rlon = m_origin.lon;
          WGS84::displace(msg->x, msg->y, &rlat, &rlon);
          m_lstate.lat = (fp32_t)rlat;
          m_lstate.lon = (fp32_t)rlon;
          m_lstate.depth = (uint8_t)msg->z;
          m_lstate.psi = msg->psi;
          m_lstate.speed = msg->u;
          share(&m_lstate);
        }
      }

      void
      consume(const IMC::UASimulation* msg)
      {
        debug("transmitting");

        if (m_args.trace)
          msg->toText(std::cerr);

        share(msg);
      }

      void
      onMain(void)
      {
        double last_pos_update = 0;

        while (!stopping())
        {
          double now = Clock::get();

          if (m_fixed_location && now - last_pos_update >= 1)
          {
            m_lstate.setTimeStamp();
            share(&m_lstate);
            last_pos_update = now;
          }

          if (m_pending && now >= m_send_time)
          {
            debug("delivering | time delivery error: %0.4f",
                  (now - m_send_time));

            if (m_args.trace)
              m_pending->toText(std::cerr);

            dispatch(m_pending, DF_KEEP_TIME);
            delete m_pending;
            m_pending = 0;
          }

          checkIncomingData();

          waitForMessages(0.1);
        }
      }

      void
      checkIncomingData(void)
      {
        Address dummy;

        try
        {
          if (Poll::poll(*m_sock, 0.01))
          {
            size_t n = m_sock->read(m_buf, sizeof(m_buf), &dummy);

            IMC::Message* m = IMC::Packet::deserialize(m_buf, n);

            if (m->getId() == DUNE_IMC_REMOTESTATE)
            {
              updatePosition(static_cast<const IMC::RemoteState*>(m));
            }
            else if (m->getId() == DUNE_IMC_UASIMULATION)
            {
              updateKnowledge(static_cast<const IMC::UASimulation*>(m));
            }
            else
            {
              err(DTR("unexpected simulation message: %s"), m->getName());
            }
            delete m;
          }
        }
        catch (std::runtime_error& e)
        {
          err(DTR("read error: %s"), e.what());
        }
      }
    };
  }
}

DUNE_TASK
