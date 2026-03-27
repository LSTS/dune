//***************************************************************************
// Copyright 2007-2025 Universidade do Porto - Faculdade de Engenharia      *
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
// Author: Jose Marinho                                                     *
//***************************************************************************

// ISO C++ 98 headers.
#include <cmath>
#include <vector>
#include <sstream>

// DUNE headers.
#include <DUNE/DUNE.hpp>

namespace Control
{
  namespace Path
  {
    namespace PurePursuitOA
    {
      using DUNE_NAMESPACES;

      //! GOALS:

      //! - através de p da tarefa definir circulos e poligonos de 4 lados como áreas de exclusão
      //! - algoritmo que detete se o sistema está dentro da ára
      //! - algoritmo que permita cumprir o path sem entrar nas áreas de exclusão
      //! - 
      
      // -> é garantido que o utilizador não define áreas sobrepostas e que o espaço entre as áreas é o suficiente para não atrapalhas o caminho
      // -> o veiculo está sempre à superficie

      //! formato circulo: lat-lon-radius (degrees, degrees, meters)
      //! formator poligono 4 lados: lat_p0-lon_p0-width-height

      //!           *-----------*
      //!           |           |
      //!           |           |
      //!    p0 ->  *-----------*

      //! ex: 41.18278733/-8.70796365/56;41.18330915/-8.7055238666667/175/160

      struct Obstacle
      {
        char type = 'E';                    //P=point, Z=zone, E=not defined -> error
        char state = 'E';                   //S=static, M=moving, E=not defined -> error
        char shape = 'E';                   //C=circle, R=rectangle, E=not defined -> error
        double safetyZoneDistance = 0;     //meters; distance between nogo zone margin and safety zone margin 
        double nogoZoneDistance = 0;       //meters; distance between center/obstacle margin and nogo zone margin
        double centerLongitude = 0;        //degrees
        double centerLatitude = 0;         //degrees
        double radius = 0;                 //meters
        double bottomLeftLongitude = 0;    //degrees
        double bottomLeftLatitude = 0;     //degrees
        double horizontalDistance = 0;     //meters
        double verticalDistance = 0;       //meters
        int id = 0;                         //id
      };

      struct Position
      {
        double lon;
        double lat;
      };


      struct Task: public DUNE::Control::PathController
      {
        IMC::DesiredHeading m_heading;
        IMC::DesiredPath m_path;
        std::string m_obs_msg;
        std::vector<Obstacle> m_obstacles;
        Position finalPos;
        Position currPos;
        int oldAvoidState = 0;
        int currAvoidState = 0;

        Task(const std::string& name, Tasks::Context& ctx):
          DUNE::Control::PathController(name, ctx)
        {
          param("Obstacle Message", m_obs_msg)
          .defaultValue("")
          .description("Obstacles definition.");

        }

        
        void
        onUpdateParameters(void)
        {
          PathController::onUpdateParameters();
          if (paramChanged(m_obs_msg))
            processMessage(m_obs_msg);
        }

        void
        onEntityReservation(void)
        {
          PathController::onEntityReservation();
        }

        void
        onPathActivation(void)
        {
          // Activate heading controller.
          enableControlLoops(IMC::CL_YAW);
        }

        void
        onPathDeactivation(void)
        {
          // Deactivate heading controller.
          disableControlLoops(IMC::CL_YAW);
        }


        void
        centerLonLat(Obstacle& obstacle) //calcula o centro do obstáculo
        {
          /*find the center of the rectangle*/
          obstacle.centerLongitude = obstacle.bottomLeftLongitude + horDist2lonDist(obstacle.horizontalDistance, obstacle.bottomLeftLatitude)/2;
          obstacle.centerLatitude = obstacle.bottomLeftLatitude + verDist2latDist(obstacle.verticalDistance)/2;

          return;
        }

        //converts distance in meters to longitude distance in degrees
        double
        horDist2lonDist(double horDist, double latitude)
        {
          return horDist * 180 / (6371000*cos(latitude*M_PI/180)*M_PI);
        }

        //converts distance in meters to latitude distance in degrees
        double
        verDist2latDist(double verDist)
        {
          return verDist * 180 / (6371000*M_PI);
        }

