#ifndef BRIDGES_PMC_BME280_HPP
#define BRIDGES_PMC_BME280_HPP

#include "bme280-calibration.hpp"
#include "bme280-driver.hpp"

class BME280
{
public:
  BME280(const std::string& dev, unsigned addr):
    m_driver(NULL)
  {
    try
    {
      m_driver = new BME280Driver(dev, addr);
    }
    catch (std::runtime_error& e)
    {
      std::cerr << "exception: " << e.what() << std::endl;
    }
  }

  ~BME280(void)
  {
    DUNE::Memory::clear(m_driver);
  }

  void
  read(float& temperature, double& pressure, float& humidity)
  {
    if (m_driver != NULL)
    {
      m_driver->configure();
      m_driver->readRaw(temperature, pressure, humidity);
    }
  }
private:
  BME280Driver* m_driver;
};

#endif
