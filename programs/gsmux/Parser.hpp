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

#ifndef GSMUX_PARSER_HPP_INCLUDED_
#define GSMUX_PARSER_HPP_INCLUDED_

// ISO C++ 98 headers.
#include <vector>
#include <string>
#include <cstdio>

// Local headers.
#include "Filter.hpp"

//! Multiplexer channels.
enum Channels
{
  //! Channel with the current index of the 100 Hz pulse.
  CHANNEL_IDX = 0x00,
  //! Channel with GPS data.
  CHANNEL_GPS = 0x01,
  //! Channel with MTi data.
  CHANNEL_MTI = 0x02,
  //! Channel with LIMU data.
  CHANNEL_LIMU = 0x03,
  //! Number of channels.
  CHANNEL_COUNT = 0x04
};

class Parser
{
public:
  Parser(std::FILE* fd):
    m_filter(fd),
    m_block_cnt(0)
  {
    m_state = STATE_SYNC;
    m_channel = -1;
    m_sample = -1;
    m_sample_count = 0;
  }

  void
  parse(uint8_t byte)
  {
    switch (m_state)
    {
      case STATE_SYNC:
        if (byte == 0x3a)
        {
          m_state = STATE_CHAN;
        }
        break;

      case STATE_CHAN:
        if (byte < CHANNEL_COUNT)
        {
          m_channel = byte;
          m_state = STATE_BYTE;
        }
        else
        {
          m_state = STATE_SYNC;
        }
        break;

      case STATE_BYTE:
        m_state = STATE_SYNC;
        if (m_channel == CHANNEL_IDX)
        {
          uint8_t sync = byte >> 7;
          uint8_t index = byte & 0x7f;

          if ((m_block_cnt < 5) && (index == 0))
            ++m_block_cnt;

          if (m_block_cnt < 5)
            break;

          ++m_sample_count;
          m_sample = index;

          m_filter.putSyncStatus(index, sync);

          if (m_sample == 0)
          {
            if (m_sample_count == 100)
              filter();
            m_sample_count = 0;
          }
        }
        else if (m_sample != -1)
        {
          if ((m_sample < 100) && (m_channel < CHANNEL_COUNT))
          {
            //printf("%d, %d\n", m_channel - 1, m_sample);

            //fprintf(stderr, "%d / %d\n", m_channel - 1, m_sample);

            m_buffer[m_channel - 1][m_sample].push_back(byte);
          }
          else
          {
            std::cerr << "ERROR: sample " << m_sample << ", channel "
                      << m_channel << std::endl;
          }
        }
        break;
    }
  }

  void
  filter(void)
  {
    std::vector<uint8_t> data(0);

    // GPS.
    for (unsigned i = 0; i < 100; ++i)
    {
      for (unsigned j = 0; j < m_buffer[CHANNEL_GPS - 1][i].size(); ++j)
        data.push_back(m_buffer[CHANNEL_GPS - 1][i][j]);
      m_buffer[CHANNEL_GPS - 1][i].clear();
    }

    // for (unsigned i = 0; i < data.size(); ++i)
    //   printf("%c", data[i]);

    if (data.size() == 0)
    {
      std::cerr << "ERROR: empty GPS data." << std::endl;
      return;
    }

    m_filter.putGPS(data);

    // MTi.
    for (unsigned i = 0; i < 100; ++i)
    {
      // MTi.
      data.clear();
      for (unsigned j = 0; j < m_buffer[CHANNEL_MTI - 1][i].size(); ++j)
        data.push_back(m_buffer[CHANNEL_MTI - 1][i][j]);
      m_buffer[CHANNEL_MTI - 1][i].clear();
      m_filter.putXMTI(data, i);

      // LIMU.
      data.clear();
      for (unsigned j = 0; j < m_buffer[CHANNEL_LIMU - 1][i].size(); ++j)
        data.push_back(m_buffer[CHANNEL_LIMU - 1][i][j]);
      m_buffer[CHANNEL_LIMU - 1][i].clear();
      m_filter.putLIMU(data, i);

      m_filter.print(i);
    }
  }

private:
  enum State
  {
    STATE_SYNC,
    STATE_CHAN,
    STATE_BYTE
  };

  unsigned m_block_cnt;
  std::vector<uint8_t> m_buffer[CHANNEL_COUNT - 1][100];
  State m_state;
  int m_channel;
  int m_sample;
  unsigned m_sample_count;
  Filter m_filter;
};

#endif
