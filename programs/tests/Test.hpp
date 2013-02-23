//***************************************************************************
// Copyright (C) 2007-2013 Laboratório de Sistemas e Tecnologia Subaquática *
// Departamento de Engenharia Electrotécnica e de Computadores              *
// Rua Dr. Roberto Frias, 4200-465 Porto, Portugal                          *
//***************************************************************************
// Author: Ricardo Martins                                                  *
//***************************************************************************

#ifndef DUNE_PROGRAMS_TESTS_TEST_HPP_INCLUDED_
#define DUNE_PROGRAMS_TESTS_TEST_HPP_INCLUDED_

// ISO C++ 98 headers.
#include <cstdio>

class Test
{
public:
  Test(const char* name):
    m_total(0),
    m_passed(0),
    m_failed(0)
  {
    std::fprintf(stderr, "* %s\n", name);
  }

  void
  boolean(const char* description, bool expression)
  {
    ++m_total;

    std::fprintf(stderr, "  %-40s ", description);

    if (expression)
      ++m_passed;
    else
      ++m_failed;

    std::fprintf(stderr, "[%s]\n", expression ? "passed" : "failed");
  }

  void
  failed(const char* description)
  {
    ++m_total;
    std::fprintf(stderr, "  %-40s ", description);
    ++m_failed;
    std::fprintf(stderr, "[%s]\n", "failed");
  }

  void
  passed(const char* description)
  {
    ++m_total;
    std::fprintf(stderr, "  %-40s ", description);
    ++m_passed;
    std::fprintf(stderr, "[%s]\n", "passed");
  }

  ~Test(void)
  {
    std::fprintf(stderr, "- %d tests / %d passed / %d failed\n", m_total, m_passed, m_failed);
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
