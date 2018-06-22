#ifndef BRIDGES_SENSORS_DEVICES_OCTOPUS_HPP
#define BRIDGES_SENSORS_DEVICES_OCTOPUS_HPP

#include <DUNE/DUNE.hpp>

#include "base.hpp"

//! Octopus data identifier.
static const char* c_octopus_id = "CT001";

static const char* c_octopus_hdr[] = { "OCT_refCamera", "OCT_refLight", "OCT_ConfigFile", "OCT_Volume(L)", "OCT_AvgDeep",
                                       "OCT_meanDate", "OCT_meanTime", "OCT_nbImage", "OCT_blackLevel", "OCT_<125(#/L)",
                                       "OCT_125-250(#/L)", "OCT_250-500(#/L)", "OCT_500-1000(#/L)", "OCT_1000-2000(#/L)",
                                       "OCT_>=2000(#/L)", "OCT_ZOO", "OCT_N1", "OCT_N2", "OCT_N3", "OCT_N4", "OCT_N5",
                                       "OCT_N6", "OCT_N7", "OCT_N8", "OCT_N9", "OCT_N10", "OCT_N11", "OCT_N12", "OCT_N13",
                                       "OCT_N14", "OCT_N15", "OCT_N16", "OCT_N17", "OCT_N18", "OCT_N19", "OCT_N20", "OCT_N21",
                                       "OCT_N22", "OCT_N23", "OCT_N24", "OCT_N25", "OCT_N26", "OCT_N27", "OCT_N28", "OCT_N29",
                                       "OCT_N30", "OCT_N31", "OCT_N32", "OCT_N33", "OCT_N34", "OCT_N35", "OCT_N36", "OCT_N37",
                                       "OCT_N38", "OCT_N39", "OCT_N40", "OCT_N41", "OCT_N42", "OCT_N43", "OCT_N44", "OCT_N45",
                                       "OCT_N46", "OCT_N47", "OCT_N48", "OCT_N49", "OCT_N50" };


//**************************************************************************************
// 2.1 Intermediate Piloted
//  In the 1st line of boot.txt: Piloted
//  Start uvp
//  Send: $start:111111111; (11.... configuration is for intermediate mode)
//  UVP asks for pt.
//  Sent $pt:102.35,20161122,161850;
//  The UVP sends data frames then asks again for $pt;
//  To stop it, send: $stop;
//
// 2.2 Advanced Piloted
//  In the 1st line of boot.txt: Piloted
//  Start uvp
//  Send: $start:222222222; (22.... configuration is for advanced mode)
//  UVP is waiting for a $pt; to start its acquisition (but it doesn't ask for it)
//  Sent a pt frame (example $pt:102.35,20161122,161850;)
//  The UVP sends data frames then waits again for $pt;
//  To stop it, send: $stop;
//*************************************************************************************
static const char* c_start_cmd[] = { "$start:111111111;\n", "$start:222222222;\n" };
static const char* c_start_ack = "$startack;";
static const char* c_start_nack = "no reply is given";

//! Size of particle only frame.
static const size_t c_octopus_part_size = 15;
//! Size of particle and zooplankton data frame.
static const size_t c_octopus_zoop_size = 66;
//! Octopus initial trigger timeout.
static const float c_octopus_timer = 10.0f;

//! Octopus state machine states.
enum OctopusStates
{
  OS_SYNC,
  OS_CMD1,
  OS_CMD2,
  OS_CMD3,
  OS_CMDTERM,
  OS_DATA,
  OS_TERM
};

//! Octopus piloted modes (basic and delayed are not included).
enum OctopusModes
{
  OM_INTERMEDIATE,
  OM_ADVANCED
};

class DevOctopus: public Sensor
{
public:
  DevOctopus(unsigned lane, SibBus* sib, OctopusModes mode, unsigned baud):
    Sensor(lane, sib, baud),
    m_timer(c_octopus_timer),
    m_mode(mode),
    m_extended(false)
  { }

  void
  onUpdateParameters(void)
  {
    getParameter("extended.output", "false", m_extended);
  }

