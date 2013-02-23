//***************************************************************************
// Copyright (C) 2007-2013 Laboratório de Sistemas e Tecnologia Subaquática *
// Departamento de Engenharia Electrotécnica e de Computadores              *
// Rua Dr. Roberto Frias, 4200-465 Porto, Portugal                          *
//***************************************************************************
// Author: Ricardo Martins                                                  *
//***************************************************************************
// $Id:: Command.hpp 12667 2013-01-22 02:44:42Z rasm                      $:*
//***************************************************************************

#ifndef DUNE_HARDWARE_LUCL_COMMAND_HPP_INCLUDED_
#define DUNE_HARDWARE_LUCL_COMMAND_HPP_INCLUDED_

// DUNE headers.
#include <DUNE/Config.hpp>
#include <DUNE/Hardware/LUCL/CommandType.hpp>

namespace DUNE
{
  namespace Hardware
  {
    namespace LUCL
    {
      // Export DLL Symbol.
      struct DUNE_DLL_SYM Command;

      struct Command
      {
        //! Error.
        struct ErrorPayload
        {
          unsigned code;
        };

        //! Version.
        struct VersionPayload
        {
          unsigned major;
          unsigned minor;
          unsigned patch;
        };

        //! Command.
        struct CommandPayload
        {
          uint8_t code;
          uint8_t data[128];
          uint8_t size;
        };

        //! Name.
        struct NamePayload
        {
          char data[16];
        };

        CommandType type;

        union
        {
          ErrorPayload error;
          VersionPayload version;
          CommandPayload command;
          NamePayload name;
        };
      };
    }
  }
}

#endif
