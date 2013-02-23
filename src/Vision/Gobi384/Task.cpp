//***************************************************************************
// Copyright (C) 2007-2013 Laboratório de Sistemas e Tecnologia Subaquática *
// Departamento de Engenharia Electrotécnica e de Computadores              *
// Rua Dr. Roberto Frias, 4200-465 Porto, Portugal                          *
//***************************************************************************
// Author: Joel Cardoso                                                     *
//***************************************************************************
// $Id:: Task.cpp 12695 2013-01-23 22:54:41Z rasm                         $:*
//***************************************************************************

// ISO C++ 98 headers.

// DUNE headers.
#include <DUNE/DUNE.hpp>

// Include Xeneth SDK headers
#include <Xeneth/XCamera.h>

#define MAX_BUFFER 1024

namespace Vision
{
  using DUNE_NAMESPACES;

  //! Xenics Gobi 384 thermal (LWIR) camera.
  namespace Gobi384
  {
    // Task arguments.
    struct Arguments
    {
      // Camera IP address
      Address raddr;
    };

    struct Task: public DUNE::Tasks::Task
    {
      // Configuration parameters.
      Arguments m_args;
      // Camera Handle
      XCHANDLE m_handle;
      // 16-bit buffer to store the capture frame.
      word *frameBuffer;
      // The size in bytes of the raw image.
      dword frameSize;
      // Function return value.
      ErrCode m_error;
      // Device list buffer.
      char m_dev_list[MAX_BUFFER];

      Task(const std::string& name, Tasks::Context& ctx):
        DUNE::Tasks::Task(name, ctx),
        m_handle(0)
      {
        // Retreive configuration values
        param("Camera IP address", m_args.raddr)
        .defaultValue("192.168.106.244")
        .description("Camera IP fixed address");
      }

      //! Destructor
      ~Task(void)
      {
        onResourceRelease();
      }

      void
      onUpdateParameters(void)
      {
      }

      void
      onEntityResolution(void)
      {
      }

      void
      onResourceAcquisition(void)
      {
        // Get a list of all the cameras found.
        XC_GetDeviceList(&m_dev_list[0], MAX_BUFFER);
        if (m_dev_list == NULL)
        {
          err(DTR("no cameras found!"));
          // Print error code m_error (trace enabled);
        }
        debug("camera list updated");
        inf("listing found cameras: %s", m_dev_list);
      }

      void
      onResourceInitialization(void)
      {
        // Open the first camera
        m_handle = XC_OpenCamera("cam://0");
        if (m_handle == NULL)
        {
          err(DTR("failed to open the camera"));
          // Print error code m_error (trace enabled);
        }
        // Print debug message success!
        debug("opened the camera");

        // Initialise connection.
        if (XC_IsInitialised(m_handle))
        {
          // Camera is initialised.
        }
        else
        {
          err(DTR("failed to initialise the camera"));
        }
      }

      void
      aquisitionStart(void)
      {
        // Start capturing.
        m_error = XC_StartCapture(m_handle);
        if (m_error != I_OK)
        {
          err(DTR("failed to start capturing"));
          // Print error code m_error (trace enabled);
        }
        debug("capturing a frame");

        frameSize = XC_GetFrameSize(m_handle);

        // Initialize the 16-bit buffer.
        frameBuffer = new word[frameSize / 2];

        // Grab a frame from the camera.
        m_error = XC_GetFrame(m_handle, FT_NATIVE, XGF_Blocking, frameBuffer, frameSize);
        if (m_error != I_OK)
        {
          err(DTR("problem while fetching frame"));
          // Print error code m_error (trace enabled);
        }
      }

      void
      aquisitionStop(void)
      {
        // Camera still capturing
        if (XC_IsCapturing(m_handle))
        {
          m_error = XC_StopCapture(m_handle) != I_OK;
          if (m_error != I_OK)
          {
            err(DTR("failed to stop capturing"));
            // Print error code m_error (trace enabled);
          }
          debug("capture stopped");
        }

        // Camera still initialised
        if (XC_IsInitialised(m_handle))
        {
          XC_CloseCamera(m_handle);
          debug("closed camera");
        }

        // Clear buffers
        if (frameBuffer != 0)
        {
          delete [] frameBuffer;
          frameBuffer = 0;
          debug("buffers cleared");
        }
      }

      void
      onResourceRelease(void)
      {
        aquisitionStop();
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
