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

#ifndef DUNE_NAVIGATION_AAKR_HPP_INCLUDED_
#define DUNE_NAVIGATION_AAKR_HPP_INCLUDED_

// ISO C++ 98 headers.
#include <stdexcept>
#include <vector>
#include <cmath>

// DUNE headers.
#include <DUNE/Math/Constants.hpp>
#include <DUNE/Math/Matrix.hpp>

namespace DUNE
{
  namespace Navigation
  {
    // Export DLL Symbol.
    class DUNE_DLL_SYM AAKR;

    //! This class implements Autoassociative Kernel
    //! Regression (AAKR) algorithm.
    //!
    //! @author José Braga
    class AAKR
    {
    public:
      //! Constructor.
      AAKR(void);

      //! Resize data size.
      //! @param[in] r data size.
      void
      resize(unsigned r);

      //! Resize data size and sample size.
      //! @param[in] r data size.
      //! @param[in] c sample size.
      void
      resize(unsigned r, unsigned c);

      //! Get data size.
      //! @return data size.
      unsigned
      dataSize(void) const
      {
        return m_data.rows();
      }

      //! Get sample size.
      //! @return sample size.
      unsigned
      sampleSize(void) const
      {
        return m_data.columns();
      }

      //! Add new sample to current data.
      //! @param[in] v new sample.
      void
      add(Math::Matrix v);

      //! Normalize set.
      //! @param[in] mean mean of the normalized data.
      //! @param[in] std standard deviation of the normalized data.
      void
      normalize(Math::Matrix& mean, Math::Matrix& std);

      //! Estimate corrected sample according with history.
      //! @param[in] query new sample.
      //! @param[in] variance kernel bandwidth.
      //! @return corrected sample.
      Math::Matrix
      estimate(Math::Matrix query, double variance);

    private:
      //! Increment current data index.
      void
      increment(void);

      //! Compute distance.
      //! @param[in] query query vector.
      void
      computeDistance(Math::Matrix query);

      //! Compute weights of the AAKR.
      //! @param[in] variance variance value.
      void
      computeWeights(double variance);

      //! Row index.
      unsigned m_index;
      //! Number of values.
      unsigned m_num_values;
      //! Data set.
      Math::Matrix m_data;
      //! Normalized data set.
      Math::Matrix m_norm;
      //! Distances set.
      Math::Matrix m_distances;
      //! Weights set.
      Math::Matrix m_weights;
    };
  }
}

#endif
