//***************************************************************************
// Copyright 2007-2015 Universidade do Porto - Faculdade de Engenharia      *
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
// Author: Joao Fortuna                                                     *
//***************************************************************************

// Covers an area defined by a polygon
// Intended for any kind of vehicle

// DUNE headers.
#include <DUNE/DUNE.hpp>

namespace Maneuver
{
  namespace CoverArea
  {
    using DUNE_NAMESPACES;

    struct Task: public DUNE::Maneuvers::Maneuver
    {
      IMC::CoverArea m_maneuver;
      IMC::EstimatedState m_estate;
      Math::Matrix m_rows;
      IMC::DesiredPath m_path;
      bool m_moving, m_increase_row, m_arrived, m_last_on_row;
      int m_current_row, m_times, m_param_times;
      double m_lat, m_lon, m_z, m_next_lat, m_next_lon, m_param_width;

      Task(const std::string& name, Tasks::Context& ctx):
        DUNE::Maneuvers::Maneuver(name, ctx)
      {
        bindToManeuver<Task, IMC::CoverArea>();
        bind<IMC::EstimatedState>(this);
        //    bind<Task, IMC::EstimatedStreamVelocity>(*this);

        param("Laps", m_param_times)
        .description("How many times should it cover the area")
        .defaultValue("1");

        param("Row Width", m_param_width)
        .description("Width in meters of the rows")
        .defaultValue("300.0");
      }

      void
      onActivation(void)
      {
        resetVar();
      }

      void
      resetVar(void)
      {
        m_rows = Matrix();
        m_current_row = -1;
        m_increase_row = false;
        m_moving = false;
        m_arrived = true;
        m_last_on_row = true;
        m_times = m_param_times;
      }

      Math::Matrix
      intersectSegments(const Math::Matrix& seg1, const Math::Matrix& seg2, bool* isInSegment)
      {
        double m1 = (seg1(1, 1) - seg1(1, 0)) / (seg1(0, 1) - seg1(0, 0));
        double m2 = (seg2(1, 1) - seg2(1, 0)) / (seg2(0, 1) - seg2(0, 0));

        double b1 = seg1(1, 0) - m1 * seg1(0, 0);
        double b2 = seg2(1, 0) - m2 * seg2(0, 0);
        double xi = (b2 - b1) / (m1 - m2);
        double yi = m1 * xi + b1;

        if((std::abs(b1 - b2) < 0.5) && (std::abs(m1 - m2) < 0.5))
            *isInSegment = false;
        else
            *isInSegment = (std::abs(xi-seg1(0, 0)) <= std::abs(seg1(0, 0) - seg1(0, 1)))
            && (std::abs(xi - seg1(0, 1)) <= std::abs(seg1(0, 0) - seg1(0, 1)))
            && (std::abs(xi - seg2(0, 0)) <= std::abs(seg2(0, 0) - seg2(0, 1)))
            && (std::abs(xi - seg2(0, 1)) <= std::abs(seg2(0, 0) - seg2(0, 1)));
        //checking if the intersection happens inside the segments

        Math::Matrix intersection;
        double data[] = {xi, yi};
        intersection = Matrix(data, 2, 1);
        return intersection;
      }

      Math::Matrix
      intersectSegmentPolygon(const Math::Matrix& poly, double height)
      {
        Math::Matrix segment, easting_row, intersection, intersected;
        easting_row = poly.row(0);
        int sides = poly.columns();
        double data[] = {min(easting_row) - 10, max(easting_row) + 10, height, height};
        segment = Matrix(data, 2, 2);
        bool in_poly = false;
        int intersect_found = 0;

        for(int i = 0; i < sides; i++)
        {
          if(i < sides - 1)
            intersection = intersectSegments(poly.get(0, 1, i, i + 1), segment, &in_poly);
          else
          {
            double coords[] = {poly(0, sides - 1), poly(0, 0), poly(1, sides - 1), poly(1, 0)};
            Math::Matrix wrap_side = Matrix(coords, 2, 2);
            intersection = intersectSegments(wrap_side, segment, &in_poly);
          }

          if(in_poly)
          {
            if(intersect_found)
              intersected = intersected.horzCat(intersection);
            else
              intersected = Matrix(intersection);

            intersect_found++;
          }

          if(intersect_found == 2)
            break;
        }

        return intersected;
      }

