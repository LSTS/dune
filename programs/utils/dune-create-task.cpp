//***************************************************************************
// Copyright (C) 2007-2013 Laboratório de Sistemas e Tecnologia Subaquática *
// Departamento de Engenharia Electrotécnica e de Computadores              *
// Rua Dr. Roberto Frias, 4200-465 Porto, Portugal                          *
//***************************************************************************
// Author: Ricardo Martins                                                  *
//***************************************************************************

// ISO C++ 98 headers.
#include <iostream>
#include <fstream>

// DUNE headers.
#include <DUNE/DUNE.hpp>
using DUNE_NAMESPACES;

// Author name.
static std::string g_author;
static std::string g_type;
static std::string g_name;
static Path g_prefix;

void
writeBanner(std::ostream& os)
{
  os << "//***************************************************************************\n"
     << "// Copyright (C) 2007-2013 Laborat\xf3rio de Sistemas e Tecnologia Subaqu\xe1tica *\n"
     << "// Departamento de Engenharia Electrot\xe9""cnica e de Computadores              *\n"
     << "// Rua Dr. Roberto Frias, 4200-465 Porto, Portugal                          *\n"
     << "//***************************************************************************\n"
     << "// Author: " << String::str("%-65s", g_author.c_str()) << "*\n"
     << "//***************************************************************************\n"
     << "// $Id:: dune-create-task.cpp 12667 2013-01-22 02:44:42Z rasm             $:*\n"
     << "//***************************************************************************\n"
     << "";
}

void
writeIncludes(std::ostream& os)
{
  os << "\n"
     << "// DUNE headers.\n"
     << "#include <DUNE/DUNE.hpp>\n"
     << "";
}

void
writeTaskBegin(std::ostream& os)
{
  os << "\n"
     << "namespace " << String::str("%s", g_type.c_str()) << "\n"
     << "{\n"
     << "  namespace " << String::str("%s", g_name.c_str()) << "\n"
     << "  {\n"
     << "    using DUNE_NAMESPACES;\n"
     << "";
}

void
writeTask(std::ostream& os)
{
  os << "\n"
     << "    struct Task: public DUNE::Tasks::Task\n"
     << "    {\n"

  // Constructor.
     << "      Task(const std::string& name, Tasks::Context& ctx):\n"
     << "        DUNE::Tasks::Task(name, ctx)\n"
     << "      {\n"
     << "      }\n"
     << "\n"

  // onUpdateParameters.
     << "      void\n"
     << "      onUpdateParameters(void)\n"
     << "      {\n"
     << "      }\n"
     << "\n"

  // onEntityReservation.
     << "      void\n"
     << "      onEntityReservation(void)\n"
     << "      {\n"
     << "      }\n"
     << "\n"

  // onEntityResolution.
     << "      void\n"
     << "      onEntityResolution(void)\n"
     << "      {\n"
     << "      }\n"
     << "\n"

  // onResourceAcquisition.
     << "      void\n"
     << "      onResourceAcquisition(void)\n"
     << "      {\n"
     << "      }\n"
     << "\n"

  // onResourceInitialization.
     << "      void\n"
     << "      onResourceInitialization(void)\n"
     << "      {\n"
     << "      }\n"
     << "\n"

  // onResourceRelease.
     << "      void\n"
     << "      onResourceRelease(void)\n"
     << "      {\n"
     << "      }\n"
     << "\n"

  // onMain.
     << "      void\n"
     << "      onMain(void)\n"
     << "      {\n"
     << "        while (!stopping())\n"
     << "        {\n"
     << "          waitForMessages(1.0);\n"
     << "        }\n"
     << "      }\n"

  // Structure end.
     << "    };\n"
     << "  }\n"
     << "}\n"
     << "";
}

void
writeTaskEnd(std::ostream& os)
{
  os << "\n"
     << "DUNE_TASK\n"
     << "";
}

void
writeTask(const Path& prefix)
{
  Path file = prefix / "Task.cpp";
  std::ofstream ofs(file.c_str());
  writeBanner(ofs);
  writeIncludes(ofs);
  writeTaskBegin(ofs);
  writeTask(ofs);
  writeTaskEnd(ofs);
}

void
writeCmake(const Path& prefix)
{
  Path file = prefix / "Task.cmake";
  std::ofstream ofs(file.c_str());
  ofs << std::endl;
}

int
main(int argc, char** argv)
{
  OptionParser options;
  options.executable("dune-task-create")
  .program(DUNE_SHORT_NAME)
  .copyright(DUNE_COPYRIGHT)
  .email(DUNE_CONTACT)
  .version(DUNE_COMPLETE_VERSION)
  .date(DUNE_BUILD_TIME)
  .arch(DUNE_SYSTEM_NAME)
  .add("-p", "--prefix",
       "Base folder where to place the task scaffold", "PREFIX")
  .add("-o", "--author",
       "Author's name", "AUTHOR")
  .add("-t", "--type",
       "Task type", "TYPE")
  .add("-n", "--name",
       "Task name", "NAME");

  // Parse command line arguments.
  if (!options.parse(argc, argv))
  {
    if (options.bad())
      std::cerr << "ERROR: " << options.error() << std::endl;
    options.usage();
    return 1;
  }

  // Prefix.
  if (options.value("--prefix").empty())
    g_prefix = ".";
  else
    g_prefix = options.value("--prefix");

  // Author name.
  if (options.value("--author").empty())
  {
    std::cerr << "ERROR: author name is required (see --author)." << std::endl;
    return 1;
  }

  // Task type.
  if (options.value("--type").empty())
  {
    std::cerr << "ERROR: task type is required (see --type)." << std::endl;
    return 1;
  }

  g_author = options.value("--author");
  g_type = options.value("--type");
  g_name = options.value("--name");

  std::string full_name = g_type + "." + g_name;
  Path prefix = g_prefix / Path(g_type) / Path(g_name);
  prefix = prefix.absolute();

  std::cerr << "Creating task '" << full_name << "' in '" << prefix << "'." << std::endl;

  prefix.create();
  writeTask(prefix);
  writeCmake(prefix);

  return 0;
}