        //converts longitude distance in degrees to distance in meters
        double
        lonDist2horDist(double lonDist, double latitude)
        {
          //war("%f, %f", lonDist, latitude);
          return 6371000*cos(Angles::radians(latitude))*Angles::radians(lonDist);
        }

        //converts latitude distance in degrees to distance in meters
        double
        latDist2verDist(double latDist)
        {
          return 6371000*Angles::radians(latDist);
        }

        //! ex: 41.18278733/-8.70796365/56;41.18330915/-8.7055238666667/175/160
        // Type,State,Shape safetyZoneDistance(,nogoZoneDistance) centerLon,centerLat,R/bottomLeftLon,bottomLeftLat,horizontalDist,verticalDist (id)
        // ZSC 10,10 -8.70796365,41.18278733,56;ZSR 10,10 -8.7055238666667,41.18330915,175,160
        void
        processMessage(std::string msg)
        {
          m_obstacles.clear();

          std::vector<std::string> obstacles_str;         //vetor com obstáculos
          String::split(msg, ";", obstacles_str);

          for (const auto& obs_str: obstacles_str)            //separate the message in its obstacles
          {
            std::vector<std::string> fields;
            String::split(obs_str, " ", fields);
            Obstacle obstacle;


            if (fields.size() <3 || fields.size()>4) //*****CORRIGIR
            {
              war("Incorrectly defined obstacle");
              return;
            }

            std::string obstacleParams = fields[0];
            
            
            if (obstacleParams.size() != 3)
            {
              war("Parameter incorrectly defined: Params wrong size -> %li", obstacleParams.size());
              //return;
            }
            if ((obstacleParams[0] != 'P' && obstacleParams[0] != 'Z') || (obstacleParams[1] != 'S' && obstacleParams[1] != 'M') || (obstacleParams[2] != 'C' && obstacleParams[2] != 'R'))
            {
              war("Parameter incorrectly defined: Value without meaning");
              return;
            }
            obstacle.type = obstacleParams[0];
            obstacle.state = obstacleParams[1];
            obstacle.shape = obstacleParams[2];

            war("%c%c%c", obstacleParams[0], obstacleParams[1], obstacleParams[2]);

            if (obstacle.type == 'P')                           //if the obstacle is a point
            { 
              obstacle.shape = 'C';
              std::vector<std::string> zonesDistances_str;
              String::split(fields[1], ",", zonesDistances_str);
              if (zonesDistances_str.size() != 1)         //if there is a number of distances defined inconsistent with the type of obstacle -> error
              {
                war(">> Parameter incorrectly defined: incorrect number of distances inserted");
                return;
              }
              obstacle.safetyZoneDistance = std::stod(zonesDistances_str[0]);
              war("Safety Distance: %f", obstacle.safetyZoneDistance);

              //obstacle treated as a circle
              std::vector<std::string> circleParams_str;
              String::split(fields[2], ",", circleParams_str);
              if (circleParams_str.size() != 3)
              {
                war(">> Parameter incorrectly defined: incorrect number of location parameters (1): %li", circleParams_str.size());
                return;
              }
              obstacle.centerLongitude = std::stod(circleParams_str[0]);
              war("CenterLon: %f", obstacle.centerLongitude);              
              obstacle.centerLatitude = std::stod(circleParams_str[1]);
              war("CenterLat: %f", obstacle.centerLatitude);
              obstacle.radius = std::stod(circleParams_str[2]);
              war("Radius: %f", obstacle.radius);
              obstacle.nogoZoneDistance = std::stod(circleParams_str[2]);
              war("nogoDistance: %f", obstacle.nogoZoneDistance);

              if (obstacle.state == 'M')
              {
                if (fields[3].size() != 1)
                {
                  war(">> Parameter incorrectly defined: incorrect id");
                  return;
                }
                obstacle.id = std::stoi(fields[3]);
              }

            }
            else                      //if the obstacle is a zone
            {
              std::vector<std::string> zonesDistances_str;
              String::split(fields[1], ",", zonesDistances_str);
              if (zonesDistances_str.size() != 2)         //if there is a number of distances defined inconsistent with the type of obstacle -> error
              {
                war(">> Parameter incorrectly defined: incorrect number of distances inserted");
                return;
              }
              obstacle.safetyZoneDistance = std::stod(zonesDistances_str[0]);
              obstacle.nogoZoneDistance = std::stod(zonesDistances_str[1]);

              if (obstacle.shape == 'C')          //if the obstacle is a circle
              {
                std::vector<std::string> circleParams_str;
                String::split(fields[2], ",", circleParams_str);
                if (circleParams_str.size() != 3)
                {
                  war(">> Parameter incorrectly defined: incorrect number of location parameters (2): %li", circleParams_str.size());
                  return;
                }
                obstacle.centerLongitude = std::stod(circleParams_str[0]);
                obstacle.centerLatitude = std::stod(circleParams_str[1]);
                obstacle.radius = std::stod(circleParams_str[2]);
              }
              else                                //if the obstacle is a rectangle
              {
                std::vector<std::string> rectangleParams_str;
                String::split(fields[2], ",", rectangleParams_str);
                if (rectangleParams_str.size() != 4)
                {
                  war(">> Parameter incorrectly defined: incorrect number of location parameters (3): %li", rectangleParams_str.size());
                  return;
                }
                obstacle.bottomLeftLongitude = std::stod(rectangleParams_str[0]);
                obstacle.bottomLeftLatitude = std::stod(rectangleParams_str[1]);
                obstacle.horizontalDistance = std::stod(rectangleParams_str[2]);
                obstacle.verticalDistance = std::stod(rectangleParams_str[3]);
                centerLonLat(obstacle);
              }
              if (obstacle.state == 'M')
              {
                if (fields[3].size() != 1)
                {
                  war(">> Parameter incorrectly defined: incorrect id");
                  return;
                }
                obstacle.id = std::stoi(fields[3]);
              }

            }
            m_obstacles.push_back(obstacle);
            war(">> Obstacle added successfully");
          }
        }
                
