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
// Author: José Braga                                                       *
//***************************************************************************

#ifndef DUNE_NAVIGATION_RANGING_HPP_INCLUDED_
#define DUNE_NAVIGATION_RANGING_HPP_INCLUDED_

// ISO C++ 98 headers.
#include <cmath>

// DUNE headers.
#include <DUNE/Coordinates/WGS84.hpp>
#include <DUNE/IMC/Definitions.hpp>
#include <DUNE/Memory.hpp>
#include <DUNE/Tasks/Task.hpp>

namespace DUNE
{
  namespace Navigation
  {
    //! Maximum number of transponders.
    static const unsigned c_max_transponders = 4;

    //! Basic transponder information.
    struct BasicTransponder
    {
      //! Constructor.
      BasicTransponder():
        lat(0),
        lon(0),
        x(0),
        y(0),
        depth(0)
      { }

      //! Initialize transponder position.
      //! @param[in] origin navigation reference.
      //! @param[in] latitude WGS-84 latitude.
      //! @param[in] longitude WGS-84 longitude.
      //! @param[in] z transponder depth.
      void
      initialize(const IMC::GpsFix* origin, double latitude, double longitude, double z)
      {
        lat = latitude;
        lon = longitude;
        depth = z;

        if (origin == NULL)
          return;

        update(origin);
      }

      //! Update transponder navigation reference.
      //! @param[in] origin new navigation reference.
      void
      update(const IMC::GpsFix* origin)
      {
        if (origin == NULL)
          return;

        Coordinates::WGS84::displacement(origin->lat, origin->lon, 0.0,
                                         lat, lon, depth,
                                         &x, &y);
      }

      //! WGS-84 latitude coordinate.
      double lat;
      //! WGS-84 longitude coordinate.
      double lon;
      //! Transponder North displacement relative to given reference (m).
      double x;
      //! Transponder East displacement relative to given reference (m).
      double y;
      //! Transponder depth (m).
      double depth;
    };

    //! %Ranging is responsible to contain functions necessary
    //! to process ranging data (assuming a transceiver plus
    //! one (at least) transponder setup.
    //!
    //! @author José Braga.
    class Ranging
    {
    public:
      //! Constructor.
      Ranging(void):
        m_origin(NULL)
      {
        m_num_transponders = 0;

        for (unsigned i = 0; i < c_max_transponders; ++i)
          m_transponders[i] = NULL;
      }

      //! Destructor.
      ~Ranging(void)
      {
        Memory::clear(m_origin);

        for (unsigned i = 0; i < c_max_transponders; ++i)
          Memory::clear(m_transponders[i]);
      }

      //! Update setup navigation reference.
      //! @param[in] msg new navigation reference.
      void
      updateOrigin(const IMC::GpsFix* msg)
      {
        Memory::replace(m_origin, new IMC::GpsFix(*msg));

        // Correct transponders positions.
        for (unsigned i = 0; i < c_max_transponders; i++)
        {
          if (m_transponders[i] != NULL)
            m_transponders[i]->update(msg);
        }
      }

      //! Set new LBL configuration.
      //! @param[in] msg new LBL configuration.
      void
      setup(const IMC::LblConfig* msg)
      {
        m_num_transponders = 0;

        IMC::MessageList<IMC::LblBeacon>::const_iterator itr = msg->beacons.begin();
        for (unsigned i = 0; itr != msg->beacons.end(); ++itr, ++i)
          addTransponder(i, *itr);
      }

      //! Get size of acoustic setup.
      //! @return size of setup.
      unsigned
      getSize(void)
      {
        return m_num_transponders;
      }

      //! See if specific transponder exists.
      //! @param[in] id transponder id.
      //! @return true if it exists, false otherwise.
      bool
      exists(unsigned id)
      {
        return m_transponders[id] != NULL;
      }

      //! Get 3D location of transponder.
      //! @param[in] id transponder id.
      //! @param[out] i North displacement.
      //! @param[out] j East displacement.
      //! @param[out] k transponder depth.
      void
      getLocation(unsigned id, double* i, double* j, double* k)
      {
        if (m_transponders[id] == NULL)
          return;

        *i =  m_transponders[id]->x;
        *j =  m_transponders[id]->y;
        *k =  m_transponders[id]->depth;
      }

      //! Get latitude of transponder.
      //! @param[in] id transponder id.
      //! @return transponder latitude.
      double
      getLat(unsigned id)
      {
        if (m_transponders[id] == NULL)
          return 0.0;

        return m_transponders[id]->lat;
      }

      //! Get longitude of transponder.
      //! @param[in] id transponder id.
      //! @return transponder longitude.
      double
      getLon(unsigned id)
      {
        if (m_transponders[id] == NULL)
          return 0.0;

        return m_transponders[id]->lon;
      }

      //! Get depth of transponder.
      //! @param[in] id transponder id.
      //! @return transponder depth.
      double
      getDepth(unsigned id)
      {
        if (m_transponders[id] == NULL)
          return 0.0;

        return m_transponders[id]->depth;
      }

    private:
      //! Add new transponder to acoustic setup.
      //! @param[in] id transponder id.
      //! @param[in] msg new transponder configuration.
      void
      addTransponder(unsigned id, const IMC::LblBeacon* msg)
      {
        if (id >= c_max_transponders)
          return;

        Memory::clear(m_transponders[id]);

        if (msg == NULL)
          return;

        if (id + 1 > m_num_transponders)
          m_num_transponders = id + 1;

        Memory::replace(m_transponders[id], new BasicTransponder);

        m_transponders[id]->initialize(m_origin, msg->lat, msg->lon, msg->depth);
      }

      //! Ranging transponder configuration.
      BasicTransponder* m_transponders[c_max_transponders];
      //! Navigation origin.
      IMC::GpsFix* m_origin;
      //! Number of transponders;
      unsigned m_num_transponders;
    };
  }
}

#endif
