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

#ifndef TRANSPORTS_EVOLOGICS_PARSER_HPP_INCLUDED_
#define TRANSPORTS_EVOLOGICS_PARSER_HPP_INCLUDED_

// ISO C++ 98 headers.
#include <vector>
#include <string>
#include <cstring>
#include <cstdio>
#include <iostream>

// Local headers.
#include "Reply.hpp"

#define ucl_class_debug(a) std::cerr << a << std::endl;

namespace Transports
{
  namespace Evologics
  {
    class Parser
    {
    public:
      Parser(void)
      {
        reset();
      }

      void
      reset(void)
      {
        m_state = STA_DATA;
        m_data.clear();
        m_comma_offs.clear();
      }

      bool
      match(const std::string& a, const std::string& b)
      {
        if (b.size() > a.size())
          return false;

        return a.compare(0, b.size(), b, 0, b.size()) == 0;
      }

      const char*
      getField(unsigned idx)
      {
        return m_data.c_str() + m_comma_offs[idx - 1] + 1;
      }

      Reply*
      parse(char byte)
      {
        switch (m_state)
        {
          case STA_DATA:
            m_data.push_back(byte);
            if (byte == '\r')
              m_state = STA_LF;
            else if (byte == ',')
              m_comma_offs.push_back(m_data.size() - 1);
            break;

          case STA_LF:
            m_data.push_back(byte);
            if (byte != '\n')
            {
              if (byte == ',')
                m_comma_offs.push_back(m_data.size() - 1);
              m_state = STA_DATA;
              break;
            }

            if (match(m_data, "RECVIM"))
            {
              if (!isComplete(10))
              {
                m_state = STA_DATA;
                break;
              }
            }
            else if (match(m_data, "RECV"))
            {
              if (!isComplete(9))
              {
                m_state = STA_DATA;
                break;
              }
            }

            Reply* rpl = interpret();
            reset();
            return rpl;
        }

        return 0;
      }

      bool
      isComplete(unsigned field_count)
      {
        if (m_comma_offs.size() < field_count)
        {
          return false;
        }

        // Check if the data length field is less than 4 bytes.
        unsigned size_len = (m_comma_offs[1] - 1) - m_comma_offs[0];
        if (size_len > 4)
        {
          reset();
          return false;
        }

        // Extract the number in the data length field.
        unsigned data_len = 0;
        std::sscanf(m_data.c_str() + m_comma_offs[0] + 1, "%u", &data_len);
        if (data_len > 1024)
        {
          reset();
          return false;
        }

        return (((m_data.size() - 2) - (m_comma_offs[field_count - 1] + 1)) == data_len);
      }

      Reply*
      interpret(void)
      {
        Reply* reply = new Reply;

        if (match(m_data, "OK"))
        {
          ucl_class_debug("OK");
          reply->type = Reply::RPL_OK;
          return reply;
        }
        else if (match(m_data, "RECVIM"))
        {
          ucl_class_debug("RECVIM");
          if (interpretRECV(reply, 10))
            reply->type = Reply::RPL_RECVIM;
        }
        else if (match(m_data, "RECV"))
        {
          ucl_class_debug("RECV");
          if (interpretRECV(reply, 9))
            reply->type = Reply::RPL_RECV;
        }
        else if (match(m_data, "FAILEDIM"))
        {
          ucl_class_debug("FAILEDIM");
          if (interpretFAILED(reply))
            reply->type = Reply::RPL_FAILEDIM;
        }
        else if (match(m_data, "FAILED"))
        {
          ucl_class_debug("FAILED");

          if (interpretFAILED(reply))
            reply->type = Reply::RPL_FAILED;
        }
        else if (match(m_data, "DELIVEREDIM"))
        {
          ucl_class_debug("DELIVEREDIM");
          if (interpretDELIVERED(reply))
            reply->type = Reply::RPL_DELIVEREDIM;
        }
        else if (match(m_data, "DELIVERED"))
        {
          ucl_class_debug("DELIVERED");
          if (interpretDELIVERED(reply))
            reply->type = Reply::RPL_DELIVERED;
        }
        else if (match(m_data, "BUSY"))
        {
          ucl_class_debug("BUSY");
          if (interpretBUSY(reply))
            reply->type = Reply::RPL_BUSY;
        }
        else
        {
          reply->type = Reply::RPL_OTHER;
          std::strncpy(reply->data.other, m_data.c_str(), sizeof(reply->data.other));
        }

        return reply;
      }

      bool
      interpretFAILED(Reply* reply)
      {
        if (m_comma_offs.size() != 1)
          return false;

        if (std::sscanf(getField(1), "%u", &reply->data.failed.addr) == 1)
          return true;

        return false;
      }

      bool
      interpretDELIVERED(Reply* reply)
      {
        if (m_comma_offs.size() != 1)
          return false;

        if (std::sscanf(getField(1), "%u", &reply->data.delivered.addr) == 1)
          return true;

        return false;
      }

      bool
      interpretBUSY(Reply* reply)
      {
        if (std::sscanf(m_data.c_str(), "BUSY delivering data to address %u", &reply->data.busy.addr) == 1)
          return true;
        return false;
      }

      bool
      interpretRECV(Reply* reply, unsigned field_count)
      {
        if (m_comma_offs.size() < field_count)
        {
          ucl_class_debug("mismatch: " << m_comma_offs.size() << " / " << field_count);
          return false;
        }

        unsigned field = 1;

        if (std::sscanf(getField(field++), "%u", &reply->data.recv.data_size) != 1)
        {
          ucl_class_debug(field);
          return false;
        }

        if (std::sscanf(getField(field++), "%u", &reply->data.recv.src) != 1)
        {
          ucl_class_debug(field);
          return false;
        }

        if (std::sscanf(getField(field++), "%u", &reply->data.recv.dst) != 1)
        {
          ucl_class_debug(field);
          return false;
        }

        if (field_count == 10)
        {
          const char* ack = getField(field++);
          reply->data.recv.flag = (ack[0] == 'a' && ack[1] == 'c' && ack[2] == 'k');
        }
        else
          reply->data.recv.flag = false;

        if (std::sscanf(getField(field++), "%u", &reply->data.recv.bitrate) != 1)
        {
          ucl_class_debug(field);
          return false;
        }

        if (std::sscanf(getField(field++), "%d", &reply->data.recv.rms) != 1)
        {
          ucl_class_debug(field);
          return false;
        }

        if (std::sscanf(getField(field++), "%u", &reply->data.recv.integrity) != 1)
        {
          ucl_class_debug(field);
          return false;
        }

        if (std::sscanf(getField(field++), "%u", &reply->data.recv.prop_time) != 1)
        {
          ucl_class_debug(field);
          return false;
        }

        if (std::sscanf(getField(field++), "%f", &reply->data.recv.velocity) != 1)
        {
          ucl_class_debug(field);
          return false;
        }

        std::memcpy(reply->data.recv.data, getField(field++), reply->data.recv.data_size);

        return true;
      }


    private:
      enum State
      {
        STA_DATA,
        STA_LF
      };

      std::vector<unsigned> m_comma_offs;
      std::string m_data;
      State m_state;
    };
  }
}

#endif
