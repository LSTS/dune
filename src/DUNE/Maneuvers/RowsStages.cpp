//***************************************************************************
// Copyright (C) 2007-2013 Laboratório de Sistemas e Tecnologia Subaquática *
// Departamento de Engenharia Electrotécnica e de Computadores              *
// Rua Dr. Roberto Frias, 4200-465 Porto, Portugal                          *
//***************************************************************************
// Author: Eduardo Marques (original stage implementation)                  *
// Author: Pedro Calado                                                     *
//***************************************************************************
// $Id:: RowsStages.cpp 12968 2013-02-19 18:47:54Z pdcalado               $:*
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

    //! Default constructor.
    RowsStages::RowsStages(const IMC::Rows* maneuver, Tasks::Task* task)
    {
      // Setup offsets (without bearing rotation)
      m_man = *maneuver;
      // Save a pointer to the task to call debug message
      m_task = task;

      double curve_sign = curveRight() ? 1 : -1;
      double alt_frac_up = 0.01 * (double)m_man.alternation;
      double alt_frac_down = 2 - 0.01 * (double)m_man.alternation;

      m_stages.clear();

      Stage approach("approach", -m_man.coff, 0);
      m_stages.push_back(approach);

      Stage start_point("start", m_man.coff, 0);
      m_stages.push_back(start_point);

      Stage up("up", m_man.length + m_man.coff, 0);

      m_stages.push_back(up);

      Stage up_curve("begin curve (up)", 0, curve_sign * alt_frac_up * m_man.hstep);
      Stage up_curve_end("end curve (up)", -m_man.coff, 0);

      if (!squareCurve())
      {
        Angles::rotate(m_man.cross_angle, curveLeft(), up_curve.x, up_curve.y);
        up_curve.x -= m_man.coff;
        m_stages.push_back(up_curve);
      }
      else
      {
        Angles::rotate(m_man.cross_angle, curveLeft(), up_curve.x, up_curve.y);
        m_stages.push_back(up_curve);
        m_stages.push_back(up_curve_end);
      }

      Stage down("down", -up.x, 0);
      m_stages.push_back(down);

      Stage down_curve("begin curve (down)", 0, curve_sign * alt_frac_down * m_man.hstep);
      Stage down_curve_end("end curve (down)", -up_curve_end.x, 0);

      if (!squareCurve())
      {
        Angles::rotate(m_man.cross_angle, curveLeft(), down_curve.x, down_curve.y);
        down_curve.x += m_man.coff;
        m_stages.push_back(down_curve);
      }
      else
      {
        Angles::rotate(m_man.cross_angle, curveLeft(), down_curve.x, down_curve.y);
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
      m_curves = (int)std::floor(m_man.width / m_man.hstep);
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
    RowsStages::getNextPoint(double* lat, double* lon)
    {
      ++m_curr;

      if (m_curr == m_stages.size())
        m_curr = 2;

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
      int curves = (int)std::floor(m_man.width / m_man.hstep);
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

      Angles::rotate(m_man.bearing, false, last.x, last.y);

      *lat = m_man.lat;
      *lon = m_man.lon;
      Coordinates::WGS84::displace(last.x, last.y, lat, lon);

      return total_distance;
    }

    bool
    RowsStages::getPoint(double* lat, double* lon)
    {
      const RowsStages::Stage& new_stage = m_stages[m_curr];
      m_sabs.label = new_stage.label;
      m_sabs.x += new_stage.x;
      m_sabs.y += new_stage.y;

      if (std::fabs(new_stage.y) > c_y_margin)
      {
        if (!m_curves)
          return true;

        --m_curves;
      }

      // Rotate according to row maneuver bearing angle
      double dx = m_sabs.x, dy = m_sabs.y;

      Angles::rotate(m_man.bearing, false, dx, dy);

      if (m_task != NULL)
        m_task->debug("%0.2f %0.2f -- %s", dx, dy, m_sabs.label);

      // Calculate WGS-84 coordinates and fill DesiredPath message
      *lat = m_man.lat;
      *lon = m_man.lon;
      Coordinates::WGS84::displace(dx, dy, lat, lon);

      ++m_index;

      return false;
    }
  }
}
