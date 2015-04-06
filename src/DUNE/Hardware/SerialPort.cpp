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
// http://ec.europa.eu/idabc/eupl.html.                                     *
//***************************************************************************
// Author: Ricardo Martins (POSIX)                                          *
// Author: Eduardo Marques (Microsoft Windows)                              *
//***************************************************************************

// ISO C++ 98 headers.
#include <vector>
#include <string>
#include <cstring>

// DUNE headers.
#include <DUNE/Config.hpp>
#include <DUNE/Utils/Utils.hpp>
#include <DUNE/Utils/String.hpp>
#include <DUNE/Time/Constants.hpp>
#include <DUNE/Time/Utils.hpp>
#include <DUNE/Time/Delay.hpp>
#include <DUNE/FileSystem/Path.hpp>
#include <DUNE/System/Error.hpp>
#include <DUNE/Hardware/SerialPort.hpp>

// POSIX headers.
#if defined(DUNE_SYS_HAS_UNISTD_H)
#  include <unistd.h>
#endif

#if defined(DUNE_SYS_HAS_FCNTL_H)
#  include <fcntl.h>
#endif

#if defined(DUNE_SYS_HAS_TERMIOS_H)
#  include <termios.h>
#endif

#if defined(DUNE_SYS_HAS_SYS_SELECT_H)
#  include <sys/select.h>
#endif

// Microsoft Windows headers.
#if defined(DUNE_SYS_HAS_WINDOWS_H)
#  include <windows.h>
#endif

// POSIX implementation.
#if defined(DUNE_OS_POSIX)
static std::pair<int, int> brate_pairs[] =
{
  std::pair<int, int>(50, B50),
  std::pair<int, int>(75, B75),
  std::pair<int, int>(110, B110),
  std::pair<int, int>(134, B134),
  std::pair<int, int>(150, B150),
  std::pair<int, int>(200, B200),
  std::pair<int, int>(300, B300),
  std::pair<int, int>(600, B600),
  std::pair<int, int>(1200, B1200),
  std::pair<int, int>(1800, B1800),
  std::pair<int, int>(2400, B2400),
  std::pair<int, int>(4800, B4800),
  std::pair<int, int>(9600, B9600),
  std::pair<int, int>(19200, B19200),
  std::pair<int, int>(38400, B38400),
  std::pair<int, int>(57600, B57600),
  std::pair<int, int>(115200, B115200)
#  if defined(B500000)
  , std::pair<int, int>(500000, B500000)
#  endif
#  if defined(B576000)
  , std::pair<int, int>(576000, B576000)
#  endif
#  if defined(B921600)
  , std::pair<int, int>(921600, B921600)
#  endif
#  if defined(B3000000)
  , std::pair<int, int>(3000000, B3000000)
#  endif
};

// Microsoft Windows implementation.
#elif defined(DUNE_OS_WINDOWS)
static std::pair<int, int> brate_pairs[] =
{
  std::pair<int, int>(110, CBR_110),
  std::pair<int, int>(300, CBR_300),
  std::pair<int, int>(600, CBR_600),
  std::pair<int, int>(1200, CBR_1200),
  std::pair<int, int>(2400, CBR_2400),
  std::pair<int, int>(4800, CBR_4800),
  std::pair<int, int>(9600, CBR_9600),
  std::pair<int, int>(19200, CBR_19200),
  std::pair<int, int>(38400, CBR_38400),
  std::pair<int, int>(57600, CBR_57600),
  std::pair<int, int>(115200, CBR_115200)
};

#endif

DUNE_DECLARE_STATIC_MAP(baudrates, int, int, brate_pairs);

