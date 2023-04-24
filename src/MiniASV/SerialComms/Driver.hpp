#ifndef DRIVER_HPP_INCLUDED_
#define DRIVER_HPP_INCLUDED_

#include <DUNE/DUNE.hpp>

namespace MiniASV
{
  namespace SerialComms
  {
    using DUNE_NAMESPACES;
    class DriverMiniASV
    {
    public:
      struct MiniASVData
      {
        std::string firmVersion;

        int pwmR = 0;
        int pwmL = 0;

        // bool state_new_data[1];
      };

      SerialPort *m_uart;
      Poll m_poll;

      DriverMiniASV(DUNE::Tasks::Task *task, SerialPort *uart, Poll poll) : m_task(task)
      {
        m_uart = uart;
        m_poll = poll;
        m_timeout_uart = 1.0f;
        resetStateNewData();
      }

      ~DriverMiniASV() {}

      void
      resetStateNewData(void)
      {
        /* for (uint8_t t = 0; t < 1; t++)
          m_miniASVData.state_new_data[t] = false; */
      }

      bool
      getVersionFirmware()
      {
        if (sendCommand("@VERS,*", "$VERS,"))
          return true;

        return false;
      }

      bool
      startAcquisition()
      {
        if (sendCommand("@START,*", "$RSP,ACK,*"))
          return true;

        return false;
      }

      bool
      stopAcquisition()
      {
        if (sendCommand("@STOP,*", "$STOP,*"))
          return true;

        return false;
      }

      bool
      haveNewData()
      {
        std::size_t rv = m_uart->readString(bfr, sizeof(bfr));

        if (rv == 0)
        {
          m_task->err(DTR("I/O error"));
          return false;
        }

        bfr[strlen(bfr) - 3] = '\0';

        char *param = std::strtok(bfr, ",");

        bool result = true;

        return result;
      }

      void
      sendCommandNoRsp(const char *cmd)
      {
        char cmdText[32];
        std::sprintf(cmdText, "%s%c\n", cmd, (Algorithms::XORChecksum::compute((uint8_t *)cmd, strlen(cmd) - 1) | 0x80));
        // std::sprintf(cmdText, "%s\n", cmd);
        m_task->inf("Command (no rsp): %s", cmdText);
        m_uart->writeString(cmdText);
      }

      bool
      sendCommand(const char *send, const char *reply)
      {
        char cmdText[32];
        char cmdReplyText[32];
        std::sprintf(cmdText, "%s%c\n", send, (Algorithms::XORChecksum::compute((uint8_t *)send, strlen(send) - 1) | 0x80));
        std::sprintf(cmdReplyText, "%s%c\n", reply, (Algorithms::XORChecksum::compute((uint8_t *)reply, strlen(reply) - 1) | 0x80));
        /* std::sprintf(cmdText, "%s\n", send);
        std::sprintf(cmdReplyText, "%s\n", reply); */
        char bfrUart[128];
        m_task->inf("Command: %s", cmdText);

        m_uart->writeString(cmdText);

        if (Poll::poll(*m_uart, m_timeout_uart))
        {
          m_uart->readString(bfrUart, sizeof(bfrUart));
          m_task->inf("Reply: %s", bfrUart);
          if (std::strcmp(bfrUart, cmdReplyText) == 0)
          {
            return true;
          }
          else if (std::strcmp(reply, "$VERS,") == 0)
          {
            char *vrs = std::strtok(bfrUart, ",");
            vrs = std::strtok(NULL, ",");
            m_miniASVData.firmVersion = vrs;
            return true;
          }
        }

        return false;
      }

      std::string
      getFirmwareVersion(void)
      {
        return m_miniASVData.firmVersion;
      }

      MiniASVData m_miniASVData;

    private:
      DUNE::Tasks::Task *m_task;
      float m_timeout_uart;
      char bfr[128];
    };

  }
}

#endif