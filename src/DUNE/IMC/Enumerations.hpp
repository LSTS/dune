//***************************************************************************
// Copyright (C) 2007-2013 Laboratório de Sistemas e Tecnologia Subaquática *
// Departamento de Engenharia Electrotécnica e de Computadores              *
// Rua Dr. Roberto Frias, 4200-465 Porto, Portugal                          *
//***************************************************************************
// Author: Ricardo Martins                                                  *
//***************************************************************************
// $Id:: Enumerations.hpp 12986 2013-02-21 16:45:23Z pdcalado             $:*
//***************************************************************************
// Automatically generated.                                                 *
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
  }
}

#endif
