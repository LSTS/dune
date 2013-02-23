//***************************************************************************
// Copyright (C) 2007-2013 Laboratório de Sistemas e Tecnologia Subaquática *
// Departamento de Engenharia Electrotécnica e de Computadores              *
// Rua Dr. Roberto Frias, 4200-465 Porto, Portugal                          *
//***************************************************************************
// Author: Eduardo Marques                                                  *
//***************************************************************************

// DUNE headers.
#include <DUNE/IMC/Parser.hpp>
#include <DUNE/IMC/Packet.hpp>

namespace DUNE
{
  namespace IMC
  {
    Parser::Parser(void)
    {
      reset();
    }

    Parser::~Parser(void)
    { }

    void
    Parser::reset(void)
    {
      m_stage = c_sync;
      m_pos = 0;
      m_buf.clear();
    }

    Message*
    Parser::parse(uint8_t byte)
    {
      Message* m = 0;
      m_buf.push_back(byte);

      while (true)
      {
        int n = m_buf.size() - m_pos;

        if (!n)
        {
          reset(); // discard unneeded data
          break;
        }

        if (m_stage == c_sync)
        {
          // This would not be stricly necessary but is more efficient
          // than  handling recurrent exceptions from Packet::deserializeHeader
          if (n == 1)
          {
            break; // need more data
          }

          uint16_t sync = (m_buf[m_pos] << 8) | m_buf[m_pos + 1];

          if (sync != DUNE_IMC_CONST_SYNC && sync != DUNE_IMC_CONST_SYNC_REV)
          {
            m_pos++; // invalid sync, advance
            continue;
          }
          m_stage = c_header; // sync is ok, get rest of header
        }

        if (m_stage == c_header)
        {
          if (n < DUNE_IMC_CONST_HEADER_SIZE)
            break;  // need more data

          try
          {
            Packet::deserializeHeader(m_header, &m_buf[m_pos], n);
          }
          catch (...)
          {
            m_stage = c_sync;
            ++m_pos; // try to find sync again from current position
            continue;
          }
          m_stage = c_payload; // done with header
        }

        // on to c_payload stage

        if (n < (int)(m_header.size + DUNE_IMC_CONST_HEADER_SIZE + DUNE_IMC_CONST_FOOTER_SIZE))
          break;  // need more data

        // all payload data available
        m_stage = c_sync; // the next stage in any case

        try
        {
          m = Packet::deserializePayload(m_header, &m_buf[m_pos], n, 0);
        }
        catch (...)
        {
          ++m_pos; // try to find sync again from current position
          continue;
        }

        m_pos += n;

        if (m_pos == m_buf.size())
          reset();  // discard unneeded data

        break;
      }

      return m;
    }
  }
}
