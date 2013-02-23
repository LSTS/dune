//***************************************************************************
// Copyright (C) 2007-2013 Laboratório de Sistemas e Tecnologia Subaquática *
// Departamento de Engenharia Electrotécnica e de Computadores              *
// Rua Dr. Roberto Frias, 4200-465 Porto, Portugal                          *
//***************************************************************************
// Author: Ricardo Martins                                                  *
//***************************************************************************

#ifndef VVIEW_VVIEW_HPP_INCLUDED_
#define VVIEW_VVIEW_HPP_INCLUDED_

// QT headers.
#include <QtGui/QMainWindow>
#include <QUdpSocket>
#include <QPixmap>
#include <QWidget>
#include <QLabel>
#include <QGraphicsView>
#include <QGraphicsSimpleTextItem>

// ISO C++ 98 headers.
#include <vector>
#include <map>

// Local headers.
#include "GraphicsScene.hpp"

class VideoClient: public QMainWindow
{
Q_OBJECT

public:
  VideoClient(const char* raddr, unsigned rport, unsigned lport, QWidget* parent = 0);

  virtual
  ~VideoClient(void);

private:
  GraphicsScene* m_view;
};

#endif