                    //verifica se o veículo está dentro das zonas de exlusão e chama as funções para tomarem a decisão
        int
        checkPosition(const std::vector<Obstacle> obstacles)
        {
          int avoidingcollision = 0;
          int counter = 0;
          for (const auto &obstacle : obstacles)
          {
            double horizontalDistanceV, horizontalDistanceO; //referência é o veículo, referência é o obstáculo
            double verticalDistanceV, verticalDistanceO; //referência é o veículo, referência é o obstáculo
            double veicleObstacleDistance;
            
            horizontalDistanceV = lonDist2horDist(obstacle.centerLongitude - currPos.lon, currPos.lat);
            horizontalDistanceO = -horizontalDistanceV;

            verticalDistanceV = latDist2verDist(obstacle.centerLatitude - currPos.lat);
            verticalDistanceO = verticalDistanceV;

            veicleObstacleDistance = sqrt(horizontalDistanceV*horizontalDistanceV+verticalDistanceV*verticalDistanceV);

            war("Obstacle %d @ %fm", counter++, veicleObstacleDistance);
            war("I'm Here: %f %f", currPos.lon, currPos.lat);
            

            if (obstacle.state == 'S') //para obstáculos estáticos
            {
              if (obstacle.shape == 'C') //caso de obstáculo ter forma circular (ponto ou zona)
              {
                if (obstacle.type == 'P') //caso de obstáculo ser ponto
                {
                  if (veicleObstacleDistance < obstacle.nogoZoneDistance)
                  {
                    war("Trying to get out Static Circle Point");
                    getOutStaticCircle(obstacle, horizontalDistanceV, verticalDistanceV);
                    avoidingcollision = 2;
                  }
                  else if (veicleObstacleDistance < obstacle.nogoZoneDistance + obstacle.safetyZoneDistance)
                  {
                    war("Trying to avoid collision Static Circle Point");
                    goAroundStaticCircle(obstacle, horizontalDistanceV, verticalDistanceV);
                    avoidingcollision = 1;
                  }
                }
                else if (obstacle.type == 'Z') //caso de obstáculo ser zona
                {
                  //war("It's a static circle zone");
                  if (veicleObstacleDistance < obstacle.radius + obstacle.nogoZoneDistance)
                  {
                    war("Trying to get out Static Circle Zone");
                    getOutStaticCircle(obstacle, horizontalDistanceV, verticalDistanceV);
                    avoidingcollision = 2;
                  }
                  else if (veicleObstacleDistance < obstacle.radius + obstacle.nogoZoneDistance + obstacle.safetyZoneDistance)
                  {
                    war("Trying to avoid collision Static Circle Zone");
                    goAroundStaticCircle(obstacle, horizontalDistanceV, verticalDistanceV);
                    avoidingcollision = 1;
                  }
                }
              }
              else if (obstacle.shape == 'R') //caso de obstáculo ter forma retangular
              {
                if (obstacle.type == 'P') //caso de o obstáculo ser um ponto;  Points defined with sqare shape are treated as circles
                {
                  if (veicleObstacleDistance < obstacle.nogoZoneDistance)
                  {
                    war("Trying to get out Static Rectangle Point");
                    getOutStaticCircle(obstacle, horizontalDistanceV, verticalDistanceV);
                    avoidingcollision = 2;
                  }
                  else if (veicleObstacleDistance < obstacle.nogoZoneDistance + obstacle.safetyZoneDistance)
                  {
                    war("Trying to avoid collision Static Rectangle Point");
                    goAroundStaticCircle(obstacle, horizontalDistanceV, verticalDistanceV);
                    avoidingcollision = 1;
                  }
                }
                else if (obstacle.type == 'Z') //caso de o obstáculo ser uma zona
                {
                  if ((horizontalDistanceO < obstacle.horizontalDistance/2 + obstacle.nogoZoneDistance) & 
                      (horizontalDistanceO > 0 - obstacle.horizontalDistance/2 - obstacle.nogoZoneDistance) & 
                      (verticalDistanceO < obstacle.verticalDistance/2 + obstacle.nogoZoneDistance) & 
                      (verticalDistanceO > 0 - obstacle.verticalDistance/2 - obstacle.nogoZoneDistance)) //dentro da zona proibida
                  {
                    war("Trying to get out Static Rectangle Zone");
                    getOutStaticRectangle(obstacle, horizontalDistanceO, verticalDistanceO);
                    avoidingcollision = 2;
                  }
                  else if ( (horizontalDistanceO < obstacle.horizontalDistance/2 + obstacle.nogoZoneDistance + obstacle.safetyZoneDistance) & 
                            (horizontalDistanceO > 0 - obstacle.horizontalDistance/2 - obstacle.nogoZoneDistance - obstacle.safetyZoneDistance) & 
                            (verticalDistanceO < obstacle.verticalDistance/2 + obstacle.nogoZoneDistance + obstacle.safetyZoneDistance) & 
                            (verticalDistanceO > 0 - obstacle.verticalDistance/2 - obstacle.nogoZoneDistance - obstacle.safetyZoneDistance)) //dentro da zona de segurança
                  {
                    war("Trying to avoid collision Static Rectangle Poin");
                    goAroundStaticRectangle(obstacle, horizontalDistanceO, verticalDistanceO);
                    avoidingcollision = 1;
                  }
                }
              }
            }
            else if (obstacle.state == 'M') //para obstáculos estáticos     ***********REVER CONDIÇÕES*********
            {
              if (obstacle.shape == 'C') //caso de obstáculo ter forma circular (ponto ou zona)
              {
                if (obstacle.type == 'P') //caso de obstáculo ser ponto
                {
                  if (veicleObstacleDistance < obstacle.nogoZoneDistance)
                  {
                    //getOutMovingCircle(); //*****************TODO
                    avoidingcollision = 2;
                  }
                  else if (veicleObstacleDistance < obstacle.safetyZoneDistance)
                  {
                    //goAroundMovingCircle(); //***************TODO
                    avoidingcollision = 1;
                  }
                }
                else if (obstacle.type == 'Z') //caso de obstáculo ser zona
                {
                  if (veicleObstacleDistance < obstacle.radius + obstacle.nogoZoneDistance)
                  {
                    //getOutMovingCircle(); //*****************TODO
                    avoidingcollision = 2;
                  }
                  else if (veicleObstacleDistance < obstacle.radius + obstacle.nogoZoneDistance + obstacle.safetyZoneDistance)
                  {
                    //goAroundMovingCircle(); //***************TODO
                    avoidingcollision = 1;
                  }
                }
              }
              else if (obstacle.shape == 'R') //caso de obstáculo ter forma retangular
              {
                if (obstacle.type == 'P') //caso de o obstáculo ser um ponto
                {
                  if ((horizontalDistanceO < obstacle.nogoZoneDistance) & 
                      (horizontalDistanceO > 0-obstacle.nogoZoneDistance) & 
                      (verticalDistanceO < obstacle.nogoZoneDistance) & 
                      (verticalDistanceO > 0-obstacle.nogoZoneDistance)) 
                  {
                    //getOutMovingRectangle(); //************TODO
                    avoidingcollision = 2;
                  }
                  else if ( (horizontalDistanceO < obstacle.safetyZoneDistance) & 
                            (horizontalDistanceO > 0-obstacle.safetyZoneDistance) & 
                            (verticalDistanceO < obstacle.safetyZoneDistance) & 
                            (verticalDistanceO > 0-obstacle.safetyZoneDistance))
                  {
                    //goAroundMovingRectangle(); //**********TODO
                    avoidingcollision = 1;
                  }
                }
                else if (obstacle.type == 'Z') //caso de o obstáculo ser uma zona
                {
                  if ((horizontalDistanceO < obstacle.horizontalDistance/2 + obstacle.nogoZoneDistance) & 
                      (horizontalDistanceO > 0 - obstacle.horizontalDistance/2 - obstacle.nogoZoneDistance) & 
                      (verticalDistanceO < obstacle.verticalDistance/2 + obstacle.nogoZoneDistance) & 
                      (verticalDistanceO > 0 - obstacle.verticalDistance/2 - obstacle.nogoZoneDistance)) //dentro da zona proibida
                  {
                    //getOutMovingRectangle(); //************TODO
                    avoidingcollision = 2;
                  }
                  else if ( (horizontalDistanceO < obstacle.horizontalDistance/2 + obstacle.safetyZoneDistance) & 
                            (horizontalDistanceO > 0 - obstacle.horizontalDistance/2 - obstacle.safetyZoneDistance) & 
                            (verticalDistanceO < obstacle.verticalDistance/2 + obstacle.safetyZoneDistance) & 
                            (verticalDistanceO > 0 - obstacle.verticalDistance/2 - obstacle.safetyZoneDistance)) //dentro da zona de segurança
                  {
                    //goAroundMovingRectangle(); //**********TODO
                    avoidingcollision = 1;
                  }
                }
              }
            }
            war("Going to: %f %f", m_path.end_lon, m_path.end_lat);
            war("Avoiding collision: %d", avoidingcollision);
          }
          
          if (!avoidingcollision) //se não está a evitar colisão, continuar para o destino final
          {
            m_path.end_lon = finalPos.lon;
            m_path.end_lat = finalPos.lat;

            m_heading.value = Angles::normalizeRadian(atan2(latDist2verDist(finalPos.lat - currPos.lat), lonDist2horDist(finalPos.lon - currPos.lon, currPos.lat)));
          }
          return avoidingcollision;
        }
        
