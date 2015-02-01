//***************************************************************************
// Copyright 2007-2015 Universidade do Porto - Faculdade de Engenharia      *
// Laboratório de Sistemas e Tecnologia Subaquática (LSTS)                  *
//***************************************************************************
// This file is part of DUNE: Unified Navigation Environment.               *
//                                                                          *
// Commercial Licence Usage                                                 *
// Licencees holding valid commercial DUNE licences may use this file in    *
// accordance with the commercial licence agreement provided with the       *
// Software or, alternatively, in accordance with the terms contained in a  *
// written agreement between you and Universidade do Porto. For licensing   *
// terms, conditions, and further information contact lsts@fe.up.pt.        *
//                                                                          *
// European Union Public Licence - EUPL v.1.1 Usage                         *
// Alternatively, this file may be used under the terms of the EUPL,        *
// Version 1.1 only (the "Licence"), appearing in the file LICENCE.md       *
// included in the packaging of this file. You may not use this work        *
// except in compliance with the Licence. Unless required by applicable     *
// law or agreed to in writing, software distributed under the Licence is   *
// distributed on an "AS IS" basis, WITHOUT WARRANTIES OR CONDITIONS OF     *
// ANY KIND, either express or implied. See the Licence for the specific    *
// language governing permissions and limitations at                        *
// http://ec.europa.eu/idabc/eupl.html.                                     *
//***************************************************************************
// Author: Eduardo Marques                                                  *
// Author: Pedro Vaz Teixeira                                               *
// Author: José Braga                                                       *
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

    //! World-magnetic model 2010-2015 interface class.
    class WMM
    {
    public:
      //! Constructor.
      //! By default it looks up WMM 2015 data files
      //! in the '../etc/wmm' directory relative to the location of the current
      //! executable.
      WMM(void);

      //! Constructor.
      //! WMM 2010 files will be searched within 'root/wmm'.
      //! @param[in] root root path for searching WMM 2010 data files
      WMM(const FileSystem::Path& root);

      //! Destructor.
      ~WMM(void);

      //! Get geoid height for given latitude and longitude (in radians).
      //! Different from WGS-84 height (above ellipsoid).
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
