//***************************************************************************
// Copyright 2007-2015 Universidade do Porto - Faculdade de Engenharia      *
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
