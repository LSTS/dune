//***************************************************************************
// Copyright 2007-2026 Universidade do Porto - Faculdade de Engenharia      *
// Laboratório de Sistemas e Tecnologia Subaquática (LSTS)                  *
//***************************************************************************
// This file is part of DUNE: Unified Navigation Environment.               *
//                                                                          *
// Commercial Licence Usage                                                 *
// Licencees holding valid commercial DUNE licences may use this file in    *
// accordance with the commercial licence agreement provided with the       *
// Software or, alternatively, in accordance with the terms contained in a  *
// written agreement between you and Universidade do Porto. For licensing   *
// terms, conditions, and further information contact lsts@fe.up.pt.        *
//                                                                          *
// European Union Public Licence - EUPL v.1.1 Usage                         *
// Alternatively, this file may be used under the terms of the EUPL,        *
// Version 1.1 only (the "Licence"), appearing in the file LICENCE.md       *
// included in the packaging of this file. You may not use this work        *
// except in compliance with the Licence. Unless required by applicable     *
// law or agreed to in writing, software distributed under the Licence is   *
// distributed on an "AS IS" basis, WITHOUT WARRANTIES OR CONDITIONS OF     *
// ANY KIND, either express or implied. See the Licence for the specific    *
// language governing permissions and limitations at                        *
// http://ec.europa.eu/idabc/eupl.html.                                     *
//***************************************************************************
// Author: Luís Venâncio                                                    *
//***************************************************************************

#ifndef MANEUVER_SAMPLING_MOVING_DORIS_HPP_INCLUDED_
#define MANEUVER_SAMPLING_MOVING_DORIS_HPP_INCLUDED_

// DUNE Headers
#include <DUNE/DUNE.hpp>

// Local Headers
#include "BasicSampler.hpp"

namespace Maneuver
{
  namespace Sampling
  {
    using DUNE_NAMESPACES;

    //! Basic sampler
    class MovingDoris: public BasicSampler
    {
    public:
      //! Maneuver arguments.
      struct Arguments
      {
        float radius = -1.0f;
        float speed = -1.0f;
        float bearing = 0.0f;
      };

      enum MovingDorisState
      {
        MD_MOVE_TO_TARGET,
        MD_SAMPLING,
      };

      //! Maneuver arguments.
      Arguments m_args;
      //! Current state of the MovingDoris maneuver.
      MovingDorisState m_state;
      //! Desired path for points p1 and p2.
      IMC::DesiredPath m_path_p[2];
      //! Next point index
      uint8_t m_next_point = 0;
      //! Timeout timer.
      DUNE::Time::Counter<float> m_timeout_timer;
      //! Setup timeout.
      const float m_setup_timeout = 10.0f;
      //! Sampling timeout.
      const float m_sampling_timeout = 5.0f;

      //! Default constructor.
      MovingDoris(DUNE::Maneuvers::Maneuver* task, const std::string& args):
        BasicSampler(task, "MovingDoris"),
        m_args(parseArguments(args)),
        m_state(MD_MOVE_TO_TARGET)
      { }

      ~MovingDoris()
      { }

      void
      onReset(void)
      { }

      void
      onInit(const DUNE::IMC::Sampling* msg)
      {
        // Set control loops
        m_task->setControl(IMC::CL_PATH);

        // Send to target
        IMC::DesiredPath path;
        path.end_lat = msg->lat;
        path.end_lon = msg->lon;
        path.end_z = 0.0;
        path.end_z_units = ZUnits::Z_DEPTH;
        path.speed = msg->speed;
        path.speed_units = msg->speed_units;
        path.flags |= IMC::DesiredPath::FL_DIRECT;
        m_task->dispatch(path);
        m_state = MD_MOVE_TO_TARGET;

 
        // Get bearing
        // double bearing, range;
        // double lat, lon;
        // toWGS84(m_estate, lat, lon);
        // WGS84::getNEBearingAndRange(lat, lon, target_lat, target_lon, &bearing, &range);

        // Compute P1 and P2 offsets
        double p1_x = m_args.radius * std::cos(m_args.bearing);
        double p1_y = m_args.radius * std::sin(m_args.bearing);
        double p2_x = m_args.radius * std::cos(m_args.bearing + c_pi);
        double p2_y = m_args.radius * std::sin(m_args.bearing + c_pi);

        // Compute P1 and P2 coordinates
        double p1_lat = msg->lat;
        double p1_lon = msg->lon;
        double p2_lat = msg->lat;
        double p2_lon = msg->lon;

        WGS84::displace(p1_x, p1_y, &p1_lat, &p1_lon);
        WGS84::displace(p2_x, p2_y, &p2_lat, &p2_lon);

        // Build desired paths for points p1 and p2 
        m_path_p[0].end_lat = p1_lat;
        m_path_p[0].end_lon = p1_lon;
        m_path_p[0].end_z = 0.0;
        m_path_p[0].end_z_units = ZUnits::Z_DEPTH;
        m_path_p[0].speed = m_args.speed;
        m_path_p[0].speed_units = SpeedUnits::SUNITS_METERS_PS;

        m_path_p[1] = m_path_p[0];
        m_path_p[1].end_lat = p2_lat;
        m_path_p[1].end_lon = p2_lon;

        debug("Moving to sampling point...");
      }

      void
      onPathControlState(const DUNE::IMC::PathControlState* msg)
      {
        switch (m_state)
        {
        case MD_MOVE_TO_TARGET:
          if (msg->flags & IMC::PathControlState::FL_NEAR)
          {
            debug("Reached sampling point, starting sampling...");
            sendToNextPoint();
            m_state = MD_SAMPLING;
            m_timeout_timer.setTop(300.0);
          }
          break;
        
        case MD_SAMPLING:
          if (msg->flags & IMC::PathControlState::FL_NEAR)
          {
            sendToNextPoint();
          }
          break;

        default:
          break;
        }
      }

      void
      onEstimatedState(const DUNE::IMC::EstimatedState* msg)
      {
        
      }

      void
      onSamplingAction(const DUNE::IMC::SamplingAction* msg)
      {
        
      }

      void
      run(void)
      {
        switch (m_state)
        {
        case MD_MOVE_TO_TARGET:
          /* code */
          break;

        case MD_SAMPLING:
          if (m_timeout_timer.overflow())
          {
            debug("Sampling timeout reached, stopping maneuver...");
            m_task->signalCompletion();
          }
          break;
        
        default:
          break;
        }

        m_task->signalProgress();
      }

    private:
      static Arguments
      parseArguments(const std::string& args)
      {
        TupleList args_list(args);
        auto args_map = args_list.getMapReversed();

        Arguments parsed_args;

        parsed_args.radius = getRequiredArgument<float>(args_map, "Radius");
        if (parsed_args.radius <= 0.0f)
          throw std::runtime_error("Invalid sampling radius.");

        parsed_args.speed = getRequiredArgument<float>(args_map, "Speed");
        if (parsed_args.speed <= 0.0f)
          throw std::runtime_error("Invalid sampling speed.");

        parsed_args.bearing = getRequiredArgument<float>(args_map, "Bearing");
        parsed_args.bearing = Angles::normalizeRadian(Angles::radians(parsed_args.bearing));

        return parsed_args;
      }

      void
      sendToNextPoint()
      {
        debug("Switching point...");
        m_task->dispatch(m_path_p[m_next_point]);
        m_next_point = (m_next_point + 1) % 2;
      }
    };
  }
}

#endif


