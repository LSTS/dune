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
// Author: Renato Caldas                                                    *
//***************************************************************************

// ISO C++ 98 headers.
#include <queue>
#include <cstring>

// DUNE headers.
#include <DUNE/DUNE.hpp>
#include <DUNE/Media/ExifEditor.hpp>

// Local headers.
#include "HTTPClient.hpp"
#include "EntityActivationMaster.hpp"

namespace Vision
{
  namespace Lumenera
  {
    using DUNE_NAMESPACES;

    //! %Task arguments.
    struct Arguments
    {
      //! Camera IP address.
      Address address;
      //! Maximum Frames Per Second.
      unsigned fps;
      //! Auto Exposure.
      bool auto_exposure;
      //! Exposure Value if Manual.
      float exposure_value;
      //! Maximum Exposure.
      float exposure_max;
      //! Exposure Knee.
      float exposure_knee;
      //! Auto Gain.
      bool auto_gain;
      //! Gain Value if Manual.
      float gain_value;
      //! Maximum Gain.
      float gain_max;
      //! Gain knee.
      float gain_knee;
      //! Gamma value.
      float gamma;
      //! Enable median filtering (helps with noise in low light/high gain settings).
      bool median_filter;
      //! LED scheme.
      std::string led_type;
      //! Automatic white balance
      bool auto_whitebalance;
      //! White balance red gain.
      float gain_red;
      //! White balance green gain.
      float gain_green;
      //! White balance blue gain.
      float gain_blue;
      //! LED strobe power channel.
      std::string strobe_pwr;
      //! Number of photos per volume.
      unsigned volume_size;
      //! Log folder prefix.
      std::string log_prefix;
      //! Power GPIO.
      int pwr_gpio;
      //! LED GPIO.
      int led_gpio;
      //! Whether to configure the camera.
      bool camera_cfg;
      //! Whether to capture from the camera.
      bool camera_capt;
      //! Slave entities
      std::vector<std::string> slave_entities;
    };

    //! Device driver task.
    struct Task: public DUNE::Tasks::Task
    {
      //! HTTP camera port
      static const unsigned c_port = 80;
      //! Configuration parameters
      Arguments m_args;
      //! Video stream HTTP connection
      HTTPClient* m_http;
      //! MJPEG boundary string
      std::string m_boundary;
      //! Destination log folder.
      Path m_log_dir;
      //! Current destination volume.
      Path m_volume;
      //! Current number of volumes.
      unsigned m_volume_count;
      //! Number of files in current volume.
      unsigned m_file_count;
      // Timestamp for last frame
      double m_timestamp;
      //! Power GPIO.
      Hardware::GPIO* m_pwr_gpio;
      //! LEDs GPIO.
      Hardware::GPIO* m_led_gpio;
      //! Config is dirty.
      bool m_cfg_dirty;
      //! Slave entities
      EntityActivationMaster* m_slave_entities;
      //! Activation timer
      Counter<double> m_act_timer;
      //! True if received the logging path.
      bool m_log_dir_updated;
      //! Last estimated state
      IMC::EstimatedState m_estate;

