//***************************************************************************
// Copyright 2007-2020 Universidade do Porto - Faculdade de Engenharia      *
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
// Author: Alberto Dallolio                                                 *
//***************************************************************************

// ISO C++ 98 headers.
#include <cstring>
#include <cmath>
#include <vector>
#include <string>
#include <fstream>
#include <sstream>
// DUNE headers.
#include <DUNE/DUNE.hpp>

namespace Supervisors
{
  //! Grounding Supervisor
  //!
  //! This task checks on local nautical-charts database for shallow waters
  //! and static features.
  //! If obstacles are found, it dispatches an ENCManager msg.
  //!
  //! @author Alberto Dallolio
  namespace Grounding
  {
    using DUNE_NAMESPACES;
    struct Arguments
    {
      //! Path to DB file
      std::string db_path;
      //! Path to debug folder
      std::string debug_path;
      //! Map resolution.
      double map_res;
      //! Range around location of interest.
      double range;
      //! Grid size.
      double grid_size;
      //! Surroundings check frequency.
      double surr_check;
      //! GPS entity label in Simulation mode.
      std::string elabel_gps_sim;
      //! GPS entity label in Hardware mode.
      std::string elabel_gps_hw;
      //! ID of possible static obstacles.
      std::string static_features;
      //! Check path for shallow waters.
      bool check_path_depth;
      //! Check path for static threats.
      bool check_path_safety;
      //! Check depth contours around USV.
      bool check_depth_contours;
      //! Depth safety threshold.
      double depth_thr;
      //! Corridor width.
      double corridor_width;
      //! Contours radius around USV.
      double contours_radius;
    };

    struct Task: public DUNE::Tasks::Task
    {
      //! Possible land locations per transect.
      std::vector<Math::Matrix> m_land;
      //! Possible static threats locations per transect.
      std::vector<Math::Matrix> m_threats;
      //! Current Lat and Lon of vehicle.
      double m_current_lat, m_current_lon;
      //! Timer.
      Time::Counter<float> m_timer;
      //! GPS entity eid.
      int m_gps_eid;
      //! Static features list.
      std::vector<std::string> m_features;
      // Task arguments
      Arguments m_args;
      // ENC handle.
      SituationalAwareness::ENCManager* m_enc;
      //! True if a transect contains shallow waters.
      bool m_transect_shallow;
      //! Features coordinates.
      std::vector<double> m_features_lat, m_features_lon;
      //! Waypoint latitudes and logitudes (including current USV location).
      std::vector<double> m_wp_latitudes,m_wp_longitudes;
      //! ENC tuples.
      std::string m_static_tuple, m_contours_tuple;
      
      //! Constructor.
      //! @param[in] name task name.
      //! @param[in] ctx context.
      Task(const std::string& name, Tasks::Context& ctx):
        DUNE::Tasks::Task(name, ctx),
        m_current_lat(0.0),
        m_current_lon(0.0),
        m_enc(NULL),
        m_transect_shallow(false)
      {
        param("Digital Map Path", m_args.db_path)
        .defaultValue("")
        .description("Path to digital map DB file");

        param("Check path depth", m_args.check_path_depth)
        .defaultValue("true")
        .description("Parse commanded path and check for shallow waters.");

        param("Check path safety", m_args.check_path_safety)
        .defaultValue("true")
        .description("Parse commanded path and check for near static objects.");

        param("Check depth contours", m_args.check_depth_contours)
        .defaultValue("true")
        .description("Check depth contours around USV.");

        param("Contours radius", m_args.contours_radius)
        .units(Units::Meter)
        .defaultValue("1000")
        .description("Depth contours radius around USV.");

        param("Debug Path", m_args.debug_path)
        .defaultValue("")
        .description("Path to where debuging files are saved");

        param("Digital Map Resolution", m_args.map_res)
        .units(Units::Meter)
        .defaultValue("")
        .description("Digital Map resolution in meters");

        param("Safety depth threshold", m_args.depth_thr)
        .units(Units::Meter)
        .defaultValue("5")
        .description("Safety depth threshold.");

        param("Corridor width", m_args.corridor_width)
        .units(Units::Meter)
        .defaultValue("50")
        .description("Corridor width to check for threats.");

        param("Range Around Location", m_args.range)
        .units(Units::Meter)
        .defaultValue("")
        .description("Radius [m] of circle containing queried locations, around location of interest");

        param("Surroundings Check Frequency", m_args.surr_check)
        .units(Units::Second)
        .defaultValue("180.0")
        .minimumValue("0.0")
        .description("Frequency at which current vehicles surroundings are observed");

        param("Entity Label - GPS simulation", m_args.elabel_gps_sim)
        .description("Entity label of 'GpsFix' message in Simulation mode");

        param("Entity Label - GPS hardware", m_args.elabel_gps_hw)
        .description("Entity label of 'GpsFix' message in Hardware mode");

        param("ENC Features", m_args.static_features)
        .defaultValue("")
        .description("List of static ENC features");

        bind<IMC::Abort>(this);
        bind<IMC::PlanSpecification>(this);
        bind<IMC::GpsFix>(this);
      }

