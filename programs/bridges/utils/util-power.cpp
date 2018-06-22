#include <DUNE/DUNE.hpp>

// Local headers.
#include "../pmc/sibBus.hpp"

void
control_lane(SibBus& bus, unsigned lane, bool value)
{
  bus.enableTriggers(true);
  bus.selectLane(lane);

  if (value)
  {
    bus.openLane();
  }
  else
  {
    bus.sendSensorPowerOff();
    bus.sendPowerOff();
    bus.deselectLane(lane);
    bus.enableTriggers(false);
  }
}

int
main(int argc, char** argv)
{
  if (argc != 3)
  {
    std::cout << "Usage: " << argv[0] << " <lane> <1 or 0>" << std::endl;
    return 0;
  }

  SibBus bus("/dev/ttyS3");
  unsigned lane = std::atoi(argv[1]);
  bool value = std::atoi(argv[2]) != 0;

  if (lane == 99)
  {
    for (unsigned i = 0; i < 8; ++i)
      control_lane(bus, i, value);
  }
  else
  {
    control_lane(bus, lane, value);
  }

  return 0;
}
