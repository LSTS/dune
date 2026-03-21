//***************************************************************************
// Copyright 2007-2023 Universidade do Porto - Faculdade de Engenharia      *
// Laboratório de Sistemas e Tecnologia Subaquática (LSTS)                  *
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
// Author: João Bogas                                                       *
//***************************************************************************

#include <dirent.h>
#include <fcntl.h>
#include <linux/fb.h>
#include <poll.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/ioctl.h>
#include <sys/mman.h>
#include <time.h>

#include <linux/fb.h>
#include <linux/input.h>

#include <stdexcept>

namespace Sensors
{
  namespace RaspberryPiSenseHatv2
  {
    //! Class to control the LED matrix on the PiHat.
    class LEDMatrix
    {
    public:
      //! Constructor.
      //! @param[in] dev_name device name.
      LEDMatrix(const char* dev_name)
      {
        fbfd = open(dev_name, O_RDWR);
        if (fbfd <= 0)
        {
          printf("Error: cannot open framebuffer device.\n");
          return;
        }

        fb = static_cast<led_fb*>(mmap(0, 128, PROT_READ | PROT_WRITE, MAP_SHARED, fbfd, 0));
        if (!fb)
          throw std::runtime_error("Cannot mmap framebuffer device.");
      }

      //! Destructor.
      ~LEDMatrix(void)
      {
        clear();
      }

      //! Clear the LED matrix.
      void
      clear(void)
      {
        memset(fb, 0, 128);
      }

      //! Set a pixel on the LED matrix.
      void
      setPixel(int x, int y, uint16_t color)
      {
        fb->pixel[x][y] = color;
      }

      //! Set the entire LED matrix.
      void
      setMatrix(uint16_t matrix[8][8], uint16_t color = 0xFFFF)
      {
        for (int i = 0; i < 8; i++)
          for (int j = 0; j < 8; j++)
            fb->pixel[i][j] = matrix[i][j] * color;
      }

    private:
      struct led_fb
      {
        uint16_t pixel[8][8];
      };

      //! Framebuffer file descriptor.
      int fbfd;
      //! Framebuffer pointer.
      struct led_fb* fb;
    };
  }
}