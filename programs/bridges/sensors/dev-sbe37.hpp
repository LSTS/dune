#ifndef BRIDGES_SENSORS_DEVICES_SBE37_HPP
#define BRIDGES_SENSORS_DEVICES_SBE37_HPP

#include <DUNE/DUNE.hpp>

#include <algorithm>

#include "base.hpp"

//! Command was acknowledged.
static const char* c_sbe37_ack = "<Executed/>";
//! Command was not acknowledged.
static const char* c_sbe37_nack = "<Error type";
//! Stop command.
static const char* c_sbe37_cmd_stop = "Stop\r\n";
//! Logging was stopped.
static const char* c_sbe37_stop_ack = "<logging stopped/>";
//! Stop command not acknowledged, already stopped.
static const char* c_sbe37_stop_no_log = "cmd only allowed while logging";
//! Dummy command when it is desirable to skip not ack string.
static const char* c_sbe37_stop_dummy_nack = "dummy command";
//! Sensor stoppage retries.
static const size_t c_sbe37_ret = 10;

enum SeabirdReadingIndex
{
  SRI_TEMP = 0,
  SRI_COND = 1,
  SRI_PRES = 2,
  SRI_DEPT = 3,
  SRI_SALI = 4,
  SRI_SVEL = 5,
  SRI_DENS = 6,
  SRI_TOTAL = 7
};

//! Turner probe types.
static const char* c_sbe37_hdr[] = {"SBE37_TEMPERATURE", "SBE37_CONDUCTIVITY",
                                    "SBE37_PRESSURE", "SBE37_DEPTH", "SBE37_SALINITY",
                                    "SBE37_SOUND_VEL", "SBE37_DENSITY"};

static const float c_min_sampling = 6.0f;
static const float c_max_sampling = 21600.0f;



class DevSBE37: public Sensor
{
public:
  DevSBE37(unsigned lane, SibBus* sib, unsigned baud):
    Sensor(lane, sib, baud)
  { }

  bool
  onSetup(void)
  {
    if (m_sib == NULL)
      return false;

    flush();

    // wake/stop device.
    bool stopped = false;
    for (size_t i = 0; i < c_sbe37_ret; ++i)
    {
      if (stop())
      {
        stopped = true;
        break;
      }
    }

    // unable to stop device.
    if (!stopped)
      return false;

    // output xml tags.
    if (!sendAckCommand("OutputExecutedTag=Y\r\n"))
      return false;

    // sampling interval.
    float interval = std::max(6.0f, m_sampling_rate);
    interval = std::min(interval, 21600.0f);
    if (!sendAckCommand(DUNE::Utils::String::str("SampleInterval=%u\r\n", (unsigned)interval)))
      return false;

    // interval sampling (change sample mode depending on the frequency).
    if (!sendAckCommand("SampleMode=2\r\n"))
      return false;

    // no internal logging.
    if (!sendAckCommand("StoreData=N\r\n"))
      return false;

    // output options.
    if (!sendAckCommand("OutputTime=N\r\n"))
      return false;

    if (!sendAckCommand("OutputFormat=1\r\n"))
      return false;

    if (!sendAckCommand("OutputDepth=Y\r\n"))
      return false;

    if (!sendAckCommand("OutputSal=Y\r\n"))
      return false;

    if (!sendAckCommand("OutputSV=Y\r\n"))
      return false;

    if (!sendAckCommand("OutputDensity=Y\r\n"))
      return false;

    if (!sendAckCommand("AutoRun=N\r\n"))
      return false;

    // Let's go.
    if (!sendAckCommand("Start\r\n"))
      return false;

    return true;
  }

  std::string
  getHeader(void) const
  {
    std::string str;
    for (size_t i = 0; i < SRI_TOTAL; i++)
      str += DUNE::Utils::String::str("%s; ", c_sbe37_hdr[i]);

    return str;
  }

  size_t
  getHeaderSize(void) const
  {
    return SRI_TOTAL;
  }

  std::string
  getData(void)
  {
    if (m_log.size() == 0)
      throw std::runtime_error(DTR("no data to be retrieved"));

    std::string str;
    for (size_t i = 0; i < SRI_TOTAL; i++)
      str += m_log.back().at(i) + "; ";

    return str;
  }

private:
  void
  onDecode(const std::vector<std::string> fields)
  {
    // does not match size.
    if (fields.size() != SRI_TOTAL)
      return;

    Reading r(DUNE::Time::Clock::getSinceEpoch());

    float t;
    for (size_t i = 0; i < SRI_TOTAL; i++)
    {
      // check if can be cast as float, otherwise, do not decode.
      if (!DUNE::castLexical(fields[i], t))
        return;

      r.add(fields[i]);
    }

    m_log.push(r);
    setNewData();
  }

  //! Repeat command until sensor wakes.
  //! @return true if command was acknowledged, false otherwise.
  bool
  stop(void)
  {
    // stop device.
    if (sendCommand(c_sbe37_cmd_stop, true, c_sbe37_stop_ack, c_sbe37_nack))
      return true;

    // sensor already stopped.
    if (sendCommand(c_sbe37_cmd_stop, true, c_sbe37_stop_no_log, c_sbe37_stop_dummy_nack))
      return true;

    return false;
  }

  //! Send command and wait for acknowledgment.
  //! param[in] cmd command to be sent.
  //! @return true if command was acknowledged, false otherwise.
  bool
  sendAckCommand(const std::string& cmd)
  {
    return sendCommand(cmd, true, c_sbe37_ack, c_sbe37_nack);
  }
};

#endif
