//***************************************************************************
// Copyright (C) 2007-2013 Laboratório de Sistemas e Tecnologia Subaquática *
// Departamento de Engenharia Electrotécnica e de Computadores              *
// Rua Dr. Roberto Frias, 4200-465 Porto, Portugal                          *
//***************************************************************************
// Author: Ricardo Martins                                                  *
//***************************************************************************
// $Id:: Main.cpp 12303 2013-01-01 02:14:25Z jbraga                       $:*
//***************************************************************************

#include <QtGui/QApplication>
#include "VideoClient.hpp"

int
main(int argc, char** argv)
{
  if (argc != 4)
  {
    std::cerr << "Usage: " << argv[0] << " <REMOTE_IP> <REMOTE_PORT> <LOCAL_PORT>" << std::endl;
    return 1;
  }

  QApplication app(argc, argv);
  VideoClient client(argv[1], atoi(argv[2]), atoi(argv[3]));
  client.show();
  return app.exec();
}
