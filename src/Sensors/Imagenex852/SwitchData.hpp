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
// Author: Ricardo Martins                                                  *
//***************************************************************************

#ifndef SENSORS_IMAGENEX_852_SWITCH_DATA_HPP_INCLUDED_
#define SENSORS_IMAGENEX_852_SWITCH_DATA_HPP_INCLUDED_

// DUNE headers.
#include <DUNE/DUNE.hpp>

namespace Sensors
{
  namespace Imagenex852
  {
    using DUNE_NAMESPACES;

    //! Imagenex 852 Switch Data.
    class SwitchData
    {
    public:
      //! Constructor.
      SwitchData(void)
      {
        std::memset(m_data, 0, sizeof(m_data));
        m_data[SD_HDR0] = 0xFE;
        m_data[SD_HDR1] = 0x44;
        m_data[SD_HEAD_ID] = 0x11;
        m_data[SD_ABSORPTION] = 20;
        m_data[SD_FREQUENCY] = 0;
        m_data[SD_TERM] = 0xFD;

        setStartGain(20);
        setDataPoints(252);
      }

      //! Set start gain.
      //! @param[in] gain start gain value.
      //! return true.
      bool
      setStartGain(uint8_t gain)
      {
        if (gain > 40)
          return false;

        m_data[SD_START_GAIN] = gain;
        return true;
      }

      //! Get start gain from switch data command.
      //! @return start gain value.
      uint8_t
      getStartGain(void) const
      {
        return m_data[SD_START_GAIN];
      }

      //! Set range value.
      //! @param[in] range range value.
      //! return true if successful, false otherwise.
      bool
      setRange(uint8_t range)
      {
        uint8_t ranges[] = {5, 10, 20, 30, 40, 50};

        for (int i = sizeof(ranges) - 1; i >= 0; --i)
        {
          if (range >= ranges[i])
          {
            m_data[SD_RANGE] = ranges[i];
            return true;
          }
        }

        return false;
      }

      //! Get range from switch data command.
      //! @return range value.
      uint8_t
      getRange(void)
      {
        return m_data[SD_RANGE];
      }

      //! Set number of sonar return data points.
      //! @param[in] dpoints number of sonar return data points.
      void
      setDataPoints(unsigned dpoints)
      {
        if (dpoints == 0)
        {
          m_data[SD_DATA_POINTS] = 0;
          m_data[SD_PROFILE] = 1;
        }
        else if (dpoints <= 252)
        {
          m_data[SD_DATA_POINTS] = 25;
          m_data[SD_PROFILE] = 0;
        }
        else if (dpoints <= 500)
        {
          m_data[SD_DATA_POINTS] = 50;
          m_data[SD_PROFILE] = 0;
        }
      }

      //! Get number of data points from switch data command.
      //! @return number of data points.
      unsigned
      getDataPoints(void) const
      {
        if (m_data[SD_DATA_POINTS] == 25)
          return 252;
        if (m_data[SD_DATA_POINTS] == 50)
          return 500;

        return 0;
      }

      //! Set profile minimum range
      //! @param[in] min_range profile minimum range value.
      //! return true if successful, false otherwise.
      bool
      setProfileMinRange(fp32_t min_range)
      {
        if (min_range > 25.0)
          return false;

        m_data[SD_PROF_MIN_RANGE] = (uint8_t)(min_range * 10);
        return true;
      }

      //! Get profile minimum range from switch data command.
      //! @return profile minimum range value.
      double
      getProfileMinRange(void) const
      {
        return Math::round(m_data[SD_PROF_MIN_RANGE] / 10.0);
      }

      //! Set length of acoustic transmit pulse
      //! @param[in] length pulse length value.
      //! return true.
      bool
      setPulseLength(fp32_t length)
      {
        uint8_t usec = (uint8_t)(length * 1000000);

        if (usec != 253)
          m_data[SD_PULSE_LEN] = usec;
        else
          m_data[SD_PULSE_LEN] = 252;

        return true;
      }

      //! Get pulse length from switch data command.
      //! @return pulse length value.
      fp32_t
      getPulseLength(void) const
      {
        return m_data[SD_PULSE_LEN] / 1000000.0;
      }

      //! Retrieve the switch data.
      //! @return switch data.
      const uint8_t*
      data(void) const
      {
        return m_data;
      }

      //! Retrieve the size of the switch data.
      //! @return size of the switch data.
      unsigned
      size(void) const
      {
        return sizeof(m_data);
      }

    private:
      enum Fields
      {
        //! First header byte.
        SD_HDR0 = 0,
        //! Second header byte.
        SD_HDR1 = 1,
        //! Head ID.
        SD_HEAD_ID = 2,
        //! Range.
        SD_RANGE = 3,
        //! Start gain.
        SD_START_GAIN = 8,
        //! Absorption.
        SD_ABSORPTION = 10,
        //! Pulse length.
        SD_PULSE_LEN = 14,
        //! Profile minimum range.
        SD_PROF_MIN_RANGE = 15,
        //! Number of data points.
        SD_DATA_POINTS = 19,
        //! Profile ON/OFF.
        SD_PROFILE = 22,
        //! Switch delay.
        SD_SWITCH_DELAY = 24,
        //! Frequency.
        SD_FREQUENCY = 25,
        //! Termination byte.
        SD_TERM = 26
      };

      //! Switch data.
      uint8_t m_data[SD_TERM + 1];
    };
  }
}

#endif
