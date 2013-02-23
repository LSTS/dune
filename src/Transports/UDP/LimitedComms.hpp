//***************************************************************************
// Copyright (C) 2007-2013 Laboratório de Sistemas e Tecnologia Subaquática *
// Departamento de Engenharia Electrotécnica e de Computadores              *
// Rua Dr. Roberto Frias, 4200-465 Porto, Portugal                          *
//***************************************************************************
// Author: José Pinto                                                       *
//***************************************************************************
// $Id:: LimitedComms.hpp 12667 2013-01-22 02:44:42Z rasm                 $:*
//***************************************************************************

#ifndef TRANSPORTS_UDP_LIMITED_COMMS_HPP_INCLUDED_
#define TRANSPORTS_UDP_LIMITED_COMMS_HPP_INCLUDED_

// ISO C++ 98 headers.
#include <string>
#include <map>
#include <cstdio>
#include <cstring>

// DUNE headers.
#include <DUNE/DUNE.hpp>

#define SECONDS_BETWEEN_CALCULATIONS 3.0

namespace Transports
{
  namespace UDP
  {
    using DUNE_NAMESPACES;

    class LimitedComms
    {
    public:
      LimitedComms(float comm_range, unsigned local_id):
        m_comm_range(comm_range),
        m_local_id(local_id)
      {
        m_last_calc.setTop(SECONDS_BETWEEN_CALCULATIONS);
        std::memset(m_position, 0, sizeof(m_position));
      }

      void
      setAnnounce(const IMC::Announce* msg)
      {
        //std::cerr << "got announce \n";
        if (msg->getSource() == m_local_id)
          setMyPosition(msg->lat, msg->lon, msg->height);
        else
          setNodePosition(msg->getSource(), msg->lat, msg->lon, msg->height);
      }

      void
      setMyEstimatedState(const IMC::EstimatedState* msg)
      {
        double lat = msg->lat;
        double lon = msg->lon;
        double hae = msg->height;

        Coordinates::toWGS84(*msg, lat, lon, hae);

        setMyPosition(lat, lon, hae);
      }

      void
      setNodePosition(unsigned id, double lat, double lon, double alt)
      {
        ScopedRWLock l(m_positions_lock, true);
        std::map<unsigned, NodePosition>::iterator itr = m_node_positions.find(id);
        bool within_range = isReachable(lat, lon, alt);
        if (itr == m_node_positions.end())
        {
          NodePosition pos;
          pos.lat = lat;
          pos.lon = lon;
          pos.hae = alt;
          pos.visible = within_range;

          m_node_positions[id] = pos;
        }

        m_node_positions[id].visible = within_range;
      }

      void
      setMyPosition(double lat, double lon, double alt)
      {
        m_position[0] = lat;
        m_position[1] = lon;
        m_position[2] = alt;

        if (m_last_calc.overflow())
          recomputeVisibleNodes();
      }

      bool
      isNodeWithinRange(unsigned id, unsigned int message_id)
      {
        if (m_comm_range == 0 || id == m_local_id)
          return true;

        if (message_id == DUNE_IMC_SIMULATEDSTATE || message_id == DUNE_IMC_ABORT)
          return true;

        ScopedRWLock l(m_positions_lock);
        if (m_node_positions.find(id) == m_node_positions.end())
        {
          return false;
        }

        return m_node_positions[id].visible;
      }

      bool
      isActive()
      {
        return m_active;
      }

      void
      setActive(bool active)
      {
        m_active = active;
      }

      void
      setUnderwaterComms(bool ucomms)
      {
        m_underwater_comms = ucomms;
      }

      void
      setAllowedMessages(std::vector<std::string> msgs)
      {
        (void)msgs;
        ScopedRWLock l(m_allowed_msgs_lock, true);
      }

      double
      distanceTo(unsigned id)
      {
        if (id == m_local_id)
          return 0;
        if (m_node_positions.find(id) == m_node_positions.end())
          return -1;

        NodePosition pos = m_node_positions[id];
        return WGS84::distance(pos.lat, pos.lon, pos.hae,
                                m_position[0], m_position[1], m_position[2]);
      }

      float
      getCommRange(void)
      {
        return m_comm_range;
      }

    private:
      struct NodePosition
      {
        double lat;
        double lon;
        double hae;
        bool visible;
      };

      //! Recorded node positions.
      std::map<unsigned, NodePosition> m_node_positions;
      //! My own position
      double m_position[3];
      //! Communication range
      double m_comm_range;
      // Lock to serialize access to m_node_positions.
      RWLock m_positions_lock;
      // Time for last visibility computation
      Counter<float> m_last_calc;
      // local IMC id
      unsigned m_local_id;
      // Is this thing actually activated?
      bool m_active;
      // Allow underwater transmissions
      bool m_underwater_comms;
      // Always transmitted messages
      std::vector<unsigned> m_allowed_messages;
      // Lock to serialize access to m_allowed_messages.
      RWLock m_allowed_msgs_lock;

      void
      recomputeVisibleNodes(void)
      {
        ScopedRWLock l(m_positions_lock, true);
        for (std::map<unsigned, NodePosition>::iterator itr =
             m_node_positions.begin(); itr != m_node_positions.end(); itr++)
        {
          NodePosition pos = itr->second;

          if (itr->first == m_local_id)
            pos.visible = true;
          else if (isReachable(pos.lat, pos.lon, pos.hae))
            pos.visible = true;
          else
            pos.visible = false;

          //std::cerr << itr->first << " is visible: " << pos.visible << "\n";
          m_node_positions[itr->first] = pos;
        }
        m_last_calc.reset();
      }

      bool
      isReachable(double lat, double lon, double hae)
      {
        if (m_position[2] < -0.5)
          return false;

        if (m_comm_range > 0)
        {
          double distance = WGS84::distance(lat, lon, hae, m_position[0],
                                            m_position[1], m_position[2]);
          return distance <= m_comm_range;
        }
        else
        {
          return true;
        }
      }
    };
  }
}

#endif
