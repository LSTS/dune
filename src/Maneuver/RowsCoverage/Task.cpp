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

    struct Task: public Maneuvers::Maneuver
    {
      static const float c_min_alt = 0.3;
      static const int c_avrg_size = 4;

      IMC::RowsCoverage m_maneuver;
      IMC::EstimatedState m_state;
      IMC::DesiredPath m_path;

      Maneuvers::RowsStages* m_stages_parser;

      float m_alt_min;
      double m_cov_pred;
      double m_cov_actual_min;

      Math::MovingAverage<float> m_alt_avrg;

      uInt m_stage = 0;

      //! Constructor.
      //! @param[in] name task name.
      //! @param[in] ctx context.
      Task(const std::string& name, Tasks::Context& ctx):
        Maneuvers::Maneuver(name, ctx)
      {
        m_alt_avrg = Math::MovingAverage<double>(c_avrg_size);

        bindToManeuver<Task, IMC::RowsCoverage>();
        bind<IMC::EstimatedState>(this);
      }

      //! Destructor
      virtual
      ~Task(void)
      { }

      void
      onManeuverDeactivation(void)
      {
        Memory::clear(m_parser);
      }

      void
      consume(const IMC::RowsCoverage* maneuver)
      {
        if (maneuver->getSource() != getSystemId())
          return;

        m_maneuver = *maneuver;

        double hstep = 2 * maneuver->range * std::sin(maneuver->apperture / 2);
        hstep = hstep * (1 - maneuver->overlap / 100);

        m_alt_min = -1;
        m_cov_pred = hstep;
        m_cov_actual_min = m_cov_pred;

        m_alt_avrg.clear();

        uInt stage = 0;

        Memory::clear(m_parser);

        // parameters initialization
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

        dispatch(m_path);
      }

      void
      consume(const IMC::EstimatedState* msg)
      {
        if (msg->getSource() != getSystemId())
          return;

        if (msg->alt > c_min_alt)
        {
          m_alt_avrg.update(msg->alt);
          if (m_alt_avrg.sampleSize() >= c_avrg_size) {
            float avg = m_alt_avrg.mean();
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

        signalProgress(pcs->eta, ss.str());

        if (!(pcs->flags & IMC::PathControlState::FL_NEAR))
          return;

        double lat;
        double lon;

        bool res;
        switch (m_stage) {
          case 2:
            m_alt_min = std::min(m_alt_min, m_alt_avrg.mean());
            float min = m_alt_min;
            m_alt_avrg.clear();
            m_alt_min = -1;
            if (min > 0)
            {
              m_cov_actual_min = 2 * min * std::tan(m_maneuver.apperture / 2);
              m_cov_actual_min = m_cov_actual_min * (1 - m_maneuver.overlap / 100);
              double new_hstep = std::min(m_cov_pred, m_cov_actual_min);
              res = m_stages_parser->getNextPoint(&lat, &lon, new_hstep);
            }
            else
            {
              res = m_stages_parser->getNextPoint(&lat, &lon);
            }
            break;
          default:
            m_alt_avrg.clear();
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
        int stage_max = 2;
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

//      //! Main loop.
//      void
//      onMain(void)
//      {
//        while (!stopping())
//        {
//          waitForMessages(1.0);
//        }
//      }
    };
  }
}

DUNE_TASK
