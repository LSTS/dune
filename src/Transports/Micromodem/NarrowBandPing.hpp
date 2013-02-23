//***************************************************************************
// Copyright (C) 2007-2013 Laboratório de Sistemas e Tecnologia Subaquática *
// Departamento de Engenharia Electrotécnica e de Computadores              *
// Rua Dr. Roberto Frias, 4200-465 Porto, Portugal                          *
//***************************************************************************
// Author: Ricardo Martins                                                  *
//***************************************************************************
// $Id:: NarrowBandPing.hpp 12667 2013-01-22 02:44:42Z rasm               $:*
//***************************************************************************

#ifndef TRANSPORTS_MICROMODEM_NARROW_BAND_PING_HPP_INCLUDED_
#define TRANSPORTS_MICROMODEM_NARROW_BAND_PING_HPP_INCLUDED_

// ISO C++ 98 headers.
#include <queue>

// DUNE headers.
#include <DUNE/DUNE.hpp>

// Local headers.
#include "Transaction.hpp"

namespace Transports
{
  namespace Micromodem
  {
    class NarrowBandPing: public Transaction
    {
    public:
      NarrowBandPing(void):
        m_tx_freq(0),
        m_tx_length(0),
        m_rx_length(0),
        m_rx_timeout(0)
      {
        m_times.resize(4);
      }

      void
      setTransmitFrequency(unsigned freq)
      {
        m_tx_freq = freq;
      }

      void
      setTransmitLength(unsigned length)
      {
        m_tx_length = length;
      }

      void
      setReceiveLength(unsigned length)
      {
        m_rx_length = length;
      }

      void
      setReceiveTimeout(unsigned timeout)
      {
        m_rx_timeout = timeout;
      }

      void
      setReceiveFrequencies(const std::vector<unsigned>& freqs)
      {
        if (freqs.size() > 4)
          throw std::invalid_argument("can only handle 4 frequencies");

        m_rx_freqs = freqs;
        while (m_rx_freqs.size() < 4)
        {
          m_rx_freqs.push_back(0);
        }
      }

      void
      prepare(void)
      {
        std::string cmd = String::str("CCPNT,%u,%u,%u,%u,%u,%u,%u,%u,1",
                                      m_tx_freq,
                                      m_tx_length, m_rx_length,
                                      m_rx_timeout,
                                      m_rx_freqs[0], m_rx_freqs[1],
                                      m_rx_freqs[2], m_rx_freqs[3]);
        addOut(cmd);

        std::string echo = cmd;
        echo[0] = 'S';
        echo[1] = 'N';
        echo.resize(echo.size() - 2);
        addIn(echo);
        addIn("SNTTA");
      }

      bool
      matchFuzzy(const std::string& stn, const std::string& exp)
      {
        if (exp != "SNTTA")
          return false;

        if (!String::startsWith(stn, "SNTTA"))
          return false;

        std::vector<std::string> parts;
        String::split(stn, ",", parts);
        if (parts.size() != 6)
          return false;

        for (unsigned i = 1; i < 5; ++i)
        {
          if (!castLexical(parts[i], m_times[i - 1]))
            m_times[i - 1] = 0;

          std::cerr << "TIMES " << i << ": " << m_times[i - 1] << std::endl;
        }

        return true;
      }

    private:
      unsigned m_tx_freq;
      unsigned m_tx_length;
      unsigned m_rx_length;
      unsigned m_rx_timeout;
      std::vector<unsigned> m_rx_freqs;
      std::vector<double> m_times;
    };
  }
}

#endif
