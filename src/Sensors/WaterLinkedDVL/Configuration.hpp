//***************************************************************************
// Copyright 2023 OceanScan - Marine Systems & Technology, Lda.             *
//***************************************************************************
// This file is subject to the terms and conditions defined in file         *
// 'LICENCE.md', which is part of this source code package.                 *
//***************************************************************************
// Author: Renato Campos                                                    *
//***************************************************************************

#ifndef SENSORS_WATERLINKED_DVL_CONFIG_HPP_INCLUDED_
#define SENSORS_WATERLINKED_DVL_CONFIG_HPP_INCLUDED_

// DUNE headers.
#include <DUNE/DUNE.hpp>

namespace Sensors
{
  namespace WaterLinkedDVL
  {
    using DUNE_NAMESPACES;
    //! Device configuration.
    struct Configuration
    {
      double speed_of_sound;
      bool acoustic_enabled;
      bool dark_mode_enabled;
      double mounting_rotation_offset;
      std::string range_mode;
    };
  }
}

#endif
