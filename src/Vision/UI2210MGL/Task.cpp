//***************************************************************************
// Copyright 2013-2015 Norwegian University of Science and Technology (NTNU)*
// Centre for Autonomous Marine Operations and Systems (AMOS)               *
// Department of Engineering Cybernetics (ITK)                              *
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
// Author: Torkel Hansen                                                    *
// Author: João Fortuna                                                     *
//***************************************************************************

// ISO C++ 98 headers.
#include <queue>
#include <iostream>
#include <cstring>
#include <cstdio>
#include <time.h>

// DUNE headers.
#include <DUNE/DUNE.hpp>

// Vendor headers.
#include <ueye.h>

// Number of image buffers to allocate
#define MAX_BUFFERS     256

// Milliseconds to wait for FRAME event before timeout occurs
#define FRAME_EVENT_TIMEOUT 5000

using DUNE_NAMESPACES;

namespace Vision
{
  //! Device driver for the uEye UI-2210-M-GL USB Camera.
  //!
  //! @author Torkel Hansen
  //! @author João Fortuna
  namespace UI2210MGL
  {
    //! %Task arguments.
    struct Arguments
    {
      //! Frames Per Second.
      unsigned fps;
      //! Compression quality.
      unsigned quality;
      //! Path to log directory
      std::string log_dir;
    };

    //! Device driver task.
    struct Task: public DUNE::Tasks::Task
    {
      //! %Frame width. Unclear if 640 or 960
      static const unsigned c_width = 640;
      //! %Frame height. 480 is total, 250 is usable.
      static const unsigned c_height = 250;
      //! Configuration parameters.
      Arguments m_args;
      //! %Destination log folder.
      Path m_log_dir;
      //! Camera handle.
      HIDS m_cam;
      // Will contain the address of memory allocated for images
      char* m_ppcImgMem;
      // Will contain pointers to all image allocated memory areas
      char **m_imgMems;
      // Will contain picture IDs for the above array
      int *m_imgMemIds;
      bool m_starting;

      Task(const std::string& name, Tasks::Context& ctx):
        Tasks::Task(name, ctx),
        m_log_dir(ctx.dir_log),
        m_starting(true)
      {
        // Retrieve configuration values.
        paramActive(Tasks::Parameter::SCOPE_MANEUVER,
                    Tasks::Parameter::VISIBILITY_USER);

        param("Frames Per Second", m_args.fps)
        .defaultValue("30")
        .minimumValue("0")
        .maximumValue("75.3")
        .description("Frames per second");

        param("Quality", m_args.quality)
        .defaultValue("80")
        .units(Units::Percentage)
        .minimumValue("0")
        .maximumValue("100")
        .description("Image compression quality");

        param("Log Dir", m_args.log_dir)
        .defaultValue("")
        .description("Path to Log Directory");

        bind<IMC::LoggingControl>(this);
      }

      //! Update internal parameters.
      void
      onUpdateParameters(void)
      {
        if (m_starting)
        {
          m_starting = false;
          return;
        }

        // Set target FPS. It is capped at 75.3 FPS.
        double newFPS, fpsWish = m_args.fps;
        is_SetFrameRate(m_cam, fpsWish, &newFPS);
        inf("Set FPS to %.1f, actual FPS is now %.1f", fpsWish, newFPS);
      }

