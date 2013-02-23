//***************************************************************************
// Copyright (C) 2007-2013 Laboratório de Sistemas e Tecnologia Subaquática *
// Departamento de Engenharia Electrotécnica e de Computadores              *
// Rua Dr. Roberto Frias, 4200-465 Porto, Portugal                          *
//***************************************************************************
// Author: Ricardo Martins                                                  *
//***************************************************************************

#ifndef DUNE_IMC_ADDRESS_RESOLVER_HPP_INCLUDED_
#define DUNE_IMC_ADDRESS_RESOLVER_HPP_INCLUDED_

// ISO C++ 98 headers.
#include <string>
#include <map>

// DUNE headers.
#include <DUNE/Config.hpp>
#include <DUNE/Concurrency/Mutex.hpp>

namespace DUNE
{
  namespace IMC
  {
    // Export DLL Symbol.
    class DUNE_DLL_SYM AddressResolver;

    class AddressResolver
    {
    public:
      //! Default constructor.
      AddressResolver(void);

      //! Retrieve the address name of this instance.
      //! @return the address name of this instance.
      const char*
      name(void);

      //! Set the address name of this instance.
      //! @return the address name of this instance.
      void
      name(const std::string& name);

      //! Retrieve the address id of this instance.
      //! @return the address id of this instance.
      unsigned
      id(void);

      //! Set the address id of this instance.
      //! @param id the address id of this instance.
      void
      id(unsigned id);

      void
      insert(const std::string& name, unsigned id);

      const char*
      resolve(unsigned id);

      unsigned
      resolve(const std::string& name);

      bool
      isLocal(unsigned a_id)
      {
        return a_id == m_id;
      }

      //! Test if the given id doesn't have a registered name.
      //! @param a_id node id.
      //! @return true if the given id doesn't have a registered
      //! name, false otherwise.
      bool
      isUnknown(unsigned a_id);

      static unsigned
      invalid(void)
      {
        return 0xffff;
      }

      static bool
      isValid(unsigned id)
      {
        return id != invalid();
      }

    private:
      //! Id to name map.
      typedef std::map<unsigned, std::string> IdToName;
      //! Name to id map.
      typedef std::map<std::string, unsigned> NameToId;
      //! List of known addresses, indexed by id.
      IdToName m_ids;
      //! List of known addresses, indexed by name.
      NameToId m_names;
      //! Address name of this instance.
      std::string m_name;
      //! Address id of this instance.
      unsigned m_id;
      //! Mutex used for safe concurrent accesses.
      Concurrency::Mutex m_mutex;
    };
  }
}

#endif
