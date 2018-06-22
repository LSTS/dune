#ifndef BRIDGES_PMC_SIB_BUS_HPP
#define BRIDGES_PMC_SIB_BUS_HPP

#include <DUNE/DUNE.hpp>

#include "rs485.hpp"

//! Packet identifiers.
enum pmc_pkt_ids
{
  //! Sensor power off.
  PMC_PKT_ID_SEN_PWR_OFF = 1,
  //! Sensor power off.
  PMC_PKT_ID_SEN_PWR_ON  = 2,
  //! Set baud rate of sensor UART.
  PMC_PKT_ID_SEN_BAUD    = 3,
  //! Send data to sensor.
  PMC_PKT_ID_SEN_WRITE   = 4,
  //! Read data from sensor.
  PMC_PKT_ID_SEN_READ    = 5,
  //! SIB power off.
  PMC_PKT_ID_PWR_OFF     = 6
};

static std::pair<unsigned, uint8_t> brate_pairs[] =
{
  std::pair<unsigned, uint8_t>(4800, 0),
  std::pair<unsigned, uint8_t>(9600, 1),
  std::pair<unsigned, uint8_t>(19200, 2),
  std::pair<unsigned, uint8_t>(38400, 3),
  std::pair<unsigned, uint8_t>(57600, 4),
  std::pair<unsigned, uint8_t>(115200, 5)
};

DUNE_DECLARE_STATIC_MAP(c_baudrates, unsigned, uint8_t, brate_pairs);

class SibBus
{
public:
  SibBus(const std::string& uart_dev):
    m_uart(NULL),
    m_ctl(NULL),
    m_lane_selected(99)
  {
    m_uart = new RS485(uart_dev, c_gpio_rts, c_gpio_cts, 115200);
    m_ctl = new DUNE::Hardware::UCTK::Interface(m_uart);

    m_toe = new DUNE::Hardware::GPIO(c_gpio_toe);
    m_toe->setDirection(DUNE::Hardware::GPIO::GPIO_DIR_OUTPUT);
    m_toe->setValue(0);

    m_triggers[0] = createTrigger(86);
    m_triggers[1] = createTrigger(89);
    m_triggers[2] = createTrigger(88);
    m_triggers[3] = createTrigger(90);
    m_triggers[4] = createTrigger(91);
    m_triggers[5] = createTrigger(87);
    m_triggers[6] = createTrigger(83);
    m_triggers[7] = createTrigger(84);
  }

  ~SibBus()
  {
    delete m_uart;
    delete m_ctl;
    delete m_toe;
    for (unsigned i = 0; i < c_trigger_count; ++i)
      delete m_triggers[i];
  }

  DUNE::Hardware::UCTK::Interface*
  getInterface(void)
  {
    return m_ctl;
  }

  DUNE::IO::Handle*
  getHandle(void)
  {
    return m_uart;
  }

  void
  enableTriggers(bool value)
  {
    m_toe->setValue(!value);
  }

  void
  setTrigger(unsigned trigger_nr, bool value)
  {
    if (trigger_nr >= c_trigger_count)
      throw std::runtime_error("invalid trigger number");

    m_triggers[trigger_nr]->setValue(value);
    // std::cerr << "Lane " << trigger_nr << ": " << (value ? "" : "de") << "selected" << std::endl;
  }

  bool
  openLane(double timeout = 5.0)
  {
    std::cerr << "Lane " << m_lane_selected << ": opening lane" << std::endl;

    DUNE::Time::Counter<double> timer(timeout);
    while (!timer.overflow())
    {
      // Make sure SIB is online.
      try
      {
        std::cerr << "Lane " << m_lane_selected << ": requesting SIB info" << std::endl;
        DUNE::Hardware::UCTK::FirmwareInfo info = m_ctl->getFirmwareInfo(1.0);
        std::fprintf(stderr, "Lane %u: device: %s v%u.%u.%u\n", m_lane_selected, info.name.c_str(), info.major, info.minor, info.patch);
      }
      catch (...)
      {
        continue;
      }

      if (sendSensorPowerOn())
        return true;
    }

    return false;
  }

  void
  selectLane(unsigned nr)
  {
    // Deselect all except desired lane if selected.
    for (unsigned i = 0; i < c_trigger_count; ++i)
    {
      if (i != nr)
        deselectLane(i);
    }

    setTrigger(nr, true);
    m_lane_selected = nr;
  }

