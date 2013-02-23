//***************************************************************************
// Copyright (C) 2007-2013 Laboratório de Sistemas e Tecnologia Subaquática *
// Departamento de Engenharia Electrotécnica e de Computadores              *
// Rua Dr. Roberto Frias, 4200-465 Porto, Portugal                          *
//***************************************************************************
// Author: Ricardo Martins                                                  *
//***************************************************************************
// $Id:: Config.hpp 12795 2013-01-30 03:58:26Z rasm                       $:*
//***************************************************************************

#ifndef DUNE_UTILS_CONFIG_PARSER_HPP_INCLUDED_
#define DUNE_UTILS_CONFIG_PARSER_HPP_INCLUDED_

// ISO C++ 98 headers.
#include <map>
#include <string>
#include <sstream>
#include <vector>
#include <stdexcept>
#include <cstring>

// DUNE headers.
#include <DUNE/Config.hpp>
#include <DUNE/Utils/String.hpp>
#include <DUNE/Streams/Terminal.hpp>
#include <DUNE/Casts.hpp>

namespace DUNE
{
  namespace Parsers
  {
    // Export DLL Symbol.
    class DUNE_DLL_SYM Config;

    //! Microsoft Windows INI configuration file parser. The
    //! configuration file format consists of sections, led by a
    //! "[section]" header and followed by "option = value" entries,
    //! with continuations in the style of RFC 822. Note that leading
    //! and trailing whitespaces are removed from values. Character
    //! case in "option" identifiers is discarded. Lines beginning
    //! with "#" or ";" are ignored and may be used to provide
    //! comments.
    class Config
    {
    public:
      //! Default constructor.
      Config(void)
      { }

      //! Create the parser and parse a configuration file.
      //! @param fname name of the configuration file to parse.
      Config(const char* fname);

      //! Parse a configuration file.
      //! @param fname name of the configuration file to parse.
      void
      parseFile(const char* fname);

      //! Set a configuration parameter.
      //! @param section section.
      //! @param option option.
      //! @param value value for option.
      void
      set(const std::string& section, const std::string& option, const std::string& value)
      {
        m_data[section][option] = value;
      }

      //! Retrieve the value of an option in a given section.
      //! @param section section.
      //! @param option option.
      //! @return option value.
      std::string
      get(const std::string& section, const std::string& option)
      {
        return m_data[section][option];
      }

      //! Retrieve the option map of a given section.
      //! @param[in] section section name.
      //! @return map of <option, value>.
      std::map<std::string, std::string>
      getSection(const std::string& section)
      {
        return m_data[section];
      }

      //! Retrieve the value of an option in a given section and perform type conversion.
      //! @param sec section.
      //! @param opt option.
      //! @param def default value.
      //! @param var destination variable.
      template <typename Type>
      void
      get(const std::string& sec, const std::string& opt, const std::string& def, Type& var)
      {
        if (m_data[sec].find(opt) != m_data[sec].end())
        {
          if (castLexical(m_data[sec][opt], var))
            return;
        }

        if (castLexical(def, var))
        {
          m_data[sec][opt] = def;
          return;
        }

        using Utils::String;
        throw std::runtime_error(String::str("unable to convert the value under "
                                             "section '%s' option '%s' to the required "
                                             "type and no valid default was given",
                                             sec.c_str(), opt.c_str()));
      }

      //! Retrieve the list of strings separated by commas of an
      //! option in a given section, performing type conversion.
      //! @param section section.
      //! @param option option.
      //! @param dest destination array.
      //! @param size expected number of strings.
      //! @return true if the number of strings is equal to the
      //! argument size, false otherwise.
      template <typename T>
      bool
      getList(const std::string& section, const std::string& option, T* dest, unsigned int size)
      {
        std::vector<T> v;
        get(section, option, "", v);

        if (v.size() != size)
          return false;

        std::memcpy(dest, &v[0], sizeof(T) * size);
        return true;
      }

      //! Writes the current configuration to a file.
      //! @param file output file option.
      void
      writeToFile(const char* file);

      //! Retrieve the file option of the parsed configuration file.
      //! @return parsed file option.
      std::vector<std::string>
      files(void)
      {
        return m_files;
      }

      //! Retrieve all the available sections.
      //! @return list of all sections.
      std::vector<std::string>
      sections(void);

      //! Retrieve all the options under the given section.
      //! @param section section of interest.
      //! @return list of options under the given section.
      std::vector<std::string>
      options(const std::string& section);

      //! Write the current configuration to a stream.
      //! @param[in] os output stream.
      //! @param[in] cfg Config instance.
      friend DUNE_DLL_SYM std::ostream&
      operator<<(std::ostream& os, const Config& cfg);

    private:
      typedef std::map<std::string, std::string> Section;
      typedef std::map<std::string, Section> Sections;
      //! Representation of the configuration file as a map.
      Sections m_data;
      //! List of parsed files.
      std::vector<std::string> m_files;

      // Non - copyable.
      Config(const Config&);

      // Non - assignable
      Config&
      operator=(const Config&);
    };
  }
}

#endif
