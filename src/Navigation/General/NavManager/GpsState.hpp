//***************************************************************************
// Copyright 2007-2025 Universidade do Porto - Faculdade de Engenharia      *
// Laboratório de Sistemas e Tecnologia Subaquática (LSTS)                  *
//***************************************************************************
// This file is part of DUNE: Unified Navigation Environment.               *
//                                                                          *
// Commercial Licence Usage                                                 *
// Licencees holding valid commercial DUNE licences may use this file in    *
// accordance with the commercial licence agreement provided with the       *
// Software or, alternatively, in accordance with the terms contained in a  *
// written agreement between you and Faculdade de Engenharia da             *
// Universidade do Porto. For licensing terms, conditions, and further      *
// information contact lsts@fe.up.pt.                                       *
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
// Author: João Bogas                                                       *
//***************************************************************************

#ifndef NAVIGATION_GENERAL_NAVMANAGER_GPSSTATE_HPP_INCLUDED_
#define NAVIGATION_GENERAL_NAVMANAGER_GPSSTATE_HPP_INCLUDED_

#include <DUNE/DUNE.hpp>

namespace Navigation
{
  namespace General
  {
    namespace NavManager
    {
      using DUNE_NAMESPACES;

      struct GpsState
      {
        GpsState(void):
          is_lost(false),
          val(true),
          send_ir(false),
          id(UINT16_MAX)
        { }

        ~GpsState(void)
        { }

        //! Set counter top.
        void
        setTop(double top)
        {
          interval.setTop(top);
        }

        //! Check if counter overflowed.
        bool
        overflow(void)
        {
          return interval.overflow();
        }

        //! Reset counter.
        //! Set is_lost to false.
        void
        reset(void)
        {
          interval.reset();
          is_lost = false;
        }

        //! Update Gps State.
        //! Return true if Gps fix was lost since last call.
        bool
        update(void)
        {
          // Ignore if id is not set.
          if(id == UINT16_MAX)
            return false;

          if(interval.overflow() && !is_lost)
          {
            is_lost = true;
            return true;
          }

          return false;
        }

        //! Set state of last Gps fix.
        void
        setValid(bool valid)
        {
          val = valid;
        }

        //! Check if Gps fix is invalid.
        bool  // FIXME: This is a bad name for this function
        isInvalid(void)
        {
          return is_lost || !val;
        }

        //! Check if Iridium warning should be sent.
        bool
        sendIridium(void)
        {
          return (is_lost || !val) && !send_ir;
        }

        //! Time without GPS fix.
        Counter<double> interval;
        //! Gps State.
        bool is_lost;
        //! GpsFix validity.
        bool val;
        //! Iridium warning sent.
        bool send_ir;
        //! Gps Entity ID.
        unsigned int id;
      };
    }
  }
}

#endif