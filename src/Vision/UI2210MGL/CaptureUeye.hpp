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
// Author: João Fortuna                                                     *
//***************************************************************************

#ifndef VISION_UI2210MGL_CAPUEYE_HPP_INCLUDED_
#define VISION_UI2210MGL_CAPUEYE_HPP_INCLUDED_

// ISO C++ 98 headers.
#include <queue>

// DUNE headers.
#include <DUNE/DUNE.hpp>

// Vendor headers.
#include <ueye.h>

using DUNE_NAMESPACES;

namespace Vision
{
  //! Device driver for the uEye UI-2210-M-GL USB Camera.
  //!
  //! @author Torkel Hansen
  //! @author João Fortuna
  namespace UI2210MGL
  {
    //! Area of Interest
    struct AOI
    {
      //! Upper left corner coordinates
      unsigned x, y;
      //! Size
      unsigned width, height;
    };

    //! Frame
    struct Frame
    {
      //! Data pointer
      char* data;
      //! Timestamp
      double timestamp;
      //! ID
      int id;
      //! Gain in percent of original value
      int gain_factor;
    };

    class CaptureUeye: public Thread
    {
    public:
      //! Constructor.
      //! @param[in] task parent task.
      //! @param[in] buffer_capacity packet buffer capacity.
      CaptureUeye(DUNE::Tasks::Task* task, AOI aoi, HIDS cam = 1, double fps = 30.0):
        m_task(task),
        m_cam(cam),
        m_aoi(aoi),
        m_fps(fps),
        m_read(0),
        m_write(0)
      {
        m_imgMems = new char*[c_buf_len];
        m_imgMemIds = new int[c_buf_len];
        m_frames = new Frame[c_buf_len];

        initializeCam();
      }

      //! Destructor.
      ~CaptureUeye(void)
      {
        for (unsigned i = 0; i < c_buf_len; i++)
        {
          int tmp = is_FreeImageMem(m_cam, m_imgMems[i], m_imgMemIds[i]);

          if (tmp)
          {
            m_task->err("Trying to free image buffer %d. Error %d", i, tmp);
            break;
          }
        }
        is_ExitCamera(m_cam);
      }

      void
      setAOI(AOI aoi)
      {
        IS_RECT rectAOI;

        rectAOI.s32X      = aoi.x;
        rectAOI.s32Y      = aoi.y;
        rectAOI.s32Width  = aoi.width;
        rectAOI.s32Height = aoi.height;

        int tmp = is_AOI(m_cam, IS_AOI_IMAGE_SET_AOI, (void*)&rectAOI, sizeof(rectAOI));
        if (tmp)
          m_task->err("Tried to enable AOI. Error %d", tmp);

        // Allocate memory

        // Will hold the picture ID of an image. I think this is an image's
        // index within a memory area allocated to images
        int pid;

        for (unsigned i = 0; i < c_buf_len; i++)
        {
          tmp = is_AllocImageMem(m_cam, m_aoi.width, m_aoi.height, 8, &m_ppcImgMem, &pid);

          // Store pointer and picture ID for this memory
          m_imgMems[i] = m_ppcImgMem;
          m_imgMemIds[i] = pid;

          if (tmp)
          {
            m_task->err("Trying to allocate image buffer %d. Error %d", i, tmp);
            break;
          }
        }
      }

      void
      setFPS(double fps)
      {
        // Set target FPS
        double newFPS, fpsWish = fps;
        is_SetFrameRate(m_cam, fpsWish, &newFPS);
        m_task->debug("Set FPS to %.2f, actual FPS is now %.2f", fpsWish, newFPS);
      }

      void
      setExposure(float exp)
      {
        // Set target Exposure time
        double newExp = exp;
        is_Exposure (m_cam, IS_EXPOSURE_CMD_SET_EXPOSURE, (void*) &newExp, 8);
        m_task->debug("Set Exposure time to %.2f, actual is now %.2f", exp, newExp);
      }

      void
      setGain(bool autogain, int gain)
      {
        //Enable or disable auto gain control:
        double param = autogain ? 1 : 0;
        int ret = is_SetAutoParameter (m_cam, IS_SET_ENABLE_AUTO_GAIN, &param, 0);
        m_task->debug("Set Auto Gain to %.0f. Status %d", param, ret);

        //Set gain if not auto:
        ret = is_SetHardwareGain (m_cam, gain, IS_IGNORE_PARAMETER, IS_IGNORE_PARAMETER, IS_IGNORE_PARAMETER);
        m_task->debug("Set Gain to %d. Status %d", gain, ret);
      }

      Frame*
      readFrame(void)
      {
        if ((m_read % c_buf_len) == (m_write % c_buf_len))
          return NULL;

        return &m_frames[m_read++ % c_buf_len];
      }

      void
      stopCapture(void)
      {
        is_DisableEvent(m_cam, IS_SET_EVENT_FRAME);
        is_StopLiveVideo(m_cam, IS_DONT_WAIT);
        m_task->inf("Image capture stopped");
      }

      int
      queryGainFactor(int gain)
      {
          return is_SetHWGainFactor(m_cam, IS_INQUIRE_MASTER_GAIN_FACTOR, gain);
      }

