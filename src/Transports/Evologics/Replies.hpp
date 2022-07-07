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
// Author: Ricardo Martins                                                  *
//***************************************************************************

#ifndef TRANSPORTS_EVOLOGICS_REPLIES_HPP_INCLUDED_
#define TRANSPORTS_EVOLOGICS_REPLIES_HPP_INCLUDED_

// ISO C++ 98 headers.
#include <vector>

// DUNE headers.
#include <DUNE/DUNE.hpp>

namespace Transports
{
  namespace Evologics
  {
    using DUNE_NAMESPACES;

    struct RecvIM
    {
      RecvIM(void):
        src(0),
        dst(0),
        ack(false),
        bitrate(0),
        rssi(0),
        velocity(0),
        propagation_time(0),
        duration(0)
      { }

      unsigned src;
      unsigned dst;
      bool ack;
      unsigned bitrate;
      float rssi;
      unsigned integrity;
      float velocity;
      unsigned propagation_time;
      std::vector<uint8_t> data;
      unsigned duration;
    };

    struct RecvUsblPos
    {
      RecvUsblPos(void):
        ctime(0),
        mtime(0),
        addr(0),
        x(0),
        y(0),
        z(0),
        e(0),
        n(0),
        u(0),
        roll(0),
        pitch(0),
        yaw(0),
        propagation_time(0),
        rssi(0),
        integrity(0),
        accuracy(0)
      { }

      void
      fill(IMC::UsblPositionExtended& msg)
      {
        msg.x = x;
        msg.y = y;
        msg.z = z;
        msg.n = n;
        msg.e = e;
        msg.d = -u;
        msg.phi = roll;
        msg.theta = pitch;
        msg.psi = yaw;
        msg.accuracy = accuracy;
      }

      // Variables
      double ctime;
      double mtime;
      unsigned addr;
      float x, y, z;
      float e, n, u;
      float roll, pitch, yaw;
      unsigned propagation_time;
      float rssi;
      unsigned integrity;
      float accuracy;
    };

    struct RecvUsblAng
    {
      RecvUsblAng(void):
        ctime(0),
        mtime(0),
        addr(0),
        lbearing(0),
        lelevation(0),
        bearing(0),
        elevation(0),
        roll(0),
        pitch(0),
        yaw(0),
        rssi(0),
        integrity(0),
        accuracy(0)
      { }

      void
      fill(IMC::UsblAnglesExtended& msg)
      {
        msg.lbearing = lbearing;
        msg.lelevation = lelevation;
        msg.bearing = bearing;
        msg.elevation = elevation;
        msg.phi = roll;
        msg.theta = pitch;
        msg.psi = yaw;
        msg.accuracy = accuracy;
      }

      double ctime;
      double mtime;
      unsigned addr;
      float lbearing, lelevation;
      float bearing, elevation;
      float roll, pitch, yaw;
      float rssi;
      unsigned integrity;
      float accuracy;
    };
  }
}

#endif
