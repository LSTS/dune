//***************************************************************************
// Copyright (C) 2007-2013 Laboratório de Sistemas e Tecnologia Subaquática *
// Departamento de Engenharia Electrotécnica e de Computadores              *
// Rua Dr. Roberto Frias, 4200-465 Porto, Portugal                          *
//***************************************************************************
// Author: Ricardo Martins                                                  *
//***************************************************************************
// $Id:: I18N.cpp 12667 2013-01-22 02:44:42Z rasm                         $:*
//***************************************************************************

// ISO C++ 98 headers.
#include <cstddef>

// DUNE headers.
#include <DUNE/Config.hpp>
#include <DUNE/I18N.hpp>

namespace DUNE
{
  void
  I18N::setLanguage(const DUNE::FileSystem::Path& folder, const std::string& name)
  {
    (void)folder;
    (void)name;

#if defined(DUNE_USING_I18N) && defined(LC_ALL)
    setlocale(LC_ALL, name.c_str());
    bindtextdomain("dune", folder.c_str());
    bind_textdomain_codeset("dune", "UTF-8");
    textdomain("dune");
#endif
  }

  std::string
  I18N::getLanguage(void)
  {
#if defined(DUNE_USING_I18N) && defined(LC_MESSAGES)
    std::string name = setlocale(LC_MESSAGES, NULL);
    for (unsigned i = 0; i < name.size(); ++i)
    {
      if (name[i] == '.' || name[i] == '@')
      {
        name.resize(i);
        break;
      }
    }

    return name;
#else
    return "unknown";
#endif
  }
}
