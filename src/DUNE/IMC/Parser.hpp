//***************************************************************************
// Copyright 2007-2015 Universidade do Porto - Faculdade de Engenharia      *
// Laboratório de Sistemas e Tecnologia Subaquática (LSTS)                  *
//***************************************************************************
// This file is part of DUNE: Unified Navigation Environment.               *
//                                                                          *
// Commercial Licence Usage                                                 *
// Licencees holding valid commercial DUNE licences may use this file in    *
// accordance with the commercial licence agreement provided with the       *
// Software or, alternatively, in accordance with the terms contained in a  *
// written agreement between you and Universidade do Porto. For licensing   *
// terms, conditions, and further information contact lsts@fe.up.pt.        *
//                                                                          *
// European Union Public Licence - EUPL v.1.1 Usage                         *
// Alternatively, this file may be used under the terms of the EUPL,        *
// Version 1.1 only (the "Licence"), appearing in the file LICENCE.md       *
// included in the packaging of this file. You may not use this work        *
// except in compliance with the Licence. Unless required by applicable     *
// law or agreed to in writing, software distributed under the Licence is   *
// distributed on an "AS IS" basis, WITHOUT WARRANTIES OR CONDITIONS OF     *
// ANY KIND, either express or implied. See the Licence for the specific    *
// language governing permissions and limitations at                        *
// http://ec.europa.eu/idabc/eupl.html.                                     *
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
