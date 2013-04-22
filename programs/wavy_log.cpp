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
// Author: Pedro Calado                                                     *
//***************************************************************************

// ISO C++ 98 headers.
#include <string>
#include <fstream>
#include <ctime>

// DUNE headers.
#include <DUNE/DUNE.hpp>

//! Size in bytes of a record.
#define LOG_REC_SIZE         (64)

using DUNE_NAMESPACES;

struct log_rec
{
  //! Record type.
  uint8_t id;
  //! Cookie.
  uint16_t cookie;
  //! Record size.
  uint8_t size;
  //! Data.
  uint8_t data[LOG_REC_SIZE - 5];
  //! CRC8.
  uint8_t crc;
};

struct date
{
  /** Year (starting from 2000), wraps around in 2255. */
  uint8_t year;
  /** Month. */
  uint8_t month;
  /** Day of the month. */
  uint8_t day;
  /** Hour of the day. */
  uint8_t hour;
  /** Minute of the hour. */
  uint8_t minute;
  /** Second of the minute. */
  uint8_t second;
};

//! GPS fix structure.
struct gps_fix
{
  //! Device Id.
  uint8_t id;
  //! WGS84 Latitude.
  int32_t latitude;
  //! WGS84 Longitude.
  int32_t longitude;
  //! MSL height.
  int32_t height;
  //! Ground speed.
  int32_t speed;
  //! Heading.
  int32_t heading;
  //! Satellites in view.
  uint8_t satellites;
  //! Fix validity.
  uint8_t validity;
  //! Horizontal dilution of precision.
  uint16_t hdop;
  //! Estimated position error.
  uint16_t epe;
  //! UTC date/time.
  struct date utc;
};

bool
getString(std::ifstream& ifs, std::string& str)
{
  if (ifs.eof())
    return false;

  ifs >> str;

  return true;
}

bool
getChar(std::ifstream& ifs, char& c)
{
  if (ifs.eof())
    return false;

  ifs >> c;

  return true;
}

bool
getU8(std::ifstream& ifs, uint8_t& d)
{
  if (ifs.eof())
    return false;

  unsigned u;

  ifs >> u;

  d = (uint8_t)u;

  return true;
}

bool
getU16(std::ifstream& ifs, uint16_t& d)
{
  if (ifs.eof())
    return false;

  ifs >> d;

  return true;
}

bool
cleanHex(std::ifstream& ifs)
{
  if (ifs.eof())
    return false;

  char c;

  ifs >> c;

  if (c != '0')
    return false;

  ifs >> c;

  if (c != 'x')
    return false;

  return true;
}

bool
getHex(std::ifstream& ifs, uint8_t& d)
{
  std::string s;

  ifs >> s;

  int e = sscanf(s.c_str(), "%x", (unsigned int*)&d);

  if (e != 1)
    return false;

  return true;
}

bool
getHexPrefixed(std::ifstream& ifs, uint8_t& d)
{
  if (!cleanHex(ifs))
    return false;

  if (!getHex(ifs, d))
    return false;

  return true;
}

bool
getCookie(std::ifstream& ifs, uint16_t& d)
{
  std::string s;

  ifs >> s;

  uint16_t temp;

  int e = sscanf(s.c_str(), "%x", (unsigned int*)&d);

  if (e != 1)
    return false;

  return true;
}

bool
getData(std::ifstream& ifs, uint8_t* data, uint8_t size)
{
  char c;

  if (!getChar(ifs, c))
    return false;

  if (c != '[')
    return false;

  for (unsigned i = 0; i < size; ++i)
  {
    if (!getHex(ifs, data[i]))
      return false;
  }

  if (!getChar(ifs, c))
    return false;

  if (c != ']')
    return false;

  return true;
}

bool
readRecord(std::ifstream& ifs, log_rec& rec)
{
  std::string sample;

  // ID

  if (!getString(ifs, sample))
    return false;

  if (strcmp(sample.c_str(), "ID") != 0)
    return false;

  char c;

  if (!getChar(ifs, c))
    return false;

  if (c != ':')
    return false;

  if (!getHexPrefixed(ifs, rec.id))
    return false;

  // COOKIE

  if (!getString(ifs, sample))
    return false;

  if (strcmp(sample.c_str(), "COOKIE") != 0)
    return false;

  if (!getChar(ifs, c))
    return false;

  if (c != ':')
    return false;

  if (!getCookie(ifs, rec.cookie))
    return false;

  // SIZE

  if (!getString(ifs, sample))
    return false;

  if (strcmp(sample.c_str(), "SIZE") != 0)
    return false;

  if (!getChar(ifs, c))
    return false;

  if (c != ':')
    return false;

  if (!getU8(ifs, rec.size))
    return false;

  // DATA

  if (!getString(ifs, sample))
    return false;

  if (strcmp(sample.c_str(), "DATA") != 0)
    return false;

  if (!getChar(ifs, c))
    return false;

  if (c != ':')
    return false;

  if (!getData(ifs, rec.data, rec.size))
    return false;

  // CRC

  if (!getString(ifs, sample))
    return false;

  if (strcmp(sample.c_str(), "CRC") != 0)
    return false;

  if (!getChar(ifs, c))
    return false;

  if (c != ':')
    return false;

  if (!getHexPrefixed(ifs, rec.crc))
    return false;

  return true;
}

