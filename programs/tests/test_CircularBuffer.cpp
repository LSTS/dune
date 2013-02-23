//***************************************************************************
// Copyright (C) 2007-2013 Laboratório de Sistemas e Tecnologia Subaquática *
// Departamento de Engenharia Electrotécnica e de Computadores              *
// Rua Dr. Roberto Frias, 4200-465 Porto, Portugal                          *
//***************************************************************************
// Author: Eduardo Marques                                                  *
//***************************************************************************

// ISO C++ 98 headers.
#include <iostream>

// DUNE headers.
#include <DUNE/Utils/CircularBuffer.hpp>

// Local headers.
#include "Test.hpp"

using namespace DUNE::Utils;

void
dump(CircularBuffer<unsigned>& cb)
{
  std::cout << "Capacity: " << cb.getCapacity() << std::endl;
  std::cout << "Size: " << cb.getSize() << std::endl;
  for (unsigned i = 0; i < cb.getSize(); ++i)
    std::cout << i << ' ' << cb(i) << std::endl;
}

int
main(int argc, char** argv)
{
  Test test("Utils::CircularBuffer");

  const unsigned n = 10;
  CircularBuffer<unsigned> cb(n);
  test.boolean("getCapacity()", cb.getCapacity() == n);
  test.boolean("getSize()", cb.getSize() == 0);

  unsigned i;
  for (i = 0; i < n; i++)
  {
    cb.add(i);
    // dump(cb);
  }

  test.boolean("getSize()", cb.getSize() == n);

  for (i = 0; i < cb.getSize(); i++)
    if (cb(i) != i)
      break;

  test.boolean("add()", i == n);

  for (i = n; i < 2 * n; i++)
  {
    cb.add(i);
    // dump(cb);
  }

  test.boolean("getSize()", cb.getSize() == n);

  for (i = 0; i < cb.getSize(); i++)
    if (cb(i) != n + i)
      break;

  test.boolean("add()", i == n);

  CircularBuffer<unsigned> cb2 = cb;
  for (i = 0; i < cb2.getSize(); i++)
    if (cb2(i) != cb(i))
      break;
  test.boolean("Copy constructor", i == n);

  // dump(cb);
  cb.setCapacity(n * 2);
  // dump(cb);

  for (i = 0; i < cb.getSize(); i++)
    if (cb(i) != n + i)
      break;

  test.boolean("setCapacity()", i == n && cb.getSize() == n && cb.getCapacity() == 2 * n);

  cb.setCapacity(n / 2);
  // dump(cb);

  for (i = 0; i < cb.getSize(); i++)
    if (cb(i) != (n + n / 2 + i))
      break;
  test.boolean("setCapacity()", i == cb.getSize() && cb.getSize() == n / 2 && cb.getCapacity() == n / 2);

  return 0;
}