      Math::Matrix
      getRows(const Math::Matrix& poly, double direction, double width, double diam)
      {
        int n_rows = (int)std::ceil(diam / width);
        double row_width = diam / n_rows;
        double offset = row_width / 2;
        double lower_north;
        Math::Matrix rows, rotation, rotated_poly, northing_row;
        double data[] = {std::cos(-direction), -std::sin(-direction), std::sin(-direction), std::cos(-direction)};
        rotation = Matrix(data, 2, 2);
        rotated_poly = rotation.multiply(poly);
        northing_row = rotated_poly.row(1);
        lower_north = min(northing_row);

        rows = intersectSegmentPolygon(rotated_poly, lower_north + offset);

        for(int i = 1; i < n_rows; i++)
          rows = rows.horzCat(intersectSegmentPolygon(rotated_poly, i * row_width + lower_north + offset));

        double data2[] = {std::cos(direction), -std::sin(direction), std::sin(direction), std::cos(direction)};
        rotation = Matrix(data2, 2, 2);
        rows = rotation.multiply(rows);

        return rows;
      }

      //returns the direction in which the rows can be longer (which means less rows)
      //diameter stores the length of the polygon in the perpendicular of that direction
      double
      longRowsDirection(const Math::Matrix& poly, double* diameter)
      {
        Math::Matrix rot_mtx, rotated_poly, northing_row, diams, curr_diam;
        double angle_min = 0.0;
        double diam = 100000000.00;
        double step = Math::c_pi / 1800;

        for(double angle = 0.0; angle < (Math::c_pi * 1.1); angle += step)
        {
          double data[] = {std::cos(-angle), -std::sin(-angle), std::sin(-angle), std::cos(-angle)};
          rot_mtx = Matrix(data, 2, 2);

          rotated_poly = rot_mtx.multiply(poly);
          northing_row = rotated_poly.row(1);

          double d[1] = {(max(northing_row) - min(northing_row))};
          curr_diam = Math::Matrix(d, 1, 1);

          if(angle == 0)
            diams = Math::Matrix(curr_diam);
          else
            diams = diams.horzCat(curr_diam);

          if((max(northing_row) - min(northing_row)) < diam)
          {
            diam = (max(northing_row) - min(northing_row));
            angle_min = angle;
          }
        }

        if(angle_min >= Math::c_pi)
          angle_min -= Math::c_pi;

        double data[] = {std::cos(-angle_min), -std::sin(-angle_min), std::sin(-angle_min), std::cos(-angle_min)};
        rot_mtx = Matrix(data, 2, 2);
        rotated_poly = rot_mtx.multiply(poly);
        northing_row = rotated_poly.row(1);

        *diameter = (max(northing_row) - min(northing_row));

        return angle_min;
      }

      //returns distance of point to the closest point in segment defined by the 2 points in row
      //closest stores the number of the closest point (0 or 1)
      double
      getClosestDistance(const Math::Matrix& row,const Math::Matrix& point, int* closest)
      {
        double dist_first, dist_last, dist;
        dist_first = UTM::distance(point(1, 0), point(0, 0), 0, 0, row(1, 0), row(0, 0), 0, 0);
        trace("Distance to first is %f", dist_first);
        dist_last = UTM::distance(point(1, 0), point(0, 0), 0, 0, row(1, 1), row(0, 1), 0, 0);
        trace("Distance to last is %f", dist_last);

        if(dist_first > dist_last)
        {
          dist = dist_last;
          *closest = 1;
        }
        else
        {
          dist = dist_first;
          *closest = 0;
        }

        trace("Returning distance %f, at position %d",dist, *closest);
        return dist;
      }

