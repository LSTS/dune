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


// ISO C++ 98 headers.
#include <cstring>
// DUNE headers.
#include <DUNE/DUNE.hpp>
#include <DUNE/Maneuvers/StationKeep.hpp>

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

      double skee_radius;

      double dock_radius;

      double speed;

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


    enum SKEESTATE
    {
      INITIAL,
      ON_STATION,
      OFF_STATION,
      GOING_STATION
    };

    enum POINTCOUNT
    {
      INITIAL_ST,
      THIRD_POINT,
      SEC_POINT,
      FRST_POINT,
      FINAL_POINT
    };

    enum RELATIVE_POS
    {
      FRT_RGHT,
      FRT_LFT,
      BCK
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

      IMC::UamRxRange m_rxrange;

      IMC::UsblAnglesExtended m_angles;

      //!
      IMC::EstimatedState m_target_estate;



      //! Task arguments
      Arguments m_args;
      //!
      DMODE m_mode;
      //!
      AV availability;

      STATE state;

      DMANEUVER dmaneuver;

      DSTATE dstate;

      SKEESTATE skeestate;

      POINTCOUNT point_count;

      RELATIVE_POS relative_pos;

      double m_sk_lat;
      //! Longitude where the stationkeep behavior was centered
      double m_sk_lon;
      //! Station keeping behavior in case it is necessary
      Maneuvers::StationKeep* m_skeep;

      Maneuvers::Maneuver* m_task;

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



      double actual_lat;
      double actual_lon;

      double lat_f ;
      double lon_f ;


      double docking_range;

      double heading_corr;

      double dist_next_point;

      double prev_dist;

      bool flag;

      uint8_t m_retries;

      uint8_t m_attempts;

      //! Constructor.
      //! @param[in] name task name.
      //! @param[in] ctx context.
      Task(const std::string& name, Tasks::Context& ctx):
        DUNE::Maneuvers::Maneuver(name, ctx),
        m_skeep(NULL)
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
        //!List of ports to send DockingState msg
        param("Skee_Radius", m_args.skee_radius)
        .defaultValue("10.0")
        .description("StationKeep max radius");
        //!
        param("Dock_Radius", m_args.dock_radius)
        .defaultValue("50.0")
        .description("Docking max radius");
        //!
        param("Speed", m_args.speed)
        .defaultValue("1.5")
        .description("Vehicle speed");
        //!
        bindToManeuver<Task, IMC::Docking>();
        bind<IMC::DockingState>(this);
        bind<IMC::Announce>(this);
        bind<IMC::PathControlState>(this);
        bind<IMC::Heartbeat>(this);
        bind<IMC::EstimatedState>(this);
        bind<IMC::UamRxRange>(this);
        bind<IMC::UsblAnglesExtended>(this);
        bind<IMC::DockingUSBLMessage>(this);
        // bind<IMC::SimulatedState>(this);
      }

      //! Destructor
      virtual
      ~Task(void)
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
        skeestate = INITIAL;
        point_count = INITIAL_ST;
        flag = true;
        //  prev_dist = 0.0;
        m_retries = 10;
        m_attempts = 0;
      }





      void
      consume(const IMC::EstimatedState* msg)
      {
        //war("ESTATE: %s", resolveSystemId(msg->getSource()));
        if (msg->getSource() != getSystemId())
          return;

        m_estate = *msg;
        docking_range = dist(&m_estate,&m_maneuver);
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

        /*if (msg->getSource() != getSystemId())
          return;*/
        m_dstate = *msg;

        if (m_mode == m_dstate.vehiclefunction)
        {
          signalError(DTR("Another system has the same function has ours!"));
          sendMsg(getSystemName(),state,availability,m_mode);
          enableMovement(false);
        }

        if (msg->state == 2)
          signalCompletion();
      }



      void
      consume(const IMC::Announce* msg)
      {
        m_announce = *msg;
      }


      void
      consume(const IMC::DockingUSBLMessage *msg)
      {
        if (msg->getSource() != getSystemId())
        {
          // war("SystemIDAcou: %s",resolveSystemId(msg->getSource()));
          switch (m_mode)
          {
            case STATION:
              if (msg->getId() == DUNE_IMC_DOCKINGUSBLMESSAGE)
              {
                const IMC::DockingUSBLMessage* am = static_cast<const IMC::DockingUSBLMessage*>(msg);
                const IMC::Message* m = am->message.get();

                if (m->getId() == DUNE_IMC_ESTIMATEDSTATE)
                {
                  const IMC::EstimatedState* estimated = static_cast<const IMC::EstimatedState*>(m);
                  //war("UPA|!");
                  war("SystemID: %s",resolveSystemId(estimated->getSource()));
                  m_target_estate = *estimated;
                }
              }

              break;

            case TARGET:
              break;

            case ERROR:
              break;

            case STOP:
              break;

            default:
              break;
          }
        }
      }

      void
      consume(const IMC::UamRxRange *msg)
      {
        m_rxrange = *msg;
        war("Range no docking: %f", m_rxrange.value);
      }

      void
      consume(const IMC::UsblAnglesExtended *msg)
      {
        m_angles = *msg;
        war("Bearing no docking: %f", m_angles.bearing);
      }


      void
      onDockingManeuver(void)
      {
        switch (m_mode)
        {
          case STATION:
            switch (dmaneuver)
            {
              case INIT:
                //war("INIT");
                // {
                //war("Target ready for docking.");
                availability = READY;

                if ((availability == READY )&& (m_dstate.availability == READY ) && ( strcmp(m_maneuver.target.c_str(),m_dstate.sys_name.c_str()) == 0))
                {
                  double heading_diff =  m_estate.psi - m_target_estate.psi;
                  double p_lat_t = 0;
                  double p_lat_s = 0;
                  double lat_t = m_target_estate.lat;
                  double lon_t = m_target_estate.lon;
                  double lat_s = m_estate.lat;
                  double lon_s = m_estate.lon;
                  WGS84::displace(m_target_estate.x,m_target_estate.y,&lat_t,&lon_t);
                  WGS84::displace(m_estate.x,m_estate.y,&lat_s,&lon_s);

                  if (lat_t != p_lat_t && lat_t != 0)
                  {
                    war("ç");
                    p_lat_t = lat_t;
                  }

                  if (lat_t == 0)
                  {
                    war("y");
                    lat_t = p_lat_t;
                  }

                  if (lat_s != p_lat_s && lat_s != 0)
                  {
                    war("g");
                    p_lat_s = lat_s;
                  }

                  if (lat_s == 0)
                  {
                    war("a");
                    lat_s = p_lat_s;
                  }

                  double lat_diff = lat_s - lat_t;
                  double lon_diff = lon_s - lon_t;

                  if (lat_s != 0 && lat_t != 0)
                  {
                    switch (point_count)
                    {
                      case INITIAL_ST:
                        if (-(Math::c_half_pi) < m_target_estate.psi && m_target_estate.psi < Math::c_half_pi)
                        {
                          if (lat_s > lat_t)
                          {
                            war("FRENTE");

                            if (heading_diff > 0)
                            {
                              relative_pos = FRT_RGHT;
                              war("FRENTE E DIREITA");
                            }
                            else
                            {
                              relative_pos = FRT_LFT;
                              war("FRENTE E ESQUERDA");
                            }
                          }

                          if ( lat_s < lat_t)
                          {
                            war("TRÁS DO VEICULO!!!!!!!!!1");
                            relative_pos = BCK;
                          }
                        }
                        else
                        {
                          war("UPA1111111111111111111");

                          if (lat_s < lat_t)
                          {
                            war("FRENTE");

                            if (heading_diff > 0)
                            {
                              relative_pos = FRT_RGHT;
                              war("FRENTE E DIREITA");
                            }
                            else
                            {
                              relative_pos = FRT_LFT;
                              war("FRENTE E ESQUERDA");
                            }
                          }

                          if ( lat_s > lat_t)
                          {
                            war("TRÁS DO VEICULO!!!!!!!!!1");
                            relative_pos = BCK;
                          }
                        }

                        if ( relative_pos == FRT_RGHT )
                        {
                          //On the front/right of the target vehicle
                          //Positive radius and -pi/2 for heading correction
                          point_count = THIRD_POINT;
                          heading_corr = -(DUNE::Math::c_half_pi);
                          // m_args.dock_radius;
                          war("1");
                        }

                        if (relative_pos == FRT_LFT)
                        {
                          //On the front/left of the target vehicle
                          //Negative radius and -pi/2 for heading correction
                          point_count = THIRD_POINT;
                          heading_corr = -(DUNE::Math::c_half_pi);
                          m_args.dock_radius = -m_args.dock_radius;
                          war("5");
                        }

                        if ( relative_pos == BCK )
                        {
                          //On the back of the vehicle
                          heading_corr = -(DUNE::Math::c_pi);
                          point_count = SEC_POINT;
                        }

                        break;

                      case THIRD_POINT:
                        war("THIRD_POINT");
                        war("HOMING PHASE");
                        war("relative_pos: %d" , relative_pos);
                        war("Heading_corr: %f" , heading_corr);
                        calculateDockingHeadingPoint();
                        dist_next_point = Coordinates::WGS84::distance(lat_s,lon_s,0,lat_f,lon_f,0);
                        war("Dist_point: %f",dist_next_point);
                        war("14");

                        if ((m_control_state.flags && IMC::PathControlState::FL_NEAR  && dist_next_point <= 5.0) || dist_next_point <= 10.0)
                        {
                          if (relative_pos == FRT_RGHT)
                            heading_corr = -(DUNE::Math::c_pi);
                          else if (relative_pos == FRT_LFT)
                            heading_corr = 0;

                          point_count = SEC_POINT;
                        }

                        break;

                      case SEC_POINT:
                        war("SEC_POINT");
                        war("HOMING PHASE");
                        war("relative_pos: %d" , relative_pos);
                        war("Heading_corr: %f" , heading_corr);
                        calculateDockingHeadingPoint();
                        dist_next_point = Coordinates::WGS84::distance(lat_s,lon_s,0,lat_f,lon_f,0);

                        if ((m_control_state.flags && IMC::PathControlState::FL_NEAR  && dist_next_point <= 5.0) || dist_next_point <= 5.0)
                        {
                          war("9");

                          if (relative_pos == FRT_RGHT)
                            heading_corr = -(DUNE::Math::c_pi);
                          else if (relative_pos == FRT_LFT)
                            heading_corr = 0;

                          m_args.dock_radius = m_args.dock_radius/2;
                          point_count = FRST_POINT;
                        }

                        break;

                      case FRST_POINT:
                        war("FRST_POINT");
                        war("HOMING PHASE");
                        war("relative_pos: %d" , relative_pos);
                        war("Heading_corr: %f" , heading_corr);
                        calculateDockingHeadingPoint();
                        dist_next_point = Coordinates::WGS84::distance(lat_s,lon_s,0,lat_f,lon_f,0);

                        if ((m_control_state.flags && IMC::PathControlState::FL_NEAR  && dist_next_point <= 5.0) || dist_next_point <= 2.5)
                        {
                          point_count = FINAL_POINT;
                          war("Dist_Next_Point: %f", dist_next_point);
                        }

                        break;

                      case FINAL_POINT:
                        war("FINAL_POINT");
                        war("DOCKING PHASE");
                        war("relative_pos: %d" , relative_pos);
                        war("Heading_corr: %f" , heading_corr);
                        getWGS84fromRangeAndBearing(m_rxrange.value , m_angles.bearing, &m_estate);
                        gotopoint(lat_f,lon_f,m_args.speed);
                        dist_next_point = Coordinates::WGS84::distance(lat_s,lon_s,0,lat_f,lon_f,0);

                        if (flag == true)
                        {
                          prev_dist = dist_next_point;
                          flag = false;
                          war("Flag!!");
                        }

                        if (dist_next_point <= prev_dist)
                        {
                          prev_dist = dist_next_point;
                          war("Distance updated");
                        }
                        else
                        {
                          m_attempts++;

                          if (m_attempts <= m_retries)
                          {
                            dmaneuver = INIT;
                            point_count = INITIAL_ST;
                            m_args.dock_radius = 50;
                            flag = true;

                            war("The distance is higher now! Retry attempt number:%d:",m_attempts);
                          }
                          else
                          {
                            war("Retry maneuver failed! Number of attempts: %d.", m_attempts);
                            signalError(DTR("Stopping maneuver"));
                            signalCompletion();
                          }
                        }

                        war("Dist_Next_Point: %f", dist_next_point);
                        war("Prev_Point: %f", prev_dist);

                        if (m_control_state.flags && IMC::PathControlState::FL_NEAR && dist_next_point <= 1.0)
                        {
                          signalCompletion();
                          m_dstate.state = 2;
                          war("DOOOOOOOOOOOOCCCCCCCCCCKKKKKKKKKKKKKKIIIIIIIIIIINNNNNNNNNNNNNNGGGGGGGGGGG");
                          onDockingPoint();
                          return;
                        }

                        break;
                    }
                  }
                }
                else
                {
                  //enableMovement(false);
                  point_count = INITIAL_ST;
                  war("Waiting for target to be ready for docking.");
                  startStationKeeping();
                  dockingTimeout();
                }

                break;

              case MANEUVERING:
                if (m_control_state.flags && IMC::PathControlState::FL_NEAR)
                  dmaneuver = DM_STOP;

                break;

              case DM_STOP:
                war("Docking Completed");
                //availability = READY;
                enableMovement(false);
                onDockingPoint();
                dockingTimeout();
                break;

              default:
                break;
            }

            break;

          case TARGET:
            switch (dmaneuver)
            {
              case INIT:
                war("Going to docking point");
                enableMovement(true);
                gotopoint(m_maneuver.lat,m_maneuver.lon,m_args.speed);
                dmaneuver = MANEUVERING;
                break;

              case MANEUVERING:
                if (m_control_state.flags && IMC::PathControlState::FL_NEAR)
                {
                  enableMovement(false);
                  dmaneuver = DM_STOP;
                }

                break;

              case DM_STOP:
                war("On docking point");
                onDockingPoint();
                dockingTimeout();
                break;
            }

            break;

          case ERROR:
            break;

          case STOP:
            break;

          default:
            break;
        }
      }


      void
      getWGS84fromRangeAndBearing(double range, double bearing, const IMC::EstimatedState *msg)
      {
        double x = msg->x;
        double y = msg->y;
        double lat_f_t = msg->lat;
        double lon_f_t = msg->lon;
        war("lat %f", lat_f_t);
        war("lon %f", lon_f_t);
        double x_f = std::cos(bearing)*range + x; //+
        double y_f = std::sin(bearing)*range + y;// +
        WGS84::displace(x_f,y_f,&lat_f_t,&lon_f_t);
        lat_f = lat_f_t;
        lon_f = lon_f_t;
        war("Lat_F: %f",lat_f);
        war("Lon_F: %f",lon_f);
      }
      void
      calculateDockingHeadingPoint(void)
      {
        getWGS84fromRangeAndBearing(m_rxrange.value , m_angles.bearing, &m_estate);
        war("PSI ca: %f ", m_estate.psi);
        war("PSI la: %f ", m_target_estate.psi);
        war("Calculo psi: %f",m_estate.psi - m_target_estate.psi);
        double x_f = cos(Angles::normalizeRadian(m_target_estate.psi - (heading_corr))) * m_args.dock_radius;
        double y_f = sin(Angles::normalizeRadian(m_target_estate.psi - (heading_corr))) * m_args.dock_radius;
        WGS84::displace(x_f,y_f,&lat_f,&lon_f);
        enableMovement(true);
        gotopoint(lat_f,lon_f,m_args.speed);
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
          war("Timeout - Waiting for target to be ready for docking.");
        else
        {
          m_timer.reset();
          war("Done Timeout!");
          signalError(DTR("Docking maneuver timeout."));
          signalCompletion();
          return;
        }
      }
      void
      gotopoint(double lat, double lon,double speed)
      {
        m_path.end_lat = lat;
        m_path.end_lon = lon;
        m_path.speed_units = IMC::SUNITS_METERS_PS;
        m_path.speed = speed;
        m_path.end_z_units = IMC::Z_DEPTH;
        m_path.end_z = 0;
        dispatch(m_path);
      }
      void
      onDockingPoint(void)
      {
        if (m_mode == STATION)
        {
          war("onDockingPoint");
          sendMsg(getSystemName(), state , availability , m_mode);
          startStationKeeping();
        }
        else if (m_mode == TARGET)
        {
          sendMsg(getSystemName(), state , availability , m_mode);
          startStationKeeping();
        }
      }
      void
      startStationKeeping(void)
      {
        if (m_mode == STATION)
        {
          IMC::EstimatedState prev_state = m_estate;
          double  distance = dist(&m_estate,&prev_state);
          war("distance: %f",distance);

          switch (skeestate)
          {
            case INITIAL:
              war("1");
              enableMovement(false);
              availability = ABORT;

              if (distance >= m_args.skee_radius)
                skeestate = OFF_STATION;
              else if (distance < m_args.skee_radius)
                skeestate = ON_STATION;

              break;

            case OFF_STATION:
              war("2");
              availability = ABORT;
              enableMovement(true);
              m_path.speed =  1;
              gotopoint(m_maneuver.lat,m_maneuver.lon,m_args.speed/2);

              if (m_control_state.flags && IMC::PathControlState::FL_NEAR && distance < m_args.skee_radius)
                skeestate = GOING_STATION;

              break;

            case ON_STATION:
              war("3");
              availability = READY;
              enableMovement(false);

              if (distance >= m_args.skee_radius)
                skeestate = INITIAL;

              break;

            case GOING_STATION:
              war("4");
              availability = ABORT;
              enableMovement(true);
              m_path.speed = 1;
              gotopoint(m_maneuver.lat,m_maneuver.lon,m_args.speed/4);

              if (m_control_state.flags && IMC::PathControlState::FL_NEAR )
                skeestate = INITIAL;

              break;
          }
        }
        else if (m_mode == TARGET)
        {
          double  distance = dist(&m_estate,&m_maneuver);
          war("distance: %f",distance);

          switch (skeestate)
          {
            case INITIAL:
              war("1");
              enableMovement(false);
              availability = ABORT;

              if (distance >= m_args.skee_radius)
                skeestate = OFF_STATION;
              else if (distance < m_args.skee_radius)
                skeestate = ON_STATION;

              break;

            case OFF_STATION:
              war("2");
              availability = ABORT;
              enableMovement(true);
              m_path.speed =  1;
              gotopoint(m_maneuver.lat,m_maneuver.lon,m_args.speed/2);

              if (m_control_state.flags && IMC::PathControlState::FL_NEAR && distance < m_args.skee_radius)
                skeestate = GOING_STATION;

              break;

            case ON_STATION:
              war("3");
              availability = READY;
              enableMovement(false);

              if (distance >= m_args.skee_radius)
                skeestate = INITIAL;

              break;

            case GOING_STATION:
              war("4");
              availability = ABORT;
              enableMovement(true);
              m_path.speed = 1;
              gotopoint(m_maneuver.lat,m_maneuver.lon,m_args.speed/4);

              if (m_control_state.flags && IMC::PathControlState::FL_NEAR )
                skeestate = INITIAL;

              break;
          }
        }
      }
      //! Check if the station keeping maneuver's center is too far
      //! @param[in] state pointer to EstimatedState message
      //! @return true if the center is indeed too far
      double
      dist(const IMC::EstimatedState* msg, const IMC::Docking* docking)
      {
        double skee_docking_lat = docking->lat;
        double skee_docking_lon = docking->lon;
        double actual_lat_skee = msg->lat;
        double actual_lon_skee = msg->lon;
        WGS84::displace(msg->x,msg->y,&actual_lat_skee,&actual_lon_skee);
        double dist = Coordinates::WGS84::distance(skee_docking_lat,skee_docking_lon,0,actual_lat_skee,actual_lon_skee,0);
        return (dist);
      }

      //! Check if the station keeping maneuver's center is too far
      //! @param[in] state pointer to EstimatedState message
      //! @return true if the center is indeed too far
      double
      dist(const IMC::EstimatedState* msg, const IMC::EstimatedState* docking)
      {
        double skee_docking_lat = docking->lat;
        double skee_docking_lon = docking->lon;
        double actual_lat_skee = msg->lat;
        double actual_lon_skee = msg->lon;
        WGS84::displace(msg->x,msg->y,&actual_lat_skee,&actual_lon_skee);
        double dist = Coordinates::WGS84::distance(skee_docking_lat,skee_docking_lon,0,actual_lat_skee,actual_lon_skee,0);
        return (dist);
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
            war("SendMSG");
            m_sock.write(m_bfr_ds, bfr_len_ds, m_dsts[i].addr, m_dsts[i].port);
          }
          catch (...)
          { }
        }
      }

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