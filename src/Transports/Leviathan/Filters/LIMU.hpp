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
// Author: Ricardo Martins                                                  *
//***************************************************************************

#ifndef LCB_FILTERS_LIMU_HPP_INCLUDED_
#define LCB_FILTERS_LIMU_HPP_INCLUDED_

// DUNE headers.
#include <DUNE/DUNE.hpp>
using DUNE_NAMESPACES;

// Local headers.
#include "Filter.hpp"
#include "Ids.hpp"

namespace Transports
{
  namespace Leviathan
  {
    class LIMU: public Filter
    {
    public:
      struct Fields
      {
        double temp;
        double accl_x;
        double accl_y;
        double accl_z;
        double avel_x;
        double avel_y;
        double avel_z;
        double magn_x;
        double magn_y;
        double magn_z;
        double phi;
        double theta;
        double psi;
      };

      LIMU(void)
      { }

      bool
      doFilter(int64_t msec, uint8_t byte, std::ostream* os)
      {
        if (m_parser.stateIsSync())
        {
          m_msec = msec;
        }

        if (m_parser.parse(byte, m_frame))
        {
          return interpret(os);
        }

        return false;
      }

      bool
      interpret(std::ostream* os)
      {
        uint8_t id = m_frame.getId();
        if (id != 0x05)
        {
          std::fprintf(stderr, "ERROR: LIMU: unknown message id %02X\n", id);
          return false;
        }

        int16_t s16 = 0;

        const uint8_t* ptr = m_frame.getPayload();
        ByteCopy::fromLE(s16, ptr);

        // Temperature.
        ByteCopy::fromLE(s16, ptr + 32);
        m_fields.temp = (s16 * 0.00565) + 25.0;

        // Acceleration X.
        ByteCopy::fromLE(s16, ptr + 8);
        m_fields.accl_x = (double)s16 * 0.0008;
        // Acceleration Y.
        ByteCopy::fromLE(s16, ptr + 10);
        m_fields.accl_y = (double)s16 * 0.0008;
        // Acceleration Z.
        ByteCopy::fromLE(s16, ptr + 12);
        m_fields.accl_z = (double)s16 * 0.0008;

        // Angular Velocity X.
        ByteCopy::fromLE(s16, ptr + 2);
        m_fields.avel_x = (double)s16 * 0.02;
        // Angular Velocity Y.
        ByteCopy::fromLE(s16, ptr + 4);
        m_fields.avel_y = (double)s16 * 0.02;
        // Angular Velocity Z.
        ByteCopy::fromLE(s16, ptr + 6);
        m_fields.avel_z = (double)s16 * 0.02;

        // Magnetometer X.
        ByteCopy::fromLE(s16, ptr + 26);
        m_fields.magn_x = (double)s16 * 0.0001;
        // Magnetometer X.
        ByteCopy::fromLE(s16, ptr + 28);
        m_fields.magn_y = (double)s16 * 0.0001;
        // Magnetometer X.
        ByteCopy::fromLE(s16, ptr + 30);
        m_fields.magn_z = (double)s16 * 0.0001;

        // Compute Euler Angles.
        compensate();

        // Convert acceleration to m/s².
        m_fields.accl_x *= 9.7982543981;
        m_fields.accl_y *= 9.7982543981;
        m_fields.accl_z *= 9.7982543981;

        if (os != NULL)
        {
          IMC::DevDataBinary data;
          data.setSourceEntity(ID_LIMU_DATA);
          data.value.resize(getLogSizeData());

          uint8_t* ptr__ = (uint8_t*)&data.value[0];
          ptr__ += IMC::serialize(m_msec, ptr__);
          ptr__ += IMC::serialize(m_fields.temp, ptr__);
          ptr__ += IMC::serialize(m_fields.accl_x, ptr__);
          ptr__ += IMC::serialize(m_fields.accl_y, ptr__);
          ptr__ += IMC::serialize(m_fields.accl_z, ptr__);
          ptr__ += IMC::serialize(m_fields.avel_x, ptr__);
          ptr__ += IMC::serialize(m_fields.avel_y, ptr__);
          ptr__ += IMC::serialize(m_fields.avel_z, ptr__);
          ptr__ += IMC::serialize(m_fields.magn_x, ptr__);
          ptr__ += IMC::serialize(m_fields.magn_y, ptr__);
          ptr__ += IMC::serialize(m_fields.magn_z, ptr__);
          ptr__ += IMC::serialize(m_fields.phi, ptr__);
          ptr__ += IMC::serialize(m_fields.theta, ptr__);
          ptr__ += IMC::serialize(m_fields.psi, ptr__);
          Packet::serialize(&data, *os);
        }

        //std::fprintf(stderr, "%0.2f | %0.2f | %0.2f\r", m_fields.phi, m_fields.theta, m_fields.psi);
        return true;
      }

      size_t
      getLogSizeData(void) const
      {
        return sizeof(m_msec)
        + sizeof(m_fields.temp)
        + sizeof(m_fields.accl_x)
        + sizeof(m_fields.accl_y)
        + sizeof(m_fields.accl_z)
        + sizeof(m_fields.avel_x)
        + sizeof(m_fields.avel_y)
        + sizeof(m_fields.avel_z)
        + sizeof(m_fields.magn_x)
        + sizeof(m_fields.magn_y)
        + sizeof(m_fields.magn_z)
        + sizeof(m_fields.phi)
        + sizeof(m_fields.theta)
        + sizeof(m_fields.psi);
      }

      void
      compensate(void)
      {
        using namespace std;

        double accl_x = -m_fields.accl_x;
        double accl_y = -m_fields.accl_y;
        double accl_z = -m_fields.accl_z;

        double magn_x = m_fields.magn_x;
        double magn_y = m_fields.magn_y;
        double magn_z = m_fields.magn_z;

        // Roll.
        double phi = atan2(accl_y, sqrt(accl_x * accl_x + accl_z * accl_z));

        // Pitch.
        double theta = atan2(-accl_x, accl_z);

        // Yaw.
        double cos_phi = cos(phi);
        double sin_phi = sin(phi);
        double cos_theta = cos(theta);
        double sin_theta = sin(theta);
        double psi = atan2(magn_z * sin_phi - magn_y * cos_phi,
                           magn_x * cos_theta
                           + magn_y * sin_theta * sin_phi
                           + magn_z * sin_theta * cos_phi);

        m_fields.phi = Angles::degrees(Angles::normalizeRadian2(phi, 0));
        m_fields.theta = Angles::degrees(Angles::normalizeRadian2(theta, 0));
        m_fields.psi = Angles::degrees(Angles::normalizeRadian2(psi, 0));
      }

    private:
      //! UCTK parser.
      UCTK::Parser m_parser;
      //! UCTK frame.
      UCTK::Frame m_frame;
      //! Milliseconds since Epoch.
      int64_t m_msec;
      //! Data fields.
      Fields m_fields;
    };
  }
}

#endif
