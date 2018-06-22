#include <DUNE/DUNE.hpp>

// Local headers.
#include "../pmc/sibBus.hpp"

bool
test(SibBus& bus, unsigned lane, float delay)
{
  std::fprintf(stderr, "Testing Lane %u\n", lane);
  bus.enableTriggers(true);

  bus.selectLane(lane);
  if (!bus.openLane())
    return false;

  bus.sendSensorBaud(115200);

  std::fprintf(stderr, "Lane %u: sending string\n", lane);
  std::string bfr = DUNE::Utils::String::str("### testing lane #%d: comms OK", lane);
  bus.sendToSensor((const uint8_t*)bfr.c_str(), bfr.size());

  DUNE::Time::Delay::wait(delay / 2);

  std::vector<uint8_t> data;
  try
  {
    while (true)
    {
      uint8_t rbfr[128];
      size_t rv = bus.readFromSensor(rbfr, sizeof(rbfr));
      if (rv == 0)
        break;
      for (size_t i = 0; i < rv; ++i)
        data.push_back(rbfr[i]);
    }
  }
  catch (std::runtime_error& e)
  {
    std::cerr << "Lane " << lane << ": read error: " << e.what() << std::endl;
  }

  bool success = false;
  if (data.size() > 0)
  {
    std::string raw((char*)&data[0], data.size());
    std::fprintf(stderr, "Lane %u: read from sensor: %u: %s\n", lane, data.size(), DUNE::Streams::sanitize(raw).c_str());
    success = true;
  }

  DUNE::Time::Delay::wait(delay / 2);
  bus.sendSensorPowerOff();
  bus.sendPowerOff();
  bus.deselectLane(lane);
  bus.enableTriggers(false);
  return success;
}

void
print(bool condition, unsigned lane)
{
  if (condition)
    std::fprintf(stderr, "Lane %u: OK\n", lane);
  else
    std::fprintf(stderr, "Lane %u: NOT OK\n", lane);
}

int
main(int argc, char** argv)
{
  if (argc != 2 && argc != 3)
  {
    std::cout << "Usage: " << argv[0] << " <lane> <*delay*>" << std::endl;
    std::cout << "\n  * All lanes -- " << argv[0] << " 99 <*delay*>\n" << std::endl;
    return 0;
  }

  SibBus bus("/dev/ttyS3");
  unsigned lane = std::atoi(argv[1]);

  float delay = 2;
  if (argc == 3)
    delay = std::atof(argv[2]);

  if (lane == 99)
  {
    bool ret[8];
    for (unsigned i = 0; i < 8; ++i)
      ret[i] = test(bus, i, delay);

    std::fprintf(stderr, "\nResults:\n");
    for (unsigned i = 0; i < 8; ++i)
      print(ret[i], i);
  }
  else
  {
    print(test(bus, lane, delay), lane);
  }

  return 0;
}
