#ifndef BRIDGES_SENSORS_DEVICES_ICLISTEN_HPP
#define BRIDGES_SENSORS_DEVICES_ICLISTEN_HPP

#include <DUNE/DUNE.hpp>
#include "base.hpp"

class DevIcListen: public Sensor
{
public:
  DevIcListen(unsigned lane, SibBus* sib, unsigned baud):
    Sensor(lane, sib, baud)
  { }

  bool
  onSetup(void)
  {
    if (m_sib == NULL)
      return false;

    flush();

    //DUNE::Time::Delay::wait(30);
    uint8_t bfr[128];

    for (int i = 0; i < 10; ++i)
    {
      std::string raw("\x2A\x42\x00\x00\xa8\x0c", 6);
      sendCommand(raw);
      DUNE::Time::Delay::wait(1.0);

      size_t rv = m_sib->readFromSensor(bfr, sizeof(bfr));
      std::fprintf(stderr, "rv: %u\n", rv);
    }

    return true;
  }

  bool
  parse(uint8_t* bfr, size_t bfr_size)
  {
    std::string raw((const char*)bfr, bfr_size);

    std::cerr << "IC: " << DUNE::Streams::sanitize(raw) << std::endl;
    return true;
  }
};

#endif
