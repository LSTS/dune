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
// https://www.lsts.pt/dune/licence.                                        *
//***************************************************************************
// Author: José Braga                                                      *
//***************************************************************************

// ISO C++ 98 headers.
#include <fstream>
#include <iomanip>
#include <sstream>
#include <unistd.h>

// DUNE headers.
#include <DUNE/DUNE.hpp>
#include <bvt_sdk.h>

namespace Sensors
{
  namespace BlueView
  {
    using DUNE_NAMESPACES;

    //! %Task arguments.
    struct Arguments
    {
      //! IPv4 address.
      Address addr;
      //! Start range.
      float start_range;
      //! Stop range.
      float stop_range;
      //! Power channel name.
      std::string power_channel;
      //! Save .pgm photos.
      bool save_to_pgm;
    };

    struct Task: public DUNE::Tasks::Task
    {
      //! Sonar device.
      BVTSonar m_sonar;
      //! Sonar device head.
      BVTHead m_sonar_head;
      //! Sonar file.
      BVTSonar m_file;
      //! Sonar file head.
      BVTSonar m_file_head;
      //! Sonar ping.
      BVTPing m_ping;
      //! Power channel control.
      IMC::PowerChannelControl m_power_channel_control;
      //! True if task is activating.
      bool m_activating;
      //! Activation timer.
      Counter<double> m_countdown;
      // Log folder name.
      std::string m_log_name;
      //! Configuration parameters.
      Arguments m_args;

      //! Constructor.
      //! @param[in] name task name.
      //! @param[in] ctx context.
      Task(const std::string& name, Tasks::Context& ctx):
        DUNE::Tasks::Task(name, ctx),
        m_sonar(NULL),
        m_sonar_head(NULL),
        m_file(NULL),
        m_file_head(NULL),
        m_ping(NULL),
        m_activating(false)
      {
        paramActive(Tasks::Parameter::SCOPE_IDLE,
                    Tasks::Parameter::VISIBILITY_USER);

        param("IPv4 Address", m_args.addr)
        .defaultValue("10.0.2.45")
        .description("IP address of the sonar");

        param(DTR_RT("Start Range"), m_args.start_range)
        .defaultValue("0")
        .visibility(Tasks::Parameter::VISIBILITY_USER)
        .scope(Tasks::Parameter::SCOPE_IDLE)
        .units(Units::Meter)
        .description("Operating start range");

        param(DTR_RT("Stop Range"), m_args.stop_range)
        .defaultValue("10")
        .visibility(Tasks::Parameter::VISIBILITY_USER)
        .scope(Tasks::Parameter::SCOPE_IDLE)
        .units(Units::Meter)
        .description("Operating stop range");

        param(DTR_RT("Save to PGM"), m_args.save_to_pgm)
        .defaultValue("false")
        .visibility(Tasks::Parameter::VISIBILITY_USER)
        .scope(Tasks::Parameter::SCOPE_IDLE)
        .description("Save sonar shots to portable graymap format");

        param("Power Channel", m_args.power_channel)
        .defaultValue("Blueview")
        .description("Power channel that controls the power of the device");

        // Register consumers.
        bind<IMC::LoggingControl>(this);
        bind<IMC::SoundSpeed>(this);
      }

      //! Update task parameters.
      void
      onUpdateParameters(void)
      {
        if (paramChanged(m_args.start_range) || paramChanged(m_args.stop_range))
          setRange(m_sonar_head, m_args.start_range, m_args.stop_range);

        m_countdown.setTop(getActivationTime());
      }

      //! Initialize task resources.
      void
      onResourceInitialization(void)
      {
        closeLog();
        setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_IDLE);
      }

      //! Release task resources.
      void
      onResourceRelease(void)
      {
        if (isActive())
          requestDeactivation();
        else
          clear();
      }

      //! Clear resources.
      void
      clear(void)
      {
        closeLog();
        destroySonar(m_sonar);
        destroyPing(m_ping);
      }

      void
      onReportEntityState(void)
      {
        if (m_sonar == NULL)
          return;

        IMC::Temperature temp;
        temp.value = getTemperature(m_sonar);
        dispatch(temp);
      }

      void
      onRequestActivation(void)
      {
        m_power_channel_control.op = IMC::PowerChannelControl::PCC_OP_TURN_ON;
        dispatch(m_power_channel_control);
        m_countdown.reset();
        m_activating = true;
      }

      void
      onActivation(void)
      {
        inf("%s", DTR(Status::getString(Status::CODE_ACTIVE)));
        m_activating = false;
      }

      void
      onDeactivation(void)
      {
        clear();

        inf("%s", DTR(Status::getString(Status::CODE_IDLE)));
        setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_IDLE);

        m_power_channel_control.op = IMC::PowerChannelControl::PCC_OP_TURN_OFF;
        dispatch(m_power_channel_control);
      }

