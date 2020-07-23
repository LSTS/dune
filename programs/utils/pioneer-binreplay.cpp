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
      .add("-d", "--ip",
           "Destination IP", "DEST_IP")
      .add("-p", "--port",
           "Destination UDP port", "DEST_PORT")
      .add("-r", "--realtime",
           "Replay with realtime spacing", "REALTIME")
      .add("-f", "--file",
           "Telemetry file", "TELEMETRY_FILE");

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
  try
    {
      DUNE::castLexical(options.value("--ip"), dest);
      // destination_address = new Address(options.value("--ip").c_str());
    }
  catch (...)
    {
      std::cerr << "ERROR: invalid IP." << std::endl;
      return 1;
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
  bool realtime = false;
  if (DUNE::castLexical(options.value("--realtime"), realtime))
    {
      std::cerr << "ERROR: invalid option for realtime." << std::endl;
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

  while (!ifs->eof())
  {
    // Get the message header.
    data.resize(2);
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
            data.resize(sizeMsg);
            ifs->read(&data[2], sizeMsg - 2);
            if (ifs->gcount() < sizeMsg - 2)
              throw DUNE::IMC::BufferTooShort();
            int rb = Control::Pioneer::ProtocolPack::Pack::unpack<Control::Pioneer::ProtocolMessages::DataVersion1Telemetry>(
                NULL, buf, 0, sizeMsg, msgV1Telm);
            if (rb > 0)
            {
              uint32_t  ms_time = msgV1Telm->time;
              size_t  st = sock.write((uint8_t*)&data[0], sizeMsg, dest, port);
              std::cout << "sent " << st << std::endl;
            }
            DUNE::Memory::clear(msgV1Telm);
          }
          break;
        case Control::Pioneer::ProtocolMessages::PIONEER_MSG_VERSION_2_TELEMETRY_CODE:
          {
            Control::Pioneer::ProtocolMessages::DataVersion2Telemetry* msgV2Telm;
            msgV2Telm = new Control::Pioneer::ProtocolMessages::DataVersion2Telemetry();
            const int sizeMsg = sizeof(*msgV2Telm);
            data.resize(sizeMsg);
            ifs->read(&data[2], sizeMsg - 2);
            if (ifs->gcount() < sizeMsg - 2)
              throw DUNE::IMC::BufferTooShort();
            int rb = Control::Pioneer::ProtocolPack::Pack::unpack<Control::Pioneer::ProtocolMessages::DataVersion2Telemetry>(
                NULL, buf, 0, sizeMsg, msgV2Telm);
            if (rb > 0)
            {
              uint32_t  ms_time = msgV2Telm->time;
              size_t st = sock.write(buf, sizeMsg, dest, port);
              std::cout << "sent " << st << std::endl;
            }
            DUNE::Memory::clear(msgV2Telm);
          }
          break;
        case Control::Pioneer::ProtocolMessages::PIONEER_MSG_VERSION_2_COMPASS_CALIBRATION_CODE:
          {
            Control::Pioneer::ProtocolMessages::DataVersion2Compasscalibration* msgV2CompassCal;
            msgV2CompassCal = new Control::Pioneer::ProtocolMessages::DataVersion2Compasscalibration();
            const int sizeMsg = sizeof(*msgV2CompassCal);
            data.resize(sizeMsg);
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
