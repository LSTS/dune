#ifndef BRIDGES_SENSORS_DEVICES_CMRE_HPP
#define BRIDGES_SENSORS_DEVICES_CMRE_HPP

#include <DUNE/DUNE.hpp>
#include "base.hpp"

//! NMEA command id.
static const char* c_cmre_cmd_id = "PSUBC";
//! NMEA status id.
static const char* c_cmre_sta_id = "PSUBS";
//! NMEA status types.
static const char* c_cmre_status[] = { "SYS", "WAV", "ACQ", "PNG", "RTP" };
//! CMRE wave type.
static const char* c_cmre_wav_type[] = { "LIN", "LOG" };
//! CMRE acquisition frequency.
static const unsigned c_cmre_acq_freq[] = { 96000, 192000 };

//! CMRE's types of status messages.
enum CMREStatus
{
  CS_SYS,
  CS_WAV,
  CS_ACQ,
  CS_PNG,
  CS_RTP
};

class DevCMRE: public Sensor
{
public:
  DevCMRE(unsigned lane, SibBus* sib, unsigned baud):
    Sensor(lane, sib, baud)
  { }

  void
  onUpdateParameters(void)
  {
    // wave parameters.
    getParameter("wav.start", "10000", m_wav.start);
    getParameter("wav.stop", "20000", m_wav.stop);
    getParameter("wav.length", "5", m_wav.stop);
    getParameter("wav.log", "1", m_wav.type);
    getParameter("wav.interval", "10", m_wav.interval);

    // acquisition parameters.
    getParameter("acq.high_freq", "1", m_acq.frequency);
    getParameter("acq.delay", "100", m_acq.delay);
    getParameter("acq.window", "100", m_acq.window);

    // decimation parameters.
    getParameter("decimation", "1", m_decimation);
  }

  bool
  onSetup(void)
  {
    if (m_sib == NULL)
      return false;

    // @todo: how to configure CMRE SBP? We do not control power.
    //  should we start and configure only when **this** device
    //  thinks we are close enough in altitude ?...
    configure();
    return true;
  }

  bool
  parse(uint8_t byte)
  {
    switch (m_sm)
    {
      case (BS_SYNC):
        if (byte == '$')
        {
          // any byte will be accepted as synch.
          Sensor::m_data_index = 0;
          m_data[Sensor::m_data_index++] = byte;
          m_sm = BS_TERM;
        }
        break;
      case (BS_TERM):
        m_data[Sensor::m_data_index++] = byte;
        if (byte == '\n')
        {
          decode();
          m_sm = BS_SYNC;
          return true;
        }
        break;
    }

    return false;
  }

  void
  decode(void)
  {
    // pure NMEA 0183
    std::string str((char*)m_data, Sensor::m_data_index);
    std::cerr << "[recv] " << DUNE::Streams::sanitize(str) << std::endl;

    DUNE::Parsers::NMEASentence stn;
    stn.parse(str);

    if (stn.getCode() == c_cmre_sta_id)
      handleStatus(stn);
  }

private:
  //! Handle status string.
  //! @param[in] stn NMEA sentence.
  void
  handleStatus(const DUNE::Parsers::NMEASentence& stn)
  {
    if (stn.getField(1) == "SYS")
      parseSYS(stn);
    else if (stn.getField(1) == "WAV")
      parseWAV(stn);
    else if (stn.getField(1) == "ACQ")
      parseACQ(stn);
    else if (stn.getField(1) == "PNG")
      parsePNG(stn);
    else if (stn.getField(1) == "RTP")
      parseRTP(stn);
  }

  //! Get command time string.
  //! @return time string.
  std::string
  getTimeString(void)
  {
    double time = DUNE::Time::Clock::getSinceEpoch();
    time_t secs = (time_t)time;
    uint8_t csecs = (uint8_t)((time - secs) * 100);
    DUNE::Time::BrokenDown bdt(secs);
    return DUNE::Utils::String::str("%02u%02u%02u.%02u", bdt.hour,
                                    bdt.minutes, bdt.seconds, csecs);
  }

