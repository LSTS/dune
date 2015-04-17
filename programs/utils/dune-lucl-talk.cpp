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
// Author: Renato Caldas                                                    *
//***************************************************************************

#include <DUNE/DUNE.hpp>
using DUNE_NAMESPACES;

void
handleReply(LUCL::Protocol& proto)
{
  unsigned retries = 5;

  // Wait for the result
  while (retries)
  {
    LUCL::Command cmd;
    LUCL::CommandType type = proto.consumeData(cmd);

    switch (type)
    {
      case LUCL::CommandTypeReset:
        std::cout << "received reset confirmation" << std::endl;
        break;

      case LUCL::CommandTypeNormal:
        // Print the command and the data in a parseable format
        std::cout << "Received packet CMD 0x" << std::hex << (int)cmd.command.code;
        std::cout << " DATA";
        for (int i = 0; i < cmd.command.size; i++)
        {
          std::cout << " 0x" << std::hex << (int)cmd.command.data[i];
        }
        std::cout << std::endl;
        break;

      case LUCL::CommandTypeVersion:
        std::cout << "Reported version " << cmd.version.major << "." << cmd.version.minor << "." << cmd.version.patch << std::endl;
        break;

      case LUCL::CommandTypeInvalidVersion:
        std::cerr << "Device reported invalid version" << std::endl;
        break;

      case LUCL::CommandTypeError:
        std::cerr << "Device reported: " << proto.getErrorString(cmd.error.code) << std::endl;
        break;

      case LUCL::CommandTypeInvalidChecksum:
        std::cerr << "Invalid checksum while reading data" << std::endl;
        break;

      case LUCL::CommandTypeNone:
        --retries;
        Delay::wait(0.05);
        break;

      default:
        break;
    }
  }
}

int
main(int argc, char** argv)
{
  OptionParser options;
  options.executable(argv[0])
  .program(DUNE_SHORT_NAME)
  .copyright(DUNE_COPYRIGHT)
  .email("Renato Caldas <rmsc@fe.up.pt>")
  .version(getFullVersion())
  .date(getCompileDate())
  .arch(DUNE_SYSTEM_NAME)
  .description("Utility to update firmware of LUCL based devices.")
  .add("-d", "--sys-device",
       "System device", "DEVICE")
  .add("-i", "--i2c-address",
       "I2C slave address", "I2C_ADDR")
  .add("-c", "--command",
       "LUCL command", "CMD")
  .add("-p", "--data-payload",
       "LUCL data", "DATA0[,DATA1 ...]");

  // Parse command line arguments.
  if (!options.parse(argc, argv))
  {
    if (options.bad())
      std::cerr << "ERROR: " << options.error() << std::endl;
    options.usage();
    return 1;
  }

  // Get system device.
  std::string sys_dev = options.value("--sys-device");
  if (sys_dev.empty())
  {
    std::cerr << "ERROR: you must specify one system device." << std::endl;
    return 1;
  }

  // Get I2C address (if any).
  bool is_i2c = false;
  uint8_t i2c_addr = 0;
  if (castLexical(options.value("--i2c-address"), i2c_addr))
  {
    if ((i2c_addr < 0x03) || (i2c_addr > 0x77))
    {
      std::cerr << "ERROR: I2C device address is out of range (0x03 - 0x77)" << std::endl;
      return 1;
    }

    is_i2c = true;
  }

  // Open the device
  LUCL::Protocol proto;

  if (is_i2c)
    proto.setI2C(sys_dev, i2c_addr);
  else
    proto.setUART(sys_dev);

  try
  {
    proto.open();
  }
  catch (std::exception& e)
  {
    std::cerr << "ERROR: " << e.what() << std::endl;
    return 1;
  }

  // Check for the command token
  std::string command = options.value("--command");
  if (command.empty())
  {
    std::cerr << "ERROR: reading from stdio not supported yet." << std::endl;
    return 1;
  }

  // Get the data payload
  std::string data_str = options.value("--data-payload");
  std::vector<uint8_t> data_lst;
  if (!castLexical(data_str, data_lst))
  {
    std::cerr << "ERROR: failed to parse the data payload argument." << std::endl;
    return 1;
  }

  // Build and send the packet
  if (command.compare("Info") == 0)
  {
    std::cerr << "Requesting device information" << std::endl;
    try
    {
      proto.requestVersion();
    }
    catch (std::exception& e)
    {
      std::cerr << "ERROR: " << e.what() << std::endl;
      return 1;
    }
  }
  else if (command.compare("Reset") == 0)
  {
    std::cerr << "Requesting reset" << std::endl;
    try
    {
      proto.requestReset();
    }
    catch (std::exception& e)
    {
      std::cerr << "ERROR: " << e.what() << std::endl;
      return 1;
    }
  }
  else
  {
    // Command string not recognized, attempt to interpret it as an integer
    int cmd;
    if (!castLexical(command, cmd))
    {
      std::cerr << "ERROR: bad command \"" << command << "\"" << std::endl;
      return 1;
    }

    // Print the command and the data in a parseable format
    std::cout << "Sending packet CMD " << cmd << " DATA";
    for (unsigned i = 0; i < data_lst.size(); i++)
    {
      std::cout << " 0x" << std::hex << (int)data_lst[i];
    }
    std::cout << std::endl;

    try
    {
      proto.sendCommand(cmd, (uint8_t*)(&data_lst[0]), (int)data_lst.size());
    }
    catch (std::exception& e)
    {
      std::cerr << "ERROR: " << e.what() << std::endl;
      return 1;
    }
  }

  // Handle the results
  handleReply(proto);

  return 0;
}
