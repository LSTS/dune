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

#ifndef GSMUX_FILTER_HPP_INCLUDED_
#define GSMUX_FILTER_HPP_INCLUDED_

// ISO C++ 98 headers.
#include <vector>
#include <string>
#include <cstring>
#include <cstdio>

//! Minimum number of fields of PUBX,00 sentence.
static const unsigned c_pubx00_fields = 21;
//! Minimum number of fields of PUBX,04 sentence.
static const unsigned c_pubx04_fields = 10;

class Filter
{
public:
  Filter(std::FILE* fd):
    m_fd(fd)
  {
    printHeader();
    m_nav_status = new char[6];
    std::memset(m_sync_status, 0, sizeof(m_sync_status));
  }

  ~Filter(void)
  {
    delete [] m_nav_status;
  }

  void
  putGPS(const std::vector<uint8_t>& data)
  {
    if (m_sync_status[0] == 1)
      return;

    fflush(m_fd);

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
  putSyncStatus(uint8_t index, uint8_t sync)
  {
    m_sync_status[index] = sync;
  }

  void
  putIMU(const std::vector<uint8_t>& data, unsigned index)
  {
    if (data.size() < 20)
      return;

    if (data[2] != 0x32)
    {
      std::fprintf(stderr, "WARNING: spurious data.\n");
    }

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

    print(index);

    m_sample_msec += 10;
  }

  void
  printHeader(void)
  {
    std::fprintf(m_fd,
            "Sync_Lost"
#define FIELD(label, var, type, fmt) "\t" label
#include "Fields.def"
            "\r\n"
            );

    std::fflush(m_fd);
  }

  void
  print(unsigned index)
  {
    std::fprintf(m_fd,
            "%u"
#define FIELD(label, var, type, fmt) "\t" fmt
#include "Fields.def"
            "\r\n",
            m_sync_status[index]
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
    {
      std::cerr << "ERROR: unknown NMEA message." << std::endl;
    }
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
      std::fprintf(stderr, "WARNING: invalid PUBX,00 sentence\n");
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

  //! Output file descriptor.
  std::FILE* m_fd;
  //! Status.
  uint8_t m_sync_status[100];
  //! Sample millisecond.
  unsigned m_sample_msec;
  unsigned m_utc_second_msec;
  unsigned m_utc_tow_msec;

#define FIELD(label, var, type, fmt)            \
  type var;
#include "Fields.def"
};

#endif
