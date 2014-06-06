//***************************************************************************
// Copyright 2007-2014 Universidade do Porto - Faculdade de Engenharia      *
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
// Author: Ricardo Martins                                                  *
//***************************************************************************

#ifndef TRANSPORTS_SUNSET_COMMAND_HPP_INCLUDED_
#define TRANSPORTS_SUNSET_COMMAND_HPP_INCLUDED_

// ISO C++ 98 headers.
#include <string>
#include <set>
#include <vector>
#include <sstream>
#include <algorithm>

// DUNE headers.
#include <DUNE/Algorithms/CRC16.hpp>

namespace Transports
{
  namespace SUNSET
  {
    class Command
    {
    public:
      //! Command flags.
      enum Flags
      {
#define FLAG(bit, name) FLAG_ ## name = 1 << bit,
#include "Flags.def"
        FLAG_LAST
      };

      //! Default constructor.
      Command(void):
        m_version(0),
        m_src(0),
        m_flags(0),
        m_ttl(0),
        m_priority(0)
      { }

      //! Construct a Command object setting name and version.
      //! @param[in] name command name.
      //! @param[in] version command version.
      Command(const std::string& name, unsigned version = 0):
        m_name(name),
        m_version(version),
        m_src(0),
        m_flags(0),
        m_ttl(0),
        m_priority(0)
      { }

      //! Clear command.
      void
      clear(void)
      {
        m_name.clear();
        m_dsts.clear();
        m_args.clear();
      }

      //! Set command version.
      //! @param[in] version command version.
      //! @return command object.
      Command&
      setVersion(unsigned version)
      {
        m_version = version;
        return *this;
      }

      //! Get command version.
      //! @return command version.
      unsigned
      getVersion(void) const
      {
        return m_version;
      }

      //! Set command name.
      //! @param[in] name command name.
      //! @return command object.
      Command&
      setName(const std::string& name)
      {
        m_name = name;
        return *this;
      }

      //! Get command name.
      //! @return command name.
      std::string
      getName(void) const
      {
        return m_name;
      }

      //! Set command source address.
      //! @param[in] addr command source address.
      //! @return command object.
      Command&
      setSource(unsigned addr)
      {
        m_src = addr;
        return *this;
      }

      //! Get command source address.
      //! @return source address.
      unsigned
      getSource(void) const
      {
        return m_src;
      }

      //! Add destination address. This function can be called
      //! multiple times to add more than one destination address.
      //! @param[in] addr destination address.
      //! @return command object.
      Command&
      addDestination(unsigned addr)
      {
        m_dsts.insert(addr);
        return *this;
      }

      //! Retrieve destination addresses.
      //! @return destination addresses.
      const std::set<unsigned>&
      getDestinations(void) const
      {
        return m_dsts;
      }

      //! Add argument to command. This function can be called
      //! multiple times to add more than one argument.
      //! @param[in] arg command argument.
      //! @return command object.
      Command&
      addArgument(const std::string& arg)
      {
        m_args.push_back(arg);
        return *this;
      }

      //! Retrieve command arguments.
      //! @return command arguments.
      const std::vector<std::string>&
      getArguments(void) const
      {
        return m_args;
      }

      //! Set command time-to-live.
      //! @param[in] value number of seconds.
      //! @return command object.
      Command&
      setTTL(unsigned value)
      {
        m_ttl = value;
        return *this;
      }

      //! Retrieve command time-to-live.
      //! @return command time-to-live in seconds.
      unsigned
      getTTL(void) const
      {
        return m_ttl;
      }

      //! Set command flags.
      //! @param[in] value flags.
      //! @return command object.
      Command&
      setFlags(unsigned value)
      {
        m_flags = value;
        return *this;
      }

      //! Retrieve command flags.
      //! @return command flags.
      unsigned
      getFlags(void) const
      {
        return m_flags;
      }

      //! Set command priority.
      //! @param[in] value priority.
      //! @return command object.
      Command&
      setPriority(unsigned value)
      {
        m_priority = value;
        return *this;
      }

      //! Retrieve command priority.
      //! @return command priority.
      unsigned
      getPriority(void) const
      {
        return m_priority;
      }

      //! Encode object to text form.
      //! @return command in text form.
      std::string
      encode(void) const
      {
        std::ostringstream ss;
        ss << "V" << m_version << ","
           << DUNE::Utils::String::str("%02X", m_flags) << ","
           << m_ttl << ","
           << m_priority << ","
           << m_src << ","
           << m_dsts.size() << ",";

        // Destinations.
        if (m_dsts.begin() == m_dsts.end())
          throw std::runtime_error("invalid destination");

        for (std::set<unsigned>::const_iterator itr = m_dsts.begin(); itr != m_dsts.end(); ++itr)
          ss << *itr << ",";

        // Command name.
        ss << m_name << ",";

        // Command arguments.
        for (size_t i = 0; i < m_args.size(); ++i)
          ss << m_args[i] << ",";

        // CRC.
        std::string cmd(ss.str());
        char crc[5] = {0};
        std::sprintf(crc, "%04X", computeCRC(cmd, cmd.size()));
        cmd.append(crc);

        // Termination character.
        cmd.push_back('\n');

        return cmd;
      }

