//***************************************************************************
// Copyright (C) 2007-2013 Laboratório de Sistemas e Tecnologia Subaquática *
// Departamento de Engenharia Electrotécnica e de Computadores              *
// Rua Dr. Roberto Frias, 4200-465 Porto, Portugal                          *
//***************************************************************************
// Author: Ricardo Martins                                                  *
//***************************************************************************

#include <DUNE/DUNE.hpp>

using DUNE_NAMESPACES;

#include <iostream>

// Qt headers.
#include <QtGui/QLabel>
#include <QtGui/QMenu>
#include <QtGui/QMenuBar>
#include <QtGui/QAction>
#include <QUdpSocket>
#include <QPixmap>
#include <QMovie>
#include <QPushButton>
#include <QGroupBox>
#include <QVBoxLayout>
#include <QGraphicsView>
#include <QKeyEvent>

// Local headers.
#include "VideoClient.hpp"

VideoClient::VideoClient(const char* raddr, unsigned rport, unsigned lport, QWidget* parent):
  QMainWindow(parent)
{
  m_view = new GraphicsScene(raddr, rport, lport);
  setCentralWidget(m_view);

  setWindowTitle(tr("DUNE - Video Client"));
  m_view->setFocusPolicy(Qt::StrongFocus);
}

VideoClient::~VideoClient(void)
{
  delete m_view;
}
