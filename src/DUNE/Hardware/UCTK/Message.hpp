//***************************************************************************
// Copyright (C) 2007-2013 Laboratório de Sistemas e Tecnologia Subaquática *
// Departamento de Engenharia Electrotécnica e de Computadores              *
// Rua Dr. Roberto Frias, 4200-465 Porto, Portugal                          *
//***************************************************************************
// Author: Ricardo Martins                                                  *
//***************************************************************************

#ifndef DUNE_HARDWARE_UCTK_MESSAGE_HPP_INCLUDED_
#define DUNE_HARDWARE_UCTK_MESSAGE_HPP_INCLUDED_

// DUNE headers.
#include <DUNE/Utils/String.hpp>

namespace DUNE
{
  namespace Hardware
  {
    namespace UCTK
    {
      //! Abstract class representing an UCTK message.
      class Message
      {
      public:
        //! Default destructor.
        virtual
        ~Message(void)
        { }

        //! Retrieve the identification number of the message.
        //! @return message identification number.
        virtual uint8_t
        getId(void) const = 0;

        virtual uint8_t
        getSize(void) const = 0;

        virtual void
        deserialize(const uint8_t* buffer, unsigned buffer_size) = 0;

        virtual void
        serialize(uint8_t* buffer, unsigned buffer_size) const = 0;

        virtual
        std::string
        str(void) const
        {
          return Utils::String::str("message %u", getId());
        }
      };
    }
  }
}

#endif
