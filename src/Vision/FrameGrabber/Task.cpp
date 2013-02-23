//***************************************************************************
// Copyright (C) 2007-2013 Laboratório de Sistemas e Tecnologia Subaquática *
// Departamento de Engenharia Electrotécnica e de Computadores              *
// Rua Dr. Roberto Frias, 4200-465 Porto, Portugal                          *
//***************************************************************************
// Author: Ricardo Martins                                                  *
// Author: Carlos Oliveira                                                  *
//***************************************************************************
// $Id:: Task.cpp 12721 2013-01-25 02:01:06Z jbraga                       $:*
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

      ~Task(void)
      {
        Task::onResourceRelease();
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
