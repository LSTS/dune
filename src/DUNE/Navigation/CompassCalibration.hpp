//***************************************************************************
// Copyright (C) 2007-2013 Laboratório de Sistemas e Tecnologia Subaquática *
// Departamento de Engenharia Electrotécnica e de Computadores              *
// Rua Dr. Roberto Frias, 4200-465 Porto, Portugal                          *
//***************************************************************************
// Author: José Braga                                                       *
//***************************************************************************
// $Id:: CompassCalibration.hpp 12667 2013-01-22 02:44:42Z rasm           $:*
//***************************************************************************

#ifndef DUNE_NAVIGATION_COMPASS_CALIBRATION_HPP_INCLUDED_
#define DUNE_NAVIGATION_COMPASS_CALIBRATION_HPP_INCLUDED_

// ISO C++ 98 headers.
#include <vector>
#include <cmath>
#include <iostream>
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