  //! Get mission name string.
  //! @return mission name string.
  std::string
  getMissionName(void)
  {
    DUNE::Time::BrokenDown bdt;
    return DUNE::Utils::String::str("pmc-%02u%02u%02u", bdt.hour, bdt.minutes, bdt.seconds);
  }

  //! Send start command.
  void
  start(void)
  {
    DUNE::Parsers::NMEASentence stn;
    stn.setCode(c_cmre_cmd_id);
    stn.setField(0, getTimeString());
    stn.setField(1, "START");
    stn.setField(2, getMissionName());
    sendCommand(stn.str());
  }

  //! Send stop command.
  void
  stop(void)
  {
    DUNE::Parsers::NMEASentence stn;
    stn.setCode(c_cmre_cmd_id);
    stn.setField(0, getTimeString());
    stn.setField(1, "STOP");
    stn.setField(2, "");
    sendCommand(stn.str());
  }

  //! Send shutdown command.
  void
  shutdown(void)
  {
    DUNE::Parsers::NMEASentence stn;
    stn.setCode(c_cmre_cmd_id);
    stn.setField(0, getTimeString());
    stn.setField(1, "SHUTDOWN");
    stn.setField(2, "0"); // time to shutdown.
    sendCommand(stn.str());
  }

  //! Request status.
  //! @param[in] type type of status request.
  void
  status(CMREStatus type)
  {
    DUNE::Parsers::NMEASentence stn;
    stn.setCode(c_cmre_cmd_id);
    stn.setField(0, getTimeString());
    stn.setField(1, "STATUS");
    stn.setField(2, c_cmre_status[type]);
    sendCommand(stn.str());
  }

  //! Set time and date.
  void
  setTime(void)
  {
    DUNE::Time::BrokenDown bdt;
    DUNE::Parsers::NMEASentence stn;
    stn.setCode(c_cmre_cmd_id);
    stn.setField(0, getTimeString());
    stn.setField(1, "TIME");
    stn.setField(2, "%02u%02u%02u", bdt.day, bdt.month, bdt.year);
    sendCommand(stn.str());
  }

  //! Configure device.
  void
  configure(void)
  {
    setWav();
    setAcquisition();
    setDecimation();

    // @todo: send status requests ?
  }

  //! Configure wave properties.
  void
  setWav(void)
  {
    DUNE::Parsers::NMEASentence stn;
    stn.setCode("PSUBP");
    stn.setField(0, getTimeString());
    stn.setField(1, DUNE::Utils::String::str("%u", m_wav.start));
    stn.setField(2, DUNE::Utils::String::str("%u", m_wav.stop));
    stn.setField(3, DUNE::Utils::String::str("%u", m_wav.length));
    stn.setField(4, c_cmre_wav_type[m_wav.type]);
    stn.setField(5, DUNE::Utils::String::str("%u", m_wav.interval));
    sendCommand(stn.str());
  }

  //! Configure acquisition properties.
  void
  setAcquisition(void)
  {
    DUNE::Parsers::NMEASentence stn;
    stn.setCode("PSUBA");
    stn.setField(0, getTimeString());
    stn.setField(1, DUNE::Utils::String::str("%u", c_cmre_acq_freq[m_acq.frequency]));
    stn.setField(2, DUNE::Utils::String::str("%u", m_acq.delay));
    stn.setField(3, DUNE::Utils::String::str("%u", m_acq.window));

    // @todo "Bottom estimate in meters" is this current altitude? What's the invalid value?
    stn.setField(4, DUNE::Utils::String::str("%u", std::max(0.0f, m_altitude)));
    stn.setField(5, "0");
    sendCommand(stn.str());
  }

  //! Configure decimation.
  void
  setDecimation(void)
  {
    DUNE::Parsers::NMEASentence stn;
    stn.setCode("PSUBR");
    stn.setField(0, getTimeString());
    stn.setField(1, DUNE::Utils::String::str("%u", m_decimation));
    stn.setField(2, "0");
    sendCommand(stn.str());
  }

