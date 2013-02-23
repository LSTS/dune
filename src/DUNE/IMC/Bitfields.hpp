//***************************************************************************
// Copyright (C) 2007-2013 Laboratório de Sistemas e Tecnologia Subaquática *
// Departamento de Engenharia Electrotécnica e de Computadores              *
// Rua Dr. Roberto Frias, 4200-465 Porto, Portugal                          *
//***************************************************************************
// Author: Ricardo Martins                                                  *
//***************************************************************************
// $Id:: Bitfields.hpp 12667 2013-01-22 02:44:42Z rasm                    $:*
//***************************************************************************
// Automatically generated.                                                 *
//***************************************************************************

#ifndef DUNE_IMC_BITFIELDS_HPP_INCLUDED_
#define DUNE_IMC_BITFIELDS_HPP_INCLUDED_

namespace DUNE
{
  namespace IMC
  {
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
      //! Unspecified External Control.
      CL_EXTERNAL = 0x40000000,
      //! Non-overridable control.
      CL_NO_OVERRIDE = 0x80000000,
      //! All.
      CL_ALL = 0xFFFFFFFF
    };
  }
}

#endif
