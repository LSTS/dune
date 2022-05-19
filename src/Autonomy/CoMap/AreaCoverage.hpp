#ifndef AUTONOMY_AREACOVERAGE_HPP_INCLUDED_
#define AUTONOMY_AREACOVERAGE_HPP_INCLUDED_

// DUNE headers.
#include <DUNE/DUNE.hpp>
#include <DUNE/Math/Matrix.hpp>

namespace Autonomy
{
  namespace CoMap
  {
    using DUNE_NAMESPACES;

    /**
     * @brief Computes the intersection between two line segments.
     *
     * @param[in] seg1 First line segment
     * @param[in] seg2 Second line segment
     * @param[out] isInSegment Set to true if intersection exists (inside the
     * segments)
     * @return Math::Matrix The intersection point which may be inside or outside
     * the segments.
     */
    Math::Matrix
    intersectSegments(const Math::Matrix& seg1, const Math::Matrix& seg2, bool* isInSegment)
    {
      double m1 = (seg1(1, 1) - seg1(1, 0)) / (seg1(0, 1) - seg1(0, 0));
      double m2 = (seg2(1, 1) - seg2(1, 0)) / (seg2(0, 1) - seg2(0, 0));

      double b1 = seg1(1, 0) - m1 * seg1(0, 0);
      double b2 = seg2(1, 0) - m2 * seg2(0, 0);
      double xi = (b2 - b1) / (m1 - m2);
      double yi = m1 * xi + b1;

      // checking if the intersection happens inside the segments
      if ((std::abs(b1 - b2) < 0.5) && (std::abs(m1 - m2) < 0.5))
        *isInSegment = false;
      else
        *isInSegment = (std::abs(xi - seg1(0, 0)) <= std::abs(seg1(0, 0) - seg1(0, 1)))
                       && (std::abs(xi - seg1(0, 1)) <= std::abs(seg1(0, 0) - seg1(0, 1)))
                       && (std::abs(xi - seg2(0, 0)) <= std::abs(seg2(0, 0) - seg2(0, 1)))
                       && (std::abs(xi - seg2(0, 1)) <= std::abs(seg2(0, 0) - seg2(0, 1)));

      Math::Matrix intersection;
      double data[] = { xi, yi };
      intersection = Matrix(data, 2, 1);
      return intersection;
    }

    /**
     * @brief Compute the (two) intersections between a line and a polygon
     *
     * @param poly The polygon
     * @param height
     * @return Math::Matrix
     */
    Math::Matrix
    intersectSegmentPolygon(const Math::Matrix& poly, double height)
    {
      Math::Matrix segment, easting_row, intersection, intersected;
      easting_row = poly.row(0);
      int sides = poly.columns();
      double data[] = { min(easting_row) - 10, max(easting_row) + 10, height, height };
      segment = Matrix(data, 2, 2);
      bool in_poly = false;
      int intersect_found = 0;

      for (int i = 0; i < sides; i++)
      {
        if (i < sides - 1)
          intersection = intersectSegments(poly.get(0, 1, i, i + 1), segment, &in_poly);
        else
        {
          double coords[] = { poly(0, sides - 1), poly(0, 0), poly(1, sides - 1), poly(1, 0) };
          Math::Matrix wrap_side = Matrix(coords, 2, 2);
          intersection = intersectSegments(wrap_side, segment, &in_poly);
        }

        if (in_poly)
        {
          if (intersect_found)
            intersected = intersected.horzCat(intersection);
          else
            intersected = Matrix(intersection);

          intersect_found++;
        }

        if (intersect_found == 2)
          break;
      }

      return intersected;
    }

    /**
     * @brief Translate a polygon, represented as its vertex coordinates, into a
     * matrix
     *
     * @param[in] coords The coordinates for each vertex in the polygon.
     * @return Math::Matrix
     */
    Math::Matrix
    getAsMatrix(const std::vector<std::pair<double, double>>& coords)
    {
      double tmp[] = { 0, 0 };
      Math::Matrix polygon(tmp, 2, 1);
      for (std::pair<double, double> coord : coords)
      {
        double tmp2[] = { coord.first, coord.second };
        polygon = polygon.horzCat(Math::Matrix(tmp2, 2, 1));
      }

      return polygon;
    }

