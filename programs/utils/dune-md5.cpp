//***************************************************************************
// Copyright (C) 2007-2013 Laboratório de Sistemas e Tecnologia Subaquática *
// Departamento de Engenharia Electrotécnica e de Computadores              *
// Rua Dr. Roberto Frias, 4200-465 Porto, Portugal                          *
//***************************************************************************
// Author: Eduardo Marques                                                  *
//***************************************************************************

// ISO C++ headers
#include <cstdio>
#include <iomanip>
#include <iostream>

// DUNE headers
#include <DUNE/Algorithms/MD5.hpp>

using namespace DUNE::Algorithms;

int
main(int argc, char** argv)
{
  --argc;
  ++argv;

  if (!argc)
  {
    std::cerr << "Usage: md5 file1 ... filen" << std::endl;
    return 1;
  }

  do
  {
    uint8_t digest[16];

    MD5::compute(*argv, digest);

    for (int i = 0; i < 16; ++i)
      std::cout << std::hex << std::setw(2) << std::setfill('0') << ((unsigned)digest[i]);
    std::cout << ' ' << *argv << std::endl;
  }
  while (*(++argv));

  return 0;
}
