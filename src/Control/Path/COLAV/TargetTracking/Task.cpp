//***************************************************************************
// Copyright 2007-2023 Universidade do Porto - Faculdade de Engenharia      *
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
// Author: Melih Akdağ                                                      *
//***************************************************************************

// DUNE headers.
#include <DUNE/DUNE.hpp>
#include <Eigen/Dense>

namespace Control
{
  //! Insert short task description here.
  //!
  //! Insert explanation on task behaviour here.
  //! @author Melih Akdağ
  namespace Path
  {
    namespace COLAV
    {
      namespace TargetTracking
      {
        using DUNE_NAMESPACES;
  
        struct Sample
        {
          //double lat;
          //double lon;
          //float chl_value;
        };
  
        struct Arguments
        {
          // Range parameter for obstacle surveillance
          double out_of_range;
          // Amount of time after which a disappeared obstacle is removed from the list.
          double kill_obst;
        };
  
        struct Task: public DUNE::Tasks::Task
        {
          //! Constructor.
          //! @param[in] name task name.
          //! @param[in] ctx context.
          //! List of asv states
          std::vector<double> m_asv_state = std::vector<double>(6,0.0);
          //! Vector of obstacles
          std::vector<IMC::AisInfo> m_dyn_obst_vec;
          //! AutoNaut latitude
          double m_lat_asv;
          //! AutoNaut longitude
          double m_lon_asv;
          //! Obstacle latitude
          double m_lat_obst;
          //! Obstacle longitude
          double m_lon_obst;
          //! Timestamp - new (from Autonaut)
          double m_timestamp_new;
          //! Timestamp - old (from Autonaut)
          double m_timestamp_prev;
          //! Timestamp from obstacle
          double m_timestamp_obst;
          //! Timestamp for last update from obstacle.
          std::vector<double> m_last_update;
          //! Enable collision avoidance.
          bool m_enable_cas;
          //! True if vessels are close.
          bool m_dynamic_obst;
          //! Navigation entity eid.
          int m_nav_eid;

          Math::Matrix m_dyn_obst_state;
  
          //! Task arguments.
          Arguments m_args;
  
          Task(const std::string& name, Tasks::Context& ctx):
          DUNE::Tasks::Task(name, ctx),
          m_lat_asv(0.0),
          m_lon_asv(0.0),
          m_lat_obst(0.0),
          m_lon_obst(0.0),
          m_timestamp_new(0.0),
          m_timestamp_prev(0.0),
          m_timestamp_obst(0.0),
          m_dynamic_obst(false)
          {
            param("Maximum Obstacle Surveillance Range", m_args.out_of_range)
            .units(Units::Meter)
            .minimumValue("0.0")
            .maximumValue("100000.0")
            .defaultValue("5000.0")
            .description("Limit for absolute value of obstacle surveillance range");
  
            param("Remove Disappeared Obstacles", m_args.kill_obst)
            .units(Units::Second)
            .minimumValue("1.0")
            .maximumValue("600.0")
            .defaultValue("60.0")
            .description("Amount of time after which a disappeared obstacle is removed from the list. [sec].");
            
            setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_ACTIVE);
  
            // Register handler routines.
            bind<IMC::AisInfo>(this);
            bind<IMC::GpsFix>(this);

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
          }
  
          //! Initialize resources.
          void
          onResourceInitialization(void)
          {
          }
  
          //! Release resources.
          void
          onResourceRelease(void)
          {
          }
  
