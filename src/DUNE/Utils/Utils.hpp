//***************************************************************************
// Copyright (C) 2007-2013 Laboratório de Sistemas e Tecnologia Subaquática *
// Departamento de Engenharia Electrotécnica e de Computadores              *
// Rua Dr. Roberto Frias, 4200-465 Porto, Portugal                          *
//***************************************************************************
// Author: Ricardo Martins                                                  *
//***************************************************************************
// $Id:: Utils.hpp 12303 2013-01-01 02:14:25Z jbraga                      $:*
//***************************************************************************

#ifndef DUNE_UTILS_UTILS_HPP_INCLUDED_
#define DUNE_UTILS_UTILS_HPP_INCLUDED_

// ISO C++ 98 headers.
#include <map>

//! Construct a std::map statically from an array of std::pairs.
#define DUNE_DECLARE_STATIC_MAP(name, ta, tb, ps)                       \
  static std::map<ta, tb> name(ps, ps + sizeof(ps) / sizeof(ps[0]))

#endif
