//***************************************************************************
// Copyright (C) 2007-2013 Laboratório de Sistemas e Tecnologia Subaquática *
// Departamento de Engenharia Electrotécnica e de Computadores              *
// Rua Dr. Roberto Frias, 4200-465 Porto, Portugal                          *
//***************************************************************************
// Author: Eduardo Marques                                                  *
//***************************************************************************

#ifndef DUNE_IMC_PARSER_HPP_INCLUDED_
#define DUNE_IMC_PARSER_HPP_INCLUDED_

// ISO C++ 98 headers.
#include <vector>

// DUNE headers.
#include <DUNE/IMC/Message.hpp>

namespace DUNE
{
  namespace IMC
  {
    // Export DLL Symbol.
    class DUNE_DLL_SYM Parser;

    //! Parser class.
    class Parser
    {
    public:
      //! Default constructor.
      Parser(void);

      //! Destructor.
      ~Parser(void);

      //! Reset parser.
      void
      reset(void);

      //! Parse byte and return message if parsing of one message is done.
      //! @param byte data byte
      //! @return defined message or 0
      Message*
      parse(uint8_t byte);

    private:
      //! Parser stage constants.
      enum ParserStage
      {
        c_sync,
        c_header,
        c_payload
      };

      ParserStage m_stage; //!< Parser stage.
      std::vector<uint8_t> m_buf; //!< Internal buffer.
      unsigned int m_pos; //!< Buffer position.
      Header m_header; //!< Holds parsed header (c_payload stage).
    };
  }
}

#endif
