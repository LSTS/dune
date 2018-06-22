#ifndef BRIDGES_LOG_LOGGER_HPP
#define BRIDGES_LOG_LOGGER_HPP

#include <DUNE/DUNE.hpp>

#include "utils.hpp"
#include "missionData.hpp"
#include "sensorReading.hpp"
#include "../sensors/base.hpp"

//! Full log filename
static const char* c_log_name = ".dat.";
//! Subsampled log filename.
static const char* c_sub_name = ".sdat.";

//! Logger file manager. This class manages data files and fetches
//! data from sensors to write into log files. Vehicle state needs
//! to be updated into the class.
class Logger
{
public:
  //! Constructor.
  Logger(std::string path, float log_per, float sub_per):
    m_path(path)
  {
    m_log_ctr.setTop(log_per);
    m_sub_ctr.setTop(sub_per);
  }

  //! Destructor.
  ~Logger(void)
  {
    // clear contents.
    std::vector<SensorReading*>::iterator itr = m_sensors.begin();
    for (; itr != m_sensors.end(); ++itr)
      delete *itr;

    m_sensors.clear();
    closeLog();
  }

  //! Set mission information.
  //! @param[in] resource navigation resource.
  //! @param[in] id current mission id.
  //! @param[in] yo current mission yo.
  //! @param[in] lat system's latitude.
  //! @param[in] lon system's longitude.
  //! @param[in] depth system's depth.
  //! @param[in] altitude system's altitude.
  void
  setState(std::string resource, unsigned id, unsigned yo,
           std::string lat, std::string lon, float depth, float alt)
  {
    m_mission.update(resource, id, yo, lat, lon, depth, alt);
    std::string name = DUNE::Utils::String::str("%d%s%d", id, c_log_name, yo);

    // we have mission data to log.
    update();

    if (name == m_log_fname)
      return;

    closeLog();
    m_log_fname = name;
    m_sub_fname = DUNE::Utils::String::str("%d%s%d", id, c_sub_name, yo);
  }

  //! Add sensor to vector.
  //! @param[in] sensor sensor to be added.
  void
  addSensor(Sensor* sensor)
  {
    SensorReading* sr = new SensorReading(sensor);
    m_sensors.push_back(sr);
  }

  //! Logger's update cycle.
  void
  update(void)
  {
    // update full log.
    updateFullLog();
    // update sub sampled log.
    updateSubSampledLog();
  }

private:
  // Update full log file.
  void
  updateFullLog(void)
  {
    // append to full log
    if (m_log_ctr.overflow())
    {
      if (m_log_fname.empty())
        return;

      // processed data.
      if (!m_log_file.is_open())
      {
        m_log_file.open((m_path / m_log_fname).c_str(), std::ofstream::app | std::ios::binary);
        m_log_file << getHeader();
      }

      // something new to be added
      if (fetch())
      {
        m_log_file << getLatestData();
        m_log_ctr.reset();
      }
    }
  }

  //! Update subsampled log file.
  void
  updateSubSampledLog(void)
  {
    // append to sub sampled file
    if (m_sub_ctr.overflow())
    {
      // processed data.
      if (!m_sub_file.is_open())
      {
        m_sub_file.open((m_path / m_sub_fname).c_str(), std::ofstream::app | std::ios::binary);
        m_sub_file << getHeader();
      }

      if (checkSubSampled())
      {
        m_sub_file << getSubSampledData();
        m_sub_ctr.reset();
      }
    }
  }

  //! Close log.
  void
  closeLog(void)
  {
    m_log_file.close();
    m_sub_file.close();
  }

  //! Fetch data from sensors.
  //! @return true if there's new data to be logged.
  bool
  fetch(void)
  {
    bool new_data = false;

    // we have new mission data, but we still HAVE to iterate
    // each sensor and update internal readings.
    if (m_mission.hasData())
      new_data = true;

    // this iteration *must be* kept.
    std::vector<SensorReading*>::iterator itr = m_sensors.begin();
    for (; itr != m_sensors.end(); ++itr)
    {
      if ((*itr)->update())
        new_data = true;
    }

    return new_data;
  }

  //! Checks if there's subsampled data to be read.
  //! @return true if there's subsampled data to be logged.
  bool
  checkSubSampled(void)
  {
    if (m_mission.hasSubSampledData())
      return true;

    std::vector<SensorReading*>::iterator itr = m_sensors.begin();
    for (; itr != m_sensors.end(); ++itr)
    {
      if ((*itr)->hasSubSampledData())
        return true;
    }

    return false;
  }

  //! Get log file's header.
  //! @return header file.
  std::string
  getHeader(void)
  {
    std::string header = m_mission.getHeader();

    std::vector<SensorReading*>::iterator itr = m_sensors.begin();
    for (; itr != m_sensors.end(); ++itr)
      header += (*itr)->getHeader();

    header += "\r\n";
    return header;
  }

  //! Get latest data from sensors, if available.
  //! @return latest data from sensors.
  std::string
  getLatestData(void)
  {
    std::string line = getDateAndTime() + m_mission.getLatestData();

    std::vector<SensorReading*>::iterator itr = m_sensors.begin();
    for (; itr != m_sensors.end(); ++itr)
      line += (*itr)->getLatestData();

    line += "\r\n";
    return line;
  }

  //! Get subsampled data from sensors, if available.
  //! @return subsampled data from sensors.
  std::string
  getSubSampledData(void)
  {
    std::string line = getDateAndTime() + m_mission.getSubSampledData();

    std::vector<SensorReading*>::iterator itr = m_sensors.begin();
    for (; itr != m_sensors.end(); ++itr)
      line += (*itr)->getSubSampledData();

    line += "\r\n";
    return line;
  }

  //! Log's path.
  DUNE::FileSystem::Path m_path;
  //! Full Log file.
  std::ofstream m_log_file;
  //! Full Log file name.
  std::string m_log_fname;
  //! Full Log periodicity.
  float m_log_per;
  //! Full Log data time-to-live.
  unsigned m_log_ttl;
  //! Full Log data counter.
  DUNE::Time::Counter<float> m_log_ctr;

  //! Subsampled Log file.
  std::ofstream m_sub_file;
  //! Subsampled Log file name
  std::string m_sub_fname;
  //! Subsampled Log periodicity.
  float m_sub_per;
  //! Subsampled Log data counter.
  DUNE::Time::Counter<float> m_sub_ctr;

  //! Mission data.
  MissionData m_mission;
  //! List of sensors.
  std::vector<SensorReading*> m_sensors;
};

#endif