      //! Decode command in text form.
      //! @param[in] cmd command in text form.
      //! @return command object.
      Command&
      decode(const std::string& cmd)
      {
        // Validate CRC.
        if (getCRC(cmd) != computeCRC(cmd, cmd.size() - 5))
          throw std::runtime_error("invalid checksum");

        // Split command.
        std::vector<std::string> parts;
        DUNE::Utils::String::split(cmd, ",", parts);

        clear();

        // Extract version.
        if (std::sscanf(parts[OFFS_VERSION].c_str(), "V%u", &m_version) != 1)
          throw std::runtime_error("invalid format");

        // Extract flags.
        if (std::sscanf(parts[OFFS_FLAGS].c_str(), "%02X", &m_flags) != 1)
          throw std::runtime_error("invalid format");

        // Extract TTL.
        if (std::sscanf(parts[OFFS_TTL].c_str(), "%u", &m_ttl) != 1)
          throw std::runtime_error("invalid format");

        // Extract priority.
        if (std::sscanf(parts[OFFS_PRIORITY].c_str(), "%u", &m_priority) != 1)
          throw std::runtime_error("invalid format");

        // Extract source.
        if (std::sscanf(parts[OFFS_SRC].c_str(), "%u", &m_src) != 1)
          throw std::runtime_error("invalid format");

        // Extract number of destinations.
        unsigned dst_count = 0;
        if (std::sscanf(parts[OFFS_DST_COUNT].c_str(), "%u", &dst_count) != 1)
          throw std::runtime_error("invalid format");

        // Extract destinations.
        unsigned dst = 0;
        for (unsigned i = 0; i < dst_count; ++i)
        {
          if (std::sscanf(parts[OFFS_DST + i].c_str(), "%u", &dst) != 1)
            throw std::runtime_error("invalid format");
          m_dsts.insert(dst);
        }

        // Command name.
        m_name = parts[OFFS_DST + dst_count];

        // Check if we have arguments.
        size_t args_start = OFFS_DST + dst_count + 1;
        size_t args_end = parts.size() - 1;

        // No arguments.
        if (args_start == args_end)
          return *this;

        // Copy arguments.
        m_args.resize(args_end - args_start);
        std::copy(&parts[args_start], &parts[args_end], m_args.begin());

        return *this;
      }

      void
      toText(std::ostream& os) const
      {
        os << "{\n"
           << "  \"name\"          : \"" << m_name << "\",\n"
           << "  \"version\"       : " << m_version << ",\n"
           << "  \"flags\"         : \"" << getFlagList(m_flags) << "\",\n"
           << "  \"ttl\"           : " << m_ttl << ",\n"
           << "  \"priority\"      : " << m_priority << ",\n"
           << "  \"source\"        : " << m_src << ",\n";

        // Destinations.
        std::set<unsigned>::const_iterator dst_itr = m_dsts.begin();
        if (dst_itr == m_dsts.end())
        {
          os << "  \"destinations\"  : []" << *dst_itr;
        }
        else
        {
          os << "  \"destinations\"  : [" << *dst_itr;
          for (++dst_itr; dst_itr != m_dsts.end(); ++dst_itr)
            os << "," << *dst_itr;
          os << "],\n";
        }

        //! Arguments.
        std::vector<std::string>::const_iterator arg_itr = m_args.begin();
        if (arg_itr == m_args.end())
        {
          os << "  \"arguments\"     : []\n";
        }
        else
        {
          os << "  \"arguments\"     : [\"" << *arg_itr << "\"";
          for (++arg_itr; arg_itr != m_args.end(); ++arg_itr)
            os << "," << "\"" << *arg_itr << "\"";
          os << "],\n";
        }

        os << "}\n"
        ;
      }

    private:
      // Field offsets.
      enum Offset
      {
        //! Version.
        OFFS_VERSION   = 0,
        //! Flags.
        OFFS_FLAGS     = 1,
        //! Time-to-live.
        OFFS_TTL       = 2,
        //! Priority.
        OFFS_PRIORITY  = 3,
        //! Source.
        OFFS_SRC       = 4,
        //! Number of destinations.
        OFFS_DST_COUNT = 5,
        //! First destination.
        OFFS_DST       = 6
      };

      //! Command name.
      std::string m_name;
      //! Version.
      unsigned m_version;
      //! Source address.
      unsigned m_src;
      //! Destination addresses.
      std::set<unsigned> m_dsts;
      //! Command flags.
      unsigned m_flags;
      //! Command time-to-live.
      unsigned m_ttl;
      //! Command priority.
      unsigned m_priority;
      //! Command arguments.
      std::vector<std::string> m_args;

      //! Retrieve CRC from an encoded command string.
      //! @param[in] cmd command string.
      //! @return CRC value.
      static uint16_t
      getCRC(const std::string& cmd)
      {
        size_t idx = cmd.find_last_of(',');
        if (idx == std::string::npos)
          throw std::runtime_error("invalid checksum format 1");

        std::string scrc(cmd.substr(idx + 1));
        if (scrc.size() != 5)
          throw std::runtime_error("invalid checksum format 2");

        unsigned crc = 0;
        if (std::sscanf(scrc.c_str(), "%04X", &crc) != 1)
          throw std::runtime_error("invalid checksum format 3");

        return crc;
      }

      //! Compute the CRC of a string fragment.
      //! @param[in] str string.
      //! @param[in] size string size.
      //! @return CRC value.
      static uint16_t
      computeCRC(const std::string& str, size_t size)
      {
        return DUNE::Algorithms::CRC16::compute((const uint8_t*)&str[0], size);
      }

      //! Retrieve human-readable list of flags.
      //! @param[in] flags flags bitfield.
      //! @return human-readable list of flags.
      static std::string
      getFlagList(unsigned flags)
      {
        std::vector<std::string> list;

#define FLAG(bit, name) if (flags & (1 << bit)) { list.push_back(#name); }
#include "Flags.def"

        return DUNE::Utils::String::join(list.begin(), list.end(), " | ");
      }
    };
  }
}

#endif