    private:
      //! Parent task.
      DUNE::Tasks::Task* m_task;
      //! Array of captured frames.
      Frame* m_frames;
      //! Camera handle.
      HIDS m_cam;
      //! Will contain the address of memory allocated for images.
      char* m_ppcImgMem;
      //! Area of Interest.
      AOI m_aoi;
      //! Frames per Second.
      double m_fps;
      //! Will contain pointers to all image allocated memory areas
      char **m_imgMems;
      //! Will contain picture IDs for the above array
      int *m_imgMemIds;
      //! Buffer Size
      static const unsigned c_buf_len = 256;
      //! Reader/Writer positions.
      unsigned m_read, m_write;
      //! Lookup table for gain factors
      int m_gains[101];

      void
      initializeCam(void)
      {
        int tmp;
        // Will contain information about the sensor
        SENSORINFO sensorInfo;

        // Starts the driver and establishes the connection to the camera
        tmp = is_InitCamera(&m_cam, NULL);

        // Check if camera initialization was successfull.
        if (tmp != IS_SUCCESS)
          m_task->err("Camera initialization was unsuccessful. Error %d", tmp);

        // Get information about the sensor type used in the camera
        tmp = is_GetSensorInfo(m_cam, &sensorInfo);
        m_task->debug("Sensor name: %s", sensorInfo.strSensorName);
        m_task->debug("Resolution: %d x %d", sensorInfo.nMaxWidth, sensorInfo.nMaxHeight);

        // Set color mode.
        is_SetColorMode(m_cam, IS_CM_SENSOR_RAW8);

        // Set the pixel clock. This is capped at 30. Higher pixel clock
        // will enable higher FPS.
        UINT nPixelClockDefault = 20;
        tmp = is_PixelClock(m_cam, IS_PIXELCLOCK_CMD_SET,
            (void*)&nPixelClockDefault,
            sizeof(nPixelClockDefault));
        m_task->debug("Status is_PixelClock %d", tmp);

        // 11 - Set format to 960x480. See https://en.ids-imaging.com/manuals/uEye_SDK/EN/uEye_Manual/is_imageformat.html#bildformate
        // 13 - Set format to 640x480. See https://en.ids-imaging.com/manuals/uEye_SDK/EN/uEye_Manual/is_imageformat.html#bildformate
        UINT formatID = 13;
        tmp = is_ImageFormat(m_cam, IMGFRMT_CMD_SET_FORMAT, &formatID, 4);
        m_task->debug("Status ImageFormat %d", tmp);

        setAOI(m_aoi);
        setFPS(m_fps);
        is_SetDisplayMode(m_cam, IS_SET_DM_DIB);
        is_SetImageMem(m_cam, m_imgMems[0], m_imgMemIds[0]);

        for (int i = 0; i <= 100; i++)
        {
          m_gains[i] = queryGainFactor(i);
        }

        // Enable the FRAME event. Triggers when a frame is ready in memory.
        tmp = is_EnableEvent(m_cam, IS_SET_EVENT_FRAME);
        if (tmp)
          m_task->debug("Enabled FRAME event with status %d", tmp);

        /* Readout the current LUT state */
        IS_LUT_STATE lutState;
        tmp = is_LUT(m_cam, IS_LUT_CMD_GET_STATE, (void*) &lutState, sizeof(lutState));
        m_task->debug("LUT: %d", tmp);
      }

      void
      run(void)
      {
        int stat = is_CaptureVideo(m_cam, IS_DONT_WAIT);
        if (stat)
          m_task->err("Failed to activate image capture with error %d", stat);
        else
          m_task->inf("Image capture started");

        // Small delay to let camera start
        Time::Delay::wait(1.0);

        while (!isStopping() && !stat)
        {
          stat = is_SetImageMem(m_cam, m_imgMems[m_write % c_buf_len], m_imgMemIds[m_write % c_buf_len]);
          if (stat)
          {
            m_task->err("SetImageMem Error: %d", stat);

            Time::Delay::wait(0.1);
            continue;
          }

          stat = is_WaitEvent(m_cam, IS_SET_EVENT_FRAME, 1000);
          if (stat)
          {
            if (stat != 122)
              m_task->err("WaitEvent error: %d", stat);
          }
          else
          {
            m_task->spew("Captured! %d", m_write);

            int gain = is_SetHardwareGain(m_cam, IS_GET_MASTER_GAIN, IS_IGNORE_PARAMETER, IS_IGNORE_PARAMETER, IS_IGNORE_PARAMETER);
            is_GetImageMem(m_cam, (void**)(&m_ppcImgMem));

            Frame frame;
            frame.data = m_imgMems[m_write % c_buf_len];
            frame.id = m_imgMemIds[m_write % c_buf_len];
            frame.timestamp = Clock::getSinceEpoch();
            frame.gain_factor = m_gains[gain];

            m_frames[m_write++ % c_buf_len] = frame;

            if (m_write == m_read)
            {
              m_task->err("Buffer overrun!");
              Time::Delay::wait(0.1);
            }
          }
        }
      }
    };
  }
}

#endif
