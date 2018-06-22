#ifndef BRIDGES_SENSORS_DEVICES_TURNER_HPP
#define BRIDGES_SENSORS_DEVICES_TURNER_HPP

#include <DUNE/DUNE.hpp>
#include "base.hpp"

static const char* c_turner_stop_ack = "Cyclops";
static const char* c_turner_ack_avg = "Number of averaged points was set to";
static const char* c_turner_ack_dly = "Delay time between measurement points was set to";
static const char* c_turner_nack = "error";
static const unsigned c_turner_delay = 1000;

//! Sensor reading index.
enum TurnerReadingIndex
{
  TRI_READING = 0,
  TRI_GAIN = 1,
  TRI_TOTAL = 2
};

//! Different types of probes.
enum TurnerProbeType
{
  TPT_CHLOROPHYLL,
  TPT_TURBIDITY,
  TPT_CRUDE_OIL,
  TPT_REFINED_OIL,
  TPT_CDOM
};

//! Turner probe types.
static const char* c_turner_probes[] = {"TD_CHL", "TD_TUR", "TD_CRUDE_OIL",
                                        "TD_REFI_OIL", "TD_CDOM"};

//! Turner data identifier.
static const char* c_turner_id = "CY";
//! Start of header reply.
static const size_t c_turner_start = 2;

class DevTurner: public Sensor
{
public:
  DevTurner(unsigned lane, SibBus* sib, TurnerProbeType type, unsigned baud):
    Sensor(lane, sib, baud),
    m_type(type)
  { }

  bool
  onSetup(void)
  {
    if (m_sib == NULL)
      return false;

    flush();

    if (!sendAndRepeat("STOP\r\n", "Cyclops", c_turner_nack, 2.0, 5))
      return false;

    unsigned avg = std::max(1u, (unsigned)m_sampling_rate);

    if (!sendAndRepeat(DUNE::Utils::String::str("AVE %u\r\n", avg),
                       DUNE::Utils::String::str("%s %u\r\n", c_turner_ack_avg, avg),
                       c_turner_nack, 2.0, 3))
      return false;

    if (!sendAndRepeat(DUNE::Utils::String::str("DLY %u\r\n", c_turner_delay),
                       DUNE::Utils::String::str("%s %u\r\n", c_turner_ack_dly, c_turner_delay),
                       c_turner_nack, 2.0, 3))
      return false;

    sendCommand("GO\r\n");
    return true;
  }

  std::string
  getHeader(void) const
  {
    return DUNE::Utils::String::str("%s; %s_GAIN; ", c_turner_probes[m_type],
                                    c_turner_probes[m_type]);
  }

  size_t
  getHeaderSize(void) const
  {
    return 2;
  }

  std::string
  getData(void)
  {
    if (m_log.size() == 0)
      throw std::runtime_error(DTR("no data to be retrieved"));

    return (m_log.back().at(TRI_READING) + "; " +
            m_log.back().at(TRI_GAIN) + "; ");
  }

private:
  void
  onDecode(const std::vector<std::string> fields)
  {
    // does not match size.
    if (fields.size() != c_turner_start + TRI_TOTAL)
      return;

    if (!DUNE::Utils::String::startsWith(fields[0], c_turner_id))
      return;

    Reading r(DUNE::Time::Clock::getSinceEpoch());

    float t;
    for (size_t i = 0; i < TRI_TOTAL; i++)
    {
      // check if can be cast as float, otherwise, do not decode.
      if (!DUNE::castLexical(fields[i + c_turner_start], t))
        return;

      r.add(fields[i + c_turner_start]);
    }

    m_log.push(r);
    setNewData();
  }

  TurnerProbeType m_type;
};

#endif
