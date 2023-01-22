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
// Author: Miguel Aguiar                                                    *
//***************************************************************************

#include "DUNE/Coordinates.hpp"
#include "DUNE/I18N.hpp"

#include "ModelDataStreamGenerator.hpp"

namespace Simulators
{
  namespace StreamVelocity
  {
    namespace StreamGenerator
    {
      Gridded2DModelDataStreamGenerator::Gridded2DModelDataStreamGenerator(
          GriddedModelDataConfig const& config,
          double wx,
          double wy,
          double wz)
          : StreamGenerator(wx, wy, wz),
            m_file(config.filename),
            m_u(0),
            m_v(0),
            m_grid(m_file.getAttribute<double>(config.grid_path, "min"),
                   m_file.getAttribute<double>(config.grid_path, "max"),
                   m_file.getAttribute<size_t>(config.grid_path, "npts"))
      {
        auto data_u = m_file.getDataset<double>(config.u_data_path);
        auto data_v = m_file.getDataset<double>(config.v_data_path);

        if (data_u.dimensions != data_v.dimensions)
          throw std::runtime_error(
              DTR("Gridded2DModelDataStreamGenerator::"
                  "Gridded2DModelDataStreamGenerator(): dimensions of velocity "
                  "components do not match."));

        if (data_u.dimensions.size() != 3)
          throw std::runtime_error(
              DTR("Gridded2DModelDataStreamGenerator::"
                  "Gridded2DModelDataStreamGenerator(): data must be "
                  "three-dimensional (2D space + time)."));

        if (m_grid.getDimensions(0) != data_u.dimensions[0] ||
            m_grid.getDimensions(1) != data_u.dimensions[1] ||
            m_grid.getDimensions(2) != data_u.dimensions[2])
          throw std::runtime_error(
              DTR("Gridded2DModelDataStreamGenerator::"
                  "Gridded2DModelDataStreamGenerator(): data dimensions do not "
                  "match grid dimensions."));

        m_u = std::move(data_u.data);
        m_v = std::move(data_v.data);
      }

      inline double
      interpolateLinear2d(double* values, double* delta)
      {
        return (1 - delta[0]) * (1 - delta[1]) * values[0] +
               delta[0] * (1 - delta[1]) * values[1] +
               delta[0] * delta[1] * values[2] +
               (1 - delta[0]) * delta[1] * values[3];
      }

      std::array<double, 3>
      Gridded2DModelDataStreamGenerator::getVelocity(double lat,
                                                     double lon,
                                                     double,
                                                     double time) const
      {
        // Find closest grid cell
        auto corner_indices =
            m_grid.getCorner({lat, lon, time + m_grid.getLower(2)});

        // If vehicles is outside the grid, fall back to default stream velocity
        for (auto i = 0; i < 3; ++i)
          if (corner_indices[i] >= m_grid.getDimensions(i))
            return getDefaultVelocity();

        auto corner_point = m_grid.getCoordinates(corner_indices);

        double delta[2] = {(lat - corner_point[0]) / m_grid.getSpacing(0),
                           (lon - corner_point[1]) / m_grid.getSpacing(1)};

        double u_values[4];
        double v_values[4];

        // Interpolate data to the current vehicle position and current time.
        // This scheme uses nearest-neighbor interpolation in time and linear
        // interpolation for the position.
        // TODO Allow configurable interpolation schemes.

        auto gridpoint = corner_indices;
        u_values[0] = m_u[m_grid.getOffset(gridpoint)];
        v_values[0] = m_v[m_grid.getOffset(gridpoint)];

        gridpoint[0] += 1;
        u_values[1] = m_u[m_grid.getOffset(gridpoint)];
        v_values[1] = m_v[m_grid.getOffset(gridpoint)];

        gridpoint[1] += 1;
        u_values[2] = m_u[m_grid.getOffset(gridpoint)];
        v_values[2] = m_v[m_grid.getOffset(gridpoint)];

        gridpoint[0] -= 1;
        u_values[3] = m_u[m_grid.getOffset(gridpoint)];
        v_values[3] = m_v[m_grid.getOffset(gridpoint)];

        auto u_val = interpolateLinear2d(u_values, delta);
        auto v_val = interpolateLinear2d(v_values, delta);

        return {v_val, u_val, 0.0};
      }
    }    // namespace StreamGenerator
  }      // namespace StreamVelocity
}    // namespace Simulators
