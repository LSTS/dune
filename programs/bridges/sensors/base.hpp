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

#ifndef BRIDGES_SENSORS_BASE_HPP
#define BRIDGES_SENSORS_BASE_HPP

#include <DUNE/DUNE.hpp>

// Local headers.
#include "rules.hpp"
#include "../log/reading.hpp"
#include "../pmc/sibBus.hpp"

static const size_t c_sensor_bfr_size = 1024;

//! Sensor base class. All devices should derive from this class.
//! This class holds key system's state to be fed to sensors when required.
//! Supports a queue of log readings (vector of strings).
class Sensor
{
public:
  //! Constructor.
  Sensor(unsigned lane, SibBus* sib, unsigned baud, float depth = 0.1, unsigned dive = 0, float alt = 0):
    m_sm(BS_SYNC),
    m_data_index(0),
    m_sib(sib),
    m_depth(depth),
    m_dive(dive),
    m_altitude(alt),
    m_state(UDR_ELSE),
    m_sampling_rate(0.0),
    m_new_data(false),
    m_active(false),
    m_wait_setup(true),
    m_sampler(NULL),
    m_lane(lane),
    m_baud(baud)
  { }

  //! Destructor.
  ~Sensor(void)
  {
    DUNE::Memory::clear(m_sampler);
  }

  //! Update device status messages.
  //! @param[in] depth current depth.
  //! @param[in] dive current dive number.
  //! @param[in] desc ascending, descending, or else.
  //! @param[in] alt current altitude.
  //! @return true if sensor should be enabled, false otherwise.
  bool
  update(float depth, unsigned dive, UpDownRule state, float alt)
  {
    m_depth = depth;
    m_dive = dive;
    m_state = state;
    m_altitude = alt;

    if (m_sampler == NULL)
      return false;

    float rate = m_sampler->enable(depth, state, dive);

    if (rate < 0)
    {
      if (m_active)
        std::cerr << "Lane " << m_lane << ": device: not enabled" << std::endl;

      m_active = false;
      return false;
    }

    if (rate != m_sampling_rate)
    {
      std::cerr << "Lane " << m_lane << ": device: set sampling rate" << std::endl;
      m_sampling_rate = rate;
      m_wait_setup = true;
    }

    return true;
  }

  unsigned
  getBaudRate(void)
  {
    return m_baud;
  }

  //! Setup device with all parameters.
  //! @return true if device ready, false otherwise.
  bool
  setup(void)
  {
    std::cerr << "Lane " << m_lane << ": device: setup" << std::endl;
    if (onSetup())
    {
      m_wait_setup = false;
      return true;
    }

    return false;
  }

  //! Setup device with all parameters.
  //! @return true if device ready, false otherwise.
  virtual bool
  onSetup(void)
  {
    return true;
  }

  //! On update parameters.
  virtual void
  onUpdateParameters(void)
  { }

  //! Check if this devices requires setup.
  //! @return true if device needs setup.
  bool
  needsSetup(void)
  {
    return m_wait_setup;
  }

  //! Parse data buffer.
  //! @return true, if full frame parsed and added to the
  //! queue, false otherwise.
  virtual bool
  parse(uint8_t* bfr, size_t bfr_size)
  {
    return true;
  }

  //! Parse byte
  //! @return true, if full frame parsed and added to the
  //! queue, false otherwise.
  virtual bool
  parse(uint8_t byte)
  {
    switch (m_sm)
    {
      case (BS_SYNC):
        if (byte == '\n' || byte == '\r')
          break;

        // any byte will be accepted as synch.
        Sensor::m_data_index = 0;
        m_data[Sensor::m_data_index++] = byte;
        m_sm = BS_TERM;
        break;
      case (BS_TERM):
        m_data[Sensor::m_data_index++] = byte;

        if (byte == '\n' || byte == '\r')
        {
          decode();
          m_sm = BS_SYNC;
          return true;
        }
        break;
    }

    return false;
  }

  //! Decode packet.
  virtual void
  decode(void)
  {
    std::string str((char*)m_data, Sensor::m_data_index);
    std::cerr << "Lane " << m_lane << ": recv: " << DUNE::Streams::sanitize(str) << std::endl;

    //! List of fields.
    std::vector<std::string> fields;
    fields.clear();

    DUNE::Utils::String::split(str.substr(1, str.size() - 2), ",", fields);

    onDecode(fields);
  }

  //! Send a trigger.
  virtual void
  trigger(void)
  { }

  //! On decode virtual method.
  //! @param[in] fields fields of return data.
  virtual void
  onDecode(const std::vector<std::string> fields)
  { }

  virtual std::string
  getHeader(void) const
  {
    return "";
  }

  virtual size_t
  getHeaderSize(void) const
  {
    return 0;
  }

  virtual std::string
  getData(void)
  {
    return "";
  }

  //! The data has fresh data to send?
  //! @return true if sensor has new data, false otherwise.
  bool
  hasData(void)
  {
    return m_new_data;
  }

  //! Clear new data flag and empty containers.
  void
  clear(void)
  {
    m_new_data = false;

    // clear log entries.
    std::queue<Reading> empty;
    std::swap(m_log, empty);
  }

  //! Get log size (size of queue).
  //! @return size of log.
  size_t
  getLogSize(void)
  {
    return m_log.size();
  }

  //! Pop a reading from queue.
  //! @return popped reading.
  Reading
  pop(void)
  {
    Reading value = m_log.front();
    m_log.pop();
    return value;
  }

