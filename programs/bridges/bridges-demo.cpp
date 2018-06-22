#include <DUNE/DUNE.hpp>

// Local headers.
#include "pmc/gliderAPI.hpp"
#include "sensors/factory.hpp"
#include "sensors/manager.hpp"

static const float c_log_timestep = 1.0;
static const float c_subsamp_timestep = 10.0;

//! Desired runtime.
static const float c_runtime = 86400;

int
main(int argc, char** argv)
{
  /** fetch from config file **/
  if (argc != 2)
  {
    std::cerr << "Usage: " << argv[0] << " <CONFIG_FILE>" << std::endl;
    return 1;
  }

  // configuration file.
  DUNE::Parsers::Config cfg(argv[1]);
  std::string devices_str = cfg.get("PMC_BUS", "Lanes");
  std::vector<std::string> devices;
  DUNE::Utils::String::split(devices_str, ", ", devices);

  std::cerr << "/***************************************************" << std::endl;
  std::cerr << "/* Turn on glider simulator to get vehicle" << std::endl;
  std::cerr << "/* status and to *bootstrap* PMC/SIBs" << std::endl;
  std::cerr << "/*\r\n/*\tlist of sensors:" << std::endl;
  for (size_t i = 0; i < devices.size(); ++i)
    std::cerr << "/*\t\t #" << i << ": " << devices[i] << std::endl;
  std::cerr << "/***************************************************" << std::endl;

  // RS-485 bus with SIB.
  SibBus bus("/dev/ttyS3");
  // Command Bus with glider.
  GliderAPI glider("/dev/ttyS5");
  // Sensor manager.
  Manager man(&bus, &cfg, "/root/", c_log_timestep, c_subsamp_timestep);

  // Enable trigger output buffer.
  bus.enableTriggers(true);

  // add sensors to sensor manager.
  for (size_t i = 0; i < devices.size(); ++i)
  {
    SensorFactoryString x = SensorFactory::fromString(devices[i]);
    if (x != SFS_NONE)
      man.add(i, x);
  }

  /** MAIN LOOP **/
  DUNE::Time::Counter<double> timer(60.0); // print time each x seconds.
  DUNE::Time::Counter<double> timer_run(c_runtime); // runtime.
  DUNE::Time::Counter<double> timer_update(5.0);
  int depth_ref = 1400;
  while (!timer_run.overflow())
  {
    // listen to sensors.
    man.listen();

    // get data from glider.
    if (timer_update.overflow())
    {
      timer_update.reset();
      int time = (int)(timer_run.getElapsed() / 5) % depth_ref;

      if (time > depth_ref / 2)
        time = depth_ref - time;

      man.setState("DBG", 1, 2, "LAT", "LON", time, -1, UDR_DOWN);

      if (timer.overflow())
      {
        std::fprintf(stderr, "\t\t\t\t\t\t\t\t\t\t Runtime: %.1f, Depth: %d\n", timer_run.getElapsed(), time);
        timer.reset();
      }
    }
  }
  /** END OF MAIN LOOP **/

  // Disable triggers and power off.
  std::cerr << "power off sensors, disable triggers and power off" << std::endl;
  man.powerOffSensors();
  bus.enableTriggers(false);
  bus.sendPowerOff();
  return 0;
}