namespace DUNE
{
  namespace Hardware
  {
    std::vector<std::string>
    SerialPort::enumerate(void)
    {
      std::vector<std::string> devs;

#if defined(DUNE_OS_LINUX)
      using FileSystem::Path;

      char bfr[64];
      const char* fmts[] = {"/dev/ttyS%d", "/dev/ttyACM%d", "/dev/ttyUSB%d", 0};
      const char** fmt = fmts;

      while (*fmt != 0)
      {
        for (int i = 0; i < 24; ++i)
        {
          Utils::String::format(bfr, 64, *fmt, i);
          Path::Type type = Path(bfr).type();
          if (type != Path::PT_INVALID && type != Path::PT_DIRECTORY)
            devs.push_back(bfr);
        }
        ++fmt;
      }

#elif defined(DUNE_OS_WINDOWS)
      std::vector<char> buffer(4096);

      while (true)
      {
        DWORD rv = QueryDosDevice(NULL, &buffer[0], buffer.size());
        if (rv > 0)
        {
          unsigned b = 0;
          for (unsigned i = 0; i < rv; ++i)
          {
            if (buffer[i] == '\0')
            {
              if (std::strncmp("COM", &buffer[b], 3) == 0)
                devs.push_back(std::string(&buffer[b], i - b));
              b = i + 1;
            }
          }

          break;
        }
        else
        {
          if (GetLastError() == ERROR_INSUFFICIENT_BUFFER)
            buffer.resize(buffer.size() * 2);
          else
            break;
        }
      }

#endif

      return devs;
    }

    SerialPort::SerialPort(const std::string& device, int baudrate, Parity parity, StopBits stopbits, DataBits databits, bool block)
    {
#if defined(DUNE_OS_POSIX)
      m_handle = open(device.c_str(), O_RDWR | O_NOCTTY | O_NONBLOCK);

      if (m_handle == -1)
      {
        throw Error("opening device", System::Error::getLastMessage());
      }

      if (fcntl(m_handle, F_SETFL, 0) == -1)
      {
        throw Error("resetting flags", System::Error::getLastMessage());
      }

      if (tcgetattr(m_handle, &m_options) == -1)
      {
        throw Error("retrieving attributes", System::Error::getLastMessage());
      }

      m_options.c_cflag |= (CLOCAL | CREAD);
      m_options.c_iflag |= IGNBRK;

      // Don't change any carriage returns or line feeds.
      m_options.c_iflag &= ~(ICRNL | IGNCR);
      m_options.c_oflag &= ~(OPOST | ONLCR);
      m_options.c_lflag &= ~(IEXTEN);

      tcsetattr(m_handle, TCSANOW, &(m_options));

      if (tcsetattr(m_handle, TCSANOW, &(m_options)) == -1)
        throw Error("initializing port", System::Error::getLastMessage());

      // Microsoft Windows implementation.
#elif defined(DUNE_OS_WINDOWS)
      std::string real_device(device);
      // The prefix \\.\ is needed to access serial ports above COM9.
      if (real_device.substr(0, 4).compare("\\\\.\\") != 0)
        real_device = std::string("\\\\.\\") + real_device;

      m_handle =
        CreateFile(real_device.c_str(),
                   GENERIC_READ | GENERIC_WRITE,
                   0,
                   NULL,
                   OPEN_EXISTING,
                   FILE_FLAG_OVERLAPPED,
                   NULL);
      if (m_handle == INVALID_HANDLE_VALUE)
      {
        throw Error("opening device", System::Error::getLastMessage());
      }

      m_options.DCBlength = sizeof(DCB);

      if (!GetCommState(m_handle, &m_options))
      {
        throw Error("retrieving attributes", System::Error::getLastMessage());
      }

      // Standard bit flag settings
      m_options.fAbortOnError = FALSE;
      m_options.fBinary = TRUE;
      m_options.fErrorChar = FALSE;
      m_options.fNull = FALSE;
      m_options.fParity = TRUE;
      m_options.fDsrSensitivity = FALSE;
      m_options.fDtrControl = DTR_CONTROL_ENABLE;
      m_options.fRtsControl = RTS_CONTROL_ENABLE;
      m_options.fTXContinueOnXoff = FALSE;
      m_options.fOutxCtsFlow = FALSE;
      m_options.fOutxDsrFlow = FALSE;

      if (!SetCommState(m_handle, &m_options))
      {
        throw Error("initializing port", System::Error::getLastMessage());
      }

      if (!SetCommMask(m_handle, EV_RXCHAR))
      {
        throw Error("setting event mask", System::Error::getLastMessage());
      }
#endif
      setParity(parity);
      setStopBits(stopbits);
      setDataBits(databits);
      setBaudRate(baudrate);
      setCTSRTS(false);
      setXONXOFF(false);
      setCanonicalInput(false);
      setMinimumRead(0);
      if (!block)
        setNonBlocking();
    }

