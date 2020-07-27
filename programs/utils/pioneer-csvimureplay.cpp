//***************************************************************************
// Copyright 2007-2020 Universidade do Porto - Faculdade de Engenharia      *
// Laboratório de Sistemas e Tecnologia Subaquática (LSTS)                  *
//***************************************************************************
// This file is part of DUNE: Unified Navigation Environment.               *
//                                                                          *
// Commercial Licence Usage                                                 *
// Licencees holding valid commercial DUNE licences may use this file in    *
// accordance with the commercial licence agreement provided with the       *
// Software or, alternatively, in accordance with the terms contained in a  *
// written agreement between you and Faculdade de Engenharia da             *
// Universidade do Porto. For licensing terms, conditions, and further      *
// information contact lsts@fe.up.pt.                                       *
//                                                                          *
// Modified European Union Public Licence - EUPL v.1.1 Usage                *
// Alternatively, this file may be used under the terms of the Modified     *
// EUPL, Version 1.1 only (the "Licence"), appearing in the file LICENCE.md *
// included in the packaging of this file. You may not use this work        *
// except in compliance with the Licence. Unless required by applicable     *
// law or agreed to in writing, software distributed under the Licence is   *
// distributed on an "AS IS" basis, WITHOUT WARRANTIES OR CONDITIONS OF     *
// ANY KIND, either express or implied. See the Licence for the specific    *
// language governing permissions and limitations at                        *
// https://github.com/LSTS/dune/blob/master/LICENCE.md and                  *
// http://ec.europa.eu/idabc/eupl.html.                                     *
//***************************************************************************
// Author: Paulo Dias                                                       *
//***************************************************************************

#include <DUNE/DUNE.hpp>
#include "Control/Pioneer/ProtocolMessages.hpp"
#include "Control/Pioneer/ProtocolPack.hpp"

//using DUNE_NAMESPACES;

static double start_time_sec = DUNE::Time::Clock::getSinceEpoch();
static double now_sec = start_time_sec;

static long time_origin_nano = -1;

static double
timeAndPaceProgress(long msg_ts_nano, double speed)
{
  if (time_origin_nano < 0)
  {
      time_origin_nano = msg_ts_nano;
  }

  if (speed <= 0)
  {
    now_sec = DUNE::Time::Clock::getSinceEpoch();
    return now_sec;
  }

  double vtime_nano = msg_ts_nano - time_origin_nano;

  double future_time_sec = 0;

  if (speed > 0)
  {
    future_time_sec = start_time_sec + vtime_nano * 1E-9 / speed;
    double delay_time = (future_time_sec - now_sec);
    if (delay_time > 0)
      DUNE::Time::Delay::wait(delay_time);
  }
  now_sec = DUNE::Time::Clock::getSinceEpoch();
  return now_sec;
}

