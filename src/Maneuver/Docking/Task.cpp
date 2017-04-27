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

    static const float update_timer = 5.0f;

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
      double lat;
      double lon;

      // Ports.
      std::vector<unsigned> ports;
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
      ABORT
    };

    enum DMODE
    {
      STATION,
      TARGET,
      STOP,
      ERROR
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

      //! Task arguments
      Arguments m_args;
      //!
      DMODE m_mode;
      //!
      AV availability;

      STATE state;


      //! Timer counter to update speed
      Time::Counter<float> m_timer;



      // Socket.
      UDPSocket m_sock;
      // List of destinations.
      std::vector<Destination> m_dsts;
      // External advertising buffer.
      uint8_t m_bfr_ext[4096];

      //! Constructor.
      //! @param[in] name task name.
      //! @param[in] ctx context.
      Task(const std::string& name, Tasks::Context& ctx):
        DUNE::Maneuvers::Maneuver(name, ctx)
      {
        //!Define configuration parameters.
        param("Ports", m_args.ports)
        .defaultValue("30100, 30101, 30102, 30103, 30104")
        .description("List of destination ports");
        //!
        bindToManeuver<Task, IMC::Docking>();
        bind<IMC::DockingState>(this);
        // bind<IMC::Announce>(this);
        bind<IMC::DevDataBinary>(this);
        //bind<IMC::UsblAnglesExtended>(this);
        bind<IMC::PathControlState>(this);
        bind<IMC::Heartbeat>(this);
        bind<IMC::EstimatedState>(this);
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
      }


      /*  inf("vehicle target %s", m_maneuver.target.c_str());
        inf("vehicle function %d", m_maneuver.vehiclefunction);
        inf("vehicle max_speed %f", m_maneuver.max_speed);
        inf("maneuver lat %f", m_maneuver.lat);
        inf("maneuver lon %f", m_maneuver.lon);
        inf("vehicle speed_units %d", m_maneuver.speed_units);*/


      void
      consume(const IMC::EstimatedState* msg)
      {
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
          war("\n\nSOU A STATION\n");
        }
        else if (m_maneuver.vehiclefunction == 1)
        {
          m_mode = TARGET;
          war("\n\nSOU O TARGET\n");
        }
      }

      void
      consume(const IMC::DockingState* msg)
      {
        if (msg->getSource() != getSystemId())
          return;

        m_dstate = *msg;

        if (m_mode == STATION)
        {
          war("System name %s:",m_dstate.sys_name.c_str());
          war("State %d:",m_dstate.state);
          war("Availability %d:",m_dstate.availability);
          war("Vehicle function %d:",m_dstate.vehiclefunction);
        }
        else if (m_mode == TARGET)
          war("nada");
      }

      void
      consume(const IMC::DevDataBinary* msg)
      {
        m_usbl_p = *msg;
      }

      void
      onDockingManeuver(void)
      {
        if (m_mode == STATION)
        {
          if ( strcmp(m_maneuver.target.c_str(),m_dstate.sys_name.c_str()) == 0 && m_dstate.availability == READY)
            war("Target ready for docking.");
          else
            war("Waiting for target to be ready for docking.");
        }
        else if (m_mode == TARGET)
        {
          if (m_control_state.flags & IMC::PathControlState::FL_NEAR)
          {
            enableMovement(false);
            signalCompletion();
            war("On docking point");
            availability = READY;
            onDockingPoint();
          }
          else
          {
            war("Going to docking point");
            enableMovement(true);
            gotopoint(m_maneuver.lat,m_maneuver.lon);
          }
        }
      }





      void
      onResourceInitialization(void)
      {
      }
      void
      onResourceAcquisition(void)
      {
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
        // enableMovement(true);
      }
      void
      onDockingPoint(void)
      {
        if (m_mode == STATION)
          war("onDockingPoint");
        else if (m_mode == TARGET)
          sendMsg();
      }

      void
      sendMsg(void)
      {
        m_dsts.clear();
        m_dstate.clear();
        m_dstate.sys_name = getSystemName();
        m_dstate.availability = availability;
        m_dstate.vehiclefunction = m_mode;
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

        uint16_t bfr_len_ext = IMC::Packet::serialize(&m_dstate, m_bfr_ext, sizeof(m_bfr_ext));

        for (unsigned i = 0; i < m_dsts.size(); ++i)
        {
          try
          {
            war("dentro write");
            m_sock.write(m_bfr_ext, bfr_len_ext, m_dsts[i].addr, m_dsts[i].port);
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