      //! Check task activation progress.
      void
      checkActivationProgress(void)
      {
        if (m_countdown.overflow())
        {
          activationFailed(DTR("failed to contact device"));
          m_activating = false;
          return;
        }

        try
        {
          setup();
          activate();
          debug("activation took %0.2f s", getActivationTime() -
                m_countdown.getRemaining());
        }
        catch (...)
        { }
      }

      //! Close current sonar log file.
      void
      closeLog(void)
      {
        destroySonar(m_file);
      }

      //! Open a sonar log file.
      //! @param[in] path path to folder.
      void
      openLog(const Path& path)
      {
        // File already exists
        if (m_file != NULL)
          return;

        if (m_sonar == NULL)
          return;

        m_file = create();

        Path old = Path::current();

        if (!goToFolder(path))
          return;

        debug("creating log file in %s/", path.c_str());

        for (unsigned i = 0; i < 100; i++)
        {
          std::stringstream ss;
          ss << "Data." << std::setfill('0') << std::setw(2) << i << ".son";

          std::ifstream ift(ss.str().c_str());
          if (!ift)
          {
            createFile(m_sonar, m_file, ss.str().c_str());
            break;
          }
        }

        if (!goToFolder(old))
          return;

        m_file_head = getHead(m_file, 0);
      }

      void
      consume(const IMC::LoggingControl* msg)
      {
        if (msg->getSource() != getSystemId())
          return;

        switch (msg->op)
        {
          case IMC::LoggingControl::COP_STARTED:
            closeLog();
            m_log_name = msg->name;
            if (m_sonar != NULL)
              openLog(m_ctx.dir_log / m_log_name);
            break;

          case IMC::LoggingControl::COP_STOPPED:
            closeLog();
            break;
        }
      }

      void
      consume(const IMC::SoundSpeed* msg)
      {
        // Do not use invalid readings.
        if (msg->value < 0)
          return;

        setSoundSpeed(m_sonar_head, (int)msg->value);
      }

      //! Create sonar object.
      //! @return BVTSonar object.
      BVTSonar
      create(void)
      {
        BVTSonar s = BVTSonar_Create();
        return s;
      }

      //! Establish a connection with sonar.
      //! @return BVTSonar object.
      BVTSonar
      connect(void)
      {
        BVTSonar s = create();

        if (BVTSonar_Open(s, "NET", m_args.addr.c_str()) != 0)
          throw std::runtime_error(DTR("unable to connect"));

        return s;
      }

      //! Create a new data file.
      //! @param[in] src sonar object to clone when creating the file.
      //! @param[in] dst pointer to sonar object.
      void
      createFile(BVTSonar src, BVTSonar dst, Path path)
      {
        attempt(BVTSonar_CreateFile(dst, path.c_str(), src, ""));
      }

      //! Retrieve a Head object from the sonar.
      //! @param[in] s pointer to sonar object.
      //! @param[in] id the head number to return.
      //! @return Head object.
      BVTHead
      getHead(BVTSonar s, unsigned n)
      {
        if (s == NULL)
          throw std::runtime_error(DTR("no sonar"));

        BVTHead head = NULL;
        attempt(BVTSonar_GetHead(s, n, &head));
        return head;
      }

      //! Get temperature reading from sonar.
      //! @param[in] s pointer to sonar object.
      //! @return temperature reading.
      float
      getTemperature(BVTSonar s)
      {
        return BVTSonar_GetTemperature(s);
      }

      //! Check sonar head properties.
      //! @param[in] h sonar head.
      void
      checkHeadProperties(BVTHead h)
      {
        if (h == NULL)
          return;

        debug("gain adjustment: %f", BVTHead_GetGainAdjustment(h));
        debug("time variable gain: %f", BVTHead_GetTVGSlope(h));
      }

      //! Set the speed of sound in water.
      //! @param[in] h pointer to head object.
      //! @param[in] s sound speed value.
      void
      setSoundSpeed(BVTHead h, int s)
      {
        if (h != NULL)
          attempt(BVTHead_SetSoundSpeed(h, s));
      }

      //! Get the defined speed of sound in water.
      //! @param[in] h pointer to head object.
      //! @return sound speed value.
      int
      getSoundSpeed(BVTHead h)
      {
        if (h != NULL)
          return BVTHead_GetSoundSpeed(h);
      }

      //! Retrieve a Ping from the Head
      //! If the Head is attached to a 'live' sonar (network) then this always
      //! acquires a new ping. If it is a file then returns the next ping in the file.
      //! @param[in] h pointer to head object.
      //! @param[out] p pointer to ping object.
      void
      getPing(BVTHead h, BVTPing& p)
      {
        if (h == NULL)
          throw std::runtime_error(DTR("no sonar head"));

        attempt(BVTHead_GetPing(h, -1, &p));
      }

      //! Write a ping to a file.
      //! @param[in] h pointer to head object
      //! @param[in] p the ping to write out.
      void
      putPing(BVTHead h, BVTPing p)
      {
        if ((h == NULL) || (p == NULL))
          return;

        attempt(BVTHead_PutPing(h, p));
      }

