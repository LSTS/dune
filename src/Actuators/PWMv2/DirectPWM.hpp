#ifndef ACTUATORS_PWMV2_DIRECTPWM_HPP_INCLUDED_
#define ACTUATORS_PWMV2_DIRECTPWM_HPP_INCLUDED_

// DUNE headers.
#include <DUNE/DUNE.hpp>

namespace Actuators
{
  namespace PWMv2
  {
    using DUNE_NAMESPACES;
    class DirectPWM
    {
    public:

      DirectPWM(DUNE::Tasks::Task* task, int channel)
        :m_task(task),
         m_pwm(nullptr), 
         m_channel(channel) 
      {
        m_path_enable     = "/sys/class/pwm/pwmchip0/pwm" + String::str(m_channel) + "/enable";
        m_path_period     = "/sys/class/pwm/pwmchip0/pwm" + String::str(m_channel) + "/period";
        m_path_duty_cycle = "/sys/class/pwm/pwmchip0/pwm" + String::str(m_channel) + "/duty_cycle";

        m_outputFile = fopen("/sys/class/pwm/pwmchip0/export", "ab");
        if (m_outputFile == NULL)
        {
          m_task->err("Failed to export PWM %d", m_channel);
          exit(1);
        }
        
        char buff[2];
        sprintf(buff, "%u", m_channel);
        fwrite(&buff, sizeof(char), 2, m_outputFile);
        fclose(m_outputFile);

        m_outputFile = fopen(m_path_period.c_str(), "wb");
        if (m_outputFile == NULL)
          m_task->err("Failed to set period %d in %s", 20'000, m_path_period.c_str());
        
        setPeriod(20'000);

        m_outputFile = fopen(m_path_enable.c_str(), "rb+");
        if (m_outputFile == NULL)
          m_task->err("Failed enable pwm %s", m_path_enable.c_str());
        
        strcpy(buff,"1");
        fwrite(&buff, sizeof(char), 1, m_outputFile);
        fclose(m_outputFile);
      }

      ~DirectPWM()
      {
        m_outputFile = fopen("/sys/class/pwm/pwmchip0/unexport", "ab");
        if (m_outputFile == NULL)
          m_task->err("Failed to unexport PWM %d", m_channel);
        
        fwrite(&m_channel, sizeof(int), 1, m_outputFile);
        fclose(m_outputFile);
      }

      void
      setDutyCycle(uint32_t _duty)
      {
        m_outputFile = fopen(m_path_duty_cycle.c_str(), "wb");
        if (m_outputFile == NULL)
          m_task->err("Failed to set duty cycle PWM %d", m_channel);
        
        _duty *= 1000;
        sprintf(m_duty_cycle, "%u", _duty);
        fwrite(&m_duty_cycle, sizeof(char), sizeof(m_duty_cycle), m_outputFile);
        fclose(m_outputFile);
      }

      void
      setPeriod(uint32_t _period)
      {
        m_outputFile = fopen(m_path_period.c_str(), "wb");
        if (m_outputFile == NULL)
          m_task->err("Failed to period PWM %d", m_channel);
        
        _period *= 1000;
        sprintf(m_period, "%u", _period);
        fwrite(&m_period, sizeof(char), sizeof(m_period), m_outputFile);
        fclose(m_outputFile);
      }

    private:
      DUNE::Tasks::Task* m_task;
      DUNE::Hardware::PWM* m_pwm;
      FILE* m_outputFile;
      std::string m_path_enable;
      std::string m_path_duty_cycle;
      std::string m_path_period;
      int m_channel;
      char m_duty_cycle[64];
      char m_period[64];
    };
  }
} 




#endif


/* 
        FILE* tree = fopen("/proc/device-tree/soc/ranges", "rb");
        unsigned char buf[16];
        uint32_t base_address;
        uint32_t peri_size;
        if (fread(buf, 1, sizeof(buf), tree) >= 8)
        {
            base_address = (buf[4] << 24) |
              (buf[5] << 16) |
              (buf[6] << 8) |
              (buf[7] << 0);
            
            peri_size = (buf[8] << 24) |
              (buf[9] << 16) |
              (buf[10] << 8) |
              (buf[11] << 0);
            
            if (!base_address)
            {
                // looks like RPI 4 
                base_address = (buf[8] << 24) |
                      (buf[9] << 16) |
                      (buf[10] << 8) |
                      (buf[11] << 0);
                      
                peri_size = (buf[12] << 24) |
                (buf[13] << 16) |
                (buf[14] << 8) |
                (buf[15] << 0);
            }
            // check for valid known range formats
            if ((buf[0] == 0x7e) &&
                    (buf[1] == 0x00) &&
                    (buf[2] == 0x00) &&
                    (buf[3] == 0x00) &&
                    ((base_address == c_PERI_BASE)))
            {
                p_off = (off_t)base_address;
                p_size = (size_t)peri_size;
            }
        
        }
        else
          std::runtime_error("Failed to open tree"); 
	      fclose(tree); 
*/
