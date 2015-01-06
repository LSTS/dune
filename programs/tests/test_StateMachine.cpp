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
// Author: Eduardo Marques                                                  *
//***************************************************************************
// Test program for DUNE::Utils::StateMachine class.                         *
//***************************************************************************
#include <string>
#include "Test.hpp"
#include <DUNE/Utils/StateMachine.hpp>
using namespace DUNE::Utils;

// Mock test case (otherwise stupid):
// - A state machine that consumes characteres
// and counts the number of occurrences of string "LSTS"
// in it.

// Data manipulated by the state machine.
struct Data
{
  char input; // A character for input.
  bool output; // Reached end of a "LSTS" substring?
};

class Mock
{
public:
  // Convenience typedefs.
  typedef StateMachine<Mock, Data> SM;
  typedef SM::STATE STATE;

  Mock(){ }

  ~Mock(){ }

  STATE
  initial(Data& data)
  {
    data.output = false;
    return data.input == 'L' ? &Mock::read_L : 0;
  }

  STATE
  read_L(Data& data)
  {
    STATE next = 0;
    data.output = false;
    switch (data.input)
    {
      case 'L':
        next = &Mock::read_L;
        break;
      case 'S':
        next = &Mock::read_S;
        break;
      default:
        next = &Mock::initial;
    }
    return next;
  }

  STATE
  read_S(Data& data)
  {
    STATE next = 0;
    data.output = false;
    switch (data.input)
    {
      case 'L':
        next = &Mock::read_L;
        break;
      case 'T':
        next = &Mock::read_T;
        break;
      default:
        next = &Mock::initial;
    }
    return next;
  }

  STATE
  read_T(Data& data)
  {
    STATE next = 0;
    data.output = false;
    switch (data.input)
    {
      case 'L':
        next = &Mock::read_T;
        break;
      case 'S':
        data.output = true;
      default:
        next = &Mock::initial;
    }
    return next;
  }

  int
  count(std::string text)
  {
    SM sm(&Mock::initial);
    Data data;
    int c = 0;

    for (unsigned int i = 0; i < text.length(); ++i)
    {
      data.input = text[i];
      data.output = false;
      sm.step(*this, data);
      if (data.output)
        ++c;
    }
    return c;
  }
};

int
main(int argc, char** argv)
{
  Test test("DUNE::Utils::StateMachine");

  Mock o;

  struct
  {
    const char* string;
    int count;
  } testcases[] =
  {
    {"LST_STLS_STSLLLLLL", 0},
    {"STS_STLS_LSTS_LSTL", 1},
    {"LSTS_STLS_LSTS_LST", 2},
    {"SLSTSSLLSTSLSTSLLL", 3}
  };

  for (unsigned i = 0; i < sizeof(testcases) / sizeof(testcases[0]); i++)
  {
    test.boolean(testcases[i].string, o.count(testcases[i].string) == testcases[i].count);
  }
  return 0;
}
