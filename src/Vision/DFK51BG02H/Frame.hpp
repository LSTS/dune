//***************************************************************************
// Copyright (C) 2007-2013 Laboratório de Sistemas e Tecnologia Subaquática *
// Departamento de Engenharia Electrotécnica e de Computadores              *
// Rua Dr. Roberto Frias, 4200-465 Porto, Portugal                          *
//***************************************************************************
// Author: Ricardo Martins                                                  *
//***************************************************************************

#ifndef VISION_DFK51BG02H_FRAME_HPP_INCLUDED_
#define VISION_DFK51BG02H_FRAME_HPP_INCLUDED_

// ISO C++ 98 headers.
#include <cstring>

// DUNE headers.
#include <DUNE/DUNE.hpp>

// Import namespaces.
using DUNE_NAMESPACES;

namespace Vision
{
  namespace DFK51BG02H
  {
    //! Container for raw picture data.
    class Frame
    {
    public:
      //! Constructor.
      //! @param[in] capacity frame capacity in bytes.
      Frame(unsigned capacity):
        m_capacity(capacity),
        m_data(NULL),
        m_tstamp(-1),
        m_pkt_count(0)
      {
        m_data = new uint8_t[m_capacity];
        for (unsigned i = 0; i < m_capacity; ++i)
          m_data[i] = 0;
      }

      //! Destructor.
      ~Frame(void)
      {
        delete [] m_data;
      }

      //! Set frame timestamp to current time.
      void
      setTimeStamp(void)
      {
        m_tstamp = Clock::getSinceEpoch();
        m_pkt_count = 0;
      }

      //! Retrieve frame timestamp.
      double
      getTimeStamp(void)
      {
        return m_tstamp;
      }

      //! Get data pointer.
      //! @return data pointer.
      uint8_t*
      getData(void)
      {
        return m_data;
      }

      //! Write packet to frame.
      //! @param[in] nr frame number.
      //! @param[in] data packet data.
      //! @param[in] size packet size.
      unsigned
      writePacket(unsigned nr, const uint8_t* data, unsigned size)
      {
        ++m_pkt_count;
        unsigned esize = std::min(size, m_capacity - (((nr - 1) * size)));
        std::memcpy(m_data + ((nr - 1) * size), data, esize);
        return esize;
      }

      //! Retrieve the number of packets written to the frame. This
      //! count can be inflated due to duplicated packets.
      //! @return packets in the frame.
      unsigned
      getPacketCount(void)
      {
        return m_pkt_count;
      }

    private:
      //! Frame capacity (in bytes).
      unsigned m_capacity;
      //! Raw data.
      uint8_t* m_data;
      //! Timestamp.
      double m_tstamp;
      //! Packet count.
      unsigned m_pkt_count;
    };
  }
}

#endif
