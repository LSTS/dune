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

#ifndef TRANSPORTS_SUNSET_SSC_FACTORY_HPP_INCLUDED_
#define TRANSPORTS_SUNSET_SSC_FACTORY_HPP_INCLUDED_

// ISO C++ 98 headers.
#include <string>

// Local headers.
#include "Commands.hpp"

namespace Transports
{
  namespace SUNSET
  {
    class Factory
    {
    public:
      static AbstractCommand*
      createByName(const std::string& name)
      {
#define COMMAND(cmd_name) if (name == #cmd_name) return new cmd_name();
#include "Factory.def"

        throw InvalidValue();
      }

      //! Decode command in text form.
      //! @param[in] cmd command in text form.
      //! @return command object.
      static AbstractCommand*
      decode(const std::string& cmd)
      {
        // Validate CRC.
        if (AbstractCommand::getCRC(cmd) != AbstractCommand::computeCRC(cmd, cmd.size() - c_ssc_footer_size))
          throw InvalidChecksum();

        // Split command.
        std::vector<std::string> parts;
        DUNE::Utils::String::split(cmd, ",", parts);

        // Check minimum arguments.
        if (parts.size() < c_ssc_min_args)
          throw InvalidFormat("minimum arguments not present");

        // Extract prefix.
        if (parts[0] != c_ssc_prefix)
          throw InvalidFormat("invalid prefix");

        // Extract version.
        unsigned version = 0;
        if (std::sscanf(parts[AbstractCommand::OFFS_VERSION].c_str(), "%u", &version) != 1)
          throw InvalidVersion();

        // Extract flags.
        unsigned flags = 0;
        if (std::sscanf(parts[AbstractCommand::OFFS_FLAGS].c_str(), "%02X", &flags) != 1)
          throw InvalidFormat("invalid flags");

        // Extract TTL.
        unsigned ttl = 0;
        if (std::sscanf(parts[AbstractCommand::OFFS_TTL].c_str(), "%u", &ttl) != 1)
          throw InvalidFormat("invalid ttl");

        // Extract priority.
        unsigned priority = 0;
        if (std::sscanf(parts[AbstractCommand::OFFS_PRIORITY].c_str(), "%u", &priority) != 1)
          throw InvalidFormat("invalid priority");

        // Extract source.
        unsigned src = 0;
        if (std::sscanf(parts[AbstractCommand::OFFS_SRC].c_str(), "%u", &src) != 1)
          throw InvalidFormat("invalid source");

        // Extract number of destinations.
        unsigned dst_count = 0;
        if (std::sscanf(parts[AbstractCommand::OFFS_DST_COUNT].c_str(), "%u", &dst_count) != 1)
          throw InvalidFormat("invalid destination count");

        // Extract destinations.
        unsigned dst = 0;
        std::set<unsigned> dsts;
        for (unsigned i = 0; i < dst_count; ++i)
        {
          // FIXME: check size.
          if (std::sscanf(parts[AbstractCommand::OFFS_DST + i].c_str(), "%u", &dst) != 1)
            throw InvalidFormat("invalid destination");
          dsts.insert(dst);
        }

        // Command name.
        std::string name = parts[AbstractCommand::OFFS_DST + dst_count];
        AbstractCommand* cmd_obj = createByName(name);
        if (cmd_obj == NULL)
          throw InvalidValue();

        cmd_obj->setName(name);
        cmd_obj->setSource(src);
        cmd_obj->setDestinations(dsts);
        cmd_obj->setVersion(version);
        cmd_obj->setPriority(priority);
        cmd_obj->setTTL(ttl);
        cmd_obj->setFlags(flags);

        size_t args_start = AbstractCommand::OFFS_DST + dst_count + 1;
        cmd_obj->decodeArgs(parts, args_start);
        return cmd_obj;
      }
    };
  }
}

#endif
