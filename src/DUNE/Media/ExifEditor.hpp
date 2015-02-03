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
// https://www.lsts.pt/dune/licence.                                        *
//***************************************************************************
// Author: Renato Caldas                                                    *
//***************************************************************************

#ifndef DUNE_MEDIA_EXIF_EDITOR_HPP_INCLUDED_
#define DUNE_MEDIA_EXIF_EDITOR_HPP_INCLUDED_

// DUNE headers.
#include <DUNE/Config.hpp>
#include <DUNE/Media/ExifData.hpp>

// ISO C++ 98 headers.
#include <ostream>

namespace DUNE
{
  namespace Media
  {
    // Export DLL Symbol.
    class DUNE_DLL_SYM ExifEditor;

    class ExifEditor
    {
    public:
      //! Construct a ExifEditor object.
      ExifEditor(void);

      ~ExifEditor(void);

      // Set the JPEG data (fix the name)
      void
      setBuffer(uint8_t* bfr, std::size_t length);

      void
      outputToStream(std::ostream& stream);

      // Get the Exif data object
      ExifData*
      getExifData(void);

    private:
      // Start of Image JPEG marker
      static const uint16_t c_mk_soi = 0xFFD8;
      // Comment JPEG marker
      static const uint16_t c_mk_com = 0xFFFE;
      // Application JPEG marker start (add 0 to 9 for App0 to App9)
      static const uint16_t c_mk_app = 0xFFE0;

      // Pointer to original data
      uint8_t* m_bfr;
      // Size of original data
      std::size_t m_bfr_len;
      // Position of the original exif marker
      unsigned m_exif_pos;
      // Length of the original exif section
      std::size_t m_exif_len;
      // Exif data
      ExifData* m_exif_data;
    };
  }
}

#endif