      //! Set the range to be acquired.
      //! @param[in] h pointer to head object.
      //! @param[in] start_range start range in meters.
      //! @param[in] stop_range stop range in meters.
      void
      setRange(BVTHead h, float start_range, float stop_range)
      {
        // Modify if head object exists.
        if (h == NULL)
          return;

        // Check minimum and maximum.
        if (start_range < BVTHead_GetMinimumRange(h))
          start_range = BVTHead_GetMinimumRange(h);

        if (stop_range > BVTHead_GetMaximumRange(h))
          stop_range = BVTHead_GetMaximumRange(h);

        attempt(BVTHead_SetRange(h, start_range, stop_range));
        spew("modified range: [%f-%f] ", BVTHead_GetStartRange(h), BVTHead_GetStopRange(h));
      }

      //! Attempt to execute a lib call.
      //! @param[in] r error code.
      void
      attempt(int r)
      {
        getError(r);
      }

      //! Display error to output.
      //! @param[in] r error code.
      void
      getError(int r)
      {
        if (r == 0)
          return;

        err("%s: %s", BVTError_GetName(r), BVTError_GetString(r));
      }

      //! Return the number of heads on this sonar.
      //! @param[in] s pointer to sonar object.
      //! @return number of heads.
      int
      checkNumberHeads(BVTSonar s)
      {
        return BVTSonar_GetHeadCount(s);
      }

      //! Retrieve an image of this ping, according to the parameters set in the head used to get this ping.
      //! @param[in] p pointer to ping object.
      //! @return output image.
      BVTMagImage
      generateImage(BVTPing p)
      {
        BVTMagImage img;
        attempt(BVTPing_GetImage(p, &img));
        return img;
      }

      //! Get size of image.
      //! @param[in] img pointer to image object.
      //! @param[out] width width of image.
      //! @param[out] height height of image.
      void
      getImageSize(BVTMagImage img, int& width, int& height)
      {
        width = BVTMagImage_GetWidth(img);
        height = BVTMagImage_GetHeight(img);
        spew("saving image (%dx%d)", width, height);
      }

      //! Save the image in PGM (PortableGreyMap) format.
      //! @param[in] img pointer to image object.
      void
      saveImagePGM(BVTMagImage img)
      {
        double timestamp = Clock::getSinceEpoch();
        Path file = String::str("%0.4f.pgm", timestamp);

        Path old = Path::current();
        Path path(m_ctx.dir_log / m_log_name);

        if (!goToFolder(path))
          return;

        attempt(BVTMagImage_SavePGM(img, file.c_str()));

        if (!goToFolder(old))
          return;
      }

      //! Generate image, and save to file.
      //! @param[in] p pointer to ping object.
      void
      takeShot(BVTPing p)
      {
        if (p == NULL)
          return;

        // Generate image from previous ping.
        BVTMagImage img = generateImage(p);
        int width, height;
        getImageSize(img, width, height);
        saveImagePGM(img);
        destroyImage(img);
      }

      //! Destroy sonar object.
      //! @param[out] s pointer to sonar object.
      void
      destroySonar(BVTSonar& s)
      {
        BVTSonar_Destroy(s);
        s = NULL;
      }

      //! Destroy ping object.
      //! @param[out] p pointer to ping object.
      void
      destroyPing(BVTPing& p)
      {
        BVTPing_Destroy(p);
        p = NULL;
      }

      //! Destroy image object.
      //! @param[out] i pointer to image object.
      void
      destroyImage(BVTMagImage& i)
      {
        BVTMagImage_Destroy(i);
        i = NULL;
      }

      //! Setup sonar.
      void
      setup(void)
      {
        // Create sonar.
        if (m_sonar == NULL)
          m_sonar = connect();

        // Define head properties.
        m_sonar_head = getHead(m_sonar, 1);

        setRange(m_sonar_head, m_args.start_range, m_args.stop_range);
        checkHeadProperties(m_sonar_head);

        if (!m_log_name.empty())
          openLog(m_ctx.dir_log / m_log_name);
      }

      //! Modify folder.
      //! @param[in] path path to folder.
      //! @return true if successful, false otherwise.
      bool
      goToFolder(const Path& path)
      {
        if (chdir(path.c_str()) != 0)
        {
          err(DTR("unable to change directory"));
          return false;
        }

        return true;
      }

      //! Main loop.
      void
      onMain(void)
      {
        while (!stopping())
        {
          consumeMessages();

          if (isActive() && (m_sonar != NULL) && (m_file != NULL))
          {
            try
            {
              getPing(m_sonar_head, m_ping);
              putPing(m_file_head, m_ping);

              if (m_args.save_to_pgm)
                takeShot(m_ping);

              destroyPing(m_ping);
              setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_ACTIVE);
            }
            catch (std::exception& e)
            {
              err("%s", e.what());
              setEntityState(IMC::EntityState::ESTA_ERROR, Status::CODE_COM_ERROR);
            }
          }
          else
          {
            waitForMessages(1.0);
            if (m_activating)
              checkActivationProgress();
          }
        }
      }
    };
  }
}

DUNE_TASK
