//***************************************************************************
// Copyright (C) 2007-2013 Laboratório de Sistemas e Tecnologia Subaquática *
// Departamento de Engenharia Electrotécnica e de Computadores              *
// Rua Dr. Roberto Frias, 4200-465 Porto, Portugal                          *
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
