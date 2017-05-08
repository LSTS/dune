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
// Author: Miguel Rosa                                                      *
//***************************************************************************

// DUNE headers.
#include <DUNE/DUNE.hpp>

namespace Maneuver
{
  namespace Docking
  {
    using DUNE_NAMESPACES;

    struct Destination
    {
      // Destination address.
      Address addr;
      // Destination port.
      unsigned port;
      // True if address is local.
      bool local;
    };

    struct Arguments
    {
      // Ports.
      std::vector<unsigned> ports;

      float docking_timeout;
    };

    enum STATE
    {
      STATE_DEFAULT,
      SUCESS,
      FAILURE
    };

    enum AV
    {
      AV_DEFAULT,
      READY,
      PERFORMING,
      ABORT
    };

    enum DMODE
    {
      STATION,
      TARGET,
      STOP,
      ERROR
    };

    enum DMANEUVER
    {
      INIT,
      MANEUVERING,
      DM_STOP
    };

    enum DSTATE
    {
      DS_INIT,
      DS_STOP
    };




    struct Task: public DUNE::Maneuvers::Maneuver
    {

      //!
      IMC::PathControlState m_control_state;
      //! Maneuver
      IMC::Docking m_maneuver;
      //! Maneuver
      IMC::DockingState m_dstate;

      //!
      IMC::EstimatedState m_estate;
      //!
      IMC::DesiredPath m_path;

      IMC::DevDataBinary m_usbl_p;

      IMC::Announce m_announce;

      IMC::SimulatedState m_sstate;

      //! Task arguments
      Arguments m_args;
      //!
      DMODE m_mode;
      //!
      AV availability;

      STATE state;

      DMANEUVER dmaneuver;

      DSTATE dstate;

      //! Timer counter to update speed
      Time::Counter<float> m_timer;

      // Socket.
      UDPSocket m_sock;
      // List of destinations.
      std::vector<Destination> m_dsts;
      // External advertising buffer.
      uint8_t m_bfr_ds[4096];
      // External advertising buffer 2.
      uint8_t m_bfr_ss[4096];

      bool flag_timeout;

      //! Constructor.
      //! @param[in] name task name.
      //! @param[in] ctx context.
      Task(const std::string& name, Tasks::Context& ctx):
        DUNE::Maneuvers::Maneuver(name, ctx)
      {
        //!Define configuration parameters.
        //!List of ports to send DockingState msg
        param("Docking Timeout", m_args.docking_timeout)
        .defaultValue("300.0")
        .description("Docking Timeout");
        //!List of ports to send DockingState msg
        param("Ports", m_args.ports)
        .defaultValue("30100, 30101, 30102, 30103, 30104")
        .description("List of destination ports");
        //!
        bindToManeuver<Task, IMC::Docking>();
        bind<IMC::DockingState>(this);
        bind<IMC::Announce>(this);
        bind<IMC::PathControlState>(this);
        bind<IMC::Heartbeat>(this);
        bind<IMC::EstimatedState>(this);
        // bind<IMC::SimulatedState>(this);
      }

      //! Destructor
      virtual
      ~Task(void)
      {
      }

      void
      onManeuverDeactivation(void)
      {
      }


      void
      onManeuverActivation(void)
      {
        m_dstate.clear();
        availability = AV_DEFAULT;
        state = STATE_DEFAULT;
        m_mode = STOP;
        flag_timeout = false;
        dmaneuver = INIT;
        dstate = DS_INIT;
      }

      void
      onUpdateParameters(void)
      {
      }

      void
      onResourceInitialization(void)
      {
      }
      void
      onResourceAcquisition(void)
      {
      }

     /* //! Release resources. Clears UDP socket.
      void
      onResourceRelease(void)
      {
        Memory::clear(m_sock);
      }*/

      void
      consume(const IMC::EstimatedState* msg)
      {
        //war("ESTATE: %s", resolveSystemId(msg->getSource()));
        if (msg->getSource() != getSystemId())
          return;

        m_estate = *msg;
      }

      void
      consume(const IMC::Heartbeat* msg)
      {
        if (msg->getSource() != getSystemId())
          return;

        onDockingManeuver();
      }

      //! @param[in] pcs pointer to PathControlState message
      void
      consume(const IMC::PathControlState* pcs)
      {
        if (pcs->getSource() != getSystemId())
          return;

        m_control_state = *pcs;
      }

      void
      consume(const IMC::Docking* maneuver)
      {
        m_maneuver = *maneuver;

        if (strcmp(m_maneuver.target.c_str(),getSystemName()) == 0)
        {
          signalError(DTR("Target name must be different from actual system!"));
          return;
        }
        else
          setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_ACTIVE);

        enableMovement(false);

        if (m_maneuver.vehiclefunction == 0)
        {
          m_mode = STATION;
          war("\n\nSTATION\n");
          sendMsg(getSystemName(),state,availability,m_mode);
        }
        else if (m_maneuver.vehiclefunction == 1)
        {
          m_mode = TARGET;
          war("\n\nTARGET\n");
          sendMsg(getSystemName(),state,availability,m_mode);
        }
      }

      void
      consume(const IMC::DockingState* msg)
      {
        if (strcmp(msg->sys_name.c_str(),getSystemName()) == 0)
          return;

        if (msg->getSource() != getSystemId())
          return;

        m_dstate = *msg;

        if (m_mode == m_dstate.vehiclefunction)
        {
          signalError(DTR("Another system has the same function has ours!"));
          sendMsg(getSystemName(),state,availability,m_mode);
          enableMovement(false);
        }
      }