void
convertDataToFix(uint8_t* data, uint8_t size, gps_fix* fix)
{
  fix->id = data[0];
  fix->latitude = *(int32_t*)&data[1];
  fix->longitude = *(int32_t*)&data[5];
  fix->height = *(int32_t*)&data[9];
  fix->speed = *(int32_t*)&data[13];
  fix->heading = *(int32_t*)&data[17];
  fix->satellites = data[21];
  fix->validity = data[22];
  fix->hdop = *(uint16_t*)&data[23];
  fix->epe = *(uint16_t*)&data[25];
  fix->utc.year = data[27];
  fix->utc.month = data[28];
  fix->utc.day = data[29];
  fix->utc.hour = data[30];
  fix->utc.minute = data[31];
  fix->utc.second = data[32];
}

void
convertFixToIMC(gps_fix* fix, IMC::GpsFix* msg)
{
  msg->setSourceEntity(fix->id);
  msg->validity = (IMC::GpsFix::GFV_VALID_DATE | IMC::GpsFix::GFV_VALID_TIME |
                   IMC::GpsFix::GFV_VALID_POS | IMC::GpsFix::GFV_VALID_COG |
                   IMC::GpsFix::GFV_VALID_SOG | IMC::GpsFix::GFV_VALID_HDOP);

  msg->type = 0;

  msg->utc_year = fix->utc.year;
  msg->utc_month = fix->utc.month;
  msg->utc_day = fix->utc.day;
  msg->utc_time = (float)(fix->utc.second + fix->utc.minute * 60 + fix->utc.hour * 60 * 60);
  msg->lat = Angles::radians((float)fix->latitude / 1e6);
  msg->lon = Angles::radians((float)fix->longitude / 1e6);
  msg->height = (float)fix->height / 100.0;
  msg->satellites = fix->satellites;
  msg->cog = Angles::radians((float)fix->heading / 100.0);
  msg->sog = (float)fix->speed / 3600.0 * 1000.0;
  msg->hdop = (float)fix->hdop / 100.0;
  msg->hacc = (float)fix->epe / 100.0;
}

void
gps_fix_print(const gps_fix* fix)
{
  std::cerr << "id: " << (unsigned)fix->id << std::endl
            << "lat: " << (int)fix->latitude << std::endl
            << "lon: " << (int)fix->longitude << std::endl
            << "height: " << (int)fix->height << std::endl
            << "speed: " << (int)fix->speed << std::endl
            << "heading: " << (int)fix->heading << std::endl
            << "satellites: " << (unsigned)fix->satellites << std::endl
            << "validity: " << (unsigned)fix->validity << std::endl
            << "hdop: " << (unsigned)fix->hdop << std::endl
            << "epe: " << (unsigned)fix->epe << std::endl
            << "year: " << (unsigned)fix->utc.year << std::endl
            << "month: " << (unsigned)fix->utc.month << std::endl
            << "day: " << (unsigned)fix->utc.day << std::endl
            << "hour: " << (unsigned)fix->utc.hour << std::endl
            << "minute: " << (unsigned)fix->utc.minute << std::endl
            << "second: " << (unsigned)fix->utc.second << std::endl
            << std::endl;
}

time_t
toEpoch(date* d)
{
  std::tm tcal;
  tcal.tm_sec = d->second;
  tcal.tm_min = d->minute;
  tcal.tm_hour = d->hour;
  tcal.tm_mday = d->day;
  tcal.tm_mon = d->month - 1;
  tcal.tm_year = d->year;

  return mktime(&tcal);
}

int
main(int argc, char** argv)
{
  // Parse command line arguments.
  if (argc != 2)
  {
    std::cerr << "Usage: " << argv[0] << " <path_to_file>" << std::endl;
    std::cerr << "This program expects a wavy debug file" << std::endl;
    return 1;
  }

  std::ifstream ifs(argv[1], std::ifstream::in);

  if (!ifs.good())
  {
    std::cerr << "failed to open file" << std::endl;
    return 1;
  }

  std::string sample;

  std::vector<log_rec> records;

  bool success = true;

  while (!ifs.eof())
  {
    ifs >> sample;

    if (strcmp(sample.c_str(), "RECORD") == 0)
    {
      log_rec rec;

      if (!readRecord(ifs, rec))
      {
        success = false;
        break;
      }

      records.push_back(rec);
    }
  }

  if (!records.size())
    std::cerr << "Unable to find a match" << std::endl;

  if (!success)
    std::cerr << "Parsing was unsuccessful" << std::endl;
  else
    std::cerr << "Parsing was successful. Got " << records.size() << " records." << std::endl;
  ifs.close();

  // Converting to GPS Fix

  std::vector<IMC::GpsFix> fixes;

  std::ofstream lsf("WavyLog.lsf", std::ios::binary);

  ByteBuffer buffer;

  if (records.size() >= 5)
  {
    IMC::EstimatedState state;
    IMC::GpsFix imcfix;
    gps_fix temp_fix;
    convertDataToFix(records[4].data, records[4].size, &temp_fix);
    convertFixToIMC(&temp_fix, &imcfix);

    state.lat = imcfix.lat;
    state.lon = imcfix.lon;
    state.height = imcfix.height;
    state.x = 0.0;
    state.y = 0.0;
    state.z = 0.0;
    state.depth = 0.0;

    state.setTimeStamp(toEpoch(&temp_fix.utc));

    IMC::Packet::serialize(&state, buffer);
    lsf.write(buffer.getBufferSigned(), buffer.getSize());
  }

  for (unsigned i = 0; i < records.size(); ++i)
  {
    gps_fix fix;

    convertDataToFix(records[i].data, records[i].size, &fix);

    IMC::GpsFix msg;

    convertFixToIMC(&fix, &msg);

    msg.setTimeStamp(toEpoch(&fix.utc));

    fixes.push_back(msg);

    IMC::Packet::serialize(&msg, buffer);
    lsf.write(buffer.getBufferSigned(), buffer.getSize());
  }

  return 0;
}
