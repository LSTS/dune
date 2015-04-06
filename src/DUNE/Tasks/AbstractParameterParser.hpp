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

#ifndef DUNE_TASKS_ABSTRACT_PARAMETER_PARSER_HPP_INCLUDED_
#define DUNE_TASKS_ABSTRACT_PARAMETER_PARSER_HPP_INCLUDED_

// ISO C++ 98 headers.
#include <string>

namespace DUNE
{
  namespace Tasks
  {
    //! Abstract class for parameter parsers.
    class AbstractParameterParser
    {
    public:
      //! Destructor.
      virtual
      ~AbstractParameterParser(void)
      { }

      virtual void
      read(const std::string& value) = 0;

      virtual std::string
      getTypeName(void) = 0;

      //! @return true if value changed, false otherwise.
      virtual bool
      commit(void) = 0;

      virtual void
      minimumSize(unsigned value)
      {
        (void)value;
      }

      virtual void
      maximumSize(unsigned value)
      {
        (void)value;
      }

      virtual void
      minimumValue(const std::string& value)
      {
        (void)value;
      }

      virtual void
      maximumValue(const std::string& value)
      {
        (void)value;
      }

      virtual void
      values(const std::string& list)
      {
        (void)list;
      }

      virtual void
      validate(void)
      { }
    };
  }
}

#endif
