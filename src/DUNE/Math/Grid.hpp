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

#ifndef DUNE_MATH_GRID_HPP_INCLUDED_
#define DUNE_MATH_GRID_HPP_INCLUDED_

#include <algorithm>
#include <array>
#include <cmath>
#include <numeric>
#include <vector>

namespace DUNE
{
  namespace Math
  {
    //! Converts between grid indices, coordinate points and row-major
    //! ordering.
    //! @tparam dim number of dimensions.
    template<size_t dim>
    class Grid
    {
    public:
      //! Constructor.
      //! @param[in] min the lower limits of the grid in each dimension.
      //! @param[in] max the upper limits of the grid in each dimension.
      //! @param[in] dimensions the number of points in each dimension.
      Grid(std::vector<double> const& min,
           std::vector<double> const& max,
           std::vector<size_t> const& dimensions);

      //! Convert an array of grid indices to a row-major ordered offset.
      //! @param[in] indices the indices of the grid point.
      //! @return the row-major offset of the grid point.
      size_t
      getOffset(std::array<size_t, dim> const& indices) const;

      //! Convert a row-major ordered offset to an array of grid indices.
      //! @param[in] offset the row-major offset of the gridpoint.
      //! @return indices of the gridpoint.
      std::array<size_t, dim>
      getIndices(size_t offset) const;

      //! Get the indices of the "lower corner" of the grid cell where a
      //! point lies.
      //! @param[in] coordinates coordinates of a point in dim-dimensional
      //! space.
      //! @return grid indices of the "lower" vertex of the grid cell where
      //! the point lies.
      std::array<size_t, dim>
      getCorner(std::array<double, dim> const& coordinates) const;

      //! Get the coordinates of a gridpoint given by an array of indices.
      //! @param[in] indices indices of a gridpoint.
      //! @return the coordinates of the corresponding point in
      //! dim-dimensional space.
      std::array<double, dim>
      getCoordinates(std::array<size_t, dim> const& indices) const;

      //! Get the coordinates of a gridpoint given by a row-major offset.
      //! @param[in] offset the row-major offset of the gridpoint.
      //! @return the coordinates of the corresponding point in
      //! dim-dimensional space.
      std::array<double, dim>
      getCoordinates(size_t offset) const;

      //! Get the number of points in the grid along a dimension.
      //! @param[in] dimension index of the dimension to query.
      //! @return number of points along the given dimension.
      size_t
      getDimensions(size_t dimension) const
      {
        if (dimension >= dim)
          throw std::runtime_error("Grid::getDimensions(): invalid index");

        return m_npts[dimension];
      }

      //! @return the total number of gridpoints.
      size_t
      size() const
      {
        return m_size;
      }

      //! Get the upper limit of the grid along a dimension.
      //! @param[in] dimension index of the dimension to query.
      //! @return upper limit along the given dimension.
      double
      getUpper(size_t dimension) const
      {
        if (dimension >= dim)
          throw std::runtime_error("Grid::getUpper(): invalid index");

        return m_max[dimension];
      }

      //! Get the loer limit of the grid along a dimension.
      //! @param[in] dimension index of the dimension to query.
      //! @return lower limit along the given dimension.
      double
      getLower(size_t dimension) const
      {
        if (dimension >= dim)
          throw std::runtime_error("Grid::getLower(): invalid index");

        return m_min[dimension];
      }

      //! Get the grid spacing along a dimension.
      //! @param[in] dimension index of the dimension to query.
      //! @return spacing along the given dimension.
      double
      getSpacing(size_t dimension) const
      {
        if (dimension >= dim)
          throw std::runtime_error("Grid::getSpacing(): invalid index");

        return m_h[dimension];
      }

    private:
      //! The upper limits of the grid in each dimension.
      std::array<double, dim> m_max;
      //! The lower limits of the grid in each dimension.
      std::array<double, dim> m_min;
      //! The grid spacing in each dimension.
      std::array<double, dim> m_h;
      //! The number of gridpoints in each dimension.
      std::array<size_t, dim> m_npts;
      //! The total number of gridpoints.
      size_t m_size;
    };

    template<size_t dim>
    Grid<dim>::Grid(std::vector<double> const& min,
                    std::vector<double> const& max,
                    std::vector<size_t> const& dimensions)

    {
      if (min.size() < dim || max.size() < dim || dimensions.size() < dim)
        throw std::runtime_error(
            "Grid::Grid(): insufficient number of elements to create the "
            "grid.");

      std::copy_n(std::begin(min), dim, std::begin(m_min));
      std::copy_n(std::begin(max), dim, std::begin(m_max));
      std::copy_n(std::begin(dimensions), dim, std::begin(m_npts));

      for (size_t i = 0; i < dim; ++i)
      {
        if (m_npts[i] < 2)
          throw std::runtime_error("Grid::Grid(): invalid grid dimensions.");

        if (m_max[i] <= m_min[i])
          throw std::runtime_error("Grid::Grid(): invalid grid limits.");

        m_h[i] = (m_max[i] - m_min[i]) / (m_npts[i] - 1);
      }

      m_size = std::accumulate(
          std::begin(m_npts), std::end(m_npts), 1.0, std::multiplies<size_t>());
    }

    template<size_t dim>
    size_t
    Grid<dim>::getOffset(std::array<size_t, dim> const& indices) const
    {
      if (indices[0] >= m_npts[0])
        throw std::runtime_error("Grid::getOffset(): out of bounds.");

      size_t offset = indices[0];

      for (size_t i = 1; i < dim; ++i)
      {
        if (indices[i] >= m_npts[i])
          throw std::runtime_error("Grid::getOffset(): out of bounds.");

        offset = m_npts[i] * offset + indices[i];
      }

      return offset;
    }

    template<size_t dim>
    std::array<size_t, dim>
    Grid<dim>::getIndices(size_t offset) const
    {
      if (offset >= m_size)
        throw std::runtime_error("Grid::getIndices(): out of bounds.");

      std::array<size_t, dim> point;

      for (size_t i = dim; i > 0; --i)
      {
        point[i - 1] = offset % m_npts[i - 1];
        offset /= m_npts[i - 1];
      }

      return point;
    }

    template<size_t dim>
    std::array<size_t, dim>
    Grid<dim>::getCorner(std::array<double, dim> const& coordinates) const
    {
      std::array<size_t, dim> corner;

      for (size_t i = 0; i < dim; ++i)
      {
        if (coordinates[i] < m_min[i] || coordinates[i] > m_max[i])
          corner[i] = m_npts[i];
        else
          corner[i] = std::floor((coordinates[i] - m_min[i]) / m_h[i]);
      }

      return corner;
    }

    template<size_t dim>
    std::array<double, dim>
    Grid<dim>::getCoordinates(std::array<size_t, dim> const& indices) const
    {
      std::array<double, dim> coordinates;

      for (size_t i = 0; i < dim; ++i)
        coordinates[i] = m_min[i] + m_h[i] * indices[i];

      return coordinates;
    }

    template<size_t dim>
    std::array<double, dim>
    Grid<dim>::getCoordinates(size_t offset) const
    {
      return getCoordinates(getIndices(offset));
    }

  }    // namespace Math
}    // namespace DUNE

#endif
