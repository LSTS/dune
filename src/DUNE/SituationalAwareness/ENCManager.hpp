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

#ifndef DUNE_SITUATIONALAWARENESS_ENCMANAGER_HPP_INCLUDED_
#define DUNE_SITUATIONALAWARENESS_ENCMANAGER_HPP_INCLUDED_

// DUNE headers.
#include <DUNE/DUNE.hpp>
#include <DUNE/System.hpp>
#include <DUNE/Database.hpp>


namespace DUNE
{
  namespace SituationalAwareness
  {

    //! The NauticalCharts class 
    class ENCManager
    {
    public:
      class Error: public std::runtime_error
      {
      public:
        Error(std::string op, std::string msg):
          std::runtime_error("Error (" + op + "): " + msg)
        { }
      };
      //! Data structure for storing location data 
      struct DepthSoundingContainer_t 
      {// Could this just be a std::pair<double,double>?
        double Lat;
        double Lon;
        double Depth;
        DepthSoundingContainer_t() {
          Lat = 0.0;
          Lon = 0.0;
          Depth = 0.0;
        }
        DepthSoundingContainer_t(double inLat, double inLon, double inDepth) {
          Lat = inLat;
          Lon = inLon;
          Depth = inDepth;
        }
        bool operator<(const DepthSoundingContainer_t& rhs) const {
          if (this->Lat < rhs.Lat) return true;
          if (rhs.Lat < this->Lat) return false;
      
          // a==b for primary condition, go to secondary
          if (this->Lon < rhs.Lon) return true;
          if (rhs.Lon < this->Lon) return false;
          return false;
        }
      };
      typedef std::vector<DepthSoundingContainer_t> DepthSoundingVector;

      ENCManager(const std::string &dbPath);
      ~ENCManager(void);

      //! Returns the depth of the queried location if it exists. 
      //! Returns the depth of the location closest to the queried one, their distance and bearing.
      std::vector<double>
      getSingleDepth(double Lat, double Lon, double grid_size, std::string tablename);

      DepthSoundingVector
      getClosestDepths(double Lat, double Lon, double grid_size, std::string tablename);

      DepthSoundingVector
      getSquare(double Lat, double Lon, double half_size, double drval2, std::string tablename);

      DepthSoundingVector
      getWithinRadius(double Lat, double Lon, double radius, double drval2, std::string tablename);

      std::pair<DepthSoundingVector, DepthSoundingVector>
      checkTransect(double startLat, double startLon, double endLat, double endLon, double grid_size, std::string tablename);
      
      DepthSoundingVector
      getCorridor(double startLat, double startLon, double endLat, double endLon, double grid_size, double corridorWidth, std::string tablename);

      //DepthSoundingVector
      //getCAS(double usv_lat, double usv_lon, double drval2, double size, std::pair<std::vector<double>,std::vector<double>> waypoints, std::vector<double> offsets);

      bool writeCSVfile(const DepthSoundingVector &vec, const std::string &outputFile);
      //bool writeCSVfile(const LocationVector &inVec, const std::string &outputFile);
    protected:
      std::string makeSquareWhereClause(double Lat, double Lon, double half_size);
      std::string makeRectangleWhereClause(double Lat, double Lon, double east_from_center, double north_from_center);
      Database::Connection* db_connection;
    };
  }
}


#endif // END define DUNE_SITUATIONALAWARENESS_DepthSounding_HPP_INCLUDED_
