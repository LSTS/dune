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
      // System id
      const char* announce_id;
      double lat;
      double lon;
    };

    enum DMODE
    {
      STATION,
      TARGET,
      STOP,
      ERROR
    };

    const char* docking_id;

    struct Task: public DUNE::Maneuvers::Maneuver
    {
      //!
      double periodicity;
      //!
      IMC::PathControlState m_control_state;
      //! Maneuver
      IMC::Docking m_maneuver;
      //! Maneuver
      IMC::DockingState m_dstate;
      //!
      IMC::Announce m_announce;
      //!
      IMC::EstimatedState m_estate;
      //!
      IMC::DesiredPath path;

      //! Task arguments
      Arguments m_args;
      //!
      DMODE m_mode;
      // Socket.
      UDPSocket m_sock;
      // List of destinations.
      std::vector<Destination> m_dsts;
      //! Timer counter to update speed
      Time::Counter<float> m_timer;

      bool flag;

      //! Constructor.
      //! @param[in] name task name.
      //! @param[in] ctx context.
      Task(const std::string& name, Tasks::Context& ctx):
        DUNE::Maneuvers::Maneuver(name, ctx)
      {
        //!Define configuration parameters.
        param("Announcement Periodicity", periodicity)
        .units(Units::Second)
        .defaultValue("2")
        .description("Periodicity of location announcement");
        
        //!
        bindToManeuver<Task, IMC::Docking>();
        bind<IMC::DockingState>(this);
       // bind<IMC::Announce>(this);
        // bind<IMC::PathControlState>(this);
        //bind<IMC::Heartbeat>(this);
        //bind<IMC::EstimatedState>(this);
      }

      //! Destructor
      virtual
      ~Task(void)
      {
        // if (m_estate)
        //  delete m_estate;
      }

      void
      onManeuverDeactivation(void)
      {
      }


      void
      onManeuverActivation(void)
      {
        //Memory::clear(path);
       // path.clear();
       // err("INICIEI A MANOBRA!!!!");
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

        enableMovement(false);
      
        if (m_maneuver.vehiclefunction == 0)
        {
          m_mode = STATION;
          war("\n\nSOU A STATION!!!\n");
         
        }
        else if (m_maneuver.vehiclefunction == 1)
        {
          m_mode = TARGET;
          war("\n\nSOU A TARGET!!!\n");
        }

        inf("vehicle target %s", m_maneuver.target.c_str());
        inf("vehicle function %d", m_maneuver.vehiclefunction);
        inf("vehicle max_speed %f", m_maneuver.max_speed);
        inf("maneuver lat %f", m_maneuver.lat);
        inf("maneuver lon %f", m_maneuver.lon);
        inf("vehicle speed_units %d", m_maneuver.speed_units);
      }

      void
      consume(const IMC::DockingState* msg)
      {
        m_dstate = *msg;
      }

      void
      onResourceInitialization(void)
      {
      }
      void
      onResourceAcquisition(void)
      {
        // Initialize entity state.
      //    setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_ACTIVE);
      }

      /*void
      onDockingManeuver(void)
      {
        switch (m_mode)
        {
          case (STATION):
            war("SOU A STATION!!!");
            receivePath();
            break;
          case (TARGET):
            war("SOU O TARGET!!!");
            sendPath();
            break;
          case (STOP):
            break;
          case (ERROR):
            break;
        }
      }
      void
      consume(const IMC::EstimatedState* msg)
      {
        if (msg->getSource() != getSystemId())
          return;
        m_estate = *msg;
      }

      void
      updatePath(void)
      {
        war("UPDATE PATH");
        setControl(IMC::CL_PATH);
        path.speed_units = IMC::SUNITS_METERS_PS;
        path.speed = 2.0;
        path.end_z_units = IMC::Z_DEPTH;
        path.end_z = 0;
        switch (m_mode)
        {
          case (STATION):
            war("STATION");
            if (strcmp(m_announce.sys_name.c_str() , m_maneuver.target.c_str()) == 0)
            {
              war("\n\nVehicle found\n");
              path.end_lat = m_announce.lat;
              path.end_lon = m_announce.lon;
              war("station lat: %f",path.end_lat);
              war("station lon: %f",path.end_lon);
              war("actual lat: %f",m_estate.lat);
              war("actual lon: %f",m_estate.lon);
            }
            else
              war("\n\nVehicle %s nowhere found\n", m_maneuver.target.c_str());
            break;
          case (TARGET):
            war("TARGET");
            path.end_lat = m_maneuver.lat;
            path.end_lon = m_maneuver.lon;
            war("Target lat: %f",path.end_lat);
            war("Target lon: %f",path.end_lon);
            war("actual lat: %f",m_estate.lat);
            war("actual lon: %f",m_estate.lon);
            break;
        }
        dispatch(path);
      }



      void
      receivePath(void)
      {
        // m_args.announce_id = m_announce.sys_name.c_str();
        // docking_id = m_maneuver.target.c_str();
        // war("docking target: %s", m_maneuver.target.c_str());
        // war("docking station: %s", m_maneuver.station.c_str());
        if (m_control_state.flags & IMC::PathControlState::FL_NEAR)
        {
          enableMovement(false);
          signalCompletion();
          war("Finito");
        }
        else
        {
            war("1em progresso");
            //setControl(IMC::CL_PATH);
            // path.end_lat = m_announce.lat;
            // path.end_lon = m_announce.lon;
            war("station lat: %f",path.end_lat);
            war("station lat: %f",path.end_lon);
            //dispatch(path);
          enableMovement(true);
          //signalProgress(m_control_state.eta);
        }
      }

      void
      consume(const IMC::Heartbeat* msg)
      {
        if (msg->getSource() != getSystemId())
          return;
        //err("Heartbeat");
        updatePath();
        onDockingManeuver();
      }

      void
      sendPath(void)
      {
        // war(IMC::PathControlState::FL_NEAR);
        war("dentro!!!!!!!!!1");
        if (m_control_state.flags & IMC::PathControlState::FL_NEAR)
        {
          enableMovement(false);
          signalCompletion();
          war("Finito");
        }
        else
        {
          war("2em progresso");
          enableMovement(true);
          // signalProgress(m_control_state.eta);
        }
      }

      //! On PathControlState message
      //! @param[in] pcs pointer to PathControlState message
      void
      onPathControlState(const IMC::PathControlState* pcs)
      {
        m_control_state = *pcs;
      }
      void
      consume(const IMC::Announce* msg)
      {
        m_announce = *msg;
        //  path.end_lat = m_announce.lat;
        // path.end_lon = m_announce.lon;
        //updatePath();
      }
*/
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