          //! From GPS Task
          void
          consume(const IMC::GpsFix* msg)
          {
            //if(msg->getSource() != getSystemId() || msg->getSourceEntity() != m_nav_eid)
            //  return;
            m_lat_asv = msg->lat;
            m_lon_asv = msg->lon;
            m_asv_state[0] = 0.0; // ASV assumed to be centered, (0,0)
            m_asv_state[1] = 0.0;
            m_asv_state[2] = msg->cog;
            m_asv_state[3] = msg->sog;
            m_asv_state[4] = 0.0; //! Assume zero sideslip
            m_asv_state[5] = 0.0; //! Assume zero.
            m_timestamp_new = msg->getTimeStamp();
          }
  
          
          void
          consume(const IMC::AisInfo* msg)
          {
            //trace("Receiving AisInfo");
  
            if(true)//(m_enable_cas)
            {
              // Check if AutoNaut is Simulator is booting before you compute displacement.
              if(m_lat_asv == 0.0 && m_lon_asv == 0.0)
                return;
  
              // Check if incoming AIS message is ownship's
              if (m_lat_asv == msg->lat && m_lon_asv == msg->lon)
                return;
  
              m_timestamp_obst = msg->getTimeStamp();
  
              //trace("CAS - MSG TYPE: %s", msg->msg_type.c_str());
  
              if(msg->msg_type.compare("1") == 0 || msg->msg_type.compare("2") == 0 || msg->msg_type.compare("3") == 0)
              {
                // Real WGS-84 Coordinates [rad]. Static coordinates need to compensate for displacement in x/y-direction (WGS84::displace)
                m_lat_obst = msg->lat;
                m_lon_obst = msg->lon;
  
                // Distance between ASV - Obstacle
                double distance = WGS84::distance(m_lat_asv, m_lon_asv, 0, m_lat_obst, m_lon_obst, 0);

                //trace("Received Obstacle from AIS with MMSI: %s, latitude %f and longitude %f, distance: %0.1f", msg->mmsi.c_str(), Angles::degrees(m_lat_obst), Angles::degrees(m_lon_obst), distance);
  
                bool obs_exists = false;
                // Obstacle vector: UPDATE/REMOVE.
                for(unsigned int i = 0; i < m_dyn_obst_vec.size(); i++)
                {
                  //trace("Update Obstacle vector: Source: %d Vector size: %d", m_dyn_obst_vec[i].getSource(), m_dyn_obst_vec.size());
                  std::string temp_mmsi = m_dyn_obst_vec[i].mmsi;
                  if(temp_mmsi.compare(msg->mmsi) == 0) //s1.compare(s2)
                  {
                    obs_exists = true;
  
                    if(distance < m_args.out_of_range)
                    { // Obstacle exists & inside range - Update
                      m_dyn_obst_vec[i].mmsi = msg->mmsi; // should have already been set!
                      m_dyn_obst_vec[i].lon = msg->lon;
                      m_dyn_obst_vec[i].lat = msg->lat;
                      m_dyn_obst_vec[i].course = msg->course;
                      m_dyn_obst_vec[i].nav_status = msg->nav_status;
                      m_dyn_obst_vec[i].speed = msg->speed*0.514;
                      m_dyn_obst_vec[i].dist = distance;
  
                      m_last_update[i] = m_timestamp_obst;
  
                      //debug("Obstacle with MMSI %s is CLOSER than %0.1f m and is UPDATED - OBST VECT SIZE %lu - LAT %.3f, LON %.3f, COURSE %.3f deg, NAV_STATUS %d, SOG %.3f m/s, distance %.3f m", m_dyn_obst_vec[i].mmsi.c_str(), m_args.out_of_range, m_dyn_obst_vec.size(), Angles::degrees(m_dyn_obst_vec[i].lat), Angles::degrees(m_dyn_obst_vec[i].lon), Angles::degrees(m_dyn_obst_vec[i].course), m_dyn_obst_vec[i].nav_status, m_dyn_obst_vec[i].speed, distance);
                    }
                    else
                    {
                      // Obstacle Outside range - Remove Obstacle
                      //debug("Obstacle with MMSI %s REMOVED - Outside range, obstacle vector size is now: %lu",
                      //  m_dyn_obst_vec[i].mmsi.c_str(), m_dyn_obst_vec.size()-1);
                      m_dyn_obst_vec.erase(m_dyn_obst_vec.begin() + i);
                      m_last_update.erase(m_last_update.begin() + i);
                    }
                  }
                  if(m_timestamp_obst - m_last_update[i] > m_args.kill_obst)
                  {
                    obs_exists = true; // but now is going to be killed!
                    // Obstacle disappeared - Remove Obstacle
                    //spew("Obstacle with MMSI %s is DISAPPEARED and REMOVED - obstacle vector size is now: %lu",
                    //  m_dyn_obst_vec[i].mmsi.c_str(), m_dyn_obst_vec.size()-1);
                    m_dyn_obst_vec.erase(m_dyn_obst_vec.begin() + i);
                    m_last_update.erase(m_last_update.begin() + i);
                  }
                }
  
                // Obstacle vector: ADD new obstacle.
                if(obs_exists == false && (distance < m_args.out_of_range))
                {
                  // Create timestamp for this new vehicle.
                  m_last_update.push_back(m_timestamp_obst);
  
                  IMC::AisInfo obst_temp;
                  // Temp obstacle for storage.
                  obst_temp.mmsi = msg->mmsi;
                  obst_temp.lon = msg->lon;
                  obst_temp.lat = msg->lat;
                  obst_temp.course = msg->course;
                  obst_temp.nav_status = msg->nav_status;
                  obst_temp.speed = msg->speed*0.514;
                  obst_temp.dist = msg->dist;
  
                  m_dyn_obst_vec.push_back(obst_temp);
                  //trace("New Obstacle Added from msg_type 1/2/3: MMSI %s, obstacle vector size: %lu",
                  //    obst_temp.mmsi.c_str(), m_dyn_obst_vec.size());
                }
                //obs_exists = false;
              } else if(msg->msg_type.compare("5") == 0)
              {
                //spew("CAS - MESSAGE TYPE 5");
  
                // Add Static/Voyage information only to vehicles already in the list.
                for(unsigned int i = 0; i < m_dyn_obst_vec.size(); i++)
                {
                  std::string temp_mmsi = m_dyn_obst_vec[i].mmsi;
                  if(temp_mmsi.compare(msg->mmsi) == 0)
                  {
                    // MMSI exists in the list, add static/voyage related data.
                    m_dyn_obst_vec[i].mmsi = msg->mmsi;
                    m_dyn_obst_vec[i].callsign = msg->callsign;
                    m_dyn_obst_vec[i].name = msg->name;
                    m_dyn_obst_vec[i].type_and_cargo = msg->type_and_cargo;
                    m_dyn_obst_vec[i].a = msg->a;
                    m_dyn_obst_vec[i].b = msg->b;
                    m_dyn_obst_vec[i].c = msg->c;
                    m_dyn_obst_vec[i].d = msg->d;
                    m_dyn_obst_vec[i].draught = msg->draught;
  
                    //trace("AIS5: %s %s %s %d %.3f %.3f %.3f %.3f %.3f", m_dyn_obst_vec[i].mmsi.c_str(), m_dyn_obst_vec[i].callsign.c_str(), m_dyn_obst_vec[i].name.c_str(), m_dyn_obst_vec[i].type_and_cargo, m_dyn_obst_vec[i].a, m_dyn_obst_vec[i].b, m_dyn_obst_vec[i].c, m_dyn_obst_vec[i].d, m_dyn_obst_vec[i].draught);
                  } 
                  //else
                  //{
                  //  // Create new obstacle.
                  //  // Temp obstacle for storage.
                  //  IMC::AisInfo obst_temp;
                  //  obst_temp.mmsi = msg->mmsi;
                  //  obst_temp.callsign = msg->callsign;
                  //  obst_temp.name = msg->name;
                  //  obst_temp.type_and_cargo = msg->type_and_cargo;
                  //  obst_temp.a = msg->a;
                  //  obst_temp.b = msg->b;
                  //  obst_temp.c = msg->c;
                  //  obst_temp.d = msg->d;
                  //  obst_temp.draught = msg->draught;
                  //  m_dyn_obst_vec.push_back(obst_temp);
                  //  trace("New Obstacle Added from msg_type 5: MMSI %s, obstacle vector size: %lu",
                  //      obst_temp.mmsi.c_str(), m_dyn_obst_vec.size());
                  //}
                }
              }

              bool C_CAS = m_dyn_obst_vec.size() > 0; //m_enable_cas && m_dyn_obst_vec.size() > 0;
              if(C_CAS)
              {
                // Prepare dynamic obst. matrix for CAS
                m_dyn_obst_state.resize(m_dyn_obst_vec.size(), 10);

                IMC::DynObsVec obs_vec;
                IMC::MessageList<IMC::CollisionAvoidance>* ml = &obs_vec.obstacles;

                for(unsigned int i=0; i<m_dyn_obst_vec.size(); i++)
                {
                  IMC::CollisionAvoidance cas;

                  // Distance between ASV - Obstacle
                  double dist_x = 0.0;
                  double dist_y = 0.0;
                  WGS84::displacement(m_lat_asv, m_lon_asv, 0, m_dyn_obst_vec[i].lat, m_dyn_obst_vec[i].lon, 0, &dist_x, &dist_y);
    
                  //! Update Obstacle states to fit input of CAS (sb_mpc)
                  m_dyn_obst_state(i, 0) = dist_x; // north
                  m_dyn_obst_state(i, 1) = dist_y; // east
                  m_dyn_obst_state(i, 2) = m_dyn_obst_vec[i].course;
                  m_dyn_obst_state(i, 3) = m_dyn_obst_vec[i].speed; //sqrt(std::pow(m_dyn_obst_vec[i].u, 2) + std::pow(m_dyn_obst_vec[i].v, 2));
                  m_dyn_obst_state(i, 4) = 0.0;
                  if(m_dyn_obst_vec[i].a == 0.0)
                    m_dyn_obst_state(i, 5) = 10.0;
                  else 
                    m_dyn_obst_state(i, 5) = m_dyn_obst_vec[i].a;
                  if(m_dyn_obst_vec[i].b == 0.0)
                    m_dyn_obst_state(i, 6) = 10.0;
                  else 
                    m_dyn_obst_state(i, 6) = m_dyn_obst_vec[i].b;
                  if(m_dyn_obst_vec[i].c == 0.0)
                    m_dyn_obst_state(i, 7) = 2.0;
                  else 
                    m_dyn_obst_state(i, 7) = m_dyn_obst_vec[i].c;
                  if(m_dyn_obst_vec[i].d == 0.0)
                    m_dyn_obst_state(i, 8) = 2.0;
                  else 
                    m_dyn_obst_state(i, 8) = m_dyn_obst_vec[i].d;
                  
                  // Convert MMSI from string to int for CAS.
                  std::stringstream geek(m_dyn_obst_vec[i].mmsi); //contains int MMSI.
                  int mmsi = 0; 
                  geek >> mmsi;
                  m_dyn_obst_state(i, 9) = mmsi;
    
                  // Distance between ASV and Obstacle.
                  double distance = WGS84::distance(m_lat_asv, m_lon_asv, 0, m_dyn_obst_vec[i].lat, m_dyn_obst_vec[i].lon, 0);
                  
                  trace("x in NED = %0.1f, y in NED = %0.1f, Distance = %0.1f", dist_x, dist_y, distance);
    
                  //! Fill in CAS message.
                  cas.mmsi = m_dyn_obst_vec[i].mmsi;
                  cas.lat = m_dyn_obst_vec[i].lat;
                  cas.lon = m_dyn_obst_vec[i].lon;
                  cas.x = dist_x;
                  cas.y = dist_y;
                  cas.speed = m_dyn_obst_vec[i].speed;
                  cas.course = Angles::degrees(m_dyn_obst_vec[i].course);
                  cas.dist = distance;
                  cas.length = m_dyn_obst_vec[i].a+m_dyn_obst_vec[i].b;
                  cas.width = m_dyn_obst_vec[i].c+m_dyn_obst_vec[i].d;
                  cas.o_vect = (int) m_dyn_obst_vec.size();
                  //dispatch(cas);

                  ml->push_back(cas);
                }

                dispatch(obs_vec);
                
              }
              
            }
          }


          
          void
          onMain(void)
          {
            while (!stopping())
            {
              waitForMessages(1);
            }
          }
  
  
        };
      }
    }
  }
}

DUNE_TASK
