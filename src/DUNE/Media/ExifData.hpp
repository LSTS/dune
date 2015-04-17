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

#ifndef DUNE_MEDIA_EXIF_DATA_HPP_INCLUDED_
#define DUNE_MEDIA_EXIF_DATA_HPP_INCLUDED_

// DUNE headers.
#include <DUNE/Config.hpp>

// ISO C++ 98 headers.
#include <vector>
#include <string>

// Forward declarations.
struct _ExifData;

namespace DUNE
{
  namespace Media
  {
    // Export DLL Symbol.
    class DUNE_DLL_SYM ExifData;

    class ExifData
    {
    public:
      //! Construct an empty ExifData object.
      ExifData(void);

      //! Construct an ExifData object from existing data.
      ExifData(uint8_t* bfr, std::size_t len);

      //! Destroy an ExifData object.
      ~ExifData(void);

      //! Get a vector with the raw exif data.
      std::vector<uint8_t>
      getRawData(void);

      //! Get comment.
      std::string
      getComment(void);

      //! Set comment.
      void
      setComment(std::string);

    private:
      //! Exif data structure.
      struct _ExifData* m_exif_data;
    };
  }
}

#endif
