#ifndef ACTUATORS_PWMV2_DIRECTGPIO_HPP_INCLUDED_
#define ACTUATORS_PWMV2_DIRECTGPIO_HPP_INCLUDED_

#include <fcntl.h>
#include <sys/mman.h>
#include <stdexcept>
#include "DMA.hpp"
#include "DirectPWM.hpp"
#include <DUNE/DUNE.hpp>

namespace Actuators
{
  namespace PWMv2
  {
    // Import namespaces.
    using DUNE_NAMESPACES;

    const unsigned int c_GPIO_SET_OFFSET        = 0x0000001C;
    const unsigned int c_GPIO_CLR_OFFSET        = 0x00000028;
    
    //TODO: Add Reading/Writing peri with Memory barrier
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

        gpio_base = (uint32_t *)mmap(NULL, c_PAGE_SIZE, PROT_READ | PROT_WRITE, MAP_SHARED, fd, c_PERI_BASE+c_GPIO_REGISTER_OFFSET);
        if (gpio_base == MAP_FAILED)
          throw std::runtime_error("Failed addr mapping");
        
        close(fd);

        // set gpio to output
        initGPIO(gpio_base, m_gpio);
        
        m_set_reg = gpio_base + c_GPIO_SET_OFFSET/sizeof(uint32_t);
        m_clr_reg = gpio_base + c_GPIO_CLR_OFFSET/sizeof(uint32_t);
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

      //select GPIO func
      void
      initGPIO(volatile uint32_t* port, int index)
      { 
        // function select 0
        // shift ((index%10)*3) bits
        // mask is always 7 -> 0b111
        // 001 -> set GPIO PIN output

        uint32_t shift = (index%10) * 3;
        uint32_t mask = 0b111 << shift;
        uint32_t mode = 0b001 << shift;

        *(port+(index/10)) &= ~mask;    //mask -> all register bits to 0
        *(port+(index/10)) |= mode;     //set output
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
      //GPIO
      volatile uint32_t* gpio_base;
      volatile uint32_t* m_set_reg;
      volatile uint32_t* m_clr_reg;      
    };
  }
}





#endif