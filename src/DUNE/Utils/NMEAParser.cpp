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

// ISO C++ 98 headers.
#include <iostream>
#include <cerrno>
#include <cstring>
#include <cstdlib>
#include <cstdio>

// DUNE headers.
#include <DUNE/Math/Angles.hpp>
#include <DUNE/Utils/String.hpp>
#include <DUNE/Utils/NMEAParser.hpp>
#include <DUNE/Algorithms/XORChecksum.hpp>

namespace DUNE
{
  namespace Utils
  {
    NMEAParser::NMEAParser(int garbage):
      m_state(STATE_START),
      m_cmd_garbage(garbage),
      m_dftrans(STATE_CMD)
    {
      //! Null terminate the checksum string.
      m_csum_str[2] = 0;
    }

    bool
    NMEAParser::parse(char byte, NMEASentence& sentence)
    {
      switch (m_state)
      {
        case STATE_START:
          if (byte == '$')
          {
            m_csum = 0;
            m_idx = 0;
            m_state = m_dftrans;
            m_cmd_garbage_c = 0;
          }
          break;

        case STATE_CMD:
          if (m_cmd_garbage_c < m_cmd_garbage)
          {
            ++m_cmd_garbage_c;
            break;
          }

          m_csum ^= byte;

          if (byte != ',' && byte != '*')
          {
            m_cmd[m_idx++] = byte;

            if (m_idx >= MAX_CMD_LEN)
              m_state = STATE_START;
          }
          else
          {
            m_cmd[m_idx] = 0;
            m_idx = 0;
            m_state = STATE_DATA;
          }
          break;

        case STATE_DATA:
          if (byte == '*')
          {
            m_data[m_idx] = 0;
            m_state = STATE_CHECKSUM_1;
          }
          else
          {
            if (byte == '\r')
            {
              m_data[m_idx] = 0;
              m_state = STATE_START;
              return parseCommand(sentence);
            }

            m_csum ^= byte;
            m_data[m_idx] = byte;

            if (++m_idx >= MAX_DATA_LEN)
              m_state = STATE_START;
          }
          break;

        case STATE_CHECKSUM_1:
          m_recv_csum = ((byte - '0') <= 9) ? (byte - '0') << 4 : (byte - 'A' + 10) << 4;
          m_csum_str[0] = byte;
          m_state = STATE_CHECKSUM_2;
          break;

        case STATE_CHECKSUM_2:
          m_recv_csum |= ((byte - '0') <= 9) ? (byte - '0') : (byte - 'A' + 10);
          m_csum_str[1] = byte;
          m_state = STATE_START;

          if (m_csum == m_recv_csum)
            return parseCommand(sentence);

          break;

        default:
          m_state = STATE_START;
      }

      return false;
    }

    void
    NMEAParser::parseCoordinate(const char* str, double& var, double def)
    {
      const char* ptr = std::strchr(str, '.');

      if (!ptr)
      {
        var = def;
        return;
      }

      int dlen = ptr - 2 - str;
      char bfr[6] = {0};

      std::memcpy(bfr, str, dlen);
      int degrees = std::atoi(bfr);
      double minutes = std::strtod(ptr - 2, 0);

      var = DUNE::Math::Angles::convertDMSToDecimal(degrees, minutes);
    }

    void
    NMEAParser::parseUTCTime(const char* str, double& var, double def)
    {
      if (std::strlen(str) < 6)
      {
        var = def;
        return;
      }

      int h = (str[0] - '0') * 10 + (str[1] - '0');
      int m = (str[2] - '0') * 10 + (str[3] - '0');
      int s = (str[4] - '0') * 10 + (str[5] - '0');

      var = (h * 3600) + (m * 60) + s;
    }

    void
    NMEAParser::parseInteger(const char* str, int& var)
    {
      char* endptr;
      errno = 0;

      // So we don't parse in octal.
      if (*str == '0')
        ++str;

      long int tmp = std::strtol(str, &endptr, 0);

      // Check for errors.
      if ((errno != 0) || (endptr == str))
        var = -1;
      var = tmp;
    }

    void
    NMEAParser::parseDouble(const char* str, double& var)
    {
      char* endptr;
      errno = 0;
      double tmp = std::strtod(str, &endptr);

      // Check for errors.
      if ((errno != 0) || (endptr == str))
        var = -1;
      var = tmp;
    }

    bool
    NMEAParser::parseCommand(NMEASentence& sentence)
    {
      // Rebuild the sentence.
      m_sentence = "$";
      m_sentence += m_cmd;
      m_sentence += ",";
      m_sentence += m_data;
      m_sentence += "*";
      m_sentence += m_csum_str;

      if (std::strcmp("GPGGA", m_cmd) == 0)
        return parseGGA(sentence);
      return false;
    }

    bool
    NMEAParser::parseGGA(NMEASentence& sentence)
    {
      std::vector<std::string> tokens;
      String::split(m_data, ",", tokens);

      if (tokens.size() != 14)
        return false;

      sentence.type = GGA;
      parseUTCTime(tokens[0].c_str(), sentence.data.gga.utc_time, -1.0);
      parseCoordinate(tokens[1].c_str(), sentence.data.gga.latitude, 0.0);
      if (tokens[2] == "S")
        sentence.data.gga.latitude *= -1.0;
      parseCoordinate(tokens[3].c_str(), sentence.data.gga.longitude, 0.0);
      if (tokens[4] == "W")
        sentence.data.gga.longitude *= -1.0;
      parseInteger(tokens[5].c_str(), sentence.data.gga.fix_quality);
      parseInteger(tokens[6].c_str(), sentence.data.gga.satellites);
      parseDouble(tokens[7].c_str(), sentence.data.gga.hdop);
      parseDouble(tokens[8].c_str(), sentence.data.gga.altitude);
      parseDouble(tokens[10].c_str(), sentence.data.gga.geoid_height);
      parseInteger(tokens[13].c_str(), sentence.data.gga.diff_station);

      return true;
    }

    bool
    NMEAParser::validateChecksum(const char* bfr, int bfr_len)
    {
      if (bfr_len < 5)
        return false;

      unsigned int received = 0;
      std::sscanf(bfr + bfr_len - 2, "%02X", &received);
      return received == Algorithms::XORChecksum::compute((const uint8_t*)bfr + 1, bfr_len - 4);
    }
  }
}
