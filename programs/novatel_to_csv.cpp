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

// Unix headers.
#include <sys/mman.h>

// ISO C++ 98 headers.
#include <iostream>
#include <fstream>

// SQLite3 headers.
#include <sqlite3/sqlite3.h>

// DUNE headers.
#include <DUNE/DUNE.hpp>
using DUNE_NAMESPACES;

void
execute(sqlite3* db, const char* sql)
{
  char* err = 0;
  int rv = sqlite3_exec(db, sql, NULL, 0, &err);
  if (rv != SQLITE_OK)
  {
    fprintf(stderr, "ERROR: SQL: %s\n", err);
    sqlite3_free(err);
  }
}

void
executeSTMT(sqlite3_stmt* stmt)
{
  sqlite3_step(stmt);
  sqlite3_clear_bindings(stmt);
  sqlite3_reset(stmt);
}

unsigned
getMonth(const std::string& month)
{
  if (month == "JAN") return 0;
  if (month == "FEB") return 1;
  if (month == "MAR") return 2;
  if (month == "APR") return 3;
  if (month == "MAY") return 4;
  if (month == "JUN") return 5;
  if (month == "JUL") return 6;
  if (month == "AUG") return 7;
  if (month == "SEP") return 8;
  if (month == "OCT") return 9;
  if (month == "NOV") return 10;
  if (month == "DEC") return 11;
  throw std::runtime_error(String::str("unknown month: %s", month.c_str()));
}

void
processSonar(sqlite3_stmt* insert_sonar)
{
  int fd = open("Data.83P", O_RDWR);
  if (fd == -1)
  {
    std::fprintf(stderr, "ERROR: failed to open file.\n");
    exit(1);
  }

  unsigned count = 0;
  unsigned shot_count = 0;
  off_t size = Path("Data.83P").size();
  off_t offset = 0;
  uint8_t* mem = (uint8_t*)mmap(0, size, PROT_READ, MAP_SHARED, fd, 0);

  while (offset < size)
  {
    if (mem[offset] != '8' || mem[offset + 1] != '3' || mem[offset + 2] != 'P')
    {
      fprintf(stderr, "ERROR: invalid header\n");
      break;
    }

    ++shot_count;

    unsigned total_bytes = mem[offset + 5] | mem[offset + 4] << 8;

    tm tm_time = {0};
    char month_str[16] = {0};
    double milli = 0;

    sscanf((char*)&mem[offset + 8], "%d-%[^-]-%d", &tm_time.tm_mday, month_str, &tm_time.tm_year);
    tm_time.tm_mon = getMonth(month_str);
    tm_time.tm_year -= 1900;
    sscanf((char*)&mem[offset + 20], "%d:%d:%d", &tm_time.tm_hour, &tm_time.tm_min, &tm_time.tm_sec);
    sscanf((char*)&mem[offset + 29], "%lf", &milli);

    time_t time = timegm(&tm_time);
    double tstamp = time;
    tstamp += milli;
    float altitude = 0;
    ByteCopy::fromLE(altitude, &mem[offset + 133]);

    float pitch = ((((mem[offset + 64] & 0x7F) << 8)
                    | mem[offset + 65])
                   - 900);
    pitch /= 10;

    float roll = ((((mem[offset + 66] & 0x7F) << 8)
                   | mem[offset + 67])
                  - 900);
    roll /= 10;

    float yaw = (((mem[offset + 68] & 0x7F) << 8)
                 | mem[offset + 69]);
    yaw /= 10;

    sqlite3_bind_double(insert_sonar, 1, tstamp);
    sqlite3_bind_double(insert_sonar, 2, roll);
    sqlite3_bind_double(insert_sonar, 3, pitch);
    sqlite3_bind_double(insert_sonar, 4, yaw);
    sqlite3_bind_double(insert_sonar, 5, altitude);

    executeSTMT(insert_sonar);

    offset += total_bytes;
  }

  munmap(mem, size);
  close(fd);
}

