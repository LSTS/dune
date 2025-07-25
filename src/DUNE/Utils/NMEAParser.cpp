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
    NMEAParser::parse(char *buffer, unsigned size, NMEASentence& sentence)
    {
      for (unsigned i = 0; i < size; i++)
      {
        if (parse(buffer[i], sentence))
          return true;
      }

      return false;
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
    NMEAParser::parseEpochTime(const char* str, double& var, double def)
    {
      if (std::strlen(str) < 9)
      {
        var = def;
        return;
      }

      int hour = (str[0] - '0') * 10 + (str[1] - '0');
      int min = (str[2] - '0') * 10 + (str[3] - '0');
      int sec = (str[4] - '0') * 10 + (str[5] - '0');
      int hsec = (str[7] - '0') * 10 + (str[8] - '0');

      struct tm ttime;
      time_t ref_etime = time(NULL);
      time_t etime = ref_etime;

      localtime_r(&etime, &ttime);

      if (hour > ttime.tm_hour)
      {
        // Day wrap!
        // TODO Skipping for now!
        var = def;
        return;
      }

      ttime.tm_hour = hour;
      ttime.tm_min = min;
      ttime.tm_sec = sec + ttime.tm_gmtoff;

      // ttime.tm_isdst = 1;
      etime = mktime(&ttime);

      if (fabs(etime - ref_etime) > 60)
      {
        // Incorrect time manipulation or too outdated...
        var = def;
        return;
      }

      var = etime + .01 * hsec;
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

    void
    NMEAParser::rebuildSentence()
    {
      m_sentence = "$";
      m_sentence += m_cmd;
      m_sentence += ",";
      m_sentence += m_data;
      m_sentence += "*";
      m_sentence += m_csum_str;
    }

    bool
    NMEAParser::parseCommand(NMEASentence& sentence)
    {
      rebuildSentence();

      if (std::strcmp("GPGGA", m_cmd) == 0)
        return parseGGA(sentence);
      else if (std::strcmp("SDDBT", m_cmd) == 0)
        return parseDBT(sentence);
      else if (std::strcmp("SDMTW", m_cmd) == 0)
        return parseMTW(sentence);
      else if (std::strcmp("PEVOSSB", m_cmd) == 0)
        return parseSSB(sentence);
      else if (std::strcmp("PEVOSSA", m_cmd) == 0)
        return parseSSA(sentence);
      else if (std::strcmp("PEVOCTL", m_cmd) == 0)
        return parseCTL(sentence);
      else if (std::strcmp("VMVBW", m_cmd) == 0)
        return parseVBW(sentence);
      else if (std::strcmp("PEVOCFG", m_cmd) == 0)
        return parseCFG(sentence);
      else if (std::strcmp("PEVONET", m_cmd) == 0)
        return parseNET(sentence);
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
    NMEAParser::parseDBT(NMEASentence& sentence)
    {
      std::vector<std::string> tokens;
      String::split(m_data, ",", tokens);

      if (tokens.size() != 6)
        return false;

      sentence.type = DBT;

      if (tokens[2] == "")
        return false;

      parseDouble(tokens[2].c_str(), sentence.data.dbt.depth);

      return true;
    }

    bool
    NMEAParser::parseSSB(NMEASentence& sentence)
    {
      std::vector<std::string> tokens;
      String::split(m_data, ",", tokens);

      if (tokens.size() != 14)
        return false;

      sentence.type = SSB;

      parseDouble(tokens[0].c_str(), sentence.data.ssb.utc_time);

      int tid;
      int did;
      parseInteger(tokens[1].c_str(), tid);
      parseInteger(tokens[2].c_str(), did);
      sentence.data.ssb.tid = tid;
      sentence.data.ssb.did = did;

      if (tokens[3] == "T")
        sentence.data.ssb.cf = NMEASentence::SentenceData::SSB::T;
      else if (tokens[3] == "B")
        sentence.data.ssb.cf = NMEASentence::SentenceData::SSB::B;
      else if (tokens[3] == "H")
        sentence.data.ssb.cf = NMEASentence::SentenceData::SSB::H;
      else if (tokens[3] == "N")
        sentence.data.ssb.cf = NMEASentence::SentenceData::SSB::N;
      else if (tokens[3] == "E")
        sentence.data.ssb.cf = NMEASentence::SentenceData::SSB::E;
      else if (tokens[3] == "G")
        sentence.data.ssb.cf = NMEASentence::SentenceData::SSB::G;

      if (tokens[4] == "T")
        sentence.data.ssb.op = NMEASentence::SentenceData::SSB::OP_T;
      else if (tokens[4] == "V")
        sentence.data.ssb.op = NMEASentence::SentenceData::SSB::OP_V;

      if (tokens[5] == "T")
        sentence.data.ssb.tr = NMEASentence::SentenceData::SSB::TR_T;
      else if (tokens[5] == "R")
        sentence.data.ssb.tr = NMEASentence::SentenceData::SSB::TR_R;
      else if (tokens[5] == "P")
        sentence.data.ssb.tr = NMEASentence::SentenceData::SSB::TR_P;
      else if (tokens[5] == "U")
        sentence.data.ssb.tr = NMEASentence::SentenceData::SSB::TR_U;

      parseDouble(tokens[6].c_str(), sentence.data.ssb.x);
      parseDouble(tokens[7].c_str(), sentence.data.ssb.y);
      parseDouble(tokens[8].c_str(), sentence.data.ssb.z);
      parseDouble(tokens[9].c_str(), sentence.data.ssb.accuracy);
      parseDouble(tokens[10].c_str(), sentence.data.ssb.rssi);
      parseDouble(tokens[11].c_str(), sentence.data.ssb.integrity);

      return true;
    }

    bool
    NMEAParser::parseSSA(NMEASentence& sentence)
    {
      std::vector<std::string> tokens;
      String::split(m_data, ",", tokens);

      if (tokens.size() != 12)
        return false;

      sentence.type = SSA;

      parseDouble(tokens[0].c_str(), sentence.data.ssa.utc_time);

      int tid;
      int did;
      parseInteger(tokens[1].c_str(), tid);
      parseInteger(tokens[2].c_str(), did);
      sentence.data.ssa.tid = tid;
      sentence.data.ssa.did = did;

      if (tokens[3] == "T")
        sentence.data.ssa.cf = NMEASentence::SentenceData::SSA::T;
      else if (tokens[3] == "B")
        sentence.data.ssa.cf = NMEASentence::SentenceData::SSA::B;
      else if (tokens[3] == "H")
        sentence.data.ssa.cf = NMEASentence::SentenceData::SSA::H;
      else if (tokens[3] == "N")
        sentence.data.ssa.cf = NMEASentence::SentenceData::SSA::N;
      else if (tokens[3] == "E")
        sentence.data.ssa.cf = NMEASentence::SentenceData::SSA::E;
      else if (tokens[3] == "G")
        sentence.data.ssa.cf = NMEASentence::SentenceData::SSA::G;

      if (tokens[4] == "T")
        sentence.data.ssa.tr = NMEASentence::SentenceData::SSA::TR_T;
      else if (tokens[4] == "R")
        sentence.data.ssa.tr = NMEASentence::SentenceData::SSA::TR_R;
      else if (tokens[4] == "P")
        sentence.data.ssa.tr = NMEASentence::SentenceData::SSA::TR_P;
      else if (tokens[4] == "U")
        sentence.data.ssa.tr = NMEASentence::SentenceData::SSA::TR_U;

      parseDouble(tokens[5].c_str(), sentence.data.ssa.bearing);
      parseDouble(tokens[6].c_str(), sentence.data.ssa.elevation);
      parseDouble(tokens[7].c_str(), sentence.data.ssa.accuracy);
      parseDouble(tokens[8].c_str(), sentence.data.ssa.rssi);
      parseDouble(tokens[9].c_str(), sentence.data.ssa.integrity);

      if (tokens[10] != "")
        parseDouble(tokens[10].c_str(), sentence.data.ssa.pressure);
      if (tokens[11] != "")
        parseDouble(tokens[11].c_str(), sentence.data.ssa.velocity);

      return true;
    }

    bool
    NMEAParser::parseCTL(NMEASentence& sentence)
    {
      sentence.type = CTL;

      std::vector<std::string> tokens;
      String::split(m_data, ",", tokens);

      if (tokens.front() == "P")
      {
        sentence.data.ctl.type = CTLTypes::PROTOCOL;
        strcpy(sentence.data.ctl.data.protocol.protocol, tokens[1].c_str());
      }
      else if (tokens.front() == "HOPS")
      {
        sentence.data.ctl.type = CTLTypes::HOPS;
        strcpy(sentence.data.ctl.data.hops.key, tokens[1].c_str());
        if (tokens.size() > 2U)
          strcpy(sentence.data.ctl.data.hops.value, tokens[2].c_str());
      }

      return true;
    }

    bool
    NMEAParser::parseMTW(NMEASentence& sentence)
    {
      std::vector<std::string> tokens;
      String::split(m_data, ",", tokens);

      if (tokens.size() != 2)
        return false;

      sentence.type = MTW;

      if (tokens[0] == "")
        return false;

      parseDouble(tokens[0].c_str(), sentence.data.mtw.temp);

      return true;
    }

    bool
    NMEAParser::parseVBW(NMEASentence& sentence)
    {
      // Example: $VMVBW,0.46,-0.27,A,,,V,,V,,V*65
      std::vector<std::string> tokens;
      String::split(m_data, ",", tokens);

      if (tokens.size() != 10)
        return false;

      sentence.type = VBW;

      if (tokens[2] == "V")
        return false;

      parseDouble(tokens[0].c_str(), sentence.data.vbw.lon_water_speed);
      parseDouble(tokens[1].c_str(), sentence.data.vbw.trans_water_speed);

      return true;
    }

    bool
    NMEAParser::parseCFG(NMEASentence& sentence)
    {
      sentence.type = CFG;

      std::vector<std::string> tokens;
      String::split(m_data, ",", tokens);

      if (tokens.front() == "")
        sentence.data.cfg.type = NMEASentence::SentenceData::CFG::NONE;
      else if (tokens.front() == "S")
        sentence.data.cfg.type = NMEASentence::SentenceData::CFG::SET;
      else if (tokens.front() == "G")
        sentence.data.cfg.type = NMEASentence::SentenceData::CFG::GET;
      else if (tokens.front() == "E")
        sentence.data.cfg.type = NMEASentence::SentenceData::CFG::ERROR;

      if (tokens.size() < 2U)
        return false;

      strcpy(sentence.data.cfg.parameter, tokens[1].c_str());
      strcpy(sentence.data.cfg.value, tokens[2].c_str());

      return true;
    }

    bool
    NMEAParser::parseNET(NMEASentence& sentence)
    {
      sentence.type = NET;

      std::vector<std::string> tokens;
      String::split(m_data, ",", tokens);

      if (tokens.front() == "I")
      {
        sentence.data.net.type = NMEASentence::SentenceData::NET::TYPE_DELIVERY_SYSTEM_TOKEN;
        int token;
        parseInteger(tokens[1].c_str(), token);
        sentence.data.net.data.delivery_system_token.token = token;
      }

      else
      {
        if (tokens.size() < 6U)
          return false;

        if (tokens.front() == "T")
          sentence.data.net.type = NMEASentence::SentenceData::NET::TYPE_TRANSMIT;
        else if (tokens.front() == "A")
          sentence.data.net.type = NMEASentence::SentenceData::NET::TYPE_ACCEPTED;
        else if (tokens.front() == "D")
          sentence.data.net.type = NMEASentence::SentenceData::NET::TYPE_DELIVERED;
        else if (tokens.front() == "R")
          sentence.data.net.type = NMEASentence::SentenceData::NET::TYPE_RECEIVED;
        else if (tokens.front() == "C")
          sentence.data.net.type = NMEASentence::SentenceData::NET::TYPE_CANCELED;
        else if (tokens.front() == "E")
          sentence.data.net.type = NMEASentence::SentenceData::NET::TYPE_ERROR;
        else
          sentence.data.net.type = NMEASentence::SentenceData::NET::TYPE_OTHER;

        int src;
        int dst;
        parseInteger(tokens[1].c_str(), src);
        parseInteger(tokens[2].c_str(), dst);
        sentence.data.net.data.msg.src = src;
        sentence.data.net.data.msg.dst = dst;

        if (tokens.at(3) == "0")
          sentence.data.net.data.msg.prio = NMEASentence::SentenceData::NET::Data::Msg::PRIO_HIGH;
        else if (tokens.at(3) == "A")
          sentence.data.net.data.msg.prio = NMEASentence::SentenceData::NET::Data::Msg::PRIO_ATTACHED;
        else
          sentence.data.net.data.msg.prio = NMEASentence::SentenceData::NET::Data::Msg::PRIO_NORMAL;

        int token;
        parseInteger(tokens[4].c_str(), token);
        sentence.data.net.data.msg.token = token;

        strcpy(sentence.data.net.data.msg.data, tokens[5].c_str());
      }

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
