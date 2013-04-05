//***************************************************************************
// Copyright 2007-2013 Universidade do Porto - Faculdade de Engenharia      *
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
// https://www.lsts.pt/dune/licence.                                        *
//***************************************************************************
// Author: Renato Caldas                                                    *
//***************************************************************************

// ISO C++ 98 headers.
#include <queue>
#include <cstring>

// DUNE headers.
#include <DUNE/DUNE.hpp>

// Local headers.
#include "HTTPClient.hpp"

namespace Vision
{
  namespace Lumenera
  {
    using DUNE_NAMESPACES;

    //! %Task arguments.
    struct Arguments
    {
      // Camera IP address
      Address address;
      // Maximum Frames Per Second
      unsigned fps;
      // Maximum Exposure
      float exposure_max;
      // Exposure Knee
      float exposure_knee;
      // Maximum Gain
      float gain_max;
      // Gain knee
      float gain_knee;
      // Enable median filtering (helps with noise in low light/high gain settings)
      bool median_filter;
      // Enable the LED strobe output
      bool strobe;
    };

    //! Device driver task.
    struct Task: public DUNE::Tasks::Task
    {
      // HTTP camera port
      static const unsigned c_port = 80;
      // Configuration parameters
      Arguments m_args;
      // Video stream HTTP connection
      HTTPClient* m_http;
      // MJPEG boundary string
      std::string m_boundary;
      // Destination log folder.
      Path m_log_dir;
      // Timestamp for last frame
      double m_timestamp;
      //! True if task is activating.
      bool m_activating;

      Task(const std::string& name, Tasks::Context& ctx):
        Tasks::Task(name, ctx),
        m_http(NULL),
        m_boundary(""),
        m_log_dir(ctx.dir_log),
        m_activating(false)
      {
        // Retrieve configuration values.
        paramActive(Tasks::Parameter::SCOPE_MANEUVER,
                    Tasks::Parameter::VISIBILITY_USER);

        param("Camera IPv4 Address", m_args.address)
        .defaultValue("10.0.10.82")
        .description("IPv4 address of the camera");

        param("Frames Per Second", m_args.fps)
        .defaultValue("15")
        .description("Frames per second");

        param("Maximum Exposure", m_args.exposure_max)
        .defaultValue("10")
        .description("Maximum exposure in miliseconds");

        param("Maximum Gain", m_args.gain_max)
        .defaultValue("4.0")
        .description("Maximum gain");

        param("Autoexposure Knee", m_args.exposure_knee)
        .defaultValue("5")
        .description("Exposure limit before increasing the gain (in miliseconds)");

        param("Autogain Knee", m_args.gain_knee)
        .defaultValue("2.0")
        .description("Gain limit before increasing the exposure");

        param("Median Filter", m_args.median_filter)
        .defaultValue("false")
        .description("Enable Median Filter");

        param("Strobe", m_args.strobe)
        .defaultValue("true")
        .description("Enable Strobe");

        bind<IMC::LoggingControl>(this);
      }

      void
      consume(const IMC::LoggingControl* msg)
      {
        if (!m_activating && (msg->getDestination() != getSystemId()))
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
        m_activating = true;
        IMC::LoggingControl log_ctl;
        log_ctl.op = IMC::LoggingControl::COP_REQUEST_CURRENT_NAME;
        dispatch(log_ctl);
      }

      void
      onActivation(void)
      {
        m_activating = false;
        m_log_dir.create();
        setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_ACTIVE);
      }

      void
      onDeactivation(void)
      {
        setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_IDLE);
      }

      void
      startVideo(void)
      {
        // Send request
        const char cmd[] = "GET /cgi-bin/nph-video?type=multipart/x-mixed-replace&archive=1\r\n";
        m_http = new HTTPClient(cmd, m_args.address, c_port);

        // Get reply header
        std::vector<std::string> header;
        std::vector<std::string>::iterator it;

        m_http->getHeader(header);

        if (header[0] != "HTTP/1.0 200 OK\r\n")
        {
          err("Failed to start video stream");
          stopVideo();
          return;
        }

        for (it = header.begin(); it != header.end(); it++)
        {
          if (String::startsWith(*it, "Content-Type"))
          {
            const char st[] = "boundary=\"";
            unsigned ibgn = (*it).find(st);
            ibgn += strlen(st);
            unsigned iend = (*it).find('"', ibgn);
            m_boundary = (*it).substr(ibgn, iend - ibgn);
          }
        }

        inf("Started video stream");
      }

      void
      stopVideo(void)
      {
        if (m_http != NULL)
        {
          delete m_http;
          m_http = 0;
        }
      }