  //! Send command to device. Repeat a few times before replying failure.
  //! @param[in] cmd command to send.
  //! @param[in] ack command acknowledged.
  //! @param[in] nack command not acknowledged.
  //! @param[in] timeout reply timeout.
  //! @param[in] retries number of retries.
  //! @return true if command succeeded, false otherwise.

  bool
  sendAndRepeat(const std::string& cmd, const std::string& ack, const std::string& nack = "", float timeout = 1.0, unsigned retries = 3)
  {
    for (unsigned i = 0; i < retries; ++i)
    {
      if (sendCommand(cmd, true, ack, nack, timeout))
        return true;
    }

    return false;
  }

  //! Send command to device.
  //! @param[in] cmd command to send.
  //! @param[in] wack wait for ack.
  //! @param[in] ack command acknowledged.
  //! @param[in] nack command not acknowledged.
  //! @param[in] timeout reply timeout.
  //! @return true if command succeeded, false otherwise.
  bool
  sendCommand(const std::string& cmd, bool wack = false, const std::string& ack = "", const std::string& nack = "", float timeout = 1.0)
  {
    if (m_sib == NULL)
      return false;

    // send command as is.
    std::string bfr(cmd);
    std::cerr << "Lane " << m_lane << ": send: " << DUNE::Streams::sanitize(cmd) << std::endl;
    m_sib->sendToSensor((const uint8_t*)bfr.c_str(), bfr.size());

    try
    {
      return wack ? readUntil(ack, nack, timeout) : true;
    }
    catch (std::runtime_error& e)
    {
      std::cerr << "Lane " << m_lane << ": read error: " << e.what() << std::endl;
      return false;
    }
  }

  //! Read input until a given sequence is received. Note that
  //! data after the sequence might be discarded.
  //! @param[in] ack command acknowledged.
  //! @param[in] nack command not acknowledged.
  //! @param[in] timeout timeout in second.
  //! @return true if command was handled, false otherwise.
  bool
  readUntil(const std::string& ack, const std::string& nack, float timeout)
  {
    DUNE::Time::Counter<float> timer(timeout);
    char bfr[512] = {0};
    size_t offset = 0;
    std::string line;

    while (!timer.overflow())
    {
      size_t rv = m_sib->readFromSensor((uint8_t*)bfr + offset, sizeof(bfr) - offset);

      if (!rv)
        continue;

      if (offset + rv >= sizeof(bfr))
        break;

      std::cerr << "Lane " << m_lane << ": [cmd|reply] " << DUNE::Streams::sanitize(bfr) << std::endl;

      for (size_t i = offset; i < offset + rv; ++i)
      {
        line.push_back(bfr[i]);

        // Detect line termination.
        if (bfr[i] == '\n')
        {
          std::cerr << "Lane " << m_lane << ": [cmd|parsed] " << DUNE::Streams::sanitize(line) << std::endl;

          if (DUNE::Utils::String::contains(line, nack))
            return false;
          else if (DUNE::Utils::String::contains(line, ack))
            return true;

          line.clear();
        }
      }

      offset += rv;
    }

    std::cerr << "Lane " << m_lane << ": [cmd|not ack]" << std::endl;
    return false;
  }

  //! Update sampler rules with configuration file parameters.
  //! @param[in] cfg configuration file.
  //! @param[in] section section header.
  void
  setConfig(DUNE::Parsers::Config& cfg, const std::string& section)
  {
    DUNE::Memory::replace(m_sampler, new Rules(cfg, section));
    onUpdateParameters();
  }

  //! Is sensor active ?
  //! @return true if sensor is active, false otherwise.
  bool
  isActive(void)
  {
    return m_active;
  }

  //! Reload configuration settings.
  void
  reload(void)
  {
    if (m_sampler != NULL)
    {
      m_sampler->reload();
      onUpdateParameters();
    }
  }

protected:
  //! Very basic states.
  enum BaseStates
  {
    BS_SYNC,
    BS_TERM
  };

  //! Set sensor is active.
  void
  setActive(bool state)
  {
    m_active = state;
  }

  //! New data has arrived.
  void
  setNewData(void)
  {
    m_new_data = true;
    m_active = true;
  }

  //! Flush input.
  void
  flush(void)
  {
    // flush input.
    uint8_t rbfr[128];
    m_sib->readFromSensor(rbfr, sizeof(rbfr));
  }

  //! Retrieve the value of an option in a given section and perform type conversion.
  //! @param opt option.
  //! @param def default value.
  //! @param var destination variable.
  template <typename Type>
  void
  getParameter(const std::string& opt, const std::string& def, Type& var)
  {
    if (m_sampler == NULL)
      return;

    m_sampler->get(opt, def, var);
  }

  //! State machine.
  unsigned m_sm;
  //! Data buffer.
  uint8_t m_data[c_sensor_bfr_size];
  //! Current data packet index.
  size_t m_data_index;
  //! Queue of data.
  std::queue<Reading> m_log;
  //! Serial port interface.
  SibBus* m_sib;
  //! Current depth.
  float m_depth;
  //! Current dive.
  unsigned m_dive;
  //! Current altitude.
  float m_altitude;
  //! System is ascending, descending, or else.
  UpDownRule m_state;
  //! Sensor's sampling rate.
  float m_sampling_rate;

private:
  //! Has fresh data.
  bool m_new_data;
  //! Sensor is active.
  bool m_active;
  //! Sensor requires setup.
  bool m_wait_setup;
  //! Acquisition Rules.
  Rules* m_sampler;
  //! Lane number.
  unsigned m_lane;
  //! Baud rate
  unsigned m_baud;
};

#endif
