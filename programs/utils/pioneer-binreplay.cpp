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

static double time_origin_ms = -1;

static double
timeAndPaceProgress(uint32_t msg_ts_ms, double speed)
{
  if (time_origin_ms < 0)
  {
    time_origin_ms = msg_ts_ms;
  }

  if (speed <= 0)
  {
    now_sec = DUNE::Time::Clock::getSinceEpoch();
    return now_sec;
  }

  double vtime_ms = msg_ts_ms - time_origin_ms;

  double future_time_sec = 0;

  if (speed > 0)
  {
    future_time_sec = start_time_sec + vtime_ms * 1E-3 / speed;
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
  options.executable("pioneer-binreplay")
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
           "Destination UDP port (defaults to 2010)", "DEST_PORT")
      .add("-s", "--speed",
           "Replay with realtime spacing (default, =1.0). Use 0 for dump all", "SPEED")
      .add("-f", "--file",
           "Telemetry file (can be zipped, bz2 or gzip)", "TELEMETRY_FILE")
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
  int port = 2010;
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
  while (!ifs->eof() && (max_count <= 0 || cur_count < max_count ))
  {
      cur_count++;
      std::cout << std::endl << "________________________________________" << std::endl;
      std::cout << "_____ Message " << cur_count << std::endl;

    // Get the message header.
    ifs->read(&data[0], 2);

    if (ifs->eof())
      return 0;

    uint8_t* buf = (uint8_t*)&data[0];
    switch ((buf[0] << 8) + buf[1])
      {
        case Control::Pioneer::ProtocolMessages::PIONEER_MSG_VERSION_1_TELEMETRY_CODE:
          {
            Control::Pioneer::ProtocolMessages::DataVersion1Telemetry* msgV1Telm;
            msgV1Telm = new Control::Pioneer::ProtocolMessages::DataVersion1Telemetry();
            const int sizeMsg = sizeof(*msgV1Telm);
            //data.resize(sizeMsg);
            ifs->read(&data[2], sizeMsg - 2);
            if (ifs->gcount() < sizeMsg - 2)
              throw DUNE::IMC::BufferTooShort();
            int rb = Control::Pioneer::ProtocolPack::Pack::unpack<Control::Pioneer::ProtocolMessages::DataVersion1Telemetry>(
                NULL, buf, 0, sizeMsg, msgV1Telm);
            if (rb > 0)
            {
              uint32_t  ms_time = msgV1Telm->time;
              double new_time_sec = timeAndPaceProgress(ms_time, speed);
              printf("Time(ms) %d   TimeRT(s) %f", msgV1Telm->time, msgV1Telm->rt_clock);
              msgV1Telm->rt_clock = new_time_sec;
              msgV1Telm->time = (uint32_t)((new_time_sec - start_time_sec) * 1E3);
              printf(" => Time(ms) %d   TimeRT(s) %f\n", msgV1Telm->time, msgV1Telm->rt_clock);
              int dataLength = Control::Pioneer::ProtocolPack::Pack::pack(NULL, msgV1Telm, buf);
              size_t st = sock.write(buf, dataLength, dest, port);
              std::cout << "sent " << st << " bytes of " << dataLength << "" << std::endl;
            }
            DUNE::Memory::clear(msgV1Telm);
          }
          break;
        case Control::Pioneer::ProtocolMessages::PIONEER_MSG_VERSION_2_TELEMETRY_CODE:
          {
            Control::Pioneer::ProtocolMessages::DataVersion2Telemetry* msgV2Telm;
            msgV2Telm = new Control::Pioneer::ProtocolMessages::DataVersion2Telemetry();
            const int sizeMsg = sizeof(*msgV2Telm);
            //data.resize(sizeMsg);
            ifs->read(&data[2], sizeMsg - 2);
            if (ifs->gcount() < sizeMsg - 2)
              throw DUNE::IMC::BufferTooShort();
            int rb = Control::Pioneer::ProtocolPack::Pack::unpack<Control::Pioneer::ProtocolMessages::DataVersion2Telemetry>(
                NULL, buf, 0, sizeMsg, msgV2Telm);
            if (rb > 0)
            {
              uint32_t  ms_time = msgV2Telm->time;
              double new_time_sec = timeAndPaceProgress(ms_time, speed);
              printf("Time(ms) %d   TimeRT(s) %f", msgV2Telm->time, msgV2Telm->rt_clock);
              msgV2Telm->rt_clock = new_time_sec;
              msgV2Telm->time = (uint32_t)((new_time_sec - start_time_sec) * 1E3);
              printf(" => Time(ms) %d   TimeRT(s) %f\n", msgV2Telm->time, msgV2Telm->rt_clock);
              int dataLength = Control::Pioneer::ProtocolPack::Pack::pack(NULL, msgV2Telm, buf);
              size_t st = sock.write(buf, dataLength, dest, port);
              std::cout << "sent " << st << " bytes of " << dataLength << "" << std::endl;
            }
            DUNE::Memory::clear(msgV2Telm);
          }
          break;
        case Control::Pioneer::ProtocolMessages::PIONEER_MSG_VERSION_2_COMPASS_CALIBRATION_CODE:
          {
            Control::Pioneer::ProtocolMessages::DataVersion2Compasscalibration* msgV2CompassCal;
            msgV2CompassCal = new Control::Pioneer::ProtocolMessages::DataVersion2Compasscalibration();
            const int sizeMsg = sizeof(*msgV2CompassCal);
            //data.resize(sizeMsg);
            ifs->read(&data[2], sizeMsg - 2);
            if (ifs->gcount() < sizeMsg - 2)
              throw DUNE::IMC::BufferTooShort();
            int rb = Control::Pioneer::ProtocolPack::Pack::unpack<Control::Pioneer::ProtocolMessages::DataVersion2Compasscalibration>(
                NULL, buf, 0, sizeMsg, msgV2CompassCal);
            if (rb > 0)
            {
              sock.write(buf, sizeMsg, dest, port);
            }
            DUNE::Memory::clear(msgV2CompassCal);
          }
          break;
        default:
          std::cout << "skip msg\n";
          break;
      }

    if (ifs->gcount() < 2)
      throw DUNE::IMC::BufferTooShort();
  }

  return 0;
}
