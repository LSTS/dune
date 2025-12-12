//***************************************************************************
// Copyright 2007-2025 Universidade do Porto - Faculdade de Engenharia      *
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
// Author: Bernardo Gabriel                                                 *
//***************************************************************************

// Local headers.
#include <DUNE/DUNE.hpp>

namespace Navigation
{
  namespace General
  {
    namespace AHRS
    {
      namespace AN4248
      {
        using DUNE_NAMESPACES;

        struct Data
        {
          double x, y, z;
        };

        struct Arguments
        {
          //! Rotation matrix values.
          std::vector<double> rotation_mx;
        };

        //! Number of axes.
        constexpr unsigned c_axes_count = 3;

        struct Task: public DUNE::Navigation::BasicAHRS
        {
          //! Arguments.
          Arguments m_args;
          //! Acceleration data.
          Data m_acc;
          //! Magnetic field data.
          Data m_mag;
          //! Have valid Acceleration data flag.
          bool m_have_data_acc;
          //! Have valid Magnetometer data flag.
          bool m_have_data_mag;
          //! Rotation Matrix to correct mounting position.
          Math::Matrix m_rotation;

          Task(const std::string& name, Tasks::Context& ctx):
            DUNE::Navigation::BasicAHRS(name, ctx),
            m_have_data_acc(false),
            m_have_data_mag(false)
          {
            param("Rotation Matrix", m_args.rotation_mx)
            .defaultValue("1, 0, 0, 0, 1, 0, 0, 0, 1")
            .size(9)
            .description("Rotation matrix which is dependent of the mounting position");
          }

          void
          onUpdateParameters(void) override
          {
            if (paramChanged(m_args.rotation_mx))
              m_rotation.fill(c_axes_count, c_axes_count, &m_args.rotation_mx[0]);
          }

          void
          onAcceleration(const DUNE::IMC::Acceleration& msg) override
          {
            m_have_data_acc = true;
            m_acc.x = -msg.x;
            m_acc.y = -msg.y;
            m_acc.z = -msg.z;
          }

          void
          onAngularVelocity(const DUNE::IMC::AngularVelocity& msg) override
          {
            (void)msg;
          }

          void
          onMagneticField(const DUNE::IMC::MagneticField& msg) override
          {
            m_have_data_mag = true;
            m_mag.x = msg.x;
            m_mag.y = msg.y;
            m_mag.z = msg.z;
          }

          void
          step(void) override
          {
            if (!m_have_data_acc || !m_have_data_mag)
              return;

            double phi = std::atan2(m_acc.y, std::sqrt(m_acc.x * m_acc.x + m_acc.z * m_acc.z));
            double theta = std::atan2(-m_acc.x, m_acc.z);
            double cos_phi = std::cos(phi);
            double sin_phi = std::sin(phi);
            double cos_theta = std::cos(theta);
            double sin_theta = std::sin(theta);
            double psi = std::atan2(m_mag.z * sin_phi - m_mag.y * cos_phi,
                                    m_mag.x * cos_theta
                                    + m_mag.y * sin_theta * sin_phi
                                    + m_mag.z * sin_theta * cos_phi);

            Math::Matrix data(c_axes_count, 1);
            data(0) = phi;
            data(1) = theta;
            data(2) = psi;

            Matrix r(c_axes_count, c_axes_count);
            r = data.toDCM() * transpose(m_rotation);
            
            IMC::EulerAngles euler;
            euler.phi = std::atan2(r(2, 1), r(2, 2));
            euler.theta = std::asin(-r(2, 0));
            euler.psi = std::atan2(r(1, 0), r(0, 0));
            euler.psi_magnetic = euler.psi;
            dispatch(euler);

            m_have_data_acc = false;
            m_have_data_mag = false;
          }
        };
      }
    }
  }
}

DUNE_TASK
