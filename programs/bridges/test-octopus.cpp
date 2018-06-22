#include <DUNE/DUNE.hpp>

// Local headers.
#include "pmc/sibBus.hpp"
#include "log/logger.hpp"
#include "sensors/dev-octopus.hpp"

static const float c_log_timestep = 1.0;
static const float c_subsamp_timestep = 10.0;
static const unsigned c_lane = 4;

int
main(int argc, char** argv)
{
  SibBus bus("/dev/ttyS3");

  // Enable trigger output buffer.
  bus.enableTriggers(true);

  /* Configure sensors */
  std::vector<Sensor*> sensors;
  DevOctopus* obj = new DevOctopus(c_lane, &bus, OM_ADVANCED, 19200);
  bus.selectLane(c_lane);
  bus.openLane();
  bus.sendSensorBaud(19200);

  if (obj->setup())
    std::cout << "sensor configuration: finished" << std::endl;
  else
    std::cerr << "sensor configuration: failed" << std::endl;

  /* Configure logger */
  Logger log("/root/", c_log_timestep, c_subsamp_timestep);
  log.addSensor(obj);

  /* Get some data */
  DUNE::Time::Counter<double> timer_run(120.0);
  while (!timer_run.overflow())
  {
    DUNE::Time::Counter<double> timer(0.5);
    while (!timer.overflow())
    {
      bus.selectLane(c_lane);

      uint8_t rbfr[128];
      size_t rv = bus.readFromSensor(rbfr, sizeof(rbfr));

      if (rv)
      {
        std::fprintf(stderr, "Read from sensor: %u\n", rv);
        std::string str((char*)rbfr, rv);
        std::cerr << "[recv] " << DUNE::Streams::sanitize(str) << std::endl;

        for (size_t j = 0; j < rv; ++j)
          obj->parse(rbfr[j]);
      }

      bus.deselectLane(c_lane);
      DUNE::Time::Delay::wait(timer.getRemaining());
    }

    log.setState("SEAEX", 1, 69, "1.23", "12.3", 100, 100);
    log.update();
  }

  bus.sendPowerOff();

  // Disable triggers.
  bus.enableTriggers(false);

  delete obj;
  return 0;
}
