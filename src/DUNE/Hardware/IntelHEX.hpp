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
// http://ec.europa.eu/idabc/eupl.html.                                     *
//***************************************************************************
// Author: Ricardo Martins                                                  *
//***************************************************************************

#ifndef DUNE_HARDWARE_INTEL_HEX_HPP_INCLUDED_
#define DUNE_HARDWARE_INTEL_HEX_HPP_INCLUDED_

// ISO C++ 98 headers.
#include <string>
#include <map>
#include <vector>
#include <fstream>

// DUNE headers.
#include <DUNE/Config.hpp>

namespace DUNE
{
  namespace Hardware
  {
    // Export DLL Symbol.
    class DUNE_DLL_SYM IntelHEX;

    class IntelHEX
    {
    public:
      typedef std::map<unsigned, std::vector<uint8_t> > PageTable;

      //! Constructor. Parse Intel IHEX file.
      IntelHEX(const std::string& file_name, unsigned page_size);

      //! Dump contents of the page table to an output stream.
      //! @param[in] os output stream.
      void
      dump(std::ostream& os) const;

      //! Retrieve page table.
      //! @return page table.
      const PageTable&
      getTable(void) const
      {
        return m_page_table;
      }

    private:
      //! File name.
      std::string m_file_name;
      //! Page size of device's flash.
      unsigned m_page_size;
      //! Page table.
      PageTable m_page_table;

      //! Load Intel HEX file.
      void
      load(void);
    };
  }
}

#endif
