#ifndef ACTUATORS_PWMV2_MAILBOX_HPP_
#define ACTUATORS_PWMV2_MAILBOX_HPP_

#include <fcntl.h>
#include <sys/mman.h>
#include <stdexcept>

#include <DUNE/DUNE.hpp>

namespace Actuators
{
  namespace PWMv2
  {
    // Import namespaces.
    using DUNE_NAMESPACES;

    const int c_GPIO_REGISTER_BASE  = 0x00200000;
    const int c_PERI_BASE           = 0x3F000000;
    const int c_GPIO_SET_OFFSET     = 0x1C;
    const int c_GPIO_CLR_OFFSET     = 0x28;

    class DirectGPIO: public Thread
    {
    public:
      DirectGPIO(DUNE::Tasks::Task* task, int gpio)
        : m_task(task), m_gpio(gpio), m_period(20'000), m_duty(0)
      {
        // map register
        int fd = open("/dev/mem", O_RDWR | O_SYNC);
        if(fd < 0)
          throw std::runtime_error("Failed to open /dev/mem");

        gpio_port = (uint32_t *)mmap(NULL, c_page_size, PROT_READ | PROT_WRITE, MAP_SHARED, fd, c_PERI_BASE+c_GPIO_REGISTER_BASE);
        if (gpio_port == MAP_FAILED)
          throw std::runtime_error("Failed addr mapping");
        
        close(fd);

        // set gpio to output
        initGPIO(gpio_port, m_gpio);
        
        m_set_reg = gpio_port + c_GPIO_SET_OFFSET/sizeof(uint32_t);
        m_clr_reg = gpio_port + c_GPIO_CLR_OFFSET/sizeof(uint32_t);
      }

      void
      setDutyCicle(int _duty)
      {
        if (_duty < 1'000)
          throw std::runtime_error("Invalid duty cicle below 1000us");
        if (_duty > 2'000)
          throw std::runtime_error("Invalid duty cicle above 2000us");
        
        m_update_duty = _duty;
      }

      void
      initGPIO(volatile uint32_t* port, int index)
      {
        *(port+(index/10)) &= ~(7 <<((index%10)*3));
        *(port+(index/10)) |= (1 << (index%10)*3);      
      }
      ~DirectGPIO()
      {}

    private:

      void
      run()
      {
        if(m_duty == 0)
          m_duty = 1'000;

        while (!isStopping())
        {
          m_duty = m_update_duty;
          *m_set_reg = (1 << m_gpio);
          Delay::waitUsec(m_duty);
          *m_clr_reg = (1 << m_gpio);
          Delay::waitUsec(m_period-m_duty);
        }
        
      }


      DUNE::Tasks::Task* m_task;
      int m_gpio;
      int m_period;
      int m_duty;
      int m_update_duty;
      volatile uint32_t* gpio_port;
      volatile uint32_t* m_set_reg;
      volatile uint32_t* m_clr_reg;
    };
  }
}





#endif