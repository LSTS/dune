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

#ifndef DUNE_MEDIA_MJPG_CHUNK_HPP_INCLUDED_
#define DUNE_MEDIA_MJPG_CHUNK_HPP_INCLUDED_

// ISO C++ 98 headers.
#include <fstream>
#include <cstring>
#include <iostream>
#include <cstddef>

// DUNE headers.
#include <DUNE/Config.hpp>

// Local headers.
#include "Properties.hpp"

namespace DUNE
{
  namespace Media
  {
    namespace MJPG
    {
      //! Class representing an RIFF/AVI chunk.
      class Chunk
      {
      public:
        //! Constructor.
        //! @param[in] properties stream properties.
        //! @param[in] id chunk identifier.
        Chunk(const Properties& properties, const char* id):
          m_properties(properties),
          m_data(NULL),
          m_data_size(0),
          m_pad_size(0)
        {
          std::memcpy(m_id, id, 4);
        }

        //! Destructor.
        virtual
        ~Chunk(void)
        { }

        //! Write chunk to output stream.
        //! @param[in] os output stream.
        void
        write(std::ostream& os)
        {
          writeFourCC(m_id, os);
          writeWord(getDataSize(), os);
          writeData(os);
        }

        //! Set chunk data.
        //! @param[in] data data buffer.
        //! @param[in] data_size size of data buffer.
        void
        setData(const uint8_t* data, uint32_t data_size)
        {
          m_data = data;
          setDataSize(data_size);
        }

        //! Get size of chunk in bytes.
        //! @return chunk size.
        uint32_t
        getSize(void) const
        {
          return getDataSize() + 4 + 4;
        }

        //! Set size of chunk data.
        //! @return chunk size.
        void
        setDataSize(size_t size)
        {
          m_pad_size = 4 - (size % 4);
          if (m_pad_size == 4)
            m_pad_size = 0;

          m_data_size = (uint32_t)size;
        }

        //! Get size of chunk data.
        uint32_t
        getDataSize(void) const
        {
          return m_data_size + m_pad_size;
        }

      protected:
        //! Properties.
        const Properties& m_properties;

        //! Write 16-bit unsigned value to output stream.
        //! @param[in] value value to write.
        //! @param[in] os output stream.
        void
        writeShort(const uint16_t& value, std::ostream& os)
        {
          os.write((const char*)&value, sizeof(uint16_t));
        }

        //! Write 32-bit unsigned value to output stream.
        //! @param[in] value value to write.
        //! @param[in] os output stream.
        void
        writeWord(const uint32_t& value, std::ostream& os)
        {
          os.write((const char*)&value, sizeof(uint32_t));
        }

        //! Write FourCC value to output stream.
        //! @param[in] value value to write.
        //! @param[in] os output stream.
        void
        writeFourCC(const char* value, std::ostream& os)
        {
          os.write(value, 4);
        }

        //! Write string to output stream.
        //! @param[in] value value to write.
        //! @param[in] os output stream.
        void
        writeString(const std::string& value, std::ostream& os)
        {
          os.write(value.c_str(), value.size());
        }

        //! Write chunk data to output stream.
        //! @param[in] os output stream.
        virtual void
        writeData(std::ostream& os)
        {
          if (m_data_size > 0 && m_data != NULL)
            os.write((const char*)m_data, m_data_size);

          if (m_pad_size > 0)
          {
            char pad[3] = {0, 0, 0};
            os.write(pad, m_pad_size);
          }
        }

      private:
        //! FourCC.
        char m_id[4];
        //! Data buffer.
        const uint8_t* m_data;
        //! Data size.
        uint32_t m_data_size;
        //! Padding size.
        uint32_t m_pad_size;
      };
    }
  }
}

#endif
