//***************************************************************************
// Copyright 2013-2020 Norwegian University of Science and Technology (NTNU)*
// Department of Engineering Cybernetics (ITK)                              *
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
// Author: Alberto Dallolio from Nikolai Låuvas code                        *
//***************************************************************************

// DUNE headers.
//#include <DUNE/DUNE.hpp>
#include <DUNE/SituationalAwareness/ENCManager.hpp>
#include <DUNE/Coordinates.hpp>
#include <DUNE/Math.hpp>
// Other C++
#include <fstream>
#include <iostream>

namespace DUNE
{
  namespace SituationalAwareness
  {
    ENCManager::ENCManager(const std::string &dbPath) {
      db_connection = NULL;
        try {
          db_connection = new Database::Connection(dbPath.c_str(), Database::Connection::CF_RDONLY);
        } catch(std::runtime_error& e) {
          throw Error("Could not make DB connection: ", System::Error::getLastMessage());
        }
    }

    ENCManager::~ENCManager(void) {
      if (db_connection!=NULL) {
        delete db_connection;
      }
    }

    std::vector<double> ENCManager::getSingleDepth(double Lat, double Lon, double grid_size, std::string tablename)
    {
      std::vector<double> ranges, bearings, depths;
      std::vector<double> return_vec;
      double range, bearing;

      //! tablename = depthmapRad
      std::string c_stmt = "select Depth from " + tablename + " where Lat = " + std::to_string(Lat) + " and Lon = " + std::to_string(Lon) + ";";
      
      try
      {
        Database::Statement* iterator_stmt = new Database::Statement(c_stmt.c_str(), *db_connection);
        std::pair<bool, double> DBDepth;

        while(iterator_stmt->execute())
        {
          *iterator_stmt >> DBDepth;
          
          if(std::get<0>(DBDepth))
          {
            iterator_stmt->reset();
            delete iterator_stmt;
            return_vec.push_back(std::get<1>(DBDepth));
            return return_vec;
          }
        }
      } catch(std::runtime_error& e)
      {
        throw Error("Problem while executing statement \"" + c_stmt + "\": ", System::Error::getLastMessage());
      }

      printf("This location does not exist in the map, retrieving the closest . . . \n");

      ENCManager::DepthSoundingVector four_closest = getClosestDepths(Lat, Lon, grid_size, tablename);
      for(ENCManager::DepthSoundingVector::iterator itr = four_closest.begin(); itr != four_closest.end(); ++itr)
      {
        //std::cout << itr->Lat << " " << itr->Lon << "\n";        
        Coordinates::WGS84::getNEBearingAndRange(Lat,Lon, itr->Lat, itr->Lon, &bearing, &range);
        ranges.push_back(std::fabs(range));
        bearings.push_back(bearing);
        depths.push_back(itr->Depth);
      }
      int min_index = std::min_element(ranges.begin(),ranges.end()) - ranges.begin();
      double min_range = *std::min_element(ranges.begin(), ranges.end());
      return_vec.push_back(depths[min_index]);
      return_vec.push_back(min_range);
      return_vec.push_back(bearings[min_index]);

      return return_vec;
    }

