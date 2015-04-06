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
// Author: José Braga                                                       *
//***************************************************************************

#ifndef DUNE_NAVIGATION_COMPASS_CALIBRATION_HPP_INCLUDED_
#define DUNE_NAVIGATION_COMPASS_CALIBRATION_HPP_INCLUDED_

// ISO C++ 98 headers.
#include <vector>
#include <cmath>
#include <limits>

// DUNE headers.
#include <DUNE/Math/Matrix.hpp>
#include <DUNE/IMC/Definitions.hpp>

namespace DUNE
{
  namespace Navigation
  {
    //! %CompassCalibration is responsible
    //! to gather data from compass in order
    //! to compute hard-iron calibration parameters.
    //!
    //! @author José Braga
    class CompassCalibration
    {
    public:
      //! Constructor.
      CompassCalibration(void)
      {
        clear();
      }

      //! Clear calibration.
      void
      clear(void)
      {
        m_dcm.resizeAndFill(3, 1, 0.0);
        m_max.resizeAndFill(1, 3, -std::numeric_limits<double>::max());
        m_min.resizeAndFill(1, 3, std::numeric_limits<double>::max());
      }

      //! Update Direct Cosine Matrix.
      //! @param[in] msg euler angles message.
      void
      updateDCM(const IMC::EulerAngles& msg)
      {
        m_dcm(0) = msg.phi;
        m_dcm(1) = msg.theta;
      }

      //! Get stabilized magnetic field.
      //! @param[in] msg magnetic field message.
      void
      updateField(const IMC::MagneticField& msg)
      {
        // Insert magnetic field into row matrix.
        Math::Matrix mf(1,3);
        mf(0) = msg.x;
        mf(1) = msg.y;
        mf(2) = msg.z;

        // Get stabilized magnetic field.
        Math::Matrix mf_stab = mf * transpose(m_dcm.toDCM());

        // Store maximum and minimum values.
        for (unsigned i = 0; i < 3; i++)
        {
          if (mf_stab(i) > m_max(i))
            m_max(i) = mf_stab(i);
          if (mf_stab(i) < m_min(i))
            m_min(i) = mf_stab(i);
        }
      }

      //! Get calibration parameters.
      //! @return calibration parameters.
      Math::Matrix
      getCalibrationParams(void)
      {
        // Compute calibration parameters.
        Math::Matrix params = (m_max + m_min) / 2;

        // Clear all data and return.
        clear();
        return params;
      }

    private:
      //! Direct cosine matrix.
      Math::Matrix m_dcm;
      //! Maximum values of stabilized magnetic field.
      Math::Matrix m_max;
      //! Minimum values of stabilized magnetic field.
      Math::Matrix m_min;
    };
  }
}

#endif
