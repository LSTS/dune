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

#ifndef TRANSPORTS_MICROMODEM_TRANSACTION_HPP_INCLUDED_
#define TRANSPORTS_MICROMODEM_TRANSACTION_HPP_INCLUDED_

// ISO C++ 98 headers.
#include <queue>

// DUNE headers.
#include <DUNE/DUNE.hpp>

// Local headers.
#include "Exceptions.hpp"

namespace Transports
{
  namespace Micromodem
  {
    //! Minimum duration of a mini-packet transmission (s).
    static const double c_mini_packet_duration = 1.0;

    class Operation
    {
    public:
      enum Direction
      {
        DIR_IN,
        DIR_OUT
      };

      Operation(Direction dir, const std::string& stn):
        m_dir(dir),
        m_stn(stn)
      {
      }

      bool
      isOutput(void) const
      {
        return m_dir == DIR_OUT;
      }

      const std::string&
      getSentence(void) const
      {
        return m_stn;
      }

    private:
      Direction m_dir;
      std::string m_stn;
    };

    class Transaction
    {
    public:
      Transaction(void):
        m_timeout(1.0)
      { }

      virtual
      ~Transaction(void)
      { }

      void
      start(IO* io)
      {
        prepare();
        m_wdog.setTop(m_timeout);
        update(io);
      }

      void
      update(IO* io, const std::string& stn = "")
      {
        printRemaining();

        while (!m_queue.empty())
        {
          Operation& op = m_queue.front();
          if (op.isOutput())
          {
            //std::cerr << "front is output" << std::endl;

            io->write(op.getSentence());
            m_queue.pop();
          }
          else
          {
            //std::cerr << "front is input" << std::endl;
            std::cerr << "match: '" << stn << "' | '" << op.getSentence() << "'" << std::endl;

            if (stn != op.getSentence())
            {
              if (String::startsWith(stn, "CAMSG,Transmit aborted"))
                throw TransactionAborted();

              if (!matchFuzzy(stn, op.getSentence()))
                break;
            }

            m_queue.pop();
          }
        }

        if (m_queue.empty())
        {
          std::cerr << "transaction finished in " << m_timeout - m_wdog.getRemaining() << std::endl;
        }
      }

      bool
      timedout(void)
      {
        return m_wdog.overflow();
      }

      bool
      ended(void)
      {
        if (m_queue.empty())
          return true;

        return failed();
      }

      bool
      failed(void)
      {
        if (m_queue.empty())
          return false;

        return timedout();
      }

    protected:
      void
      setTimeout(double timeout)
      {
        m_timeout = timeout;
      }

      void
      addIn(const std::string& stn)
      {
        m_queue.push(Operation(Operation::DIR_IN, stn));
      }

      void
      addOut(const std::string& stn)
      {
        m_queue.push(Operation(Operation::DIR_OUT, stn));
      }

      std::string
      getStandardEcho(const std::string& stn) const
      {
        std::string echo = stn;
        echo[1] = 'A';
        return echo;
      }

      virtual bool
      matchFuzzy(const std::string& stn, const std::string& exp)
      {
        (void)stn;
        (void)exp;

        return false;
      }

      void
      printRemaining(void)
      {
        std::cerr << "remaining " << m_wdog.getRemaining() << std::endl;
      }

      virtual void
      prepare(void)
      {

      }

    private:
      std::queue<Operation> m_queue;
      Time::Counter<double> m_wdog;
      double m_timeout;
    };
  }
}

#endif
