//***************************************************************************
// Copyright 2007-2013 Universidade do Porto - Faculdade de Engenharia      *
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
// https://www.lsts.pt/dune/licence.                                        *
//***************************************************************************
// Author: Pedro Calado                                                     *
//***************************************************************************

#ifndef SENSORS_IMAGENEX_852_PATTERN_FILTER_HPP_INCLUDED_
#define SENSORS_IMAGENEX_852_PATTERN_FILTER_HPP_INCLUDED_

// ISO C++ 98 headers.
#include <cstring>
#include <cmath>

// DUNE headers.
#include <DUNE/DUNE.hpp>

namespace Sensors
{
  namespace Imagenex852
  {
    using DUNE_NAMESPACES;

    //! Pattern Filter for Imagenex 852 High Frequency Echo Sounder Return Data.
    class PatternFilter
    {
    public:
      //! Constructor.
      //! @param[in] pattern_size size of the pattern to consider
      //! @param[in] max_diff maximum admissible difference to pattern
      //! @param[in] max_samples maximum number of samples to store
      //! @param[in] required_occurrences number of occurrences to consider best pattern found
      PatternFilter(unsigned pattern_size, unsigned max_diff,
                    unsigned max_samples, unsigned required_occurrences):
        m_psize(pattern_size),
        m_max_diff(max_diff),
        m_max_samples(max_samples),
        m_req_occurs(required_occurrences)
      {
        reset();
      }

      //! Reset filter
      inline void
      reset(void)
      {
        m_best_pattern = m_patterns.end();
      }

      //! Process pattern
      //! @param[in] data sequence received from echo sounder
      //! @return true if it should be accepted, false otherwise
      bool
      filterPattern(const std::vector<char>& data)
      {
        std::string head(&data[0], m_psize);

        if (!m_patterns.size())
        {
          m_patterns.insert(std::pair<std::string, unsigned>(head, 1));
        }
        else
        {
          PatternList::iterator it = checkOccurrences(head);

          if (it == m_patterns.end())
          {
            if (m_patterns.size() < m_max_samples)
              m_patterns.insert(std::pair<std::string, unsigned>(head, 1));
          }
          else
          {
            ++it->second;

            if ((m_best_pattern == m_patterns.end()) && (it->second > m_req_occurs))
              m_best_pattern = it;
          }

          if (m_best_pattern != m_patterns.end() && it != m_best_pattern)
            return false;
        }

        return true;
      }

    private:
      //! Typedef for a pattern list
      typedef std::map<std::string, unsigned> PatternList;

      //! Compute difference between two patterns
      //! The whole pattern size is processed unlike in std::strcmp
      //! @param[in] first pattern number one
      //! @param[in] second pattern number two
      //! @return accumulated difference between both patterns
      unsigned
      patternDiff(const std::string& first, const std::string& second) const
      {
        unsigned accum = 0;

        for (unsigned i = 0; i < m_psize; ++i)
          accum += std::abs(first[i] - second[i]);

        return accum;
      }

      //! Check for occurrences in the pattern list
      //! @param[in] head pattern to test
      //! @return iterator to matched pattern or end() if no occurrence was found
      PatternList::iterator
      checkOccurrences(const std::string& head)
      {
        PatternList::iterator it = m_patterns.begin();

        for (;it != m_patterns.end(); ++it)
        {
          int diff = patternDiff(head, it->first);

          if ((unsigned)std::abs(diff) < m_max_diff)
            return it;
        }

        return m_patterns.end();
      }

      //! Pattern size
      unsigned m_psize;
      //! Maximum difference
      unsigned m_max_diff;
      //! Maximum number of samples
      unsigned m_max_samples;
      //! Required occurrences before setting best pattern iterator
      unsigned m_req_occurs;
      //! List of patterns found
      PatternList m_patterns;
      //! Most likely sane pattern
      PatternList::const_iterator m_best_pattern;
    };
  }
}

#endif
