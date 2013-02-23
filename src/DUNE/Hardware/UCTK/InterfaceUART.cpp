//***************************************************************************
// Copyright (C) 2007-2013 Laboratório de Sistemas e Tecnologia Subaquática *
// Departamento de Engenharia Electrotécnica e de Computadores              *
// Rua Dr. Roberto Frias, 4200-465 Porto, Portugal                          *
//***************************************************************************
// Author: Ricardo Martins                                                  *
//***************************************************************************

// DUNE headers.
#include <DUNE/Memory.hpp>
#include <DUNE/Time/Delay.hpp>
#include <DUNE/Hardware/UCTK/Constants.hpp>
#include <DUNE/Hardware/UCTK/InterfaceUART.hpp>

namespace DUNE
{
  namespace Hardware
  {
    namespace UCTK
    {
      InterfaceUART::InterfaceUART(const std::string& dev):
        m_dev(dev),
        m_handle(NULL)
      { }

      InterfaceUART::~InterfaceUART(void)
      {
        delete m_handle;
      }

      void
      InterfaceUART::doOpen(void)
      {
        Memory::clear(m_handle);
        unsigned baud_rate = probeBaudRate(m_dev);
        m_handle = new SerialPort(m_dev, baud_rate);
      }

      bool
      InterfaceUART::hasNewData(double timeout)
      {
        return m_handle->hasNewData(timeout) == System::IOMultiplexing::PRES_OK;
      }

      void
      InterfaceUART::write(const uint8_t* data, unsigned data_size)
      {
        m_handle->write((const char*)data, data_size);
      }

      unsigned
      InterfaceUART::read(uint8_t* data, unsigned data_size)
      {
        return (unsigned)m_handle->read((char*)data, data_size);
      }

      unsigned
      InterfaceUART::probeBaudRate(const std::string& dev)
      {
        unsigned bauds[] = {115200, 57600, 38400, 19200, 0};

        for (unsigned i = 0; i < sizeof(bauds) / sizeof(unsigned); ++i)
        {
          if (testBaudRate(dev, bauds[i]))
            return bauds[i];
        }

        throw std::runtime_error("failed to detect baud rate");
        return 0;
      }

      bool
      InterfaceUART::testBaudRate(const std::string& dev, unsigned baudrate)
      {
        SerialPort port(dev, baudrate);

        unsigned fsm_flush_count = c_max_payload + c_frame_overhead;
        uint8_t byte = 0;

        // Try to cleanup device's state machine parser.
        for (unsigned i = 0; i < fsm_flush_count; ++i)
          port.write(&byte, 1);

        // Wait for device to settle.
        Time::Delay::wait(0.1);
        port.flushInput();

        // Write to the device and check sync number.
        port.write(&byte, 1);
        if (port.hasNewData(0.5) != System::IOMultiplexing::PRES_OK)
          return false;

        port.read(&byte, 1);
        //fprintf(stderr, "BYTE: %02X\n", byte);
        port.flushInput();

        return (byte == c_sync);
      }
    }
  }
}
