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

#include "LineParser.hpp"

namespace DUNE
{
  namespace Utils
  {
      void
      LineParser::append(const std::vector<char>& data)
      {
        std::vector<char> to_append;

        if (m_filter != 0)
          to_append = m_filter->filter(data);
        else
          to_append = data;

        unsigned new_size = m_buffer.size() + to_append.size();

        if (new_size > m_max_buffer_size)
          throw System::Error("the buffer is full, the chunk is discarded",
            Utils::String::str("%d > %d", new_size, m_max_buffer_size));

        std::copy(to_append.begin(), to_append.end(), std::back_inserter(m_buffer));
      }

      void
      LineParser::append(char* buf, unsigned len)
      {
        append(std::vector<char>(buf, buf + len));
      }

      void
      LineParser::append(char c)
      {
        append(std::vector<char>(&c, &c + 1));
      }

      bool
      LineParser::parse(std::string& line)
      {
        std::vector<char>::iterator it = std::search(m_buffer.begin(), m_buffer.end(), m_eol.begin(), m_eol.end());

        if (it != m_buffer.end())
        {
          line = std::string(m_buffer.begin(), it);

          m_buffer.erase(m_buffer.begin(), it + m_eol.size());

          return true;
        }

        return false;
      }

      bool
      LineParser::parse(std::vector<std::string>& lines)
      {
        bool updated = false;
        std::string line;

        while (parse(line))
        {
          if (!updated)
          {
            lines.clear();
            updated = true;
          }

          lines.push_back(line);
        }

        return updated;
      }

      void
      LineParser::reset()
      {
        m_buffer.clear();
      }
  }
}

