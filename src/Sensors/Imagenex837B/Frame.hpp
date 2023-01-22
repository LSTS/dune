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

#ifndef SENSORS_IMAGENEX_837B_FRAME_HPP_INCLUDED_
#define SENSORS_IMAGENEX_837B_FRAME_HPP_INCLUDED_

// ISO C++ 98 headers.
#include <cstring>
#include <ctime>

// DUNE headers.
#include <DUNE/DUNE.hpp>

namespace Sensors
{
  namespace Imagenex837B
  {
    using DUNE_NAMESPACES;

    static const char* c_months_strings[] =
    {"JAN", "FEB", "MAR", "APR", "MAY", "JUN", "JUL", "AUG", "SEP", "OCT", "NOV", "DEC"};
    // Euler angles conversion factor.
    static const double c_euler_factor = (65536.0 / 360.0);

    //! Data logger base frame for Imagenex files.
    class Frame
    {
    public:
      //! Common frame header indices. Default values for 837 frames.
      enum HeaderIndices
      {
        HDR_IDX_TBYTES_HI = 4,
        HDR_IDX_TBYTES_LO = 5,
        HDR_IDX_DATE = 8,
        HDR_IDX_TIME = 20,
        HDR_IDX_TIME_HSEC = 29
      };

      //! 837 Footer Indices.
      enum FooterIndices
      {
        FTR_IDX_TYPE = 13,
        FTR_IDX_PITCH = 14,
        FTR_IDX_ROLL = 16,
        FTR_IDX_HEADING = 18,
        FTR_IDX_AZIMUTH_UP = 24
      };

      //! Constructor.
      Frame(void)
      { }

      //! Destructor.
      virtual
      ~Frame(void)
      { }

      //! Get frame start address.
      //! @return pointer to address.
      uint8_t*
      getData(void)
      {
        return &m_data[0];
      }

      //! Get data start address.
      //! @return pointer to address.
      virtual uint8_t*
      getMessageData(void)
      {
        return NULL;
      }

      //! Get footer start address.
      //! @return pointer to address.
      virtual uint8_t*
      getFooterData(void)
      {
        return NULL;
      }

      //! Retrieve the size of the frame.
      //! @return frame size.
      virtual size_t
      getSize(void) const
      {
        return 0;
      }

      //! Retrieve message size.
      //! @return message size.
      virtual size_t
      getMessageSize(void) const
      {
        return 0;
      }

      //! Retrieve footer size.
      //! @return footer size.
      virtual size_t
      getFooterSize(void) const
      {
        return 0;
      }

      //! Set sonar range.
      //! @param[in] range range.
      virtual void
      setRange(uint8_t range)
      {
        m_data[getIndexRange()] = range;
      }

      //! Set profile tilt angle.
      //! @param[in] angle profile tilt angle.
      void
      setProfileTiltAngle(float angle)
      {
        if (angle == 0.0)
        {
          m_data[getIndexTiltAngle()] = 0x00;
          m_data[getIndexTiltAngle() + 1] = 0x00;
        }
        else
        {
          ByteCopy::toBE((uint16_t)(((uint16_t)((angle + 180.0) * 10.0) & 0x7fff) | 0x8000),
                         getData() + getIndexTiltAngle());
        }
      }

      //! Set sound velocity.
      //! @param[in] speed sound velocity.
      void
      setSoundVelocity(float speed)
      {
        ByteCopy::toBE((uint16_t)(((uint16_t)(speed * 10.0) & 0x7fff) | 0x8000),
                       getData() + getIndexSoundSpeed());
      }

      //! Set GNSS ships speed.
      //! @param[in] speed speed.
      void
      setSpeed(float speed)
      {
        m_data[getIndexSpeed()] = (uint8_t)(std::fabs(speed) * 10 * DUNE::Units::c_ms_to_knot);
      }

