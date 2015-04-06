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
  .program("DUNE UCTK Flash Programmer")
  .copyright(DUNE_COPYRIGHT)
  .email("Ricardo Martins <rasm@lsts.pt>")
  .version(getFullVersion())
  .date(getCompileDate())
  .arch(DUNE_SYSTEM_NAME)
  .description("Utility to update the firmware of UCTK based devices.")
  .add("-d", "--dev",
       "System device", "DEVICE")
  .add("-t", "--dev-type",
       "System device type", "TYPE")
  .add("-f", "--file",
       "iHEX file", "IHEX_FILE");

  // Parse command line arguments.
  if (!options.parse(argc, argv))
  {
    if (options.bad())
      std::cerr << "ERROR: " << options.error() << std::endl;
    options.usage();
    return 1;
  }

  // Get iHEX file.
  std::string ihex = options.value("--file");
  if (ihex.empty())
  {
    std::cerr << "ERROR: you must specify one iHEX file." << std::endl;
    return 1;
  }

  if (Path(ihex).type() != Path::PT_FILE)
  {
    std::cerr << "ERROR: no such file: '" << ihex << "'" << std::endl;
    return 1;
  }

  // Get system device.
  std::string sys_dev = options.value("--dev");
  if (sys_dev.empty())
  {
    std::cerr << "ERROR: you must specify one system device." << std::endl;
    return 1;
  }

  // Get device type.
  IO::Handle* handle = NULL;
  std::string dev_type = options.value("--dev-type");
  if (dev_type == "escc")
    handle = new ESCC(sys_dev);
  else
    handle = new SerialPort(sys_dev, c_baud_rate);

  UCTK::Interface itf(handle);
  UCTK::Bootloader* boot = new UCTK::Bootloader(&itf, true);
  boot->program(ihex);
  delete boot;
  delete handle;

  return 0;
}
