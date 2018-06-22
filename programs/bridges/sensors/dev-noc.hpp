//***************************************************************************
// Copyright 2017 OceanScan - Marine Systems & Technology, Lda.             *
//***************************************************************************
// This file is part of DUNE: Unified Navigation Environment.               *
//                                                                          *
// Commercial Licence Usage                                                 *
// Licencees holding valid commercial DUNE licences may use this file in    *
// accordance with the commercial licence agreement provided with the       *
// Software or, alternatively, in accordance with the terms contained in a  *
// written agreement between you and Faculdade de Engenharia da             *
// Universidade do Porto. For licensing terms, conditions, and further      *
// information contact info@oceanscan-mst.com                               *
//                                                                          *
// Modified European Union Public Licence - EUPL v.1.1 Usage                *
// Alternatively, this file may be used under the terms of the Modified     *
// EUPL, Version 1.1 only (the "Licence"), appearing in the file LICENCE.md *
// included in the packaging of this file. You may not use this work        *
// except in compliance with the Licence. Unless required by applicable     *
// law or agreed to in writing, software distributed under the Licence is   *
// distributed on an "AS IS" basis, WITHOUT WARRANTIES OR CONDITIONS OF     *
// ANY KIND, either express or implied. See the Licence for the specific    *
// language governing permissions and limitations at                        *
// https://github.com/LSTS/dune/blob/master/LICENCE.md and                  *
// http://ec.europa.eu/idabc/eupl.html.                                     *
//***************************************************************************
// Author: José Braga                                                       *
//***************************************************************************

#ifndef BRIDGES_SENSORS_DEVICES_NOC_HPP
#define BRIDGES_SENSORS_DEVICES_NOC_HPP

#include <DUNE/DUNE.hpp>
#include "base.hpp"
#include "rules.hpp"

//! Sensor reading index.
enum NOCReadingIndex
{
  NRI_TIME = 0,
  NRI_READING = 1,
  NRI_TEMP = 2,
  NRI_QUAL = 3,
  NRI_STD_DEV = 4,
  NRI_TOTAL = 5
};

//! Different types of probes.
enum NOCProbeType
{
  NPT_AMMONIA,
  NPT_NITRATE,
  NPT_PHOSPHATE,
  NPT_SILICATE
};

//! NOC probe types.
static const char* c_noc_probes[] = {"AMMONIA", "NITRATE", "PHOSPHATE", "SILICATE"};
//! NOC data header.
static const char* c_noc_hdr[] = {"_TIME", "_READING", "_TEMPERATURE", "_QUALITY", "_STD_DEV"};
//! NOC trigger timer timeout.
static const float c_noc_timer = 5.0f;

class DevNOC: public Sensor
{
public:
  DevNOC(unsigned lane, SibBus* sib, NOCProbeType type, unsigned baud):
    Sensor(lane, sib, baud),
    m_type(type),
    m_timestamp(0),
    m_timer(c_noc_timer)
  {
    m_sm = BS_SYNC;
  }

  void
  onUpdateParameters(void)
  {
    getParameter("sta.p1", "10", m_p1);
    getParameter("sta.p2", "200", m_p2);
    getParameter("sta.p3", "1000", m_p3);
  }

  bool
  onSetup(void)
  {
    if (m_sib == NULL)
      return false;

    setClock();
    start();
    sendStatus();
    return true;
  }

  void
  trigger(void)
  {
    if (m_timer.overflow())
    {
      sendStatus();
      sample();
      m_timer.reset();
    }
  }

  //! Command to stop sampling.
  void
  stop(void)
  {
    sendCommand("stop\r");
  }

  //! The download command is issued before the stop command. It downloads a small number
  //! of lines (limit tbd) of diagnostic data to be transmitted unchanged (as a text file) to the base-
  //! station by the glider on completion of a dive. The direction parameter is currently unused by
  //! the sensor.
  void
  download(void)
  {
    // @todo: noc simulator was not accepting download command.
    sendCommand(DUNE::Utils::String::str("download=%c\r", m_state == UDR_DOWN ? 'a' : 'b'));
  }

  bool
  parse(uint8_t byte)
  {
    switch (m_sm)
    {
      case BS_SYNC:
        //fprintf(stderr, "SYNC, %02X\n", byte);
        if (byte == '>')
        {
          m_data_index = 0;
          m_sm = BS_TERM;
        }
        break;

      case BS_TERM:
        //fprintf(stderr, "TERM, %02X\n", byte);
        m_data[Sensor::m_data_index++] = byte;
        if (byte == '>')
        {
          decode();
          m_data_index = 0;
          return true;
        }
        else if (byte == '\r')
        {
          decode();
          m_sm = BS_SYNC;
          return true;
        }
        break;
    }

    return false;
  }

  std::string
  getHeader(void) const
  {
    std::string str;
    for (size_t i = 0; i < NRI_TOTAL; i++)
      str += DUNE::Utils::String::str("%s%s; ", c_noc_probes[m_type], c_noc_hdr[i]);

    return str;
  }

  size_t
  getHeaderSize(void) const
  {
    return NRI_TOTAL;
  }

  std::string
  getData(void)
  {
    if (m_log.size() == 0)
      throw std::runtime_error(DTR("no data to be retrieved"));

    std::string str;
    for (size_t i = 0; i < NRI_TOTAL; i++)
      str += m_log.back().at(i) + "; ";

    return str;
  }

private:
  //! Set device's clock.
  void
  setClock(void)
  {
    DUNE::Time::BrokenDown bdt;
    sendCommand(DUNE::Utils::String::str("clock-set=%d,%d,%d,%d,%d,%d\r",
                                         bdt.day, bdt.month, bdt.year,
                                         bdt.hour, bdt.minutes, bdt.seconds));
  }

  //! Send command to device to start sampling.
  void
  start(void)
  {
    sendCommand(DUNE::Utils::String::str("start=%d\r", m_dive));
  }

  //! Send status update to device.
  void
  sendStatus(void)
  {
    sendCommand(DUNE::Utils::String::str("status=%c,%0.1f,%d,%d,%d\r",
                                         m_state == UDR_DOWN ? 'a' : 'b', m_depth, m_p1, m_p2, m_p3));
  }

  //! Request latest sample from device.
  void
  sample(void)
  {
    sendCommand("sample\r");
  }

  void
  onDecode(const std::vector<std::string> fields)
  {
    if (fields.size() != NRI_TOTAL)
      return;

    // already received this sample.
    unsigned ts = 0;
    DUNE::castLexical(fields[0], ts);

    if (m_timestamp == ts)
      return;

    m_timestamp = ts;
    Reading r(m_timestamp);

    float t;
    for (size_t i = 0; i < NRI_TOTAL; i++)
    {
      // check if can be cast as float, otherwise, do not decode.
      if (!DUNE::castLexical(fields[i], t))
        return;

      r.add(fields[i]);
    }

    m_log.push(r);
    setNewData();
  }

  //! Type of probe.
  NOCProbeType m_type;
  //! Last timestamp.
  unsigned m_timestamp;
  //! Trigger timer.
  DUNE::Time::Counter<float> m_timer;
  //! Parameter 1.
  int32_t m_p1;
  //! Parameter 2.
  int32_t m_p2;
  //! Parameter 3.
  int32_t m_p3;
};

#endif