        //********************Operating Functions
        //retornam a posição para onde ir diretamente em m_path.value

        void
        getOutStaticCircle(Obstacle obstacle, double veicObstHorDist, double veicObstVerDist)
        {
          war("Getting out Static Circle");
          double obstRadPosition; //posição angular do centro do obstáculo relativamente ao veículo -pi:pi
          double nowHeading;
          double shift = 1.5*(obstacle.radius+obstacle.nogoZoneDistance);
          double horShift, verShift;  //meters
          double lonShift, latShift;  //degrees
          
          obstRadPosition = atan2(veicObstVerDist, veicObstHorDist);

          if (Angles::normalizeRadian(obstRadPosition - m_heading.value) > 0)
          {
            nowHeading = obstRadPosition - M_PI/2;
          }
          else
          {
            nowHeading = obstRadPosition + M_PI/2;
          }
          horShift = shift * cos(nowHeading);
          verShift = shift * sin(nowHeading);

          lonShift = horDist2lonDist(horShift, obstacle.centerLatitude);
          latShift = verDist2latDist(verShift);

          m_path.end_lon = currPos.lon + lonShift;
          m_path.end_lat = currPos.lat + latShift;

          m_heading.value = nowHeading;
        }
        
        void
        getOutStaticRectangle(Obstacle obstacle, double veicObstHorDist, double veicObstVerDist)
        {
          war("Getting out Static Rectangle");

          if ((veicObstHorDist < 0 - obstacle.horizontalDistance/2) &
              (veicObstVerDist > 0 - obstacle.verticalDistance/2))      //à esquerda do obstáculo
          {
            m_path.end_lon = currPos.lon;
            m_path.end_lat = currPos.lat + verDist2latDist(obstacle.verticalDistance + 2*obstacle.nogoZoneDistance);

            m_heading.value = M_PI/2;
          }
          else if ( (veicObstHorDist > obstacle.horizontalDistance/2) &
          (veicObstVerDist < obstacle.verticalDistance/2))      //à esquerda do obstáculo
          {
            m_path.end_lon = currPos.lon;
            m_path.end_lat = currPos.lat - verDist2latDist(obstacle.verticalDistance + 2*obstacle.nogoZoneDistance);

            m_heading.value = -M_PI/2;
          }
          else if ( (veicObstVerDist < 0 - obstacle.verticalDistance/2) &
                    (veicObstHorDist < obstacle.horizontalDistance/2))
          {
            m_path.end_lat = currPos.lat;
            m_path.end_lon = currPos.lon - horDist2lonDist(obstacle.horizontalDistance + 2*obstacle.nogoZoneDistance, obstacle.centerLatitude);

            m_heading.value = M_PI;
          }
          else if ( (veicObstVerDist > obstacle.verticalDistance/2) &
                    (veicObstHorDist > 0 - obstacle.horizontalDistance/2))
          {
            m_path.end_lat = currPos.lat;
            m_path.end_lon = currPos.lon + horDist2lonDist(obstacle.horizontalDistance + 2*obstacle.nogoZoneDistance, obstacle.centerLatitude);

            m_heading.value = 0;
          }
          
        }
        
