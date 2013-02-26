//***************************************************************************
// Copyright (C) 2007-2012 Laboratório de Sistemas e Tecnologia Subaquática *
// Departamento de Engenharia Electrotécnica e de Computadores              *
// Rua Dr. Roberto Frias, 4200-465 Porto, Portugal                          *
//***************************************************************************
// Author: Ricardo Martins                                                  *
//***************************************************************************
// $Id:: dune-lsf2jpg.cpp 11141 2012-10-30 22:03:53Z rasm                 $:*
//***************************************************************************
// Utility to extract compressed images from LSF files.                     *
//***************************************************************************

// ISO C++ 98 headers.
#include <iostream>
#include <fstream>
#include <vector>

// DUNE headers.
#include <DUNE/DUNE.hpp>
using DUNE_NAMESPACES;

//! Minimum number of fields of PUBX,00 sentence.
static const unsigned c_pubx00_fields = 21;
//! Minimum number of fields of PUBX,04 sentence.
static const unsigned c_pubx04_fields = 10;

class Filter
{
public:
  Filter(void):
    m_status(0)
  {
    printHeader();
    m_nav_status = new char[6];
  }

  void
  putGPS(const std::vector<uint8_t>& data)
  {
    m_sample_msec = 0;

    unsigned off = 0;
    unsigned size = 0;

    for (unsigned i = 0; i < data.size(); ++i)
    {
      if (data[i] == '\n')
      {
        interpret(std::string((char*)&data[off], size));
        off = size + 1;
        size = 0;
      }
      else
      {
        ++size;
      }
    }
  }

  void
  putIMU(const std::vector<uint8_t>& data)
  {
    if (data[2] != 0x32)
    {
      fprintf(stderr, "WARNING: spurious data.\n");
    }

    //dump("IMU", data);

    const uint8_t* ptr = &data[4];
    ByteCopy::fromBE(m_temp, ptr);
    ByteCopy::fromBE(m_accel_x, ptr + 4);
    ByteCopy::fromBE(m_accel_y, ptr + 8);
    ByteCopy::fromBE(m_accel_z, ptr + 12);
    ByteCopy::fromBE(m_agvel_x, ptr + 16);
    ByteCopy::fromBE(m_agvel_y, ptr + 20);
    ByteCopy::fromBE(m_agvel_z, ptr + 24);
    ByteCopy::fromBE(m_phi, ptr + 28);
    ByteCopy::fromBE(m_theta, ptr + 32);
    ByteCopy::fromBE(m_psi, ptr + 36);

    m_utc_tow = (m_utc_tow_msec + m_sample_msec) / 1000.0;
    m_utc_second = (m_utc_second_msec + m_sample_msec) / 1000.0;

    //print();

    m_sample_msec += 10;
  }

  void
  dump(const std::string& prefix, const std::vector<uint8_t>& data)
  {
    fprintf(stdout, "%s:", prefix.c_str());
    for (unsigned i = 0; i < data.size(); ++i)
    {
      fprintf(stdout, " %02x", data[i]);
    }
    fprintf(stdout, "\n");
  }

  void
  printHeader(void)
  {
    fprintf(stdout,
            "Status"
#define FIELD(label, var, type, fmt) "\t" label
#include "Fields.def"
            "\r\n"
            );
  }

  void
  print(void)
  {
    fprintf(stdout,
            "%u"
#define FIELD(label, var, type, fmt) "\t" fmt
#include "Fields.def"
            "\r\n",
            m_status
#define FIELD(label, var, type, fmt) , var
#include "Fields.def"
            );
  }

private:

  bool
  readLatitude(const std::string& str, const std::string& h, double& dst)
  {
    int degrees = 0;
    double minutes = 0;

    if (std::sscanf(str.c_str(), "%02d%lf", &degrees, &minutes) != 2)
      return false;

    dst = Angles::convertDMSToDecimal(degrees, minutes);

    if (h == "S")
      dst = -dst;

    return true;
  }

  double
  readLongitude(const std::string& str, const std::string& h, double& dst)
  {
    int degrees = 0;
    double minutes = 0;

    if (std::sscanf(str.c_str(), "%03d%lf", &degrees, &minutes) != 2)
      return false;

    dst = Angles::convertDMSToDecimal(degrees, minutes);

    if (h == "W")
      dst = -dst;

    return true;
  }

  template <typename T>
  bool
  readDecimal(const std::string& str, T& dst)
  {
    unsigned idx = 0;
    while (str[idx] == '0')
      ++idx;

    return castLexical(std::string(str, idx), dst);
  }

  template <typename T>
  bool
  readNumber(const std::string& str, T& dst)
  {
    return castLexical(str, dst);
  }

  bool
  readTime(const std::string& str, unsigned& h, unsigned& m, unsigned& s, double& sfp)
  {
    if (std::sscanf(str.c_str(), "%02u%02u%lf", &h, &m, &sfp) != 3)
    {
      if (std::sscanf(str.c_str(), "%02u%02u%02u", &h, &m, &s) != 3)
        return false;
    }

    return true;
  }

  void
  interpret(std::string stn)
  {
    // Remove checksum.
    stn.resize(stn.size() - 4);

    std::vector<std::string> parts;
    String::split(stn, ",", parts);

    if ((parts[0] == "$PUBX") && (parts[1] == "00"))
      interpretPUBX00(parts);
    else if ((parts[0] == "$PUBX") && (parts[1] == "04"))
      interpretPUBX04(parts);
    else
      std::cerr << "ERROR: unknown NMEA message." << std::endl;
  }