    //! Serial port destructor.
    SerialPort::~SerialPort(void)
    {
#if defined(DUNE_OS_POSIX)
      if (m_handle)
      {
        flush();
        ::close(m_handle);
      }
#elif defined(DUNE_OS_WINDOWS)
      if (m_handle != INVALID_HANDLE_VALUE)
      {
        flush();
        CloseHandle(m_handle);
      }
#endif
    }

    void
    SerialPort::setMinimumRead(int value)
    {
#if defined(DUNE_OS_POSIX)
      m_options.c_cc[VMIN] = value;
      m_options.c_cc[VTIME] = 0;

      if (tcsetattr(m_handle, TCSANOW, &(m_options)) == -1)
        throw Error("setting minimum read", System::Error::getLastMessage());
#elif defined(DUNE_OS_WINDOWS)
      (void)value;
#endif
    }

    void
    SerialPort::setBaudRate(int baudrate)
    {
#if defined(DUNE_OS_POSIX)
      int v = baudrates[baudrate];

      if (cfsetispeed(&(m_options), v) == -1)
        throw Error("selecting input baud rate", System::Error::getLastMessage());

      if (tcsetattr(m_handle, TCSANOW, &(m_options)) == -1)
        throw Error("setting input baud rate", System::Error::getLastMessage());

      if (cfsetospeed(&(m_options), v) == -1)
        throw Error("selecting output baud rate", System::Error::getLastMessage());

      if (tcsetattr(m_handle, TCSANOW, &(m_options)) == -1)
        throw Error("setting output baud rate", System::Error::getLastMessage());
#elif defined(DUNE_OS_WINDOWS)
      m_options.BaudRate = baudrates[baudrate];
      if (!SetCommState(m_handle, &m_options))
        throw Error("setting baud rate", System::Error::getLastMessage());
#endif
    }

    void
    SerialPort::setParity(Parity parity)
    {
#if defined(DUNE_OS_POSIX)
      switch (parity)
      {
        case SP_PARITY_NONE:
          // No parity (8N1) / Space parity (7S1)
          m_options.c_cflag &= ~PARENB;
          m_options.c_cflag &= ~PARODD;
          m_options.c_cflag &= ~CSTOPB;
          m_options.c_cflag &= ~CSIZE;
          m_options.c_iflag &= ~PARMRK;
          m_options.c_iflag |= IGNPAR;
          break;
        case SP_PARITY_EVEN:
          // Even parity (7E1)
          m_options.c_cflag |= PARENB;
          m_options.c_cflag &= ~PARODD;
          m_options.c_cflag &= ~CSTOPB;
          m_options.c_cflag &= ~CSIZE;
          break;
        case SP_PARITY_ODD:
          // Odd parity (7O1)
          m_options.c_cflag |= PARENB;
          m_options.c_cflag |= PARODD;
          m_options.c_cflag &= ~CSTOPB;
          m_options.c_cflag &= ~CSIZE;
          break;
        default:
          break;
      }

      if (tcsetattr(m_handle, TCSANOW, &(m_options)) == -1)
        throw Error("setting parity", System::Error::getLastMessage());
#elif defined(DUNE_OS_WINDOWS)
      switch (parity)
      {
        case SP_PARITY_NONE:
          // No parity (8N1) / Space parity (7S1)
          m_options.Parity = NOPARITY;
          break;
        case SP_PARITY_EVEN:
          // Even parity (7E1)
          m_options.Parity = EVENPARITY;
          break;
        case SP_PARITY_ODD:
          // Odd parity (7O1)
          m_options.Parity = ODDPARITY;
          break;
        default:
          break;
      }

      if (!SetCommState(m_handle, &m_options))
        throw Error("setting parity", System::Error::getLastMessage());
#endif
    }