    Math::Matrix
    getSurveyPath(const Math::Matrix& poly, double direction, double width, double diam)
    {
      int n_rows = (int)std::ceil(diam / width);
      double row_width = diam / n_rows;
      double offset = row_width / 2;
      double lower_north;
      Math::Matrix rows, rotation, rotated_poly, northing_row;
      double data[] = { std::cos(-direction), -std::sin(-direction), std::sin(-direction), std::cos(-direction) };
      rotation = Matrix(data, 2, 2);
      rotated_poly = rotation.multiply(poly);
      northing_row = rotated_poly.row(1);
      lower_north = min(northing_row);

      rows = intersectSegmentPolygon(rotated_poly, lower_north + offset);

      for (int i = 1; i < n_rows; i++)
        rows = rows.horzCat(intersectSegmentPolygon(rotated_poly, i * row_width + lower_north + offset));

      double data2[] = { std::cos(direction), -std::sin(direction), std::sin(direction), std::cos(direction) };
      rotation = Matrix(data2, 2, 2);
      rows = rotation.multiply(rows);

      return rows;
    }

    /**
     * @brief Calculates the survey direction and diameter for a given polygon
     *
     * @param[in] poly The polygon to cover
     * @param[out] diameter The polygon's diameter, in meters
     * @param[out] ang The optimal angle to use when surveying the polygon
     */
    void
    calculateSurveyDirection(const Math::Matrix& poly, double& diameter, double& ang)
    {
      Math::Matrix rot_mtx, rotated_poly, northing_row, diams, curr_diam;
      double angle_min = 0.0;
      double diam = 100000000.00;
      double step = Math::c_pi / 1800;

      for (double angle = 0.0; angle < (Math::c_pi * 1.1); angle += step)
      {
        double data[] = { std::cos(-angle), -std::sin(-angle), std::sin(-angle), std::cos(-angle) };
        rot_mtx = Matrix(data, 2, 2);

        rotated_poly = rot_mtx.multiply(poly);
        northing_row = rotated_poly.row(1);

        double d[1] = { (max(northing_row) - min(northing_row)) };
        curr_diam = Math::Matrix(d, 1, 1);

        if (angle == 0)
          diams = Math::Matrix(curr_diam);
        else
          diams = diams.horzCat(curr_diam);

        if ((max(northing_row) - min(northing_row)) < diam)
        {
          diam = (max(northing_row) - min(northing_row));
          angle_min = angle;
        }
      }

      if (angle_min >= Math::c_pi)
        angle_min -= Math::c_pi;

      double data[] = { std::cos(-angle_min), -std::sin(-angle_min), std::sin(-angle_min), std::cos(-angle_min) };
      rot_mtx = Matrix(data, 2, 2);
      rotated_poly = rot_mtx.multiply(poly);
      northing_row = rotated_poly.row(1);

      diameter = (max(northing_row) - min(northing_row));
      ang = angle_min;
    }

    /**
     * @brief Calculates the survey direction and diameter for a given polygon
     *
     * @param[in] coords The coordinates for the polygon
     * @param[out] diameter The polygon's diameter, in meters
     * @param[out] angle The optimal angle to use when surveying the polygon
     */
    void
    calculateSurveyDirection(const std::vector<std::pair<double, double>>& coords, double& diameter, double& angle)
    {
      Math::Matrix poly = getAsMatrix(coords);
      calculateSurveyDirection(poly, diameter, angle);
    }

    /**
     * @brief Get the Coverage Path
     *
     * @param[in] area area coordinates
     * @param path resulting path coordinates (same units as for the area)
     * @param swath_width swath width (space between transects)
     */
    void
    getCoveragePath(std::vector<std::pair<double, double>>& area, std::vector<std::pair<double, double>>& path,
                    double swath_width)
    {
      (void)path;
      double diam, angle;
      Math::Matrix poly = getAsMatrix(area);
      calculateSurveyDirection(poly, diam, angle);
      int n_rows = (int)std::ceil(diam / swath_width);
      double row_width = diam / n_rows;
      double offset = row_width / 2;
      double lower_north;
      Math::Matrix rows, rotation, rotated_poly, northing_row;

      double data[] = { std::cos(-angle), -std::sin(-angle), std::sin(-angle), std::cos(-angle) };
      rotation = Matrix(data, 2, 2);
      rotated_poly = rotation.multiply(poly);
      northing_row = rotated_poly.row(1);
      lower_north = min(northing_row);

      rows = intersectSegmentPolygon(rotated_poly, lower_north + offset);

      for (int i = 1; i < n_rows; i++)
        rows = rows.horzCat(intersectSegmentPolygon(rotated_poly, i * row_width + lower_north + offset));

      double data2[] = { std::cos(angle), -std::sin(angle), std::sin(angle), std::cos(angle) };
      rotation = Matrix(data2, 2, 2);
      rows = rotation.multiply(rows);
    }
  }// namespace CoMap
}// namespace Autonomy

#endif// AUTONOMY_AREACOVERAGE_HPP_INCLUDED_