  void
  interpretPUBX04(const std::vector<std::string>& parts)
  {
    if (parts.size() < c_pubx04_fields)
    {
      std::cerr << "WARNING: invalid PUBX,04 sentence" << std::endl;
      return;
    }

    // Read time.
    unsigned h = 0;
    unsigned m = 0;
    double s = 0;

    if (std::sscanf(parts[2].c_str(), "%02u%02u%lf", &h, &m, &s) == 3)
    {
      m_utc_hour = h;
      m_utc_minute = m;
      m_utc_second_msec = (s * 1000);
    }

    // Read date.
    unsigned day = 0;
    unsigned month = 0;
    unsigned year = 0;

    if (std::sscanf(parts[3].c_str(), "%02u%02u%02u", &day, &month, &year) != 3)
    {
      std::cerr << "WARNING: invalid date" << std::endl;
    }
    else
    {
      m_utc_day = day;
      m_utc_month = month;
      m_utc_year = year + 2000;
    }

    // Read UTC week number.
    unsigned wno;
    if (castLexical(parts[5], wno))
    {
      m_utc_wno = wno;
    }
    else
    {
      std::cerr << "WARNING: invalid week number" << std::endl;
    }

    // Read UTC time of week.
    double tow;
    if (std::sscanf(parts[4].c_str(), "%lf", &tow))
    {
      m_utc_tow_msec = (tow * 1000);
    }
    else
    {
      std::cerr << "WARNING: invalid UTC time of week" << std::endl;
    }
  }

  void
  interpretPUBX00(const std::vector<std::string>& parts)
  {
    if (parts.size() < c_pubx00_fields)
    {
      fprintf(stderr, "WARNING: invalid PUBX,00 sentence\n");
      return;
    }

    readLatitude(parts[3], parts[4], m_lat);
    readLongitude(parts[5], parts[6], m_lon);
    readNumber(parts[7], m_height);
    readDecimal(parts[18], m_sats);

    // Navigation status.
    std::strcpy(m_nav_status, parts[8].c_str());

    // HDOP.
    double hdop = 0;
    if (std::sscanf(parts[15].c_str(), "%lf", &hdop) == 1)
    {
      m_hdop = hdop;
    }

    // VDOP.
    double vdop = 0;
    if (std::sscanf(parts[16].c_str(), "%lf", &vdop) == 1)
    {
      m_vdop = vdop;
    }

    // TDOP.
    double tdop = 0;
    if (std::sscanf(parts[17].c_str(), "%lf", &tdop) == 1)
    {
      m_tdop = tdop;
    }

    // Speed over ground.
    double sog = 0;
    if (std::sscanf(parts[11].c_str(), "%lf", &sog) == 1)
    {
      m_sog = sog;
    }

    // Course over ground.
    double cog = 0;
    if (std::sscanf(parts[12].c_str(), "%lf", &cog) == 1)
    {
      m_cog = cog;
    }
  }

  //! Status.
  unsigned m_status;
  //! Sample millisecond.
  unsigned m_sample_msec;
  unsigned m_utc_second_msec;
  unsigned m_utc_tow_msec;

#define FIELD(label, var, type, fmt)            \
  type var;
#include "Fields.def"
};

class Parser
{
public:
  Parser(void):
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
        if (byte <= 0x2)
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
        if (m_channel == 0)
        {
          if ((m_block_cnt < 5) && (byte == 0))
            ++m_block_cnt;

          if (m_block_cnt < 5)
            break;

          ++m_sample_count;
          m_sample = byte;
          if ((m_sample < 0) || (m_sample > 99))
            std::cerr << m_sample << std::endl;

          if (m_sample == 0)
          {
            // if (m_sample_count == 100)
            //   collect();
            clear();
            m_sample_count = 0;
          }
        }
        else if (m_sample != -1)
        {
          //m_buffer[m_channel - 1][m_sample].push_back(byte);
        }
        break;
    }
  }

  void
  collect(void)
  {
    std::vector<uint8_t> data;

    for (unsigned i = 0; i < 100; ++i)
    {
      for (unsigned j = 0; j < m_buffer[1][i].size(); ++j)
        data.push_back(m_buffer[1][i][j]);
    }

    m_filter.putGPS(data);

    for (unsigned i = 0; i < 100; ++i)
    {
      data.clear();

      for (unsigned j = 0; j < m_buffer[0][i].size(); ++j)
        data.push_back(m_buffer[0][i][j]);

      m_filter.putIMU(data);
    }
  }

  void
  clear(void)
  {
    for (unsigned i = 0; i < 2; ++i)
    {
      for (unsigned j = 0; j < 100; ++j)
      {
        m_buffer[i][j].clear();
      }
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
  std::vector<uint8_t> m_buffer[2][100];
  State m_state;
  int m_channel;
  int m_sample;
  unsigned m_sample_count;
  Filter m_filter;
};

int
main(int argc, char** argv)
{
  // if (argc != 2)
  // {
  //   std::cerr << "Usage: " << argv[0] << " <device>" << std::endl;
  //   return 1;
  // }

  // DUNE::Hardware::SerialPort* port = new DUNE::Hardware::SerialPort(argv[1], 500000);
  uint8_t bfr[1024];
  ::Parser parser;
  FILE* fd = fopen(argv[1], "rb");

  while (!feof(fd))
  {
    int rv = fread(bfr, 1, sizeof(bfr), fd);
    for (int i = 0; i < rv; ++i)
    {
      parser.parse(bfr[i]);
    }
  }

  return 0;
}
