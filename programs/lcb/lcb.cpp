// ISO C++ 98 headers.
#include <iostream>
#include <cstdio>
#include <cstdlib>

// DUNE headers.
#include <DUNE/DUNE.hpp>
using DUNE_NAMESPACES;

// Local headers.
#include "Filters/Table.hpp"

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
  std::string config = options.value("--config");
  if (config.empty())
  {
    std::cerr << "ERROR: you must specify one configuration file." << std::endl;
    return 1;
  }

  LCB::Filters::Table table(config);
  table.start();

  // Open serial port device.
  std::string device = options.value("--device");
  if (device.empty())
  {
    std::cerr << "ERROR: you must specify one serial port device." << std::endl;
    return 1;
  }

  SerialPort uart(device, 3000000);
  UCTK::Interface ctl(&uart);
  UCTK::FirmwareInfo info = ctl.getFirmwareInfo();
  std::fprintf(stderr, "Firmware: %s %u.%u.%u\n",
               info.name.c_str(),
               info.major,
               info.minor,
               info.patch);

  std::ofstream ofs("lcb.bin", std::ios::binary);

  uint8_t bfr[1024] = {0};

  while (true)
  {
    if (!Poll::poll(uart, 1.0))
      continue;

    size_t rv = uart.read(bfr, sizeof(bfr));

#if 1
    ofs.write((const char*)bfr, rv);
    ofs.flush();
#endif

    for (size_t i = 0; i < rv; ++i)
    {
      table.push(bfr[i]);
    }
  }

  return 0;
}
