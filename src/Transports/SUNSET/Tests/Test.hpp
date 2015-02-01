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

#ifndef TRANSPORTS_SUNSET_TESTS_TEST_HPP_INCLUDED_
#define TRANSPORTS_SUNSET_TESTS_TEST_HPP_INCLUDED_

// ISO C++ 98 headers.
#include <cstdio>

#if !defined(fprintf)
using std::fprintf;
#endif

class Test
{
public:
  Test(const char* name):
    m_total(0),
    m_passed(0),
    m_failed(0)
  {
    fprintf(stderr, "* %s\n", name);
  }

  void
  boolean(const char* description, bool expression)
  {
    ++m_total;

    fprintf(stderr, "  %-40s ", description);

    if (expression)
      ++m_passed;
    else
      ++m_failed;

    fprintf(stderr, "[%s]\n", expression ? "passed" : "failed");
  }

  void
  failed(const char* description, const char* reason)
  {
    ++m_total;
    fprintf(stderr, "  %-40s ", description);
    ++m_failed;
    fprintf(stderr, "[%s] (%s)\n", "failed", reason);
  }

  void
  passed(const char* description, const char* reason = NULL)
  {
    ++m_total;
    fprintf(stderr, "  %-40s ", description);
    ++m_passed;

    if (reason)
      fprintf(stderr, "[%s] (%s)\n", "passed", reason);
    else
      fprintf(stderr, "[%s]\n", "passed");
  }

  ~Test(void)
  {
    fprintf(stderr, "- %d tests / %d passed / %d failed\n", m_total, m_passed, m_failed);
  }

  int
  getReturnValue(void)
  {
    return (m_failed != 0);
  }

private:
  int m_total;
  int m_passed;
  int m_failed;
};

#endif
