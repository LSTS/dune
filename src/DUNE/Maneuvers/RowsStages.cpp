//***************************************************************************
// Copyright 2007-2022 Universidade do Porto - Faculdade de Engenharia      *
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
// Author: Eduardo Marques (original stage implementation)                  *
// Author: Pedro Calado                                                     *
// Author: Paulo Dias                                                       *
//***************************************************************************

// DUNE headers.
#include <DUNE/Maneuvers/RowsStages.hpp>
#include <DUNE/Coordinates/WGS84.hpp>
#include <DUNE/Math/Angles.hpp>

using namespace DUNE::Math;
using namespace DUNE::Coordinates;

namespace DUNE
{
  namespace Maneuvers
  {
    //! Value for y coordinate close to zero
    static const float c_y_margin = 1e-03;
    //! Minimum safety threshold.
    static const float c_min = 1e-03;

    RowsStages::RowsStages(const IMC::Rows* maneuver, Tasks::Task* task)
    {
      m_lat = maneuver->lat;
      m_lon = maneuver->lon;
      m_bearing = maneuver->bearing;
      m_cross_angle = maneuver->cross_angle;
      m_width = maneuver->width;
      m_length = maneuver->length;
      m_hstep = maneuver->hstep;
      m_coff = maneuver->coff;
      m_alternation = maneuver->alternation;
      m_flags = maneuver->flags;

      // Save a pointer to the task to call debug message
      m_task = task;

      initialize();
    }

    //! Default constructor.
    RowsStages::RowsStages(const fp64_t lat, const fp64_t lon,
        const fp64_t bearing, const fp64_t cross_angle, const fp32_t width,
        const fp32_t length, const fp32_t hstep, const uint8_t coff,
        const uint8_t alternation, const uint8_t flags, Tasks::Task* task)
    {
      m_lat = lat;
      m_lon = lon;
      m_bearing = bearing;
      m_cross_angle = cross_angle;
      m_width = width;
      m_length = length;
      m_hstep = hstep;
      m_coff = coff;
      m_alternation = alternation;
      m_flags = flags;

      // Save a pointer to the task to call debug message
      m_task = task;

      initialize();
    }

    void
    RowsStages::initialize()
    {
      if (m_width < c_min || m_length < c_min || m_hstep < c_min)
      {
        throw std::runtime_error(DTR("invalid maneuver parameters"));
        return;
      }

      m_hstep_updated = m_hstep;

      double curve_sign = curveRight() ? 1 : -1;
      double alt_frac_up = 0.01 * (double)m_alternation;
      double alt_frac_down = 2 - 0.01 * (double)m_alternation;

      m_stages.clear();

      Stage approach("approach", -m_coff, 0);
      m_stages.push_back(approach);

      Stage start_point("start", m_coff, 0);
      m_stages.push_back(start_point);

      Stage up("up", m_length + m_coff, 0);

      m_stages.push_back(up);

      Stage up_curve("begin curve (up)", 0, curve_sign * alt_frac_up * m_hstep);
      Stage up_curve_end("end curve (up)", -m_coff, 0);

      if (!squareCurve())
      {
        Angles::rotate(m_cross_angle, curveLeft(), up_curve.x, up_curve.y);
        up_curve.x -= m_coff;
        m_stages.push_back(up_curve);
      }
      else
      {
        Angles::rotate(m_cross_angle, curveLeft(), up_curve.x, up_curve.y);
        m_stages.push_back(up_curve);
        m_stages.push_back(up_curve_end);
      }

      Stage down("down", -up.x, 0);
      m_stages.push_back(down);

      Stage down_curve("begin curve (down)", 0, curve_sign * alt_frac_down * m_hstep);
      Stage down_curve_end("end curve (down)", -up_curve_end.x, 0);

      if (!squareCurve())
      {
        Angles::rotate(m_cross_angle, curveLeft(), down_curve.x, down_curve.y);
        down_curve.x += m_coff;
        m_stages.push_back(down_curve);
      }
      else
      {
        Angles::rotate(m_cross_angle, curveLeft(), down_curve.x, down_curve.y);
        m_stages.push_back(down_curve);
        m_stages.push_back(down_curve_end);
      }

      if (m_task != NULL)
      {
        m_task->debug("-- row stages and offsets -- ");
        for (uint8_t i = 0; i < m_stages.size(); ++i)
        {
          m_task->debug("%s | %0.2f %0.2f", m_stages[i].label,
                        m_stages[i].x, m_stages[i].y);
        }
      }

      // Other init
      m_curr = 0;
      m_sabs = Stage("undefined", 0, 0);
      m_index = 0;
    }

