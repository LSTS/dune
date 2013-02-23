//***************************************************************************
// Copyright (C) 2007-2013 Laboratório de Sistemas e Tecnologia Subaquática *
// Departamento de Engenharia Electrotécnica e de Computadores              *
// Rua Dr. Roberto Frias, 4200-465 Porto, Portugal                          *
//***************************************************************************
// Author: Ricardo Martins                                                  *
//***************************************************************************
// Utility program to extract U-Blox proprietary messages from LSF logs.    *
//***************************************************************************

// ISO C++ 98 headers.
#include <iostream>
#include <fstream>
#include <iomanip>

// DUNE headers.
#include <DUNE/DUNE.hpp>
using DUNE_NAMESPACES;

const static uint8_t c_ubx_sync0 = 0xb5;
const static uint8_t c_ubx_sync1 = 0x62;

int
main(int argc, char** argv)
{
  if (argc != 3)
  {
    std::cerr << "Usage: " << argv[0] << "FILE.lsf[.gz]" << "FILE.ubx" << std::endl;
    return 1;
  }

  std::istream* is = 0;
  Compression::Methods method = Compression::Factory::detect(argv[1]);
  if (method == METHOD_UNKNOWN)
    is = new std::ifstream(argv[1], std::ios::binary);
  else
    is = new Compression::FileInput(argv[1], method);

  std::ofstream ofs(argv[2], std::ios::binary);

  DUNE::IMC::Message* msg = 0;

  try
  {
    while ((msg = DUNE::IMC::Packet::deserialize(*is)) != 0)
    {
      if (msg->getId() == DUNE_IMC_DEVDATABINARY)
      {
        DUNE::IMC::DevDataBinary* ddb = (DUNE::IMC::DevDataBinary*)msg;

        if (ddb->value.size() < 2)
          continue;

        if ((uint8_t)ddb->value[0] == c_ubx_sync0 && (uint8_t)ddb->value[1] == c_ubx_sync1)
          ofs.write(&ddb->value[0], ddb->value.size());
      }
    }
  }
  catch (std::runtime_error& e)
  {
    std::cerr << "ERROR: " << e.what() << std::endl;
  }

  delete is;

  return 0;
}