      //! Update internal state with new parameter values.
      void
      onUpdateParameters(void)
      {
        if(paramChanged(m_args.surr_check))
          m_timer.setTop(m_args.surr_check);
      }

      //! Reserve entity identifiers.
      void
      onEntityReservation(void)
      {
      }

      void
      onEntityResolution(void)
      {
        if(m_ctx.profiles.isSelected("Simulation"))
        {
          try
          {
            m_gps_eid = resolveEntity(m_args.elabel_gps_sim);
          }
          catch (...)
          {
            m_gps_eid = 0;
          }
        } else if(m_ctx.profiles.isSelected("Hardware"))
        {
          try
          {
            m_gps_eid = resolveEntity(m_args.elabel_gps_hw);
          }
          catch (...)
          {
            m_gps_eid = 0;
          }
        }
      }

      //! Acquire resources.
      void
      onResourceAcquisition(void)
      {
        try {
          m_enc = new SituationalAwareness::ENCManager(m_args.db_path);
          setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_ACTIVE);
        } catch(std::runtime_error& e) {
          inf(DTR("Problem opening charts: %s"), e.what());
        }
      }

      //! Initialize resources.
      void
      onResourceInitialization(void)
      {
        //! Set timer for periodic check of surroundings.
        m_timer.setTop(m_args.surr_check);

        //! Retrieve features list from config file.
        std::string s = m_args.static_features;
        std::string delimiter = ",";
        size_t pos = 0;
        std::string token;
        while((pos = s.find(delimiter)) != std::string::npos)
        {
          token = s.substr(0, pos);
          //std::cout << token << std::endl;
          m_features.push_back(token);
          s.erase(0, pos + delimiter.length());
        }
      }

      //! Release resources.
      void
      onResourceRelease(void)
      {
        try
        {
         Memory::clear(m_enc);
        }
        catch(std::runtime_error& e)
        {
          err(DTR("Could not clear Nautical charts class: %s"), e.what());
        }
      }

      void
      consume(const IMC::Abort* msg)
      {
        if(msg->getDestination() != getSystemId())
          return;

        if(isActive())
          requestDeactivation();
      }

      void
      consume(const IMC::GpsFix* msg)
      {
        if(msg->getSource() != getSystemId() || msg->getSourceEntity() != m_gps_eid)
          return;

        m_current_lat = msg->lat;
        m_current_lon = msg->lon;
      }

      void
      consume(const IMC::PlanSpecification* msg)
      {
        m_wp_latitudes.push_back(m_current_lat);
        m_wp_longitudes.push_back(m_current_lon);

        //! Iterate through plan maneuvers.
        for(std::vector<IMC::PlanManeuver*>::const_iterator itr = msg->maneuvers.begin(); itr != msg->maneuvers.end(); ++itr)
        {
          // For now just to GoTos.
          const IMC::Goto* m = static_cast<const IMC::Goto*>((*itr)->data.get());
          //spew("LAT LON: %0.4f %0.4f", m->lat, m->lon);

          //! Check the depth of the commanded path transect.
          if(m_enc != NULL && m_args.check_path_depth)
            //checkTransectDepth(m_wp_latitudes.back(),m_wp_longitudes.back(),m->lat,m->lon);

          //! Check if there are static object close to the commanded path.
          if(m_enc != NULL && m_args.check_path_safety)
            checkTransectSafety(m_wp_latitudes.back(),m_wp_longitudes.back(),m->lat,m->lon);

          m_wp_latitudes.push_back(m->lat);
          m_wp_longitudes.push_back(m->lon);

        }
        //! Check depth contours around USV.
        if(m_enc != NULL && m_args.check_depth_contours)
          checkDepthContours(m_current_lat,m_current_lon);

        //! Dispatch retrieved information.
        dispatchENC();
      }