    void
    SerialPort::setDataBits(DataBits databits)
    {
#if defined(DUNE_OS_POSIX)
      switch (databits)
      {
        case SP_DATABITS_5:
          m_options.c_cflag |= CS5;
          break;
        case SP_DATABITS_6:
          m_options.c_cflag |= CS6;
          break;
        case SP_DATABITS_7:
          m_options.c_cflag |= CS7;
          break;
        case SP_DATABITS_8:
          m_options.c_cflag |= CS8;
          break;
        default:
          break;
      }

      if (tcsetattr(m_handle, TCSANOW, &(m_options)) == -1)
        throw Error("setting data bits", System::Error::getLastMessage());
#elif defined(DUNE_OS_WINDOWS)
      switch (databits)
      {
        case SP_DATABITS_5:
          m_options.ByteSize = 5;
          break;
        case SP_DATABITS_6:
          m_options.ByteSize = 6;
          break;
        case SP_DATABITS_7:
          m_options.ByteSize = 7;
          break;
        case SP_DATABITS_8:
          m_options.ByteSize = 8;
          break;
        default:
          break;
      }

      if (!SetCommState(m_handle, &m_options))
        throw Error("setting data bits", System::Error::getLastMessage());
#endif
    }

    void
    SerialPort::setStopBits(StopBits sbits)
    {
#if defined(DUNE_OS_POSIX)
      switch (sbits)
      {
        case SP_STOPBITS_1:
          m_options.c_cflag &= ~CSTOPB;
          break;
        case SP_STOPBITS_2:
          m_options.c_cflag |= CSTOPB;
          break;
        default:
          break;
      }

      if (tcsetattr(m_handle, TCSANOW, &(m_options)) == -1)
        throw Error("setting stop bits", System::Error::getLastMessage());
#elif defined(DUNE_OS_WINDOWS)
      switch (sbits)
      {
        case SP_STOPBITS_1:
          m_options.StopBits = ONESTOPBIT;
          break;
        case SP_STOPBITS_1_5:
          m_options.StopBits = ONE5STOPBITS;
          break;
        case SP_STOPBITS_2:
          m_options.StopBits = TWOSTOPBITS;
          break;
        default:
          break;
      }

      if (!SetCommState(m_handle, &m_options))
        throw Error("setting stop bits", System::Error::getLastMessage());
#endif
    }

    void
    SerialPort::setCanonicalInput(bool enable)
    {
      // POSIX implementation.
#if defined(DUNE_OS_POSIX)
      if (enable)
      {
        m_options.c_lflag |= ICANON;
      }
      else
      {
        m_options.c_lflag &= ~(ICANON | ECHO | ECHOE | ISIG | ECHOK | ECHOKE | ECHOCTL);
      }

      if (tcsetattr(m_handle, TCSANOW, &(m_options)) == -1)
        throw Error("setting canonical input",
                    System::Error::getLastMessage());

      // Microsoft Windows implementation.
#elif defined(DUNE_OS_WINDOWS)
      m_options.fBinary = enable ? FALSE : TRUE;

      if (!SetCommState(m_handle, &m_options))
        throw Error("setting canonical input", System::Error::getLastMessage());
#endif
    }

    void
    SerialPort::setCanonicalInputTerminator(char terminator)
    {
      // POSIX implementation.
#if defined(DUNE_OS_POSIX)
      m_options.c_cc[VEOL] = terminator;
      if (tcsetattr(m_handle, TCSANOW, &(m_options)) == -1)
        throw Error("setting canonical input", System::Error::getLastMessage());

      // Microsoft Windows implementation.
#elif defined(DUNE_OS_WINDOWS)
      (void)terminator;
#endif
    }

    void
    SerialPort::setNonBlocking(void)
    {
#if defined(DUNE_OS_POSIX)
      m_options.c_cc[VMIN] = 0;
      m_options.c_cc[VTIME] = 0;

      if (tcsetattr(m_handle, TCSANOW, &(m_options)) == -1)
        throw Error("setting non blocking",
                    System::Error::getLastMessage());
#elif defined(DUNE_OS_WINDOWS)
      COMMTIMEOUTS timeouts = {MAXDWORD, 0, 0, 0};

      if (!SetCommTimeouts(m_handle, &timeouts))
        throw Error("setting non blocking", System::Error::getLastMessage());
#endif
    }

    void
    SerialPort::sendBreak(int duration)
    {
#if defined(DUNE_OS_POSIX)
      tcsendbreak(m_handle, duration);
#elif defined(DUNE_OS_WINDOWS)
      SetCommBreak(m_handle);
      Time::Delay::wait((double)duration);
      ClearCommBreak(m_handle);
#endif
    }

