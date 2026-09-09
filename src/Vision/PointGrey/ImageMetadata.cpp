//***************************************************************************
// Copyright 2007-2026 Universidade do Porto - Faculdade de Engenharia      *
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
// Author: Pedro Gonçalves                                                  *
//***************************************************************************

// Standard library headers.
#include <cmath>
#include <stdexcept>

// Local headers.
#include "Task.hpp"

namespace Vision
{
  namespace PointGrey
  {
    //! Convert a WGS84 coordinate to the EXIF DMS rational representation.
    std::string
    Task::exifCoordinate(double radians)
    {
      int degrees;
      int minutes;
      double seconds;
      Angles::convertDecimalToDMS(std::fabs(Angles::degrees(radians)), degrees, minutes, seconds);
      return String::str("%d/1 %d/1 %u/1000000", degrees, minutes, unsigned(seconds * 1e6));
    }

    //! Build the APP1/EXIF payload for the image currently being captured.
    void
    Task::saveInfoExif(double timestamp)
    {
#if defined(DUNE_CPU_ARMV7) || defined(DUNE_CPU_ARMV8)
      // The sequence prevents overwrites if the wall clock moves backwards.
      m_back_epoch = String::str("%.4f", timestamp) + "_" + to_string(m_sequence++);
      std::string date = Time::Format::getTimeDate(timestamp, true);
      if (date.size() == 19)
      {
        date[4] = ':';
        date[7] = ':';
      }
      const unsigned usec = unsigned((timestamp - std::floor(timestamp)) * 1e6);
      Exiv2::ExifData metadata;
      metadata["Exif.Photo.UserComment"] = m_note_comment;
      if (m_position_time > 0 && Clock::get() - m_position_time < 10.0)
      {
        metadata["Exif.GPSInfo.GPSLatitude"] = exifCoordinate(m_latitude);
        metadata["Exif.GPSInfo.GPSLongitude"] = exifCoordinate(m_longitude);
        metadata["Exif.GPSInfo.GPSLatitudeRef"] = m_latitude < 0 ? "S" : "N";
        metadata["Exif.GPSInfo.GPSLongitudeRef"] = m_longitude < 0 ? "W" : "E";
        metadata["Exif.GPSInfo.GPSMapDatum"] = "WGS-84";
      }
      metadata["Exif.Photo.DateTimeOriginal"] = date;
      metadata["Exif.Photo.DateTimeDigitized"] = date;
      metadata["Exif.Photo.SubSecTimeOriginal"] = String::str("%06u", usec);
      metadata["Exif.Photo.SubSecTimeDigitized"] = String::str("%06u", usec);
      metadata["Exif.Photo.ExposureTime"] = String::str("%u/1000000", unsigned(m_args.shutter_value * 1000));
      metadata["Exif.Image.Make"] = m_camInfo.vendorName;
      metadata["Exif.Image.Model"] = m_camInfo.modelName;
      metadata["Exif.Photo.LensMake"] = m_args.lens_maker;
      metadata["Exif.Photo.LensModel"] = m_args.lens_model;
      metadata["Exif.Image.Copyright"] = m_args.copyright;
      metadata["Exif.Image.Artist"] = getSystemName();

      Exiv2::Blob tiff;
      Exiv2::ExifParser::encode(tiff, Exiv2::littleEndian, metadata);
      if (tiff.empty() || tiff.size() > 65527)
        throw std::runtime_error("EXIF exceeds JPEG APP1 capacity");

      const unsigned char signature[] = { 'E', 'x', 'i', 'f', 0, 0 };
      m_frame_exif.assign(signature, signature + sizeof(signature));
      m_frame_exif.insert(m_frame_exif.end(), tiff.begin(), tiff.end());
#else
      (void)timestamp;
#endif
    }
  }
}
