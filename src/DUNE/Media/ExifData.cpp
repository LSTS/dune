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

// DUNE headers.
#include <DUNE/Media/ExifData.hpp>

// ISO C++ 98 headers.
#include <cstddef>

// Exif headers.
#include <libexif/exif-data.h>
#include <libexif/exif-content.h>

namespace DUNE
{
  namespace Media
  {
    //! Construct an empty ExifData object.
    ExifData::ExifData(void) :
      m_exif_data(exif_data_new())
    { }

    //! Construct an ExifData object from existing data.
    ExifData::ExifData(uint8_t* bfr, std::size_t len) :
      m_exif_data(exif_data_new_from_data(bfr, len))
    { }

    //! Destroy a ExifData object.
    ExifData::~ExifData(void)
    {
      if (m_exif_data)
        exif_data_free(m_exif_data);
    }

    std::vector<uint8_t>
    ExifData::getRawData(void)
    {
      uint8_t* bfr;
      unsigned len;

      exif_data_fix(m_exif_data);
      exif_data_save_data(m_exif_data, &bfr, &len);
      if (!bfr)
        return std::vector<uint8_t>();

      std::vector<uint8_t> vec(bfr, bfr + len);
      delete[] bfr;
      return vec;
    }
  }
}