      //! Set GNSS ships course.
      //! @param[in] course course.
      void
      setCourse(float course)
      {
        if (course < 0)
          course += 2 * Math::c_pi;

        ByteCopy::toBE((uint16_t)(Angles::degrees(course) * 10), getData() + getIndexCourse());
      }

      //! Set roll.
      //! @param[in] roll roll angle.
      void
      setRoll(float roll)
      {
        roll = Angles::degrees(roll);

        ByteCopy::toBE((uint16_t)(((uint16_t)(roll * 10 + 900) & 0x7fff) | 0x8000),
                       getData() + getIndexRoll());

        if (getFooterData() != NULL)
          ByteCopy::toLE((uint16_t)(roll * c_euler_factor),
                         getFooterData() + FTR_IDX_ROLL);
      }

      //! Set pitch.
      //! @param[in] pitch pitch angle.
      void
      setPitch(float pitch)
      {
        pitch = Angles::degrees(pitch);

        ByteCopy::toBE((uint16_t)(((uint16_t)(pitch * 10 + 900) & 0x7fff) | 0x8000),
                       getData() + getIndexPitch());

        if (getFooterData() != NULL)
          ByteCopy::toLE((uint16_t)(pitch * c_euler_factor),
                         getFooterData() + FTR_IDX_PITCH);
      }

      //! Set heading.
      //! @param[in] heading heading angle.
      void
      setHeading(float heading)
      {
        if (heading < 0)
          heading += 2 * Math::c_pi;

        heading = Angles::degrees(heading);

        ByteCopy::toBE((uint16_t)(((uint16_t)(heading * 10) & 0x7fff) | 0x8000),
                       getData() + getIndexHeading());

        if (getFooterData() != NULL)
          ByteCopy::toLE((uint16_t)(heading * c_euler_factor),
                         getFooterData() + FTR_IDX_HEADING);
      }

      //! Set repetition rate.
      //! @param[in] rate repetition rate.
      void
      setRepRate(uint16_t rate)
      {
        ByteCopy::toBE(rate, getData() + getIndexRepRate());
      }

      //! Define frame GPS data.
      //! @param[in] lat latitude.
      //! @param[in] lon longitude.
      void
      setGpsData(double lat, double lon)
      {
        if (lat > 0)
          m_data[getIndexLatitude() + 13] = 'N';
        else
          m_data[getIndexLatitude() + 13] = 'S';

        if (lon > 0)
          m_data[getIndexLongitude() + 13] = 'E';
        else
          m_data[getIndexLongitude() + 13] = 'W';

        lat = DUNE::Math::Angles::degrees(std::abs(lat));
        lon = DUNE::Math::Angles::degrees(std::abs(lon));

        // Latitude.
        m_data[getIndexLatitude()] = ' ';
        m_data[getIndexLatitude() + 1] = '0' + (uint8_t)lat / 10;
        m_data[getIndexLatitude() + 2] = '0' + (uint8_t)lat % 10;
        m_data[getIndexLatitude() + 3] = '.';

        double min = (lat - (int)lat) * 60.0;
        m_data[getIndexLatitude() + 4] = '0' + (uint8_t)min / 10;
        m_data[getIndexLatitude() + 5] = '0' + (uint8_t)min % 10;
        m_data[getIndexLatitude() + 6] = '.';

        unsigned dec = (unsigned)((min - (int)min) * 1e5);
        m_data[getIndexLatitude() + 7] = '0' + dec / 10000 % 10;
        m_data[getIndexLatitude() + 8] = '0' + dec / 1000 % 10;
        m_data[getIndexLatitude() + 9] = '0' + dec / 100 % 10;
        m_data[getIndexLatitude() + 10] = '0' + dec / 10 % 10;
        m_data[getIndexLatitude() + 11] = '0' + dec % 10;
        m_data[getIndexLatitude() + 12] = ' ';

        // Longitude.
        m_data[getIndexLongitude()] = '0' + (uint8_t)lon / 100;
        m_data[getIndexLongitude() + 1] = '0' + (uint8_t)lon / 10 % 10;
        m_data[getIndexLongitude() + 2] = '0' + (uint8_t)lon % 10;
        m_data[getIndexLongitude() + 3] = '.';

        min = (lon - (int)lon) * 60.0;
        m_data[getIndexLongitude() + 4] = '0' + (uint8_t)min / 10;
        m_data[getIndexLongitude() + 5] = '0' + (uint8_t)min % 10;
        m_data[getIndexLongitude() + 6] = '.';

        dec = (unsigned)((min - (int)min) * 1e5);
        m_data[getIndexLongitude() + 7] = '0' + dec / 10000 % 10;
        m_data[getIndexLongitude() + 8] = '0' + dec / 1000 % 10;
        m_data[getIndexLongitude() + 9] = '0' + dec / 100 % 10;
        m_data[getIndexLongitude() + 10] = '0' + dec / 10 % 10;
        m_data[getIndexLongitude() + 11] = '0' + dec % 10;
        m_data[getIndexLongitude() + 12] = ' ';
      }

