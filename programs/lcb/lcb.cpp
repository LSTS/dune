// ISO C++ 98 headers.
#include <iostream>
#include <cstdio>
#include <cstdlib>

// DUNE headers.
#include <DUNE/DUNE.hpp>
using DUNE_NAMESPACES;

// Local headers.
#include "MCI.hpp"

int
main(int argc, char** argv)
{
  // Command line parameters.
  OptionParser options;
  options.executable(argv[0])
  .program("LCB")
  .copyright(DUNE_COPYRIGHT)
  .email("Ricardo Martins <rasm@lsts.pt>")
  .version(getFullVersion())
  .date(getCompileDate())
  .arch(DUNE_SYSTEM_NAME)
  .add("-c", "--config",
       "Configuration file", "FILE")
  .add("-d", "--device",
       "Serial port device", "DEV");

  // Parse command line arguments.
  if (!options.parse(argc, argv))
  {
    if (options.bad())
      std::cerr << "ERROR: " << options.error() << std::endl;
    options.usage();
    return 1;
  }

  // Create filter table.
  std::string config_file = options.value("--config");
  if (config_file.empty())
  {
    std::cerr << "ERROR: you must specify one configuration file." << std::endl;
    return 1;
  }

  // Open serial port device.
  std::string device = options.value("--device");
  if (device.empty())
  {
    std::cerr << "ERROR: you must specify one serial port device." << std::endl;
    return 1;
  }

  SerialPort m_uart(device.c_str(), 3000000);

  uint8_t bfr[1024] = {0};

  while (true)
  {
    if (!Poll::poll(m_uart, 1.0))
    {
      continue;
    }

    size_t rv = m_uart.read(bfr, sizeof(bfr));

    for (size_t i = 0; i < rv; ++i)
    {
      putchar(bfr[i]);
    }
  }


  // Parsers::Config config(config_file.c_str());
  // SerialPort uart(device, 3000000);
  // LCB::MCI mci(uart, config);
  // mci.run();

  return 0;
}