      Task(const std::string& name, Tasks::Context& ctx):
        Tasks::Task(name, ctx),
        m_http(NULL),
        m_boundary(""),
        m_log_dir(ctx.dir_log),
        m_volume_count(0),
        m_file_count(0),
        m_pwr_gpio(NULL),
        m_led_gpio(NULL),
        m_cfg_dirty(false),
        m_slave_entities(NULL),
        m_log_dir_updated(false)
      {
        // Retrieve configuration values.
        paramActive(Tasks::Parameter::SCOPE_MANEUVER,
                    Tasks::Parameter::VISIBILITY_USER);

        param("Power GPIO", m_args.pwr_gpio)
        .defaultValue("-1")
        .description("GPIO that controls power to the camera");

        param("LED GPIO", m_args.led_gpio)
        .defaultValue("-1")
        .description("GPIO that controls power to the LEDs");

        param("Camera IPv4 Address", m_args.address)
        .defaultValue("10.0.10.82")
        .description("IPv4 address of the camera");

        param("Frames Per Second", m_args.fps)
        .visibility(Tasks::Parameter::VISIBILITY_USER)
        .scope(Tasks::Parameter::SCOPE_GLOBAL)
        .defaultValue("15")
        .description("Frames per second");

        param("Auto Exposure", m_args.auto_exposure)
        .visibility(Tasks::Parameter::VISIBILITY_USER)
        .scope(Tasks::Parameter::SCOPE_GLOBAL)
        .defaultValue("true")
        .description("Enable automatic exposure");

        param("Exposure Value", m_args.exposure_value)
        .visibility(Tasks::Parameter::VISIBILITY_USER)
        .scope(Tasks::Parameter::SCOPE_GLOBAL)
        .defaultValue("0.008")
        .description("Exposure value if auto exposure is disabled");

        param("Autoexposure Knee", m_args.exposure_knee)
        .visibility(Tasks::Parameter::VISIBILITY_USER)
        .scope(Tasks::Parameter::SCOPE_GLOBAL)
        .defaultValue("5")
        .description("Exposure limit before increasing the gain (in miliseconds)");

        param("Maximum Exposure", m_args.exposure_max)
        .visibility(Tasks::Parameter::VISIBILITY_USER)
        .scope(Tasks::Parameter::SCOPE_GLOBAL)
        .defaultValue("10")
        .description("Maximum exposure in miliseconds");

        param("Auto Gain", m_args.auto_gain)
        .visibility(Tasks::Parameter::VISIBILITY_USER)
        .scope(Tasks::Parameter::SCOPE_GLOBAL)
        .defaultValue("true")
        .description("Enable automatic gain");

        param("Gain Value", m_args.gain_value)
        .visibility(Tasks::Parameter::VISIBILITY_USER)
        .scope(Tasks::Parameter::SCOPE_GLOBAL)
        .defaultValue("1.0")
        .description("Gain value if auto gain is disabled");

        param("Autogain Knee", m_args.gain_knee)
        .visibility(Tasks::Parameter::VISIBILITY_USER)
        .scope(Tasks::Parameter::SCOPE_GLOBAL)
        .defaultValue("2.0")
        .description("Gain limit before increasing the exposure");

        param("Maximum Gain", m_args.gain_max)
        .visibility(Tasks::Parameter::VISIBILITY_USER)
        .scope(Tasks::Parameter::SCOPE_GLOBAL)
        .defaultValue("4.0")
        .description("Maximum gain");

        param("Gamma", m_args.gamma)
        .visibility(Tasks::Parameter::VISIBILITY_USER)
        .scope(Tasks::Parameter::SCOPE_GLOBAL)
        .defaultValue("1.4")
        .description("Gamma Value");

        param("Median Filter", m_args.median_filter)
        .visibility(Tasks::Parameter::VISIBILITY_USER)
        .scope(Tasks::Parameter::SCOPE_GLOBAL)
        .defaultValue("false")
        .description("Enable Median Filter");

        param("Auto White Balance", m_args.auto_whitebalance)
        .visibility(Tasks::Parameter::VISIBILITY_USER)
        .scope(Tasks::Parameter::SCOPE_GLOBAL)
        .defaultValue("true")
        .description("Enable Continuous Automatic White Balance");

        param("White Balance Gain Red", m_args.gain_red)
        .visibility(Tasks::Parameter::VISIBILITY_USER)
        .scope(Tasks::Parameter::SCOPE_GLOBAL)
        .defaultValue("2.0")
        .description("White Balance Gain Red");

        param("White Balance Gain Green", m_args.gain_green)
        .visibility(Tasks::Parameter::VISIBILITY_USER)
        .scope(Tasks::Parameter::SCOPE_GLOBAL)
        .defaultValue("1.0")
        .description("White Balance Gain Green");

        param("White Balance Gain Blue", m_args.gain_blue)
        .visibility(Tasks::Parameter::VISIBILITY_USER)
        .scope(Tasks::Parameter::SCOPE_GLOBAL)
        .defaultValue("2.0")
        .description("White Balance Gain Blue");

        param("LED Type", m_args.led_type)
        .values("OFF, ON, STROBE")
        .visibility(Tasks::Parameter::VISIBILITY_USER)
        .scope(Tasks::Parameter::SCOPE_GLOBAL)
        .defaultValue("ON")
        .description("LED type");

        param("Power Channel - Strobe", m_args.strobe_pwr)
        .description("Power channel of the strobe");

        param("Volume Size", m_args.volume_size)
        .defaultValue("1000")
        .description("Number of photos per volume");

        param("Log Prefix", m_args.log_prefix)
        .defaultValue("")
        .description("Log folder prefix");

        param("Enable Camera Configuration", m_args.camera_cfg)
        .defaultValue("true")
        .description("Attempt to configure the camera");

        param("Enable Camera Streaming", m_args.camera_capt)
        .defaultValue("true")
        .description("Attempt to capture frames from the camera");

        param("Slave Entities", m_args.slave_entities)
        .defaultValue("")
        .description("Slave entities to activate/deactivate");

        bind<IMC::LoggingControl>(this);
        bind<IMC::EntityActivationState>(this);
        bind<IMC::EntityInfo>(this);
        bind<IMC::EstimatedState>(this);
      }