      //! Set frame date and time.
      //! @param[in] now millisecond since epoch.
      void
      setDateTime(uint64_t now)
      {
        time_t now_sec = now / 1000;
        unsigned now_msec = now % 1000;
        Time::BrokenDown bdt(now_sec);

        // Date - null terminated date string (12 bytes).
        String::format((char*)&m_data[HDR_IDX_DATE], 12, "%02u-%3s-%04u",
                       bdt.day, c_months_strings[bdt.month - 1], bdt.year);

        // Time - null terminated time string (9 bytes).
        String::format((char*)&m_data[HDR_IDX_TIME], 9, "%02u:%02u:%02u",
                       bdt.hour, bdt.minutes, bdt.seconds);

        // Hundredth of Seconds - null terminated string (4 bytes).
        String::format((char*)&m_data[HDR_IDX_TIME_HSEC], 4, ".%02u",
                       now_msec / 10);

        // Milliseconds - null terminated string (5 bytes).
        String::format((char*)&m_data[getIndexMilli()], 5, ".%03u",
                       now_msec);
      }

      //! Change mode according with data points.
      virtual void
      setExtendedDataPoints(bool mode)
      {
        (void)mode;
      }

    protected:
      //! Message data.
      std::vector<uint8_t> m_data;

      void
      setFrequency(void)
      {
        // Operating Frequency 260 kHz.
        m_data[getIndexFrequency()] = (uint8_t)(c_frequency >> 8);
        m_data[getIndexFrequency() + 1] = (uint8_t)c_frequency;
      }

      //! Get range index.
      virtual unsigned
      getIndexRange(void) = 0;

      //! Get tilt angle index.
      virtual unsigned
      getIndexTiltAngle(void) = 0;

      //! Get latitude index.
      virtual unsigned
      getIndexLatitude(void) = 0;

      //! Get longitude index.
      virtual unsigned
      getIndexLongitude(void) = 0;

      //! Get speed index.
      virtual unsigned
      getIndexSpeed(void) = 0;

      //! Get speed index.
      virtual unsigned
      getIndexSoundSpeed(void) = 0;

      //! Get course index.
      virtual unsigned
      getIndexCourse(void) = 0;

      //! Get milliseconds index.
      virtual unsigned
      getIndexMilli(void) = 0;

      //! Get roll index.
      virtual unsigned
      getIndexRoll(void) = 0;

      //! Get pitch index.
      virtual unsigned
      getIndexPitch(void) = 0;

      //! Get heading index.
      virtual unsigned
      getIndexHeading(void) = 0;

      //! Get repetition rate index.
      virtual unsigned
      getIndexRepRate(void) = 0;

      //! Get frequency index.
      virtual unsigned
      getIndexFrequency(void) = 0;

    private:
      //! Operating frequency.
      static const unsigned c_frequency = 260;
    };
  }
}

#endif
