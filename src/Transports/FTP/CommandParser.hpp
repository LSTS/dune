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
// Author: Ricardo Martins                                                  *
//***************************************************************************

#ifndef TRANSPORTS_FTP_COMMAND_PARSER_HPP_INCLUDED_
#define TRANSPORTS_FTP_COMMAND_PARSER_HPP_INCLUDED_

// ISO C++ 98 headers.
#include <string>
#include <cctype>

// DUNE headers.
#include <DUNE/DUNE.hpp>

namespace Transports
{
  namespace FTP
  {
    //! Implementation of a simple FTP command parser.
    //!
    //! This class breaks lines into commands and splits the command
    //! into code and parameters.
    //!
    //! @author Ricardo Martins
    class CommandParser
    {
    public:
      //! Parser results.
      enum Result
      {
        //! No command is available yet.
        RES_NONE,
        //! One command was successfuly parsed.
        RES_CMD,
        //! Found a syntax error while parsing command.
        RES_ERR_SYN
      };

      //! Default constructor, initializes parser to a sane state.
      CommandParser(void)
      {
        clear();
      }

      //! Reset the parser's internal state.
      void
      clear(void)
      {
        m_state = STATE_CODE;
        m_code.clear();
        m_parm.clear();
      }

      //! Retrieve the code of the last parsed command.
      //! @return command code.
      const std::string&
      getCode(void) const
      {
        return m_code;
      }

      //! Retrieve the parameters of the last parsed command.
      //! @return command parameters.
      const std::string&
      getParameters(void) const
      {
        return m_parm;
      }

      //! Parse one byte of data.
      //! @return see Result.
      Result
      parse(char byte)
      {
        switch (m_state)
        {
          case STATE_CLEAR:
            clear();
            // Fall through.

          case STATE_CODE:
            if (byte == ' ')
              m_state = STATE_PARM;
            else if (byte == '\r')
              m_state = STATE_LF;
            else
              m_code.push_back(toupper(byte));
            break;

          case STATE_PARM:
            if (byte == '\r')
              m_state = STATE_LF;
            else
              m_parm.push_back(byte);
            break;

          case STATE_LF:
            m_state = STATE_CLEAR;
            if (byte == '\n')
              return RES_CMD;
            else
              return RES_ERR_SYN;
            break;
        }

        return RES_NONE;
      }

    private:
      //! Parser states.
      enum State
      {
        //! Parsing command code.
        STATE_CODE,
        //! Parsing command parameters.
        STATE_PARM,
        //! Parsing line-feed (\n).
        STATE_LF,
        //! Parser needs to be cleared.
        STATE_CLEAR
      };

      //! Current state of the state machine.
      State m_state;
      //! Command code.
      std::string m_code;
      //! Command arguments.
      std::string m_parm;
    };
  }
}

#endif