        void
        goAroundStaticCircle(Obstacle obstacle, double veicObstHorDist, double veicObstVerDist)
        {
          war("Avoiding collision Static Circle");
          
          double obstRadPosition; //posição angular do centro do obstáculo relativamente ao veículo -pi:pi
          double nowHeading;
          double shift = 0.5 * (obstacle.radius+obstacle.nogoZoneDistance);
          double horShift, verShift;  //meters
          double lonShift, latShift;  //degrees
          
          obstRadPosition = atan2(veicObstVerDist, veicObstHorDist);

          // war("Obstacle Direction: %f", obstRadPosition/M_PI);
          // war("Shift: %f", shift);

          if (Angles::normalizeRadian(obstRadPosition - m_heading.value) > 0)
          {
            nowHeading = obstRadPosition + M_PI/2;
          }
          else
          {
            nowHeading = obstRadPosition - M_PI/2;
          }

          // war("Heading Direction: %f", nowHeading/M_PI); 
          horShift = shift * cos(nowHeading);
          verShift = shift * sin(nowHeading);

          // war("Horizontal Shift: %f", horShift);
          // war("Vertical Shift: %f", verShift);
          // war("Lon/Lat center obstacle: %f %f", obstacle.centerLongitude, obstacle.centerLatitude);
          lonShift = horDist2lonDist(horShift, obstacle.centerLatitude);
          latShift = verDist2latDist(verShift);

          m_path.end_lon = currPos.lon + lonShift;
          m_path.end_lat = currPos.lat + latShift;
          
          m_heading.value = nowHeading;
          
        }

