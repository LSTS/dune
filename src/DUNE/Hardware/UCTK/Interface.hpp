//***************************************************************************
// Copyright (C) 2007-2013 Laboratório de Sistemas e Tecnologia Subaquática *
// Departamento de Engenharia Electrotécnica e de Computadores              *
// Rua Dr. Roberto Frias, 4200-465 Porto, Portugal                          *
//***************************************************************************
// Author: Ricardo Martins                                                  *
//***************************************************************************

#ifndef DUNE_HARDWARE_UCTK_INTERFACE_HPP_INCLUDED_
#define DUNE_HARDWARE_UCTK_INTERFACE_HPP_INCLUDED_

// DUNE headers.
#include <DUNE/Time/Counter.hpp>
#include <DUNE/Hardware/UCTK/Message.hpp>
#include <DUNE/Hardware/UCTK/Parser.hpp>
#include <DUNE/Hardware/UCTK/Factory.hpp>

namespace DUNE
{
  namespace Hardware
  {
    namespace UCTK
    {
      class Interface
      {
      public:
        virtual
        ~Interface(void)
        { }

        void
        open(void);

        std::string
        getName(void) const
        {
          return m_name;
        }

        bool
        request(UCTK::Message& msg, double timeout = 1.0);

        bool
        command(UCTK::Message& msg, double timeout = 1.0);

        void
        enterBootloader(void);

      protected:
        virtual bool
        hasNewData(double timeout) = 0;

        virtual void
        write(const uint8_t* data, unsigned data_size) = 0;

        virtual unsigned
        read(uint8_t* data, unsigned data_size) = 0;

        virtual void
        doOpen(void) = 0;

      private:
        UCTK::Parser m_parser;
        UCTK::Factory m_factory;
        uint8_t m_buffer[128];
        std::string m_name;

        bool
        readReply(Message& msg, double timeout);
      };
    }
  }
}

#endif
