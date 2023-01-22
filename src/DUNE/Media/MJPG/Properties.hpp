//***************************************************************************
// Copyright 2007-2021 OceanScan - Marine Systems & Technology, Lda.        *
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

#ifndef DUNE_MEDIA_MJPG_PROPERTIES_HPP_INCLUDED_
#define DUNE_MEDIA_MJPG_PROPERTIES_HPP_INCLUDED_

// DUNE headers.
#include <DUNE/Config.hpp>

namespace DUNE
{
  namespace Media
  {
    namespace MJPG
    {
      //! Properties of an AVI encoded MJPEG.
      struct Properties
      {
        //! Image width.
        uint32_t width;
        //! Image height.
        uint32_t height;
        //! Frames per second.
        uint32_t fps;
        //! Number of frames in the stream.
        uint32_t total_frames;

        //! Constructor.
        Properties(void):
          width(0),
          height(0),
          fps(0),
          total_frames(0)
        {  }
      };
    }
  }
}

#endif
