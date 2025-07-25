//***************************************************************************
// Copyright 2013-2020 EvoLogics GmbH                                       *
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
// https://www.lsts.pt/dune/licence.                                        *
//***************************************************************************
// Author: Ievgenii Glushko                                                 *
//***************************************************************************

#ifndef DUNE_UTILS_LINE_PARSER_HPP_INCLUDED_
#define DUNE_UTILS_LINE_PARSER_HPP_INCLUDED_

#include <string>
#include <vector>
#include <algorithm>

#include <DUNE/System/Error.hpp>

namespace DUNE
{
  namespace Utils
  {
    //! Base class for an abstract character filter
    //! similar to tr Unix utility.
    class AbstractCharacterFilter
    {
    public:
      std::vector<char> filter(const std::vector<char>& data) const
      {
        return doFilter(data);
      }
    private:
      virtual std::vector<char>
      doFilter(const std::vector<char>& data) const = 0;
    };

    //! Character filter class removing specified characters.
    class RemoveCharacterFilter: public AbstractCharacterFilter
    {
    public:
      RemoveCharacterFilter(const std::vector<char>& to_remove) :
        m_to_remove(to_remove.begin(), to_remove.end())
      { }
    private:
      struct is_in
      {
        const std::vector<char>& cs;

        is_in(const std::vector<char>& chars) : cs(chars)
        { }

        bool operator()(char c)
        {
          return std::find(cs.begin(), cs.end(), c) != cs.end();
        }
      };

      std::vector<char>
      doFilter(const std::vector<char>& data) const
      {
        std::vector<char> result;

        std::remove_copy_if(data.begin(), data.end(), std::back_inserter(result), is_in(m_to_remove));

        return result;
      }

      std::vector<char> m_to_remove;
    };

    //! Parses the lines from the input character stream.
    class LineParser
    {
    public:
      //! Constructor.
      //! @param[in] eol EOL separator. Must be "\r", "\n" or "\r\n"
      //! @param[in] max_buffer_size the maximum size of the internal buffer
      //! @throws Error if EOL is not valid
      LineParser(const std::string& eol = "\n", unsigned max_buffer_size = 1024) :
        m_eol(eol),
        m_max_buffer_size(max_buffer_size),
        m_filter(0)
      {
        if (m_eol != "\r" && m_eol != "\n" && m_eol != "\r\n")
          throw System::Error("invalid EOL separator", m_eol);
      };

      //! Appends new chunk of the data to the input buffer without
      //! parsing it.
      //! @param data the vector of chars to add to the input buffer
      //! @throws Error if buffer exceeds the set limit
      void
      append(const std::vector<char>& data);

      //! Appends new chunk of the data to the input buffer without
      //! parsing it.
      //! @param[in] buf the buffer pointer
      //! @param[in] len the length of the data
      //! @throws Error if buffer exceeds the set limit
      void
      append(char* buf, unsigned len);

      //! Appends a character to the input buffer without
      //! parsing it.
      //! @param[in] c the character to add
      //! @throws Error if buffer exceeds the set limit
      void
      append(char c);

      //! Parses the line in the input buffer.
      //! @param[out] the parsed line
      //! @return true if a line was found in the input buffer
      bool
      parse(std::string& line);

      //! Parses all the lines in the input buffer.
      //! @param[out] lines the array of the parsed lines
      //! @return true if at least one line was found in the input buffer
      bool
      parse(std::vector<std::string>& lines);

      //! Resets the parser by clearing the internal buffer.
      void
      reset();

      //! Sets the filter to apply to the data before parsing.
      //! @param filter the pointer to the character filter. If 0, disables filtration
      void
      setFilter(const AbstractCharacterFilter* filter)
      {
        m_filter = filter;
      }

      //! Gets the internal buffer (for debugging purposes).
      //! @return the internal buffer
      const std::vector<char>
      getBuffer() const
      {
        return m_buffer;
      }

    private:
      std::vector<char> m_buffer;
      std::string m_eol;
      unsigned m_max_buffer_size;
      const AbstractCharacterFilter* m_filter;
    };
  }
}

#endif
