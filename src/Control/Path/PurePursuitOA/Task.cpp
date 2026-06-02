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

      //! ex: 41.18279098/-8.70796953/56;41.18186403/-8.70552352/175/160

      struct Obstacle
      {
        char type = 'E';                    //P=point, Z=zone, E=not defined -> error
        char state = 'E';                   //S=static, M=moving, E=not defined -> error
        char shape = 'E';                   //C=circle, R=rectangle, E=not defined -> error
        double safetyZoneDistance = 0;      //meters; distance between perimether and safety zone margin
        double centerLongitude = 0;         //degrees
        double centerLatitude = 0;          //degrees
        double radius = 0;                  //meters
        double bottomLeftLongitude = 0;     //degrees
        double bottomLeftLatitude = 0;      //degrees
        double width = 0;                   //meters
        double hight = 0;                   //meters
        int id = -1;                        //id
      };

      struct Position
      {
        double lon;
        double lat;
      };


      struct Task: public DUNE::Control::PathController
      {
        IMC::DesiredHeading m_heading;            //direção para onde está a ir
        IMC::DesiredPath m_path;                  //ponto para o qual está a ir
        std::string m_obs_msg;                    //mensagem com os obstáculos
        std::string m_add_obst;                   //mensagem com obstáculo extra para adicionar
        std::string m_rmv_obst;                   //mensagem com pbstáculo para remover
        std::vector<Obstacle> m_obstacles;        //vetor com os obstáculos
        Position finalPos;                        //destino imediato
        Position endPoint;                        //próximo GoTo do percurso
        Position currPos;                         //posição atual
        int oldAvoidState = 0;
        int currAvoidState = 0;
        bool clear_obst_list = false;

        bool epIsSet = false;                                     //se o endPoint já foi definido
        bool canChangeEP = true;                                  //pode-se alterar o endPoint
        Position oldPath = {m_path.end_lon, m_path.end_lat};      //verifica seo m_path.end mudou ou não
        Position newPath;                                         //verifica seo m_path.end mudou ou não

        bool finalPosChanged = true;
        bool hasStoredOriginal = false;           //se em endPoint está guardada o GoTo correto

        Task(const std::string& name, Tasks::Context& ctx):
          DUNE::Control::PathController(name, ctx)
        {
          param("Obstacle Message", m_obs_msg)
          .defaultValue("")
          .description("Obstacles definition.");

          param("Add Obstacle", m_add_obst)
          .defaultValue("")
          .description("Add an obstacle to the list.");

          param("Rmv Obstacle", m_rmv_obst)
          .defaultValue("")
          .description("Remove an obstacle from the list.");

          bind<IMC::PlanControlState>(this);
          // bind<IMC::VehicleState>(this);
        }

        void
        consume(const IMC::PlanControlState* pcs)
        {
          if (pcs->getSource() != getSystemId())
            return;

          //war("Received PlanControlState: %s | maneuver: %s", pcs->plan_id.c_str(), pcs->man_id.c_str());
        }

        void
        onUpdateParameters(void)
        {
          PathController::onUpdateParameters();
          if (paramChanged(m_obs_msg))
          {
            clear_obst_list = true;
            processMessage(m_obs_msg);
          }
          if (paramChanged(m_add_obst))
          {
            processMessage(m_add_obst);
          }
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
          obstacle.centerLongitude = obstacle.bottomLeftLongitude + horDist2lonDist(obstacle.width, obstacle.bottomLeftLatitude)/2;
          obstacle.centerLatitude = obstacle.bottomLeftLatitude + verDist2latDist(obstacle.hight)/2;

          //inf("centro:        %f %f", obstacle.centerLongitude, obstacle.centerLatitude);

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

        void pathInit(double curr_lat, double curr_lon, const TrackingState& ts)
        {
          m_path.start_lat = curr_lat;                      //guardar posição atual como inicial
          m_path.start_lon = curr_lon;                      //guardar posição atual como inicial

          m_path.end_lon = Angles::degrees(ts.lon_en);                       //guardar o destino original
          m_path.end_lat = Angles::degrees(ts.lat_en);                       //guardar o destino original

          m_path.speed = 1;
          m_path.end_z = ts.end.z;
          m_path.end_z_units = ts.end.z_units;
        }

        //! ex: 41.18279098/-8.70796953/56;41.18186403/-8.70552352/175/160
        // Type,State,Shape safetyZoneDistance centerLon,centerLat,R/bottomLeftLon,bottomLeftLat,horizontalDist,verticalDist (id)
        // ZSC 10 -8.70796953,41.18279098,56|ZSR 10 -8.70552352,41.18186403,175,160
        void
        processMessage(std::string msg)
        {
          // war("EEEEEEEEEEEEEEEEEEEEEE");
          if (clear_obst_list)
          {
            m_obstacles.clear();
          }

          std::vector<std::string> obstacles_str;         //vetor com obstáculos
          String::split(msg, "&", obstacles_str);

          for (const auto& obs_str: obstacles_str)            //separate the message in its obstacles
          {
            std::vector<std::string> fields;
            String::split(obs_str, " ", fields);
            Obstacle obstacle;


            if (fields.size() <3 || fields.size()>4)
            {
              war("Incorrectly defined obstacle");
              continue;;
            }

            std::string obstacleParams = fields[0];


            if (obstacleParams.size() != 3)
            {
              war("Parameter incorrectly defined: Params wrong size -> %li", obstacleParams.size());
              continue;
            }
            if ((obstacleParams[0] != 'P' && obstacleParams[0] != 'Z') || (obstacleParams[1] != 'S' && obstacleParams[1] != 'M') || (obstacleParams[2] != 'C' && obstacleParams[2] != 'R'))
            {
              war("Parameter incorrectly defined: Value without meaning");
              continue;
            }
            obstacle.type = obstacleParams[0];
            obstacle.state = obstacleParams[1];
            obstacle.shape = obstacleParams[2];

            // war("%c%c%c", obstacleParams[0], obstacleParams[1], obstacleParams[2]);

            if (obstacle.type == 'P')                           //if the obstacle is a point
            {
              obstacle.shape = 'C';
              obstacle.safetyZoneDistance = std::stod(fields[1]);

              //obstacle treated as a circle
              std::vector<std::string> circleParams_str;
              String::split(fields[2], ",", circleParams_str);
              if (circleParams_str.size() != 3)
              {
                war(">> Parameter incorrectly defined: incorrect number of location parameters (1): %li", circleParams_str.size());
                continue;
              }
              obstacle.centerLongitude = std::stod(circleParams_str[0]);
              obstacle.centerLatitude = std::stod(circleParams_str[1]);
              obstacle.radius = 0 /* std::stod(circleParams_str[2]) */;
              // war("CenterLon: %f", obstacle.centerLongitude);
              // war("CenterLat: %f", obstacle.centerLatitude);
              // war("Radius: %f", obstacle.radius);

              if (obstacle.state == 'M')
              {
                if (fields[3].size() != 1)
                {
                  war(">> Parameter incorrectly defined: incorrect id");
                  continue;
                }
                obstacle.id = std::stoi(fields[3]);
              }

            }
            else                      //if the obstacle is a zone
            {
              obstacle.safetyZoneDistance = std::stod(fields[1]);

              if (obstacle.shape == 'C')          //if the obstacle is a circle
              {
                std::vector<std::string> circleParams_str;
                String::split(fields[2], ",", circleParams_str);
                if (circleParams_str.size() != 3)
                {
                  war(">> Parameter incorrectly defined: incorrect number of location parameters (2): %li", circleParams_str.size());
                  continue;
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
                  continue;
                }
                obstacle.bottomLeftLongitude = std::stod(rectangleParams_str[0]);
                obstacle.bottomLeftLatitude = std::stod(rectangleParams_str[1]);
                obstacle.width = std::stod(rectangleParams_str[2]);
                obstacle.hight = std::stod(rectangleParams_str[3]);
                centerLonLat(obstacle);
              }
              if (obstacle.state == 'M')
              {
                if (fields[3].size() != 1)
                {
                  war(">> Parameter incorrectly defined: incorrect id");
                  continue;
                }
                obstacle.id = std::stoi(fields[3]);
              }

            }
            m_obstacles.push_back(obstacle);
            // war(">> Obstacle added successfully");
          }
        }

                    //verifica se o veículo está dentro das zonas de exlusão e chama as funções para tomarem a decisão
        int
        checkPosition(const std::vector<Obstacle> obstacles)
        {
          int avoidingcollision = 0;
          // int counter = 0;
          for (const auto &obstacle : obstacles)
          {
            double horizontalDistanceV, horizontalDistanceO; //referência é o veículo, referência é o obstáculo
            double verticalDistanceV, verticalDistanceO; //referência é o veículo, referência é o obstáculo
            double veicleObstacleDistance;

            horizontalDistanceV = lonDist2horDist(obstacle.centerLongitude - currPos.lon, currPos.lat);
            horizontalDistanceO = -horizontalDistanceV;

            verticalDistanceV = latDist2verDist(obstacle.centerLatitude - currPos.lat);
            verticalDistanceO = -verticalDistanceV;

            veicleObstacleDistance = sqrt(horizontalDistanceV*horizontalDistanceV+verticalDistanceV*verticalDistanceV);

            // war("Obstacle %d @ %fm", counter++, veicleObstacleDistance);
            // inf("I'm Here: %f %f", currPos.lon, currPos.lat);


            if (obstacle.state == 'S') //para obstáculos estáticos
            {
              if (obstacle.shape == 'C') //caso de obstáculo ter forma circular (ponto ou zona)
              {
                if (obstacle.type == 'P') //caso de obstáculo ser ponto
                {
                  if (veicleObstacleDistance < obstacle.safetyZoneDistance)
                  {
                    inf("Trying to avoid collision Static Circle Point");
                    goAroundStaticCircle(obstacle, horizontalDistanceV, verticalDistanceV);
                    avoidingcollision = 1;
                  }
                  else
                  {
                    // DO NOTHING
                  }
                }
                else if (obstacle.type == 'Z') //caso de obstáculo ser zona
                {
                  //inf("It's a static circle zone");
                  if (veicleObstacleDistance < obstacle.radius + obstacle.safetyZoneDistance)
                  {
                    inf("Trying to avoid collision Static Circle Zone");
                    goAroundStaticCircle(obstacle, horizontalDistanceV, verticalDistanceV);
                    avoidingcollision = 1;
                  }
                  else
                  {
                    //  DO NOTHING
                  }
                }
              }
              else if (obstacle.shape == 'R') //caso de obstáculo ter forma retangular
              {
                if (obstacle.type == 'P') //caso de o obstáculo ser um ponto;  Points defined with sqare shape are treated as circles
                {
                  if (veicleObstacleDistance < obstacle.safetyZoneDistance)
                  {
                    inf("Trying to avoid collision Static Rectangle Point");
                    goAroundStaticCircle(obstacle, horizontalDistanceV, verticalDistanceV);
                    avoidingcollision = 1;
                  }
                  else
                  {
                    // DO NOTHING
                  }
                }
                else if (obstacle.type == 'Z') //caso de o obstáculo ser uma zona
                {
                  if ((horizontalDistanceO < obstacle.width/2 + obstacle.safetyZoneDistance) &&
                      (horizontalDistanceO > 0 - obstacle.width/2 - obstacle.safetyZoneDistance) &&
                      (verticalDistanceO < obstacle.hight/2 + obstacle.safetyZoneDistance) &&
                      (verticalDistanceO > 0 - obstacle.hight/2 - obstacle.safetyZoneDistance)) //dentro da zona proibida
                  {
                    inf("Trying to avoid collision Static Rectangle Poin");
                    goAroundStaticRectangle(obstacle, horizontalDistanceO, verticalDistanceO);
                    avoidingcollision = 1;
                  }
                  else
                  {
                    // DO NOTHING
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
                  if (veicleObstacleDistance < obstacle.safetyZoneDistance)
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
                  if (veicleObstacleDistance < obstacle.radius + obstacle.safetyZoneDistance)
                  {
                    //getOutMovingCircle(); //*****************TODO
                    avoidingcollision = 2;
                  }
                  else if (veicleObstacleDistance < obstacle.radius + obstacle.safetyZoneDistance + obstacle.safetyZoneDistance)
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
                  if ((horizontalDistanceO < obstacle.safetyZoneDistance) &&
                      (horizontalDistanceO > 0-obstacle.safetyZoneDistance) &&
                      (verticalDistanceO < obstacle.safetyZoneDistance) &&
                      (verticalDistanceO > 0-obstacle.safetyZoneDistance))
                  {
                    //getOutMovingRectangle(); //************TODO
                    avoidingcollision = 2;
                  }
                  else if ( (horizontalDistanceO < obstacle.safetyZoneDistance) &&
                            (horizontalDistanceO > 0-obstacle.safetyZoneDistance) &&
                            (verticalDistanceO < obstacle.safetyZoneDistance) &&
                            (verticalDistanceO > 0-obstacle.safetyZoneDistance))
                  {
                    //goAroundMovingRectangle(); //**********TODO
                    avoidingcollision = 1;
                  }
                }
                else if (obstacle.type == 'Z') //caso de o obstáculo ser uma zona
                {
                  if ((horizontalDistanceO < obstacle.width/2 + obstacle.safetyZoneDistance) &&
                      (horizontalDistanceO > 0 - obstacle.width/2 - obstacle.safetyZoneDistance) &&
                      (verticalDistanceO < obstacle.hight/2 + obstacle.safetyZoneDistance) &&
                      (verticalDistanceO > 0 - obstacle.hight/2 - obstacle.safetyZoneDistance)) //dentro da zona proibida
                  {
                    //getOutMovingRectangle(); //************TODO
                    avoidingcollision = 2;
                  }
                  else if ( (horizontalDistanceO < obstacle.width/2 + obstacle.safetyZoneDistance) &&
                            (horizontalDistanceO > 0 - obstacle.width/2 - obstacle.safetyZoneDistance) &&
                            (verticalDistanceO < obstacle.hight/2 + obstacle.safetyZoneDistance) &&
                            (verticalDistanceO > 0 - obstacle.hight/2 - obstacle.safetyZoneDistance)) //dentro da zona de segurança
                  {
                    //goAroundMovingRectangle(); //**********TODO
                    avoidingcollision = 1;
                  }
                }
              }
            }
            // inf("Going to:        %f %f", m_path.end_lon, m_path.end_lat);
            // inf("Avoiding collision: %d", avoidingcollision);
          }


          //*******************************************************************************

          if (!avoidingcollision)
          {
            m_heading.value = Angles::normalizeRadian(atan2(latDist2verDist(finalPos.lat - currPos.lat), lonDist2horDist(finalPos.lon - currPos.lon, currPos.lat)));

            m_path.end_lon = finalPos.lon;
            m_path.end_lat = finalPos.lat;
          }

          // if (!avoidingcollision && m_ts.nearby) //se não está a evitar colisão, continuar para o destino final
          // {
          //   // Se estamos vindo de um desvio, atualizar para o destino original
          //   if (hasStoredOriginal)
          //   {
          //     finalPos = endPoint;
          //   }

          //   m_heading.value = Angles::normalizeRadian(atan2(latDist2verDist(finalPos.lat - currPos.lat), lonDist2horDist(finalPos.lon - currPos.lon, currPos.lat)));

          //   m_path.end_lon = finalPos.lon;
          //   m_path.end_lat = finalPos.lat;
          //   m_ts.nearby = false;
          //   finalPosChanged = false;
          //   hasStoredOriginal = false;
          // }
          //*******************************************************************************



          return avoidingcollision;
        }

        //********************Operating Functions
        //retornam a posição para onde ir diretamente em m_path.value

        int lado = -1; // +1 esquerda, -1 direita
        void
        goAroundStaticCircle(Obstacle obstacle, double veicObstHorDist, double veicObstVerDist)
        {
          inf("Avoiding collision Static Circle");

          double obstRadPosition; //posição angular do centro do obstáculo relativamente ao veículo -pi:pi
          double destRadPosition; //posição angular do próximo GoTo relativamente ao veículo -pi:pi
          double nowHeading;
          double shift = 0.35 * (obstacle.radius+obstacle.safetyZoneDistance);
          double horShift, verShift;  //meters
          double lonShift, latShift;  //degrees
          double angular_distance;    //radians

          obstRadPosition = Angles::normalizeRadian(atan2(veicObstVerDist, veicObstHorDist));
          destRadPosition = Angles::normalizeRadian(atan2(latDist2verDist(endPoint.lat-currPos.lat), lonDist2horDist(endPoint.lon-currPos.lon, currPos.lat)));
          angular_distance = Angles::normalizeRadian(destRadPosition - obstRadPosition);

          // inf("Obstacle Direction: %f", obstRadPosition/M_PI);
          // inf("Shift: %f", shift);
          // war("m_headiung.value: %f", m_heading.value);
          // inf("Angular Distance: %f", Angles::degrees(angular_distance));

          if (angular_distance > 0)
          {
            nowHeading = Angles::normalizeRadian(obstRadPosition + (M_PI/2));
          }
          else
          {
            nowHeading = Angles::normalizeRadian(obstRadPosition - (M_PI/2));
          }

          //inf("Heading Direction: %f", nowHeading*180/M_PI);
          horShift = shift * cos(Angles::normalizeRadian(nowHeading));
          verShift = shift * sin(Angles::normalizeRadian(nowHeading));

          // inf("Horizontal Shift: %f", horShift);
          // inf("Vertical Shift: %f", verShift);
          // inf("Lon/Lat center obstacle: %f %f", obstacle.centerLongitude, obstacle.centerLatitude);
          lonShift = horDist2lonDist(horShift, obstacle.centerLatitude);
          latShift = verDist2latDist(verShift);

          // war("PERIGOOOOOOO");
          // inf("obstRadPosition: %f", obstRadPosition);
          // inf("shift: %f", shift);
          // inf("horShift: %f", horShift);
          // inf("verShift: %f", verShift);
          // inf("lonShift: %f", lonShift);
          // inf("latShift: %f", latShift);
          m_path.end_lon = currPos.lon + lonShift;
          m_path.end_lat = currPos.lat + latShift;
          // m_heading.value = nowHeading;
          // inf("m_path circle:   %f %f", m_path.end_lon, m_path.end_lat);

        }




        void
        goAroundStaticRectangle(Obstacle obstacle, double veicObstHorDist, double veicObstVerDist)
        {
          war("Avoiding collision Static Rectangle");
          // inf("largura:   %f", obstacle.width);
          // inf("altura:    %f", obstacle.hight);
          // inf("HorDist:   %f", veicObstHorDist);
          // inf("VerDist:   %f", veicObstVerDist);
          // inf("SafeDist:  %f", obstacle.safetyZoneDistance);

          if ((veicObstHorDist < 0 - obstacle.width/2) &&
              (veicObstVerDist > 0 - obstacle.hight/2))      //à esquerda do obstáculo
          {
            m_path.end_lon = currPos.lon;
            m_path.end_lat = currPos.lat + verDist2latDist(obstacle.hight/2 - veicObstVerDist + obstacle.safetyZoneDistance);


            // war("AAAAAAAA");

            m_heading.value = M_PI/2;
          }
          else if ((veicObstHorDist > 0 + obstacle.width/2) &&
                   (veicObstVerDist < 0 + obstacle.hight/2))      //à direita do obstáculo
          {
            m_path.end_lon = currPos.lon;
            m_path.end_lat = currPos.lat - verDist2latDist(obstacle.hight/2 + veicObstVerDist + obstacle.safetyZoneDistance);

            // war("BBBBBBBBB");
            m_heading.value = -M_PI/2;
          }
          else if ( (veicObstVerDist > 0 + obstacle.hight/2) &&
                    (veicObstHorDist > 0 - obstacle.width/2))    //acima do obstáculo
          {
            m_path.end_lat = currPos.lat;
            m_path.end_lon = currPos.lon + horDist2lonDist(obstacle.width/2 - veicObstHorDist + obstacle.safetyZoneDistance, obstacle.centerLatitude);

            // war("CCCCCCCC");

            m_heading.value = M_PI;
          }
          else if ( (veicObstVerDist < 0 - obstacle.hight/2) &&
                    (veicObstHorDist < 0 + obstacle.width/2))    //abaixo do obstáculo
          {
            m_path.end_lat = currPos.lat;
            m_path.end_lon = currPos.lon - horDist2lonDist(obstacle.width/2 + veicObstHorDist + obstacle.safetyZoneDistance, obstacle.centerLatitude);

            // war("DDDDDDDDD");
            m_heading.value = 0;
          }

                        /*

                              -------------------------------------
                              |        .  SAFETYZONE ------->     |
                              | A      .                          |
                              | |      .                          |
                              | |      -------------------........|
                              | |      |    OBSTACLE     |      | |
                              | |      |                 |      | |
                              |........-------------------      | |
                              |                          .      | |
                              |                          .      V |
                              |                          .        |
                              -------------------------------------


                        */

        }

        //********************operating Functions END

        /* void
        onDesiredPath(const IMC::DesiredPath* dp)
        {
          PathController::onDesiredPath(dp);
          // war("DesiredPath: %f %f %d", dp->end_lon, dp->end_lat, dp->getSourceEntity());
          // war("m_path:      %f %f %d", m_path.end_lon, m_path.end_lat, m_path.getSourceEntity());
          // war("self:  %u", getEntityId());

          // if (dp->getSourceEntity() == getEntityId())
          // {

          // }
          return;
        } */

        int clic = 0;
        int contador = 1;
        void
        step(const IMC::EstimatedState& state, const TrackingState& ts)
        {
          clic++;
          war("Step----------------------------------------");
          double curr_lat = state.lat;
          double curr_lon = state.lon;
          WGS84::displace(state.x, state.y, &curr_lat, &curr_lon);
          bool dsptch = false;

          finalPos = {Angles::degrees(ts.lon_en), Angles::degrees(ts.lat_en)};

          inf("Next Pos:        %f %f", finalPos.lon, finalPos.lat);
          war("Final Pos:       %f %f", endPoint.lon, endPoint.lat);

          currPos.lon = Angles::degrees(curr_lon);          //posição atual do veículo em coordenadas geográficas para fazer
          currPos.lat = Angles::degrees(curr_lat);          //os cálculos com posição do obstáculo definidas em coordendas geográficas

          if (contador)
          {
            pathInit(curr_lat, curr_lon, ts);
            // processMessage(m_obs_msg);
            contador--;
          }

          // inf("m_path:          %f %f", m_path.end_lon, m_path.end_lat);
          // inf("speed:           %f", ts.speed);

          // inf("%s", ((ts.nearby) ? "Nearby" : "Not Nearby"));

          inf("I'm Here:        %f %f", currPos.lon, currPos.lat);
          //UNDER CONSTRUCTION*********************************************
          newPath = {Angles::degrees(m_ts.lon_en), Angles::degrees(m_ts.lat_en)};

          // inf("%d", getEntityId());
          // inf("%d", m_path.getSourceEntity());
          // inf("TrackingStat:    %f %f", newPath.lon, newPath.lat);
          // inf("Center:          %f %f", m_obstacles[1].centerLongitude, m_obstacles[1].centerLatitude);


          currAvoidState = checkPosition(m_obstacles);

          lado = (!currAvoidState) ? 0 : lado;

          if (!epIsSet && currAvoidState && !oldAvoidState)   //se o DesiredPath foi definido por este controlador e o endPoint ainda não foi definido
          {
            // war("AAAAAAAAAAAAAAAAAA");
            endPoint = {oldPath.lon, oldPath.lat};
            epIsSet = true;
          }

          // Se DEIXOU de evitar colisão, restaurar o destino original
          if (!currAvoidState && oldAvoidState && epIsSet)
          {
            war("Saiu de evasão, restaurando destino original");
            m_path.end_lon = endPoint.lon;      //restaurar o GoTo original
            m_path.end_lat = endPoint.lat;      //restaurar o GoTo original
            epIsSet = false;                    //o endPoint pode ser atualizado para o próximo GoTo
            dsptch = true;
          }

          // if(ts.getSourceEntity() != getEntityId())
          // {
          //   war("AAAAAAAAAAAAAAAAAAAAAAA\n                                                            AAAAAAAAAAAAAAAAAAAAAAA\n                                                            AAAAAAAAAAAAAAAAAAAAAAA\n                                                            AAAAAAAAAAAAAAAAAAAAAAA");
          // }

          if(newPath.lon != oldPath.lon || newPath.lat != oldPath.lat)    //verificar se o m_path.end mudou
          {
            // war("BBBBBBBBBBBBBBBBBB");

            finalPos = {newPath.lon, newPath.lat};                                           //se tiver mudado, atualizar o destino imediato
            finalPosChanged = true;
          }
          oldPath = newPath;

          // if (clic % 20 == 0)
          //   war("CLICK");

          if (!currAvoidState && m_ts.nearby && (clic % 20 == 0))
          {
            // war("CCCCCCCCCCCC");
            // Nota: Se já restaurou na lógica acima, isto não vai executar novamente
            if (epIsSet)
            {
              m_path.end_lon = endPoint.lon;      //passar o próximo GoTo
              m_path.end_lat = endPoint.lat;      //passar o próximo GoTo
              epIsSet = false;                    //o endPoint pode ser atualizado para o próximo GoTo
              m_ts.nearby = false;                //já não está próximo do destino imediato
              dsptch = true;
            }
          }



          //UNDER CONSTRUCTION END*********************************************


          if (ts.cc)
          {
            m_heading.value = Angles::normalizeRadian(m_heading.value + state.psi - ts.course);
          }

          if ( currAvoidState != oldAvoidState || dsptch)           // Se o estado de avoidance atual mudou
          {
            inf("Mudou de estado");

            // inf("m_path 2:        %f %f", m_path.end_lon, m_path.end_lat);
            m_path.end_lon = Angles::normalizeRadian(Angles::radians(m_path.end_lon));
            m_path.end_lat = Angles::normalizeRadian(Angles::radians(m_path.end_lat));

            dispatch(m_path, DF_LOOP_BACK);               // Avisar que mudamos o DesiredPath

            m_path.end_lon = Angles::degrees(m_path.end_lon);
            m_path.end_lat = Angles::degrees(m_path.end_lat);

            // setEndPoint(&m_path);                         // Alterar de facto o DesiredPath
            dsptch = false;

          }

          oldAvoidState = currAvoidState;

          //war("lat %f lon %f", curr_lat, curr_lon);

          m_heading.value = ts.los_angle;
          dispatch(m_heading);
        }
      };
    }
  }
}

DUNE_TASK
