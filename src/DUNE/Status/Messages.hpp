//***************************************************************************
// Copyright (C) 2007-2013 Laboratório de Sistemas e Tecnologia Subaquática *
// Departamento de Engenharia Electrotécnica e de Computadores              *
// Rua Dr. Roberto Frias, 4200-465 Porto, Portugal                          *
//***************************************************************************
// Author: Ricardo Martins                                                  *
//***************************************************************************
// $Id:: Messages.hpp 12667 2013-01-22 02:44:42Z rasm                     $:*
//***************************************************************************

#ifndef DUNE_STATUS_MESSAGES_HPP_INCLUDED_
#define DUNE_STATUS_MESSAGES_HPP_INCLUDED_

// DUNE headers.
#include <DUNE/Status/Codes.hpp>

namespace DUNE
{
  namespace Status
  {
    const char*
    getString(Code code);
  }
}

#endif
