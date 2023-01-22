//***************************************************************************
// Copyright 2007-2022 Universidade do Porto - Faculdade de Engenharia      *
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
// Author: José Braga                                                       *
//***************************************************************************

#ifndef SENSORS_IMAGENEX_837B_EXTERNAL_CONTROL_HPP_INCLUDED_
#define SENSORS_IMAGENEX_837B_EXTERNAL_CONTROL_HPP_INCLUDED_

// DUNE headers.
#include <DUNE/DUNE.hpp>

namespace Sensors
{
  namespace Imagenex837B
  {
    using DUNE_NAMESPACES;

    //! External control frame that allows direct control over DeltaT.exe
    //! or the Linux binary. The binary then gets data from the sonar head
    //! and delivers beamformed results (83P file format which are Profile
    //! Points with intensity).
    class ExternalControl
    {
    public:
      //! Default indices for external control frames.
      enum ExternalControlIndices
      {
        EC_RANGE = 7,
        EC_GAIN = 8,
        EC_DISPLAY_GAIN = 9,
        EC_GAIN_EQ = 10,
        EC_SECTOR_SIZE = 11,
        EC_BEAM_WIDTH = 12,
        EC_NUMBER_OF_BEAMS = 13,
        EC_AVERAGE = 14,
        EC_PERSISTANCE_HI = 15,
        EC_PERSISTANCE_LO = 16,
        EC_SOUND_VEL_HI = 17,
        EC_SOUND_VEL_LO = 18,
        EC_MODE = 19,
        EC_OUTPUT = 20,
        EC_PROFILE_POINT = 21,
        EC_PROFILE_MIN = 22,
        EC_PROFILE_LEVEL = 23,
        EC_XDCR_UP = 24,
        EC_TILT_ANGLE = 25,
        EC_ROLL_COMPENSATED = 26,
        EC_837_START = 28,
        EC_CONTROL = 31,
        EC_TRIGGER_DELAY_HI = 32,
        EC_TRIGGER_DELAY_LO = 33
      };

      //! Constructor.
      ExternalControl(void)
      {
        // Resize frame and fill with data.
        m_data.resize(c_size, 0);
        m_data[0] = 'E';
        m_data[1] = 'C';
        m_data[3] = 1; // External control.

        // Fill rest of parameters.
        m_data[EC_DISPLAY_GAIN] = 30;    // 1 to 100 %
        m_data[EC_GAIN_EQ] = 0;          // 0=OFF, 1=ON
        m_data[EC_SECTOR_SIZE] = 3;      // 0=30, 1=60, 2=90, 3=120º
        m_data[EC_BEAM_WIDTH] = 1;       // 0=Wide, 1=Normal, 2=Narrow, 3=Narrow Mixed
        m_data[EC_NUMBER_OF_BEAMS] = 0;  // 0=480, 1=240, 2=120
        m_data[EC_AVERAGE] = 5;          // 0,1=Off, 2,3,4,...10 = number of shots to average
        m_data[EC_PERSISTANCE_HI] = 0;   // 0 to 600sec; not active if Mode = Profile
        m_data[EC_PERSISTANCE_LO] = 0;
        m_data[EC_MODE] = 3;             // 0=Sector, 1=Linear, 2=Perspective, 3=Profile, 4=Beamtest
        m_data[EC_OUTPUT] = 0;           // 0=83P, 1=83B, 2=83F
        m_data[EC_PROFILE_POINT] = 1;    // 0=Disable, 1=Enable
        m_data[EC_PROFILE_MIN] = 0;      // 0 to 100m.
        m_data[EC_PROFILE_LEVEL] = 25;   // 10 to 90%.
        m_data[EC_ROLL_COMPENSATED] = 0; // 0=Off, 1=On
        m_data[EC_837_START] = 1;        // 0=Disable, 1=Enable.

        // Set default sound velocity.
        setSoundVelocity(1500.0);
      }

      //! Destructor.
      ~ExternalControl(void)
      { }

      //! Get frame start address.
      //! @return pointer to address.
      uint8_t*
      getData(void)
      {
        return &m_data[0];
      }

      //! Get size of frame.
      //! @return size of external control frame.
      size_t
      getSize(void)
      {
        return c_size;
      }

      //! Set sonar range.
      //! @param[in] range range.
      void
      setRange(uint8_t range)
      {
        m_data[EC_RANGE] = range;
      }

      //! Set start gain.
      //! @param[in] gain start gain.
      void
      setGain(uint8_t gain)
      {
        m_data[EC_GAIN] = gain;
      }

      //! Set sound velocity.
      //! @param[in] speed sound velocity.
      void
      setSoundVelocity(float speed)
      {
        if (speed < 1400.0 || speed > 1600.0)
          return;

        uint16_t s = (uint16_t)(speed * 10.0);
        m_data[EC_SOUND_VEL_HI] = (s & 0xff00) >> 8;
        m_data[EC_SOUND_VEL_LO] = (s & 0x00ff);
      }

      //! Set display mode.
      //! @param[in] xdcr display mode.
      void
      setDisplayMode(bool xdcr)
      {
        if (!xdcr)
          m_data[EC_XDCR_UP] = 1;
        else
          m_data[EC_XDCR_UP] = 0;
      }

      //! Set profile tilt angle.
      //! @param[in] angle profile tilt angle.
      void
      setProfileTiltAngle(float angle)
      {
        m_data[EC_TILT_ANGLE] = (unsigned)(angle + 180.0);
      }

    private:
      //! Message data.
      std::vector<uint8_t> m_data;
      //! Size of frame.
      static const size_t c_size = 256;
    };
  }
}

#endif
