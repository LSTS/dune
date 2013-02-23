//***************************************************************************
// Copyright (C) 2007-2013 Laboratório de Sistemas e Tecnologia Subaquática *
// Departamento de Engenharia Electrotécnica e de Computadores              *
// Rua Dr. Roberto Frias, 4200-465 Porto, Portugal                          *
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
      // True if task is active.
      bool m_active;
      // Destination log folder.
      Path m_log_dir;
      // Timestamp for last frame
      double m_timestamp;

      Task(const std::string& name, Tasks::Context& ctx):
        Tasks::Task(name, ctx),
        m_http(NULL),
        m_boundary(""),
        m_active(false),
        m_log_dir(ctx.dir_log)
      {
        // Retrieve configuration values.
        param("Camera IPv4 Address", m_args.address)
        .defaultValue("10.0.10.82")
        .description("IPv4 address of the camera");

        param("Frames Per Second", m_args.fps)
        .defaultValue("15")
        .description("Frames per second");

        bind<IMC::LoggingControl>(this);
        bind<IMC::EntityControl>(this);
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
            break;
          }
        }

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
      }

      //! Release allocated resources.
      void
      onResourceRelease(void)
      {
        stopVideo();
      }

      void
      consume(const IMC::EntityControl* msg)
      {
        if (msg->getDestinationEntity() != getEntityId())
          return;

        m_active = (msg->op == IMC::EntityControl::ECO_ACTIVATE);
        if (m_active)
          inf("%s", DTR(Status::getString(Status::CODE_ACTIVE)));
      }

      void
      consume(const IMC::LoggingControl* msg)
      {
        switch (msg->op)
        {
          case IMC::LoggingControl::COP_STARTED:
            m_log_dir = m_ctx.dir_log / msg->name / "Photos";
            m_log_dir.create();
            break;
          case IMC::LoggingControl::COP_STOPPED:
            break;
        }
      }

      void
      onMain(void)
      {
        while (!stopping())
        {
          consumeMessages();

          if (!m_active)
            continue;

          // Start the video if not already
          if (m_http == NULL)
          {
            startVideo();
            continue;
          }

          ByteBuffer dst;
          try
          {
            captureFrame(dst);
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
