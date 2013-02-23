//***************************************************************************
// Copyright (C) 2007-2013 Laboratório de Sistemas e Tecnologia Subaquática *
// Departamento de Engenharia Electrotécnica e de Computadores              *
// Rua Dr. Roberto Frias, 4200-465 Porto, Portugal                          *
//***************************************************************************
// Author: Ricardo Martins                                                  *
//***************************************************************************
// $Id:: I18N.hpp 12667 2013-01-22 02:44:42Z rasm                         $:*
//***************************************************************************

#ifndef DUNE_I18N_HPP_INCLUDED_
#define DUNE_I18N_HPP_INCLUDED_

// ISO C++ 98 headers.
#include <string>

// DUNE headers.
#include <DUNE/FileSystem/Path.hpp>

namespace DUNE
{
  class I18N
  {
  public:
    static void
    setLanguage(const DUNE::FileSystem::Path& folder, const std::string& name = "");

    static std::string
    getLanguage(void);
  };
}

#endif