      //! Acquire resources and buffers.
      void
      onResourceAcquisition(void)
      {
        // Open camera with ID 1. Set to 0 would take the first CAM avaiable.
        m_cam = 1;

        // Will hold the picture ID of an image. I think this is an image's
        // index within a memory area allocated to images
        int pid;

        // Will contain pointers to all image allocated memory areas
        m_imgMems = new char*[MAX_BUFFERS]();
        // Will contain picture IDs for the above array
        m_imgMemIds = new int[MAX_BUFFERS]();

        int tmp;

        // Will contain information about the sensor
        SENSORINFO sensorInfo;

        // Starts the driver and establishes the connection to the camera
        tmp = is_InitCamera(&m_cam, NULL);

        // Check if camera initialisation was successfull.
        if (tmp != IS_SUCCESS)
          err("Camera initialisation was unsuccessful. Error %d", tmp);

        // Get information about the sensor type used in the camera
        tmp = is_GetSensorInfo(m_cam, &sensorInfo);
        debug("Sensor name: %s", sensorInfo.strSensorName);
        debug("Resolution: %d x %d", sensorInfo.nMaxWidth, sensorInfo.nMaxHeight);

        // Set color mode.
        is_SetColorMode(m_cam, IS_CM_MONO12);

        // Set the pixel clock. This is capped at 30. Higher pixel clock
        // will enable higher FPS.
        UINT nPixelClockDefault = 30;
        tmp = is_PixelClock(m_cam, IS_PIXELCLOCK_CMD_SET,
            (void*)&nPixelClockDefault,
            sizeof(nPixelClockDefault));
        debug("Status is_PixelClock %d", tmp);

        // 11 - Set format to 960x480. See https://en.ids-imaging.com/manuals/uEye_SDK/EN/uEye_Manual/is_imageformat.html#bildformate
        // 13 - Set format to 640x480. See https://en.ids-imaging.com/manuals/uEye_SDK/EN/uEye_Manual/is_imageformat.html#bildformate
        UINT formatID = 13;
        tmp = is_ImageFormat(m_cam, IMGFRMT_CMD_SET_FORMAT, &formatID, 4);
        debug("Status ImageFormat %d", tmp);

        IS_RECT rectAOI;

        rectAOI.s32X     = 0;
        rectAOI.s32Y     = 112;
        rectAOI.s32Width = 640;
        rectAOI.s32Height = 250;

        tmp = is_AOI(m_cam, IS_AOI_IMAGE_SET_AOI, (void*)&rectAOI, sizeof(rectAOI));
        if (tmp)
          err("Enabled AOI with status %d", tmp);

        onUpdateParameters();

        // Allocate memory and add to the sequence
        for(int i = 0; i < MAX_BUFFERS; i++) {
          // Allocate memory
          tmp = is_AllocImageMem(m_cam, c_width, c_height, 16, &m_ppcImgMem, &pid);
          // Store pointer and picture ID for this memory
          m_imgMems[i] = m_ppcImgMem;
          m_imgMemIds[i] = pid;
          // Add the memory to the live capture sequence
          tmp = is_AddToSequence(m_cam, m_ppcImgMem, pid);
        }
        if (tmp)
          err("Allocated %d image buffers with last error code %d", MAX_BUFFERS, tmp);

        // Enable the FRAME event. Triggers when a frame is ready in memory.
        tmp = is_EnableEvent(m_cam, IS_SET_EVENT_FRAME);
        if (tmp)
          err("Enabled FRAME event with status %d", tmp);
      }

      //! Release allocated resources.
      void
      onResourceRelease(void)
      {
        is_DisableEvent(m_cam, IS_SET_EVENT_FRAME);
        is_ExitCamera(m_cam);
      }

      //! Initialize resources and start capturing frames.
      void
      onResourceInitialization(void)
      {
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

      //! Saves the image pointed to by pMem .
      void
      saveImageN(char *pMem)
      {
        IMAGE_FILE_PARAMS ImageFileParams;

        double timestamp = Clock::getSinceEpoch();
        Path file = m_args.log_dir / String::str("%0.4f.png", timestamp);
        wchar_t* filename = new wchar_t[ file.str().length() + 1 ];
        std::copy( file.str().begin(), file.str().end(), filename );
        filename[ file.str().length() ] = 0;

        ImageFileParams.pwchFileName = filename;
        ImageFileParams.pnImageID = NULL;
        ImageFileParams.ppcImageMem = &pMem;
        // File format to use when saving the image. BMP/JPG/PNG/RAW/TIF
        ImageFileParams.nFileType = IS_IMG_PNG;
        // Quality to use when compressing image.
        ImageFileParams.nQuality = 100;
        int status = is_ImageFile(m_cam, IS_IMAGE_FILE_CMD_SAVE, (void*) &ImageFileParams, sizeof(ImageFileParams));
        if (status)
          err("Image save failed with code: %d", status);
      }

      void
      onMain(void)
      {
        int status = is_CaptureVideo(m_cam, IS_WAIT);
        inf("Activated video capture with status %d", status);

        int i=1;

        // Small delay to let camera start
        Time::Delay::wait(1.0);

        while (!stopping()) // && isActive())
        {
          is_SetImageMem(m_cam, m_imgMems[i % MAX_BUFFERS], m_imgMemIds[i % MAX_BUFFERS]);
          if (is_WaitEvent(m_cam, IS_SET_EVENT_FRAME, FRAME_EVENT_TIMEOUT))
            err("Timed out");
          else
          {
            is_GetImageMem(m_cam, (void**)(&m_ppcImgMem));
            saveImageN(m_ppcImgMem);
          }
        }
      }
    };
  }
}

DUNE_TASK
