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

// ISO C++ 98 headers.
#include <queue>

// DUNE headers.
#include <DUNE/DUNE.hpp>

// Local headers.
#include "GVCP.hpp"
#include "GVSP.hpp"
#include "WhiteBalance.hpp"
#include "AutoExposure.hpp"

using DUNE_NAMESPACES;

namespace Vision
{
  //! Device driver for the Imaging Source DFK 51BG02.H GigE CCD Color
  //! Camera.
  //!
  //! The GigE %Vision protocol is based on the UDP/IP standard and is
  //! available only by signing a non-disclosure agreement and paying
  //! a fee. To implement this driver and associated classes the GigE
  //! %Vision protocol for this camera was reversed engineered using
  //! the packet sniffer Wireshark and Imaging Source's IC Capture.
  //!
  //! Even though the vendor advertises that the camera supports
  //! RGB32 output, the camera is only able to output images in Y800
  //! (Grayscale) and %Bayer 8 GBRG (GBGB.. RGRG..), IC Capture does
  //! the conversion from %Bayer 8 to RGB24 and RGB32 formats. In
  //! this device driver we convert %Bayer 8 to YUV420 and then to
  //! JPEG, this approach is faster than converting to RGB24 and
  //! yields smaller JPEGs.
  //!
  //! Other limitations of this camera include:
  //!  - No packet retransmission capabilities, which means that if
  //!    a datagram is dropped the frame will have "holes".
  //!  - White balance is done in software (IC Capture).
  //!  - Automatic control (exposure, etc) is also performed in
  //!    software (IC Capture)
  //!  - Frames have a fixed geometry of 1600x1200 px.
  //!  - Stream packet size if fixed at 1500 bytes and cannot be
  //!    changed.
  //!
  //! This device driver is capable of controlling the following
  //! parameters:
  //!  - <em>Exposure Time</em>: Unit is second, the default value
  //!    is 0.0819 and the domain is [0.0001, 30.0].
  //!  - <em>Gamma</em>: Unitless, the default value is 100 and the
  //!    domain is [1-500].
  //!  - <em>Gain</em>: Unitless, the default value is 260 and the
  //!    domain is [260, 1023].
  //!  - <em>Strobe Polarity</em>: polarity of the strobe signal:
  //!    -# <em>True</em>: normal polarity.
  //!    -# <em>False</em>: inverted polarity.
  //!  - <em>Strobe Mode</em>:
  //!     -# <em>Off</em>: no strobe.
  //!     -# <em>Always On</em>: strobe is always on.
  //!     -# <em>Fixed</em>: behaviour is controlled by the
  //!        parameters <em>Strobe Delay</em> and <em>Strobe
  //!        Duration</em>.
  //!     -# <em>Exposure</em>: behaviour is derived from the
  //!        <em>Exposure Time</em> and <em>Strobe Delay</em>.
  //!  - <em>Strobe Delay</em>: Unit is microsecond. The default value
  //!    is 0 and the domain is [-10000, 10000].
  //!  - <em>Strobe Duration</em>: Unit is microsecond in the domain
  //!    [0, 6544], I don't know the meaning in the domain [6544,
  //!    20000]. The default value is 0 and the domain is [0, 20000].
  //!
  //! This driver will output JPEG files, one for each captured
  //! frame, to the folder
  //! <em>LOG_FOLDER</em>/Photos/<em>NAME</em>.jpg, where
  //! <em>LOG_FOLDER</em> is the current log folder and
  //! <em>NAME</em> is the amount of seconds elapsed since the Unix
  //! Epoch (1st January, 1970) with four decimal places.
  //!
  //! @author Ricardo Martins
  namespace DFK51BG02H
  {
    //! %Task arguments.
    struct Arguments
    {
      //! Camera IP address.
      Address raddr;
      //! Local IP address.
      Address laddr;
      //! Stream port.
      unsigned port;
      //! Frames Per Second.
      unsigned fps;
      //! JPEG quality.
      unsigned jpeg_quality;
      //! Number of frame buffers.
      unsigned buffer_count;
      //! Exposure time (or maximum value if auto).
      double exposure_time;
      //! Automatic Exposure.
      bool ae;
      //! Automatic Exposure - Minimum Value.
      double ae_min;
      //! Gain.
      unsigned gain;
      //! Gamma.
      unsigned gamma;
      //! Strobe mode.
      std::string strobe_mode;
      //! Strobe polarity.
      bool strobe_polarity;
      //! Strobe delay.
      int strobe_delay;
      //! Strobe duration.
      unsigned strobe_duration;
      //! Store as raw
      bool store_raw;
      //! White-balance Filter: B factor.
      float b_factor;
      //! White-balance Filter: R factor.
      float r_factor;
    };

