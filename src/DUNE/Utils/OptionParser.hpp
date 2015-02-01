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

#ifndef DUNE_UTILS_OPTION_PARSER_HPP_INCLUDED_
#define DUNE_UTILS_OPTION_PARSER_HPP_INCLUDED_

// ISO C++ 98 headers.
#include <map>
#include <list>
#include <string>

// DUNE headers.
#include <DUNE/Config.hpp>

namespace DUNE
{
  namespace Utils
  {
    // Export DLL Symbol.
    class DUNE_DLL_SYM OptionParser;

    class OptionParser
    {
    public:
      OptionParser(void);

      //! Destructor.
      ~OptionParser(void);

      bool
      parse(int argc, char** argv);

      //! Set program's name.
      //! @param prog program's name.
      //! @return object.
      OptionParser&
      program(const char* prog)
      {
        m_program = prog;
        return *this;
      }

      //! Set program's executable file name.
      //! @param exe program's executable file name.
      //! @return object.
      OptionParser&
      executable(const char* exe)
      {
        m_executable = exe;
        return *this;
      }

      //! Set program's architecture.
      //! @param arc program's architecture.
      //! @return object.
      OptionParser&
      arch(const char* arc)
      {
        m_arch = arc;
        return *this;
      }

      //! Set program's copyright.
      //! @param cright programs copyright.
      //! @return object.
      OptionParser&
      copyright(const char* cright)
      {
        m_copyright = cright;
        return *this;
      }

      //! Set program's build time/date.
      //! @param build_time program's build time/date.
      //! @return object.
      OptionParser&
      date(const char* build_time)
      {
        m_build_time = build_time;
        return *this;
      }

      //! Set program's version.
      //! @param vers program's version.
      //! @return object.
      OptionParser&
      version(const char* vers)
      {
        m_version = vers;
        return *this;
      }

      //! Set program's email contact.
      //! @param contact program's email contact.
      //! @return object.
      OptionParser&
      email(const char* contact)
      {
        m_email = contact;
        return *this;
      }

      //! Set program's description.
      //! @param desc program's description.
      //! @return object.
      OptionParser&
      description(const char* desc)
      {
        m_description = desc;
        return *this;
      }

      //! Add a new option to the parser.
      //! @param short_opt short option, usually one hiffen and a
      //! character (eg. -x).
      //! @param long_opt long option, usually two hiffens and a string
      //! (eg. --xxxx).
      //! @param description option description.
      //! @param argument a label for describing the option argument.
      //! @return object.
      OptionParser&
      add(const char* short_opt, const char* long_opt, const char* description, const char* argument = 0);

      void
      usage(void);

      bool
      bad(void)
      {
        return m_error != "";
      }

      const char*
      error(void)
      {
        return m_error.c_str();
      }

      const std::string&
      value(std::string option)
      {
        return m_option_map[option]->argument;
      }

    private:
      struct Option
      {
        std::string long_opt;
        std::string argument;
        std::string argument_label;
        std::string description;
      };

      //! Program's name.
      std::string m_program;
      //! Program's version.
      std::string m_version;
      //! Program's build time/date.
      std::string m_build_time;
      //! Program's architecture.
      std::string m_arch;
      //! Program's copyright.
      std::string m_copyright;
      //! Program's email contact.
      std::string m_email;
      //! Program's executable.
      std::string m_executable;
      //! Programs's description.
      std::string m_description;
      std::string m_error;
      std::list<std::string> m_arguments;
      std::map<std::string, Option*> m_option_map;
      std::list<std::string> m_option_lst;

      bool
      processElement(std::list<std::string>& args);
    };
  }
}

#endif
