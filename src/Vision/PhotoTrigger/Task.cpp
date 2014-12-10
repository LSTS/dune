//***************************************************************************
// Copyright 2007-2014 Universidade do Porto - Faculdade de Engenharia      *
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
// https://www.lsts.pt/dune/licence.                                        *
//***************************************************************************
// Author: João Fortuna                                                     *
//***************************************************************************

// DUNE headers.
#include <DUNE/DUNE.hpp>

namespace Vision
{
  namespace PhotoTrigger
  {
    using DUNE_NAMESPACES;

    struct Arguments
    {
      //! Shooting Method
      bool dist_trigger;
      //! Shooting Period.
      float freq;
      //! Desired Overlap
      float overlap;
      //! Vertical Resolution
      int resol;
      //! Focal Length (35mm equivalent)
      float focal_l;
      //! Distance to surface
      int altitude;
    };

    struct Task: public DUNE::Tasks::Task
    {
      //! Task arguments.
      Arguments m_args;

      //! Trigger period
      float m_period;
      //! Current position
      double m_lat;
      double m_lon;
      float m_hei;
      //! Last picture position
      double m_prev_lat;
      double m_prev_lon;
      float m_prev_hei;
      //! Distance between shots
      float m_distance;

      //! Constructor.
      //! @param[in] name task name.
      //! @param[in] ctx context.
      Task(const std::string& name, Tasks::Context& ctx):
        DUNE::Tasks::Task(name, ctx),
        m_lat(0),
        m_lon(0),
        m_hei(0),
        m_prev_lat(0),
        m_prev_lon(0),
        m_prev_hei(0),
        m_distance(0)
      {
        // Define configuration parameters.
        paramActive(Tasks::Parameter::SCOPE_MANEUVER,
                    Tasks::Parameter::VISIBILITY_USER);

        param("Trigger with distance", m_args.dist_trigger)
        .defaultValue("false")
        .description("Trigger by using overlap value and distance to previous shot");

        param("Trigger Frequency", m_args.freq)
        .defaultValue("0.4")
        .units(Units::Hertz)
        .maximumValue("1.0")
        .description("Frequency of photo shots");

        param("Photo Overlap", m_args.overlap)
        .defaultValue("0.5")
        .maximumValue("1.0")
        .description("Overlap between consecutive shots");

        param("Focal Length", m_args.focal_l)
        .defaultValue("24")
        .description("Focal length in mm, equivalent to 35mm sensor");

        param("Altitude", m_args.altitude)
        .defaultValue("100")
        .description("Distance to surface (sea or ground)");

        bind<EstimatedState>(this);
      }

      void
      onUpdateParameters(void)
      {
        m_period = 1.0 / m_args.freq;

        // 24mm is the vertical size of a 35mm sensor
        m_distance = m_args.overlap * m_args.altitude * 24 / m_args.focal_l;
      }

      void
      consume(const IMC::EstimatedState* e_state)
      {
        if (e_state->getSource() != getSystemId())
          return;

        Coordinates::toWGS84(*e_state, m_lat, m_lon, m_hei);

        if(!m_args.dist_trigger)
          return;

        float dist = WGS84::distance(m_prev_lat, m_prev_lon, m_prev_hei,
                                     m_lat, m_lon, m_hei);

        if(dist >= m_distance)
        {
          trigger();
          m_prev_lat = m_lat;
          m_prev_lon = m_lon;
          m_prev_hei = m_hei;
        }
      }

      void
      trigger(void)
      {
        IMC::PowerChannelControl pcc;
        IMC::LogBookEntry log_entry;

        pcc.name = "Photo Trigger";
        pcc.op = IMC::PowerChannelControl::PCC_OP_TURN_ON;
        dispatch(pcc);
        log_entry.type = IMC::LogBookEntry::LBET_INFO;
        log_entry.context = "Photo Trigger";
        std::ostringstream ss;
        ss << m_lat << ", " << m_lon << ", " << m_hei;
        log_entry.text = ss.str();
        Delay::wait(0.2);
        pcc.op = IMC::PowerChannelControl::PCC_OP_TURN_OFF;
        dispatch(log_entry);
        dispatch(pcc);
      }

      void
      sendPulse(void)
      {
        trigger();
        Delay::wait(m_period - 0.2);
      }

      //! Main loop.
      void
      onMain(void)
      {
        while (!stopping())
        {
          if (isActive())
          {
            consumeMessages();

            // In case of fixed frequency shots
            if(!m_args.dist_trigger)
              sendPulse();
          }
          else
          {
            waitForMessages(1.0);
          }
        }
      }
    };
  }
}

DUNE_TASK
