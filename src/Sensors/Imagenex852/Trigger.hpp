//***************************************************************************
// Copyright (C) 2007-2013 Laboratório de Sistemas e Tecnologia Subaquática *
// Departamento de Engenharia Electrotécnica e de Computadores              *
// Rua Dr. Roberto Frias, 4200-465 Porto, Portugal                          *
//***************************************************************************
// Author: Ricardo Martins                                                  *
//***************************************************************************
// $Id:: Trigger.hpp 12667 2013-01-22 02:44:42Z rasm                      $:*
//***************************************************************************

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
        m_uart(NULL),
        m_switch_data(NULL),
        m_switch_data_size(0)
      {
      }

      void
      setUART(SerialPort* uart)
      {
        ScopedMutex m(m_mutex);
        m_uart = uart;
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
          m_uart->write(m_switch_data, m_switch_data_size);
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
      SerialPort* m_uart;
      const uint8_t* m_switch_data;
      unsigned m_switch_data_size;
      unsigned m_delay;
      Concurrency::Mutex m_mutex;
    };
  }
}