    ENCManager::DepthSoundingVector ENCManager::getClosestDepths(double Lat, double Lon, double grid_size, std::string tablename)
    {
      double disp = 2*grid_size;
      std::string c_stmt = "select min(Lat+Lon), Lat, Lon, Depth from (select Lat, Lon, Depth from " + tablename + " where " + this->makeSquareWhereClause(Lat, Lon, disp) + ") where Lat >= " + std::to_string(Lat) + " and Lon >= " + std::to_string(Lon) +
      " union select max(Lat+Lon), Lat, Lon, Depth from (select Lat, Lon, Depth from " + tablename + " where " + this->makeSquareWhereClause(Lat, Lon, disp) + ") where Lat <= " + std::to_string(Lat) + " and Lon <= " + std::to_string(Lon) + 
      " union select min(Lat-Lon), Lat, Lon, Depth from (select Lat, Lon, Depth from " + tablename + " where " + this->makeSquareWhereClause(Lat, Lon, disp) + ") where Lat >= " + std::to_string(Lat) + " and Lon <= " + std::to_string(Lon) + 
      " union select max(Lat-Lon), Lat, Lon, Depth from (select Lat, Lon, Depth from " + tablename + " where " + this->makeSquareWhereClause(Lat, Lon, disp) + ") where Lat <= " + std::to_string(Lat) + " and Lon >= " + std::to_string(Lon) + ";";
      
      //std::cout << c_stmt << "\n";
      ENCManager::DepthSoundingVector returnMap;
      try{
        Database::Statement* iterator_stmt = new Database::Statement(c_stmt.c_str(), *db_connection);
        std::pair<bool, double> DBLat;
        std::pair<bool, double> DBLon;
        std::pair<bool, double> DBDepth;
        while (iterator_stmt->execute())
        {
          *iterator_stmt >> DBLat >> DBLat >> DBLon >> DBDepth; // Four because max/min column gets discarded
          if(std::get<0>(DBLat)) { // If row not empty (only checks first element)
            returnMap.push_back(ENCManager::DepthSoundingContainer_t(std::get<1>(DBLat), std::get<1>(DBLon), std::get<1>(DBDepth)));
          }
        }
        iterator_stmt->reset();
        delete iterator_stmt;
      } catch(std::runtime_error& e) {
        throw Error("Problem while executing statement \"" + c_stmt + "\": ", System::Error::getLastMessage());
      }
      return returnMap;
    }

    ENCManager::DepthSoundingVector ENCManager::getSquare(double Lat, double Lon, double half_size, double drval2, std::string tablename)
    {
      //select * from depthmapRad where depth > 20 and Lat between 1.1 and 1.101
      // tablename = depthmapRad
      //std::string c_stmt = "select Lat, Lon, Depth from " + tablename + " where Depth > " + std::to_string(minDepth_m) + " and " + this->makeSquareWhereClause(Lat, Lon, half_size) + ";";
      
      std::string start;
      if(tablename == "depthmapRad")
        start = "select Lat, Lon, Depth from ";
      else
        start = "select DISTINCT Lat, Lon from ";
      
      std::string c_stmt;
      if(tablename == "DEPARE")
        c_stmt = start + tablename + " where DRVAL2=" +std::to_string(drval2) + " and " + this->makeSquareWhereClause(Lat, Lon, half_size) + ";";
      else
        c_stmt = start + tablename + " where " + this->makeSquareWhereClause(Lat, Lon, half_size) + ";";

      //std::cout << "TABLENAME: " << tablename << " --- " << c_stmt << std::endl;
      
      ENCManager::DepthSoundingVector returnMap;
      try{
        Database::Statement* iterator_stmt = new Database::Statement(c_stmt.c_str(), *db_connection);
        std::pair<bool, double> DBLat;
        std::pair<bool, double> DBLon;
        std::pair<bool, double> DBDepth;
        while(iterator_stmt->execute())
        {
          if(tablename == "depthmapRad")
            *iterator_stmt >> DBLat >> DBLon >> DBDepth;
          else
            *iterator_stmt >> DBLat >> DBLon;
          if(std::get<0>(DBLat))// If row not NULL
          {
            if(tablename == "depthmapRad")
              returnMap.push_back(ENCManager::DepthSoundingContainer_t(std::get<1>(DBLat), std::get<1>(DBLon), std::get<1>(DBDepth)));
            else
              returnMap.push_back(ENCManager::DepthSoundingContainer_t(std::get<1>(DBLat), std::get<1>(DBLon), 0.0));
          }
        }
        iterator_stmt->reset();
        delete iterator_stmt;
      } catch(std::runtime_error& e) {
        throw Error("Problem while executing statement \"" + c_stmt + "\": ", System::Error::getLastMessage());
      }
      //std::cout << " SIZE OF RETURN " << returnMap.size() << "\n";  
      return returnMap;
    }

