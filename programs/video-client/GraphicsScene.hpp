//***************************************************************************
// Copyright (C) 2007-2013 Laboratório de Sistemas e Tecnologia Subaquática *
// Departamento de Engenharia Electrotécnica e de Computadores              *
// Rua Dr. Roberto Frias, 4200-465 Porto, Portugal                          *
//***************************************************************************
// Author: Ricardo Martins                                                  *
//***************************************************************************

#ifndef VIDEO_CLIENT_GRAPHICS_SCENE_HPP_INCLUDED_
#define VIDEO_CLIENT_GRAPHICS_SCENE_HPP_INCLUDED_

// QT headers.
#include <QPixmap>
#include <QWidget>
#include <QTimer>
#include <QUdpSocket>
#include <QGraphicsView>
#include <QGraphicsSimpleTextItem>
#include <QGraphicsSceneMouseEvent>

#include <iostream>

// ISO C++ 98 headers.
#include <vector>
#include <map>

class GraphicsScene: public QGraphicsView
{
Q_OBJECT

public:
  GraphicsScene(const char* raddr, unsigned rport, unsigned lport, QWidget* parent = 0);

  virtual
  ~GraphicsScene(void);

  void
  mouseMoveEvent(QMouseEvent* event);

  void
  mousePressEvent(QMouseEvent* event);

  void
  mouseReleaseEvent(QMouseEvent* event);

  void
  wheelEvent(QWheelEvent* event);

private slots:
  void
  handleInputData(void);

  void
  resetZoom(void);

  void
  keyPressEvent(QKeyEvent* event);

  void
  computeFPS(void);

  // void
  // keyReleaseEvent(QKeyEvent *event);

private:
  QGraphicsScene m_scene;
  QGraphicsPixmapItem m_item;
  QUdpSocket* m_sock;
  QByteArray m_dgram;
  std::map<std::string, std::string> m_actions;
  QTimer* m_zoom_tim;
  QGraphicsLineItem* m_vline;
  QGraphicsLineItem* m_hline;

  QGraphicsTextItem* m_fps_txt;
  QTimer* m_fps_tim;
  unsigned m_fps;
  bool m_osd_fps;

  bool m_inverted;
  bool m_grid;

  bool m_move;

  std::string m_raddr;
  unsigned m_rport;
  unsigned m_lport;

  unsigned m_rotate;

  void
  drawGrid(void);

  void
  sendAction(const std::string& action, const std::string& value);
};

#endif
