//***************************************************************************
// Copyright (C) 2007-2013 Laboratório de Sistemas e Tecnologia Subaquática *
// Departamento de Engenharia Electrotécnica e de Computadores              *
// Rua Dr. Roberto Frias, 4200-465 Porto, Portugal                          *
//***************************************************************************
// Author: Ricardo Martins                                                  *
//***************************************************************************
// $Id:: SuperTypes.hpp 12667 2013-01-22 02:44:42Z rasm                   $:*
//***************************************************************************
// Automatically generated.                                                 *
//***************************************************************************

#ifndef DUNE_IMC_SUPERTYPES_HPP_INCLUDED_
#define DUNE_IMC_SUPERTYPES_HPP_INCLUDED_

// DUNE headers.
#include <DUNE/IMC/Message.hpp>

namespace DUNE
{
  namespace IMC
  {
    //! Super type Maneuver.
    class Maneuver: public Message
    {
    };

    //! Super type Control Command.
    class ControlCommand: public Message
    {
    };

    //! Super type Payload.
    class Payload: public Message
    {
    };
  }
}

#endif
