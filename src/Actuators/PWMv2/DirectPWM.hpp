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
    static const char c_pwm_path[] = "/sys/class/pwm/pwmchip0/pwm";

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
      DirectPWM(DUNE::Tasks::Task* task, int channel):
        m_task(task),
        m_channel(channel)
      {
        m_path_enable = c_pwm_path + String::str(m_channel) + "/enable";
        m_path_period = c_pwm_path + String::str(m_channel) + "/period";
        m_path_duty_cycle = c_pwm_path + String::str(m_channel) + "/duty_cycle";

        // validate file path interface
        validateFile(m_path_enable.c_str(), F_EXISTS | F_READ | F_WRITE);
        validateFile(m_path_period.c_str(), F_EXISTS | F_READ | F_WRITE);
        validateFile(m_path_duty_cycle.c_str(), F_EXISTS | F_READ | F_WRITE);

        char buff[2];
        m_outputFile = fopen(m_path_period.c_str(), "wb");
        if (m_outputFile == NULL)
          throw std::runtime_error("Failed to set period 20'000 in " + m_path_period);

        setPeriod(20'000);

        m_outputFile = fopen(m_path_enable.c_str(), "rb+");
        if (m_outputFile == NULL)
          throw std::runtime_error("Failed enable pwm " + m_path_enable);

        strcpy(buff, "1");
        fwrite(&buff, sizeof(char), 1, m_outputFile);
        fclose(m_outputFile);
      }

      ~DirectPWM(void)
      {
        char buff[2];
        m_outputFile = fopen(m_path_enable.c_str(), "rb+");
        if (m_outputFile == NULL)
          m_task->err("Failed disable pwm %s", m_path_enable.c_str());

        strcpy(buff, "0");
        fwrite(&buff, sizeof(char), 1, m_outputFile);
        fclose(m_outputFile);
      }

      void
      setDutyCycle(uint32_t _duty)
      {
        m_outputFile = fopen(m_path_duty_cycle.c_str(), "wb");
        if (m_outputFile == NULL)
        {
          m_task->err("Failed to set duty cycle PWM %d", m_channel);
          return;
        }

        char buf[64];

        _duty *= 1000;
        sprintf(buf, "%u", _duty);
        fwrite(&buf, sizeof(char), sizeof(buf), m_outputFile);
        fclose(m_outputFile);
      }

      void
      setPeriod(uint32_t _period)
      {
        m_outputFile = fopen(m_path_period.c_str(), "wb");
        if (m_outputFile == NULL)
        {
          m_task->err("Failed to period PWM %d", m_channel);
          return;
        }

        char buf[64];

        _period *= 1000;
        sprintf(buf, "%u", _period);
        fwrite(&buf, sizeof(char), sizeof(buf), m_outputFile);
        fclose(m_outputFile);
      }

    private:
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
      //! PWM Channel
      int m_channel;
    };
  }
}

#endif