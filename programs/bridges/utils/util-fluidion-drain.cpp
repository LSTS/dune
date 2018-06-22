#include <DUNE/DUNE.hpp>

// Local headers.
#include "../sensors/factory.hpp"

void
listen(SibBus& bus, DevFluidion& obj, float timeout = 200.0)
{
  /* Get some data */
  DUNE::Time::Counter<double> timer_run(timeout);
  while (!timer_run.overflow())
  {
    DUNE::Time::Counter<double> timer(0.5);
    while (!timer.overflow())
    {
      uint8_t rbfr[128];
      size_t rv = bus.readFromSensor(rbfr, sizeof(rbfr));

      if (rv)
      {
        std::fprintf(stderr, "Read from sensor: %u\n", rv);
        for (size_t j = 0; j < rv; ++j)
          obj.parse(rbfr[j]);
      }

      DUNE::Time::Delay::wait(timer.getRemaining());
    }
  }
}

int
main(int argc, char** argv)
{
  if (argc != 2)
  {
    std::cout << "Usage: " << argv[0] << " <lane>" << std::endl;
    return 0;
  }

  SibBus bus("/dev/ttyS3");

  // Enable trigger output buffer.
  bus.enableTriggers(true);

  /* Configure sensors */
  SensorFactoryString type = SFS_FLUIDION;

  unsigned lane = std::atoi(argv[1]);
  DevFluidion* obj = static_cast<DevFluidion*>(SensorFactory::produce(type, lane, bus));
  bus.selectLane(lane);
  bus.openLane();
  bus.sendSensorBaud(SensorFactory::getBaudRate(type));

  std::cout << "\tping" << std::endl;
  obj->ping();
  listen(bus, *obj, 2.0);

  std::cout << "\tdrain (empty bottle)" << std::endl;
  obj->drain();
  listen(bus, *obj);

  std::cout << "\tping" << std::endl;
  obj->ping();
  listen(bus, *obj, 2.0);

  bus.deselectLane(std::atoi(argv[1]));
  bus.sendPowerOff();

  // Disable triggers.
  bus.enableTriggers(false);

  delete obj;
  return 0;
}
