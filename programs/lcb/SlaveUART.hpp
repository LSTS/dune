#ifndef MCI_SLAVE_UART_HPP_INCLUDED_
#define MCI_SLAVE_UART_HPP_INCLUDED_

// ISO C++ 98 headers.
#include <string>

namespace LCB
{
  static std::pair<std::string, unsigned> c_slave_uart_baud_pairs[] =
  {
#define UART_BAUD(id, str) std::pair<std::string, unsigned>(str, id),
#include "SlaveUARTBaud.def"
  };

  DUNE_DECLARE_STATIC_MAP(c_slave_uart_baud,
                          std::string, unsigned,
                          c_slave_uart_baud_pairs);

  static std::pair<std::string, unsigned> c_slave_uart_frame_pairs[] =
  {
#define UART_FRAME(id, str) std::pair<std::string, unsigned>(str, id),
#include "SlaveUARTFrame.def"
  };

  DUNE_DECLARE_STATIC_MAP(c_slave_uart_frame,
                          std::string, unsigned,
                          c_slave_uart_frame_pairs);

  class SlaveUART
  {
  public:
    static uint8_t
    getBaud(const std::string& str)
    {
      std::map<std::string, unsigned>::iterator itr = c_slave_uart_baud.find(str);
      if (itr == c_slave_uart_baud.end())
        return 0;

      return itr->second;
    }

    static uint8_t
    getFrame(const std::string& str)
    {
      std::map<std::string, unsigned>::iterator itr = c_slave_uart_frame.find(str);
      if (itr == c_slave_uart_frame.end())
        return 0;

      return itr->second;
    }
  };
}

#endif
