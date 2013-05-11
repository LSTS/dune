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
// Author: Joel Cardoso                                                     *
//***************************************************************************

// ISO C++ 98 headers.
#include <queue>

// DUNE headers.
#include <DUNE/DUNE.hpp>

// Include JAI SDK headers
#include <Jai_Factory.h>

namespace Vision
{
  using DUNE_NAMESPACES;

  //! JAI AD-080GE GigE multi-spectral 2-channel CCD camera.
  //! Device driver for the JAI AD-080GE GigE multi-spectral 2-channel
  //! CCD camera.
  //!
  //! This device driver is based on the JAI SDK provided by the
  //! manufacturer as part of the support software. Support
  //! documentation is also available as part of the JAI SDK.
  //!
  //! This driver uses Factory and Camera specific functions to open
  //! and close the Factory (which has the main SDK functionality).
  //! It uses GenICam features to directly get and set their values
  //! through direct GenICam node value access functions.
  //!
  //! @author Joel Cardoso
  namespace AD080GE
  {
    // Task arguments.
    struct Arguments
    {
      // Camera IP address
      Address raddr;
      // Image spectrum output (visible or NIR)
      std::string spectrum;
      // Display Video
      bool display;
    };

    enum Spectrum
    {
      Visible = 0,
      NIR = 1
    };

    struct Task: public DUNE::Tasks::Task
    {
      // Configuration parameters.
      Arguments m_args;
      // Factory handle
      FACTORY_HANDLE m_factory;
      // Camera handle
      CAM_HANDLE m_cam;
      // View handle
      VIEW_HANDLE m_view;
      // Genicam node handle
      NODE_HANDLE m_node;
      // Thread handle
      THRD_HANDLE m_thread;
      // Camera ID
      int8_t m_camera_id[J_CAMERA_ID_SIZE];
      // Return value for for Factory functions
      J_STATUS_TYPE m_retval;
      // Size of buffer
      uint32_t m_size;
      // Number of cameras found
      uint32_t m_num_dev;
      // Flag for new cameras found
      bool8_t m_has_change;
      // Display panel size
      SIZE m_view_size;
      // Array of frames
      //std::queue<Frame*> m_frames;
      // Camera width
      int64_t width;
      // Camera height
      int64_t height;
      // Display position
      POINT m_point;

      Task(const std::string& name, Tasks::Context& ctx):
        DUNE::Tasks::Task(name, ctx),
        m_factory(NULL),
        m_cam(NULL),
        m_view(NULL),
        m_size(0),
        m_num_dev(0),
        m_has_change(false)
      {
        // Retreive configuration values
        param("Spectral Output", m_args.spectrum)
        .defaultValue("Visible")
        .description("Image spectral output (visible or NIR)");

        param("Video Display", m_args.display)
        .defaultValue("false")
        .description("Display video");
      }

      //! Destructor
      ~Task(void)
      {
        onResourceRelease();
      }

      void
      onResourceAcquisition(void)
      {
        // Open factory and search for cameras on all the networks
        m_retval = J_Factory_Open((int8_t*)"", &m_factory);
        if (m_retval != J_ST_SUCCESS)
        {
          err(DTR("could not open the factory!"));
          //Print error code retval (trace argument enabled);
        }
        debug("opened the factory");
      }

      void
      onResourceInitialization(void)
      {
        // Update camera list
        m_retval = J_Factory_UpdateCameraList(m_factory, &m_has_change);
        if (m_retval != J_ST_SUCCESS)
        {
          err(DTR("could not open the camera list!"));
          // Print error code m_retval (trace enabled);
        }
        debug("camera list updated");

        // Get the number of cameras
        m_retval = J_Factory_GetNumOfCameras(m_factory, &m_num_dev);
        if (m_retval != J_ST_SUCCESS)
        {
          err(DTR("could not get the number of cameras!"));
          // Print error code m_retval (trace enabled);
        }
        inf(DTR("%d camera(s) found"), m_num_dev);

        if (m_num_dev > 0)
        {
          for (uint32_t index = 0; index < m_num_dev; ++index)
          {
            // Get camera(s) ID(s)
            m_size = (uint32_t)sizeof(m_camera_id);
            m_retval = J_Factory_GetCameraIDByIndex(m_factory, index, m_camera_id, &m_size);
            if (m_retval != J_ST_SUCCESS)
            {
              err(DTR("could not get the camera ID!"));
              // Print error code m_retval (trace enabled);
            }
            inf(DTR("camera index: %d, ID = %s"), index, m_camera_id);
          }

          // Open the right camera (NIR or Visible)
          if (m_args.spectrum == "NIR")
          {
            m_retval = J_Factory_GetCameraIDByIndex(m_factory, NIR, m_camera_id, &m_size);
            if (m_retval != J_ST_SUCCESS)
            {
              err(DTR("could not get the camera ID!"));
              // Print error code m_retval (trace enabled);
            }
            m_retval = J_Camera_Open(m_factory, m_camera_id, &m_cam);
            if (m_retval != J_ST_SUCCESS)
            {
              err(DTR("could not open the NIR camera"));
            }
            debug("opened the NIR camera");
          }
          else
          {
            m_retval = J_Factory_GetCameraIDByIndex(m_factory, Visible, m_camera_id, &m_size);
            if (m_retval != J_ST_SUCCESS)
            {
              err(DTR("could not get the camera ID!"));
              // Print error code m_retval (trace enabled);
            }
            m_retval = J_Camera_Open(m_factory, m_camera_id, &m_cam);
            if (m_retval != J_ST_SUCCESS)
            {
              err(DTR("could not open the Visible camera"));
            }
            debug("opened the Visible camera");
          }

          // Check video display configuration
          if (m_args.display = true)
          {
            // Start aquisition and display video
            aquisitionStart();
          }
        }
        else
        {
          onResourceRelease();
          throw RestartNeeded("no camera found", 5);
        }
      }