int
main(int argc, char** argv)
{
  DUNE::Utils::OptionParser options;
  options.executable("pioneer-csvimureplay")
      .program(DUNE_SHORT_NAME)
      .copyright(DUNE_COPYRIGHT)
      .email(DUNE_CONTACT)
      .version(DUNE::getFullVersion())
      .date(DUNE::getCompileDate())
      .arch(DUNE_SYSTEM_NAME)
      .description("Utility to replay Blueye Pioneer's binary telemetry data.")
      .add("-d", "--dest",
           "Destination IP (defaults to 127.0.0.1)", "DEST_IP")
      .add("-p", "--port",
           "Destination UDP port (defaults to 6002)", "DEST_PORT")
      .add("-s", "--speed",
           "Replay with realtime spacing (default, =1.0). Use 0 for dump all", "SPEED")
      .add("-f", "--file",
           "CSV IMU file (can be zipped, bz2 or gzip)", "TELEMETRY_FILE")
      .add("-c", "--count",
           "Replay only c messages (default to all). Use 0 for dump all", "COUNT")
      .add("-t", "--timestart",
           "To start at next matching sec on the next minute upon start", "TIME_START")
      .add("-x", "--timehold",
           "Extra decimal seconds to hold before start", "TIME_HOLD");

  // Parse command line arguments.
  if (!options.parse(argc, argv))
  {
    if (options.bad())
      std::cerr << "ERROR: " << options.error() << std::endl;
    options.usage();
    return 1;
  }

  // Get Pioneer bin file.
  std::string bin_file_path = options.value("--file");
  if (bin_file_path.empty())
  {
    std::cerr << "ERROR: you must specify one bin file." << std::endl;
    return 1;
  }

  // Get specified dest IP.
  DUNE::Network::Address dest;
  if (options.value("--dest") != "")
  {
    try
    {
      DUNE::castLexical(options.value("--dest"), dest);
      // destination_address = new Address(options.value("--ip").c_str());
    }
    catch (...)
    {
      std::cerr << "ERROR: invalid IP." << std::endl;
      return 1;
    }
  }
  else
  {
    DUNE::castLexical("127.0.0.1", dest);
  }

  // Get specified dest UDP port.
  int port = 6002;
  if (DUNE::castLexical(options.value("--port"), port))
  {
    if (port < 1 && port > 65535)
    {
      std::cerr << "ERROR: invalid port." << std::endl;
      return 1;
    }
  }

  // Get specified dest UDP port.
  double speed = 1;
  if (options.value("--speed") != "" && !DUNE::castLexical(options.value("--speed"), speed))
  {
    std::cerr << "ERROR: invalid option for speed." << std::endl;
    return 1;
  }
  if (speed < 0)
  {
    std::cerr << "ERROR: invalid option for speed (should be >= 0.0." << std::endl;
    return 1;
  }

  uint64_t max_count = 0;
  uint64_t cur_count = 0;
  DUNE::castLexical(options.value("--count"), max_count);

  uint16_t hold_start_for_next_sec = 0;
  DUNE::castLexical(options.value("--timestart"), hold_start_for_next_sec);

  double timehold_sec = 0;
  if (options.value("--timehold") != "" && !DUNE::castLexical(options.value("--timehold"), timehold_sec))
  {
    std::cerr << "ERROR: invalid option for timehold." << std::endl;
    return 1;
  }
  if (timehold_sec < 0)
  {
    std::cerr << "ERROR: invalid option for timehold (should be >= 0.0." << std::endl;
    return 1;
  }

  DUNE::FileSystem::Path file(bin_file_path);
  std::istream* ifs;

  if (!file.isFile())
  {
    std::cerr << file << " does not exist" << std::endl;
    return 1;
  }

  DUNE::Compression::Methods method = DUNE::Compression::Factory::detect(file.c_str());
  if (method == DUNE::Compression::Methods::METHOD_UNKNOWN)
    ifs = new std::ifstream(file.c_str(), std::ios::binary);
  else
    ifs = new DUNE::Compression::FileInput(file.c_str(), method);

  DUNE::Network::UDPSocket sock;

  std::vector<char> data;

  printf("Extra hold of %f s\n", timehold_sec);

  if (hold_start_for_next_sec > 0)
  {
    double ht = DUNE::Time::Clock::getSinceEpoch();
    printf("Hold  %d %f ", hold_start_for_next_sec, ht);
    ht = DUNE::Math::round(ht);
    printf("%f %d", ht, (int)((long)ht % 60));
    int r = (long)ht % 60;
    ht += r > hold_start_for_next_sec ? 60 - r + hold_start_for_next_sec : hold_start_for_next_sec - r;
    printf("  %f + %f s\n", ht, timehold_sec);
    double delay = ht - DUNE::Time::Clock::getSinceEpoch() + timehold_sec;
    if (delay > 0)
      DUNE::Time::Delay::wait(delay);
  }
  else
  {
    if (timehold_sec > 0)
      DUNE::Time::Delay::wait(timehold_sec);
  }

  data.resize(512);
  std::string line = "";
  while (!ifs->eof() && (max_count <= 0 || cur_count < max_count ))
  {
    std::getline(*ifs, line);

    if (line.c_str()[0] == '%')
      continue;

    cur_count++;
    std::cout << std::endl << "________________________________________" << std::endl;
    std::cout << "_____ Message " << cur_count << std::endl;

    uint8_t* buf = (uint8_t*)&data[0];

    long time_nanos;
    double field_accelerometer_x;
    double field_accelerometer_y;
    double field_accelerometer_z;
    double field_gyro_x;
    double field_gyro_y;
    double field_gyro_z;
    double field_compass_x;
    double field_compass_y;
    double field_compass_z;
    double field_temperature;

    // %time,field.accelerometer.x,field.accelerometer.y,field.accelerometer.z,field.gyro.x,field.gyro.y,field.gyro.z,field.compass.x,field.compass.y,field.compass.z,field.temperature
    int rv = std::sscanf(line.c_str(),"%ld,%lf,%lf,%lf,%lf,%lf,%lf,%lf,%lf,%lf,%lf",
        &time_nanos, &field_accelerometer_x, &field_accelerometer_y, &field_accelerometer_z,
        &field_gyro_x, &field_gyro_y, &field_gyro_z,
        &field_compass_x, &field_compass_y, &field_compass_z,
        &field_temperature);

    std::cout << "_____ Line " << line << std::endl;
    std::cout << "_____ Read " << rv << " elements" << std::endl;

    if (rv != 11)
    {
      continue;
    }

    printf("_____ time(ns)= %ld | accel_x=%lf | accel_y=%lf | accel_z=%lf | gyro_x=%lf | gyro_y=%lf | gyro_z=%lf | compass_x=%lf | compass_y=%lf | compass_z=%lf | temp=%lf\r\n",
             time_nanos, field_accelerometer_x, field_accelerometer_y, field_accelerometer_z,
             field_gyro_x, field_gyro_y, field_gyro_z,
             field_compass_x, field_compass_y, field_compass_z,
             field_temperature);

    double new_time_sec = timeAndPaceProgress(time_nanos, speed);
    printf("Timestamp(sec) %lf s for sent messages.\n", new_time_sec);
  }

  return 0;
}
