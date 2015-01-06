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
// Author: Carlos Oliveira                                                  *
//***************************************************************************

// ISO C++ 98 headers.
#include <vector>
#include <cstdlib>
#include <cstdio>
#include <cstring>
#include <fstream>
#include <iostream>
#include <cstddef>

// DUNE headers.
#include <DUNE/DUNE.hpp>

namespace Vision
{
  namespace FrameGrabber
  {
    using DUNE_NAMESPACES;

    struct Arguments
    {
      //! Video device.
      std::string vid_dev;
      //! Picture Width.
      unsigned pic_w;
      //! Picture height.
      unsigned pic_h;
      //! JPEG quality.
      unsigned jpeg_quality;
      //! Video standard (PAL or NTSC).
      std::string standard;
    };

    struct Task: public DUNE::Tasks::Periodic
    {
      IMC::CompressedImage m_frame;
      Media::VideoCapture* m_video;
      Media::JPEGCompressor m_jpeg;
      Media::VideoCapture::Standard m_standard;
      Arguments m_args;

      Task(const std::string& name, Tasks::Context& ctx):
        Tasks::Periodic(name, ctx),
        m_video(NULL),
        m_standard(Media::VideoCapture::STANDARD_PAL)
      {
        // Retrieve configuration values.
        param("Video Device", m_args.vid_dev)
        .defaultValue("0")
        .description("Platform dependent video device");

        param("Picture Width", m_args.pic_w)
        .defaultValue("320")
        .units(Units::Pixel)
        .description("Picture Width");

        param("Picture Height", m_args.pic_h)
        .defaultValue("240")
        .units(Units::Pixel)
        .description("Picture Height");

        param("JPEG Quality", m_args.jpeg_quality)
        .defaultValue("50")
        .units(Units::Percentage)
        .minimumValue("0")
        .maximumValue("100")
        .description("JPEG image quality");

        param("Video Standard", m_args.standard)
        .defaultValue("PAL")
        .values("PAL, NTSC")
        .description("Video standard");

        bind<IMC::ImageTxSettings>(this);
      }

      void
      onUpdateParameters(void)
      {
        if (m_args.standard == "NTSC")
          m_standard = Media::VideoCapture::STANDARD_NTSC;
        else
          m_standard = Media::VideoCapture::STANDARD_PAL;
      }

      void
      onResourceAcquisition(void)
      {
        m_video = new VideoCapture(m_args.vid_dev, m_args.pic_w, m_args.pic_h);
      }

      void
      onResourceInitialization(void)
      {
        m_jpeg.setInputDimensions(m_video->frameWidth(), m_video->frameHeight());
        m_jpeg.setInputColorSpace(m_jpeg.CS_RGB);
        m_jpeg.setOutputColorSpace(m_jpeg.CS_RGB);
        m_video->setStandard(m_standard);
        m_video->start();
      }

      void
      onResourceRelease(void)
      {
        Memory::clear(m_video);
      }

      void
      consume(const IMC::ImageTxSettings* msg)
      {
        setFrequency(msg->fps);
        m_args.jpeg_quality = msg->quality;
      }

      void
      task(void)
      {
        m_video->frameCapture();
        m_jpeg.compress(m_video->frameData(), m_args.jpeg_quality);

        const char* img = (const char*)(m_jpeg.imageData());
        m_frame.data.assign(img, img + m_jpeg.imageSize());
        m_frame.frameid = getRunCount() % 255;
        dispatch(m_frame);
      }
    };
  }
}

DUNE_TASK