int
main(int argc, char** argv)
{
  char bfr[1024 * 10];

  const char* data_lsf = "Data.lsf.gz";

  std::istream* is = 0;
  Compression::Methods method = Compression::Factory::detect(data_lsf);
  if (method == METHOD_UNKNOWN)
    is = new std::ifstream(data_lsf, std::ios::binary);
  else
    is = new Compression::FileInput(data_lsf, method);

  DUNE::IMC::Message* msg = NULL;
  int eid = -1;

  sqlite3* db = NULL;
  int rv = sqlite3_open("data.db", &db);
  if (rv)
  {
    fprintf(stderr, "ERROR: can't open database: %s\n", sqlite3_errmsg(db));
    return 1;
  }

  // Create sound speed table.
  execute(db, "CREATE TABLE IF NOT EXISTS sound_speed("
          "sound_speed_time REAL PRIMARY KEY NOT NULL,"
          "sound_speed_value REAL NOT NULL);");

  std::string sql = "INSERT INTO sound_speed VALUES(?, ?)";
  sqlite3_stmt* insert_sound = NULL;
  sqlite3_prepare_v2(db, sql.c_str(), sql.size() + 1, &insert_sound, NULL);

  // Create novatel table.
  execute(db, "CREATE TABLE IF NOT EXISTS novatel("
          "novatel_time REAL PRIMARY KEY NOT NULL,"
          "novatel_data TEXT);");

  sql = "INSERT INTO novatel VALUES(?, ?)";
  sqlite3_stmt* insert_novatel = NULL;
  sqlite3_prepare_v2(db, sql.c_str(), sql.size() + 1, &insert_novatel, NULL);

  // Create ZDA table.
  execute(db, "CREATE TABLE IF NOT EXISTS zda("
          "zda_time REAL PRIMARY KEY NOT NULL,"
          "zda_data TEXT);");

  sql = "INSERT INTO zda VALUES(?, ?)";
  sqlite3_stmt* insert_zda = NULL;
  sqlite3_prepare_v2(db, sql.c_str(), sql.size() + 1, &insert_zda, NULL);

  // Create sonar table.
  execute(db, "CREATE TABLE IF NOT EXISTS sonar("
          "sonar_time REAL PRIMARY KEY NOT NULL,"
          "sonar_roll REAL,"
          "sonar_pitch REAL,"
          "sonar_yaw REAL,"
          "sonar_alt REAL);");

  sql = "INSERT INTO sonar VALUES(?, ?, ?, ?, ?)";
  sqlite3_stmt* insert_sonar = NULL;
  sqlite3_prepare_v2(db, sql.c_str(), sql.size() + 1, &insert_sonar, NULL);

  sqlite3_exec(db, "BEGIN TRANSACTION", NULL, NULL, NULL);

  processSonar(insert_sonar);

  try
  {
    while ((msg = DUNE::IMC::Packet::deserialize(*is)) != 0)
    {
      if (msg->getId() == DUNE_IMC_ENTITYINFO)
      {
        DUNE::IMC::EntityInfo* m = dynamic_cast<DUNE::IMC::EntityInfo*>(msg);
        if (m->label == "GPS")
          eid = m->id;
      }
      else if (msg->getId() == DUNE_IMC_DEVDATATEXT)
      {
        if (eid == msg->getSourceEntity())
        {
          DUNE::IMC::DevDataText* m = dynamic_cast<DUNE::IMC::DevDataText*>(msg);
          if (String::startsWith(m->value, "#RANGEA"))
          {
            std::string data = String::trim(m->value);
            sqlite3_bind_double(insert_novatel, 1, m->getTimeStamp());
            sqlite3_bind_text(insert_novatel, 2, data.c_str(), data.size(), SQLITE_TRANSIENT);
            executeSTMT(insert_novatel);
          }
          else if (String::startsWith(m->value, "$GPZDA"))
          {
            std::string data = String::trim(m->value);
            sqlite3_bind_double(insert_zda, 1, m->getTimeStamp());
            sqlite3_bind_text(insert_zda, 2, data.c_str(), data.size(), SQLITE_TRANSIENT);
            executeSTMT(insert_zda);
          }
        }
      }
      else if (msg->getId() == DUNE_IMC_SOUNDSPEED)
      {
        DUNE::IMC::SoundSpeed* m = dynamic_cast<DUNE::IMC::SoundSpeed*>(msg);
        sqlite3_bind_double(insert_sound, 1, m->getTimeStamp());
        sqlite3_bind_double(insert_sound, 2, m->value);
        executeSTMT(insert_sound);
      }

      delete msg;
    }
  }
  catch (std::runtime_error& e)
  {
    std::cerr << "ERROR: " << e.what() << std::endl;
  }

  delete is;

  sqlite3_exec(db, "END TRANSACTION", NULL, NULL, NULL);
  sqlite3_close(db);
  return 0;
}