    //! Device driver task.
    struct Task: public DUNE::Tasks::Task
    {
      //! %Frame width.
      static const unsigned c_width = 1600;
      //! %Frame height.
      static const unsigned c_height = 1200;
      //! Packets per frame.
      static const unsigned c_pkts_per_frame = 1312;
      //! Configuration parameters.
      Arguments m_args;
      //! %GVCP.
      GVCP* m_gvcp;
      //! %GVSP.
      GVSP* m_gvsp;
      //! RGB24 buffer.
      uint8_t* m_rgb24_bfr;
      //! Keep-alive counter.
      Counter<double> m_kalive;
      //! %Destination log folder.
      Path m_log_dir;
      //! Array of frames.
      std::queue<Frame*> m_frames;
      //! PGM header.
      std::string m_pgm_header;
      //! Compressor.
      JPEGCompressor m_jpeg;
      //! Bayer decoder.
      BayerDecoder m_debayer;
      // White-balance filter.
      WhiteBalance m_white;
      // Exposure time.
      double m_exposure;
      //! Automatic exposure control.
      AutoExposure m_ae;

      Task(const std::string& name, Tasks::Context& ctx):
        Tasks::Task(name, ctx),
        m_gvcp(NULL),
        m_gvsp(NULL),
        m_kalive(0.5),
        m_log_dir(ctx.dir_log),
        m_debayer(BayerDecoder::TILE_GBRG),
        m_white(c_width, c_height)
      {
        // Retrieve configuration values.
        paramActive(Tasks::Parameter::SCOPE_MANEUVER,
                    Tasks::Parameter::VISIBILITY_USER);

        param("Camera IPv4 Address", m_args.raddr)
        .defaultValue("192.168.106.86")
        .description("IPv4 address of the camera");

        param("Local IPv4 Address", m_args.laddr)
        .defaultValue("192.168.106.87")
        .description("Local IPv4 address");

        param("Frames Per Second", m_args.fps)
        .defaultValue("3")
        .description("Frames per second");

        param("Stream Port", m_args.port)
        .defaultValue("61200")
        .description("Local UDP port used to receive the video stream");

        param("Exposure Time", m_args.exposure_time)
        .defaultValue("0.0819")
        .minimumValue("0.0001")
        .maximumValue("30.0")
        .units(Units::Second)
        .description("Exposure time");

        param("Automatic Exposure", m_args.ae)
        .defaultValue("true")
        .description("Automatic Exposure (maximum exposure time set to Exposure Time)");

        param("Automatic Exposure - Minimum Value", m_args.ae_min)
        .defaultValue("0.002")
        .description("Minimum exposure value when using automatic exposure filter");

        param("Gain", m_args.gain)
        .defaultValue("260")
        .minimumValue("260")
        .maximumValue("1023")
        .description("Gain");

        param("Gamma", m_args.gamma)
        .defaultValue("100")
        .minimumValue("1")
        .maximumValue("500")
        .description("Gamma");

        param("Strobe Mode", m_args.strobe_mode)
        .defaultValue("Exposure")
        .values("Off, Always On, Fixed, Exposure")
        .description("Strobe mode");

        param("Strobe Polarity", m_args.strobe_polarity)
        .defaultValue("false")
        .description("Strobe polarity");

        param("Strobe Delay", m_args.strobe_delay)
        .defaultValue("0")
        .minimumValue("-10000")
        .maximumValue("10000")
        .units(Units::Microsecond)
        .description("Strobe delay");

        param("Strobe Duration", m_args.strobe_duration)
        .defaultValue("0")
        .minimumValue("0")
        .maximumValue("20000")
        .description("Strobe duration");

        param("Number of Buffers", m_args.buffer_count)
        .defaultValue("25")
        .description("Number of buffers");

        param("JPEG Quality", m_args.jpeg_quality)
        .defaultValue("80")
        .units(Units::Percentage)
        .minimumValue("0")
        .maximumValue("100")
        .description("JPEG image quality");

        param("Store Raw", m_args.store_raw)
        .defaultValue("false")
        .description("Store raw image data in PGM format");

        param("White Balance - B Factor", m_args.b_factor)
        .defaultValue("1.0");

        param("White Balance - R Factor", m_args.r_factor)
        .defaultValue("1.0");

        m_rgb24_bfr = new uint8_t[c_width * c_height * 3];

        // Initialize PGM header.
        m_pgm_header = String::str("P5 %u %u 255\n", c_width, c_height);

        bind<IMC::LoggingControl>(this);
      }

