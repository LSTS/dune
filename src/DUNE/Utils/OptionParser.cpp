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
// @todo This requires a little cleanup.                                    *
//***************************************************************************

// ISO C++ 98 headers.
#include <iostream>
#include <sstream>
#include <cstdlib>
#include <cstdio>
#include <stdexcept>

// DUNE headers.
#include <DUNE/Utils/String.hpp>
#include <DUNE/Utils/OptionParser.hpp>

namespace DUNE
{
  namespace Utils
  {
    OptionParser::OptionParser(void)
    {
      add("-h", "--help", DTR("Print this message and exit"), 0);
      add("-v", "--version", DTR("Print the version information and exit"), 0);
      add("-a", "--arch", DTR("Print architecture information and exit"), 0);
    }

    OptionParser::~OptionParser(void)
    {
      std::list<std::string>::iterator itr = m_option_lst.begin();

      for (; itr != m_option_lst.end(); ++itr)
        delete m_option_map[(*itr)];
    }

    OptionParser&
    OptionParser::add(const char* short_opt, const char* long_opt, const char* desc, const char* argument)
    {
      if (m_option_map.find(short_opt) != m_option_map.end())
        throw std::runtime_error(String::str(DTR("short option '%s' already exists"), short_opt));

      if (m_option_map.find(long_opt) != m_option_map.end())
        throw std::runtime_error(String::str(DTR("long option '%s' already exists"), long_opt));

      Option* opt = new Option;

      opt->long_opt = long_opt;
      opt->description = desc;

      if (argument != 0)
        opt->argument_label = argument;
      else
        opt->argument_label = "";

      m_option_lst.push_back(short_opt);

      m_option_map[short_opt] = opt;
      m_option_map[long_opt] = opt;

      return *this;
    }

    bool
    OptionParser::parse(int argc, char** argv)
    {
      // Just the program name, no arguments to parse.
      if (argc == 1)
        return false;

      std::list<std::string> args(&argv[1], &argv[argc]);

      while (!args.empty())
      {
        if (!processElement(args))
          return false;
      }

      if (value("--help") == "true")
      {
        usage();
        std::exit(1);
      }
      else if (value("--version") == "true")
      {
        std::cerr << m_version << " [" << m_build_time << "]" << std::endl;
        std::exit(0);
      }
      else if (value("--arch") == "true")
      {
        std::cerr << m_arch << std::endl;
        std::exit(0);
      }

      return true;
    }

    void
    OptionParser::usage(void)
    {
      using namespace std;

      fprintf(stderr, "%s v%s [%s]\n", m_program.c_str(), m_version.c_str(), m_build_time.c_str());
      fprintf(stderr, "%s\n\n", m_copyright.c_str());

      if (!m_description.empty())
        fprintf(stderr, DTR("Description:\n  %s\n\n"), m_description.c_str());

      fprintf(stderr, DTR("Usage:\n  %s [options]\n\n"), m_executable.c_str());
      fprintf(stderr, DTR("Options:\n"));

      std::list<std::string>::iterator itr = m_option_lst.begin();

      for (; itr != m_option_lst.end(); ++itr)
      {
        Option* opt = m_option_map[(*itr)];
        std::stringstream line;

        line << "  " << (*itr);

        if (opt->argument_label != "")
          line << " " << opt->argument_label;

        line << ", " << opt->long_opt;

        if (opt->argument_label != "")
          line << " " << opt->argument_label;

        int pad = 40 - line.str().size();

        std::cerr << line.str();
        for (int i = 0; i < pad; ++i)
          std::cerr << " ";
        std::cerr << opt->description << "." << std::endl;
      }

      fprintf(stderr, "\n");
      fprintf(stderr, DTR("This program is built for %s\n"), m_arch.c_str());
      fprintf(stderr, DTR("Report bugs to %s\n"), m_email.c_str());
    }

    bool
    OptionParser::processElement(std::list<std::string>& args)
    {
      std::string arg = args.front();
      args.pop_front();

      // Check for positional arguments.
      if (m_option_map.find(arg) == m_option_map.end())
      {
        if (arg[0] == '-')
        {
          m_error = String::str(DTR("unknown option '%s'"), arg.c_str());
          return false;
        }

        m_arguments.push_back(arg);
      }
      // Check for options.
      else
      {
        if (m_option_map[arg]->argument_label != "")
        {
          if (args.empty())
          {
            m_error = String::str(DTR("missing argument for option '%s'"), arg.c_str());
            return false;
          }

          std::string opt_arg = args.front();
          args.pop_front();
          m_option_map[arg]->argument = opt_arg;
        }
        else
        {
          m_option_map[arg]->argument = "true";
        }
      }

      return true;
    }
  }
}
