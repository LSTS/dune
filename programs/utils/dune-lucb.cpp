//***************************************************************************
// Copyright (C) 2007-2013 Laboratório de Sistemas e Tecnologia Subaquática *
// Departamento de Engenharia Electrotécnica e de Computadores              *
// Rua Dr. Roberto Frias, 4200-465 Porto, Portugal                          *
//***************************************************************************
// Author: Ricardo Martins                                                  *
//***************************************************************************
// $Id:: dune-lucb.cpp 12667 2013-01-22 02:44:42Z rasm                    $:*
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
  .version(DUNE_COMPLETE_VERSION)
  .date(DUNE_BUILD_TIME)
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
