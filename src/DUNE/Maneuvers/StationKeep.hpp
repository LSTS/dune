//***************************************************************************
// Copyright (C) 2007-2013 Laboratório de Sistemas e Tecnologia Subaquática *
// Departamento de Engenharia Electrotécnica e de Computadores              *
// Rua Dr. Roberto Frias, 4200-465 Porto, Portugal                          *
//***************************************************************************
// Author: Pedro Calado                                                     *
//***************************************************************************
// $Id:: StationKeep.hpp 12988 2013-02-21 17:49:55Z pdcalado              $:*
//***************************************************************************

#ifndef DUNE_MANEUVERS_STATION_KEEP_HPP_INCLUDED_
#define DUNE_MANEUVERS_STATION_KEEP_HPP_INCLUDED_

// DUNE headers.
#include <DUNE/IMC.hpp>
#include <DUNE/Maneuvers/Maneuver.hpp>
#include <DUNE/Coordinates.hpp>

namespace DUNE
{
  namespace Maneuvers
  {
    // Export DLL Symbol.
    class DUNE_DLL_SYM StationKeep;

    //! Class to control station keeping behavior
    class StationKeep
    {
    public:
      //! Default constructor.
      //! @param[in] maneuver pointer to rows maneuver
      //! @param[in] task pointer to task object (debug and inf)
      //! @param[in] min_radius minimum radius to consider in maneuver
      StationKeep(const IMC::StationKeeping* maneuver, Maneuvers::Maneuver* task,
                  float min_radius);

      //! Default constructor.
      //! @param[in] task pointer to task object (debug and inf)
      //! @param[in] lat latitude of maneuver
      //! @param[in] lon longitude of maneuver
      //! @param[in] radius station keeping radius
      //! @param[in] z zed reference for this maneuver
      //! @param[in] z_units units of the zed reference
      //! @param[in] speed speed reference for maneuver
      //! @param[in] speed_units speed units of the reference
      StationKeep(Maneuvers::Maneuver* task, double lat, double lon,
                  float radius, float z, uint8_t z_units,
                  float speed, uint8_t speed_units);

      //! Update behavior
      //! @param[in] state pointer to EstimatedState message
      //! @param[in] near if pathcontrolstate flag near is on, this should be true
      void
      update(const IMC::EstimatedState* state, bool near);

      //! Check if vehicle is inside boundary
      //! @return true if inside
      bool
      isInside(void)
      {
        return m_inside;
      }

      //! Check if vehicle is moving
      //! @return true if moving
      bool
      isMoving(void)
      {
        return m_moving;
      }

    private:
      //! Pointer to task
      Maneuvers::Maneuver* m_task;
      //! DesiredPath message
      IMC::DesiredPath m_path;
      //! Maneuver's latitude
      double m_lat;
      //! Maneuver's longitude
      double m_lon;
      //! Maneuver's radius
      double m_radius;
      //! Flag will tell if the vehicle is moving
      bool m_moving;
      //! Flag will tell if the vehicle is inside the requested radius
      bool m_inside;
    };
  }
}

#endif