    ENCManager::DepthSoundingVector ENCManager::getWithinRadius(double Lat, double Lon, double radius, double drval2, std::string tablename) {
      ENCManager::DepthSoundingVector returnVector = ENCManager::DepthSoundingVector();
      ENCManager::DepthSoundingVector square = this->getSquare(Lat, Lon, radius, drval2, tablename);
      
      for(ENCManager::DepthSoundingVector::iterator itr = square.begin(); itr != square.end(); ++itr)
      {
        double distance = Coordinates::WGS84::distance(Lat, Lon, 0, itr->Lat, itr->Lon, 0);
        if(distance<=radius) {
          returnVector.push_back(ENCManager::DepthSoundingContainer_t(itr->Lat, itr->Lon, itr->Depth));
        }
      }
      return returnVector;
    }

    std::pair<ENCManager::DepthSoundingVector, ENCManager::DepthSoundingVector>
    ENCManager::checkTransect(double startLat, double startLon, double endLat, double endLon, double grid_size, std::string tablename) { // Add depth limit
      double distance = Coordinates::WGS84::distance(startLat, startLon,0, endLat, endLon,0);
      double steps = distance/grid_size;
      float stepLat = (endLat-startLat)/steps;
      float stepLon = (endLon-startLon)/steps;
      ENCManager::DepthSoundingVector groundingPositions = ENCManager::DepthSoundingVector();
      ENCManager::DepthSoundingVector returnVector = ENCManager::DepthSoundingVector();
      
      // Iterate through points on line between start- and end-position
      for(unsigned int step=0; step<steps;step++) {

        // Get four closest depth soundings
        ENCManager::DepthSoundingVector fourClosest = this->getClosestDepths(startLat+step*stepLat, startLon+step*stepLon, grid_size, tablename);

        // If less than four depth soundings available, it's probably ground
        if(fourClosest.size() < 4) {
          groundingPositions.push_back(ENCManager::DepthSoundingContainer_t(startLat+step*stepLat, startLon+step*stepLon, 0));
        } else {
          // Select the closest of the four depth soundings
          double closest_distance=-1;
          ENCManager::DepthSoundingContainer_t closest= ENCManager::DepthSoundingContainer_t();
          for (ENCManager::DepthSoundingVector::iterator itr = fourClosest.begin(); itr != fourClosest.end(); ++itr) {
            distance = Coordinates::WGS84::distance(startLat+step*stepLat, startLon+step*stepLon,0, itr->Lat, itr->Lon,0);
            if (distance < closest_distance or closest_distance < 0.0) {
              closest_distance=distance;
              closest = *itr;
            }
          }
          returnVector.push_back(closest);
        }
      }
      return std::pair<ENCManager::DepthSoundingVector, ENCManager::DepthSoundingVector>(returnVector,groundingPositions);
    }

    ENCManager::DepthSoundingVector ENCManager::getCorridor(double startLat, double startLon, double endLat, double endLon, double grid_size, double corridorWidth, std::string tablename) {
      double distance = Coordinates::WGS84::distance(startLat, startLon,0, endLat, endLon,0);
      double steps = distance/(grid_size/2*std::sqrt(2));
      float stepLat= (endLat-startLat)/steps;
      float stepLon= (endLon-startLon)/steps;
      std::vector<double> known_lats, known_lons;

      ENCManager::DepthSoundingVector returnDepthSoundingVector = this->getSquare(startLat, startLon, corridorWidth, 0.0, tablename);
      if(!returnDepthSoundingVector.empty() && tablename != "depthmapRad")
      {
        for(ENCManager::DepthSoundingVector::iterator itr = returnDepthSoundingVector.begin(); itr != returnDepthSoundingVector.end(); ++itr)
        {
          known_lats.push_back(itr->Lat);
          known_lons.push_back(itr->Lon);
        }
      }
      for(unsigned int step=1; step<steps;step++) {
        ENCManager::DepthSoundingVector squareAroundCurrentStep = this->getSquare(startLat+step*stepLat, startLon+step*stepLon, corridorWidth, 0.0, tablename);
        //std::cout << squareAroundCurrentStep.size() << std::endl;
        if(!squareAroundCurrentStep.empty() && tablename != "depthmapRad")
        {
          for(ENCManager::DepthSoundingVector::iterator itr = squareAroundCurrentStep.begin(); itr != squareAroundCurrentStep.end(); ++itr)
          {
            bool lat_exists = std::find(std::begin(known_lats), std::end(known_lats), itr->Lat) != std::end(known_lats);
            bool lon_exists = std::find(std::begin(known_lons), std::end(known_lons), itr->Lon) != std::end(known_lons);
            if(!lat_exists || !lon_exists)
            {
              known_lats.push_back(itr->Lat);
              known_lons.push_back(itr->Lon);
              returnDepthSoundingVector.push_back(ENCManager::DepthSoundingContainer_t(itr->Lat, itr->Lon, 0.0));
              //returnDepthSoundingVector.insert(returnDepthSoundingVector.end(), squareAroundCurrentStep.begin(), squareAroundCurrentStep.end());
              //std::cout << " SIZE OF KNOWN LATS " << known_lats.size() << "\n"; 
              std::cout << "Inserting " << Angles::degrees(itr->Lat) << " AND " << Angles::degrees(itr->Lon) << std::endl;
            }
          }
        } else
        {
          returnDepthSoundingVector.insert(returnDepthSoundingVector.end(), squareAroundCurrentStep.begin(), squareAroundCurrentStep.end());
          //returnDepthSoundingVector.push_back(ENCManager::DepthSoundingContainer_t(itr->Lat, itr->Lon, 0.0));
        }
      }
      return returnDepthSoundingVector;
    }