      //! Destructor.
      ~Task(void)
      {
        delete [] m_rgb24_bfr;
      }

      //! Update internal parameters.
      void
      onUpdateParameters(void)
      {
        // White-balance filter.
        m_white.setRFactor(m_args.r_factor);
        m_white.setBFactor(m_args.b_factor);

        // Bayer decoder.
        m_debayer.setMethod(BayerDecoder::METHOD_BILINEAR);
      }

      //! Acquire resources and buffers.
      void
      onResourceAcquisition(void)
      {
        // Initialize JPEG compressor.
        m_jpeg.setInputDimensions(c_width, c_height);
        m_jpeg.setInputColorSpace(JPEGCompressor::CS_RGB);
        m_jpeg.setOutputColorSpace(JPEGCompressor::CS_YUV);

        m_gvcp = new GVCP(m_args.raddr);
        m_gvsp = new GVSP(this, m_args.port);
        m_gvsp->start();

        for (unsigned i = 0; i < m_args.buffer_count; ++i)
        {
          Frame* frame = new Frame(c_width * c_height);
          m_gvsp->enqueueClean(frame);
          m_frames.push(frame);
        }
      }

      //! Release allocated resources.
      void
      onResourceRelease(void)
      {
        Memory::clear(m_gvcp);

        if (m_gvsp != NULL)
        {
          m_gvsp->stopAndJoin();
          delete m_gvsp;
          m_gvsp = NULL;
        }

        while (!m_frames.empty())
        {
          Frame* frame = m_frames.front();
          m_frames.pop();
          delete frame;
        }
      }

      //! Initialize resources and start capturing frames.
      void
      onResourceInitialization(void)
      {
        debug("setting privileges");
        m_gvcp->setPrivilege(GVCP::PRIV_BV_CONTROL | GVCP::PRIV_BV_EXCLUSIVE);

        debug("setting pixel format");
        m_gvcp->setPixelFormat(GVCP::PIX_BGB8);

        debug("setting destination stream address to '%s'", m_args.laddr.c_str());
        m_gvcp->setStreamAddress(m_args.laddr);

        debug("setting stream port to '%u'", m_args.port);
        m_gvcp->setStreamPort(m_args.port);

        debug("setting frames per second to '%u'", m_args.fps);
        m_gvcp->setFPS(m_args.fps);

        if (m_args.ae)
          debug("enabling automatic exposure time up to '%0.4f'", m_args.exposure_time);
        else
          debug("setting exposure time to '%0.4f'", m_args.exposure_time);
        m_gvcp->setExposureTime(m_args.exposure_time);
        m_exposure = m_args.exposure_time;

        debug("setting gain to '%u'", m_args.gain);
        m_gvcp->setGain(m_args.gain);

        debug("setting gamma to '%u'", m_args.gamma);
        m_gvcp->setGamma(m_args.gamma);

        GVCP::StrobeModes strobe_mode = GVCP::STROBE_MODE_OFF;
        if (m_args.strobe_mode == "Exposure")
          strobe_mode = GVCP::STROBE_MODE_EXPOSURE;
        else if (m_args.strobe_mode == "Always On")
          strobe_mode = GVCP::STROBE_MODE_ALWAYS_ON;
        else if (m_args.strobe_mode == "Fixed")
          strobe_mode = GVCP::STROBE_MODE_FIXED;

        debug("setting strobe mode to '%s'", m_args.strobe_mode.c_str());
        m_gvcp->setStrobeMode(strobe_mode, m_args.strobe_polarity);

        debug("setting strobe duration to '%u'", m_args.strobe_duration);
        m_gvcp->setStrobeDuration(m_args.strobe_duration);

        debug("setting strobe delay to '%d'", m_args.strobe_delay);
        m_gvcp->setStrobeDelay(m_args.strobe_delay);

        debug("starting streaming");
        m_gvcp->startStreaming();

        setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_IDLE);
      }

