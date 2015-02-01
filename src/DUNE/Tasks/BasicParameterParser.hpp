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

#ifndef DUNE_TASKS_BASIC_PARAMETER_PARSER_HPP_INCLUDED_
#define DUNE_TASKS_BASIC_PARAMETER_PARSER_HPP_INCLUDED_

// ISO C++ 98 headers.
#include <string>
#include <cstring>
#include <vector>
#include <algorithm>
#include <stdexcept>
#include <climits>

// DUNE headers.
#include <DUNE/Casts.hpp>
#include <DUNE/Math/Matrix.hpp>
#include <DUNE/Tasks/AbstractParameterParser.hpp>
#include <DUNE/Tasks/ParameterTypeName.hpp>

namespace DUNE
{
  namespace Tasks
  {
    template <typename T>
    class BasicParameterParser: public AbstractParameterParser
    {
    public:
      BasicParameterParser(T& var):
        m_var(var),
        m_copy(T()),
        m_min_set(false),
        m_max_set(false)
      {
        m_var = T();
      }

      ~BasicParameterParser(void)
      { }

      std::string
      getTypeName(void)
      {
        return ParameterTypeName::get(m_var);
      }

      void
      read(const std::string& value)
      {
        if (!castLexical(value, m_copy))
          throw std::runtime_error(DTR("value is not of the correct type"));
      }

      bool
      commit(void)
      {
        if (m_var == m_copy)
          return false;

        m_var = m_copy;
        return true;
      }

      void
      values(const std::string& list)
      {
        if (!castLexical(list, m_values))
          throw std::runtime_error(DTR("possible values are not of the correct type"));
      }

      void
      minimumValue(const std::string& value)
      {
        castLexical(value, m_min);
        m_min_set = false;
      }

      void
      maximumValue(const std::string& value)
      {
        castLexical(value, m_max);
        m_max_set = false;
      }

      void
      validate(void)
      {
        if (m_min_set)
        {
          if (m_copy < m_min)
            throw std::runtime_error(DTR("value is below minimum"));
        }

        if (m_max_set)
        {
          if (m_copy > m_max)
            throw std::runtime_error(DTR("value is above maximum"));
        }

        if (!m_values.empty())
        {
          if (std::find(m_values.begin(), m_values.end(), m_copy) == m_values.end())
            throw std::runtime_error(DTR("value not in values set"));
        }
      }

    private:
      T& m_var;
      T m_copy;
      T m_min;
      T m_max;
      bool m_min_set;
      bool m_max_set;
      std::vector<T> m_values;
    };

    template <typename T>
    class BasicParameterParser<std::vector<T> >: public AbstractParameterParser
    {
    public:
      BasicParameterParser(std::vector<T>& var):
        m_var(var),
        m_copy(var),
        m_min_size(UINT_MAX),
        m_max_size(UINT_MAX)
      { }

      ~BasicParameterParser(void)
      { }

      std::string
      getTypeName(void)
      {
        T tmp;
        return std::string("list:") + ParameterTypeName::get(tmp);
      }

      virtual void
      read(const std::string& value)
      {
        m_copy.clear();

        if (!castLexical(value, m_copy))
          throw std::runtime_error(DTR("value is not of the correct type"));
      }

      bool
      commit(void)
      {
        if (m_var == m_copy)
          return false;

        m_var = m_copy;
        return true;
      }

      void
      minimumSize(unsigned value)
      {
        m_min_size = value;
      }

      void
      maximumSize(unsigned value)
      {
        m_max_size = value;
      }

      void
      validate(void)
      {
        if (m_min_size < UINT_MAX)
        {
          if (m_copy.size() < m_min_size)
            throw std::runtime_error(DTR("too few elements"));
        }

        if (m_max_size < UINT_MAX)
        {
          if (m_copy.size() > m_max_size)
            throw std::runtime_error(DTR("too many elements"));
        }
      }

    private:
      std::vector<T>& m_var;
      std::vector<T> m_copy;
      unsigned m_min_size;
      unsigned m_max_size;
    };

    template <>
    class BasicParameterParser<Math::Matrix>: public AbstractParameterParser
    {
    public:
      BasicParameterParser(Math::Matrix& var):
        m_var(var),
        m_copy(var)
      { }

      ~BasicParameterParser(void)
      { }

      std::string
      getTypeName(void)
      {
        return "matrix";
      }

      virtual void
      read(const std::string& value)
      {
        m_copy = Math::Matrix();

        if (!castLexical(value, m_copy))
          throw std::runtime_error("value is not of the correct type");
      }

      bool
      commit(void)
      {
        if (m_var == m_copy)
          return false;

        m_var = m_copy;
        return true;
      }

    private:
      Math::Matrix& m_var;
      Math::Matrix m_copy;
    };
  }
}

#endif
