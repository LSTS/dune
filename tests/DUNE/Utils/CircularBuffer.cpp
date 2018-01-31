//***************************************************************************
// Copyright 2007-2016 Universidade do Porto - Faculdade de Engenharia      *
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

// ISO C++ 98 headers.
#include <iostream>

// DUNE headers.
#include <DUNE/Utils/CircularBuffer.hpp>

// Catch headers.
#define CATCH_CONFIG_MAIN
#include "catch.hpp"

using namespace DUNE::Utils;

TEST_CASE("basicOps")
{
  const unsigned n = 10;
  CircularBuffer<unsigned> cb(n);
  REQUIRE(cb.getCapacity() == n);
  REQUIRE(cb.getSize() == 0);

  unsigned i;
  for (i = 0; i < n; i++)
    cb.add(i);

  REQUIRE(cb.getSize() == n);

  for (i = 0; i < cb.getSize(); i++)
    if (cb(i) != i)
      break;

  REQUIRE(i == n);

  for (i = n; i < 2 * n; i++)
  {
    cb.add(i);
  }

  REQUIRE(cb.getSize() == n);

  for (i = 0; i < cb.getSize(); i++)
    if (cb(i) != n + i)
      break;

  REQUIRE(i == n);

  CircularBuffer<unsigned> cb2 = cb;
  for (i = 0; i < cb2.getSize(); i++)
    if (cb2(i) != cb(i))
      break;
  REQUIRE(i == n);

  cb.setCapacity(n * 2);

  for (i = 0; i < cb.getSize(); i++)
    if (cb(i) != n + i)
      break;

  REQUIRE((i == n && cb.getSize() == n && cb.getCapacity() == 2 * n));

  cb.setCapacity(n / 2);

  for (i = 0; i < cb.getSize(); i++)
    if (cb(i) != (n + n / 2 + i))
      break;
  REQUIRE((i == cb.getSize() && cb.getSize() == n / 2 && cb.getCapacity() == n / 2));
}