      void
      consume(const IMC::LoggingControl* msg)
      {
        if (!isActivating() && (msg->getDestination() != getSystemId()))
          return;

        if (msg->op == IMC::LoggingControl::COP_CURRENT_NAME)
        {
          m_log_dir = m_ctx.dir_log / msg->name / "Photos";
          activate();
        }
      }

      void
      onRequestActivation(void)
      {
        IMC::LoggingControl log_ctl;
        log_ctl.op = IMC::LoggingControl::COP_REQUEST_CURRENT_NAME;
        dispatch(log_ctl);
      }

      void
      onActivation(void)
      {
        m_log_dir.create();
        setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_ACTIVE);
      }

      void
      onDeactivation(void)
      {
        setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_IDLE);
      }

      void
      onMain(void)
      {
        Frame* frame = NULL;

        while (!stopping())
        {
          if (m_kalive.overflow())
          {
            try
            {
              m_gvcp->keepAlive();
            }
            catch (...)
            {
              throw RestartNeeded(DTR("keep alive failed"), 4);
            }

            m_kalive.reset();
          }

          consumeMessages();

          frame = m_gvsp->dequeueDirty();
          if (frame == NULL)
          {
            m_gvsp->waitDirty(0.5);
            continue;
          }

          unsigned pkt_count = frame->getPacketCount();
          if (pkt_count < c_pkts_per_frame)
            war(DTR("lost at least %d packets"), c_pkts_per_frame - pkt_count);

          if (isActive())
          {
            m_white.filter(frame->getData());
            double timestamp = frame->getTimeStamp();
            Path file = m_log_dir / String::str("%0.4f.jpg", timestamp);

            {
              m_debayer.decodeToRGB24(frame->getData(), m_rgb24_bfr, c_width, c_height);
              m_jpeg.compress(m_rgb24_bfr, m_args.jpeg_quality);
              std::ofstream jpg(file.c_str(), std::ios::binary);
              jpg.write((char*)m_jpeg.imageData(), m_jpeg.imageSize());
            }

            if (m_args.store_raw)
            {
              file = m_log_dir / String::str("%0.4f.pgm", timestamp);
              std::ofstream pgm(file.c_str(), std::ios::binary);
              pgm.write(m_pgm_header.c_str(), m_pgm_header.size());
              pgm.write((char*)frame->getData(), c_width * c_height);
            }

            if (m_args.ae)
            {
              float correction = m_ae.exposureCorrection(m_rgb24_bfr, c_width * c_height);
              // Smooth out the exposure (make it slower varying), halve the deltaEV
              correction = std::sqrt(correction);
              m_exposure = Math::trimValue(m_exposure * correction, 0.0001, m_args.exposure_time);

              if (m_exposure >= m_args.ae_min)
                m_gvcp->setExposureTime(m_exposure);
              else
                m_gvcp->setExposureTime(m_args.ae_min);
            }
          }

          m_gvsp->enqueueClean(frame);
        }
      }
    };
  }
}

DUNE_TASK
