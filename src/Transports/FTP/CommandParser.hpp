//***************************************************************************
// Copyright (C) 2007-2013 Laboratório de Sistemas e Tecnologia Subaquática *
// Departamento de Engenharia Electrotécnica e de Computadores              *
// Rua Dr. Roberto Frias, 4200-465 Porto, Portugal                          *
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
