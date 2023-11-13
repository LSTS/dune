//***************************************************************************
// Copyright 2007-2023 Universidade do Porto - Faculdade de Engenharia      *
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
// Automatically generated.                                                 *
//***************************************************************************
// IMC XML MD5: 86c7ceace2a6f6239ea89a0e5bc64a3f                            *
//***************************************************************************

#ifndef DUNE_IMC_ENUMERATIONS_HPP_INCLUDED_
#define DUNE_IMC_ENUMERATIONS_HPP_INCLUDED_

namespace DUNE
{
  namespace IMC
  {
    //! Boolean Value.
    enum Boolean
    {
      //! False.
      BOOL_FALSE = 0,
      //! True.
      BOOL_TRUE = 1
    };

    //! Controlled Mode.
    enum ControlledMode
    {
      //! Relinquish / Handoff Control.
      CTLMD_RELINQUISH_HANDOFF_CTL = 0,
      //! Request Control.
      CTLMD_REQUEST_CTL = 1,
      //! Override Control.
      CTLMD_OVERRIDE_CTL = 2
    };

    //! Speed Units.
    enum SpeedUnits
    {
      //! Meters per second.
      SUNITS_METERS_PS = 0,
      //! RPM.
      SUNITS_RPM = 1,
      //! Percentage.
      SUNITS_PERCENTAGE = 2
    };

    //! System Type.
    enum SystemType
    {
      //! CCU.
      SYSTEMTYPE_CCU = 0,
      //! Human-portable Sensor.
      SYSTEMTYPE_HUMANSENSOR = 1,
      //! UUV.
      SYSTEMTYPE_UUV = 2,
      //! USV.
      SYSTEMTYPE_USV = 3,
      //! UAV.
      SYSTEMTYPE_UAV = 4,
      //! UGV.
      SYSTEMTYPE_UGV = 5,
      //! Static sensor.
      SYSTEMTYPE_STATICSENSOR = 6,
      //! Mobile sensor.
      SYSTEMTYPE_MOBILESENSOR = 7,
      //! Wireless Sensor Network.
      SYSTEMTYPE_WSN = 8
    };

    //! Z Units.
    enum ZUnits
    {
      //! None.
      Z_NONE = 0,
      //! Depth.
      Z_DEPTH = 1,
      //! Altitude.
      Z_ALTITUDE = 2,
      //! Height.
      Z_HEIGHT = 3
    };

    //! RSSI Units.
    enum RSSIUnits
    {
      //! Decibel.
      RSSIUNITS_dB = 0,
      //! Percentage.
      RSSIUNITS_PERCENTAGE = 1
    };

    //! UAV Type.
    enum UAVType
    {
      //! Fixed-Wing.
      UAVTYPE_FIXEDWING = 0,
      //! Copter.
      UAVTYPE_COPTER = 1,
      //! Vtol.
      UAVTYPE_VTOL = 2
    };
  }
}

#endif
