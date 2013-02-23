//***************************************************************************
// Copyright (C) 2007-2013 Laboratório de Sistemas e Tecnologia Subaquática *
// Departamento de Engenharia Electrotécnica e de Computadores              *
// Rua Dr. Roberto Frias, 4200-465 Porto, Portugal                          *
//***************************************************************************
// Author: Renato Caldas                                                    *
//***************************************************************************

#ifndef VISION_DFK51BG02H_AUTO_EXPOSURE_HPP_INCLUDED_
#define VISION_DFK51BG02H_AUTO_EXPOSURE_HPP_INCLUDED_

// ISO C++ 98 headers.
#include <cstring>

// DUNE headers.
#include <DUNE/DUNE.hpp>

// Import namespaces.
using DUNE_NAMESPACES;

namespace Vision
{
  namespace DFK51BG02H
  {
    // Auto exposure compensator
    class AutoExposure
    {
    public:
      //! Constructor.
      AutoExposure(void)
      { }

      //! Calculate the gain update
      //! @param[in] data RGB24 image.
      //! @param[in] count number of RGB24 pixels in data.
      float
      exposureCorrection(uint8_t* data, unsigned count)
      {
        // Accumulate pixel values
        float ar = 0, ag = 0, ab = 0;
        for (unsigned i = 0; i < count; i++)
        {
          ar += data[3 * i];
          ag += data[3 * i + 1];
          ab += data[3 * i + 2];
        }

        // Calculate the exposure time multiplier
        return  (128.0 * count)/(0.299 * ar + 0.587 * ag + 0.114 * ab);
      }

    private:
    };
  }
}

#endif