      void
      updateSlaveEntities(void)
      {
        if (m_slave_entities == NULL)
          return;

        m_slave_entities->clear();

        std::size_t sep;
        std::vector<std::string>::const_iterator itr = m_args.slave_entities.begin();
        for (; itr != m_args.slave_entities.end(); ++itr)
        {
          sep = itr->find_first_of(':');

          if (sep == std::string::npos)
            // Local entity
            m_slave_entities->addEntity(*itr);
          else
            // Remote entity
            m_slave_entities->addEntity(itr->substr(sep + 1), itr->substr(0, sep));
        }
      }

      void
      onUpdateParameters(void)
      {
        updateSlaveEntities();

        if (isActive())
        {
          m_cfg_dirty = checkParameters();
          return;
        }

        m_cfg_dirty = true;
      }

      bool
      checkParameters(void)
      {
        return (paramChanged(m_args.fps) ||
                paramChanged(m_args.gamma) ||
                paramChanged(m_args.median_filter) ||
                paramChanged(m_args.led_type) ||
                checkExposure() ||
                checkGain() ||
                checkWhiteBalance());
      }

      void
      onResourceAcquisition(void)
      {
        if (m_args.pwr_gpio > 0)
        {
          m_pwr_gpio = new Hardware::GPIO(m_args.pwr_gpio);
          m_pwr_gpio->setDirection(Hardware::GPIO::GPIO_DIR_OUTPUT);
          m_pwr_gpio->setValue(0);
        }

        if (m_args.led_gpio > 0)
        {
          m_led_gpio = new Hardware::GPIO(m_args.led_gpio);
          m_led_gpio->setDirection(Hardware::GPIO::GPIO_DIR_OUTPUT);
          m_led_gpio->setValue(0);
        }

        m_slave_entities = new EntityActivationMaster(this);
        updateSlaveEntities();
        setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_IDLE);
      }

      void
      onResourceRelease(void)
      {
        trace("releasing");
        requestDeactivation();

        if (m_pwr_gpio != NULL)
        {
          delete m_pwr_gpio;
          m_pwr_gpio = NULL;
        }

        if (m_led_gpio != NULL)
        {
          delete m_led_gpio;
          m_led_gpio = NULL;
        }

        if (m_slave_entities != NULL)
        {
          delete m_slave_entities;
          m_slave_entities = NULL;
        }
      }

      void
      consume(const IMC::LoggingControl* msg)
      {
        if (!m_args.camera_capt)
          return;

        if (!isDeactivating() && (msg->getDestination() != getSystemId()))
          return;

        if (msg->op == IMC::LoggingControl::COP_CURRENT_NAME)
        {
          m_log_dir = m_ctx.dir_log / m_args.log_prefix / msg->name / "Photos";
          m_log_dir_updated = true;
          trace("received new log dir");
        }
      }

      void
      consume(const IMC::EstimatedState* msg)
      {
        if (msg->getSource() != getSystemId())
          return;

        m_estate = *msg;
      }

