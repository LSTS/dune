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

#ifndef GSMUX_FILTER_HPP_INCLUDED_
#define GSMUX_FILTER_HPP_INCLUDED_

// ISO C++ 98 headers.
#include <vector>
#include <string>
#include <cstring>
#include <cstdio>
#include <iostream>

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
#define FIELD(label, var, type, fmt)            \
    var = 0;
#include "Fields.def"

    std::memset(m_sync_status, 0, sizeof(m_sync_status));

    m_fix_type["NF"] = 0;
    m_fix_type["DR"] = 1;
    m_fix_type["G2"] = 2;
    m_fix_type["G3"] = 3;
    m_fix_type["D2"] = 4;
    m_fix_type["D3"] = 5;
    m_fix_type["RK"] = 6;
    m_fix_type["TT"] = 7;

    printHeader();
  }

  ~Filter(void)
  {
  }

  void
  putGPS(const std::vector<uint8_t>& data)
  {
    if (m_sync_status[0] == 1)
      return;

    std::fflush(m_fd);

    m_sample_msec = 0;

    unsigned off = 0;
    unsigned size = 0;

    for (unsigned i = 0; i < data.size(); ++i)
    {
      if (data[i] == '\n')
      {
        std::string stn((const char*)&data[off], size);
        interpret(stn);
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
  putXMTI(const std::vector<uint8_t>& data, unsigned index)
  {
    if (data.size() < 20)
    {
      std::cerr << "WARNING: XMTI short read: " << data.size() << std::endl;
      dump(data);
      return;
    }

    if (data[2] != 0x32)
    {
      std::cerr << "WARNING: XMTI spurious data." << std::endl;
      dump(data);
      return;
    }

    const uint8_t* ptr = &data[4];
    ByteCopy::fromBE(m_temp0, ptr);
    ByteCopy::fromBE(m_accel_x0, ptr + 4);
    ByteCopy::fromBE(m_accel_y0, ptr + 8);
    ByteCopy::fromBE(m_accel_z0, ptr + 12);
    ByteCopy::fromBE(m_agvel_x0, ptr + 16);
    ByteCopy::fromBE(m_agvel_y0, ptr + 20);
    ByteCopy::fromBE(m_agvel_z0, ptr + 24);
    ByteCopy::fromBE(m_phi0, ptr + 28);
    ByteCopy::fromBE(m_theta0, ptr + 32);
    ByteCopy::fromBE(m_psi0, ptr + 36);
    m_psi0 = (float)Angles::degrees(Angles::normalizeRadian(Angles::radians(m_psi0)));
  }

  void
  putLIMU(const std::vector<uint8_t>& data, unsigned index)
  {
    if (data.size() != 38)
    {
      std::cerr << "WARNING: LIMU short read: " << data.size() << std::endl;
      dump(data);
      return;
    }

    if ((data[0] != 0x2c) || (data[1] != 0x22) || (data[2] != 0x05))
    {
      std::cerr << "WARNING: LIMU spurious data." << std::endl;
      dump(data);
      return;
    }

    int16_t s16;

    const uint8_t* ptr = &data[3];
    ByteCopy::fromLE(s16, ptr);

    // Gyros.
    ByteCopy::fromLE(s16, ptr + 2);
    m_agvel_x1 = (float)s16 * 0.02f;
    ByteCopy::fromLE(s16, ptr + 4);
    m_agvel_y1 = (float)s16 * 0.02f;
    ByteCopy::fromLE(s16, ptr + 6);
    m_agvel_z1 = (float)s16 * 0.02f;

    // Acceleration.
    ByteCopy::fromLE(s16, ptr + 8);
    double accl_x = s16 * 0.0008f;
    m_accel_x1 = (float)accl_x * 9.7982543981f;
    ByteCopy::fromLE(s16, ptr + 10);
    double accl_y = s16 * 0.0008f;
    m_accel_y1 = (float)accl_y * 9.7982543981f;
    ByteCopy::fromLE(s16, ptr + 12);
    double accl_z = s16 * 0.0008f;
    m_accel_z1 = (float)accl_z * 9.7982543981f;

    // Magnetometer.
    ByteCopy::fromLE(s16, ptr + 26);
    double magn_x = s16 * 0.0001f;
    ByteCopy::fromLE(s16, ptr + 28);
    double magn_y = s16 * 0.0001f;
    ByteCopy::fromLE(s16, ptr + 30);
    double magn_z = s16 * 0.0001f;

    // Temperature.
    ByteCopy::fromLE(s16, ptr + 32);
    m_temp1 = (float)(s16 * 0.00565) + 25.0f;

    computeLIMU(accl_x, accl_y, accl_z, magn_x, magn_y, magn_z);
  }

  void
  computeLIMU(double a_accl_x, double a_accl_y, double a_accl_z,
              double a_magn_x, double a_magn_y, double a_magn_z)
  {
    using namespace std;

    double accl_x = a_accl_x;
    double accl_y = a_accl_y;
    double accl_z = a_accl_z;

    // Compute roll (phi).
    double phi = atan2(accl_y, sqrt(accl_x * accl_x + accl_z * accl_z));
    m_phi1 = (float)Angles::degrees(phi);

    // Compute pitch (theta).
    double theta = atan2(-accl_x, accl_z);
    m_theta1 = (float)Angles::degrees(theta);

    double Xh = a_magn_x * cos(theta) + a_magn_z * sin(theta);
    double Yh = a_magn_x * sin(phi) * sin(theta) + a_magn_y * cos(phi) - a_magn_z * sin(phi) * cos(theta);
    m_psi1 = -(float)Angles::degrees(Angles::normalizeRadian(atan2(Yh, Xh)));
  }

  void
  dump(const std::vector<uint8_t>& data)
  {
    using namespace std;
    for (unsigned i = 0; i < data.size(); ++i)
      fprintf(stderr, "%02X ", data[i]);
    fprintf(stderr, "\n");
  }

  void
  printHeader(void)
  {
    using namespace std;

    fprintf(m_fd,
            "Sync_Lost" "\t"
            "Index"
#define FIELD(label, var, type, fmt) "\t" label
#include "Fields.def"
            "\r\n"
            );

    fflush(m_fd);
  }

  void
  print(unsigned index)
  {
    using namespace std;

    m_utc_tow = (m_utc_tow_msec + (index * 10)) / 1000.0;
    m_utc_second = (m_utc_second_msec + (index * 10)) / 1000.0;

    fprintf(m_fd,
            "%u" "\t"
            "%u"
#define FIELD(label, var, type, fmt) "\t" fmt
#include "Fields.def"
            "\r\n",
            m_sync_status[index],
            index
#define FIELD(label, var, type, fmt) , var
#include "Fields.def"
            );

    m_sample_msec += 10;
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
    if (stn.size() < 5)
      return;

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
      std::cerr << sanitize(stn) << std::endl;
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
      m_utc_second_msec = static_cast<unsigned>(s * 1000);
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
      m_utc_tow_msec = static_cast<unsigned>(tow * 1000);
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
      std::cerr << "WARNING: invalid PUBX,00 sentence\n" << std::endl;
      return;
    }

    // Navigation status.
    std::map<std::string, unsigned>::iterator itr = m_fix_type.find(parts[8]);
    if (itr == m_fix_type.end())
      m_nav_status = 99;
    else
      m_nav_status = itr->second;

    readLatitude(parts[3], parts[4], m_lat);
    readLongitude(parts[5], parts[6], m_lon);
    readNumber(parts[7], m_height);
    readDecimal(parts[18], m_sats);

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
  //! Fix type.
  std::map<std::string, unsigned> m_fix_type;

#define FIELD(label, var, type, fmt)            \
  type var;
#include "Fields.def"
};

#endif
