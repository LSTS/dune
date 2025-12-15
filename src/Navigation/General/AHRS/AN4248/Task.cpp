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
          bool new_data;
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
          //! Rotation Matrix to correct mounting position.
          Math::Matrix m_rotation;
          //! Euler Angles message.
          IMC::EulerAngles m_euler;

          Task(const std::string& name, Tasks::Context& ctx):
            DUNE::Navigation::BasicAHRS(name, ctx)
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
          onActivation(void) override
          {
            m_acc = {0.0, 0.0, 0.0, false};
            m_mag = {0.0, 0.0, 0.0, false};

            m_euler.phi = 0;
            m_euler.theta = 0;
            m_euler.psi = 0;
            m_euler.psi_magnetic = 0;
          }

          void
          onAcceleration(const DUNE::IMC::Acceleration& msg) override
          {
            m_acc.x = -msg.x;
            m_acc.y = -msg.y;
            m_acc.z = -msg.z;
            m_acc.new_data = true;
          }

          void
          onAngularVelocity(const DUNE::IMC::AngularVelocity& msg) override
          {
            (void)msg;
          }

          void
          onMagneticField(const DUNE::IMC::MagneticField& msg) override
          {
            m_mag.x = msg.x;
            m_mag.y = msg.y;
            m_mag.z = msg.z;
            m_mag.new_data = true;
          }

          void
          step(void) override
          {
            if (!m_acc.new_data || !m_mag.new_data)
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

            m_euler.phi = std::atan2(r(2, 1), r(2, 2));
            m_euler.theta = std::asin(-r(2, 0));
            m_euler.psi = std::atan2(r(1, 0), r(0, 0));
            m_euler.psi_magnetic = m_euler.psi;
            dispatch(m_euler);

            m_acc.new_data = false;
            m_mag.new_data = false;
          }
        };
      }
    }
  }
}

DUNE_TASK