      void
      onRequestActivation(void)
      {
        trace("received activation request");

        if (m_pwr_gpio != NULL)
          m_pwr_gpio->setValue(1);

        m_slave_entities->activate();
        m_act_timer.setTop(getActivationTime());
      }

      void
      checkActivationProgress(void)
      {
        trace("checking activation");

        if (getEntityState() != IMC::EntityState::ESTA_BOOT)
          setEntityState(IMC::EntityState::ESTA_BOOT, Status::CODE_INIT);

        if (m_act_timer.overflow() && m_act_timer.getTop() != 0)
        {
          const char* reason;
          if (!m_slave_entities->checkActivation())
            reason = DTR("failed to activate required entities");
          else if (m_args.camera_cfg && !checkConfiguration())
            reason = DTR("failed to configure camera");
          else if (m_args.camera_capt && !(checkCaptureOk() && checkLogdirOk()))
            reason = DTR("failed to start video streamming");
          else
            reason = DTR("activation timed out for unknown reason");

          activationFailed(reason);
          m_slave_entities->deactivate();
          setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_IDLE);
          return;
        }

        // Check if the dependencies are met
        if (!m_slave_entities->checkActivation())
        {
          trace("activation waiting for slaves");
          return;
        }

        // Check if we should configure the camera and still haven't
        if (m_args.camera_cfg && !checkConfiguration())
          return;

        // Check if we should prepare for capture and still haven't
        if (m_args.camera_capt && !(checkCaptureOk() && checkLogdirOk()))
          return;

        activate();
        debug("activation took %0.2f s", getActivationTime() - m_act_timer.getRemaining());
      }

      void
      onRequestDeactivation(void)
      {
        trace("received deactivation request");
        m_slave_entities->deactivate();

        m_act_timer.setTop(getDeactivationTime());
      }

      void
      checkDeactivationProgress(void)
      {
        trace("checking deactivation");

        if (m_act_timer.overflow() && m_act_timer.getTop() != 0)
          deactivationFailed(DTR("failed to deactivate required entities"));

        if (m_slave_entities->checkDeactivation())
          deactivate();
      }

