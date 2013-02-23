//***************************************************************************
// Copyright (C) 2007-2013 Laboratório de Sistemas e Tecnologia Subaquática *
// Departamento de Engenharia Electrotécnica e de Computadores              *
// Rua Dr. Roberto Frias, 4200-465 Porto, Portugal                          *
//***************************************************************************
// Author: Ricardo Martins                                                  *
//***************************************************************************
// The original implementation (shipped with the Linux kernel since         *
// version 2.6.10) is due to Stelian Pop <stelian@popies.net>.              *
//***************************************************************************

// ISO C++ 98 headers.
#include <algorithm>
#include <cstring>

// DUNE headers.
#include <DUNE/Math/General.hpp>
#include <DUNE/Utils/RawFifo.hpp>

namespace DUNE
{
  namespace Utils
  {
    RawFifo::RawFifo(uint32_t s):
      m_size(s)
    {
      if (s & (s - 1))
        m_size = Math::computeNextPowerOfTwo(s);

      m_data = new uint8_t[m_size];

      m_in = m_out = 0;
    }

    RawFifo::RawFifo(uint8_t* data, uint32_t s):
      m_data(data),
      m_size(s),
      m_in(0),
      m_out(0)
    {
      //  if (size & (size - 1))
      // FIXME: handle error
    }

    uint32_t
    RawFifo::put(const uint8_t* buffer, uint32_t len)
    {
      uint32_t l = 0;

      len = std::min(len, m_size - m_in + m_out);

      // Put the data into "m_data", starting from "m_in" to the end.
      l = std::min(len, m_size - (m_in & (m_size - 1)));
      std::memcpy(m_data + (m_in & (m_size - 1)), buffer, l);

      // Put the rest (if any) at the beginning of "m_data".
      std::memcpy(m_data, buffer + l, len - l);

      m_in += len;

      return len;
    }

    uint32_t
    RawFifo::getHead(uint8_t* buffer, uint32_t len)
    {
      uint32_t l = 0;

      len = std::min(len, m_in - m_out);

      // Get the data from "m_data", starting from "m_out" until the end.
      l = std::min(len, m_size - (m_out & (m_size - 1)));
      std::memcpy(buffer, m_data + (m_out & (m_size - 1)), l);

      // Get the rest (if any) from the beginning of "m_data"
      std::memcpy(buffer + l, m_data, len - l);

      return len;
    }

    uint32_t
    RawFifo::discard(uint32_t len)
    {
      len = std::min(len, m_in - m_out);
      m_out += len;

      return len;
    }
  }
}
