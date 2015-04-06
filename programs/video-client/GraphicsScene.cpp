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

#include <QMouseEvent>
#include <QWheelEvent>
#include <QGraphicsLineItem>
#include <QMainWindow>

#include <DUNE/DUNE.hpp>

using DUNE_NAMESPACES;

#include "GraphicsScene.hpp"

static const unsigned c_half_pad = 10;
static const unsigned c_pad = c_half_pad * 2;

GraphicsScene::GraphicsScene(const char* raddr, unsigned rport, unsigned lport, QWidget* parent):
  QGraphicsView(parent),
  m_grid(true),
  m_fps(0),
  m_move(false),
  m_raddr(raddr),
  m_rport(rport),
  m_lport(lport),
  m_rotate(0)
{
  m_scene.addItem(&m_item);
  setScene(&m_scene);
  setFocusPolicy(Qt::StrongFocus);

  m_sock = new QUdpSocket();
  m_sock->bind(m_lport);

  m_zoom_tim = new QTimer(this);
  connect(m_zoom_tim, SIGNAL(timeout()), this, SLOT(resetZoom()));

  connect(m_sock, SIGNAL(readyRead()),
          this, SLOT(handleInputData()));

  m_vline = new QGraphicsLineItem;
  m_vline->setPen(QPen(Qt::DotLine));
  m_hline = new QGraphicsLineItem;
  m_hline->setPen(QPen(Qt::DotLine));

  m_fps_txt = new QGraphicsTextItem("FPS: 0");
  m_scene.addItem(m_fps_txt);
  m_fps_txt->setPos(5, 5);

  m_fps_tim = new QTimer(this);
  m_fps_tim->setInterval(1000);
  m_fps_tim->start(1000);
  connect(m_fps_tim, SIGNAL(timeout()), this, SLOT(computeFPS()));

  drawGrid();
}

GraphicsScene::~GraphicsScene(void)
{
  delete m_sock;
}

void
GraphicsScene::sendAction(const std::string& action, const std::string& value)
{
  if (m_actions[action].compare(value) == 0)
    return;

  m_actions[action] = value;

  std::ostringstream os;
  std::map<std::string, std::string>::iterator itr = m_actions.begin();

  for (; itr != m_actions.end(); ++itr)
  {
    os << itr->first << "=" << itr->second << ";";
  }

  IMC::RemoteActions msg;
  msg.actions = os.str();

  char bfr[512];
  unsigned rv = IMC::Packet::serialize(&msg, (uint8_t*)bfr, sizeof(bfr));
  m_sock->writeDatagram(bfr, rv, QHostAddress(m_raddr.c_str()), m_rport);
}

void
GraphicsScene::resetZoom(void)
{
  sendAction("Zoom", "0");
}

void
GraphicsScene::computeFPS(void)
{
  QString str("FPS: %1");
  m_fps_txt->setPlainText(str.arg(m_fps));
  m_fps = 0;
}

void
GraphicsScene::mouseMoveEvent(QMouseEvent* event)
{
  if (!m_move)
    return;

  if (event->x() < c_half_pad || event->x() > (c_half_pad + minimumWidth()))
    return;

  if (event->y() < c_half_pad || event->y() > (c_half_pad + minimumHeight()))
    return;

  unsigned x = event->x() - c_half_pad;
  unsigned y = event->y() - c_half_pad;
  unsigned hdiv = (minimumHeight() - c_pad) / 2;
  unsigned vdiv = (minimumWidth() - c_pad) / 2;

  if (m_rotate == 0 || m_rotate == 180)
  {
    if (x > vdiv)
      sendAction("Pan", m_rotate == 180 ? "-1" : "1");
    else if (x < vdiv)
      sendAction("Pan", m_rotate == 180 ? "1" : "-1");
    else
      sendAction("Pan", "0");

    if (y > hdiv)
      sendAction("Tilt", m_rotate == 180 ? "-1" : "1");
    else if (y < hdiv)
      sendAction("Tilt", m_rotate == 180 ? "1" : "-1");
    else
      sendAction("Tilt", "0");
  }
  else if (m_rotate == 90 || m_rotate == 270)
  {
    if (x > vdiv)
      sendAction("Tilt", m_rotate == 90 ? "-1" : "1");
    else if (x < vdiv)
      sendAction("Tilt", m_rotate == 90 ? "1" : "-1");
    else
      sendAction("Tilt", "0");

    if (y > hdiv)
      sendAction("Pan", m_rotate == 270 ? "-1" : "1");
    else if (y < hdiv)
      sendAction("Pan", m_rotate == 270 ? "1" : "-1");
    else
      sendAction("Pan", "0");
  }

  event->accept();
}

void
GraphicsScene::mousePressEvent(QMouseEvent* event)
{
  m_move = true;
  mouseMoveEvent(event);
}

void
GraphicsScene::mouseReleaseEvent(QMouseEvent* event)
{
  m_move = false;
  sendAction("Pan", "0");
  sendAction("Tilt", "0");
  event->accept();
}

void
GraphicsScene::keyPressEvent(QKeyEvent* event)
{
  if (event->isAutoRepeat())
    return;

  switch (event->key())
  {
    case Qt::Key_I:
      m_rotate += 90;
      if (m_rotate == 360)
        m_rotate = 0;

      event->accept();
      break;
    case Qt::Key_G:
      m_grid = !m_grid;
      drawGrid();
      event->accept();
      break;
    default:
      QGraphicsView::keyPressEvent(event);
  }
}

void
GraphicsScene::drawGrid(void)
{
  if (m_grid)
  {
    m_scene.addItem(m_vline);
    m_scene.addItem(m_hline);
  }
  else
  {
    m_scene.removeItem(m_vline);
    m_scene.removeItem(m_hline);
  }
}

void
GraphicsScene::wheelEvent(QWheelEvent* event)
{
  if (event->orientation() != Qt::Vertical)
    return;

  if (event->delta() > 0)
    sendAction("Zoom", "1");
  else
    sendAction("Zoom", "-1");

  m_zoom_tim->start(1000);

  event->accept();
}

void
GraphicsScene::handleInputData(void)
{
  while (m_sock->hasPendingDatagrams())
  {
    m_dgram.resize(m_sock->pendingDatagramSize());
    m_sock->readDatagram(m_dgram.data(), m_dgram.size());

    IMC::Message* msg = IMC::Packet::deserialize((uint8_t*)m_dgram.data(), m_dgram.size());
    if (msg == 0)
      continue;

    if (msg->getId() == DUNE_IMC_COMPRESSEDIMAGE)
    {
      ++m_fps;

      IMC::CompressedImage* img = static_cast<IMC::CompressedImage*>(msg);

      QPixmap pix;
      pix.loadFromData((uchar*)img->data.data(), img->data.size(), "JPEG");

      QTransform t;
      pix = pix.transformed(t.rotate(m_rotate));

      m_item.setPixmap(pix);

      setMinimumSize(pix.width() + c_pad, pix.height() + c_pad);

      if (m_grid)
      {
        m_vline->setLine(0, pix.height() / 2, pix.width(), pix.height() / 2);
        m_hline->setLine(pix.width() / 2, 0, pix.width() / 2, pix.height());
      }
    }
    else if (msg->getId() == DUNE_IMC_EULERANGLES)
    {
      IMC::EulerAngles* ang = static_cast<IMC::EulerAngles*>(msg);
      // QString str("Roll: %0.2f | Pitch: %0.2f");
      // m_text.setText(str.arg(Angles::degrees(ang->roll), Angles::degrees(ang->pitch)));
    }
  }
}