  std::string
  getHeader(void) const
  {
    std::string str;
    for (size_t i = 0; i < getSize(); i++)
      str += DUNE::Utils::String::str("%s; ", c_octopus_hdr[i]);

    return str;
  }

  size_t
  getHeaderSize(void) const
  {
    return getSize();
  }

  std::string
  getData(void)
  {
    if (m_log.size() == 0)
      throw std::runtime_error(DTR("no data to be retrieved"));

    std::string str;
    for (size_t i = 0; i < m_log.back().size(); i++)
      str += m_log.back().at(i) + "; ";

    return str;
  }

  void
  trigger(void)
  {
    // if sampling rate is zero, then the sensor controls time.
    if (m_sampling_rate == 0.0)
      return;

    // redefined sensor sampling rate.
    if (m_timer.getTop() != m_sampling_rate)
      m_timer.setTop(m_sampling_rate);

    // let's trigger.
    if (m_timer.overflow())
    {
      sendPressureAndTime();
      m_timer.reset();
    }
  }

  bool
  onSetup(void)
  {
    if (m_sib == NULL)
      return false;

    DUNE::Time::Delay::wait(5.0);

    sendCommand("\r\n");
    sendCommand("$stop;\r\n");
    return sendCommand("$start:OCTOPUS4;\r\n", true, c_start_ack, c_start_nack, 2.0);
  }

  bool
  parse(uint8_t byte)
  {
    switch (m_sm)
    {
      case (OS_SYNC):
        if (byte == '\r' || byte == '\n')
          break;

        if (byte == '$')
        {
          m_sm = OS_CMD1;
        }
        else
        {
          Sensor::m_data_index = 0;
          m_data[Sensor::m_data_index++] = byte;
          m_sm = OS_TERM;
        }

        break;
      case (OS_CMD1):
        if (byte == 'p')
          m_sm = OS_CMD2;
        else
          m_sm = OS_SYNC;
        break;
      case (OS_CMD2):
        if (byte == 't')
          m_sm = OS_CMD3;
        else
          m_sm = OS_SYNC;
        break;
      case (OS_CMD3):
        if (byte == ';')
          m_sm = OS_CMDTERM;
        else
          m_sm = OS_SYNC;
        break;
      case (OS_CMDTERM):
        if (byte == '\n')
          sendPressureAndTime();

        m_sm = OS_SYNC;
        break;
      case (OS_TERM):
        //! command request from device.
        if (byte == '$')
        {
          m_sm = OS_CMD1;
          break;
        }

        m_data[Sensor::m_data_index++] = byte;
        if (byte == '\n')
        {
          decode();
          m_sm = OS_SYNC;
          return true;
        }

        // data may overflow.
        if (Sensor::m_data_index >= c_sensor_bfr_size)
          m_sm = OS_SYNC;

        break;
    }

    return false;
  }

private:
  //! Send pressure and time to sensor.
  void
  sendPressureAndTime(void)
  {
    DUNE::Time::BrokenDown bdt;
    sendCommand(DUNE::Utils::String::str("$pt:%.2f,%02u%02u%02u,%02u%02u%02u;\n",
                                         m_depth, bdt.year, bdt.month, bdt.day,
                                         bdt.hour, bdt.minutes, bdt.seconds));
  }

  void
  onDecode(const std::vector<std::string> fields)
  {
    if (fields[0] != c_octopus_id)
      return;

    // size can be particle only or also with zooplankton data.
    if (fields.size() != getSize())
      return;

    Reading r(DUNE::Time::Clock::getSinceEpoch());

    for (size_t i = 0; i < fields.size(); i++)
      r.add(fields[i]);

    m_log.push(r);
    setNewData();
  }

  //! Get expected size of return (i.e number of fields)
  //! @return expected size of return.
  size_t
  getSize(void) const
  {
    return m_extended ? c_octopus_zoop_size : c_octopus_part_size;
  }

  //! Trigger timer.
  DUNE::Time::Counter<float> m_timer;
  //! Desired control mode
  OctopusModes m_mode;
  //! Extended output mode (with zooplankton).
  bool m_extended;
};

#endif
