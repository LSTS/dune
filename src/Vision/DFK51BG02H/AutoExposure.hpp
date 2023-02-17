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
