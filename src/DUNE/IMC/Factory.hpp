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

#ifndef DUNE_IMC_FACTORY_HPP_INCLUDED_
#define DUNE_IMC_FACTORY_HPP_INCLUDED_

// ISO C++ 98 headers.
#include <string>
#include <vector>

// DUNE headers.
#include <DUNE/Config.hpp>
#include <DUNE/IMC/Message.hpp>

namespace DUNE
{
  namespace IMC
  {
    // Export DLL Symbol.
    class DUNE_DLL_SYM Factory;

    class Factory
    {
    public:
      //! Produce a message object by identification number.
      //! @param key message identification number.
      //! @return message object allocated on the heap.
      static Message*
      produce(uint32_t key);

      //! Produce a message object by name.
      //! @param name message name.
      //! @return message object allocated on the heap.
      static Message*
      produce(const std::string& name);

      //! Retrieve all message abbreviations.
      //! @param v output vector
      static void
      getAbbrevs(std::vector<std::string>& v);

      //! Retrieve all message identification numbers.
      //! @param v output vector
      static void
      getIds(std::vector<uint32_t>& v);

      //! Retrieve message identification numbers for a list of
      //! message abbreviations.
      //! @param list comma separated list of abbreviations
      //! @param v output vector
      static void
      getIds(std::string list, std::vector<uint32_t>& v);

      //! Retrieve the corresponding message abbreviation from the
      //! identification number.
      //! @param id identification number.
      //! @return abbreviation.
      static std::string
      getAbbrevFromId(uint32_t id);

      //! Retrieve the corresponding message identification number from the
      //! abbreviation.
      //! @param name abbreviation.
      //! @return identification number.
      static uint32_t
      getIdFromAbbrev(const std::string& name);
    };
  }
}

#endif