      void
      onActivation(void)
      {
        m_file_count = 0;
        m_volume_count = 0;

        if (m_args.camera_capt)
          changeVolume();

        setStrobePower(true);

        setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_ACTIVE);
        inf(DTR("activated"));
      }

      void
      onDeactivation(void)
      {
        stopVideo();
        inf(DTR("stopped video stream"));

        setStrobePower(false);
        m_log_dir_updated = false;

        if (m_pwr_gpio != NULL)
          m_pwr_gpio->setValue(0);

        setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_IDLE);
      }

      void
      consume(const IMC::EntityActivationState* msg)
      {
        if (msg->getSourceEntity() == DUNE_IMC_CONST_UNK_EID)
        {
          err(DTR("invalid entity"));
          return;
        }
        m_slave_entities->onEntityActivationState(msg);
      }

      void
      consume(const IMC::EntityInfo* msg)
      {
        m_slave_entities->onEntityInfo(msg);
      }

      void
      setStrobePower(bool value)
      {
        if (m_args.led_type != "STROBE")
          return;

        if (m_args.strobe_pwr.empty())
          return;

        IMC::PowerChannelControl pcc;
        pcc.name = m_args.strobe_pwr;

        if (value)
          pcc.op = IMC::PowerChannelControl::PCC_OP_TURN_ON;
        else
          pcc.op = IMC::PowerChannelControl::PCC_OP_TURN_OFF;

        dispatch(pcc);
      }

      void
      startVideo(void)
      {
        debug("starting video stream");

        // Send request
        const char cmd[] = "GET /cgi-bin/nph-video?type=multipart/x-mixed-replace&archive=1\r\n";
        m_http = new HTTPClient(cmd, m_args.address, c_port);

        // Get reply header
        std::vector<std::string> header;
        std::vector<std::string>::iterator it;

        m_http->getHeader(header);

        if (header[0] != "HTTP/1.0 200 OK\r\n")
        {
          err(DTR("failed to start video stream"));
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

        if (m_led_gpio != NULL)
          m_led_gpio->setValue(1);

        inf(DTR("started video stream"));
      }

      void
      stopVideo(void)
      {
        if (m_http == NULL)
          return;

        debug("stopping video stream");
        delete m_http;
        m_http = NULL;

        if (m_led_gpio != NULL)
          m_led_gpio->setValue(0);
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

      void
      setProperties(void)
      {
        updateFps();
        updateExposure();
        updateGain();
        updateWhiteBalance();
        updateGamma();
        updateMedianFilter();
        updateStrobe();
      }

      void
      updateFps(void)
      {
        debug("setting frames per second to '%u'", m_args.fps);
        setProperty("maximum_framerate", uncastLexical(m_args.fps));
      }

      void
      updateExposure(void)
      {
        if (m_args.auto_exposure)
        {
          debug("enabling autoexposure");
          setProperty("autoexposure", "1");
          debug("setting maximum exposure to '%f' miliseconds", m_args.exposure_max);
          setProperty("maximum_exposure", uncastLexical(m_args.exposure_max));
          debug("setting autoexposure knee to '%f' miliseconds", m_args.exposure_knee);
          setProperty("autoexposure_knee", uncastLexical(m_args.exposure_knee));
        }
        else
        {
          debug("disabling autoexposure");
          setProperty("autoexposure", "0");
          debug("setting exposure value to '%f' miliseconds", m_args.exposure_value);
          setProperty("exposure", uncastLexical(m_args.exposure_value));
        }
      }

      bool
      checkExposure(void)
      {
        if (paramChanged(m_args.auto_exposure))
          return true;

        if (m_args.auto_exposure)
        {
          if (paramChanged(m_args.exposure_max) ||
              paramChanged(m_args.exposure_knee))
            return true;
        }
        else
        {
          if (paramChanged(m_args.exposure_value))
            return true;
        }

        return false;
      }

      void
      updateGain(void)
      {
        if (m_args.auto_gain)
        {
          debug("enabling autogain");
          setProperty("autogain", "1");
          debug("setting maximum gain to '%f'", m_args.gain_max);
          setProperty("maximum_gain", uncastLexical(m_args.gain_max));
          debug("setting autogain knee to '%f'", m_args.gain_knee);
          setProperty("autogain_knee", uncastLexical(m_args.gain_knee));
        }
        else
        {
          debug("disabling autogain");
          setProperty("autogain", "0");
          debug("setting gain value to '%f'", m_args.gain_value);
          setProperty("gain", uncastLexical(m_args.gain_value));
        }
      }

      bool
      checkGain(void)
      {
        if (paramChanged(m_args.auto_gain))
          return true;

        if (m_args.auto_gain)
        {
          if (paramChanged(m_args.gain_max) ||
              paramChanged(m_args.gain_knee))
            return true;
        }
        else
        {
          if (paramChanged(m_args.gain_value))
            return true;
        }

        return false;
      }

      void
      updateWhiteBalance(void)
      {
        if (m_args.auto_whitebalance)
        {
          debug("enabling continuous automatic whitebalance");
          setProperty("whitebalance", "continuous");
        }
        else
        {
          debug("disabling continuous automatic whitebalance");
          setProperty("whitebalance", "off");
          setProperty("whitebalance_preset", "user");
          debug("setting whitebalance gains to R='%f' G='%f' B='%f'", m_args.gain_red, m_args.gain_blue, m_args.gain_blue);
          setProperty("gain_red", uncastLexical(m_args.gain_red));
          setProperty("gain_green", uncastLexical(m_args.gain_green));
          setProperty("gain_blue", uncastLexical(m_args.gain_blue));
        }
      }

      bool
      checkWhiteBalance(void)
      {
        if (paramChanged(m_args.auto_whitebalance))
          return true;

        if (!m_args.auto_whitebalance)
        {
          if (paramChanged(m_args.gain_red) ||
              paramChanged(m_args.gain_green) ||
              paramChanged(m_args.gain_blue))
            return true;
        }

        return false;
      }

      void
      updateGamma(void)
      {
        debug("setting gamma to '%f'", m_args.gamma);
        setProperty("gamma", uncastLexical(m_args.gamma));
      }

      void
      updateMedianFilter(void)
      {
        debug("setting median filtering to '%u'", m_args.median_filter);
        setProperty("median_filter", uncastLexical(m_args.median_filter));
      }

      void
      updateStrobe(void)
      {
        if (m_args.led_type == "STROBE")
        {
          debug("enabling strobe output");
          setProperty("output_select", "strobe");
          return;
        }

        if (m_args.led_type == "ON")
        {
          debug("leds always on");
          setProperty("output_select", "off");
          return;
        }

        debug("leds always off");
        setProperty("output_select", "on");
      }

      void
      changeVolume(void)
      {
        m_volume = m_log_dir / String::str("%06u", m_volume_count);
        m_volume.create();
        ++m_volume_count;
      }

      void
      captureAndSave(void)
      {
        // Take estimated state snapshot just before capture
        IMC::EstimatedState es = m_estate;

        ByteBuffer dst;
        try
        {
          captureFrame(dst);
          if (dst.getSize() == 0)
            spew("destination size is zero");
        }
        catch (std::runtime_error& e)
        {
          debug("frame capture failed: %s", e.what());
          stopVideo();
        }

        if (m_file_count++ == m_args.volume_size)
        {
          m_file_count = 0;
          changeVolume();
        }

        // Modify EXIF tags to include the position
        try
        {
          Media::ExifEditor ee;
          ee.setBuffer(dst.getBuffer(), dst.getSize());
          Media::ExifData* edata = ee.getExifData();

          // Fill the exif position data.
          double lat, lon;
          Coordinates::toWGS84(es, lat, lon);
          std::ostringstream ss;
          ss << "latitude=" << Angles::degrees(lat);
          ss << ", longitude=" << Angles::degrees(lon);
          ss << ", depth=" << es.depth;
          ss << ", altitude=" << es.alt;
          ss << ", heading=" << Angles::degrees(es.psi);
          ss << ", roll=" << Angles::degrees(es.phi);
          ss << ", pitch=" << Angles::degrees(es.theta);
          edata->setComment(ss.str());

          // Save file.
          double timestamp = Clock::getSinceEpoch();
          Path file = m_volume / String::str("%0.4f.jpg", timestamp);
          std::ofstream jpg(file.c_str(), std::ios::binary);
          ee.outputToStream(jpg);
        }
        catch (std::runtime_error& e)
        {
          debug("frame save failed: %s", e.what());
        }
      }

      bool
      checkConfiguration(void)
      {
        if (!m_cfg_dirty)
          return true;

        try
        {
          setProperties();
          m_cfg_dirty = false;
          inf(DTR("successfully configured camera"));
          return true;
        }
        catch (...)
        { }
        return false;
      }

      bool
      checkCaptureOk(void)
      {
        if (m_http != NULL)
          return true;

        try
        {
          startVideo();
          return true;
        }
        catch (std::runtime_error& e)
        {
          if (getEntityState() != IMC::EntityState::ESTA_FAULT)
          {
            setEntityState(IMC::EntityState::ESTA_FAULT, Status::CODE_COM_ERROR);
            err("%s", e.what());
          }
          stopVideo();
        }
        return false;
      }

      bool
      checkLogdirOk(void)
      {
        if (m_log_dir_updated)
          return true;

        IMC::LoggingControl log_ctl;
        log_ctl.op = IMC::LoggingControl::COP_REQUEST_CURRENT_NAME;
        dispatch(log_ctl);

        return false;
      }

      void
      onMain(void)
      {
        while (!stopping())
        {
          if (isActive())
          {
            waitForMessages(1.0);
            if (m_args.camera_cfg)
              checkConfiguration();
            if (m_args.camera_capt && checkCaptureOk())
              captureAndSave();
          }
          else
          {
            waitForMessages(1.0);
            if (isActivating())
              checkActivationProgress();
            else if (isDeactivating())
              checkDeactivationProgress();
          }
        }
      }

    };
  }
}

DUNE_TASK
