#ifndef BRIDGES_PMC_RS485_HPP
#define BRIDGES_PMC_RS485_HPP

#include <DUNE/DUNE.hpp>

class RS485: public DUNE::Hardware::SerialPort
{
public:
  RS485(const std::string& dev, unsigned rts_gpio_nr, unsigned cts_gpio_nr, unsigned baud):
    DUNE::Hardware::SerialPort(dev, baud, SerialPort::SP_PARITY_NONE, SerialPort::SP_STOPBITS_1, SerialPort::SP_DATABITS_8, true)
  {
    m_rts = new DUNE::Hardware::GPIO(rts_gpio_nr);
    m_rts->setDirection(DUNE::Hardware::GPIO::GPIO_DIR_OUTPUT);
    m_rts->setValue(false);

    m_cts = new DUNE::Hardware::GPIO(cts_gpio_nr);
    m_cts->setDirection(DUNE::Hardware::GPIO::GPIO_DIR_OUTPUT);
    m_cts->setValue(false);
  }

  ~RS485(void)
  {
    delete m_rts;
    delete m_cts;
  }

  void
  doBeforeWrite(void)
  {
    m_rts->setValue(true);
    m_cts->setValue(true);
  }

  void
  doAfterWrite(void)
  {
    drain();
    m_rts->setValue(false);
    m_cts->setValue(false);
  }

  void
  doBeforeRead(void)
  {
    m_rts->setValue(false);
    m_cts->setValue(false);
  }

private:
  //! RTS GPIO.
  DUNE::Hardware::GPIO* m_rts;
  //! CTS GPIO.
  DUNE::Hardware::GPIO* m_cts;
};



#endif
