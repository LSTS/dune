#include <cstdlib>
#include <DUNE/DUNE.hpp>

// Local headers.
#include "../pmc/bme280.hpp"

int
main(int argc, char** argv)
{
  if (argc != 3)
  {
    std::cout << "Usage: " << argv[0] << " <i2c-dev> <addr>" << std::endl;
    std::cout << "\te.g: " << argv[0] << " /dev/i2c-0 118" << std::endl;
    return 0;
  }

  BME280* sensor = new BME280(argv[1], std::atoi(argv[2]));

  float t = 0, h = 0;
  double p = 0;
  while (true)
  {
    sensor->read(t, p, h);
    std::cerr << "t: " << t << "\tp: " << p << "\th: " << h << std::endl;
    DUNE::Time::Delay::wait(1.0);
  }

  return 0;
}
