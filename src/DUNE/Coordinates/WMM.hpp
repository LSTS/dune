//***************************************************************************
// Copyright (C) 2007-2013 Laboratório de Sistemas e Tecnologia Subaquática *
// Departamento de Engenharia Electrotécnica e de Computadores              *
// Rua Dr. Roberto Frias, 4200-465 Porto, Portugal                          *
//***************************************************************************
// Author: Eduardo Marques                                                  *
// Author: Pedro Vaz Teixeira                                               *
//***************************************************************************
// $Id:: WMM.hpp 12667 2013-01-22 02:44:42Z rasm                          $:*
//***************************************************************************

#ifndef DUNE_COORDINATES_WMM_HPP_INCLUDED_
#define DUNE_COORDINATES_WMM_HPP_INCLUDED_

#include <DUNE/Config.hpp>
#include <DUNE/FileSystem/Path.hpp>

namespace DUNE
{
  namespace Coordinates
  {
    // Export DLL Symbol.
    class DUNE_DLL_SYM WMM;

    // Forward declaration of internal data.
    struct WMMData;

    //! World-magnetic model 2005-2010 interface class.
    class WMM
    {
    public:
      //! Constructor.
      //! By default it looks up WMM 2010 data files
      //! in the '../etc/wmm' directory relative to the location of the current
      //! executable.
      WMM(void);

      //! Constructor.
      //! WMM 2010 files will be searched within 'root/wmm'.
      //! @param[in] root root path for searching WMM 2010 data files
      WMM(const FileSystem::Path& root);

      //! Destructor.
      ~WMM(void);

      //! Get geod height for given latitude and longitude (in radians).
      //! @param[in] lat WGS84 latitude
      //! @param[in] lon WGS84 longitude
      //! @return geoid height
      double
      height(double lat, double lon);

      //! Get magnetic declination for given latitude and longitude (in radians).
      //! @param[in] lat WGS84 latitude
      //! @param[in] lon WGS84 longitude
      //! @param[in] height optional height argument (defaults to 0)
      //! @return magnetic declination
      double
      declination(double lat, double lon, double height = 0);

    private:
      void
      init(const FileSystem::Path& root);

      WMMData* m_data;
    };
  }
}
#endif