  void
  deselectLane(unsigned nr)
  {
    if (m_triggers[nr]->getValue())
    {
      setTrigger(nr, false);
    }
  }

  void
  sendPowerOff(void)
  {
    std::cerr << "Lane " << m_lane_selected << ": sending power off" << std::endl;
    DUNE::Hardware::UCTK::Frame frame;
    frame.setId(PMC_PKT_ID_PWR_OFF);
    m_ctl->sendFrame(frame, 2.0);
  }

  bool
  sendSensorPowerOff(double timeout = 2.0)
  {
    std::cerr << "Lane " << m_lane_selected << ": sending sensor power off" << std::endl;
    DUNE::Hardware::UCTK::Frame frame;
    frame.setId(PMC_PKT_ID_SEN_PWR_OFF);
    return m_ctl->sendFrame(frame, timeout);
  }

  bool
  sendSensorPowerOn(double timeout = 2.0)
  {
    std::cerr << "Lane " << m_lane_selected << ": sending sensor power on" << std::endl;
    DUNE::Hardware::UCTK::Frame frame;
    frame.setId(PMC_PKT_ID_SEN_PWR_ON);
    return m_ctl->sendFrame(frame, timeout);
  }

  void
  sendSensorBaud(unsigned baud)
  {
    std::cerr << "Lane " << m_lane_selected << ": sending sensor baud: " << baud << std::endl;
    std::map<unsigned, uint8_t>::const_iterator itr = c_baudrates.find(baud);
    if (itr == c_baudrates.end())
      throw std::runtime_error("invalid baud rate");

    uint8_t baud_id = itr->second;
    DUNE::Hardware::UCTK::Frame frame;
    frame.setId(PMC_PKT_ID_SEN_BAUD);
    frame.setPayloadSize(1);
    frame.setPayload(baud_id, 0);
    m_ctl->sendFrame(frame, 2.0);
  }

  // TODO: fragment data.
  void
  sendToSensor(const uint8_t* data, size_t data_size)
  {
    DUNE::Hardware::UCTK::Frame frame;
    frame.setId(PMC_PKT_ID_SEN_WRITE);
    frame.setPayloadSize(data_size);
    std::memcpy(frame.getPayload(), data, data_size);
    m_ctl->sendFrame(frame, 2.0);
  }

  size_t
  readFromSensor(uint8_t* data, size_t data_size)
  {
    DUNE::Hardware::UCTK::Frame frame;
    frame.setId(PMC_PKT_ID_SEN_READ);
    if (!m_ctl->sendFrame(frame, 2.0))
      throw std::runtime_error("failed to read");

    size_t size = frame.getPayloadSize() < data_size ? frame.getPayloadSize() : data_size;
    for (size_t i = 0; i < size; ++i)
      data[i] = frame.getPayload()[i];

    return frame.getPayloadSize();
  }

  void
  setBaudRate(unsigned lane, unsigned baud)
  {
    selectLane(lane);
    openLane();
    sendSensorBaud(baud);
    deselectLane(lane);
  }

  //! Power cycle SIB.
  //! @param[in] delay_time delay time between power off and power on.
  void
  powerCycle(float delay_time)
  {
    std::cerr << "Lane " << m_lane_selected << ": power cycle" << std::endl;
    sendSensorPowerOff();
    DUNE::Time::Delay::wait(delay_time);
    sendSensorPowerOn();
  }

private:
  //! Trigger buffer output enable GPIO number.
  static const unsigned c_gpio_toe = 85;
  //! RTS2 GPIO number.
  static const unsigned c_gpio_rts = 36;
  //! CTS2 GPIO number.
  static const unsigned c_gpio_cts = 37;
  //! Number of triggers.
  static const unsigned c_trigger_count = 8;
  //! Serial port device.
  DUNE::Hardware::SerialPort* m_uart;
  //! Trigger buffer output enable GPIO.
  DUNE::Hardware::GPIO* m_toe;
  //! Triggers.
  DUNE::Hardware::GPIO* m_triggers[8];
  //! UCTK interface.
  DUNE::Hardware::UCTK::Interface* m_ctl;
  //! Current selected lane.
  unsigned m_lane_selected;

  static DUNE::Hardware::GPIO*
  createTrigger(unsigned gpio_nr)
  {
    DUNE::Hardware::GPIO* gpio = new DUNE::Hardware::GPIO(gpio_nr);
    gpio->setDirection(DUNE::Hardware::GPIO::GPIO_DIR_OUTPUT);
    gpio->setValue(false);
    return gpio;
  }
};

#endif
