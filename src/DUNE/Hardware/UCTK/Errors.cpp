//***************************************************************************
// Copyright (C) 2007-2013 Laboratório de Sistemas e Tecnologia Subaquática *
// Departamento de Engenharia Electrotécnica e de Computadores              *
// Rua Dr. Roberto Frias, 4200-465 Porto, Portugal                          *
//***************************************************************************
// Author: Ricardo Martins                                                  *
//***************************************************************************
// $Id:: Errors.cpp 12703 2013-01-24 02:54:34Z rasm                       $:*
//***************************************************************************

// DUNE headers.
#include <DUNE/Config.hpp>
#include <DUNE/Hardware/UCTK/Errors.hpp>

namespace DUNE
{
  namespace Hardware
  {
    namespace UCTK
    {
      static const char* c_error_strings[] =
      {
        DTR("invalid command"),
        DTR("invalid command arguments"),
        DTR("invalid checksum"),
        DTR("lost synchronization"),
        DTR("parser error"),
        DTR("data overrun"),
        DTR("buffer overflow"),
        DTR("unknown error")
      };

      static const unsigned c_error_strings_count = sizeof(c_error_strings) / sizeof(char*);

      const char*
      Errors::translate(unsigned code)
      {
        if (code >= c_error_strings_count)
          return DTR("invalid error code");

        return c_error_strings[code];
      }
    }
  }
}
