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

#ifndef DUNE_MEDIA_MJPG_STRH_HPP_INCLUDED_
#define DUNE_MEDIA_MJPG_STRH_HPP_INCLUDED_

// DUNE headers.
#include <DUNE/Config.hpp>

// Local headers.
#include "Chunk.hpp"

namespace DUNE
{
  namespace Media
  {
    namespace MJPG
    {
      //! Class representing an AVI stream header chunk.
      class STRH: public Chunk
      {
      public:
        //! Constructor.
        //! @param[in] properties stream properties.
        STRH(const Properties& properties):
          Chunk(properties, "strh")
        {
          setDataSize(56);
        }

        //! Write chunk data to output stream.
        //! @param[in] os output stream.
        void
        writeData(std::ostream& os)
        {
          // Type.
          writeFourCC("vids", os);
          // Handler.
          writeFourCC("MJPG", os);
          // Flags.
          writeWord(0, os);
          // Priority.
          writeShort(0, os);
          // Language.
          writeShort(0, os);
          // Initial frames.
          writeWord(0, os);
          // Scale.
          writeWord(1, os);
          // Rate.
          writeWord(m_properties.fps, os);
          // Start.
          writeWord(0, os);
          // Length.
          writeWord(m_properties.total_frames, os);
          // Suggested buffer size.
          writeWord(0, os);
          // Quality.
          writeWord(0, os);
          // Sample size.
          writeWord(0, os);
          // RC frame (left).
          writeShort(0, os);
          // RC frame (top).
          writeShort(0, os);
          // RC frame (right).
          writeShort(m_properties.width, os);
          // RC frame (bottom).
          writeShort(m_properties.height, os);
        }
      };
    }
  }
}

#endif