  //! Handle SYS status string.
  //! @param[in] stn NMEA sentence.
  void
  parseSYS(const DUNE::Parsers::NMEASentence& stn)
  {
    if (stn.getField(2) == "OK")
      std::cerr << "[cmre] voltage levels ok" << std::endl;
    else
      std::cerr << "[cmre] fault on voltage levels" << std::endl;
  }

  //! Handle WAV status string.
  //! @param[in] stn NMEA sentence.
  void
  parseWAV(const DUNE::Parsers::NMEASentence& stn)
  {
    unsigned ret = 0;
    // start
    if (!DUNE::castLexical(stn.getField(2), ret))
      std::cerr << "[cmre] unable to cast wav start" << std::endl;

    if (ret != m_wav.start)
      std::cerr << "[cmre] wav start does not match" << std::endl;

    // stop
    if (!DUNE::castLexical(stn.getField(3), ret))
      std::cerr << "[cmre] unable to cast wav stop" << std::endl;

    if (ret != m_wav.stop)
      std::cerr << "[cmre] wav stop does not match" << std::endl;

    // length
    if (!DUNE::castLexical(stn.getField(4), ret))
      std::cerr << "[cmre] unable to cast wav length" << std::endl;

    if (ret != m_wav.length)
      std::cerr << "[cmre] wav length does not match" << std::endl;

    // type
    if (stn.getField(5) != c_cmre_wav_type[m_wav.type])
      std::cerr << "[cmre] wav type does not match" << std::endl;

    // interval
    if (!DUNE::castLexical(stn.getField(6), ret))
      std::cerr << "[cmre] unable to cast wav interval" << std::endl;

    if (ret != m_wav.interval)
      std::cerr << "[cmre] wav interval does not match" << std::endl;

  }

  //! Handle ACQ status string.
  //! @param[in] stn NMEA sentence.
  void
  parseACQ(const DUNE::Parsers::NMEASentence& stn)
  {
    unsigned ret = 0;
    // frequency
    if (!DUNE::castLexical(stn.getField(2), ret))
      std::cerr << "[cmre] unable to cast acq frequency" << std::endl;

    if (ret != m_acq.frequency)
      std::cerr << "[cmre] acq frequecy does not match" << std::endl;

    // delay
    if (!DUNE::castLexical(stn.getField(3), ret))
      std::cerr << "[cmre] unable to cast acq delay" << std::endl;

    if (ret != m_acq.delay)
      std::cerr << "[cmre] acq delay does not match" << std::endl;

    // window
    if (!DUNE::castLexical(stn.getField(4), ret))
      std::cerr << "[cmre] unable to cast acq window" << std::endl;

    if (ret != m_acq.window)
      std::cerr << "[cmre] acq window does not match" << std::endl;
  }


  //! Handle PNG status string.
  //! @param[in] stn NMEA sentence.
  void
  parsePNG(const DUNE::Parsers::NMEASentence& stn)
  {
    // @todo: not sure what to do with PNG return.
  }

  //! Handle RTP status string.
  //! @param[in] stn NMEA sentence.
  void
  parseRTP(const DUNE::Parsers::NMEASentence& stn)
  {
    unsigned ret = 0;
    // decimation
    if (!DUNE::castLexical(stn.getField(2), ret))
      std::cerr << "[cmre] unable to cast decimation" << std::endl;

    if (ret != m_decimation)
      std::cerr << "[cmre] decimation does not match" << std::endl;
  }

  //! Setup wav signal.
  struct SetupWav
  {
    unsigned start;
    unsigned stop;
    unsigned length;
    unsigned type;
    unsigned interval;
  };

  //! Setup Acquisition.
  struct SetupAcquisition
  {
    unsigned frequency;
    unsigned delay;
    unsigned window;
  };

  //! Wav parameters.
  SetupWav m_wav;
  //! Acquisition parameters.
  SetupAcquisition m_acq;
  //! Decimation parameters.
  unsigned m_decimation;
};

#endif
