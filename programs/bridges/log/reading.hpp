#ifndef BRIDGES_LOG_READING_HPP
#define BRIDGES_LOG_READING_HPP

#include <DUNE/DUNE.hpp>

//! Sensor reading class. This structure should be able to handle
//! data from the device, already parsed and ready to be stored.
//! A single reading (single feedback from sensor) may contain
//! multiple sensor measurements (e.g: temperature, voltage).
class Reading
{
public:
  Reading(double tstamp):
    m_timestamp(tstamp)
  {
    m_data.clear();
    m_index = 0;
  }

  Reading(double tstamp, size_t size):
    m_timestamp(tstamp)
  {
    m_data.clear();
    m_data.resize(size);
    m_index = 0;
  }

  //! Reset data pointer.
  void
  reset(void)
  {
    m_index = 0;
  }

  //! Add new value.
  //! @param[in] value new data value.
  void
  add(std::string value)
  {
    m_data.push_back(value);
  }

  //! Incrementally pop value of data.
  //! @return data value.
  std::string
  pop(void)
  {
    if (m_index >= size())
      throw std::runtime_error(DTR("invalid index"));

    return m_data.at(m_index++);
  }

  //! Return value at index.
  //! @return data value.
  std::string
  at(size_t index)
  {
    if (index >= size())
      throw std::runtime_error(DTR("invalid index"));

    return m_data.at(index);
  }

  //! Set value at index.
  //! @param[in] value new value.
  std::string&
  operator()(size_t index)
  {
    if (index >= size())
      throw std::runtime_error(DTR("invalid index"));

    return m_data[index];
  }

  //! Get data container size.
  //! @return size of data container.
  size_t
  size(void) const
  {
    return m_data.size();
  }

  //! Data available
  //! @return true if data is available to be read, false otherwise.
  bool
  toRead(void) const
  {
    return m_index < size();
  }

  //! Get reading timestamp.
  //! @return reading timestamp.
  double
  getTime(void) const
  {
    return m_timestamp;
  }
private:
  //! Reading timestamp. This should refer to a single reading, or
  //! single packet return from the sensor.
  double m_timestamp;
  //! Data container.
  std::vector<std::string> m_data;
  //! Data pointer.
  unsigned m_index;
};

#endif
