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
// Author: Breno Pinheiro                                                   *
// Author: José Braga                                                       *
//***************************************************************************

// DUNE headers.
#include <DUNE/Navigation/AAKR.hpp>

namespace DUNE
{
  namespace Navigation
  {
    AAKR::AAKR(void)
    {
      m_index = 0;
      m_num_values = 0;
      resize(0);
    }

    void
    AAKR::increment(void)
    {
      m_index = (m_index + 1) % dataSize();
      if (m_num_values < dataSize())
        m_num_values += 1;
    }

    void
    AAKR::resize(unsigned r)
    {
      m_index = 0;
      m_num_values = 0;

      if (r == dataSize())
        return;

      m_data.resizeAndFill(r, sampleSize(), 0.0);
      m_norm = m_data;
      m_distances.resizeAndFill(r, 1, 0.0);
      m_weights.resizeAndFill(r, 1, 0.0);
    }

    void
    AAKR::resize(unsigned r, unsigned c)
    {
      m_index = 0;
      m_num_values = 0;

      if (r == dataSize() && c == sampleSize())
        return;

      m_data.resizeAndFill(r, c, 0.0);
      m_norm = m_data;
      m_distances.resizeAndFill(r, 1, 0.0);
      m_weights.resizeAndFill(r, 1, 0.0);
    }

    void
    AAKR::add(Math::Matrix v)
    {
      if (dataSize() == 0)
        throw std::runtime_error("unable to add: data window size is undefined.");

      if (v.rows() != 1)
        throw std::runtime_error("unable to add: new sample is not a row vector.");

      if (sampleSize() == 0)
        m_data.resize(dataSize(), v.columns());

      if ((unsigned)v.columns() != sampleSize())
        throw std::runtime_error("unable to add: sample size does not match.");

      // Write to the data set.
      m_data.set(m_index, m_index, 0, sampleSize() - 1, v);

      // Increment data set index.
      increment();
    }

    void
    AAKR::normalize(Math::Matrix& mean, Math::Matrix& std)
    {
      // Resize mean and standard deviation variables.
      mean.resizeAndFill(1, sampleSize(), 0);
      std.resizeAndFill(1, sampleSize(), 0);

      // Compute mean.
      for (unsigned i = 0; i < sampleSize(); i++)
        mean(i) = sum(m_data.get(0, m_num_values - 1, i, i)) / m_num_values;

      // Compute standard deviation.
      for (unsigned j = 0; j < sampleSize(); j++)
      {
        double sum = 0;

        // Sum of the power of two difference
        // between the value and the mean.
        for (unsigned i = 0; i < m_num_values; i++)
          sum += std::pow(m_data(i, j) - mean(j), 2);

        // Standard deviation.
        std(j) = std::sqrt(sum / m_num_values);

        // Normalize each member of the data set.
        for (unsigned i = 0; i < m_num_values; i++)
        {
          if (std(j))
            m_norm(i, j) = (m_data(i, j) - mean(j)) / std(j);
          else
            m_norm(i, j) = 0;
        }
      }
    }

    void
    AAKR::computeDistance(Math::Matrix query)
    {
      if (query.rows() != 1)
        throw std::runtime_error("unable to compute distance: reference is not row vector.");

      if ((unsigned)query.columns() != sampleSize())
        throw std::runtime_error("unable to compute distance: sample size does not match.");

      m_distances.fill(0.0);

      // Fill distances vector.
      for (unsigned i = 0; i < m_num_values; i++)
      {
        Math::Matrix q = query - m_norm.row(i);
        m_distances(i) = std::sqrt(sum(q * transpose(q)));
      };
    }

    void
    AAKR::computeWeights(double variance)
    {
      // Initialize some variables
      double svar = variance * variance;
      double k = (1 / std::sqrt(2 * DUNE::Math::c_pi * svar));

      m_weights.fill(0.0);

      // Compute weights
      for (unsigned i = 0; i < m_num_values; i++)
        m_weights(i) = k * std::exp(- m_distances(i) * m_distances(i) / svar);
    }

    Math::Matrix
    AAKR::estimate(Math::Matrix query, double variance)
    {
      Math::Matrix mean;
      Math::Matrix std;

      normalize(mean, std);

      // Use normalized query vector.
      computeDistance((query - mean) / std);
      computeWeights(variance);

      double s = sum(m_weights);

      // Avoid division by zero.
      if (!s)
        return query;

      // Combine with weights.
      Math::Matrix result = ((transpose(m_weights) * m_norm) / s);

      // Normalize.
      for (unsigned i = 0; i < sampleSize(); i++)
        result(i) = result(i) * std(i) + mean(i);

      return result;
    }
  }
}
