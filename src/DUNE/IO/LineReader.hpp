//***************************************************************************
// Copyright 2017 OceanScan - Marine Systems & Technology, Lda.             *
//***************************************************************************
// This file is subject to the terms and conditions defined in file         *
// 'LICENCE.md', which is part of this source code package.                 *
//***************************************************************************
// Author: Ricardo Martins                                                  *
//***************************************************************************

#ifndef DUNE_IO_LINE_READER_HPP_INCLUDED_
#define DUNE_IO_LINE_READER_HPP_INCLUDED_

// ISO C++ 98 headers.
#include <queue>
#include <string>

// DUNE headers.
#include <DUNE/IO/Handle.hpp>
#include <DUNE/IO/Poll.hpp>
#include <DUNE/Time/Counter.hpp>

namespace DUNE
{
  namespace IO
  {
    class LineReader
    {
    public:
      LineReader(Handle& handle, char line_terminator = '\n'):
        m_handle(handle),
        m_line_terminator(line_terminator)
      { }

      void
      clear()
      {
        m_line.clear();
        while (!m_queue.empty())
          m_queue.pop();
      }

      bool
      readLine(double timeout, std::string& output)
      {
        if (processQueue(output))
          return true;

        m_wdog.setTop(timeout);

        while (!m_wdog.overflow())
        {
          double delay = m_wdog.getRemaining();
          if (delay <= 0)
            break;

          if (!Poll::poll(m_handle, delay))
            break;

          size_t rv = m_handle.read(m_bfr, sizeof(m_bfr));
          for (size_t i = 0; i < rv; ++i)
            m_queue.push(m_bfr[i]);

          if (processQueue(output))
            return true;
        }

        return false;
      }

    private:
      //! I/O handle.
      Handle& m_handle;
      //! Line terminator character.
      char m_line_terminator;
      //! Read buffer.
      char m_bfr[512];
      //! Current line being read.
      std::string m_line;
      //! Read queue.
      std::queue<char> m_queue;
      //! Watchdog.
      Time::Counter<double> m_wdog;

      bool
      processQueue(std::string& result)
      {
        while (!m_queue.empty())
        {
          char c = m_queue.front();
          m_queue.pop();

          m_line.push_back(c);
          if (c == m_line_terminator)
          {
            result = m_line;
            m_line.clear();
            return true;
          }
        }

        return false;
      }
    };
  }
}

#endif