    bool
    RowsStages::getFirstPoint(double* lat, double* lon)
    {
      return getPoint(lat, lon);
    }

    bool
    RowsStages::getNextPoint(double* lat, double* lon, double new_hstep)
    {
      ++m_curr;

      if (m_curr == m_stages.size())
        m_curr = 2;

      if (new_hstep != 0)
        m_hstep_updated = new_hstep;
      else
        m_hstep_updated = m_hstep;

      return getPoint(lat, lon);
    }

    float
    RowsStages::getDistance(double* lat, double* lon)
    {
      return computeDistance(lat, lon);
    }

    float
    RowsStages::computeDistance(double* lat, double* lon)
    {
      RowsStages::Stage last("", 0.0, 0.0);
      RowsStages::Stage zero("", 0.0, 0.0);

      float total_distance = 0.0;
      int curves = (int)std::floor(m_width / m_hstep);
      unsigned curr = 0;
      float range;

      last.x += m_stages[0].x;
      last.y += m_stages[0].y;
      range = Coordinates::getRange(m_stages[0], zero);
      total_distance += range;
      m_all_distances.push_back(range);

      while (true)
      {
        ++curr;

        if (curr == m_stages.size())
          curr = 2;

        if (std::fabs(m_stages[curr].y) > c_y_margin)
        {
          if (!curves)
            break;

          --curves;
        }

        last.x += m_stages[curr].x;
        last.y += m_stages[curr].y;

        range = Coordinates::getRange(m_stages[curr], zero);
        total_distance += range;
        m_all_distances.push_back(range);
      }

      Angles::rotate(m_bearing, false, last.x, last.y);

      *lat = m_lat;
      *lon = m_lon;
      Coordinates::WGS84::displace(last.x, last.y, lat, lon);

      return total_distance;
    }

    bool
    RowsStages::getPoint(double* lat, double* lon)
    {
      const RowsStages::Stage& new_stage = m_stages[m_curr];
      m_sabs.label = new_stage.label;

      double adx = new_stage.x;
      double ady = new_stage.y;

      if (m_hstep != m_hstep_updated)
      {
        if (m_cross_angle != 0.0)
          Angles::rotate(-m_cross_angle, curveLeft(), adx, ady);
        ady = ady * m_hstep_updated / m_hstep;
        if (m_cross_angle != 0.0)
          Angles::rotate(m_cross_angle, curveLeft(), adx, ady);
      }

      m_sabs.x += adx;
      m_sabs.y += ady;

      if (std::fabs(ady) > c_y_margin)
      {
        if (std::abs(m_sabs.y) > m_width)
          return true;
      }

      // Rotate according to row maneuver bearing angle
      double dx = m_sabs.x, dy = m_sabs.y;

      Angles::rotate(m_bearing, false, dx, dy);

      if (m_task != NULL)
        m_task->debug("%0.2f %0.2f -- %s", dx, dy, m_sabs.label);

      // Calculate WGS-84 coordinates and fill DesiredPath message
      *lat = m_lat;
      *lon = m_lon;
      Coordinates::WGS84::displace(dx, dy, lat, lon);

      ++m_index;

      return false;
    }
  }
}
