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

#if defined(DUNE_SYS_HAS_GETTEXT) && defined(LC_MESSAGES)
    setlocale(LC_MESSAGES, name.c_str());
    bindtextdomain("dune", folder.c_str());
    bind_textdomain_codeset("dune", "UTF-8");
    textdomain("dune");
#endif
  }

  std::string
  I18N::getLanguage(void)
  {
#if defined(DUNE_SYS_HAS_GETTEXT) && defined(LC_MESSAGES)
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
