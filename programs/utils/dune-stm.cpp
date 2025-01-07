//***************************************************************************
// Copyright 2007-2025 Universidade do Porto - Faculdade de Engenharia      *
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
// Author: Pedro Gonçalves                                                  *
//***************************************************************************

// DUNE headers.
#include <DUNE/DUNE.hpp>
using DUNE_NAMESPACES;

//! Default UART baud rate.
static const unsigned c_baud_rate = 115200;

int
main(int argc, char** argv)
{
  OptionParser options;
  options.executable(argv[0])
  .program("DUNE STM32 Flash Programmer")
  .copyright(DUNE_COPYRIGHT)
  .email("Pedro Gonçalves <pedro@lsts.pt>")
  .version(getFullVersion())
  .date(getCompileDate())
  .arch(DUNE_SYSTEM_NAME)
  .description("Utility to update the firmware of STM32 based devices.")
  .add("-d", "--dev",
       "System device", "DEVICE")
  .add("-t", "--dev-type",
       "System device type", "TYPE")
  .add("-f", "--file",
       "iBIN file", "IBIN_FILE")
  .add("-b", "--bootUpdate",
       "Update bootloader (true, false)", "BOOL");

  // Parse command line arguments.
  if (!options.parse(argc, argv))
  {
    if (options.bad())
      std::cerr << "ERROR: " << options.error() << std::endl;
    options.usage();
    return 1;
  }

  // Get iBIN file.
  std::string ibin = options.value("--file");
  if (ibin.empty())
  {
    std::cerr << "ERROR: you must specify one iBIN file." << std::endl;
    return 1;
  }

  if (Path(ibin).type() != Path::PT_FILE)
  {
    std::cerr << "ERROR: no such file: '" << ibin << "'" << std::endl;
    return 1;
  }

  // Get system device.
  std::string sys_dev = options.value("--dev");
  if (sys_dev.empty())
  {
    std::cerr << "ERROR: you must specify one system device." << std::endl;
    return 1;
  }

  // Get boot update.
  std::string boot_up = options.value("--bootUpdate");
  if (boot_up.empty())
  {
    std::cerr << "ERROR: you must specify if bootloader update or not." << std::endl;
    return 1;
  }
  bool boot_update = (boot_up == "true");

  // Get device type.
  IO::Handle* handle = NULL;
  std::string dev_type = options.value("--dev-type");
  handle = new SerialPort(sys_dev, c_baud_rate);

  STM::Interface itf(handle, ibin);
  if(itf.syncBoot(boot_update))
  {
    Delay::wait(1);
    if(itf.checkSystemType())
    {
      Delay::wait(1);
      itf.checkSystemVersion();
      Delay::wait(1);
      if(itf.checkFirmwareFile())
      {
        Delay::wait(1);
        itf.startFirmwareUpdate();
      }
      else
      {
        std::cout << "FAIL: checkFirmwareFile" << dev_type << std::endl;
      }
    }
    else
    {
      std::cout << "FAIL: checkSystemType" << dev_type << std::endl;
    }
  }
  else
  {
    std::cout << "FAIL: syncBoot" << dev_type << std::endl;
  }
  delete handle;

  return 0;
}