      void
      captureFrame(ByteBuffer &dst, double timeout = 2.0)
      {
        std::vector<std::string> header;
        std::vector<std::string>::iterator it;
        size_t jpg_size = 0;

        m_http->skipToBoundary(m_boundary);
        m_http->getHeader(header);
        m_timestamp = Clock::getSinceEpoch();

        for (it = header.begin(); it != header.end(); it++)
        {
          if (String::startsWith(*it, "Content-length:"))
          {
            jpg_size = std::atoi((*it).substr(15, (*it).size()-15).c_str());

            if (jpg_size <= 0)
              spew("Content-length is zero");
            break;
          }
        }

        if (jpg_size <= 0)
          spew("jpeg size is zero after header");

        // Retrieve JPEG data
        dst.setSize(jpg_size);
        m_http->getBinary(dst.getBufferSigned(), jpg_size, timeout);
      }

      void
      setProperty(std::string property, std::string value)
      {
        // Send request
        std::string cmd = "GET /cgi-bin/set?" + property + "=" + value + "\r\n";
        HTTPClient cli(cmd.c_str(), m_args.address, c_port);

        std::vector<std::string> text;
        std::vector<std::string>::iterator it;

        try
        {
          // Consume the header (ignore it)
          cli.getHeader(text);
          text.clear();

          // Retrieve the reply body
          cli.getBody(text);
        }
        catch (...)
        { }

        for (it = text.begin(); it != text.end(); it++)
        {
          if (String::startsWith(*it, "<title>"))
          {
            if( *it == "<title>Success</title>\r\n")
              // success, just return
              return;
            break;
          }
        }

        // setting the propery failed for some reason
        throw std::runtime_error(DTR("failed to set property"));
      }

      void
      getProperty(std::string property, std::string& value)
      {
        // Send request
        std::string cmd = "GET /cgi-bin/get?" + property + "\r\n";
        HTTPClient cli(cmd.c_str(), m_args.address, c_port);

        std::vector<std::string> text;
        std::vector<std::string>::iterator it;

        try
        {
          // Consume the header (ignore it)
          cli.getHeader(text);
          text.clear();

          // Retrieve the reply body
          cli.getBody(text);
        }
        catch (...)
        { }

        bool next_is_value = false;
        for (it = text.begin(); it != text.end(); it++)
        {
          if (next_is_value)
          {
            value = *it;
            return;
          }
          else if (*it == "<pre>\r\n")
          {
            next_is_value = true;
          }
          else if (String::startsWith(*it, "<title>"))
          {
            // setting the propery failed for some reason
            if( *it != "<title>Success</title>\r\n")
              throw std::runtime_error(DTR("failed to set property"));
          }
        }
      }

      //! Initialize resources.
      void
      onResourceInitialization(void)
      {
        debug("setting frames per second to '%u'", m_args.fps);
        setProperty("maximum_framerate", uncastLexical(m_args.fps));
        debug("enabling autogain and autoexposure");
        setProperty("autogain", "1");
        setProperty("autoexposure", "1");
        debug("setting maximum exposure to '%f' seconds", m_args.exposure_max);
        setProperty("maximum_exposure", uncastLexical(m_args.exposure_max));
        debug("setting maximum gain to '%f'", m_args.gain_max);
        setProperty("maximum_gain", uncastLexical(m_args.gain_max));
        debug("setting auto-exposure knee to '%f' seconds", m_args.exposure_knee);
        setProperty("autoexposure_knee", uncastLexical(m_args.exposure_knee));
        debug("setting auto-gain knee to '%f'", m_args.gain_knee);
        setProperty("autogain_knee", uncastLexical(m_args.gain_knee));
        debug("setting median filtering to '%u'", m_args.median_filter);
        setProperty("median_filter", uncastLexical(m_args.median_filter));

        if (m_args.strobe)
        {
          debug("enabling strobe output");
          setProperty("output_select", "strobe");
        }
        else
        {
          debug("disabling strobe output");
          setProperty("output_select", "off");
        }
      }

      //! Release allocated resources.
      void
      onResourceRelease(void)
      {
        stopVideo();
      }

      void
      onMain(void)
      {
        ByteBuffer dst;

        while (!stopping())
        {
          consumeMessages();

          if (!isActive())
            continue;

          // Start the video if not already
          if (m_http == NULL)
          {
            startVideo();
            continue;
          }

          try
          {
            captureFrame(dst);
            if (dst.getSize() == 0)
              spew("destination size is zero");
          }
          catch (std::runtime_error& e)
          {
            throw RestartNeeded(e.what(), 5);
          }

          // Save file
          double timestamp = Clock::getSinceEpoch();
          Path file = m_log_dir / String::str("%0.4f.jpg", timestamp);
          {
            std::ofstream jpg(file.c_str(), std::ios::binary);
            jpg.write(dst.getBufferSigned(), dst.getSize());
          }
        }
      }
    };
  }
}

DUNE_TASK
