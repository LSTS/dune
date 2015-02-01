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

    std::string enabled;
    cfg.get(vec[i], "Enabled", "Never", enabled);
    if (enabled == "Never")
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
      }
    }
  }

  return 0;
}
