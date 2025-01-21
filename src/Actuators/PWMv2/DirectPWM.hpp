#ifndef ACTUATORS_PWMV2_DIRECTPWM_HPP_INCLUDED_
#define ACTUATORS_PWMV2_DIRECTPWM_HPP_INCLUDED_

// DUNE headers.
#include <DUNE/DUNE.hpp>

#include <unistd.h>

namespace Actuators
{
  namespace PWMv2
  {
    using DUNE_NAMESPACES;

    //! Path to PWM interface
    static const char c_pwm_path[] = "/sys/class/pwm/pwmchip";

    enum FileFlags
    {
      F_ERROR = 0,
      F_EXISTS = 1 << 0,
      F_READ = 1 << 1,
      F_WRITE = 1 << 2,
      F_EXEC = 1 << 3,
    };

    class DirectPWM
    {
    public:
      //! Constructor
      //! @param task parent task object
      //! @param chip_id pwm chip id
      //! @param channel pwm channel
      //! @param period pwm initial period
      //! @param duty_cycle pwm initial duty cycle
      DirectPWM(DUNE::Tasks::Task* task, unsigned chip_id, int channel, uint32_t period = 202'000,
                uint32_t duty_cycle = 12'500):
        m_task(task),
        m_chip(chip_id),
        m_channel(channel)
      {
        std::string pchip_path = c_pwm_path + String::str(chip_id) + "/";
        std::string export_path = pchip_path + "export";

        writeChannel(export_path);

        m_path_enable = pchip_path + "pwm" + String::str(m_channel) + "/enable";
        m_path_period = pchip_path + "pwm" + String::str(m_channel) + "/period";
        m_path_duty_cycle = pchip_path + "pwm" + String::str(m_channel) + "/duty_cycle";

        // validate file path interface
        validateFile(m_path_enable.c_str(), F_EXISTS | F_READ | F_WRITE);
        validateFile(m_path_period.c_str(), F_EXISTS | F_READ | F_WRITE);
        validateFile(m_path_duty_cycle.c_str(), F_EXISTS | F_READ | F_WRITE);

        setPeriod(period);
        setDutyCycle(duty_cycle);
        enable();
      }

      ~DirectPWM(void)
      {
        disable();
        writeChannel(c_pwm_path + String::str(m_chip) + "/unexport");
      }

      void
      setDutyCycle(uint32_t us)
      {
        m_task->spew("set pwm%d channel %d duty cycle %u us", m_chip, m_channel, us);
        writeToFile(m_path_duty_cycle, String::str(us * 1000));
      }

      void
      setPeriod(uint32_t us)
      {
        m_task->spew("set pwm%d channel %d period %u us", m_chip, m_channel, us);
        writeToFile(m_path_period, String::str(us * 1000));
      }

      void
      enable(void)
      {
        writeToFile(m_path_enable, "1");
        m_task->spew("enable pwm%d channel %d", m_chip, m_channel);
      }

      void
      disable(void)
      {
        writeToFile(m_path_enable, "0");
        m_task->spew("disable pwm%d channel %d", m_chip, m_channel);
      }

    private:
      //! Write channel to path
      //! @param fd path to export pwm channel
      //! Used to export/unexport pwm channel to pwmchip
      void
      writeChannel(const std::string& fd)
      {
        // validate file path interface
        validateFile(fd.c_str(), F_EXISTS | F_WRITE);

        writeToFile(fd, String::str(m_channel));
      }

      //! Write value to file
      //! @param fd path to file
      //! @param value value to write
      void
      writeToFile(const std::string& fd, const std::string& val)
      {
        m_outputFile = fopen(fd.c_str(), "wb");
        if (m_outputFile == NULL)
          throw std::runtime_error("Failed to write to file " + fd);

        fwrite(val.c_str(), sizeof(char), val.length(), m_outputFile);
        fclose(m_outputFile);
      }

      //! Check if file exists
      //! @param path path to file
      //! @return true if file exists, false otherwise
      FileFlags
      checkFile(const char* path)
      {
        unsigned flag = F_ERROR;

        if (access(path, F_OK) == 0)
        {
          flag |= F_EXISTS;
          m_task->spew("File exist: %s", path);
        }

        if (access(path, R_OK) == 0)
        {
          flag |= F_READ;
          m_task->spew("File is readable: %s", path);
        }

        if (access(path, W_OK) == 0)
        {
          flag |= F_WRITE;
          m_task->spew("File is writable: %s", path);
        }

        if (access(path, X_OK) == 0)
        {
          flag |= F_EXEC;
          m_task->spew("File is executable: %s", path);
        }

        return (FileFlags)flag;
      }

      //! Validate file
      //! @param path path to file
      //! @param test_flag flag to test
      //! @throw runtime_error if test fails
      void
      validateFile(const char* path, unsigned test_flag)
      {
        FileFlags flag = checkFile(path);

        if ((test_flag & F_EXISTS) && !(flag & F_EXISTS))
          throw std::runtime_error("File does not exist: " + std::string(path));

        if ((test_flag & F_READ) && !(flag & F_READ))
          throw std::runtime_error("File is not readable: " + std::string(path));

        if ((test_flag & F_WRITE) && !(flag & F_WRITE))
          throw std::runtime_error("File is not writable: " + std::string(path));
      }

      //! Task Object
      DUNE::Tasks::Task* m_task;
      //! File Object
      FILE* m_outputFile;
      //! Enable PWM path
      std::string m_path_enable;
      //! Duty Cycle PWM path
      std::string m_path_duty_cycle;
      //! Period PWM path
      std::string m_path_period;
      //! PWM Chip ID
      unsigned m_chip;
      //! PWM Channel
      int m_channel;
    };
  }
}

#endif