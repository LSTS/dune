//***************************************************************************
// Copyright 2007-2013 Universidade do Porto - Faculdade de Engenharia      *
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
// https://www.lsts.pt/dune/licence.                                        *
//***************************************************************************
// Author: Ricardo Martins                                                  *
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
