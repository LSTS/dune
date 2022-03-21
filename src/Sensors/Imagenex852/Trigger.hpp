//***************************************************************************
// Copyright 2007-2021 Universidade do Porto - Faculdade de Engenharia      *
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
// Author: Ricardo Martins                                                  *
//***************************************************************************

#ifndef SENSORS_IMAGENEX_852_TRIGGER_HPP_INCLUDED_
#define SENSORS_IMAGENEX_852_TRIGGER_HPP_INCLUDED_

// ISO C++ 98 headers.
#include <cmath>

// DUNE headers.
#include <DUNE/DUNE.hpp>

namespace Sensors
{
  namespace Imagenex852
  {
    using DUNE_NAMESPACES;

    class Trigger: public Concurrency::Thread
    {
    public:
      Trigger(void):
        m_active(false),
        m_handle(NULL),
        m_switch_data(NULL),
        m_switch_data_size(0)
      {
      }

      void
      setIOHandle(IO::Handle* uart)
      {
        ScopedMutex m(m_mutex);
        m_handle = uart;
      }

      void
      setSwitchData(const uint8_t* data, unsigned size)
      {
        ScopedMutex m(m_mutex);

        m_switch_data = data;
        m_switch_data_size = size;
      }

      void
      setSampleFrequency(double frequency)
      {
        double usec = 1.0 / frequency;
        usec *= 1000000;

        ScopedMutex m(m_mutex);
        m_delay = (unsigned)usec;
      }

      void
      trigger(void)
      {
        try
        {
          ScopedMutex m(m_mutex);
          m_handle->write(m_switch_data, m_switch_data_size);
        }
        catch (...)
        {

        }
      }

      void
      setActive(bool active)
      {
        ScopedMutex m(m_mutex);
        m_active = active;
      }

      bool
      isActive(void)
      {
        ScopedMutex m(m_mutex);
        return m_active;
      }

      void
      run(void)
      {
        PeriodicDelay delay(m_delay);

        while (!isStopping())
        {
          delay.wait();
          if (isActive())
          {
            trigger();
          }
        }
      }

    private:
      bool m_active;
      IO::Handle* m_handle;
      const uint8_t* m_switch_data;
      unsigned m_switch_data_size;
      unsigned m_delay;
      Concurrency::Mutex m_mutex;
    };
  }
}

#endif
