//***************************************************************************
// Copyright 2007-2016 Universidade do Porto - Faculdade de Engenharia      *
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
// Author: Paulo Dias                                                       *
// Author: Pedro Calado (Implementation of original Rows maneuver)          *
//***************************************************************************

// DUNE headers.
#include <DUNE/DUNE.hpp>

namespace Maneuver
{
  namespace RowsCoverage
  {
    using DUNE_NAMESPACES;

    static const float c_min_alt = 0.3;

    struct Arguments
    {
      //! Altitude Moving Average Samples
      double altitude_average_size;
    };

    struct Task: public Maneuvers::Maneuver
    {
      //! Maneuver
      IMC::RowsCoverage m_maneuver;
      //! EstimatedState
      IMC::EstimatedState m_state;
      //! DesiredPath
      IMC::DesiredPath m_path;
      //! Rows stages parser
      Maneuvers::RowsStages* m_stages_parser;
      //! Minimum altitude holder for hstep calculation
      float m_alt_min;
      //! Predicted coverage
      double m_cov_pred;
      //! Calculated coverage with min. altitude
      double m_cov_actual_min;
      //! Current hstep in use
      double m_cur_hstep;
      //! Moving average for min. altitude  calculation
      Math::MovingAverage<float>* m_alt_avrg;
      //! Stage counter
      unsigned int m_stage;
      //! Task arguments
      Arguments m_args;

      //! Constructor.
      //! @param[in] name task name.
      //! @param[in] ctx context.
      Task(const std::string& name, Tasks::Context& ctx):
        DUNE::Maneuvers::Maneuver(name, ctx)
      {
        param("Altitude Moving Average Samples", m_args.altitude_average_size)
        .defaultValue("40")
        .minimumValue("5")
        .description("Number of moving average samples to smooth altitude measurements");

        m_stage = 0;
        m_alt_avrg = new Math::MovingAverage<float>(m_args.altitude_average_size);

        bindToManeuver<Task, IMC::RowsCoverage>();
        bind<IMC::EstimatedState>(this);
      }

      //! Destructor
      virtual
      ~Task(void)
      {
        Memory::clear(m_stages_parser);
        Memory::clear(m_alt_avrg);
      }

      void
      onManeuverDeactivation(void)
      {
        Memory::clear(m_stages_parser);
      }

      void
      consume(const IMC::RowsCoverage* maneuver)
      {
        if (maneuver->getSource() != getSystemId())
          return;

        m_maneuver = *maneuver;

        double hstep;
        if (maneuver->angaperture <= 0)
          hstep = 2 * maneuver->range;
        else
          hstep = 2 * maneuver->range * std::sin(maneuver->angaperture / 2);

        m_alt_min = -1;
        m_cov_pred = hstep * (1 - maneuver->overlap / 200.);
        m_cov_actual_min = m_cov_pred;
        m_cur_hstep = m_cov_pred;

        m_stage = 0;

        Memory::clear(m_alt_avrg);
        m_alt_avrg = new Math::MovingAverage<float>(m_args.altitude_average_size);

        Memory::clear(m_stages_parser);
        m_stages_parser = new Maneuvers::RowsStages(maneuver->lat, maneuver->lon,
            maneuver->bearing, maneuver->cross_angle, maneuver->width, maneuver->length,
            hstep, maneuver->coff, 100, maneuver->flags, this);

        setControl(IMC::CL_PATH);
        m_path.speed = maneuver->speed;
        m_path.speed_units = maneuver->speed_units;
        m_path.end_z = maneuver->z;
        m_path.end_z_units = maneuver->z_units;

        double lat;
        double lon;

        if (m_stages_parser->getFirstPoint(&lat, &lon))
        {
          signalCompletion();
          return;
        }

        sendPath(lat, lon);
      }

      void
      consume(const IMC::EstimatedState* msg)
      {
        if (msg->getSource() != getSystemId())
          return;

        if (msg->alt > c_min_alt)
        {
          m_alt_avrg->update(msg->alt);
          if (m_alt_avrg->sampleSize() >= m_alt_avrg->windowSize()) {
            float avg = m_alt_avrg->mean();
            if (m_alt_min < 0)
              m_alt_min = avg;
            else
              m_alt_min = std::min(m_alt_min, avg);
          }
        }
      }

      //! On PathControlState message
      //! @param[in] pcs pointer to PathControlState message
      void
      onPathControlState(const IMC::PathControlState* pcs)
      {
        std::stringstream ss;
        ss << "waypoint=" << m_stages_parser->getIndex();
        ss << "; stage=" << m_stage;
        ss << "; minAlt=" << m_alt_min;
        ss << "; curHstep=" << m_cur_hstep;
        ss << "; stdHstep=" << m_cov_pred;

        signalProgress(pcs->eta, ss.str());

        if (!(pcs->flags & IMC::PathControlState::FL_NEAR))
          return;

        double lat;
        double lon;

        bool res;
        switch (m_stage) {
          case 2:
            m_alt_min = std::min(m_alt_min, m_alt_avrg->mean());
            float min;
            min = m_alt_min;
            m_alt_avrg->clear();
            m_alt_min = -1;
            if (min > 0)
            {
              m_cov_actual_min = 2 * min * std::tan(m_maneuver.angaperture / 2);
              m_cov_actual_min = m_cov_actual_min * (1 - m_maneuver.overlap / 200.);
              m_cur_hstep = std::min(m_cov_pred, m_cov_actual_min);
              res = m_stages_parser->getNextPoint(&lat, &lon, m_cur_hstep);
            }
            else
            {
              m_cur_hstep = m_cov_pred;
              res = m_stages_parser->getNextPoint(&lat, &lon, m_cur_hstep);
            }
            break;
          default:
            m_alt_avrg->clear();
            m_alt_min = -1;
            res = m_stages_parser->getNextPoint(&lat, &lon);
            break;
        }

        if (res)
        {
          signalCompletion();
          return;
        }

        m_stage++;
        unsigned int stage_max = 2;
        if ((m_maneuver.flags & IMC::RowsCoverage::FLG_SQUARE_CURVE) != 0)
          stage_max = 3;
        if (m_stage > stage_max)
          m_stage = 1;

        sendPath(lat, lon);
      }

      //! Send new desired path
      //! @param[in] lat latitude for new desired path
      //! @param[in] lon longitude for new desired path
      void
      sendPath(double lat, double lon)
      {
        // Calculate WGS-84 coordinates and fill DesiredPath message
        m_path.end_lat = lat;
        m_path.end_lon = lon;
        m_path.flags = 0;
        dispatch(m_path);
      }
    };
  }
}

DUNE_TASK
