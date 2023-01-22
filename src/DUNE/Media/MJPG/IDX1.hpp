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

#ifndef DUNE_MEDIA_MJPG_IDX1_HPP_INCLUDED_
#define DUNE_MEDIA_MJPG_IDX1_HPP_INCLUDED_

// ISO C++ 98 headers.
#include <list>

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
      //! Class representing an AVI index.
      class IDX1: public Chunk
      {
      public:
        //! Constructor.
        //! @param[in] properties stream properties.
        IDX1(const Properties& properties):
          Chunk(properties, "idx1")
        {  }

        //! Destructor.
        ~IDX1(void)
        {
          std::list<uint8_t*>::const_iterator itr = m_index.begin();
          for (; itr != m_index.end(); ++itr)
            delete [] *itr;
        }

        //! Add record to the index.
        //! @param[in] id chunk id.
        //! @param[in] flags flags.
        //! @param[in] offset chunk offset.
        //! @param[in] length chunk length.
        void
        add(const char* id, uint32_t flags, uint32_t offset, uint32_t length)
        {
          uint8_t* record = new uint8_t[16];
          std::memcpy(record, id, 4);
          std::memcpy(record + 4, &flags, 4);
          std::memcpy(record + 8, &offset, 4);
          std::memcpy(record + 12, &length, 4);

          m_index.push_back(record);
          setDataSize(getDataSize() + 16);
        }

        //! Write chunk data to output stream.
        //! @param[in] os output stream.
        void
        writeData(std::ostream& os)
        {
          std::list<uint8_t*>::const_iterator itr = m_index.begin();
          for (; itr != m_index.end(); ++itr)
            os.write((const char*)*itr, 16);
        }

      private:
        //! List of index entries.
        std::list<uint8_t*> m_index;
      };
    }
  }
}

#endif