        void
        goAroundStaticRectangle(Obstacle obstacle, double veicObstHorDist, double veicObstVerDist)
        {
          war("Avoiding collision Static Rectangle");
          if ((veicObstHorDist < 0 - obstacle.horizontalDistance/2 - obstacle.nogoZoneDistance) &
              (veicObstVerDist > 0 - obstacle.verticalDistance/2 - obstacle.nogoZoneDistance))      //à esquerda do obstáculo
          {
            m_path.end_lon = currPos.lon;
            m_path.end_lat = currPos.lat + verDist2latDist(obstacle.verticalDistance + 2*obstacle.nogoZoneDistance + obstacle.safetyZoneDistance);

            m_heading.value = M_PI/2;
          }
          else if ( (veicObstHorDist > obstacle.horizontalDistance/2 + obstacle.nogoZoneDistance) &
                    (veicObstVerDist < obstacle.verticalDistance/2 + obstacle.nogoZoneDistance))      //à esquerda do obstáculo
          {
            m_path.end_lon = currPos.lon;
            m_path.end_lat = currPos.lat - verDist2latDist(obstacle.verticalDistance + 2*obstacle.nogoZoneDistance + obstacle.safetyZoneDistance);

            m_heading.value = -M_PI/2;
          }
          else if ( (veicObstVerDist < 0 - obstacle.verticalDistance/2 - obstacle.nogoZoneDistance) &
                    (veicObstHorDist < obstacle.horizontalDistance/2 + obstacle.nogoZoneDistance))
          {
            m_path.end_lat = currPos.lat;
            m_path.end_lon = currPos.lon - horDist2lonDist(obstacle.horizontalDistance + 2*obstacle.nogoZoneDistance + obstacle.safetyZoneDistance, obstacle.centerLatitude);

            m_heading.value = M_PI;
          }
          else if ( (veicObstVerDist > obstacle.verticalDistance/2 + obstacle.nogoZoneDistance) &
                    (veicObstHorDist > 0 - obstacle.horizontalDistance/2 - obstacle.nogoZoneDistance))
          {
            m_path.end_lat = currPos.lat;
            m_path.end_lon = currPos.lon + horDist2lonDist(obstacle.horizontalDistance + 2*obstacle.nogoZoneDistance + obstacle.safetyZoneDistance, obstacle.centerLatitude);

            m_heading.value = 0;
          }

                        /*

                              -------------------------------------
                              |    .   SAFETYZONE ------->        |
                              | A  ---------------------------....|
                              | |  |   . NOGOZONE  ------->  |    |
                              | |  | A -------------------...|  | |
                              | |  | | |    OBSTACLE     | | |  | |
                              | |  | | |                 | | |  | |
                              | |  |...------------------- V |  | |
                              |    |     <------------   .   |  | |
                              |....---------------------------  V |
                              |       <---------------       .    |
                              -------------------------------------
                        
                        
                        */

        }