    void
    SerialPort::setXONXOFF(bool enabled)
    {
#if defined(DUNE_OS_POSIX)
      if (enabled)
        m_options.c_cflag |= (IXON | IXOFF | IXANY);
      else
        m_options.c_iflag &= ~(IXON | IXOFF | IXANY);

      if (tcsetattr(m_handle, TCSANOW, &(m_options)) == -1)
        throw Error("setting XONXOFF", System::Error::getLastMessage());
#elif defined(DUNE_OS_WINDOWS)
      m_options.fInX = m_options.fOutX = enabled ? TRUE : FALSE;

      if (!SetCommState(m_handle, &m_options))
        throw Error("setting XONXOFF", System::Error::getLastMessage());
#endif
    }

    void
    SerialPort::setCTSRTS(bool enabled)
    {
#if defined(DUNE_OS_POSIX)
      if (enabled)
      {
#  if defined(CRTSCTS)
        m_options.c_cflag |= CRTSCTS;
#  else
        m_options.c_cflag |= IHFLOW;
        m_options.c_cflag |= OHFLOW;
#  endif
      }
      else
      {
#  if defined(CRTSCTS)
        m_options.c_cflag &= ~CRTSCTS;
#  else
        m_options.c_cflag &= ~IHFLOW;
        m_options.c_cflag &= ~OHFLOW;
#  endif
      }

      if (tcsetattr(m_handle, TCSANOW, &(m_options)) == -1)
        throw Error("setting CTSRTS", System::Error::getLastMessage());
#elif defined(DUNE_OS_WINDOWS)
      if (enabled)
      {
        m_options.fOutxCtsFlow = TRUE;
        m_options.fRtsControl = RTS_CONTROL_HANDSHAKE;
      }
      else
      {
        m_options.fOutxCtsFlow = FALSE;
        m_options.fRtsControl = RTS_CONTROL_ENABLE;
      }

      if (!SetCommState(m_handle, &m_options))
        throw Error("setting CTSRTS", System::Error::getLastMessage());
#endif
    }

    size_t
    SerialPort::doWrite(const uint8_t* bfr, size_t size)
    {
#if defined(DUNE_OS_POSIX)
      return ::write(m_handle, bfr, size);

#elif defined(DUNE_OS_WINDOWS)
      OVERLAPPED ov;
      DWORD written_bytes;
      std::memset(&ov, 0, sizeof(ov));

      if (!WriteFile(m_handle, (LPCVOID)bfr, (DWORD)size, &written_bytes, &ov))
      {
        if (GetLastError() != ERROR_IO_PENDING || !GetOverlappedResult(m_handle, &ov, &written_bytes, TRUE))
          written_bytes = -1;
      }

      return (int)written_bytes;
#else
      return 0;
#endif
    }

    size_t
    SerialPort::doRead(uint8_t* bfr, size_t size)
    {
#if defined(DUNE_OS_POSIX)
      return ::read(m_handle, bfr, size);

#elif defined(DUNE_OS_WINDOWS)
      OVERLAPPED ov;
      DWORD read_bytes;

      std::memset(&ov, 0, sizeof(ov));

      if (!ReadFile(m_handle, bfr, size, &read_bytes, &ov))
      {
        if (GetLastError() != ERROR_IO_PENDING || !GetOverlappedResult(m_handle, &ov, &read_bytes, TRUE))
          read_bytes = -1;
      }
      return read_bytes;
#else
      return 0;
#endif
    }

    void
    SerialPort::doFlushInput(void)
    {
#if defined(DUNE_OS_POSIX)
      tcflush(m_handle, TCIFLUSH);
#elif defined(DUNE_OS_WINDOWS)
      PurgeComm(m_handle, PURGE_RXABORT | PURGE_RXCLEAR);
#endif
    }

    void
    SerialPort::doFlushOutput(void)
    {
#if defined(DUNE_OS_POSIX)
      tcflush(m_handle, TCOFLUSH);
#elif defined(DUNE_OS_WINDOWS)
      PurgeComm(m_handle, PURGE_TXABORT | PURGE_TXCLEAR);
#endif
    }

    void
    SerialPort::doFlush(void)
    {
#if defined(DUNE_OS_POSIX)
      tcflush(m_handle, TCIOFLUSH);
#elif defined(DUNE_OS_WINDOWS)
      PurgeComm(m_handle, PURGE_RXABORT | PURGE_RXCLEAR | PURGE_TXABORT | PURGE_TXCLEAR);
#endif
    }
  }
}