      void
      aquisitionStart(void)
      {
        if (m_thread)  err(DTR("thread enabled"));

        // Get width from the camera
        m_retval = J_Camera_GetValueInt64(m_cam, (int8_t *)"Width", &width);
        if (m_retval != J_ST_SUCCESS)
        {
          err(DTR("could not get the value for the 'Width' GeniCam node!"));
          //Print error code m_retval (trace enabled);
        }
        m_view_size.cx = (LONG)width;

        // Get height from the camera
        m_retval = J_Camera_GetValueInt64(m_cam, (int8_t *)"Height", &height);
        if (m_retval != J_ST_SUCCESS)
        {
          err(DTR("could not get the value for the 'Height' GeniCam node!"));
          //Print error code m_retval (trace enabled);
        }
        m_view_size.cy = (LONG)height;

        // Set default window position
        m_point.x = 100;
        m_point.y = 50;

        // Open view window
        m_retval = J_Image_OpenViewWindow((LPCTSTR)"Image View Window", &m_point, &m_view_size, &m_view);
        if (m_retval != J_ST_SUCCESS)
        {
          err(DTR("could not open the view window!"));
          // Print error code m_retval (trace enabled);
        }
        debug("opened the view window");
        m_retval = J_Image_OpenStreamLight(m_cam, 0, &m_thread);
        if (m_retval != J_ST_SUCCESS)
        {
          err(DTR("could not open the stream channel!"));
          // Print error code m_retval (trace enabled);
        }
        debug("opened the stream");

        // Start acquision
        m_retval = J_Camera_ExecuteCommand(m_cam, (int8_t *)"AcquisitionStart");
        if (m_retval != J_ST_SUCCESS)
        {
          err(DTR("could not open the stream channel!"));
          // Print error code m_retval (trace enabled);
        }
        debug("started aquisition");
      }

      void
      aquisitionStop(void)
      {
        if (!m_thread)   err(DTR("no thread enabled"));

        // Stop aquisition
        if (m_cam)
        {
          m_retval = J_Camera_ExecuteCommand(m_cam, (int8_t *)"AcquisitionStop");
          if (m_retval != J_ST_SUCCESS)
          {
            err(DTR("could not execute the 'Aquisition Stop' command!"));
            // Print error code m_retval (trace enabled);
          }
          debug("stoped the aquisition");
        }

        // Close stream
        if (m_thread)
        {
          m_retval = J_Image_CloseStream(m_thread);
          if (m_retval != J_ST_SUCCESS)
          {
            err(DTR("could not close the stream channel!"));
            // Print error code m_retval (trace enabled);
          }
          m_thread = NULL;
          debug("closed the stream");
        }

        // Close the view window
        if (m_view)
        {
          m_retval = J_Image_CloseViewWindow(m_view);
          if (m_retval != J_ST_SUCCESS)
          {
            err(DTR("could not close the view window!"));
            // Print error code m_retval (trace enabled);
          }
          m_view = NULL;
          debug("closed the view window");
        }
      }

      void
      onResourceRelease(void)
      {
        if (m_thread != NULL)
        {
          // Stop aquisition
          aquisitionStop();
        }
        if (m_cam != NULL)
        {
          // Close camera
          J_Camera_Close(m_cam);
          m_cam = NULL;
          debug("closed the camera connection");
        }

        if (m_factory != NULL)
        {
          // Close factory
          J_Factory_Close(m_factory);
          m_factory = NULL;
          debug("closed the factory");
        }
      }

      void
      onMain(void)
      {
        while (!stopping())
        {
          waitForMessages(1.0);
        }
      }
    };
  }
}

DUNE_TASK
