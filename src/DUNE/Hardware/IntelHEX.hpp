//***************************************************************************
// Copyright (C) 2007-2013 Laboratório de Sistemas e Tecnologia Subaquática *
// Departamento de Engenharia Electrotécnica e de Computadores              *
// Rua Dr. Roberto Frias, 4200-465 Porto, Portugal                          *
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
