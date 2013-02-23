//***************************************************************************
// Copyright (C) 2007-2013 Laboratório de Sistemas e Tecnologia Subaquática *
// Departamento de Engenharia Electrotécnica e de Computadores              *
// Rua Dr. Roberto Frias, 4200-465 Porto, Portugal                          *
//***************************************************************************
// Author: Ricardo Martins                                                  *
//***************************************************************************
// Utility to extract compressed images from LSF files.                     *
//***************************************************************************

// ISO C++ 98 headers.
#include <iostream>
#include <fstream>

// DUNE headers.
#include <DUNE/DUNE.hpp>
using DUNE_NAMESPACES;

int
main(int argc, char** argv)
{
  if (argc != 2)
  {
    std::cerr << "Usage: " << argv[0] << " Data.lsf[.gz]" << std::endl;
    return 1;
  }

  std::istream* is = 0;
  Compression::Methods method = Compression::Factory::detect(argv[1]);
  if (method == METHOD_UNKNOWN)
    is = new std::ifstream(argv[1], std::ios::binary);
  else
    is = new Compression::FileInput(argv[1], method);

  DUNE::IMC::Message* msg = NULL;

  Path folder = Path(argv[1]).dirname();

  try
  {
    while ((msg = DUNE::IMC::Packet::deserialize(*is)) != 0)
    {
      if (msg->getId() == DUNE_IMC_COMPRESSEDIMAGE)
      {
        DUNE::IMC::CompressedImage* img = dynamic_cast<DUNE::IMC::CompressedImage*>(msg);

        Path fname = folder / String::str("%0.4f.jpg", img->getTimeStamp());
        std::ofstream ofs(fname.c_str(), std::ios::binary);
        ofs.write(&(img->data[0]), img->data.size());
      }

      delete msg;
    }
  }
  catch (std::runtime_error& e)
  {
    std::cerr << "ERROR: " << e.what() << std::endl;
  }

  delete is;

  return 0;
}
