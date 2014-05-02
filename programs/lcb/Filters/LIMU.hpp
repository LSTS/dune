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

namespace LCB
{
  namespace Filters
  {
    class LIMU: public Filter
    {
    public:
      LIMU(sqlite3* db):
        Filter(db)
      {
        dbCreate("CREATE TABLE IF NOT EXISTS limu ("
                 "  time   UNSIGNED BIG INT NOT NULL,"
                 "  temp   REAL NOT NULL,"
                 "  accl_x REAL NOT NULL,"
                 "  accl_y REAL NOT NULL,"
                 "  accl_z REAL NOT NULL,"
                 "  avel_x REAL NOT NULL,"
                 "  avel_y REAL NOT NULL,"
                 "  avel_z REAL NOT NULL,"
                 "  phi    REAL NOT NULL,"
                 "  theta  REAL NOT NULL,"
                 "  psi    REAL NOT NULL,"
                 "  PRIMARY KEY(time)"
                 " )"
                 );

        dbPrepare("INSERT INTO limu VALUES(?,?,?,?,?,?,?,?,?,?,?)");
      }

      bool
      doFilter(int64_t msec, uint8_t byte)
      {
        if (m_parser.stateIsSync())
        {
          m_msec = msec;
        }

        if (m_parser.parse(byte, m_frame))
          interpret();
      }

      void
      interpret(void)
      {
        uint8_t id = m_frame.getId();
        if (id != 0x05)
        {
          std::fprintf(stderr, "ERROR: LIMU: unknown message id %02X\n", id);
          return;
        }

        int16_t s16;

        const uint8_t* ptr = m_frame.getPayload();
        ByteCopy::fromLE(s16, ptr);

        // Temperature.
        ByteCopy::fromLE(s16, ptr + 32);
        m_fields.temp = (s16 * 0.00565) + 25.0f;

        // Acceleration X.
        ByteCopy::fromLE(s16, ptr + 8);
        double accl_x = s16 * 0.0008f;
        m_fields.accl_x = accl_x * 9.7982543981;
        // Acceleration Y.
        ByteCopy::fromLE(s16, ptr + 10);
        double accl_y = s16 * 0.0008f;
        m_fields.accl_y = accl_y * 9.7982543981;
        // Acceleration Z.
        ByteCopy::fromLE(s16, ptr + 12);
        double accl_z = s16 * 0.0008f;
        m_fields.accl_z = accl_z * 9.7982543981;

        // Angular Velocity X.
        ByteCopy::fromLE(s16, ptr + 2);
        m_fields.avel_x = s16 * 0.02;
        // Angular Velocity Y.
        ByteCopy::fromLE(s16, ptr + 4);
        m_fields.avel_y = s16 * 0.02;
        // Angular Velocity Z.
        ByteCopy::fromLE(s16, ptr + 6);
        m_fields.avel_z = s16 * 0.02;

        // Magnetometer X.
        ByteCopy::fromLE(s16, ptr + 26);
        double magn_x = s16 * 0.0001;
        // Magnetometer X.
        ByteCopy::fromLE(s16, ptr + 28);
        double magn_y = s16 * 0.0001;
        // Magnetometer X.
        ByteCopy::fromLE(s16, ptr + 30);
        double magn_z = s16 * 0.0001;

        // Compute Euler Angles.
        compute(accl_x, accl_y, accl_z, magn_x, magn_y, magn_z);

        if (dbIsActive())
        {
          dbBindInt64(1, m_msec);
          dbBindDouble(2, m_fields.temp);
          dbBindDouble(3, m_fields.accl_x);
          dbBindDouble(4, m_fields.accl_y);
          dbBindDouble(5, m_fields.accl_z);
          dbBindDouble(6, m_fields.avel_x);
          dbBindDouble(7, m_fields.avel_y);
          dbBindDouble(8, m_fields.avel_z);
          dbBindDouble(9, m_fields.phi);
          dbBindDouble(10, m_fields.theta);
          dbBindDouble(11, m_fields.psi);

          dbStep();
        }
      }

      void
      compute(double a_accl_x, double a_accl_y, double a_accl_z,
              double a_magn_x, double a_magn_y, double a_magn_z)
      {
        using namespace std;

        double accl_x = a_accl_x;
        double accl_y = a_accl_y;
        double accl_z = a_accl_z;

        // Compute roll (phi).
        double phi = atan2(accl_y, sqrt(accl_x * accl_x + accl_z * accl_z));
        m_fields.phi = Angles::degrees(phi);

        // Compute pitch (theta).
        double theta = atan2(-accl_x, accl_z);
        m_fields.theta = Angles::degrees(theta);

        double Xh = a_magn_x * cos(theta) + a_magn_z * sin(theta);
        double Yh = a_magn_x * sin(phi) * sin(theta) + a_magn_y * cos(phi) - a_magn_z * sin(phi) * cos(theta);
        m_fields.psi = -Angles::degrees(Angles::normalizeRadian(atan2(Yh, Xh)));
      }

    private:
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