      void
      consume(const IMC::Announce* msg)
      {
        if (msg->getSource() == getSystemId())
          return;

        m_announce = *msg;
       // war("ANNOUNCE!: %s", msg->sys_name.c_str());
      }

      /*void
      consume(const IMC::SimulatedState* msg)
      {
        if (msg->getSource() != getSystemId())
          return;

        m_sstate = *msg;
       // sendSS(msg);
      }*/

      void
      onDockingManeuver(void)
      {
        switch (m_mode)
        {
          case STATION:
            switch (dmaneuver)
            {
              case INIT:
                if ( strcmp(m_maneuver.target.c_str(),m_dstate.sys_name.c_str()) == 0
                     && m_dstate.availability == READY)
                {
                  war("Target ready for docking.");
                  availability = READY;

                  if (availability == READY)
                  {
                    war("Target and Station are ready for docking.");

                    if (strcmp(m_announce.sys_name.c_str(),m_dstate.sys_name.c_str()) == 0)
                    {
                      war("Going to docking point.");
                      enableMovement(true);
                      gotopoint(m_announce.lat,m_announce.lon);
                      dmaneuver = MANEUVERING;
                    }
                  }
                }
                else
                {
                  war("Waiting for target to be ready for docking.");
                  dockingTimeout();
                }

                break;

              case MANEUVERING:
                if (m_control_state.flags & IMC::PathControlState::FL_NEAR)
                  dmaneuver = DM_STOP;

                break;

              case DM_STOP:
                enableMovement(false);
                war("Docking Completed");
                //availability = READY;
                onDockingPoint();
                // dockingTimeout();
                break;
            }

            break;

          case TARGET:
            switch (dmaneuver)
            {
              case INIT:
                war("Going to docking point");
                enableMovement(true);
                gotopoint(m_maneuver.lat,m_maneuver.lon);
                dmaneuver = MANEUVERING;
                break;

              case MANEUVERING:
                if (m_control_state.flags & IMC::PathControlState::FL_NEAR)
                  dmaneuver = DM_STOP;

                break;

              case DM_STOP:
                enableMovement(false);
                war("On docking point");
                availability = READY;
                onDockingPoint();
                dockingTimeout();
                break;
            }

            break;

          case ERROR:
            break;

          case STOP:
            break;
        }
      }

      void
      dockingTimeout(void)
      {
        if (flag_timeout == false)
        {
          flag_timeout = true;
          m_timer.setTop(m_args.docking_timeout);
        }

        if (!m_timer.overflow())
          war("Waiting for target to be ready for docking.");
        else
        {
          m_timer.reset();
          war("Done Timeout!");
          signalError(DTR("Docking maneuver timeout."));
          return;
        }
      }
      void
      gotopoint(double lat, double lon)
      {
        m_path.end_lat = lat;
        m_path.end_lon = lon;
        m_path.speed_units = IMC::SUNITS_METERS_PS;
        m_path.speed = 2.0;
        m_path.end_z_units = IMC::Z_DEPTH;
        m_path.end_z = 0;
        dispatch(m_path);
      }
      void
      onDockingPoint(void)
      {
        if (m_mode == STATION)
          war("onDockingPoint");
        else if (m_mode == TARGET)
          sendMsg(getSystemName(), state , availability , m_mode);
      }
      void
      sendMsg(const char* sysname, int sstate, int s_availability, int vfunction)
      {
        m_dsts.clear();
        m_dstate.clear();
        m_dstate.sys_name = sysname;
        m_dstate.state = sstate;
        m_dstate.availability = s_availability;
        m_dstate.vehiclefunction = vfunction;
        m_dstate.setTimeStamp();
        m_sock.enableBroadcast(true);

        for (unsigned j = 0; j < m_args.ports.size(); ++j)
        {
          Destination dst;
          dst.port = m_args.ports[j];
          dst.addr = "255.255.255.255";
          dst.local = false;
          m_dsts.push_back(dst);
        }

        uint16_t bfr_len_ds = IMC::Packet::serialize(&m_dstate, m_bfr_ds, sizeof(m_bfr_ds));

        for (unsigned i = 0; i < m_dsts.size(); ++i)
        {
          try
          {
           // war("SendMSG");
            m_sock.write(m_bfr_ds, bfr_len_ds, m_dsts[i].addr, m_dsts[i].port);
          }
          catch (...)
          { }
        }
      }


      void
      sendSS(const IMC::SimulatedState *msg)
      {
        m_dsts.clear();
        m_sstate.clear();
        m_sstate = *msg;
        m_sstate.setTimeStamp();
        m_sock.enableBroadcast(true);

        for (unsigned j = 0; j < m_args.ports.size(); ++j)
        {
          Destination dst;
          dst.port = m_args.ports[j];
          dst.addr = "255.255.255.255";
          dst.local = false;
          m_dsts.push_back(dst);
        }

        uint16_t bfr_len_ss = IMC::Packet::serialize(&m_sstate, m_bfr_ss, sizeof(m_bfr_ss));

        for (unsigned i = 0; i < m_dsts.size(); ++i)
        {
          try
          {
            m_sock.write(m_bfr_ss, bfr_len_ss, m_dsts[i].addr, m_dsts[i].port);
          }
          catch (...)
          { }
        }
      }


      //! Function for enabling and disabling the control loops
      void
      enableMovement(bool enable)
      {
        const uint32_t mask = IMC::CL_PATH;

        if (enable)
          setControl(mask);
        else
          setControl(0);
      }
    };
  }
}

DUNE_TASK
