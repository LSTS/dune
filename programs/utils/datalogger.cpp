//***************************************************************************
// Copyright (C) 2007-2012 Laboratório de Sistemas e Tecnologia Subaquática *
// Departamento de Engenharia Electrotécnica e de Computadores              *
// Rua Dr. Roberto Frias, 4200-465 Porto, Portugal                          *
//***************************************************************************
// Author: Ricardo Martins                                                  *
//***************************************************************************
// $Id:: datalogger.cpp 12775 2013-01-29 03:03:24Z robot                  $:*
//***************************************************************************
//                                                                          *
//***************************************************************************

// ISO C++ 98 headers.
#include <iostream>
#include <fstream>

// DUNE headers.
#include <DUNE/DUNE.hpp>

int
main(int argc, char** argv)
{
  if (argc != 2)
  {
    std::cerr << "Usage: " << argv[0] << " <device>" << std::endl;
    return 1;
  }

  DUNE::Hardware::SerialPort* port = new DUNE::Hardware::SerialPort(argv[1], 500000);
  std::ofstream outf;
  uint8_t bfr[1024];
  double time;
  std::string label;
  std::string dir;

  label = "datalog_";
  time = DUNE::Time::Clock::getSinceEpoch();
  label = label + DUNE::Time::Format::getDateSafe(time) + DUNE::Time::Format::getTimeSafe(time);
  label = label + ".bin";
  dir = "/opt/lsts/dune/log/";
  dir = dir + label;

  std::cerr << dir << std::endl;

  outf.open(dir.c_str(), std::ios::out | std::ios::binary);

  if (outf.fail())
  {
    std::cerr << "Unable to open/write log file" << std::endl;
    return 0;
  }

  while (1)
  {
    if (port->hasNewData(1.0) != DUNE::System::IOMultiplexing::PRES_OK)
      continue;

    int rv = port->read(bfr, sizeof(bfr));
    for (int i = 0; i < rv; ++i)
    {
      outf << bfr[i];
    }
  }

  outf.close();
  return 0;
}