      void
      doRows(const Math::Matrix& rows, int* times)
      {
        Math::Matrix e_state;
        double n, e, dist_first_row, dist_last_row, lat, lon, e_lat, e_lon;
        e_lat = m_estate.lat;
        e_lon = m_estate.lon;
        WGS84::displace(m_estate.x, m_estate.y, &e_lat, &e_lon);
        WGS84::displacement(m_lat, m_lon, 0, e_lat, e_lon, 0, &n, &e);
        double coords[] = {e, n};
        e_state = Matrix(coords, 2, 1);
        int closest_point, n_rows;

        n_rows = rows.columns() / 2;

        if(m_current_row==-1)
        {
          dist_first_row = getClosestDistance(rows.get(0, 1, 0, 1), e_state, &closest_point);
          dist_last_row = getClosestDistance(rows.get(0, 1, rows.columns() - 2, rows.columns() - 1), e_state, &closest_point);

          m_increase_row = (dist_first_row < dist_last_row);

          if(m_increase_row)
            m_current_row = -1;
          else
            m_current_row = (rows.columns() / 2);
        }

        if(*times && m_arrived && m_last_on_row)
        {
          if(m_increase_row && (m_current_row == n_rows - 1))
            *times = *times - 1;

          if(!m_increase_row && (m_current_row == 0))
            *times = *times - 1;

          if(*times == 0)
          {
            enableMovement(false);
          }

          if(m_increase_row)
            m_current_row++;
          else
            m_current_row--;
        }

        if(*times && m_arrived)
        {
          m_arrived = false;

          m_last_on_row = !m_last_on_row;

          if(!m_last_on_row)
          {
            getClosestDistance(rows.get(0, 1, 2 * m_current_row, 2 * m_current_row + 1), e_state, &closest_point);

            lat = m_lat;
            lon = m_lon;

            WGS84::displace(rows(1, 2 * m_current_row + closest_point), rows(0, 2 * m_current_row + closest_point), &lat, &lon);

            m_path.end_lat = lat;
            m_path.end_lon = lon;
            m_path.end_z = m_z;
            m_path.end_z_units = m_maneuver.z_units;
            m_path.lradius = 0;

            m_next_lat = m_lat;
            m_next_lon = m_lon;

            WGS84::displace(rows(1, 2 * m_current_row + 1 - closest_point),
                            rows(0, 2 * m_current_row + 1 - closest_point),
                            &m_next_lat, &m_next_lon);
          }
          else
          {
            m_path.end_lat = m_next_lat;
            m_path.end_lon = m_next_lon;
            m_path.end_z = m_z;
            m_path.end_z_units = m_maneuver.z_units;
            m_path.lradius = 0;
          }

          trace("Sending row %d", m_current_row);
          dispatch(m_path);
        }

      }

      void
      consume(const IMC::CoverArea* maneuver)
      {
        m_maneuver = *maneuver;

        double n, e, op_dir, diameter;
        Math::Matrix polygon, new_vtx;

        IMC::MessageList<IMC::PolygonVertex>::const_iterator it = maneuver->polygon.begin();

        m_path.speed = m_maneuver.speed;
        m_path.speed_units = m_maneuver.speed_units;
        m_z = m_maneuver.z;
        m_lon = m_maneuver.lon;
        m_lat = m_maneuver.lat;

        e = 0;
        n = 0;
        double coords[]= {e, n};
        polygon = Math::Matrix(coords, 2, 1);

        for (; it != maneuver->polygon.end(); it++ )
        {
          WGS84::displacement(m_lat, m_lon, 0, (*it)->lat, (*it)->lon, 0, &n, &e);
          coords[0] = e;
          coords[1] = n;
          new_vtx = Math::Matrix(coords, 2, 1);
          polygon = polygon.horzCat(new_vtx);
        }

        op_dir = longRowsDirection(polygon, &diameter);

        trace("Direction is %.2f degrees. Diameter is %.2f", 90 - op_dir * (180 / Math::c_pi), diameter);

        m_rows = getRows(polygon, op_dir, m_param_width, diameter);

        trace("%d rows found", m_rows.columns() / 2);

        m_moving = true;
        enableMovement(true);
      }

      void
      consume(const IMC::EstimatedState* msg)
      {
        if (msg->getSource() != getSystemId())
          return;

        m_estate = *msg;

        if (!isActive())
          return;

        if(m_moving)
        {
          doRows(m_rows, &m_times);
        }
        else
        {
          resetVar();
          signalCompletion();
        }
      }

      // Function to check if the vehicle is getting near to the next waypoint
      void
      onPathControlState(const IMC::PathControlState* pcs)
      {
        if (pcs->flags & IMC::PathControlState::FL_NEAR)
        {
          trace("Arrived at point");
          m_arrived = true;
        }
      }

      // Function for enabling and disabling the control loops
      void
      enableMovement(bool enable)
      {
        const uint32_t mask = IMC::CL_PATH;

        if (enable)
        {
          // set control loops in order to move
          setControl(mask);
          m_moving = true;
        }
        else
        {
          // stop moving by setting control loops to zero
          m_moving = false;
          setControl(0);
        }
      }
    };
  }
}

DUNE_TASK
