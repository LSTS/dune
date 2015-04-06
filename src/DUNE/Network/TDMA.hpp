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

#ifndef DUNE_NETWORK_TDMA_HPP_INCLUDED_
#define DUNE_NETWORK_TDMA_HPP_INCLUDED_

// ISO C++ 98 headers.
#include <cmath>
#include <set>

// DUNE headers.
#include <DUNE/IMC/Definitions.hpp>

namespace DUNE
{
  namespace Network
  {
    //! Time division multiple access (%TDMA) is a channel access method for
    //! shared medium networks. This class allows to setup a TDMA scheme and
    //! to signal when to establish communication.
    //!
    //! @author José Braga.
    class TDMA
    {
    public:
      //! Empty Constructor.
      TDMA(void)
      { }

      //! Constructor.
      //! @param[in] slot_count total number of slots.
      //! @param[in] slot_number slots.
      //! @param[in] duration slots duration in seconds.
      TDMA(unsigned slot_count, std::vector<unsigned>& slot_number, unsigned duration)
      {
        reset(slot_count, slot_number, duration);
      }

      //! Check if we reached TDMA slot.
      //! @param[in] msg GPS fix.
      //! @return true if we are in slot, false otherwise.
      bool
      check(const IMC::GpsFix* msg)
      {
        return check(msg->utc_time);
      }

      //! Check if we reached TDMA slot.
      //! @param[in] utc_time UTC Time.
      //! @return true if we are in slot, false otherwise.
      bool
      check(float utc_time)
      {
        if (m_slot_count == 0 || m_slot_duration == 0)
          return false;

        unsigned thour = (unsigned)(utc_time / 3600);
        unsigned tmin = (unsigned)(((utc_time / 3600.0) - thour) * 60);
        unsigned tsec = (unsigned)Math::round(((((utc_time / 3600.0) - thour) * 60.0) - tmin) * 60.0);

        if (m_seconds.find(tsec) != m_seconds.end())
          return true;

        return false;
      }

      //! Set number of total slots.
      //! @param[in] number total number of slots.
      void
      setTotalSlots(unsigned number)
      {
        m_slot_count = number;
      }

      //! Set slot number.
      //! @param[in] number slot number.
      void
      setSlotNumber(std::vector<unsigned>& number)
      {
        m_slot_number = number;
      }

      //! Set slot duration.
      //! @param[in] number slot duration.
      void
      setDuration(unsigned number)
      {
        m_slot_duration = number;
      }

      //! Reset TDMA slots.
      void
      reset(void)
      {
        setup();
      }

      //! Reset TDMA slots with given parameters.
      //! @param[in] slot_count total number of slots.
      //! @param[in] slot_number slots.
      //! @param[in] duration slots duration in seconds.
      void
      reset(unsigned slot_count, std::vector<unsigned>& slot_number, unsigned duration)
      {
        setTotalSlots(slot_count);
        setSlotNumber(slot_number);
        setDuration(duration);
        setup();
      }

    private:
      //! Setup slots.
      void
      setup(void)
      {
        m_seconds.clear();

        if (m_slot_count == 0)
          return;

        for (unsigned i = 0; i < std::ceil(60.0 / m_slot_count); ++i)
        {
          for (unsigned j = 0; j < m_slot_number.size(); ++j)
          {
            if (m_slot_number[j] >= m_slot_count)
              break;

            unsigned value = (m_slot_number[j] + i * m_slot_count) * m_slot_duration;

            if (value >= 60)
              break;

            m_seconds.insert(value);
          }
        }
      }

      //! Seconds.
      std::set<unsigned> m_seconds;
      //! Number of TDMA slots.
      unsigned m_slot_count;
      //! TDMA slot numbers
      std::vector<unsigned> m_slot_number;
      //! TDMA slot duration.
      unsigned m_slot_duration;
    };
  }
}

#endif
