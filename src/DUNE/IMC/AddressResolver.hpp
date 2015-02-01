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