        //********************operating Functions END


        void
        step(const IMC::EstimatedState& state, const TrackingState& ts)
        {
          double curr_lat = state.lat;
          double curr_lon = state.lon;
          WGS84::displace(state.x, state.y, &curr_lat, &curr_lon);

          finalPos = {Angles::degrees(ts.lon_en), Angles::degrees(ts.lat_en)}; 

          war("----------------------------------------");
          war("Final Position: %f %f", finalPos.lon, finalPos.lat);
          if (ts.nearby)
          {
            war("Nearby");
          }
          else
          {
            war("Not Nearby");
          }
          
          currPos.lon = Angles::degrees(curr_lon);          //posição atual do veículo em coordenadas geográficas para fazer 
          currPos.lat = Angles::degrees(curr_lat);          //os cálculos com posição do obstáculo definidas em coordendas geográficas
          
          m_path.start_lat = curr_lat;                      //guardar posição atual como inicial
          m_path.start_lon = curr_lon;                      //guardar posição atual como inicial

          m_path.end_lon = Angles::degrees(ts.lon_en);                       //guardar o destino original
          m_path.end_lat = Angles::degrees(ts.lat_en);                       //guardar o destino original

          m_path.speed = ts.speed;
          m_path.end_z = ts.end.z;
          m_path.end_z_units = ts.end.z_units;
          /*******************************/
          currAvoidState = checkPosition(m_obstacles);

          if ( currAvoidState != oldAvoidState)
          {
            m_ts.setEndPoint(m_path);

            inf("Mudou de estado");
            
            m_path.end_lon = Angles::normalizeRadian(Angles::radians(m_path.end_lon));
            m_path.end_lat = Angles::normalizeRadian(Angles::radians(m_path.end_lat));

            m_ts.nearby = false;

            const_cast<TrackingState&>(ts).nearby = false;

            dispatch(m_path, DF_LOOP_BACK);

            oldAvoidState = currAvoidState;
          }
          
          /*******************************/

          //war("lat %f lon %f", curr_lat, curr_lon);
          


          m_heading.value = ts.los_angle;

          if (ts.cc)
            m_heading.value = Angles::normalizeRadian(m_heading.value + state.psi - ts.course);

          dispatch(m_heading);
        }
      };
    }
  }
}

DUNE_TASK
