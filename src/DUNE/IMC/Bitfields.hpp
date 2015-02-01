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
// Author: Ricardo Martins                                                  *
//***************************************************************************
// Automatically generated.                                                 *
//***************************************************************************
// IMC XML MD5: 4ab0411c6256574a5ac1785347d0a9f2                            *
//***************************************************************************

#ifndef DUNE_IMC_BITFIELDS_HPP_INCLUDED_
#define DUNE_IMC_BITFIELDS_HPP_INCLUDED_

namespace DUNE
{
  namespace IMC
  {
    //! Control Loops Mask.
    enum CLoopsMask
    {
      //! None.
      CL_NONE = 0x00000000,
      //! Path Control.
      CL_PATH = 0x00000001,
      //! Teleoperation Control.
      CL_TELEOPERATION = 0x00000002,
      //! Altitude Control.
      CL_ALTITUDE = 0x00000004,
      //! Depth Control.
      CL_DEPTH = 0x00000008,
      //! Roll Control.
      CL_ROLL = 0x00000010,
      //! Pitch Control.
      CL_PITCH = 0x00000020,
      //! Yaw Control.
      CL_YAW = 0x00000040,
      //! Speed Control.
      CL_SPEED = 0x00000080,
      //! Yaw Rate Control.
      CL_YAW_RATE = 0x00000100,
      //! Vertical Rate Control.
      CL_VERTICAL_RATE = 0x00000200,
      //! Torque Control.
      CL_TORQUE = 0x00000400,
      //! Force Control.
      CL_FORCE = 0x00000800,
      //! Unspecified External Control.
      CL_EXTERNAL = 0x40000000,
      //! Non-overridable control.
      CL_NO_OVERRIDE = 0x80000000,
      //! All.
      CL_ALL = 0xFFFFFFFF
    };

    //! Operational Limits Mask.
    enum OpLimitsMask
    {
      //! Maximum Depth.
      OPL_MAX_DEPTH = 0x01,
      //! Minimum Altitude.
      OPL_MIN_ALT = 0x02,
      //! Maximum Altitude.
      OPL_MAX_ALT = 0x04,
      //! Minimum Speed.
      OPL_MIN_SPEED = 0x08,
      //! Maximum Speed.
      OPL_MAX_SPEED = 0x10,
      //! Maximum Vertical Rate.
      OPL_MAX_VRATE = 0x20,
      //! Operation Area.
      OPL_AREA = 0x40
    };
  }
}

#endif
