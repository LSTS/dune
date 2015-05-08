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

    struct Frame
    {
      //! Memory location.
      char* mem;
      //! Timestamp
      double timestamp;
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
        m_fps(fps)
      {
        initializeCam();
      }

      //! Destructor.
      ~CaptureUeye(void)
      {
        delete m_ppcImgMem;
      }

      //! Enqueue frame.
      //! @param[in] frame frame.
      void
      enqueue(Frame* frame)
      {
        m_lock.lock();
        m_frames.push(frame);
        m_lock.unlock();
        m_cond.broadcast();
      }

      //! Dequeue frame.
      //! @return frame frame or NULL if none is available.
      Frame*
      dequeue(void)
      {
        ScopedMutex l(m_lock);
        if (m_frames.empty())
          return NULL;

        Frame* frame;
        frame = m_frames.front();
        m_frames.pop();
        return frame;
      }

      //! Wait for a frame to be available.
      //! @param[in] timeout maximum amount of time to wait.
      void
      waitFrame(double timeout)
      {
        m_cond.lock();
        m_cond.wait(timeout);
        m_cond.unlock();
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
        tmp = is_AllocImageMem(m_cam, m_aoi.width, m_aoi.height, 16, &m_ppcImgMem, &m_pid);
        is_SetImageMem(m_cam, m_ppcImgMem, m_pid);

        if (tmp)
          m_task->err("Trying to allocate image buffer. Error %d", tmp);
      }

      void
      setFPS(double fps)
      {
        // Set target FPS
        double newFPS, fpsWish = fps;
        is_SetFrameRate(m_cam, fpsWish, &newFPS);
        m_task->inf("Set FPS to %.1f, actual FPS is now %.1f", fpsWish, newFPS);
      }

    private:
      //! Parent task.
      DUNE::Tasks::Task* m_task;
      //! Condition to notify of queue changes.
      Condition m_cond;
      //! Lock to protect concurrent access to queues.
      Mutex m_lock;
      //! Queue of captured but not yet processed frames.
      std::queue<Frame*> m_frames;
      //! Camera handle.
      HIDS m_cam;
      //! Will contain the address of memory allocated for images.
      char* m_ppcImgMem;
      //! Area of Interest.
      AOI m_aoi;
      //! Frames per Second.
      double m_fps;
      // Will hold the picture ID of an image. I think this is an image's
      // index within a memory area allocated to images
      int m_pid;

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
        m_task->inf("Sensor name: %s", sensorInfo.strSensorName);
        m_task->inf("Resolution: %d x %d", sensorInfo.nMaxWidth, sensorInfo.nMaxHeight);

        // Set color mode.
        is_SetColorMode(m_cam, IS_CM_MONO12);

        // Set the pixel clock. This is capped at 30. Higher pixel clock
        // will enable higher FPS.
        UINT nPixelClockDefault = 30;
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

        // Enable the FRAME event. Triggers when a frame is ready in memory.
        tmp = is_EnableEvent(m_cam, IS_SET_EVENT_FRAME);
        if (tmp)
          m_task->err("Enabled FRAME event with status %d", tmp);
      }

      void
      run(void)
      {
        int status = is_CaptureVideo(m_cam, IS_WAIT);
        m_task->inf("Activated video capture with status %d", status);

        Frame* frame;

        // Small delay to let camera start
        Time::Delay::wait(1.0);

        unsigned i = 0;
        while (!isStopping())
        {
          if (is_WaitEvent(m_cam, IS_SET_EVENT_FRAME, 500))
            m_task->err("Timed out");
          else
          {
            frame = new Frame;
            m_task->inf("Captured! %d", i);
            is_GetImageMem(m_cam, (void**)(&m_ppcImgMem));

            frame->mem = (char*) std::malloc(m_aoi.width * m_aoi.height * 2);
            std::memcpy (frame->mem, m_ppcImgMem, m_aoi.width * m_aoi.height * 2);
            frame->timestamp = Clock::getSinceEpoch();
            enqueue(frame);
          }
        }

        is_DisableEvent(m_cam, IS_SET_EVENT_FRAME);
        is_ExitCamera(m_cam);
      }
    };
  }
}

#endif