      void
      checkTransectDepth(double lat_start, double lon_start, double lat_end, double lon_end)
      {
        //! Start assuming there is no shallow waters.
        m_transect_shallow = false;
        //! Depthmap based grounding check.
        debug("Transect check from (%0.4f, %0.4f) to (%0.4f, %0.4f)", Angles::degrees(lat_start), Angles::degrees(lon_start), Angles::degrees(lat_end), Angles::degrees(lon_end));
        
        //! Returns safe and hazard locations, respectively.
        std::pair<ENCManager::DepthSoundingVector, ENCManager::DepthSoundingVector> transectcheck = m_enc->checkTransect(lat_start, lon_start, lat_end, lon_end, 50.0, "depthmapRad");

        if(!transectcheck.second.empty())
        {
          war(DTR("Transect is NOT safe: out of known charts or ground locations!"));
          debug("%lu potential path threats.", transectcheck.second.size());
          std::string directory = m_args.debug_path + "hazard_transect_" + std::to_string(Angles::degrees(lat_end)) + ".csv";
          m_enc->writeCSVfile(transectcheck.second, directory);
          for(ENCManager::DepthSoundingVector::iterator itr = transectcheck.second.begin(); itr != transectcheck.second.end(); ++itr)
          {
            debug("Dangerous location (%0.4f, %0.4f)",Angles::degrees(itr->Lat),Angles::degrees(itr->Lon));
          }
        }

        if(!transectcheck.first.empty())
        {
          war(DTR("Commanded path contains shallow waters!"));
          ENCManager::DepthSoundingVector safe_locations;
          for(ENCManager::DepthSoundingVector::iterator itr = transectcheck.first.begin(); itr != transectcheck.first.end(); ++itr)
          {
            if(itr->Depth < m_args.depth_thr)
            {
              m_transect_shallow = true;
              debug("Location (%0.4f, %0.4f) has depth %0.4f",Angles::degrees(itr->Lat),Angles::degrees(itr->Lon),itr->Depth);
            } else
              safe_locations.push_back(ENCManager::DepthSoundingContainer_t(itr->Lat, itr->Lon, itr->Depth));
          }
          //! If the path contains shallow waters, sample a corridor to understand depth profile around the commanded path.
          if(m_transect_shallow)
            checkTransectCorridor(lat_start,lon_start,lat_end,lon_end,m_args.corridor_width);

          if(!safe_locations.empty())
          {
            std::string directory = m_args.debug_path + "safe_transect_" + std::to_string(Angles::degrees(lat_end)) + ".csv";
            m_enc->writeCSVfile(transectcheck.first, directory);
          }
          
          if(!m_transect_shallow)
            debug("Transect is deep enough!");
        }
      }

