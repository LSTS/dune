//***************************************************************************
// Copyright (C) 2007-2013 Laboratório de Sistemas e Tecnologia Subaquática *
// Departamento de Engenharia Electrotécnica e de Computadores              *
// Rua Dr. Roberto Frias, 4200-465 Porto, Portugal                          *
//***************************************************************************
// Author: Ricardo Martins                                                  *
//***************************************************************************

#ifndef DUNE_HARDWARE_LUCL_COMMAND_TYPE_HPP_INCLUDED_
#define DUNE_HARDWARE_LUCL_COMMAND_TYPE_HPP_INCLUDED_

namespace DUNE
{
  namespace Hardware
  {
    namespace LUCL
    {
      enum CommandType
      {
        CommandTypeNone,
        CommandTypeNormal,
        CommandTypeVersion,
        CommandTypeName,
        CommandTypeError,
        CommandTypeBootJump,
        CommandTypeReset,
        CommandTypeInvalidChecksum,
        CommandTypeInvalidVersion
      };
    }
  }
}

#endif
