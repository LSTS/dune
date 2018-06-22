#include <DUNE/DUNE.hpp>

// Local headers.
#include "pmc/sibBus.hpp"
#include "sensors/dev-contros.hpp"

static const unsigned c_lane = 0;

int
main(int argc, char** argv)
{
  SibBus bus("/dev/ttyS3");

  // Enable trigger output buffer.
  bus.enableTriggers(true);

  /* Configure sensors */
  std::vector<Sensor*> sensors;
  DevContros* obj = new DevContros(c_lane, &bus, 9600);
  bus.selectLane(c_lane);
  bus.openLane();
  bus.sendSensorBaud(9600);

  float m_sampling_rate = 10.0;
  unsigned interval = std::max(0u, (unsigned)m_sampling_rate);
  obj->sendAndRepeat(DUNE::Utils::String::str("$COSCP,0,0,W,1,115200\r\n", interval),
                     DUNE::Utils::String::str("$COSLP,0,0,D,1,10\r\n", interval),
                     "COMMAND UNKNOWN OR BUSY", 2.0, 10);

  bus.selectLane(c_lane);

  /* Get some data */
  DUNE::Time::Counter<double> timer_run(120.0);
  while (!timer_run.overflow())
  {
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
  }

  bus.deselectLane(c_lane);
  bus.sendPowerOff();

  // Disable triggers.
  bus.enableTriggers(false);

  delete obj;
  return 0;
}
