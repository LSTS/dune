#ifndef BRIDGES_PMC_FRAME_STATUS_HPP
#define BRIDGES_PMC_FRAME_STATUS_HPP

#include <DUNE/DUNE.hpp>

//! Glider frames.
class FrameStatus
{
public:
  //! Constructor.
  FrameStatus(const std::vector<std::string> fields)
  {
    // cast all values.
    m_id = fields[SF_ID];
    m_date = fields[SF_DATE];
    m_time = fields[SF_TIME];
    m_lat = fields[SF_LAT];
    m_lon = fields[SF_LON];

    DUNE::castLexical(fields[SF_MSN], m_mission);
    DUNE::castLexical(fields[SF_CYCLE], m_cycle);
    DUNE::castLexical(fields[SF_STATUS], m_status);
    DUNE::castLexical(fields[SF_BATTERIES], m_voltage);
  }

  //! Get vehicle name.
  //! @return vehicle name.
  std::string
  getVehicle(void) const
  {
    return m_id;
  }

  //! Get current mission id.
  //! @return mission id.
  unsigned
  getMission(void) const
  {
    return m_mission;
  }

  //! Get current cycle number (cycle = yo).
  //! @return current cycle number.
  unsigned
  getCycle(void) const
  {
    return m_cycle;
  }

  //! Get vehicle latitude.
  //! @return vehicle latitude.
  std::string
  getLatitude(void) const
  {
    return m_lat;
  }

  //! Get vehicle longitude.
  //! @return vehicle longitude.
  std::string
  getLongitude(void) const
  {
    return m_lon;
  }

private:
  enum StateFields
  {
    SF_MRS = 0,
    SF_ID = 1,
    SF_MSN = 2,
    SF_CYCLE = 3,
    SF_STATUS = 4,
    SF_BATTERIES = 5,
    SF_DATE = 6,
    SF_TIME = 7,
    SF_LAT = 8,
    SF_LON = 9
  };

  //! String identifying vehicle id.
  std::string m_id;
  //! Integer identifying actual mission id.
  unsigned m_mission;
  //! Integer identifying cycle number (Cycle = yo).
  unsigned m_cycle;
  //! Vehicle status mask (see Status Code appendix).
  unsigned m_status;
  //! Batteries voltage in V*10 : 291 = 29.1V.
  unsigned m_voltage;
  //! Date stamp (ddmmyy).
  std::string m_date;
  //! Time stamp (hhmmss).
  std::string m_time;
  //! Latitude (ddmm.mmm). Positive if North, < 0 if South.
  std::string m_lat;
  //! Longitude (ddmm.mmm) Positive if East, < 0 if West.
  std::string m_lon;
};

#endif
