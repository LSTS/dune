//***************************************************************************
// Copyright (C) 2007-2013 Laboratório de Sistemas e Tecnologia Subaquática *
// Departamento de Engenharia Electrotécnica e de Computadores              *
// Rua Dr. Roberto Frias, 4200-465 Porto, Portugal                          *
//***************************************************************************
// Author: Ricardo Martins                                                  *
//***************************************************************************
// $Id:: dune-config-check.cpp 12667 2013-01-22 02:44:42Z rasm            $:*
//***************************************************************************
// Utility program to check configuration files.                            *
//***************************************************************************

// ISO C++ 98 headers.
#include <iostream>
#include <vector>

// DUNE headers.
#include <DUNE/DUNE.hpp>
using DUNE_NAMESPACES;
using namespace std;

void
registerStaticTasks(void);

void
validateEntityLabels(Parsers::Config& cfg)
{
  // Get all sections.
  std::vector<std::string> vec = cfg.sections();

  for (unsigned int i = 0; i < vec.size(); ++i)
  {
    if (vec[i].find_first_of(".") == std::string::npos)
      continue;

    std::string entity_label;
    cfg.get(vec[i], "Entity Label", "", entity_label);
    if (entity_label.empty())
      throw std::runtime_error(String::str("section '%s' doesn't have entity label", vec[i].c_str()));
  }
}

int
main(int argc, char** argv)
{
  if (argc < 2)
  {
    cerr << "Usage: " << argv[0] << " DIR0 ... DIRn" << endl
              << "Test if configuration files have missing 'Required' files."
              << endl;
    return 1;
  }

  fprintf(stderr, "* Validating Include/Requires\n");

  for (int i = 1; i < argc; ++i)
  {
    vector<Path> dirs;
    Path(argv[i]).contents(dirs);

    for (unsigned j = 0; j < dirs.size(); ++j)
    {
      if (dirs[j].extension() != "ini")
        continue;

      std::string file = Path(argv[i]).suffix(dirs[j]);

      fprintf(stderr, "  - %-30s ", file.c_str());

      try
      {
        Parsers::Config cfg(dirs[j].c_str());
        validateEntityLabels(cfg);
        fprintf(stderr, "[OK]\n");
      }
      catch (runtime_error& e)
      {
        fprintf(stderr, "[%s]\n", e.what());
        return 1;
      }
    }
  }

  return 0;
}