      //! This function takes a path transect and inspects a corridor of locations around it.
      void
      checkTransectCorridor(double lat_start, double lon_start, double lat_end, double lon_end, double corridorWidth)
      {
        std::string lats="lats=",lons="lons=",dpts="dpts=";
        trace("Transect check from (%0.4f, %0.4f) to (%0.4f, %0.4f)", Angles::degrees(lat_start), Angles::degrees(lon_start), Angles::degrees(lat_end), Angles::degrees(lon_end));
        ENCManager::DepthSoundingVector corridorcheck = m_enc->getCorridor(lat_start, lon_start, lat_end, lon_end, 50.0, corridorWidth, "depthmapRad");
        debug("Evaluated corridor contains %lu samples.",corridorcheck.size());

        ENCManager::DepthSoundingVector shallow_locations;
        for(ENCManager::DepthSoundingVector::iterator itr = corridorcheck.begin(); itr != corridorcheck.end(); ++itr)
        {
          //debug("CORRIDOR LAT %f LON %f DEPTH %f",itr->Lat,itr->Lon,itr->Depth);
          if(itr->Depth < m_args.depth_thr)
          {
            debug("Corridor shallow location (%0.4f, %0.4f) has depth %0.4f",Angles::degrees(itr->Lat),Angles::degrees(itr->Lon),itr->Depth);
            shallow_locations.push_back(ENCManager::DepthSoundingContainer_t(itr->Lat, itr->Lon, itr->Depth));
            // Example: "lat=63.46869;lon=10.37790;d=-10;"
            lats = lats + std::to_string(itr->Lat) + ";";
            lons = lons + std::to_string(itr->Lon) + ";";
            dpts = dpts + std::to_string(itr->Depth) + ";";
          }
        }
        if(!shallow_locations.empty())
        {
          std::string directory = m_args.debug_path + "shallow_transect_" + std::to_string(Angles::degrees(lat_end)) + ".csv";
          m_enc->writeCSVfile(shallow_locations, directory);
        }
      }

      
      //! This function takes a path transect and inspects a rectangle of locations that contains it.
      //! The function retrieves static threats from the ENC.
      void
      checkTransectSafety(double lat_start, double lon_start, double lat_end, double lon_end)
      {
        war("Retrieve static obstacles.");
        std::string lats="lats=",lons="lons=";
        bool features = false;

        //! Iterate through desired features.
        for(int j=0; j<m_features.size(); j++)
        {
          ENCManager::DepthSoundingVector static_threats = m_enc->getCorridor(lat_start, lon_start, lat_end, lon_end, 50.0, 500.0, m_features[j]);
          if(!static_threats.empty())
          {
            features = true;

            for(ENCManager::DepthSoundingVector::iterator itr = static_threats.begin(); itr != static_threats.end(); ++itr)
            {
              war("Static threat at LAT %f LON %f",Angles::degrees(itr->Lat),Angles::degrees(itr->Lon));
              double ct_dxt,at_dxt;
              Coordinates::WGS84::getCtAndAtDistance(itr->Lat,itr->Lon, lat_start, lon_start, lat_end, lon_end, &ct_dxt,&at_dxt);
              debug("Static threat is %f m far from the path, after %f m into the transect.",ct_dxt,at_dxt);

              // Example: "lat=63.46869;lon=10.37790;"
              lats = lats + std::to_string(itr->Lat) + ",";
              lons = lons + std::to_string(itr->Lon) + ",";
            }
          }
        }
        if(features)
        {
          lats.at(lats.size() - 1) = ';';
          lons.at(lons.size() - 1) = ';';
          m_static_tuple = lats + lons;
        }
      }

      //! This function takes the current USV location and checks for depth contours around the USV.
      void
      checkDepthContours(double usv_lat, double usv_lon)
      {
        war("Retrieve depth contours.");
        ENCManager::DepthSoundingVector depth_contours = m_enc->getWithinRadius(usv_lat, usv_lon, m_args.contours_radius, m_args.depth_thr, "DEPARE");
        std::string lats,lons;
        if(!depth_contours.empty())
        {
          lats="lats=";
          lons="lons=";
          for(ENCManager::DepthSoundingVector::iterator itr = depth_contours.begin(); itr != depth_contours.end(); ++itr)
          {
            // Example: "lat=63.46869;lon=10.37790;depth=-10;"
            lats = lats + std::to_string(itr->Lat) + ",";
            lons = lons + std::to_string(itr->Lon) + ",";
          }
          lats.at(lats.size() - 1) = ';';
          lons.at(lons.size() - 1) = ';';
          std::string depth = "depth=" + std::to_string(m_args.depth_thr) + ";";
          m_contours_tuple = lats + lons + depth;
        }
      }

      void
      dispatchENC(void)
      {
        //! If some information was retrieved, dispatch ENC msg.
        if(!m_static_tuple.empty() || !m_contours_tuple.empty())
        {
          IMC::ENCAwareness ENCinfo;
          ENCinfo.danger = m_static_tuple;
          ENCinfo.depth_at_loc = m_contours_tuple;
          dispatch(ENCinfo);
          m_static_tuple = "";
          m_contours_tuple = "";
          debug("ENC DISPATCHED.");
        }
      }

      //! Main loop.
      void
      onMain(void)
      {
        while(!stopping())
        {
          waitForMessages(1.0);

          if(m_timer.overflow())
          {
            //! Check depth contours around USV.
            if(m_enc != NULL && m_args.check_depth_contours)
            {
              war(DTR("Retrieving new surroundings."));
              checkDepthContours(m_current_lat,m_current_lon);
            }

            dispatchENC();

            m_timer.reset();
          }
        }
      }
    };
  }
}

DUNE_TASK