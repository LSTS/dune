//***************************************************************************
// Copyright (C) 2007-2013 Laboratório de Sistemas e Tecnologia Subaquática *
// Departamento de Engenharia Electrotécnica e de Computadores              *
// Rua Dr. Roberto Frias, 4200-465 Porto, Portugal                          *
//***************************************************************************
// Author: Ricardo Martins                                                  *
//***************************************************************************
// $Id:: Errors.hpp 12703 2013-01-24 02:54:34Z rasm                       $:*
//***************************************************************************

#ifndef DUNE_HARDWARE_UCTK_ERRORS_HPP_INCLUDED_
#define DUNE_HARDWARE_UCTK_ERRORS_HPP_INCLUDED_

namespace DUNE
{
  namespace Hardware
  {
    namespace UCTK
    {
      class Errors
      {
      public:
        static const char*
        translate(unsigned code);
      };
    }
  }
}

#endif
