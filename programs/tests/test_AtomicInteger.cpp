//***************************************************************************
// Copyright 2007-2024 Universidade do Porto - Faculdade de Engenharia      *
// Laboratório de Sistemas e Tecnologia Subaquática (LSTS)                  *
//***************************************************************************
// This file is part of DUNE: Unified Navigation Environment.               *
//                                                                          *
// Commercial Licence Usage                                                 *
// Licencees holding valid commercial DUNE licences may use this file in    *
// accordance with the commercial licence agreement provided with the       *
// Software or, alternatively, in accordance with the terms contained in a  *
// written agreement between you and Faculdade de Engenharia da             *
// Universidade do Porto. For licensing terms, conditions, and further      *
// information contact lsts@fe.up.pt.                                       *
//                                                                          *
// Modified European Union Public Licence - EUPL v.1.1 Usage                *
// Alternatively, this file may be used under the terms of the Modified     *
// EUPL, Version 1.1 only (the "Licence"), appearing in the file LICENCE.md *
// included in the packaging of this file. You may not use this work        *
// except in compliance with the Licence. Unless required by applicable     *
// law or agreed to in writing, software distributed under the Licence is   *
// distributed on an "AS IS" basis, WITHOUT WARRANTIES OR CONDITIONS OF     *
// ANY KIND, either express or implied. See the Licence for the specific    *
// language governing permissions and limitations at                        *
// https://github.com/LSTS/dune/blob/master/LICENCE.md and                  *
// http://ec.europa.eu/idabc/eupl.html.                                     *
//***************************************************************************
// Author: Ricardo Martins                                                  *
//***************************************************************************

// ISO C++ 98 headers.
#include <iostream>
#include <limits>

// DUNE headers.
#include <DUNE/Concurrency.hpp>

// Local headers.
#include "Test.hpp"

using namespace DUNE::Concurrency;

class TestIncrement: public Thread
{
private:
  AtomicInteger* m_aint;
  long m_target;
public:
  TestIncrement(AtomicInteger* aint, long target):
  m_aint(aint),
  m_target(target)
  {}

  void
  run(void)
  {
    for (long i = 0; i < m_target; i++)
      m_aint->increment();
  }
};

int
main(void)
{
  Test test("Concurrency::AtomicInteger");

  AtomicInteger aint(0);
  long target = 10000;
  int thread_num = 10;

  TestIncrement* tests[thread_num];
  for (int i = 0; i <  thread_num; i++)
  {
    tests[i] = new TestIncrement(&aint, target);
    tests[i]->start();
  }

  bool done = false;
  while (!done)
  { 
    done = tests[0]->isDead();
    for (int i = 1; i <  thread_num; i++)
      done &= tests[i]->isDead();
  }

  for (int i = 0; i <  thread_num; i++)
    tests[i]->join();

  test.boolean("Multi-threaded increment", aint.value() == target * thread_num);

  return test.getReturnValue();
}
