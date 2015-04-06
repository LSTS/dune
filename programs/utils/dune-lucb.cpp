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

#include <DUNE/DUNE.hpp>
using DUNE_NAMESPACES;

int
main(int argc, char** argv)
{
  OptionParser options;
  options.executable("lucb")
  .program(DUNE_SHORT_NAME)
  .copyright(DUNE_COPYRIGHT)
  .email(DUNE_CONTACT)
  .version(getFullVersion())
  .date(getCompileDate())
  .arch(DUNE_SYSTEM_NAME)
  .description("Utility to update firmware of LUCL based devices.")
  .add("-d", "--sys-device",
       "System device", "DEVICE")
  .add("-b", "--baud-rate",
       "Baud rate", "BAUD")
  .add("-i", "--i2c-address",
       "I2C slave address", "I2C_ADDR")
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

  // Get system device.
  std::string sys_dev = options.value("--sys-device");
  if (sys_dev.empty())
  {
    std::cerr << "ERROR: you must specify one system device." << std::endl;
    return 1;
  }

  // Get specified baud rate.
  int baud = 0;
  castLexical(options.value("--baud-rate"), baud);

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

  LUCL::Protocol proto;

  if (is_i2c)
    proto.setI2C(sys_dev, i2c_addr);
  else
    proto.setUART(sys_dev);

  try
  {
    LUCL::BootLoader boot(proto, true, baud);
    boot.flash(ihex);
  }
  catch (std::exception& e)
  {
    std::cerr << "ERROR: " << e.what() << std::endl;
  }

  return 0;
}