    std::string ENCManager::makeSquareWhereClause(double Lat, double Lon, double half_size) {
      double lat_minus_displaced = Lat;
      DUNE::Coordinates::WGS84::displace(-half_size,0.0,&lat_minus_displaced, &Lon);

      double lat_plus_displaced = Lat;
      DUNE::Coordinates::WGS84::displace(half_size,0.0,&lat_plus_displaced, &Lon);

      double lon_minus_displaced = Lon;
      DUNE::Coordinates::WGS84::displace(0.0,-half_size,&Lat, &lon_minus_displaced);

      double lon_plus_displaced = Lon;
      DUNE::Coordinates::WGS84::displace(0.0,half_size,&Lat, &lon_plus_displaced);

      return std::string("Lat between " + std::to_string(lat_minus_displaced) + " and " + std::to_string(lat_plus_displaced) + " and Lon between " + std::to_string(lon_minus_displaced) + " and " + std::to_string(lon_plus_displaced));
    }

    std::string ENCManager::makeRectangleWhereClause(double Lat, double Lon, double east_from_center, double north_from_center) {
      double lat_minus_displaced = Lat;
      DUNE::Coordinates::WGS84::displace(-north_from_center,0.0,&lat_minus_displaced, &Lon);

      double lat_plus_displaced = Lat;
      DUNE::Coordinates::WGS84::displace(north_from_center,0.0,&lat_plus_displaced, &Lon);

      double lon_minus_displaced = Lon;
      DUNE::Coordinates::WGS84::displace(0.0,-east_from_center,&Lat, &lon_minus_displaced);

      double lon_plus_displaced = Lon;
      DUNE::Coordinates::WGS84::displace(0.0,east_from_center,&Lat, &lon_plus_displaced);

      return std::string("Lat between " + std::to_string(lat_minus_displaced) + " and " + std::to_string(lat_plus_displaced) + " and Lon between " + std::to_string(lon_minus_displaced) + " and " + std::to_string(lon_plus_displaced));
    }

    bool ENCManager::writeCSVfile(const ENCManager::DepthSoundingVector &vec, const std::string &outputFile) {
      std::ofstream file_(outputFile);
      file_ << "Lat,Lon,Depth"  << "\r\n";
      for (ENCManager::DepthSoundingVector::const_iterator itr = vec.begin(); itr != vec.end(); ++itr)
      {
        file_ << DUNE::Math::Angles::degrees(itr->Lat) << "," << DUNE::Math::Angles::degrees(itr->Lon) << "," << itr->Depth << "\r\n";
      }
      return false;
    }

  } // End of namespace SituationalAwareness
} // End of namespace DUNE